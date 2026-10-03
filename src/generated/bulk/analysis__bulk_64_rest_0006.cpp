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
extern int _eh_vector_destructor_iterator_(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int _strdup(...);
extern __declspec(dllimport) int _time64(...);
extern int beginsWith(...);
extern __declspec(dllimport) int ceil(...);
extern int createActionContextForAction(...);
extern int createPropertyBag(...);
extern int createSCActionFilterer(...);
extern int createSCIWizardComponentBuilder(...);
extern int createSCRunAsyncIOOperationAction(...);
extern int createSCStringArray(...);
extern int createServiceAccountsByServiceFilter(...);
extern __declspec(dllimport) int fclose(...);
extern int format(...);
extern __declspec(dllimport) int fseek(...);
extern __declspec(dllimport) int ftell(...);
extern int getSCHousehold(...);
extern int getServiceManifestManager(...);
extern int getSingleton(...);
extern int hasDeveloperOption(...);
extern int int_addref(...);
extern int int_allocRep(...);
extern int int_release(...);
extern int isShuttingDown(...);
extern __declspec(dllimport) int memmove(...);
extern int op_eq(...);
extern int op_lt(...);
extern int operator_new(...);
extern __declspec(dllimport) int strncmp(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_1012d130(...);
extern int thunk_FUN_101aa0b0(...);
extern int thunk_FUN_101aa810(...);
extern int thunk_FUN_101aa9f0(...);
extern int thunk_FUN_101b94f0(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101ba300(...);
extern int thunk_FUN_101ba530(...);
extern int thunk_FUN_101badc0(...);
extern int thunk_FUN_101bb8a0(...);
extern int thunk_FUN_101bf1f0(...);
extern int thunk_FUN_101bf370(...);
extern int thunk_FUN_101c39c0(...);
extern int thunk_FUN_101c42f0(...);
extern int thunk_FUN_101c6ae0(...);
extern int thunk_FUN_101ca730(...);
extern int thunk_FUN_101ccbf0(...);
extern int thunk_FUN_101d7220(...);
extern int thunk_FUN_101da240(...);
extern int thunk_FUN_101da390(...);
extern int thunk_FUN_101f6530(...);
extern int thunk_FUN_101fca80(...);
extern int thunk_FUN_101ff410(...);
extern int thunk_FUN_101ff8b0(...);
extern int thunk_FUN_10200aa0(...);
extern int thunk_FUN_10200f40(...);
extern int thunk_FUN_10202e00(...);
extern int thunk_FUN_102037c0(...);
extern int thunk_FUN_10203d60(...);
extern int thunk_FUN_10204c50(...);
extern int thunk_FUN_10206850(...);
extern int thunk_FUN_10207fd0(...);
extern int thunk_FUN_1020b1d0(...);
extern int thunk_FUN_1020c230(...);
extern int thunk_FUN_10211630(...);
extern int thunk_FUN_102116c0(...);
extern int thunk_FUN_102116d0(...);
extern int thunk_FUN_102178d0(...);
extern int thunk_FUN_10219a00(...);
extern int thunk_FUN_1021adf0(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_10221570(...);
extern int thunk_FUN_10221850(...);
extern int thunk_FUN_102518f0(...);
extern int thunk_FUN_102636f0(...);
extern int thunk_FUN_102c2d20(...);
extern int thunk_FUN_102c2fc0(...);
extern int thunk_FUN_102c3040(...);
extern int thunk_FUN_102c3530(...);
extern int thunk_FUN_102caa30(...);
extern int thunk_FUN_102cb990(...);
extern int thunk_FUN_102cba40(...);
extern int thunk_FUN_102cc870(...);
extern int thunk_FUN_102cc960(...);
extern int thunk_FUN_102cf840(...);
extern int thunk_FUN_102e23b0(...);
extern int thunk_FUN_102e2b90(...);
extern int thunk_FUN_102e43c0(...);
extern int thunk_FUN_102e4570(...);
extern int thunk_FUN_102e46f0(...);
extern int thunk_FUN_102f8990(...);
extern int thunk_FUN_10372530(...);
extern int thunk_FUN_103a3e50(...);
extern int thunk_FUN_103a3ed0(...);
extern int thunk_FUN_103b70a0(...);
extern int thunk_FUN_103be5e0(...);
extern int thunk_FUN_103be9e0(...);
extern int thunk_FUN_103beae0(...);
extern int thunk_FUN_103d5ff0(...);
extern int thunk_FUN_103d60a0(...);
extern int thunk_FUN_103d65f0(...);
extern int thunk_FUN_103d6a60(...);
extern int thunk_FUN_103d6c80(...);
extern int thunk_FUN_103d6d80(...);
extern int thunk_FUN_103d6e00(...);
extern int thunk_FUN_103d6e70(...);
extern int thunk_FUN_104d6ff0(...);
extern int thunk_FUN_104d76e0(...);
extern int thunk_FUN_104d9cc0(...);
extern int thunk_FUN_104da560(...);
extern int thunk_FUN_104db5b0(...);
extern int thunk_FUN_104dcfc0(...);
extern int thunk_FUN_104ddf60(...);
extern int thunk_FUN_104ddf90(...);
extern int thunk_FUN_104ddfd0(...);
extern int thunk_FUN_104deb40(...);
extern int thunk_FUN_104dec20(...);
extern int thunk_FUN_104ea520(...);
extern int thunk_FUN_104ea590(...);
extern int thunk_FUN_104ed040(...);
extern int thunk_FUN_104ed250(...);
extern int thunk_FUN_104ed670(...);
extern int thunk_FUN_104edc80(...);
extern int thunk_FUN_104f8630(...);
extern int thunk_FUN_104f8a70(...);
extern int thunk_FUN_104f8c40(...);
extern int thunk_FUN_104f8cb0(...);
extern int thunk_FUN_104f8fb0(...);
extern int thunk_FUN_104f9920(...);
extern int thunk_FUN_104fa820(...);
extern int thunk_FUN_104fac60(...);
extern int thunk_FUN_104fb0d0(...);
extern int thunk_FUN_104fb240(...);
extern int thunk_FUN_104fc800(...);
extern int thunk_FUN_104fdf60(...);
extern int thunk_FUN_104fe480(...);
extern int thunk_FUN_104fe600(...);
extern int thunk_FUN_10500110(...);
extern int thunk_FUN_10500160(...);
extern int thunk_FUN_105009a0(...);
extern int thunk_FUN_10500cf0(...);
extern int thunk_FUN_105036b0(...);
extern int thunk_FUN_10503a10(...);
extern int thunk_FUN_10503af0(...);
extern int thunk_FUN_105061c0(...);
extern int thunk_FUN_10508f40(...);
extern int thunk_FUN_1050a540(...);
extern int thunk_FUN_1050af20(...);
extern int thunk_FUN_1050e710(...);
extern int thunk_FUN_1050f4c0(...);
extern int thunk_FUN_10511190(...);
extern int thunk_FUN_10511d60(...);
extern int thunk_FUN_10517060(...);
extern int thunk_FUN_10517080(...);
extern int thunk_FUN_10519c40(...);
extern int thunk_FUN_1051bbe0(...);
extern int thunk_FUN_1051c250(...);
extern int thunk_FUN_1051c3e0(...);
extern int thunk_FUN_1051c870(...);
extern int thunk_FUN_10520f40(...);
extern int thunk_FUN_10523b40(...);
extern int thunk_FUN_10524a20(...);
extern int thunk_FUN_10524d20(...);
extern int thunk_FUN_10524ee0(...);
extern int thunk_FUN_10524f60(...);
extern int thunk_FUN_10525750(...);
extern int thunk_FUN_105260a0(...);
extern int thunk_FUN_105263b0(...);
extern int thunk_FUN_10526830(...);
extern int thunk_FUN_105285a0(...);
extern int thunk_FUN_105288b0(...);
extern int thunk_FUN_1052c9c0(...);
extern int thunk_FUN_1052e8a0(...);
extern int thunk_FUN_10532350(...);
extern int thunk_FUN_10533e90(...);
extern int thunk_FUN_10534020(...);
extern int thunk_FUN_10535d90(...);
extern int thunk_FUN_10535e60(...);
extern int thunk_FUN_10535f10(...);
extern int thunk_FUN_10536410(...);
extern int thunk_FUN_1053d830(...);
extern int thunk_FUN_1053d930(...);
extern int thunk_FUN_1053d9b0(...);
extern int thunk_FUN_1053ee90(...);
extern int thunk_FUN_1053f430(...);
extern int thunk_FUN_1053f780(...);
extern int thunk_FUN_10541eb0(...);
extern int thunk_FUN_105441b0(...);
extern int thunk_FUN_10548a00(...);
extern int thunk_FUN_1054b9f0(...);
extern int thunk_FUN_1054da50(...);
extern int thunk_FUN_1054e110(...);
extern int thunk_FUN_1054e240(...);
extern int thunk_FUN_1054f140(...);
extern int thunk_FUN_1054f920(...);
extern int thunk_FUN_1054fdb0(...);
extern int thunk_FUN_1054ff50(...);
extern int thunk_FUN_10551cb0(...);
extern int thunk_FUN_105535a0(...);
extern int thunk_FUN_10555000(...);
extern int thunk_FUN_105551d0(...);
extern int thunk_FUN_10556310(...);
extern int thunk_FUN_10556960(...);
extern int thunk_FUN_10557e50(...);
extern int thunk_FUN_105640a0(...);
extern int thunk_FUN_10564f10(...);
extern int thunk_FUN_10579010(...);
extern int thunk_FUN_1057a0e0(...);
extern int thunk_FUN_1057b850(...);
extern int thunk_FUN_1057eb50(...);
extern int thunk_FUN_10585f50(...);
extern int thunk_FUN_10592970(...);
extern int thunk_FUN_10593850(...);
extern int thunk_FUN_10594e60(...);
extern int thunk_FUN_10596a60(...);
extern int thunk_FUN_1059b6d0(...);
extern int thunk_FUN_1059b760(...);
extern int thunk_FUN_1059bd30(...);
extern int thunk_FUN_1059c050(...);
extern int thunk_FUN_1059c6f0(...);
extern int thunk_FUN_1059cad0(...);
extern int thunk_FUN_1059d0b0(...);
extern int thunk_FUN_1059d800(...);
extern int thunk_FUN_1059d940(...);
extern int thunk_FUN_1059ee10(...);
extern int thunk_FUN_1059ef60(...);
extern int thunk_FUN_1059f110(...);
extern int thunk_FUN_1059f1a0(...);
extern int thunk_FUN_1059fc40(...);
extern int thunk_FUN_1059fce0(...);
extern int thunk_FUN_105a02e0(...);
extern int thunk_FUN_105a0380(...);
extern int thunk_FUN_105a0440(...);
extern int thunk_FUN_105a0530(...);
extern int thunk_FUN_105a0840(...);
extern int thunk_FUN_105a09b0(...);
extern int thunk_FUN_105a1330(...);
extern int thunk_FUN_105a1750(...);
extern int thunk_FUN_105a1c80(...);
extern int thunk_FUN_105a1d20(...);
extern int thunk_FUN_105a1f00(...);
extern int thunk_FUN_105a1f10(...);
extern int thunk_FUN_105a1f20(...);
extern int thunk_FUN_105a1f30(...);
extern int thunk_FUN_105a1f40(...);
extern int thunk_FUN_105a1fb0(...);
extern int thunk_FUN_105a24b0(...);
extern int thunk_FUN_105a4960(...);
extern int thunk_FUN_105a4a80(...);
extern int thunk_FUN_105a4bf0(...);
extern int thunk_FUN_105a50c0(...);
extern int thunk_FUN_105a5630(...);
extern int thunk_FUN_105a7950(...);
extern int thunk_FUN_105aa9d0(...);
extern int thunk_FUN_105aca80(...);
extern int thunk_FUN_105af680(...);
extern int thunk_FUN_10cf6c80(...);
extern int thunk_FUN_10cf71a0(...);
extern int thunk_FUN_10dae000(...);
extern int thunk_FUN_10db22c0(...);
extern int thunk_FUN_10dd1440(...);
extern int thunk_FUN_10dd3060(...);
extern int thunk_FUN_10dd4500(...);
extern int thunk_FUN_10dd5d50(...);
extern int thunk_FUN_10de8ec0(...);
extern int thunk_FUN_10deea50(...);
extern int thunk_FUN_10def0d0(...);
extern int thunk_FUN_10def210(...);
extern int thunk_FUN_10def450(...);
extern int thunk_FUN_10def490(...);
extern int thunk_FUN_10df6290(...);
extern int thunk_FUN_10df6360(...);
extern int thunk_FUN_10df7cf0(...);
extern int thunk_FUN_10dfd3a0(...);
extern int thunk_FUN_1106b190(...);
extern int thunk_FUN_1106b670(...);
extern int thunk_FUN_1106e690(...);
extern int thunk_FUN_1106f6e0(...);
extern int thunk_FUN_11081680(...);
extern int thunk_FUN_11081710(...);
extern int thunk_FUN_11081a40(...);
extern int thunk_FUN_11082860(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_11093530(...);
extern int thunk_FUN_110935f0(...);
extern int thunk_FUN_11093a20(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_1109af40(...);
extern int thunk_FUN_1109e300(...);
extern int thunk_FUN_1109f100(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_110a1010(...);
extern int thunk_FUN_110a10f0(...);
extern int thunk_FUN_110a48f0(...);
extern int thunk_FUN_110a5ba0(...);
extern int thunk_FUN_110a9ef0(...);
extern int thunk_FUN_110adac0(...);
extern int thunk_FUN_110b0460(...);
extern int thunk_FUN_110b3620(...);
extern int thunk_FUN_110bb700(...);
extern int thunk_FUN_110bf210(...);
extern int thunk_FUN_110c1f30(...);
extern int thunk_FUN_110c20d0(...);
extern int thunk_FUN_110c2c60(...);
extern int thunk_FUN_110cb9c0(...);
extern int thunk_FUN_110dbdf0(...);
extern int thunk_FUN_110e36b0(...);
extern int thunk_FUN_11128570(...);
extern int thunk_FUN_11128910(...);
extern int thunk_FUN_1113f860(...);
extern int thunk_FUN_11140fc0(...);
extern int thunk_FUN_11141590(...);
extern int thunk_FUN_11141c10(...);
extern int thunk_FUN_11147440(...);
extern int thunk_FUN_111474b0(...);
extern int thunk_FUN_11147a80(...);
extern int thunk_FUN_111a0720(...);
extern int thunk_FUN_111a2df0(...);
extern int thunk_FUN_111a36f0(...);
extern int thunk_FUN_111c06e0(...);
extern int thunk_FUN_111c0760(...);
extern int thunk_FUN_111cb020(...);
extern int thunk_FUN_111cfc30(...);
extern int thunk_FUN_111ddf90(...);
extern int thunk_FUN_111de8a0(...);
extern int thunk_FUN_111f1980(...);
extern int thunk_FUN_11202480(...);
extern int thunk_FUN_11202570(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11240650(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_11242a10(...);
extern int thunk_FUN_11244c70(...);
extern int thunk_FUN_11244ed0(...);
extern int thunk_FUN_11244fe0(...);
extern int thunk_FUN_1124a3d0(...);
extern int thunk_FUN_1124d790(...);
extern int thunk_FUN_1124d7e0(...);
extern int thunk_FUN_1124db80(...);
extern int thunk_FUN_1124f350(...);
extern int thunk_FUN_1124f3c0(...);
extern int thunk_FUN_1124ff50(...);
extern int thunk_FUN_1124ffa0(...);
extern int thunk_FUN_112501c0(...);
extern int thunk_FUN_112503c0(...);
extern int thunk_FUN_112504b0(...);
extern int thunk_FUN_11255220(...);
extern int thunk_FUN_11255560(...);
extern int thunk_FUN_112580d0(...);
extern int thunk_FUN_1125b4a0(...);
extern int thunk_FUN_1125bbd0(...);
extern int thunk_FUN_1125bca0(...);
extern int thunk_FUN_11261f10(...);
extern int thunk_FUN_1126f750(...);
extern int thunk_FUN_112740e0(...);
extern int thunk_FUN_112741b0(...);
extern int thunk_FUN_11274a10(...);
extern int thunk_FUN_11274b50(...);
extern int thunk_FUN_112816c0(...);
extern int thunk_FUN_112818d0(...);
extern int thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1145c250(...);
extern int thunk_FUN_1145cb70(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148ac80(...);
extern int thunk_FUN_1148b586(...);
extern int trim(...);
extern int DAT_00000004;
extern int DAT_0000000c;
extern int DAT_1186d2ee;
extern int DAT_11880fb0;
extern int DAT_11881128;
extern int DAT_11882ff0;
extern int DAT_1188465c;
extern int DAT_11887580;
extern int DAT_118a1488;
extern int DAT_118ab760;
extern int DAT_12126b84;
extern int DAT_121a1e20;
extern int g_lSCObjCount;
extern int ghidra_vftable_RAsyncDataSource;
extern int ghidra_vftable_RAsyncDataSourceListener;
extern int ghidra_vftable_RCPBrowseOperationCB;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_RDataSource;
extern int ghidra_vftable_RDownloadServiceManifestFilesAIOOp;
extern int ghidra_vftable_RITQHandler;
extern int ghidra_vftable_RLocationNameExtractorCB;
extern int ghidra_vftable_RProgressInfoForSCOp;
extern int ghidra_vftable_RSelectedBrowseItemsOpBase;
extern int ghidra_vftable_RSelectedItemsAddToQueueAtIdxOp;
extern int ghidra_vftable_RSelectedItemsPlayNextOp;
extern int ghidra_vftable_RSelectedItemsPlayNowOp;
extern int ghidra_vftable_RSelectedItemsReplaceQueueOp;
extern int ghidra_vftable_RServiceManifestCB;
extern int ghidra_vftable_RServiceManifestGetRequest;
extern int ghidra_vftable_RSvcManifestDownloadCompletionCB;
extern int ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp;
extern int ghidra_vftable_RUpnpAVTGetMediaInfoAIOOp;
extern int ghidra_vftable_RUpnpCDUpdateObjectAIOOp;
extern int ghidra_vftable_SCAddPlaylistAction;
extern int ghidra_vftable_SCAddQueueOp;
extern int ghidra_vftable_SCAddToQueueUIAction;
extern int ghidra_vftable_SCArray;
extern int ghidra_vftable_SCBrowseItemEventSink;
extern int ghidra_vftable_SCBrowseToServiceRootActionFactory;
extern int ghidra_vftable_SCCPInfoListDataSource;
extern int ghidra_vftable_SCCompoundAction;
extern int ghidra_vftable_SCContentProviderInfoViewDataSource;
extern int ghidra_vftable_SCContentProviderInfoViewHeaderDataSource;
extern int ghidra_vftable_SCContentRequestInfo;
extern int ghidra_vftable_SCContentSession;
extern int ghidra_vftable_SCContentSessionManager;
extern int ghidra_vftable_SCContentSessionSearch;
extern int ghidra_vftable_SCElapsedTimeMeasurement;
extern int ghidra_vftable_SCEmptyCPInfoListDataSource;
extern int ghidra_vftable_SCEnterZIPBrowseItem;
extern int ghidra_vftable_SCEphemeralBrowseItem;
extern int ghidra_vftable_SCFavoritesBrowseItem;
extern int ghidra_vftable_SCIActionDelegate;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCIOperationProgress;
extern int ghidra_vftable_SCIStackedItemImpl;
extern int ghidra_vftable_SCITearOffObjImpl;
extern int ghidra_vftable_SCInfoTextViewDataSource;
extern int ghidra_vftable_SCInfoViewBrowseDataSource;
extern int ghidra_vftable_SCInfoViewDynamicCPMenu;
extern int ghidra_vftable_SCInfoViewHeaderDataSource;
extern int ghidra_vftable_SCInfoViewHeaderItem;
extern int ghidra_vftable_SCInfoViewHelper;
extern int ghidra_vftable_SCInfoviewHeaderInfo;
extern int ghidra_vftable_SCMusicLibraryAlbumViewData;
extern int ghidra_vftable_SCMusicLibraryArtistInfoListData;
extern int ghidra_vftable_SCMusicLibraryArtistViewData;
extern int ghidra_vftable_SCMusicServiceAccountNeededState;
extern int ghidra_vftable_SCMusicServiceAppLinkFailState;
extern int ghidra_vftable_SCMusicServiceCallToActionAppLinkState;
extern int ghidra_vftable_SCMusicServiceCompleteState;
extern int ghidra_vftable_SCMusicServiceGetLinkCodeState;
extern int ghidra_vftable_SCMusicServiceGetShareUsageState;
extern int ghidra_vftable_SCMusicServiceIntroState;
extern int ghidra_vftable_SCMusicServiceLaunchAppLinkState;
extern int ghidra_vftable_SCMusicServiceLinkCodeState;
extern int ghidra_vftable_SCMusicServiceListState;
extern int ghidra_vftable_SCMusicServiceListWaitingState;
extern int ghidra_vftable_SCMusicServiceLoadMSInfoState;
extern int ghidra_vftable_SCMusicServiceLoginInput;
extern int ghidra_vftable_SCMusicServiceLoginPasswordState;
extern int ghidra_vftable_SCMusicServiceMultipleAccountsAddedState;
extern int ghidra_vftable_SCMusicServiceNicknameInput;
extern int ghidra_vftable_SCMusicServicePasswordInput;
extern int ghidra_vftable_SCMusicServicePasswordState;
extern int ghidra_vftable_SCMusicServiceResultErrorState;
extern int ghidra_vftable_SCMusicServiceResultState;
extern int ghidra_vftable_SCMusicServiceSetNicknameErrorState;
extern int ghidra_vftable_SCMusicServiceSetNicknameState;
extern int ghidra_vftable_SCMusicServiceSetShareUsageState;
extern int ghidra_vftable_SCMusicServiceWizard;
extern int ghidra_vftable_SCMusicServiceWorkingState;
extern int ghidra_vftable_SCOpAddFavorites;
extern int ghidra_vftable_SCOpDownloadServiceManifestFiles;
extern int ghidra_vftable_SCOpImpl;
extern int ghidra_vftable_SCOpLoadLogo;
extern int ghidra_vftable_SCOpLookupMetadata;
extern int ghidra_vftable_SCOpRef;
extern int ghidra_vftable_SCOpWithProgressInfo;
extern int ghidra_vftable_SCPlayMenuAddDescriptor;
extern int ghidra_vftable_SCPlayMenuPlayNextDescriptor;
extern int ghidra_vftable_SCPlayNextUIAction;
extern int ghidra_vftable_SCPlaylistsBrowseItem;
extern int ghidra_vftable_SCRadioBrowseDataSource;
extern int ghidra_vftable_SCRadioBrowseItem;
extern int ghidra_vftable_SCRadioPickCityBrowseItem;
extern int ghidra_vftable_SCRadioSetZIPAction;
extern int ghidra_vftable_SCRadioSetZIPDescriptor;
extern int ghidra_vftable_SCRemoveServiceAction;
extern int ghidra_vftable_SCRequireTokenActionFactory;
extern int ghidra_vftable_SCSelectedItemsAddToQueueAtIdxAction;
extern int ghidra_vftable_SCSelectedItemsPlayNextAction;
extern int ghidra_vftable_SCSelectedItemsPlayNowAction;
extern int ghidra_vftable_SCSelectedItemsReplaceQueueAction;
extern int ghidra_vftable_SCServiceDescriptorManagerEventSink;
extern int ghidra_vftable_SCServiceManifest;
extern int ghidra_vftable_SCServiceManifestManager;
extern int ghidra_vftable_SCSonosDynamicViewDataSource;
extern int ghidra_vftable_SCSwfObjHHListener;
extern int ghidra_vftable_SCTimerUser;
extern int ghidra_vftable_SCToggleScrobbleAction;
extern int ghidra_vftable_SCWizardState;
extern int ghidra_vftable_SCWizardStateFor;
extern int in_EAX;
extern int unaff_EBX;
extern undefined1 LAB_10024e4c[];
extern undefined1 LAB_104f7eee[];
extern undefined1 LAB_104fdbfe[];
extern undefined1 LAB_10501717[];
extern undefined1 LAB_10507b1b[];
extern undefined1 LAB_10513649[];
extern undefined1 LAB_10520e13[];
extern undefined1 LAB_1052227b[];
extern undefined1 LAB_10525896[];
extern undefined1 LAB_1052589c[];
extern undefined1 LAB_10530c26[];
extern undefined1 LAB_10537a60[];
extern undefined1 LAB_10540f3f[];
extern undefined1 LAB_1054143c[];
extern undefined1 LAB_105421ce[];
extern undefined1 LAB_1054bff1[];
extern undefined1 LAB_1054ce66[];
extern undefined1 LAB_1054dce6[];
extern undefined1 LAB_1054dcec[];
extern undefined1 LAB_10556f8f[];
extern undefined1 LAB_105806ad[];
extern undefined1 LAB_10595eb7[];
extern undefined1 LAB_1059d8b2[];
extern undefined1 LAB_1059e981[];
extern undefined1 LAB_1059e9c1[];
extern undefined1 LAB_105a04d3[];
extern undefined1 LAB_105a1431[];
extern undefined1 LAB_105a2d8a[];
extern undefined1 LAB_105a2f30[];
extern undefined1 LAB_105a313b[];
extern undefined1 LAB_11589567[];
extern undefined1 LAB_115896ce[];
extern undefined1 LAB_1158971e[];
extern undefined1 LAB_11589889[];
extern undefined1 LAB_11589950[];
extern undefined1 LAB_115899c0[];
extern undefined1 LAB_115899f0[];
extern undefined1 LAB_11589a20[];
extern undefined1 LAB_11589a50[];
extern undefined1 LAB_11589be0[];
extern undefined1 LAB_11589f00[];
extern undefined1 LAB_11589f30[];
extern undefined1 LAB_11589f60[];
extern undefined1 LAB_11589f90[];
extern undefined1 LAB_11589fc0[];
extern undefined1 LAB_11589ff0[];
extern undefined1 LAB_1158a020[];
extern undefined1 LAB_1158a0e0[];
extern undefined1 LAB_1158a170[];
extern undefined1 LAB_1158a1a0[];
extern undefined1 LAB_1158a1d0[];
extern undefined1 LAB_1158a240[];
extern undefined1 LAB_1158a2d0[];
extern undefined1 LAB_1158a4ad[];
extern undefined1 LAB_1158a5d0[];
extern undefined1 LAB_1158a715[];
extern undefined1 LAB_1158a96d[];
extern undefined1 LAB_1158a9b4[];
extern undefined1 LAB_1158aa20[];
extern undefined1 LAB_1158aa50[];
extern undefined1 LAB_1158aa80[];
extern undefined1 LAB_1158accd[];
extern undefined1 LAB_1158ad31[];
extern undefined1 LAB_1158ad7d[];
extern undefined1 LAB_1158adbd[];
extern undefined1 LAB_1158aea3[];
extern undefined1 LAB_1158b12d[];
extern undefined1 LAB_1158b183[];
extern undefined1 LAB_1158b1db[];
extern undefined1 LAB_1158b670[];
extern undefined1 LAB_1158b6a0[];
extern undefined1 LAB_1158b6d0[];
extern undefined1 LAB_1158b730[];
extern undefined1 LAB_1158b760[];
extern undefined1 LAB_1158b790[];
extern undefined1 LAB_1158b7c0[];
extern undefined1 LAB_1158b7f0[];
extern undefined1 LAB_1158b850[];
extern undefined1 LAB_1158b880[];
extern undefined1 LAB_1158b8e0[];
extern undefined1 LAB_1158b910[];
extern undefined1 LAB_1158b940[];
extern undefined1 LAB_1158b970[];
extern undefined1 LAB_1158b9a0[];
extern undefined1 LAB_1158b9d0[];
extern undefined1 LAB_1158ba60[];
extern undefined1 LAB_1158bac0[];
extern undefined1 LAB_1158baf0[];
extern undefined1 LAB_1158bb20[];
extern undefined1 LAB_1158bbfc[];
extern undefined1 LAB_1158c134[];
extern undefined1 LAB_1158c184[];
extern undefined1 LAB_1158c1bd[];
extern undefined1 LAB_1158c29d[];
extern undefined1 LAB_1158c2dd[];
extern undefined1 LAB_1158c37d[];
extern undefined1 LAB_1158c580[];
extern undefined1 LAB_1158c5cd[];
extern undefined1 LAB_1158c626[];
extern undefined1 LAB_1158c67d[];
extern undefined1 LAB_1158c8fd[];
extern undefined1 LAB_1158c99d[];
extern undefined1 LAB_1158ce5d[];
extern undefined1 LAB_1158cea5[];
extern undefined1 LAB_1158cee5[];
extern undefined1 LAB_1158cf1d[];
extern undefined1 LAB_1158d3a4[];
extern undefined1 LAB_1158d3f0[];
extern undefined1 LAB_1158d4b0[];
extern undefined1 LAB_1158d4e0[];
extern undefined1 LAB_1158d510[];
extern undefined1 LAB_1158d540[];
extern undefined1 LAB_1158d5d0[];
extern undefined1 LAB_1158d600[];
extern undefined1 LAB_1158d630[];
extern undefined1 LAB_1158d660[];
extern undefined1 LAB_1158d690[];
extern undefined1 LAB_1158d6c0[];
extern undefined1 LAB_1158d96d[];
extern undefined1 LAB_1158d9b4[];
extern undefined1 LAB_1158dd84[];
extern undefined1 LAB_1158ddd4[];
extern undefined1 LAB_1158de0d[];
extern undefined1 LAB_1158e08d[];
extern undefined1 LAB_1158e398[];
extern undefined1 LAB_1158e41d[];
extern undefined1 LAB_1158e62d[];
extern undefined1 LAB_1158e7dd[];
extern undefined1 LAB_1158e82d[];
extern undefined1 LAB_1158e8ec[];
extern undefined1 LAB_1158e95f[];
extern undefined1 LAB_1158e9bd[];
extern undefined1 LAB_1158ebdd[];
extern undefined1 LAB_1158ec10[];
extern undefined1 LAB_1158ed0d[];
extern undefined1 LAB_1158ed5c[];
extern undefined1 LAB_1158ed9d[];
extern undefined1 LAB_1158f045[];
extern undefined1 LAB_1158f07d[];
extern undefined1 LAB_1158f0bd[];
extern undefined1 LAB_1158f0fd[];
extern undefined1 LAB_1158f13d[];
extern undefined1 LAB_1158f4ab[];
extern undefined1 LAB_1158f4f5[];
extern undefined1 LAB_1158f535[];
extern undefined1 LAB_1158f5d5[];
extern undefined1 LAB_1158f600[];
extern undefined1 LAB_1158f630[];
extern undefined1 LAB_1158f660[];
extern undefined1 LAB_1158f690[];
extern undefined1 LAB_1158f6c0[];
extern undefined1 LAB_1158f6f0[];
extern undefined1 LAB_1158f720[];
extern undefined1 LAB_1158f750[];
extern undefined1 LAB_1158f780[];
extern undefined1 LAB_1158f7b0[];
extern undefined1 LAB_1158f810[];
extern undefined1 LAB_1158f840[];
extern undefined1 LAB_1158f870[];
extern undefined1 LAB_1158f8a0[];
extern undefined1 LAB_1158f8d0[];
extern undefined1 LAB_1158f900[];
extern undefined1 LAB_1158f930[];
extern undefined1 LAB_1158ff24[];
extern undefined1 LAB_1158ffa5[];
extern undefined1 LAB_11590025[];
extern undefined1 LAB_1159030e[];
extern undefined1 LAB_1159035e[];
extern undefined1 LAB_115903ae[];
extern undefined1 LAB_115903fe[];
extern undefined1 LAB_11590447[];
extern undefined1 LAB_11590497[];
extern undefined1 LAB_115904e7[];
extern undefined1 LAB_11590537[];
extern undefined1 LAB_1159068c[];
extern undefined1 LAB_115909ed[];
extern undefined1 LAB_11590a74[];
extern undefined1 LAB_11590b94[];
extern undefined1 LAB_11590bdd[];
extern undefined1 LAB_11590c25[];
extern undefined1 LAB_11590c6d[];
extern undefined1 LAB_11590cb5[];
extern undefined1 LAB_11590cf5[];
extern undefined1 LAB_11590dd8[];
extern undefined1 LAB_11590e1d[];
extern undefined1 LAB_11590f09[];
extern undefined1 LAB_11590fd8[];
extern undefined1 LAB_11591054[];
extern undefined1 LAB_11591980[];
extern undefined1 LAB_115919b0[];
extern undefined1 LAB_115919e0[];
extern undefined1 LAB_11591a10[];
extern undefined1 LAB_11591a40[];
extern undefined1 LAB_11591a70[];
extern undefined1 LAB_11591aa0[];
extern undefined1 LAB_11591ad0[];
extern undefined1 LAB_11591b00[];
extern undefined1 LAB_11591b30[];
extern undefined1 LAB_11591b60[];
extern undefined1 LAB_11591b90[];
extern undefined1 LAB_11591bc0[];
extern undefined1 LAB_11591bf0[];
extern undefined1 LAB_11591c20[];
extern undefined1 LAB_11591c50[];
extern undefined1 LAB_11591c80[];
extern undefined1 LAB_11591cb0[];
extern undefined1 LAB_11591ce0[];
extern undefined1 LAB_11591d10[];
extern undefined1 LAB_11591d40[];
extern undefined1 LAB_11591d70[];
extern undefined1 LAB_11591da0[];
extern undefined1 LAB_11591dd0[];
extern undefined1 LAB_11591e00[];
extern undefined1 LAB_11591e30[];
extern undefined1 LAB_11591e60[];
extern undefined1 LAB_11591e90[];
extern undefined1 LAB_11591ec0[];
extern undefined1 LAB_11591ef0[];
extern undefined1 LAB_11591f20[];
extern undefined1 LAB_11591f50[];
extern undefined1 LAB_11591f80[];
extern undefined1 LAB_11591fb0[];
extern undefined1 LAB_11591fe0[];
extern undefined1 LAB_11592010[];
extern undefined1 LAB_11592040[];
extern undefined1 LAB_11592070[];
extern undefined1 LAB_115920d0[];
extern undefined1 LAB_11592100[];
extern undefined1 LAB_11592130[];
extern undefined1 LAB_11592160[];
extern undefined1 LAB_11592190[];
extern undefined1 LAB_115921c0[];
extern undefined1 LAB_115921f0[];
extern undefined1 LAB_11592220[];
extern undefined1 LAB_11592250[];
extern undefined1 LAB_11592280[];
extern undefined1 LAB_115922b0[];
extern undefined1 LAB_115922e0[];
extern undefined1 LAB_11592310[];
extern undefined1 LAB_11592340[];
extern undefined1 LAB_11592370[];
extern undefined1 LAB_115923a0[];
extern undefined1 LAB_115923d0[];
extern undefined1 LAB_11592400[];
extern undefined1 LAB_11592430[];
extern undefined1 LAB_11592460[];
extern undefined1 LAB_11592955[];
extern undefined1 LAB_1159299d[];
extern undefined1 LAB_11592a75[];
extern undefined1 LAB_11592bf7[];
extern undefined1 LAB_11592e13[];
extern undefined1 LAB_11592e4d[];
extern undefined1 LAB_11592e94[];
extern undefined1 LAB_11592ed7[];
extern undefined1 LAB_11592f27[];
extern undefined1 LAB_11593123[];
extern undefined1 LAB_11593177[];
extern undefined1 LAB_115933f4[];
extern undefined1 LAB_11593434[];
extern undefined1 LAB_11593477[];
extern undefined1 LAB_11593505[];
extern undefined1 LAB_11593557[];
extern undefined1 LAB_11593846[];
extern undefined1 LAB_115939d3[];
extern undefined1 LAB_11593a8f[];
extern undefined1 LAB_11593b4d[];
extern undefined1 LAB_11593cad[];
extern undefined1 LAB_11593d5e[];
extern undefined1 LAB_11593dac[];
extern undefined1 LAB_11593e3c[];
extern undefined1 LAB_11593e8c[];
extern undefined1 LAB_11593ecd[];
extern undefined1 LAB_11593f0d[];
extern undefined1 LAB_11594210[];
extern undefined1 LAB_11594505[];
extern undefined1 LAB_115945a5[];
extern undefined1 LAB_115949cd[];
extern undefined1 LAB_11594a45[];
extern undefined1 LAB_11594ab4[];
extern undefined1 LAB_11594b84[];
extern undefined1 LAB_11594ee5[];
extern undefined1 LAB_11594fad[];
extern undefined1 LAB_1159515d[];
extern undefined1 LAB_115951cd[];
extern undefined1 LAB_11595265[];
extern undefined1 LAB_115952cd[];
extern undefined1 LAB_11595430[];
extern undefined1 LAB_115955e5[];
extern undefined1 LAB_11595895[];
extern undefined1 LAB_115958dd[];
extern undefined1 LAB_11595c55[];
extern undefined1 LAB_11595ca5[];
extern undefined1 LAB_11595cf5[];
extern undefined1 LAB_11595d6d[];
extern undefined1 LAB_11595ded[];
extern undefined1 LAB_11595e2d[];
extern undefined1 LAB_11595ecd[];
extern undefined1 LAB_11595f8d[];
extern undefined1 LAB_11596100[];
extern undefined1 LAB_11596130[];
extern undefined1 LAB_11596160[];
extern undefined1 LAB_11596215[];
extern undefined1 LAB_115964a5[];
extern undefined1 LAB_115964dd[];
extern undefined1 LAB_1159651d[];
extern undefined1 LAB_1159657d[];
extern undefined1 LAB_11596845[];
extern undefined1 LAB_11596ba5[];
extern undefined1 LAB_11596d4d[];
extern undefined1 LAB_11596dbd[];
extern undefined1 LAB_11596e15[];
extern undefined1 LAB_11596ef5[];
extern undefined1 LAB_11596fa5[];
extern undefined1 LAB_115970fd[];
extern undefined1 LAB_115973c4[];
extern undefined1 LAB_1159768d[];
extern undefined1 LAB_115976e5[];
extern undefined1 LAB_1159775d[];
extern undefined1 LAB_1159779d[];
extern undefined1 LAB_115977d0[];
extern undefined1 LAB_1159785d[];
extern undefined1 LAB_1159789d[];
extern undefined1 LAB_115978dd[];
extern undefined1 LAB_115979fe[];
extern undefined1 LAB_11597a3d[];
extern undefined1 LAB_11597b40[];
extern undefined1 LAB_11597b70[];
extern undefined1 LAB_11597ba0[];
extern undefined1 LAB_11597be4[];
extern undefined1 LAB_11597d70[];
extern undefined1 LAB_11597de0[];
extern undefined1 LAB_11597e10[];
extern undefined1 LAB_11597f30[];
extern undefined1 LAB_11597f6d[];
extern undefined1 LAB_11597fcb[];
extern undefined1 LAB_11598165[];
extern undefined1 LAB_11598270[];
extern undefined1 LAB_115982a0[];
extern undefined1 LAB_11598300[];
extern undefined1 LAB_11598360[];
extern undefined1 LAB_11598390[];
extern undefined1 LAB_115983c0[];
extern undefined1 LAB_115983f0[];
extern undefined1 LAB_11598420[];
extern undefined1 LAB_11598490[];
extern undefined1 LAB_115984f0[];
extern undefined1 LAB_11598520[];
extern undefined1 LAB_11598840[];
extern undefined1 LAB_11598895[];
extern undefined1 LAB_1159890d[];
extern undefined1 LAB_1159894d[];
extern undefined1 LAB_115989be[];
extern undefined1 LAB_11598abd[];
extern undefined1 LAB_11598b0e[];
extern undefined1 LAB_11598b4d[];
extern undefined1 LAB_115991ed[];
extern undefined1 LAB_115992e0[];
extern undefined1 LAB_1159931d[];
extern undefined1 LAB_115993cd[];
extern undefined1 LAB_115995f4[];
extern undefined1 LAB_1159994d[];
extern undefined1 LAB_11599bf0[];
extern undefined1 LAB_11599c20[];
extern undefined1 LAB_11599c50[];
extern undefined1 LAB_11599c80[];
extern undefined1 LAB_11599cb0[];
extern undefined1 LAB_11599ce0[];
extern undefined1 LAB_11599d10[];
extern undefined1 LAB_11599e30[];
extern undefined1 LAB_11599e60[];
extern undefined1 LAB_1159a010[];
extern undefined1 LAB_1159a7a5[];
extern undefined1 LAB_1159a983[];
extern undefined1 LAB_1159a9d5[];
extern undefined1 LAB_1159aa67[];
extern undefined1 LAB_1159abcc[];
extern undefined1 LAB_1159afe4[];
extern undefined1 LAB_1159b23c[];
extern undefined1 LAB_1159b440[];
extern undefined1 LAB_1159bbdd[];
extern undefined1 LAB_1159bc3b[];
extern undefined1 LAB_1159c09d[];
extern undefined1 LAB_1159c24b[];
extern undefined1 LAB_1159c31b[];
extern undefined1 LAB_1159c600[];
extern undefined1 LAB_1159c630[];
extern undefined1 LAB_1159c660[];
extern undefined1 LAB_1159c690[];
extern undefined1 LAB_1159c6c0[];
extern undefined1 LAB_1159c6f0[];
extern undefined1 LAB_1159c720[];
extern undefined1 LAB_1159c750[];
extern undefined1 LAB_1159c780[];
extern undefined1 LAB_1159c7b0[];
extern undefined1 LAB_1159c7e0[];
extern undefined1 LAB_1159c810[];
extern undefined1 LAB_1159c840[];
extern undefined1 LAB_1159c870[];
extern undefined1 LAB_1159c8a0[];
extern undefined1 LAB_1159c8d0[];
extern undefined1 LAB_1159c900[];
extern undefined1 LAB_1159c990[];
extern undefined1 LAB_1159cb70[];
extern undefined1 LAB_1159cc90[];
extern undefined1 LAB_1159ce40[];
extern undefined1 LAB_1159f26c[];
extern undefined1 LAB_1159f329[];
extern undefined1 LAB_1159f485[];
extern undefined1 LAB_1159fa3d[];
extern undefined1 LAB_1159fa7d[];
extern undefined1 LAB_1159fc2d[];
extern undefined1 LAB_115a0800[];
extern undefined1 LAB_115a0830[];
extern undefined1 LAB_115a0860[];
extern undefined1 LAB_115a08c0[];
extern undefined1 LAB_115a09e0[];
extern undefined1 LAB_115a0b60[];
extern undefined1 LAB_115a0c80[];
extern undefined1 LAB_115a108e[];
extern undefined1 LAB_115a14de[];
extern undefined1 LAB_115a1685[];
extern undefined1 LAB_115a19f9[];
extern undefined1 LAB_115a1c6f[];
extern undefined1 LAB_115a261d[];
extern undefined1 LAB_115a267b[];
extern undefined1 LAB_115a2a99[];
extern undefined1 LAB_115a2c0b[];
extern undefined1 LAB_115a2d10[];
extern undefined1 LAB_115a2d40[];
extern undefined1 LAB_115a2d70[];
extern undefined1 LAB_115a2da0[];
extern undefined1 LAB_115a391f[];
extern undefined1 LAB_115a3d54[];
extern undefined1 LAB_115a3f6d[];
extern undefined1 LAB_115a40ed[];
extern undefined1 LAB_115a48ed[];
extern undefined1 LAB_115a495d[];
extern undefined1 LAB_115a4a7d[];
extern undefined1 LAB_115a4ab0[];
extern undefined1 LAB_115a4aed[];
extern undefined1 LAB_115a4c64[];
extern undefined1 LAB_115a506d[];
extern undefined1 LAB_115a50fd[];
extern undefined1 LAB_115a5560[];
extern undefined1 LAB_115a616d[];
extern undefined1 LAB_115a62ed[];
extern undefined1 LAB_115a64dd[];
extern undefined1 LAB_115a665d[];
extern undefined1 LAB_115a683d[];
extern undefined1 LAB_115a687d[];
extern undefined1 LAB_115a6c3d[];
extern undefined1 LAB_115a6c87[];
extern undefined1 LAB_115a6d0d[];
extern undefined1 LAB_115a6d55[];
extern undefined1 LAB_115a6d8d[];
extern undefined1 LAB_115a6dcd[];
extern undefined1 LAB_115a6e58[];
extern undefined1 LAB_115a6ea8[];
extern undefined1 LAB_115a6f60[];
extern undefined1 LAB_115a6fa5[];
extern undefined1 LAB_115a70cb[];
extern undefined1 LAB_115a7195[];
extern undefined1 LAB_115a71e5[];
extern undefined1 LAB_115a7235[];
extern undefined1 LAB_115a74ed[];
extern undefined1 LAB_115a752d[];
extern undefined1 LAB_115a7acd[];
extern undefined1 LAB_115a7f4d[];
extern undefined1 LAB_115a7f8d[];
extern undefined1 LAB_115a8170[];
extern undefined1 LAB_115a81a0[];
extern undefined1 LAB_115a81d0[];
extern undefined1 LAB_115a8350[];
extern undefined1 LAB_115a8380[];
extern undefined1 LAB_115a83ed[];
extern int *PTR_s_chapter_audiobook_118ab758;
extern int *stack0x00000004;
extern int *stack0xffffff9c;
extern int *stack0xffffffa0;
extern int *stack0xffffffb4;
extern int *stack0xfffffffc;
extern void *ExceptionList;
namespace std {}
struct SCLibParameters { char _pad; SCLibParameters(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int hasDeveloperOption(A...); };
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int createActionContextForAction(A...); template<class... A> int createSCRunAsyncIOOperationAction(A...); template<class... A> int getSCHousehold(A...); template<class... A> int getServiceManifestManager(A...); template<class... A> int getSingleton(A...); template<class... A> int isShuttingDown(A...); };
struct SCRemoveServiceDescriptor { char _pad; SCRemoveServiceDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int getAction; };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int beginsWith(A...); template<class... A> int format(A...); template<class... A> int int_addref(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); template<class... A> int op_eq(A...); template<class... A> int op_lt(A...); template<class... A> int trim(A...); };
namespace std { template<class...> struct _Parallelism_allocator { char _pad; _Parallelism_allocator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct allocator { char _pad; allocator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct greater { char _pad; greater(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct priority_queue { char _pad; priority_queue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct vector { char _pad; vector(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
typedef void *CHN;
typedef void *CPUDN;
typedef void *DIDL;
typedef void *ID;
typedef void *LOCALMUSICBROWSE_CPUDN;
typedef void *OID;
typedef void *PL;
typedef void *SA_RINCON;
typedef void *WARNING;
typedef void *WOO_WOO;
typedef void *X;
struct AVTransport { char _pad; AVTransport(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AccountNickname { char _pad; AccountNickname(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AccountUDN { char _pad; AccountUDN(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AddMultipleURIsToQueue { char _pad; AddMultipleURIsToQueue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AddQueueMultiTracksOp { char _pad; AddQueueMultiTracksOp(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AddQueueTracksOp { char _pad; AddQueueTracksOp(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AddToQueue { char _pad; AddToQueue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Agent { char _pad; Agent(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AssignedObjectID { char _pad; AssignedObjectID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Base { char _pad; Base(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Browse { char _pad; Browse(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Cannot { char _pad; Cannot(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ContainerMetaData { char _pad; ContainerMetaData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ContainerURI { char _pad; ContainerURI(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Controller { char _pad; Controller(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct CurrentTagValue { char _pad; CurrentTagValue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct CurrentTrack { char _pad; CurrentTrack(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct CurrentURI { char _pad; CurrentURI(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct CurrentURIMetaData { char _pad; CurrentURIMetaData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DesiredFirstTrackNumberEnqueued { char _pad; DesiredFirstTrackNumberEnqueued(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DeviceAuthKey { char _pad; DeviceAuthKey(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DeviceAuthToken { char _pad; DeviceAuthToken(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Different { char _pad; Different(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct EnqueueAsNext { char _pad; EnqueueAsNext(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct EnqueuedURI { char _pad; EnqueuedURI(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct EnqueuedURIMetaData { char _pad; EnqueuedURIMetaData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct EnqueuedURIs { char _pad; EnqueuedURIs(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct EnqueuedURIsMetaData { char _pad; EnqueuedURIsMetaData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Error { char _pad; Error(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct FID_conflict__Tidy { char _pad; FID_conflict__Tidy(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Failed { char _pad; Failed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct FirstAccount { char _pad; FirstAccount(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct FirstTrackNumberEnqueued { char _pad; FirstTrackNumberEnqueued(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Function { char _pad; Function(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Get { char _pad; Get(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct GetMediaInfo { char _pad; GetMediaInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct HasAccount { char _pad; HasAccount(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct HiddenPreloadSvcs { char _pad; HiddenPreloadSvcs(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct InInitialSetup { char _pad; InInitialSetup(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Input { char _pad; Input(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct InstanceID { char _pad; InstanceID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Invalid { char _pad; Invalid(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct IsSubWizard { char _pad; IsSubWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Library { char _pad; Library(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Lite { char _pad; Lite(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct MSIServiceInfoDownloadErr { char _pad; MSIServiceInfoDownloadErr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Matches { char _pad; Matches(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct MediaDuration { char _pad; MediaDuration(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct MediaServer { char _pad; MediaServer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct MenuSelectedIndex { char _pad; MenuSelectedIndex(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Multiple { char _pad; Multiple(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct MusicServiceWizard { char _pad; MusicServiceWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Names { char _pad; Names(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct NewQueueLength { char _pad; NewQueueLength(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct NewTagValue { char _pad; NewTagValue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct NewUpdateID { char _pad; NewUpdateID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Next { char _pad; Next(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct NextURI { char _pad; NextURI(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct NextURIMetaData { char _pad; NextURIMetaData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct No { char _pad; No(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct NoReport { char _pad; NoReport(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct NoRunMode { char _pad; NoRunMode(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct NrTracks { char _pad; NrTracks(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct NumTracksAdded { char _pad; NumTracksAdded(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct NumberOfURIs { char _pad; NumberOfURIs(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ObjectID { char _pad; ObjectID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct OpErrorString { char _pad; OpErrorString(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct PlayMedium { char _pad; PlayMedium(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct PlayNext { char _pad; PlayNext(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct PlayNow { char _pad; PlayNow(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct PlaySourceOp { char _pad; PlaySourceOp(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Polling { char _pad; Polling(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Read { char _pad; Read(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RecordMedium { char _pad; RecordMedium(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Release { char _pad; Release(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RemovePromoted { char _pad; RemovePromoted(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Rename { char _pad; Rename(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ReplaceQueue { char _pad; ReplaceQueue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Report { char _pad; Report(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIAction { char _pad; SCIAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIActionCategoryDefault { char _pad; SCIActionCategoryDefault(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIBrowseDataSource { char _pad; SCIBrowseDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIBrowseGroupsInfo { char _pad; SCIBrowseGroupsInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIBrowseItem { char _pad; SCIBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIBrowseMetadata { char _pad; SCIBrowseMetadata(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIEventSink { char _pad; SCIEventSink(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIInfoViewHeaderDataSource { char _pad; SCIInfoViewHeaderDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIInfoViewHeaderItem { char _pad; SCIInfoViewHeaderItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIInput { char _pad; SCIInput(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIObj { char _pad; SCIObj(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIOp { char _pad; SCIOp(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIOpLoadLogo { char _pad; SCIOpLoadLogo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIOperationProgress { char _pad; SCIOperationProgress(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIServiceAppInteropResponseDelegate { char _pad; SCIServiceAppInteropResponseDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIServiceDescriptor { char _pad; SCIServiceDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIServiceDescriptorInternals { char _pad; SCIServiceDescriptorInternals(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIServiceDescriptorManager { char _pad; SCIServiceDescriptorManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIStringInput { char _pad; SCIStringInput(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIStringInputBase { char _pad; SCIStringInputBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIUrlSessionCallback { char _pad; SCIUrlSessionCallback(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIWizard { char _pad; SCIWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCRenamePlaylistAction { char _pad; SCRenamePlaylistAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Select { char _pad; Select(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Service { char _pad; Service(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ServiceOutageManager { char _pad; ServiceOutageManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Sonos { char _pad; Sonos(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Speed { char _pad; Speed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Starting { char _pad; Starting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct State { char _pad; State(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Studio { char _pad; Studio(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Title { char _pad; Title(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Transition { char _pad; Transition(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Transitioning { char _pad; Transitioning(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct UMTracking { char _pad; UMTracking(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct UpdateID { char _pad; UpdateID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct UpdateObject { char _pad; UpdateObject(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Usage { char _pad; Usage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct User { char _pad; User(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Visual { char _pad; Visual(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct With { char _pad; With(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Wizard { char _pad; Wizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WizardComponentKeyDisabled { char _pad; WizardComponentKeyDisabled(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WizardComponentKeyInput { char _pad; WizardComponentKeyInput(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WizardComponentKeyList { char _pad; WizardComponentKeyList(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WizardComponentKeySecondaryButton { char _pad; WizardComponentKeySecondaryButton(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WizardComponentKeyType { char _pad; WizardComponentKeyType(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WorkingState { char _pad; WorkingState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WriteStatus { char _pad; WriteStatus(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered_Bulk { char _pad; int __thiscall FUN_104f6be0(int param_2); undefined1 * __thiscall FUN_104f7610(undefined1 *param_2); undefined1 * __thiscall FUN_104f7700(undefined1 *param_2); int * __thiscall FUN_104f83d0(int *param_2); undefined4 __thiscall FUN_104f8a70(undefined4 param_2,int *param_3); void __thiscall FUN_104f8ba0(int *param_2,SCStr *param_3,uint param_4); int * __thiscall FUN_104fb610(int *param_2); undefined4 * __thiscall FUN_104fbb80(byte param_2); undefined4 * __thiscall FUN_104fbdf0(byte param_2); undefined4 * __thiscall FUN_104fbe80(byte param_2); void __thiscall FUN_104fc1b0(int param_2,int param_3,int param_4); float __thiscall FUN_104fc2f0(int param_2); void __thiscall FUN_104fce70(int param_2); void __thiscall FUN_104fcf60(int param_2); void __thiscall FUN_104fd0f0(int *param_2); void __thiscall FUN_104fe480(undefined4 *param_2,int *param_3); void __thiscall FUN_104fe590(int *param_2,SCStr *param_3); void __thiscall FUN_104fe9c0(int *param_2,undefined4 param_3); undefined4 __thiscall FUN_104ff310(int *param_2); undefined4 * __thiscall FUN_104ff7c0(undefined4 *param_2,SCStr *param_3); void __thiscall FUN_104ffc90(int *param_2); void __thiscall FUN_10500080(undefined4 param_2); undefined4 __thiscall FUN_10500160(undefined4 param_2,int *param_3); undefined4 * __thiscall FUN_10501180(undefined4 param_2); undefined4 * __thiscall FUN_10501200(undefined4 param_2); undefined4 * __thiscall FUN_10501300(undefined4 param_2); undefined4 * __thiscall FUN_105013a0(undefined4 param_2); undefined4 * __thiscall FUN_105015e0(int param_2,int *param_3); undefined4 * __thiscall FUN_10501ea0(undefined4 param_2); undefined4 * __thiscall FUN_10501f50(undefined4 param_2); undefined4 * __thiscall FUN_10502000(undefined4 param_2); int * __thiscall FUN_10504480(int param_2); int * __thiscall FUN_105044f0(int param_2); int __thiscall FUN_10504990(byte param_2); undefined4 * __thiscall FUN_10504ba0(byte param_2); undefined4 * __thiscall FUN_10504dd0(byte param_2); undefined4 * __thiscall FUN_10504e60(byte param_2); int __thiscall FUN_10504fb0(byte param_2); undefined4 * __thiscall FUN_105051d0(byte param_2); void __thiscall FUN_105055e0(undefined4 *param_2); undefined4 __thiscall FUN_105075c0(undefined4 param_2,undefined4 param_3); SCStr * __thiscall FUN_10507800(SCStr *param_2,undefined4 param_3); SCStr * __thiscall FUN_10507860(SCStr *param_2); SCStr * __thiscall FUN_105078b0(SCStr *param_2,int param_3); SCStr * __thiscall FUN_105087e0(SCStr *param_2,uint param_3); int * __thiscall FUN_10509510(int *param_2,uint param_3); void __thiscall FUN_10509680(SCStr *param_2); int * __thiscall FUN_105099e0(int *param_2,undefined4 param_3,int param_4); undefined4 * __thiscall FUN_1050aea0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1050af20(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1050b270(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1050b3a0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1050b420(undefined4 *param_2,SCStr *param_3); int __thiscall FUN_1050b730(int param_2); int * __thiscall FUN_1050e670(int *param_2); int * __thiscall FUN_1050e710(int *param_2); int * __thiscall FUN_1050e890(undefined4 *param_2); int * __thiscall FUN_1050ec80(int *param_2); int * __thiscall FUN_1050f4c0(int *param_2); undefined4 * __thiscall FUN_1050f680(undefined4 param_2,undefined4 param_3); int * __thiscall FUN_105106f0(int *param_2); int * __thiscall FUN_10510760(int *param_2); int * __thiscall FUN_105107d0(int *param_2); undefined4 * __thiscall FUN_10510980(byte param_2); undefined4 * __thiscall FUN_10510a90(byte param_2); undefined4 * __thiscall FUN_10510b70(byte param_2); void __thiscall FUN_105135e0(undefined4 param_2,SCStr *param_3); undefined4 __thiscall FUN_10513890(undefined4 param_2,undefined4 param_3); void __thiscall FUN_10513e90(undefined4 *param_2); undefined4 __thiscall FUN_10514060(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10514ac0(undefined4 *param_2,uint param_3); void __thiscall FUN_105150a0(SCStr *param_2); int * __thiscall FUN_10515e30(int *param_2); int * __thiscall FUN_105168f0(int *param_2); int * __thiscall FUN_10516d00(int *param_2); undefined4 * __thiscall FUN_10519b40(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_10519bc0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_10519c40(undefined4 *param_2,SCStr *param_3); int * __thiscall FUN_10519d60(int *param_2,SCStr *param_3); undefined4 * __thiscall FUN_10519fc0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1051a0f0(undefined4 *param_2,SCStr *param_3); int * __thiscall FUN_1051b4a0(undefined4 *param_2); undefined4 * __thiscall FUN_1051b5b0(int param_2); undefined4 * __thiscall FUN_1051b640(int param_2); undefined4 * __thiscall FUN_1051b6d0(int param_2); undefined4 * __thiscall FUN_1051b760(int param_2); undefined4 * __thiscall FUN_1051c250(int param_2,undefined4 param_3); undefined4 * __thiscall FUN_1051c3e0(int param_2); undefined4 * __thiscall FUN_1051c4c0(int param_2); undefined4 * __thiscall FUN_1051c6b0(int param_2); undefined4 * __thiscall FUN_1051d7c0(byte param_2); undefined4 * __thiscall FUN_1051d980(byte param_2); undefined4 * __thiscall FUN_1051db10(byte param_2); undefined4 * __thiscall FUN_1051dd50(byte param_2); undefined4 * __thiscall FUN_1051de10(byte param_2); undefined4 * __thiscall FUN_1051ded0(byte param_2); undefined4 * __thiscall FUN_1051dfb0(byte param_2); int * __thiscall FUN_1051f810(int *param_2,int *param_3); undefined4 * __thiscall FUN_1051fa80(undefined4 *param_2,int *param_3,void *param_4); undefined4 * __thiscall FUN_1051fc80(undefined4 *param_2,int *param_3); char * __thiscall FUN_10520a20(char *param_2); char * __thiscall FUN_10520ad0(char *param_2); char * __thiscall FUN_10520b80(char *param_2); char * __thiscall FUN_10520c30(char *param_2); undefined4 __thiscall FUN_10520df0(int param_2,short *param_3); void __thiscall FUN_10520ff0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6); void __thiscall FUN_10521240(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6); void __thiscall FUN_10521490(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6); void __thiscall FUN_105216d0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6); void __thiscall FUN_105220f0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,char param_7); void __thiscall FUN_10523c70(undefined1 param_2); undefined4 * __thiscall FUN_10524730(undefined4 *param_2,SCStr *param_3); int __thiscall FUN_105248a0(int param_2); int __thiscall FUN_10524920(int param_2); int __thiscall FUN_105249a0(int param_2); int __thiscall FUN_10524a20(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6); int * __thiscall FUN_10524d20(int *param_2); int * __thiscall FUN_10524da0(int *param_2); int * __thiscall FUN_10524ee0(int *param_2); int * __thiscall FUN_10524f60(int *param_2); int * __thiscall FUN_10525140(int *param_2); int * __thiscall FUN_10525270(undefined4 *param_2); int * __thiscall FUN_10525360(int *param_2); int * __thiscall FUN_105253d0(int *param_2); int * __thiscall FUN_10525600(undefined4 *param_2); undefined4 * __thiscall FUN_10525750(void *param_2,undefined4 *param_3); undefined4 * __thiscall FUN_10525fc0(undefined4 param_2); undefined4 * __thiscall FUN_105260a0(undefined4 param_2,undefined1 param_3); undefined4 * __thiscall FUN_105263b0(undefined4 param_2,undefined1 param_3); undefined4 * __thiscall FUN_10526770(undefined4 param_2); undefined4 * __thiscall FUN_10526830(undefined4 param_2); int * __thiscall FUN_1052a9a0(int *param_2); int * __thiscall FUN_1052aa70(int *param_2); undefined4 * __thiscall FUN_1052aef0(byte param_2); undefined4 * __thiscall FUN_1052aff0(byte param_2); undefined4 * __thiscall FUN_1052b080(byte param_2); undefined4 * __thiscall FUN_1052b150(byte param_2); undefined4 * __thiscall FUN_1052b3e0(byte param_2); undefined4 * __thiscall FUN_1052b4d0(byte param_2); undefined4 * __thiscall FUN_1052b5a0(byte param_2); undefined4 * __thiscall FUN_1052b690(byte param_2); undefined4 * __thiscall FUN_1052b790(byte param_2); undefined4 * __thiscall FUN_1052b8a0(byte param_2); undefined4 * __thiscall FUN_1052b960(byte param_2); undefined4 * __thiscall FUN_1052baa0(byte param_2); undefined4 * __thiscall FUN_1052bb50(byte param_2); undefined4 * __thiscall FUN_1052bc20(byte param_2); undefined4 * __thiscall FUN_1052bcd0(byte param_2); undefined4 * __thiscall FUN_1052bd80(byte param_2); undefined4 * __thiscall FUN_1052be20(byte param_2); undefined4 * __thiscall FUN_1052bf00(byte param_2); undefined4 * __thiscall FUN_1052c030(byte param_2); undefined4 * __thiscall FUN_1052c150(byte param_2); undefined4 * __thiscall FUN_1052c240(byte param_2); undefined4 * __thiscall FUN_1052c3e0(byte param_2); undefined4 * __thiscall FUN_1052c4f0(byte param_2); undefined4 * __thiscall FUN_1052c600(byte param_2); void __thiscall FUN_1052c780(int param_2,int param_3,int param_4); void __thiscall FUN_1052cd00(int param_2,short param_3); void __thiscall FUN_1052cd80(int param_2); void __thiscall FUN_1052d840(int *param_2); void __thiscall FUN_10532b90(undefined4 param_2,SCStr *param_3); char * __thiscall FUN_105331a0(char *param_2); void __thiscall FUN_105333d0(int *param_2); undefined4 * __thiscall FUN_10533930(undefined4 *param_2); undefined4 * __thiscall FUN_10535260(undefined4 *param_2); undefined4 * __thiscall FUN_10535510(undefined4 *param_2); undefined4 * __thiscall FUN_10535680(undefined4 *param_2); undefined4 * __thiscall FUN_105362b0(undefined4 *param_2,int param_3); undefined4 * __thiscall FUN_10536390(undefined4 *param_2,undefined4 param_3); undefined4 __thiscall FUN_10537800(undefined4 param_2); undefined4 * __thiscall FUN_10539620(undefined4 *param_2); int * __thiscall FUN_10539d40(int *param_2); undefined4 * __thiscall FUN_10539f40(undefined4 *param_2); undefined4 __thiscall FUN_1053b740(undefined4 param_2); undefined4 __thiscall FUN_1053bb90(undefined4 param_2); undefined4 __thiscall FUN_1053c920(undefined4 param_2); undefined4 * __thiscall FUN_1053cf30(undefined4 *param_2); undefined4 * __thiscall FUN_1053cfa0(undefined4 *param_2); void __thiscall FUN_1053e390(char param_2); void __thiscall FUN_10541d70(undefined4 param_2,undefined4 param_3); void __thiscall FUN_10542f80(undefined4 param_2); void __thiscall FUN_10543030(int param_2); void __thiscall FUN_10544100(int *param_2); void __thiscall FUN_105441b0(int *param_2); undefined4 * __thiscall FUN_10545310(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_10545390(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_10545430(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_105454e0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_10545590(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_10545640(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_105456c0(undefined4 *param_2,SCStr *param_3); void __thiscall FUN_1054aaa0(int *param_2); void __thiscall FUN_1054ac90(int *param_2); void __thiscall FUN_1054ae40(int param_2,int param_3); void __thiscall FUN_1054af90(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_1054b470(undefined4 param_2); void __thiscall FUN_1054b640(undefined4 param_2); void __thiscall FUN_1054b7c0(undefined4 param_2); void __thiscall FUN_1054b890(int param_2); void __thiscall FUN_1054b910(int param_2,int *param_3); undefined4 * __thiscall FUN_1054cb50(byte param_2); void __thiscall FUN_1054cd70(int *param_2); undefined4 * __thiscall FUN_1054d4c0(undefined4 *param_2,SCStr *param_3); int __thiscall FUN_1054d650(int param_2); undefined4 * __thiscall FUN_1054dba0(void *param_2,undefined4 *param_3); undefined4 __thiscall FUN_1054e110(undefined4 param_2,int *param_3); undefined4 * __thiscall FUN_1054eb80(int param_2); undefined4 * __thiscall FUN_1054ec10(int param_2); undefined4 * __thiscall FUN_1054f4e0(undefined4 param_2,undefined4 param_3,int *param_4); int * __thiscall FUN_10550320(int *param_2); int * __thiscall FUN_105503f0(int *param_2); undefined4 * __thiscall FUN_10550880(byte param_2); undefined4 * __thiscall FUN_105509c0(byte param_2); undefined4 * __thiscall FUN_10550b80(byte param_2); void __thiscall FUN_10550d50(int param_2,int param_3,int param_4); void __thiscall FUN_10550dc0(int param_2,int param_3,int param_4); void __thiscall FUN_105517b0(int param_2); void __thiscall FUN_105518d0(int *param_2); void __thiscall FUN_10551ef0(int *param_2,undefined4 param_3); void __thiscall FUN_10552ee0(undefined4 *param_2,int *param_3); void __thiscall FUN_10553000(int *param_2,SCStr *param_3); undefined4 __thiscall FUN_10553390(undefined4 param_2); void __thiscall FUN_10556830(undefined4 param_2,undefined4 param_3); int __thiscall FUN_10557950(int param_2); int * __thiscall FUN_1055a290(int *param_2); int * __thiscall FUN_1055a300(int *param_2); int * __thiscall FUN_1055a370(int *param_2); undefined4 * __thiscall FUN_1055aa60(byte param_2); undefined4 * __thiscall FUN_1055ac10(byte param_2); int * __thiscall FUN_1055d490(int *param_2); undefined4 * __thiscall FUN_1055d710(undefined4 *param_2,undefined4 param_3); undefined4 __thiscall FUN_1055f7d0(int *param_2); undefined4 * __thiscall FUN_10562c70(int param_2); undefined4 * __thiscall FUN_10562d30(int param_2); undefined4 * __thiscall FUN_10563140(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); undefined4 * __thiscall FUN_10563ec0(undefined4 *param_2,undefined4 *param_3); undefined4 * __thiscall FUN_10564600(undefined4 param_2,undefined4 param_3,int param_4); undefined4 * __thiscall FUN_10564870(undefined4 param_2,undefined4 param_3,int param_4); int * __thiscall FUN_10566bd0(int *param_2); undefined4 * __thiscall FUN_10567360(byte param_2); undefined4 * __thiscall FUN_10567b50(byte param_2); undefined4 * __thiscall FUN_10567ca0(byte param_2); undefined4 * __thiscall FUN_10567e80(byte param_2); void __thiscall FUN_1056b4a0(int *param_2,undefined4 param_3); undefined4 * __thiscall FUN_10573650(undefined4 *param_2,int *param_3); void __thiscall FUN_10574010(undefined4 *param_2,undefined4 param_3); void __thiscall FUN_105761a0(undefined4 param_2,undefined4 param_3); bool __thiscall FUN_10576a10(int *param_2); int __thiscall FUN_105791b0(undefined4 param_2); undefined4 __thiscall FUN_10579340(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_105793a0(undefined4 param_2,undefined4 param_3); int * __thiscall FUN_1057c010(int *param_2); undefined4 * __thiscall FUN_1057c410(byte param_2); undefined4 * __thiscall FUN_1057c9d0(byte param_2); int * __thiscall FUN_1057dec0(int *param_2,undefined4 param_3); int * __thiscall FUN_1057fb60(int *param_2,undefined4 param_3); /* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void __thiscall FUN_10580350(undefined4 *param_2); int * __thiscall FUN_10581410(int *param_2); undefined4 * __thiscall FUN_105823b0(undefined4 *param_2,uint param_3); int __thiscall FUN_10585de0(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_10585f50(undefined4 param_2); undefined4 * __thiscall FUN_10586420(int param_2); undefined4 * __thiscall FUN_10586510(int param_2); undefined4 * __thiscall FUN_105877c0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5); undefined4 * __thiscall FUN_10587d70(int param_2); int * __thiscall FUN_10588c80(int *param_2); int * __thiscall FUN_10588da0(int *param_2); void __thiscall FUN_10589b30(int *param_2); void __thiscall FUN_10589c90(int *param_2,undefined4 param_3); void __thiscall FUN_1058a0c0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6); void __thiscall FUN_1058d260(uint param_2); void __thiscall FUN_1058d390(uint param_2); undefined4 __thiscall FUN_1058ded0(undefined4 param_2,undefined4 param_3); /* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void __thiscall FUN_10590fb0(int param_2,int param_3); void __thiscall FUN_10592100(undefined4 param_2,undefined4 param_3); void __thiscall FUN_10592cf0(int param_2,undefined4 param_3); void __thiscall FUN_10592de0(int param_2); int * __thiscall FUN_10595790(int *param_2); void __thiscall FUN_10595dc0(uint param_2); void __thiscall FUN_10596780(int param_2); void __thiscall FUN_10596890(int *param_2); void __thiscall FUN_1059b670(undefined4 param_2); int * __thiscall FUN_1059b760(int *param_2,uint *param_3); int * __thiscall FUN_1059b890(int *param_2,uint *param_3); int __thiscall FUN_1059c220(uint *param_2); void __thiscall FUN_1059cd60(int param_2); void __thiscall FUN_1059ce50(int *param_2); void __thiscall FUN_1059d030(int *param_2,uint *param_3); bool __thiscall FUN_1059d120(uint param_2); void __thiscall FUN_1059d200(uint param_2); void __thiscall FUN_1059d940(uint param_2); undefined4 * __thiscall FUN_1059e4c0(undefined4 *param_2); undefined4 * __thiscall FUN_1059e580(undefined4 *param_2); void __thiscall FUN_1059e8c0(void *param_2,int param_3); void __thiscall FUN_1059ea10(int param_2,int param_3); undefined4 * __thiscall FUN_1059ee10(void *param_2,undefined4 *param_3); undefined4 * __thiscall FUN_1059ef60(void *param_2,undefined4 *param_3); void __thiscall FUN_1059f0b0(undefined4 param_2); int * __thiscall FUN_1059f1a0(int *param_2,int *param_3); int * __thiscall FUN_1059f300(int *param_2,int *param_3); int __thiscall FUN_1059fd80(int param_2,undefined4 param_3); int __thiscall FUN_1059fe30(int param_2,undefined4 param_3); int __thiscall FUN_105a09b0(int *param_2); int * __thiscall FUN_105a0b80(int *param_2); void __thiscall FUN_105a10f0(int param_2,int param_3,int param_4); void __thiscall FUN_105a1160(int param_2,int param_3,int param_4); void __thiscall FUN_105a1330(uint param_2); void __thiscall FUN_105a2450(int *param_2,int *param_3); undefined4 * __thiscall FUN_105a24b0(undefined4 *param_2); longlong __thiscall FUN_105a29f0(int param_2); void __thiscall FUN_105a3010(undefined4 param_2); undefined4 * __thiscall FUN_105a3d30(undefined4 param_2); int * __thiscall FUN_105a3df0(int *param_2); void __thiscall FUN_105a4960(int *param_2,undefined4 param_3); void __thiscall FUN_105a4fd0(undefined4 param_2); int * __thiscall FUN_105a5630(int *param_2,int *param_3); int * __thiscall FUN_105a5690(int *param_2,uint *param_3); int * __thiscall FUN_105a5b50(int *param_2,int *param_3); undefined4 * __thiscall FUN_105a7380(undefined4 param_2); int * __thiscall FUN_105a7470(int *param_2); int * __thiscall FUN_105a8b60(int *param_2); int __thiscall FUN_105a8f40(int *param_2); };
using namespace std;
void __fastcall FUN_104ef480(int param_1);
bool FUN_104f6770(void);
SCStr * FUN_104f6910(SCStr *param_1,int param_2);
undefined4 FUN_104f7dd0(int param_1,int param_2,int param_3);
void FUN_104f8630(undefined4 *param_1,undefined4 *param_2);
void FUN_104f8cb0(undefined4 param_1,undefined4 *param_2);
void FUN_104f8da0(undefined4 param_1,int param_2);
void FUN_104f8e20(undefined4 param_1,int param_2);
void FUN_104f9730(undefined4 param_1,undefined4 *param_2);
void FUN_104f9920(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __fastcall FUN_104fa850(undefined4 *param_1);
void __fastcall FUN_104fa8c0(undefined4 *param_1);
void __fastcall FUN_104fa930(undefined4 *param_1);
void __fastcall FUN_104fa9a0(undefined4 *param_1);
void __fastcall FUN_104faa10(undefined4 *param_1);
void __fastcall FUN_104faa80(undefined4 *param_1);
void __fastcall FUN_104faaf0(undefined4 *param_1);
void __fastcall FUN_104fac60(int param_1);
void __fastcall FUN_104face0(int *param_1);
void __fastcall FUN_104fae10(int param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_104fb060(int *param_1);
void __fastcall FUN_104fb0d0(int *param_1);
void __fastcall FUN_104fb150(undefined4 *param_1);
void __fastcall FUN_104fb240(undefined4 *param_1);
void __fastcall FUN_104fb350(undefined4 *param_1);
void __fastcall FUN_104fb3d0(undefined4 *param_1);
void __fastcall FUN_104fb4f0(int *param_1);
void __fastcall FUN_104fd000(float *param_1);
void __fastcall FUN_104fd160(int *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_104fd1f0(int *param_1);
void __fastcall FUN_104fd260(int *param_1);
undefined1 __stdcall FUN_104fd9b0(int *param_1);
void __stdcall FUN_104ffbd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void FUN_10500280(undefined4 param_1,int param_2);
void FUN_10500390(undefined4 param_1,int param_2);
void __fastcall FUN_105030f0(undefined4 *param_1);
void __fastcall FUN_10503160(undefined4 *param_1);
void __fastcall FUN_105031d0(undefined4 *param_1);
void __fastcall FUN_10503360(int param_1);
void __fastcall FUN_10503400(int param_1);
void __fastcall FUN_105034f0(int param_1);
void __fastcall FUN_105035b0(int param_1);
void __fastcall FUN_105036b0(undefined4 *param_1);
void __fastcall FUN_10503970(undefined4 *param_1);
void __fastcall FUN_10503a10(undefined4 *param_1);
void __fastcall FUN_10503bd0(int param_1);
void __fastcall FUN_10503c60(undefined4 *param_1);
void __fastcall FUN_10503dd0(undefined4 *param_1);
void __fastcall FUN_10503f10(undefined4 *param_1);
void __fastcall FUN_10504060(int param_1);
void __fastcall FUN_10504170(undefined4 *param_1);
undefined4 * FUN_10505a60(undefined4 *param_1);
undefined4 * __stdcall FUN_10507440(undefined4 *param_1);
void __stdcall FUN_10507530(undefined4 *param_1);
undefined4 * __stdcall FUN_10507c20(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4);
undefined4 FUN_10507cf0(undefined4 *param_1,int *param_2);
undefined4 __fastcall FUN_105082e0(int *param_1);
SCStr * FUN_105085d0(SCStr *param_1,int param_2);
SCStr * FUN_105088e0(SCStr *param_1,undefined4 param_2);
void FUN_10509440(undefined4 param_1,undefined4 param_2);
int __fastcall FUN_10509760(int param_1);
int __fastcall FUN_105097f0(int param_1);
undefined4 __fastcall FUN_10509860(int param_1);
int * __stdcall FUN_10509b50(int *param_1);
int __fastcall FUN_1050ac40(int param_1);
int __fastcall FUN_1050acb0(int param_1);
int __fastcall FUN_1050ad20(int param_1);
bool FUN_1050e5b0(void);
void __fastcall FUN_1050fd80(undefined4 *param_1);
void __fastcall FUN_1050fdf0(undefined4 *param_1);
void __fastcall FUN_1050fe60(undefined4 *param_1);
void __fastcall FUN_1050fed0(int *param_1);
void __fastcall FUN_1050fff0(int *param_1);
void __fastcall FUN_105100e0(undefined4 *param_1);
void __fastcall FUN_10510170(undefined4 *param_1);
void __fastcall FUN_10510610(undefined4 *param_1);
void __fastcall FUN_10511d60(int *param_1);
undefined4 * FUN_10512010(undefined4 *param_1,undefined4 param_2);
undefined4 * __stdcall FUN_10513710(undefined4 *param_1);
void __stdcall FUN_10513800(undefined4 *param_1);
int __fastcall FUN_10515170(int *param_1);
int * __stdcall FUN_10516a30(int *param_1);
void __fastcall FUN_10516eb0(int param_1);
void __fastcall FUN_10517080(int param_1);
void __fastcall FUN_105192b0(int param_1);
void __stdcall FUN_10519480(int param_1);
void __fastcall FUN_1051a500(int param_1);
void __fastcall FUN_1051c800(int *param_1);
void __fastcall FUN_1051c870(undefined4 *param_1);
void __fastcall FUN_1051cae0(undefined4 *param_1);
void __fastcall FUN_1051cc80(undefined4 *param_1);
void __fastcall FUN_1051ce00(undefined4 *param_1);
/* WARNING: Removing unreachable block (ram,0x1051d031) */ void __fastcall FUN_1051cf20(undefined4 *param_1);
void __fastcall FUN_1051d1b0(undefined4 *param_1);
void __fastcall FUN_1051d260(undefined4 *param_1);
void __fastcall FUN_1051d310(undefined4 *param_1);
void __fastcall FUN_1051d3d0(undefined4 *param_1);
void __fastcall FUN_10520f40(int param_1);
void __fastcall FUN_10523350(int param_1);
void __fastcall FUN_10523440(int param_1);
void __fastcall FUN_10523520(int param_1);
void __fastcall FUN_105235a0(int param_1);
undefined4 __fastcall FUN_10523900(int *param_1);
void __fastcall FUN_10524c00(int param_1);
void __fastcall FUN_10528dc0(undefined4 *param_1);
void __fastcall FUN_10528e50(undefined4 *param_1);
void __fastcall FUN_10528ec0(undefined4 *param_1);
void __fastcall FUN_10528f30(undefined4 *param_1);
void __fastcall FUN_10528fa0(undefined4 *param_1);
void __fastcall FUN_10529010(undefined4 *param_1);
void __fastcall FUN_10529080(undefined4 *param_1);
void __fastcall FUN_105290f0(int *param_1);
void __fastcall FUN_10529150(int *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_105291c0(int *param_1);
void __fastcall FUN_10529270(undefined4 *param_1);
void __fastcall FUN_10529350(undefined4 *param_1);
void __fastcall FUN_105293d0(undefined4 *param_1);
void __fastcall FUN_10529480(undefined4 *param_1);
/* WARNING: Removing unreachable block_10529540 (ram,0x10529612) */ void __fastcall FUN_10529540(undefined4 *param_1);
void __fastcall FUN_105296a0(undefined4 *param_1);
void __fastcall FUN_10529750(undefined4 *param_1);
void __fastcall FUN_10529800(undefined4 *param_1);
void __fastcall FUN_105298d0(undefined4 *param_1);
void __fastcall FUN_105299b0(undefined4 *param_1);
void __fastcall FUN_10529aa0(undefined4 *param_1);
void __fastcall FUN_10529b40(undefined4 *param_1);
void __fastcall FUN_10529c60(undefined4 *param_1);
void __fastcall FUN_10529cf0(undefined4 *param_1);
void __fastcall FUN_10529d80(undefined4 *param_1);
void __fastcall FUN_10529e10(undefined4 *param_1);
void __fastcall FUN_10529ea0(undefined4 *param_1);
void __fastcall FUN_10529f20(undefined4 *param_1);
void __fastcall FUN_10529fe0(undefined4 *param_1);
void __fastcall FUN_1052a0b0(undefined4 *param_1);
void __fastcall FUN_1052a1c0(undefined4 *param_1);
void __fastcall FUN_1052a260(undefined4 *param_1);
void __fastcall FUN_1052a500(undefined4 *param_1);
void __fastcall FUN_1052a690(undefined4 *param_1);
void __fastcall FUN_1052a780(undefined4 *param_1);
void __fastcall FUN_1052a830(undefined4 *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_1052c8a0(int *param_1);
void __fastcall FUN_1052d370(int param_1);
bool __fastcall FUN_1052dd40(int param_1);
undefined1 __fastcall FUN_1052dff0(int param_1);
undefined4 __fastcall FUN_1052e0d0(int param_1);
undefined4 __fastcall FUN_1052e640(int param_1);
void __fastcall FUN_1052e6b0(int param_1);
void __fastcall FUN_1052e7c0(int param_1);
void __fastcall FUN_1052e970(int param_1);
undefined4 __fastcall FUN_1052ef30(int param_1);
undefined4 * __fastcall FUN_1052fba0(int param_1);
undefined4 * __fastcall FUN_1052fd50(int *param_1);
undefined4 * __fastcall FUN_1052fea0(int param_1);
undefined4 * __fastcall FUN_1052ffa0(int param_1);
undefined4 __fastcall FUN_10530120(int param_1);
undefined4 * __fastcall FUN_105309a0(int param_1);
undefined4 * __fastcall FUN_10530b00(int param_1);
undefined4 __fastcall FUN_10531b70(int param_1);
undefined4 __fastcall FUN_10531c40(int param_1);
undefined4 * __fastcall FUN_10531cd0(int param_1);
int * __fastcall FUN_10531e50(int *param_1);
undefined4 * __fastcall FUN_10532170(int *param_1);
undefined4 __fastcall FUN_10532240(int param_1);
undefined4 __fastcall FUN_10533e90(int *param_1);
SCStr * FUN_105346e0(SCStr *param_1,int param_2);
undefined1 __fastcall FUN_10534750(int *param_1);
undefined4 __fastcall FUN_10534e70(int param_1);
int * FUN_10535050(int *param_1);
undefined4 __fastcall FUN_105357f0(int *param_1);
undefined1 __fastcall FUN_105359c0(int *param_1);
undefined4 __fastcall FUN_10535fd0(int param_1);
int __fastcall FUN_10536180(int param_1);
char __fastcall FUN_10536a30(int *param_1);
undefined4 __stdcall FUN_10537cd0(undefined4 param_1);
undefined4 __stdcall FUN_10539ba0(undefined4 param_1);
undefined4 __stdcall FUN_1053c4f0(undefined4 param_1);
undefined4 __stdcall FUN_1053cb50(undefined4 param_1);
uint FUN_1053d6f0(void);
undefined4 __fastcall FUN_1053d770(int param_1);
void __fastcall FUN_1053d830(int param_1);
void __fastcall FUN_1053d930(int param_1);
void __fastcall FUN_1053d9b0(int param_1);
undefined4 __fastcall FUN_1053e430(int param_1);
void __fastcall FUN_1053e4a0(int *param_1);
void FUN_1053f650(void);
void __fastcall FUN_1053f710(int param_1);
void __fastcall FUN_1053f780(int param_1);
uint __fastcall FUN_10540e80(int param_1);
undefined4 __fastcall FUN_10540ef0(int *param_1);
undefined1 __fastcall FUN_10541100(int *param_1);
undefined4 __fastcall FUN_105411c0(int *param_1);
bool __fastcall FUN_10541350(int param_1);
undefined4 __fastcall FUN_105415b0(int param_1);
undefined4 __fastcall FUN_10541610(int param_1);
bool __fastcall FUN_10541710(int param_1);
undefined4 __fastcall FUN_10541810(int *param_1);
undefined1 __fastcall FUN_105419a0(int *param_1);
undefined1 __fastcall FUN_10541ae0(int *param_1);
undefined1 __fastcall FUN_10541ba0(int *param_1);
undefined1 __fastcall FUN_10541eb0(int *param_1);
void __stdcall FUN_10542940(int param_1);
void __stdcall FUN_105429e0(int param_1);
void __stdcall FUN_10542a80(int param_1);
void __fastcall FUN_10542db0(int param_1);
void __fastcall FUN_10542ef0(int param_1);
void __fastcall FUN_10543f50(int param_1);
void __fastcall FUN_10544090(int *param_1);
undefined4 __fastcall FUN_10545060(int *param_1);
undefined4 __fastcall FUN_10546900(int param_1);
void __fastcall FUN_10546970(int *param_1);
void __fastcall FUN_105472f0(int param_1);
void FUN_10547590(void);
void __fastcall FUN_10547760(int param_1);
void __fastcall FUN_10547af0(int param_1);
void __fastcall FUN_10547c40(int param_1);
void __fastcall FUN_105485d0(int param_1);
void __fastcall FUN_10549800(int param_1);
void __fastcall FUN_1054a970(int *param_1);
void __fastcall FUN_1054abd0(int param_1);
void FUN_1054b2d0(int param_1,int param_2);
void __stdcall FUN_1054b400(int param_1,int param_2);
void __stdcall FUN_1054b530(int param_1,int param_2);
undefined1 __fastcall FUN_1054bf80(int param_1);
uint __fastcall FUN_1054c180(int *param_1);
void __fastcall FUN_1054c8d0(undefined4 *param_1);
void __fastcall FUN_1054c950(undefined4 *param_1);
void __fastcall FUN_1054ccb0(int param_1);
void FUN_1054da50(undefined4 *param_1,undefined4 *param_2);
void FUN_1054e2d0(undefined4 param_1,int param_2);
void FUN_1054e950(undefined4 param_1,undefined4 *param_2);
void __fastcall FUN_1054f920(undefined4 *param_1);
void __fastcall FUN_1054fa70(undefined4 *param_1);
void __fastcall FUN_1054fb90(int param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_1054fd40(int *param_1);
void __fastcall FUN_1054fdb0(int *param_1);
void __fastcall FUN_1054fe30(undefined4 *param_1);
void __fastcall FUN_1054ff50(undefined4 *param_1);
void __fastcall FUN_10550020(undefined4 *param_1);
void __fastcall FUN_10550100(undefined4 *param_1);
void __fastcall FUN_105501b0(undefined4 *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_10551940(int *param_1);
void __fastcall FUN_105519b0(int *param_1);
void __fastcall FUN_10551cd0(int param_1);
undefined1 __fastcall FUN_10553070(int param_1);
undefined1 __stdcall FUN_105531a0(uint param_1);
undefined4 __stdcall FUN_10553420(int *param_1,undefined4 param_2,undefined4 param_3);
undefined4 __stdcall FUN_105538d0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
char * FUN_10553a40(char *param_1,undefined4 param_2);
undefined4 __stdcall FUN_10553b20(undefined4 param_1);
void __fastcall FUN_10555000(int param_1);
void __fastcall FUN_105551d0(int param_1);
void __fastcall FUN_10556270(int param_1);
void __stdcall FUN_10556770(int param_1);
undefined1 __stdcall FUN_10556e10(undefined4 *param_1,undefined4 param_2,int *param_3);
void __fastcall FUN_10557c30(int param_1);
void __stdcall FUN_10557da0(undefined4 param_1);
undefined4 * __fastcall FUN_10558ca0(undefined4 *param_1);
void __fastcall FUN_105594c0(undefined4 *param_1);
void __fastcall FUN_10559530(undefined4 *param_1);
void __fastcall FUN_105595a0(undefined4 *param_1);
void __fastcall FUN_10559610(undefined4 *param_1);
void __fastcall FUN_10559680(undefined4 *param_1);
void __fastcall FUN_105596f0(undefined4 *param_1);
void __fastcall FUN_10559760(undefined4 *param_1);
void __fastcall FUN_10559c40(undefined4 *param_1);
void __fastcall FUN_10559da0(undefined4 *param_1);
undefined4 * __stdcall FUN_1055cbe0(undefined4 *param_1);
int * __stdcall FUN_1055d1a0(int *param_1);
undefined4 * __stdcall FUN_1055dd20(undefined4 *param_1);
undefined4 * __stdcall FUN_1055eb60(undefined4 *param_1);
void __fastcall FUN_10560310(undefined4 *param_1);
void __fastcall FUN_10565220(undefined4 *param_1);
void __fastcall FUN_10565290(undefined4 *param_1);
void __fastcall FUN_10565300(undefined4 *param_1);
void __fastcall FUN_10565370(undefined4 *param_1);
void __fastcall FUN_105653e0(undefined4 *param_1);
void __fastcall FUN_10565450(undefined4 *param_1);
void __fastcall FUN_105654c0(undefined4 *param_1);
void __fastcall FUN_10565530(undefined4 *param_1);
void __fastcall FUN_105655a0(undefined4 *param_1);
void __fastcall FUN_10565610(undefined4 *param_1);
void __fastcall FUN_10565680(undefined4 *param_1);
void __fastcall FUN_105656f0(undefined4 *param_1);
void __fastcall FUN_10565760(undefined4 *param_1);
void __fastcall FUN_105657d0(int *param_1);
void __fastcall FUN_10565830(int *param_1);
void __fastcall FUN_10565890(int *param_1);
void __fastcall FUN_105658f0(int *param_1);
void __fastcall FUN_10565c90(undefined4 *param_1);
void __fastcall FUN_105667f0(undefined4 *param_1);
void __fastcall FUN_1056b440(int param_1);
void __stdcall FUN_10573880(int *param_1,undefined4 param_2);
void __fastcall FUN_105760c0(int param_1);
void __fastcall FUN_1057b000(undefined4 *param_1);
void __fastcall FUN_1057b070(undefined4 *param_1);
void __fastcall FUN_1057b0e0(undefined4 *param_1);
void __fastcall FUN_1057b2c0(undefined4 *param_1);
void __fastcall FUN_1057b7d0(undefined4 *param_1);
void __fastcall FUN_105855b0(int *param_1);
void __fastcall FUN_10585690(int param_1);
void __fastcall FUN_105881e0(undefined4 *param_1);
void __fastcall FUN_10588250(undefined4 *param_1);
void __fastcall FUN_105882c0(undefined4 *param_1);
void __fastcall FUN_10588330(undefined4 *param_1);
void __fastcall FUN_10589c30(int param_1);
uint __fastcall FUN_1058a680(int param_1);
void FUN_1058bf80(undefined4 *param_1,undefined4 *param_2);
undefined4 * __stdcall FUN_1058d160(undefined4 *param_1);
undefined4 FUN_1058e840(void);
void __fastcall FUN_105918c0(int param_1);
void __fastcall FUN_10591eb0(int param_1);
void __stdcall FUN_10592000(int param_1);
undefined4 __fastcall FUN_10592730(int *param_1);
int __stdcall FUN_10594090(int param_1,int param_2,int param_3);
int FUN_10594210(int param_1,int param_2,int param_3);
void __fastcall FUN_105951f0(undefined4 *param_1);
void __fastcall FUN_10595470(int *param_1);
void __fastcall FUN_10596900(int *param_1);
void __fastcall FUN_105969a0(int *param_1);
void __stdcall FUN_10597140(int param_1,int param_2);
void __fastcall FUN_1059a040(int param_1);
void __fastcall FUN_1059a850(int param_1);
void __stdcall FUN_1059d0b0(int param_1);
void __fastcall FUN_1059d800(int param_1);
int __stdcall FUN_1059f4a0(int param_1,int param_2,int param_3);
int FUN_1059f5e0(int param_1,int param_2,int param_3);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_105a0190(int *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_105a0200(int *param_1);
void __fastcall FUN_105a0270(int *param_1);
void __fastcall FUN_105a02e0(int *param_1);
void __fastcall FUN_105a0380(int *param_1);
void __fastcall FUN_105a0440(int *param_1);
void __fastcall FUN_105a0530(int param_1);
void __fastcall FUN_105a06a0(int param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_105a1b30(int *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_105a1ba0(int *param_1);
void __fastcall FUN_105a1c10(int *param_1);
void __fastcall FUN_105a1c80(int *param_1);
void __fastcall FUN_105a1d20(int *param_1);
void * FUN_105a1f40(uint param_1);
void * FUN_105a1fb0(uint param_1);
void * FUN_105a2110(uint param_1);
void __stdcall FUN_105a23d0(int param_1,int param_2);
bool __fastcall FUN_105a2b50(int param_1);
void __stdcall FUN_105a2cd0(undefined4 param_1);
void FUN_105a2e60(undefined4 param_1);
undefined1 FUN_105a30b0(void);
uint __fastcall FUN_105a31b0(int param_1);
void __fastcall FUN_105a7c60(undefined4 *param_1);
void __fastcall FUN_105a7cd0(undefined4 *param_1);
void __fastcall FUN_105a7d40(int *param_1);
void __fastcall FUN_105a8430(int param_1);
void __fastcall FUN_105a84e0(undefined4 *param_1);
// Reference entry 104ef480; body size 153 bytes.
#line 1 "ENTRY_104ef480"

void __fastcall FUN_104ef480(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(byte *)(param_1 + 0x3c) & 1) != 0) {
    if (**(int **)(param_1 + 0x20) == 0) {
      iVar2 = (int)(**(int **)(param_1 + 0x2c) + **(int **)(param_1 + 0x1c));
    }
    else {
      iVar2 = (int)(**(int **)(param_1 + 0x30) + **(int **)(param_1 + 0x20));
    }
    iVar1 = (int)(**(int **)(param_1 + 0xc));
    uVar3 = (uint)(iVar2 - iVar1);
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
  **(undefined4 **)(param_1 + 0xc) = 0;
  **(undefined4 **)(param_1 + 0x1c) = 0;
  **(undefined4 **)(param_1 + 0x2c) = 0;
  **(undefined4 **)(param_1 + 0x10) = 0;
  **(undefined4 **)(param_1 + 0x20) = 0;
  **(undefined4 **)(param_1 + 0x30) = 0;
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}


// Reference entry 104f6770; body size 304 bytes.
#line 1 "ENTRY_104f6770"

bool FUN_104f6770(void)

{
 try {
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  bool bVar6;
  int *local_24;
  SCStr local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);



  cVar1 = (char)(thunk_FUN_1106e690(&local_14,&local_1c));
  if (cVar1 != '\0') {
    iVar3 = (int)(thunk_FUN_110828b0(uVar2));
    if (iVar3 != 0) {
      piVar4 = (int *)((int *)thunk_FUN_11093a20(local_1c));
      if (piVar4 != (int *)0x0) {
        local_14 = (uint)((**(code **)(*piVar4 + 0x58))());
        local_14 = (uint)(local_14 >> 8);
        bVar6 = (bool)(local_14 == 0x12f);
        ((SCStr *)(local_20))->int_allocRep("custom_sd_as_sonos_radio");


        puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_102518f0(&local_24));


        cVar1 = (char)((**(code **)(*(int *)*puVar5 + 0x18))(local_20));
        if ((cVar1 != '\0') && ((local_14 == 0xff || (local_14 - 0xf0 < 0xe)))) {
          bVar6 = (bool)(true);
        }


        if (local_24 != (int *)0x0) {
          (**(code **)(*local_24 + 8))();
        }

        ((SCStr *)(local_20))->int_release();

        return (bool)(bVar6);
      }
    }
  }

  return (bool)(false);

 } catch (...) { }
}


// Reference entry 104f6910; body size 80 bytes.
#line 1 "ENTRY_104f6910"

SCStr * FUN_104f6910(SCStr *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (int)(0);
  uVar1 = (uint)(0);
  do {
    if (param_2 == *(int *)((int)&DAT_118ab760 + uVar1)) {
      ((SCStr *)(param_1))->int_allocRep((&PTR_s_chapter_audiobook_118ab758)[iVar2 * 5]);
      return (SCStr *)(param_1);
    }
    uVar1 = (uint)(uVar1 + 0x14);
    iVar2 = (int)(iVar2 + 1);
  } while (uVar1 < 0x1b8);
  ((SCStr *)(param_1))->int_allocRep("item");
  return (SCStr *)(param_1);
}


// Reference entry 104f6be0; body size 80 bytes.
#line 1 "ENTRY_104f6be0"

int __thiscall Recovered_Bulk::FUN_104f6be0(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(**(uint **)(param_1 + 0x1c));
  if (((uVar1 != 0) && (**(uint **)(param_1 + 0xc) < uVar1)) &&
     ((param_2 == -1 ||
      (((char)param_2 == *(char *)(uVar1 - 1) || ((*(byte *)(param_1 + 0x3c) & 2) == 0)))))) {
    **(int **)(param_1 + 0x2c) = **(int **)(param_1 + 0x2c) + 1;
    **(int **)(param_1 + 0x1c) = **(int **)(param_1 + 0x1c) + -1;
    if (param_2 == -1) {
      param_2 = (int)(0);
    }
    else {
      *(char *)**(undefined4 **)(param_1 + 0x1c) = (char)param_2;
    }
    return (int)(param_2);
  }
  return (int)(-1);
}


// Reference entry 104f7610; body size 180 bytes.
#line 1 "ENTRY_104f7610"

undefined1 * __thiscall Recovered_Bulk::FUN_104f7610(undefined1 *param_2)
{
  int param_1 = (int )this;
 try {
  void *pvVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *param_2 = (undefined1)(0);

  if (((*(uint *)(param_1 + 0x40) & 2) == 0) && (uVar2 = **(uint **)(param_1 + 0x24), uVar2 != 0)) {
    if (uVar2 < *(uint *)(param_1 + 0x3c)) {
      uVar2 = (uint)(*(uint *)(param_1 + 0x3c));
    }
    iVar4 = (int)(**(int **)(param_1 + 0x14));
    iVar3 = (int)(uVar2 - iVar4);
  }
  else {
    if ((*(uint *)(param_1 + 0x40) & 4) != 0) {

      return (undefined1 *)(param_2);
    }
    if (**(int **)(param_1 + 0x20) == 0) {

      return (undefined1 *)(param_2);
    }
    iVar4 = (int)(**(int **)(param_1 + 0x10));
    iVar3 = (int)((**(int **)(param_1 + 0x30) - iVar4) + **(int **)(param_1 + 0x20));
  }
  thunk_FUN_1012d130(iVar4,iVar3);

  return (undefined1 *)(param_2);

 } catch (...) { }
}


// Reference entry 104f7700; body size 175 bytes.
#line 1 "ENTRY_104f7700"

undefined1 * __thiscall Recovered_Bulk::FUN_104f7700(undefined1 *param_2)
{
  int param_1 = (int )this;
 try {
  void *pvVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *param_2 = (undefined1)(0);

  if (((*(uint *)(param_1 + 0x3c) & 2) == 0) && (uVar2 = **(uint **)(param_1 + 0x20), uVar2 != 0)) {
    if (uVar2 < *(uint *)(param_1 + 0x38)) {
      uVar2 = (uint)(*(uint *)(param_1 + 0x38));
    }
    iVar4 = (int)(**(int **)(param_1 + 0x10));
    iVar3 = (int)(uVar2 - iVar4);
  }
  else {
    if ((*(uint *)(param_1 + 0x3c) & 4) != 0) {

      return (undefined1 *)(param_2);
    }
    if (**(int **)(param_1 + 0x1c) == 0) {

      return (undefined1 *)(param_2);
    }
    iVar4 = (int)(**(int **)(param_1 + 0xc));
    iVar3 = (int)((**(int **)(param_1 + 0x2c) - iVar4) + **(int **)(param_1 + 0x1c));
  }
  thunk_FUN_1012d130(iVar4,iVar3);

  return (undefined1 *)(param_2);

 } catch (...) { }
}


// Reference entry 104f7dd0; body size 445 bytes.
#line 1 "ENTRY_104f7dd0"

undefined4 FUN_104f7dd0(int param_1,int param_2,int param_3)

{
 try {
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  int *local_24;
  int *local_20;
  SCStr local_1c [4];
  SCStr local_18 [4];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  bVar6 = (bool)(param_1 == 0x12f);

  ((SCStr *)(local_18))->int_allocRep("custom_sd_as_sonos_radio");


  puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_102518f0(&local_20,uVar2));


  cVar1 = (char)((**(code **)(*(int *)*puVar3 + 0x18))(local_18));
  if ((cVar1 != '\0') && ((param_1 == 0xff || (param_1 - 0xf0U < 0xe)))) {
    bVar6 = (bool)(true);
  }


  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))();
  }
  uVar2 = (uint)(0);

  ((SCStr *)(local_18))->int_release();

  if (bVar6) {
    ((SCStr *)(local_1c))->int_allocRep("sonos_radio_browse_hero_view");


    puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_102518f0(&local_24));
    uVar2 = (uint)(0xc);


    cVar1 = (char)((**(code **)(*(int *)*puVar3 + 0x18))(local_1c));
    bVar6 = (bool)(true);
    if (cVar1 != '\0') goto LAB_104f7eee;
  }
  bVar6 = (bool)(false);
LAB_104f7eee:
  if ((uVar2 & 8) != 0) {
    uVar2 = (uint)(uVar2 & 0xfffffff7);

    local_14 = (uint)(uVar2);
    if (local_24 != (int *)0x0) {
      (**(code **)(*local_24 + 8))();
    }
  }
  if ((uVar2 & 4) != 0) {

    ((SCStr *)(local_1c))->int_release();
  }
  if (bVar6) {
    if ((param_3 != 0x14) && (param_3 != 0x15)) {

      return (undefined4)(1);
    }

    return (undefined4)(0);
  }
  if ((param_1 == 0xc) || (param_1 == 9)) {
    uVar5 = (undefined4)(1);
  }
  else {
    uVar5 = (undefined4)(0);
  }
  uVar4 = (undefined4)(0);
  if (param_2 == 1) {
    uVar4 = (undefined4)(uVar5);
  }

  return (undefined4)(uVar4);

 } catch (...) { }
}


// Reference entry 104f83d0; body size 91 bytes.
#line 1 "ENTRY_104f83d0"

int * __thiscall Recovered_Bulk::FUN_104f83d0(int *param_2)
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
    return (int *)(param_1);
  }
  param_1[1] = 0;
  return (int *)(param_1);
}


// Reference entry 104f8630; body size 111 bytes.
#line 1 "ENTRY_104f8630"

void FUN_104f8630(undefined4 *param_1,undefined4 *param_2)

{
 try {
  int *piVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);
  ppvVar2 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar2, param_1 != (undefined4 *)(param_2)); param_1 = param_1 + 2) {
    piVar1 = (int *)((int *)param_1[1]);

    if (piVar1 != (int *)0x0) {
      *param_1 = (undefined4)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))(uVar3);
    }

  }

  return;

 } catch (...) { }
}


// Reference entry 104f8a70; body size 171 bytes.
#line 1 "ENTRY_104f8a70"

undefined4 __thiscall Recovered_Bulk::FUN_104f8a70(undefined4 param_2,int *param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  char cVar1;
  int *piVar2;
  int *piVar3;
  void **ppvVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar5 = (uint)(DAT_12126b84);
  cVar1 = (char)(*(char *)((int)param_3 + 0xd));
  ppvVar4 = (void **)(&local_10);

  while (ExceptionList = ppvVar4, cVar1 == '\0') {
    thunk_FUN_104f8a70(param_2,param_3[2]);
    piVar2 = (int *)((int *)*param_3);
    piVar3 = (int *)((int *)param_3[6]);

    if (piVar3 != (int *)0x0) {
      param_3[5] = 0;
      param_3[6] = 0;
      (**(code **)(*piVar3 + 8))(uVar5);
    }

    ((SCStr *)((SCStr *)(param_3 + 4)))->int_release();
    param_3[4] = 0;

    thunk_FUN_1148a50e(param_3,0x1c);

    param_3 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 104f8ba0; body size 124 bytes.
#line 1 "ENTRY_104f8ba0"

void __thiscall Recovered_Bulk::FUN_104f8ba0(int *param_2,SCStr *param_3,uint param_4)
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
  bVar4 = (bool)(((SCStr *)(param_3))->op_eq((SCStr *)(piVar1 + 2)));
  while( true ) {
    if (bVar4) {
      iVar3 = (int)(*piVar1);
      param_2[1] = (int)piVar1;
      *param_2 = (int)(iVar3);
      return;
    }
    if (piVar1 == (int *)(piVar2)) break;
    piVar1 = (int *)((int *)piVar1[1]);
    bVar4 = (bool)(((SCStr *)(param_3))->op_eq((SCStr *)(piVar1 + 2)));
  }
  *param_2 = (int)((int)piVar1);
  param_2[1] = 0;
  return;
}


// Reference entry 104f8cb0; body size 130 bytes.
#line 1 "ENTRY_104f8cb0"

void FUN_104f8cb0(undefined4 param_1,undefined4 *param_2)

{
 try {
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  *(undefined4 *)param_2[1] = 0;
  puVar2 = (undefined4 *)((undefined4 *)*param_2);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)*puVar2);

    ((SCStr *)((SCStr *)(puVar2 + 2)))->int_release();
    puVar2[2] = 0;

    thunk_FUN_1148a50e(puVar2,0x10,uVar3);
    puVar2 = (undefined4 *)(puVar1);
  }

  return;

 } catch (...) { }
}


// Reference entry 104f8da0; body size 89 bytes.
#line 1 "ENTRY_104f8da0"

void FUN_104f8da0(undefined4 param_1,int param_2)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_2 + 8)))->int_release();
  *(undefined4 *)(param_2 + 8) = 0;
  thunk_FUN_1148a50e(param_2,0x10,uVar1);

  return;

 } catch (...) { }
}


// Reference entry 104f8e20; body size 122 bytes.
#line 1 "ENTRY_104f8e20"

void FUN_104f8e20(undefined4 param_1,int param_2)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_2 + 0x18));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  ((SCStr *)((SCStr *)(param_2 + 0x10)))->int_release();
  *(undefined4 *)(param_2 + 0x10) = 0;
  thunk_FUN_1148a50e(param_2,0x1c);

  return;

 } catch (...) { }
}


// Reference entry 104f9730; body size 84 bytes.
#line 1 "ENTRY_104f9730"

void FUN_104f9730(undefined4 param_1,undefined4 *param_2)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_2[1]);
  if (piVar1 != (int *)0x0) {
    *param_2 = (undefined4)(0);
    param_2[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 104f9920; body size 95 bytes.
#line 1 "ENTRY_104f9920"

void FUN_104f9920(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 104fa850; body size 76 bytes.
#line 1 "ENTRY_104fa850"

void __fastcall FUN_104fa850(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 104fa8c0; body size 76 bytes.
#line 1 "ENTRY_104fa8c0"

void __fastcall FUN_104fa8c0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 104fa930; body size 76 bytes.
#line 1 "ENTRY_104fa930"

void __fastcall FUN_104fa930(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 104fa9a0; body size 76 bytes.
#line 1 "ENTRY_104fa9a0"

void __fastcall FUN_104fa9a0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 104faa10; body size 76 bytes.
#line 1 "ENTRY_104faa10"

void __fastcall FUN_104faa10(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 104faa80; body size 76 bytes.
#line 1 "ENTRY_104faa80"

void __fastcall FUN_104faa80(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 104faaf0; body size 76 bytes.
#line 1 "ENTRY_104faaf0"

void __fastcall FUN_104faaf0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 104fac60; body size 99 bytes.
#line 1 "ENTRY_104fac60"

void __fastcall FUN_104fac60(int param_1)

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
  thunk_FUN_104f8cb0(puVar4,*puVar4);
  thunk_FUN_1148a50e(*puVar4,0x10);
  return;
}


// Reference entry 104face0; body size 77 bytes.
#line 1 "ENTRY_104face0"

void __fastcall FUN_104face0(int *param_1)

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


// Reference entry 104fae10; body size 135 bytes.
#line 1 "ENTRY_104fae10"

void __fastcall FUN_104fae10(int param_1)

{
 try {
  int iVar1;
  int *piVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  iVar1 = (int)(*(int *)(param_1 + 4));
  if (iVar1 != 0) {
    piVar2 = (int *)(*(int **)(iVar1 + 0x18));

    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(iVar1 + 0x14) = 0;
      *(undefined4 *)(iVar1 + 0x18) = 0;
      (**(code **)(*piVar2 + 8))(uVar3);
    }

    ((SCStr *)((SCStr *)(iVar1 + 0x10)))->int_release();
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }

  return;

 } catch (...) { }
}


// Reference entry 104fb060; body size 81 bytes.
#line 1 "ENTRY_104fb060"

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

void __fastcall FID_conflict__Tidy_104fb060(int *param_1)

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


// Reference entry 104fb0d0; body size 96 bytes.
#line 1 "ENTRY_104fb0d0"

void __fastcall FUN_104fb0d0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_104f8630(*param_1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
    uVar3 = (uint)(param_1[2] - iVar1 & 0xfffffff8);
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


// Reference entry 104fb150; body size 181 bytes.
#line 1 "ENTRY_104fb150"

void __fastcall FUN_104fb150(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCContentRequestInfo);
  param_1[7] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0(uVar2);
  piVar1 = (int *)((int *)param_1[6]);

  if (piVar1 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[4]);

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))();
  }

  ((SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 104fb240; body size 185 bytes.
#line 1 "ENTRY_104fb240"

void __fastcall FUN_104fb240(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCContentSession);
  param_1[2] = (uint)&ghidra_vftable_SCContentSession;
  param_1[3] = (uint)&ghidra_vftable_SCContentSession;
  if ((int *)param_1[8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[8] + 0x1c))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[8]);

  if (piVar1 != (int *)0x0) {
    param_1[8] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_104fb0d0();

  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  param_1[4] = 0;
  param_1[3] = (uint)&ghidra_vftable_RControlAIOOpCB;
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (uint)&ghidra_vftable_RITQHandler;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 104fb350; body size 92 bytes.
#line 1 "ENTRY_104fb350"

void __fastcall FUN_104fb350(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCContentSessionManager);
  param_1[2] = (uint)&ghidra_vftable_SCContentSessionManager;
  DAT_121a1e20 = (int)(0);
  thunk_FUN_104fac60();
  thunk_FUN_104f8a70(param_1 + 4,*(undefined4 *)(param_1[4] + 4));
  thunk_FUN_1148a50e(param_1[4],0x1c);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (uint)&ghidra_vftable_SCSwfObjHHListener;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 104fb3d0; body size 218 bytes.
#line 1 "ENTRY_104fb3d0"

void __fastcall FUN_104fb3d0(undefined4 *param_1)

{
 try {
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCContentSessionSearch);
  param_1[2] = (uint)&ghidra_vftable_SCContentSessionSearch;
  param_1[3] = (uint)&ghidra_vftable_SCContentSessionSearch;
  _eh_vector_destructor_iterator_(param_1 + 0xf,0xc,0x14,thunk_FUN_104fa820);
  iVar1 = (int)(param_1[0xb]);
  if (iVar1 != 0) {
    uVar5 = (uint)((param_1[0xd] - iVar1 >> 2) * 4);
    iVar4 = (int)(iVar1);
    if (0xfff < uVar5) {
      iVar4 = (int)(*(int *)(iVar1 + -4));
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (iVar1 - iVar4) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar5,uVar3);
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  piVar2 = (int *)((int *)param_1[10]);

  if (piVar2 != (int *)0x0) {
    param_1[9] = 0;
    param_1[10] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  thunk_FUN_104fb240();

  return;

 } catch (...) { }
}


// Reference entry 104fb4f0; body size 72 bytes.
#line 1 "ENTRY_104fb4f0"

void __fastcall FUN_104fb4f0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *local_4;
  
  iVar2 = (int)(*param_1);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) {
    piVar1 = (int *)((int *)(iVar2 + 4));
    local_4 = (int *)(param_1);
    thunk_FUN_104f8cb0(piVar1,*(undefined4 *)(iVar2 + 4));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int *)(*piVar1 + 4) = *piVar1;
    *(undefined4 *)(iVar2 + 8) = 0;
    local_4 = (int *)((int *)*piVar1);
    thunk_FUN_104f9920(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),&local_4);
  }
  return;
}


// Reference entry 104fb610; body size 81 bytes.
#line 1 "ENTRY_104fb610"

int * __thiscall Recovered_Bulk::FUN_104fb610(int *param_2)
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


// Reference entry 104fbb80; body size 106 bytes.
#line 1 "ENTRY_104fbb80"

undefined4 * __thiscall Recovered_Bulk::FUN_104fbb80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);

  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 104fbdf0; body size 114 bytes.
#line 1 "ENTRY_104fbdf0"

undefined4 * __thiscall Recovered_Bulk::FUN_104fbdf0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCContentSessionManager);
  param_1[2] = (uint)&ghidra_vftable_SCContentSessionManager;
  DAT_121a1e20 = (int)(0);
  thunk_FUN_104fac60();
  thunk_FUN_104f8a70(param_1 + 4,*(undefined4 *)(param_1[4] + 4));
  thunk_FUN_1148a50e(param_1[4],0x1c);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (uint)&ghidra_vftable_SCSwfObjHHListener;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x38);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104fbe80; body size 246 bytes.
#line 1 "ENTRY_104fbe80"

undefined4 * __thiscall Recovered_Bulk::FUN_104fbe80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCContentSessionSearch);
  param_1[2] = (uint)&ghidra_vftable_SCContentSessionSearch;
  param_1[3] = (uint)&ghidra_vftable_SCContentSessionSearch;
  _eh_vector_destructor_iterator_(param_1 + 0xf,0xc,0x14,thunk_FUN_104fa820);
  iVar1 = (int)(param_1[0xb]);
  if (iVar1 != 0) {
    uVar5 = (uint)((param_1[0xd] - iVar1 >> 2) * 4);
    iVar4 = (int)(iVar1);
    if (0xfff < uVar5) {
      iVar4 = (int)(*(int *)(iVar1 + -4));
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (iVar1 - iVar4) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar5,uVar3);
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  piVar2 = (int *)((int *)param_1[10]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  if (piVar2 != (int *)0x0) {
    param_1[9] = 0;
    param_1[10] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  thunk_FUN_104fb240();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x130,uVar3);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 104fc1b0; body size 104 bytes.
#line 1 "ENTRY_104fc1b0"

void __thiscall Recovered_Bulk::FUN_104fc1b0(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_104f8630(*param_1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
    uVar3 = (uint)(param_1[2] - iVar1 & 0xfffffff8);
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
  param_1[1] = param_2 + param_3 * 8;
  param_1[2] = param_2 + param_4 * 8;
  return;
}


// Reference entry 104fc2f0; body size 136 bytes.
#line 1 "ENTRY_104fc2f0"

float __thiscall Recovered_Bulk::FUN_104fc2f0(int param_2)
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


// Reference entry 104fce70; body size 79 bytes.
#line 1 "ENTRY_104fce70"

void __thiscall Recovered_Bulk::FUN_104fce70(int param_2)
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


// Reference entry 104fcf60; body size 87 bytes.
#line 1 "ENTRY_104fcf60"

void __thiscall Recovered_Bulk::FUN_104fcf60(int param_2)
{
  float *param_1 = (float *)this;
  double dVar1;
  
  dVar1 = (double)(ceil((double)((float)((double)param_2 + (double)(&DAT_11880fb0)[-(param_2 >> 0x1f)]) /
                       *param_1)));
  thunk_FUN_1148ac80(dVar1);
  return;
}


// Reference entry 104fd000; body size 133 bytes.
#line 1 "ENTRY_104fd000"

void __fastcall FUN_104fd000(float *param_1)

{
  ceil((double)((float)((double)((int)param_1[2] + 1) +
                       (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) / *param_1));
  thunk_FUN_1148ac80();
  thunk_FUN_104fc800();
  return;
}


// Reference entry 104fd0f0; body size 83 bytes.
#line 1 "ENTRY_104fd0f0"

void __thiscall Recovered_Bulk::FUN_104fd0f0(int *param_2)
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


// Reference entry 104fd160; body size 77 bytes.
#line 1 "ENTRY_104fd160"

void __fastcall FUN_104fd160(int *param_1)

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


// Reference entry 104fd1f0; body size 81 bytes.
#line 1 "ENTRY_104fd1f0"

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

void __fastcall FID_conflict__Tidy_104fd1f0(int *param_1)

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


// Reference entry 104fd260; body size 96 bytes.
#line 1 "ENTRY_104fd260"

void __fastcall FUN_104fd260(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_104f8630(*param_1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
    uVar3 = (uint)(param_1[2] - iVar1 & 0xfffffff8);
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


// Reference entry 104fd9b0; body size 627 bytes.
#line 1 "ENTRY_104fd9b0"

undefined1 __stdcall FUN_104fd9b0(int *param_1)

{
 try {
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  SCLibrary *this_;
  int *piVar4;
  SCStr *pSVar5;
  int *piVar6;
  undefined1 uVar7;
  undefined1 *puVar8;
  int **ppiVar9;
  int *local_2c;
  int *local_28;
  int *local_24;
  int *local_20 [2];
  SCStr local_18 [4];
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  thunk_FUN_110828b0(DAT_12126b84 );
  piVar6 = (int *)(param_1);
  puVar8 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    puVar8 = (undefined1 *)((undefined1 *)*param_1);
  }
  piVar1 = (int *)((int *)thunk_FUN_110935f0(puVar8,0));
  if (((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x54))(), iVar2 == 1)) &&
     (iVar2 = (**(code **)(*piVar1 + 0x5c))(),
     ((*(ushort *)(iVar2 + 4) & 0x7f) - 1 & 0xfffffffe) == 6)) {
    uVar3 = (undefined4)((**(code **)(*piVar1 + 0x58))());
    thunk_FUN_103a3e50(local_18,uVar3);
    ppiVar9 = (int **)(local_20);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    piVar4 = (int *)((int *)((SCLibrary *)(this_))->getServiceManifestManager());
    piVar1 = (int *)((int *)*piVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    *piVar4 = (int)(0);
    local_2c = (int *)(piVar1);
    if (piVar1 == (int *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(ppiVar9));
    }
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    local_28 = (int *)(piVar4);
    if (local_20[0] != (int *)0x0) {
      (**(code **)(*local_20[0] + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    if (piVar1 != (int *)0x0) {
      piVar1 = (int *)((int *)thunk_FUN_10556310(&local_24,local_18));
      piVar6 = (int *)((int *)*piVar1);
      *(unsigned char *)((char *)&local_8 + 0) = 6;
      *piVar1 = (int)(0);
      if (piVar6 == (int *)0x0) {
        piVar1 = (int *)((int *)0x0);
      }
      else {
        piVar1 = (int *)((int *)(**(code **)(*piVar6 + 0xc))());
      }
      *(unsigned char *)((char *)&local_8 + 0) = 9;
      if (local_24 != (int *)0x0) {
        (**(code **)(*local_24 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 8;
      if (piVar6 != (int *)0x0) {
        pSVar5 = (SCStr *)((SCStr *)thunk_FUN_105535a0(local_20));
        *(unsigned char *)((char *)&local_8 + 0) = 10;
        if (pSVar5 != (SCStr *)&local_14) {
          ((SCStr *)((SCStr *)&local_14))->int_release();
          local_14 = (char *)(*(char **)pSVar5);
          ((SCStr *)((SCStr *)&local_14))->int_addref();
        }
        *(unsigned char *)((char *)&local_8 + 0) = 0xb;
        ((SCStr *)((SCStr *)local_20))->int_release();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0xc;
      piVar6 = (int *)(param_1);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))();
        piVar6 = (int *)(param_1);
      }
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0xd;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0xe;
    ((SCStr *)(local_18))->int_release();
    *(unsigned char *)((char *)&local_8 + 0) = 0;
  }
  if ((local_14 != (char *)0x0) && (*local_14 != '\0')) {
    piVar4 = (int *)((int *)thunk_FUN_104fe600(&param_1,piVar6,0));
    piVar1 = (int *)((int *)*piVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 0xf;
    *piVar4 = (int)(0);
    if (piVar1 == (int *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x12;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x11;
    if (piVar1 != (int *)0x0) {
      if ((int *)piVar1[8] != (int *)0x0) {
        (**(code **)(*(int *)piVar1[8] + 0x20))();
      }
      piVar6 = (int *)((int *)thunk_FUN_104f8fb0(&local_2c,piVar6));
      *(undefined1 *)(*piVar6 + 0xc) = 1;
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x13)));
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))();
      }
      uVar7 = (undefined1)(1);
      goto LAB_104fdbfe;
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x15)));
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))();
    }
  }
  uVar7 = (undefined1)(0);
LAB_104fdbfe:

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar7);

 } catch (...) { }
}


// Reference entry 104fe480; body size 206 bytes.
#line 1 "ENTRY_104fe480"

void __thiscall Recovered_Bulk::FUN_104fe480(undefined4 *param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar4 = (int *)(*(int **)(param_1 + 4));
  piVar6 = (int *)(param_3 + 2);
  piVar5 = (int *)(param_3);
  if ((int *)(piVar6) != piVar4) {
    do {
      iVar3 = (int)(*piVar6);
      if (iVar3 != *piVar5) {
        piVar1 = (int *)((int *)piVar5[1]);
        if (piVar1 != (int *)0x0) {
          *piVar5 = (int)(0);
          piVar5[1] = 0;
          (**(code **)(*piVar1 + 8))(uVar2);
          iVar3 = (int)(*piVar6);
        }
        *piVar5 = (int)(iVar3);
        piVar1 = (int *)((int *)piVar6[1]);
        piVar5[1] = (int)piVar1;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))();
        }
      }
      piVar6 = (int *)(piVar6 + 2);
      piVar5 = (int *)(piVar5 + 2);
    } while ((int *)(piVar6) != piVar4);
    piVar4 = (int *)(*(int **)(param_1 + 4));
  }
  piVar6 = (int *)((int *)piVar4[-1]);

  if (piVar6 != (int *)0x0) {
    piVar4[-2] = 0;
    piVar4[-1] = 0;
    (**(code **)(*piVar6 + 8))();
    piVar4 = (int *)(*(int **)(param_1 + 4));
  }
  *(int **)(param_1 + 4) = piVar4 + -2;
  *param_2 = (undefined4)(param_3);

  return;

 } catch (...) { }
}


// Reference entry 104fe590; body size 78 bytes.
#line 1 "ENTRY_104fe590"

void __thiscall Recovered_Bulk::FUN_104fe590(int *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_104f8c40(local_c,param_3);
  if (*(char *)(local_4 + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_3))->op_lt((SCStr *)(local_4 + 0x10)));
    if (!bVar1) {
      *param_2 = (int)(local_4);
      return;
    }
  }
  *param_2 = (int)(*param_1);
  return;
}


// Reference entry 104fe9c0; body size 740 bytes.
#line 1 "ENTRY_104fe9c0"

void __thiscall Recovered_Bulk::FUN_104fe9c0(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 local_b0;
  int *local_ac;
  int *local_a8;
  undefined4 local_a4;
  int *local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  void *local_94;
  undefined1 *puStack_90;
  undefined4 local_8c;
  char local_88 [40];
  undefined1 local_60 [32];
  char local_40 [56];
  uint local_8;


  uVar2 = (uint)(DAT_12126b84 ^ (uint)local_88);

  local_a8 = (int *)(param_2);
  local_8 = (uint)(uVar2);
  piVar3 = (int *)((int *)createPropertyBag());
  piVar1 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(uVar2));
  }
  *(unsigned char *)((char *)&local_8c + 0) = 3;
  if (local_ac != (int *)0x0) {
    (**(code **)(*local_ac + 8))();
  }
  *(unsigned char *)((char *)&local_8c + 0) = 2;
  pcVar4 = (char *)((char *)thunk_FUN_1125b4a0());
  ((SCStr *)((SCStr *)&local_98))->int_allocRep(pcVar4);
  *(unsigned char *)((char *)&local_8c + 0) = 4;
  ((SCStr *)((SCStr *)&local_9c))->int_allocRep("User-Agent");
  *(unsigned char *)((char *)&local_8c + 0) = 5;
  (**(code **)(*piVar1 + 0x1c))(&local_9c,&local_98);
  *(unsigned char *)((char *)&local_8c + 0) = 6;
  ((SCStr *)((SCStr *)&local_9c))->int_release();

  *(unsigned char *)((char *)&local_8c + 0) = 7;
  ((SCStr *)((SCStr *)&local_98))->int_release();

  *(unsigned char *)((char *)&local_8c + 0) = 8;
  thunk_FUN_1124d7e0(local_60);
  *(unsigned char *)((char *)&local_8c + 0) = 0xb;
  local_40[0] = '\0';
  thunk_FUN_1124db80(local_40,0x38);
  ((SCStr *)((SCStr *)&local_a4))->int_allocRep(local_40);
  *(unsigned char *)((char *)&local_8c + 0) = 0xc;
  piVar5 = (int *)((int *)thunk_FUN_101bf1f0(&local_ac,&local_a4,0x3a));
  local_a0 = (int *)((int *)*piVar5);
  *(unsigned char *)((char *)&local_8c + 0) = 0xd;
  *piVar5 = (int)(0);
  if (local_a0 == (int *)0x0) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    piVar5 = (int *)((int *)(**(code **)(*local_a0 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8c + 0) = 0x10;
  if (local_ac != (int *)0x0) {
    (**(code **)(*local_ac + 8))();
  }
  *(unsigned char *)((char *)&local_8c + 0) = 0xf;
  iVar6 = (int)((**(code **)(*local_a0 + 0x14))());
  if (iVar6 == 2) {
    (**(code **)(*local_a0 + 0x1c))(&local_98,0);
    *(unsigned char *)((char *)&local_8c + 0) = 0x11;
    (**(code **)(*local_a0 + 0x1c))(&local_9c,1);
    *(unsigned char *)((char *)&local_8c + 0) = 0x12;
    ((SCStr *)((SCStr *)&local_98))->trim("\n\r\t ");
    ((SCStr *)((SCStr *)&local_9c))->trim("\n\r\t ");
    (**(code **)(*piVar1 + 0x1c))(&local_98,&local_9c);
    *(unsigned char *)((char *)&local_8c + 0) = 0x13;
    ((SCStr *)((SCStr *)&local_9c))->int_release();

    *(unsigned char *)((char *)&local_8c + 0) = 0x14;
    ((SCStr *)((SCStr *)&local_98))->int_release();
    *(unsigned char *)((char *)&local_8c + 0) = 0xf;
  }
  thunk_FUN_1125bbd0(0);
  *(unsigned char *)((char *)&local_8c + 0) = 0x15;
  ((SCStr *)((SCStr *)&local_a0))->int_allocRep(local_88);
  *(unsigned char *)((char *)&local_8c + 0) = 0x16;
  ((SCStr *)((SCStr *)&local_98))->int_allocRep("X-Sonos-Controller-ID");
  *(unsigned char *)((char *)&local_8c + 0) = 0x17;
  (**(code **)(*piVar1 + 0x1c))(&local_98,&local_a0);
  *(unsigned char *)((char *)&local_8c + 0) = 0x18;
  ((SCStr *)((SCStr *)&local_98))->int_release();

  *(unsigned char *)((char *)&local_8c + 0) = 0x19;
  ((SCStr *)((SCStr *)&local_a0))->int_release();
  *(unsigned char *)((char *)&local_8c + 0) = 0x15;
  (**(code **)(*param_1 + 0x20))(param_3,piVar1);
  *local_a8 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  thunk_FUN_1125bca0();
  *(unsigned char *)((char *)&local_8c + 0) = 0x1a;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }
  *(unsigned char *)((char *)&local_8c + 0) = 0x1b;
  ((SCStr *)((SCStr *)&local_a4))->int_release();

  thunk_FUN_1124d790();
  local_8c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8c + 1)) << 8 | (uint)(0x1c)));
  ((SCStr *)((SCStr *)&local_b0))->int_release();


  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 104ff310; body size 111 bytes.
#line 1 "ENTRY_104ff310"

undefined4 __thiscall Recovered_Bulk::FUN_104ff310(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = (int *)(param_2);
  piVar4 = (int *)(*(int **)(param_1 + 0xc));
  if (piVar4 != *(int **)(param_1 + 0x10)) {
    while( true ) {
      iVar3 = (int)((**(code **)(**(int **)(*piVar4 + 0xc) + 0x1c))());
      if (iVar3 == *piVar1) break;
      piVar4 = (int *)(piVar4 + 2);
      if (piVar4 == *(int **)(param_1 + 0x10)) {
        thunk_FUN_1148a50e(piVar1,4);
        return (undefined4)(0);
      }
    }
    cVar2 = (char)((**(code **)(*(int *)(param_1 + -8) + 0x2c))(*piVar4));
    if (cVar2 != '\0') {
      thunk_FUN_104fe480(&param_2,piVar4);
    }
  }
  thunk_FUN_1148a50e(piVar1,4);
  return (undefined4)(0);
}


// Reference entry 104ff7c0; body size 103 bytes.
#line 1 "ENTRY_104ff7c0"

undefined4 * __thiscall Recovered_Bulk::FUN_104ff7c0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIUrlSessionCallback"));
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


// Reference entry 104ffbd0; body size 136 bytes.
#line 1 "ENTRY_104ffbd0"

void __stdcall FUN_104ffbd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  piVar1 = (int *)(param_4);
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 4))(param_3,param_4,DAT_12126b84 );
  }
  thunk_FUN_104fdf60(param_1,param_2,0,param_3,piVar1);

  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 104ffc90; body size 126 bytes.
#line 1 "ENTRY_104ffc90"

void __thiscall Recovered_Bulk::FUN_104ffc90(int *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(4));

  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    uVar3 = (undefined4)((**(code **)(*param_2 + 0x1c))(uVar1));
    *puVar2 = (undefined4)(uVar3);
  }

  thunk_FUN_1106b190(-(uint)(param_1 != 0) & param_1 + 8U,puVar2,0);

  return;

 } catch (...) { }
}


// Reference entry 10500080; body size 71 bytes.
#line 1 "ENTRY_10500080"

void __thiscall Recovered_Bulk::FUN_10500080(undefined4 param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (int)(*param_1);
  piVar3 = (int *)(*(int **)(iVar2 + 4));
  if (*(char *)((int)piVar3 + 0xd) == '\0') {
    do {
      thunk_FUN_10500110(param_2,piVar3[2]);
      piVar1 = (int *)((int *)*piVar3);
      thunk_FUN_1148a50e(piVar3,0x18);
      piVar3 = (int *)(piVar1);
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    iVar2 = (int)(*param_1);
  }
  thunk_FUN_1148a50e(iVar2,0x18);
  return;
}


// Reference entry 10500160; body size 138 bytes.
#line 1 "ENTRY_10500160"

undefined4 __thiscall Recovered_Bulk::FUN_10500160(undefined4 param_2,int *param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  char cVar1;
  int *piVar2;
  void **ppvVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);
  cVar1 = (char)(*(char *)((int)param_3 + 0xd));
  ppvVar3 = (void **)(&local_10);

  while (ExceptionList = ppvVar3, cVar1 == '\0') {
    thunk_FUN_10500160(param_2,param_3[2]);
    piVar2 = (int *)((int *)*param_3);

    ((SCStr *)((SCStr *)(param_3 + 5)))->int_release();
    param_3[5] = 0;

    thunk_FUN_1148a50e(param_3,0x18,uVar4);

    param_3 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10500280; body size 89 bytes.
#line 1 "ENTRY_10500280"

void FUN_10500280(undefined4 param_1,int param_2)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_2 + 0x14)))->int_release();
  *(undefined4 *)(param_2 + 0x14) = 0;
  thunk_FUN_1148a50e(param_2,0x18,uVar1);

  return;

 } catch (...) { }
}


// Reference entry 10500390; body size 76 bytes.
#line 1 "ENTRY_10500390"

void FUN_10500390(undefined4 param_1,int param_2)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  ((SCStr *)((SCStr *)(param_2 + 4)))->int_release();
  *(undefined4 *)(param_2 + 4) = 0;

  return;

 } catch (...) { }
}


// Reference entry 10501180; body size 94 bytes.
#line 1 "ENTRY_10501180"

undefined4 * __thiscall Recovered_Bulk::FUN_10501180(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCPInfoListDataSource);
  thunk_FUN_101ff410(param_2);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10501200; body size 204 bytes.
#line 1 "ENTRY_10501200"

undefined4 * __thiscall Recovered_Bulk::FUN_10501200(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)(local_14))->int_allocRep("");

  thunk_FUN_104d6ff0(local_14);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)(local_14))->int_release();
  param_1[0x20] = (uint)&ghidra_vftable_RAsyncDataSourceListener;
  param_1[0x21] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCContentProviderInfoViewDataSource);
  param_1[2] = (uint)&ghidra_vftable_SCContentProviderInfoViewDataSource;
  param_1[10] = (uint)&ghidra_vftable_SCContentProviderInfoViewDataSource;
  param_1[0x20] = (uint)&ghidra_vftable_SCContentProviderInfoViewDataSource;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  thunk_FUN_101ff410(param_2);
  param_1[0x4b] = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10501300; body size 122 bytes.
#line 1 "ENTRY_10501300"

undefined4 * __thiscall Recovered_Bulk::FUN_10501300(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCITearOffObjImpl);

  thunk_FUN_103d5ff0(uVar1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCContentProviderInfoViewHeaderDataSource);
  param_1[4] = (uint)&ghidra_vftable_SCContentProviderInfoViewHeaderDataSource;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105013a0; body size 100 bytes.
#line 1 "ENTRY_105013a0"

undefined4 * __thiscall Recovered_Bulk::FUN_105013a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCPInfoListDataSource);
  thunk_FUN_101ff410(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEmptyCPInfoListDataSource);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105015e0; body size 357 bytes.
#line 1 "ENTRY_105015e0"

undefined4 * __thiscall Recovered_Bulk::FUN_105015e0(int param_2,int *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RAsyncDataSource);
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;

  thunk_FUN_11240650(uVar2);
  param_1[3] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInfoTextViewDataSource);
  param_1[3] = (uint)&ghidra_vftable_SCInfoTextViewDataSource;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = (uint)&ghidra_vftable_RControlAIOOpRef;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  *(undefined1 *)(param_1 + 7) = 0;
  if (param_2 == 0) {
    if (param_3 == (int *)0x0) goto LAB_10501717;
    param_2 = (int)((**(code **)(*param_3 + 4))());
    if ((int *)param_1[5] != (int *)0x0) {
      if (param_1[6] != 0) {
        (**(code **)(*(int *)param_1[5] + 0x10))();
      }
      puVar1 = (undefined4 *)((undefined4 *)param_1[5]);
      if (puVar1 != (undefined4 *)0x0) {
        iVar3 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
        if (iVar3 == 0) {
          (**(code **)*puVar1)(1);
        }
      }
      param_1[5] = 0;
      param_1[6] = 0;
    }
    param_1[5] = param_2;
    if (param_2 == 0) goto LAB_10501717;
  }
  else {
    if ((int *)param_1[5] != (int *)0x0) {
      if (param_1[6] != 0) {
        (**(code **)(*(int *)param_1[5] + 0x10))();
      }
      puVar1 = (undefined4 *)((undefined4 *)param_1[5]);
      if (puVar1 != (undefined4 *)0x0) {
        iVar3 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
        if (iVar3 == 0) {
          (**(code **)*puVar1)(1);
        }
      }
      param_1[5] = 0;
      param_1[6] = 0;
    }
    param_1[5] = param_2;
  }
  thunk_FUN_1123fce0(param_2 + 4);
LAB_10501717:
  if ((param_1[5] != 0) && ((int *)param_1[5] != (int *)0x0)) {
    uVar4 = (undefined4)((**(code **)(*(int *)param_1[5] + 4))(param_1 + 3,0));
    param_1[6] = uVar4;
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10501ea0; body size 130 bytes.
#line 1 "ENTRY_10501ea0"

undefined4 * __thiscall Recovered_Bulk::FUN_10501ea0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_105009a0(param_2);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicLibraryAlbumViewData);
  param_1[2] = (uint)&ghidra_vftable_SCMusicLibraryAlbumViewData;
  param_1[10] = (uint)&ghidra_vftable_SCMusicLibraryAlbumViewData;
  param_1[0x20] = (uint)&ghidra_vftable_SCMusicLibraryAlbumViewData;
  param_1[0x4c] = (uint)&ghidra_vftable_SCMusicLibraryAlbumViewData;
  thunk_FUN_10dae000(param_2);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10501f50; body size 141 bytes.
#line 1 "ENTRY_10501f50"

undefined4 * __thiscall Recovered_Bulk::FUN_10501f50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCPInfoListDataSource);
  thunk_FUN_101ff410(param_2);
  param_1[0x2a] = (uint)&ghidra_vftable_SCInfoViewDynamicCPMenu;
  param_1[0x2b] = 0;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicLibraryArtistInfoListData);
  param_1[0x2a] = (uint)&ghidra_vftable_SCMusicLibraryArtistInfoListData;
  thunk_FUN_10db22c0(uVar1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10502000; body size 193 bytes.
#line 1 "ENTRY_10502000"

undefined4 * __thiscall Recovered_Bulk::FUN_10502000(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_10500cf0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicLibraryArtistViewData);
  param_1[2] = (uint)&ghidra_vftable_SCMusicLibraryArtistViewData;
  param_1[10] = (uint)&ghidra_vftable_SCMusicLibraryArtistViewData;
  param_1[0x20] = (uint)&ghidra_vftable_SCMusicLibraryArtistViewData;
  param_1[0x51] = 0;
  *(undefined2 *)(param_1 + 0x52) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  param_1[0x50] = (uint)&ghidra_vftable_SCCPInfoListDataSource;
  thunk_FUN_101ff410(param_2);
  param_1[0x7a] = (uint)&ghidra_vftable_SCInfoViewDynamicCPMenu;
  param_1[0x7b] = 0;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[0x50] = (uint)&ghidra_vftable_SCMusicLibraryArtistInfoListData;
  param_1[0x7a] = (uint)&ghidra_vftable_SCMusicLibraryArtistInfoListData;
  thunk_FUN_10db22c0(uVar1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105030f0; body size 76 bytes.
#line 1 "ENTRY_105030f0"

void __fastcall FUN_105030f0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10503160; body size 76 bytes.
#line 1 "ENTRY_10503160"

void __fastcall FUN_10503160(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 105031d0; body size 76 bytes.
#line 1 "ENTRY_105031d0"

void __fastcall FUN_105031d0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10503360; body size 74 bytes.
#line 1 "ENTRY_10503360"

void __fastcall FUN_10503360(int param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;

  return;

 } catch (...) { }
}


// Reference entry 10503400; body size 185 bytes.
#line 1 "ENTRY_10503400"

void __fastcall FUN_10503400(int param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0x140)))->int_release();
  *(undefined4 *)(param_1 + 0x140) = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x13c)))->int_release();
  *(undefined4 *)(param_1 + 0x13c) = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x138)))->int_release();
  *(undefined4 *)(param_1 + 0x138) = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x134)))->int_release();
  *(undefined4 *)(param_1 + 0x134) = 0;
  thunk_FUN_110a9ef0(uVar1);
  thunk_FUN_105036b0();

  return;

 } catch (...) { }
}


// Reference entry 105034f0; body size 146 bytes.
#line 1 "ENTRY_105034f0"

void __fastcall FUN_105034f0(int param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0x138)))->int_release();
  *(undefined4 *)(param_1 + 0x138) = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x134)))->int_release();
  *(undefined4 *)(param_1 + 0x134) = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x130)))->int_release();
  *(undefined4 *)(param_1 + 0x130) = 0;
  thunk_FUN_105036b0(uVar1);

  return;

 } catch (...) { }
}


// Reference entry 105035b0; body size 174 bytes.
#line 1 "ENTRY_105035b0"

void __fastcall FUN_105035b0(int param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0x13c)))->int_release();
  *(undefined4 *)(param_1 + 0x13c) = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x138)))->int_release();
  *(undefined4 *)(param_1 + 0x138) = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x134)))->int_release();
  *(undefined4 *)(param_1 + 0x134) = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x130)))->int_release();
  *(undefined4 *)(param_1 + 0x130) = 0;
  thunk_FUN_105036b0(uVar1);

  return;

 } catch (...) { }
}


// Reference entry 105036b0; body size 153 bytes.
#line 1 "ENTRY_105036b0"

void __fastcall FUN_105036b0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCContentProviderInfoViewDataSource);
  param_1[2] = (uint)&ghidra_vftable_SCContentProviderInfoViewDataSource;
  param_1[10] = (uint)&ghidra_vftable_SCContentProviderInfoViewDataSource;
  param_1[0x20] = (uint)&ghidra_vftable_SCContentProviderInfoViewDataSource;
  thunk_FUN_10202e00(uVar2);
  piVar1 = (int *)((int *)param_1[0x23]);

  if (piVar1 != (int *)0x0) {
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0x20] = (uint)&ghidra_vftable_RAsyncDataSourceListener;
  thunk_FUN_104d76e0();

  return;

 } catch (...) { }
}


// Reference entry 10503970; body size 123 bytes.
#line 1 "ENTRY_10503970"

void __fastcall FUN_10503970(undefined4 *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInfoViewHeaderItem);

  ((SCStr *)((SCStr *)(param_1 + 3)))->int_release();
  param_1[3] = 0;

  ((SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10503a10; body size 169 bytes.
#line 1 "ENTRY_10503a10"

void __fastcall FUN_10503a10(undefined4 *param_1)

{
 try {
  int iVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInfoviewHeaderInfo);
  iVar1 = (int)(param_1[10]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }

  _eh_vector_destructor_iterator_(param_1 + 6,4,4,thunk_FUN_101ba300);
  _eh_vector_destructor_iterator_(param_1 + 2,4,4,thunk_FUN_101ba300);

  return;

 } catch (...) { }
}


// Reference entry 10503bd0; body size 101 bytes.
#line 1 "ENTRY_10503bd0"

void __fastcall FUN_10503bd0(int param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0x1f8)))->int_release();
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  thunk_FUN_10503af0(uVar1);
  thunk_FUN_105036b0();

  return;

 } catch (...) { }
}


// Reference entry 10503c60; body size 153 bytes.
#line 1 "ENTRY_10503c60"

void __fastcall FUN_10503c60(undefined4 *param_1)

{
 try {
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  iVar1 = (int)(param_1[0x2c]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),DAT_12126b84 ));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  param_1[0x2a] = (uint)&ghidra_vftable_SCInfoViewDynamicCPMenu;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCPInfoListDataSource);
  thunk_FUN_10202e00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDataSource);

  return;

 } catch (...) { }
}


// Reference entry 10503dd0; body size 219 bytes.
#line 1 "ENTRY_10503dd0"

void __fastcall FUN_10503dd0(undefined4 *param_1)

{
 try {
  int iVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  iVar1 = (int)(param_1[0x2d]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[0x2c]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  param_1[0x2a] = (uint)&ghidra_vftable_SCInfoViewDynamicCPMenu;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCPInfoListDataSource);
  thunk_FUN_10202e00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDataSource);

  return;

 } catch (...) { }
}


// Reference entry 10503f10; body size 258 bytes.
#line 1 "ENTRY_10503f10"

void __fastcall FUN_10503f10(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSonosDynamicViewDataSource);
  param_1[2] = (uint)&ghidra_vftable_SCSonosDynamicViewDataSource;
  param_1[10] = (uint)&ghidra_vftable_SCSonosDynamicViewDataSource;
  param_1[0x20] = (uint)&ghidra_vftable_SCSonosDynamicViewDataSource;
  param_1[0x4c] = (uint)&ghidra_vftable_SCSonosDynamicViewDataSource;
  param_1[0x4d] = (uint)&ghidra_vftable_SCSonosDynamicViewDataSource;
  param_1[0x5e] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0(uVar2);
  piVar1 = (int *)((int *)param_1[0x5d]);

  if (piVar1 != (int *)0x0) {
    param_1[0x5c] = 0;
    param_1[0x5d] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x5b]);

  if (piVar1 != (int *)0x0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_10503a10();
  param_1[0x4d] = (uint)&ghidra_vftable_RControlAIOOpCB;
  thunk_FUN_11240850();
  thunk_FUN_11202570();
  thunk_FUN_105036b0();

  return;

 } catch (...) { }
}


// Reference entry 10504060; body size 213 bytes.
#line 1 "ENTRY_10504060"

void __fastcall FUN_10504060(int param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  ((SCStr *)((SCStr *)(param_1 + 0x144)))->int_release();
  *(undefined4 *)(param_1 + 0x144) = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x140)))->int_release();
  *(undefined4 *)(param_1 + 0x140) = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x13c)))->int_release();
  *(undefined4 *)(param_1 + 0x13c) = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x138)))->int_release();
  *(undefined4 *)(param_1 + 0x138) = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x134)))->int_release();
  *(undefined4 *)(param_1 + 0x134) = 0;
  thunk_FUN_110a9ef0();
  thunk_FUN_105036b0();

  return;

 } catch (...) { }
}


// Reference entry 10504170; body size 153 bytes.
#line 1 "ENTRY_10504170"

void __fastcall FUN_10504170(undefined4 *param_1)

{
 try {
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  iVar1 = (int)(param_1[0x2c]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),DAT_12126b84 ));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  param_1[0x2a] = (uint)&ghidra_vftable_SCInfoViewDynamicCPMenu;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCPInfoListDataSource);
  thunk_FUN_10202e00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDataSource);

  return;

 } catch (...) { }
}


// Reference entry 10504480; body size 83 bytes.
#line 1 "ENTRY_10504480"

int * __thiscall Recovered_Bulk::FUN_10504480(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != *param_1) {
    piVar1 = (int *)((int *)param_1[1]);
    if (piVar1 != (int *)0x0) {
      *param_1 = (int)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)(param_2);
    if (param_2 != 0) {
      piVar1 = (int *)((int *)(**(code **)(*(int *)(param_2 + 4) + 0xc))());
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return (int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (int *)(param_1);
}


// Reference entry 105044f0; body size 89 bytes.
#line 1 "ENTRY_105044f0"

int * __thiscall Recovered_Bulk::FUN_105044f0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != *param_1) {
    piVar1 = (int *)((int *)param_1[1]);
    if (piVar1 != (int *)0x0) {
      *param_1 = (int)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)(param_2);
    if (param_2 != 0) {
      piVar1 = (int *)((int *)(**(code **)(*(int *)(param_2 + 0xa8) + 0xc))());
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return (int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (int *)(param_1);
}


// Reference entry 10504990; body size 98 bytes.
#line 1 "ENTRY_10504990"

int __thiscall Recovered_Bulk::FUN_10504990(byte param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8,uVar1);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10504ba0; body size 72 bytes.
#line 1 "ENTRY_10504ba0"

undefined4 * __thiscall Recovered_Bulk::FUN_10504ba0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[4] = (uint)&ghidra_vftable_SCContentProviderInfoViewHeaderDataSource;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCContentProviderInfoViewHeaderDataSource);
  thunk_FUN_103d60a0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10504dd0; body size 77 bytes.
#line 1 "ENTRY_10504dd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10504dd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInfoTextViewDataSource);
  param_1[3] = (uint)&ghidra_vftable_SCInfoTextViewDataSource;
  param_1[4] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  param_1[3] = (uint)&ghidra_vftable_RControlAIOOpCB;
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDataSource);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10504e60; body size 144 bytes.
#line 1 "ENTRY_10504e60"

undefined4 * __thiscall Recovered_Bulk::FUN_10504e60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInfoViewHeaderItem);

  ((SCStr *)((SCStr *)(param_1 + 3)))->int_release();
  param_1[3] = 0;

  ((SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10,uVar1);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10504fb0; body size 125 bytes.
#line 1 "ENTRY_10504fb0"

int __thiscall Recovered_Bulk::FUN_10504fb0(byte param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0x1f8)))->int_release();
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  thunk_FUN_10503af0(uVar1);
  thunk_FUN_105036b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x200);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 105051d0; body size 282 bytes.
#line 1 "ENTRY_105051d0"

undefined4 * __thiscall Recovered_Bulk::FUN_105051d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSonosDynamicViewDataSource);
  param_1[2] = (uint)&ghidra_vftable_SCSonosDynamicViewDataSource;
  param_1[10] = (uint)&ghidra_vftable_SCSonosDynamicViewDataSource;
  param_1[0x20] = (uint)&ghidra_vftable_SCSonosDynamicViewDataSource;
  param_1[0x4c] = (uint)&ghidra_vftable_SCSonosDynamicViewDataSource;
  param_1[0x4d] = (uint)&ghidra_vftable_SCSonosDynamicViewDataSource;
  param_1[0x5e] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0(uVar2);
  piVar1 = (int *)((int *)param_1[0x5d]);

  if (piVar1 != (int *)0x0) {
    param_1[0x5c] = 0;
    param_1[0x5d] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x5b]);

  if (piVar1 != (int *)0x0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_10503a10();
  param_1[0x4d] = (uint)&ghidra_vftable_RControlAIOOpCB;
  thunk_FUN_11240850();
  thunk_FUN_11202570();
  thunk_FUN_105036b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x188);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105055e0; body size 169 bytes.
#line 1 "ENTRY_105055e0"

void __thiscall Recovered_Bulk::FUN_105055e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *_Dst;
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  size_t _Size;
  undefined4 *local_108;
  char local_104 [256];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_108);
  local_108 = (undefined4 *)(param_2);
  thunk_FUN_110bb700(*(undefined4 *)(param_1 + 4),local_104,0x100);
  if (local_104[0] == '\0') {
    *param_2 = (undefined4)(0);
  }
  else {
    pcVar3 = (char *)(local_104);
    do {
      cVar1 = (char)(*pcVar3);
      pcVar3 = (char *)(pcVar3 + 1);
    } while (cVar1 != '\0');
    _Size = (size_t)((int)pcVar3 - (int)(local_104 + 1));
    puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(_Size + 0x11));
    _Dst = (undefined4 *)(puVar2 + 4);
    *puVar2 = (undefined4)(1);
    puVar2[3] = _Size;
    puVar2[2] = 0;
    puVar2[1] = 0;
    memcpy(_Dst,local_104,_Size);
    *(undefined1 *)((int)_Dst + _Size) = 0;
    *param_2 = (undefined4)(_Dst);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10505a60; body size 157 bytes.
#line 1 "ENTRY_10505a60"

undefined4 * FUN_10505a60(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  undefined4 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0x14));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_103be5e0(uVar1));
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }

  param_1[1] = 0;
  *param_1 = (undefined4)(piVar3);
  if (piVar3 == (int *)0x0) {
    uVar4 = (undefined4)(0);
  }
  else {
    uVar4 = (undefined4)((**(code **)(*piVar3 + 0xc))());
  }
  param_1[1] = uVar4;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10507440; body size 192 bytes.
#line 1 "ENTRY_10507440"

undefined4 * __stdcall FUN_10507440(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0x14));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_103be5e0(uVar1));
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }

  if (piVar3 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10507530; body size 114 bytes.
#line 1 "ENTRY_10507530"

void __stdcall FUN_10507530(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0x14));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_103be5e0(uVar1));
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  *param_1 = (undefined4)(piVar3);

  return;

 } catch (...) { }
}


// Reference entry 105075c0; body size 118 bytes.
#line 1 "ENTRY_105075c0"

undefined4 __thiscall Recovered_Bulk::FUN_105075c0(undefined4 param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
 try {
  undefined4 uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (undefined4)((**(code **)(*param_1 + 0x2c))(&param_3,param_3,DAT_12126b84 ));

  uVar2 = (undefined4)((**(code **)(*param_1 + 0x34))());
  thunk_FUN_102178d0(param_2,uVar1,uVar2);

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4)(param_2);

 } catch (...) { }
}


// Reference entry 10507800; body size 68 bytes.
#line 1 "ENTRY_10507800"

SCStr * __thiscall Recovered_Bulk::FUN_10507800(SCStr *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x20))());
  if (cVar1 != '\0') {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x38))());
    (**(code **)(*piVar2 + 0x174))(param_2,param_3);
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 10507860; body size 64 bytes.
#line 1 "ENTRY_10507860"

SCStr * __thiscall Recovered_Bulk::FUN_10507860(SCStr *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x20))());
  if (cVar1 != '\0') {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x38))());
    (**(code **)(*piVar2 + 0x178))(param_2);
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 105078b0; body size 697 bytes.
#line 1 "ENTRY_105078b0"

SCStr * __thiscall Recovered_Bulk::FUN_105078b0(SCStr *param_2,int param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  char *_Memory;
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  SCLibrary *pSVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined1 *puVar11;
  char *pcVar12;
  size_t _Size;
  SCStr *pSVar13;
  int local_2c;
  int local_28;
  undefined4 local_24;
  int *local_20;
  char *local_1c;
  undefined4 *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);

  local_18 = (undefined4 *)(param_1);
  puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_10206850(&local_1c,0));
  pcVar12 = (char *)(local_1c);
  if (((char *)*puVar5 == (char *)0x0) || (local_11 = '\x01', *(char *)*puVar5 == '\0')) {
    local_11 = (char)('\0');
  }

  if (((local_1c != (char *)0x0) &&
      (_Memory = local_1c + -0x10, param_1 = local_18, *(int *)(local_1c + -0x10) < 0xffff)) &&
     (iVar6 = thunk_FUN_1123fcd0(_Memory,uVar4), param_1 = local_18, iVar6 == 0)) {
    uVar2 = (undefined4)(*(undefined4 *)(pcVar12 + -4));
    pcVar12[-0xffffffff00000008] = '\0';
    pcVar12[-0xffffffff00000007] = '\0';
    pcVar12[-0xffffffff00000006] = '\0';
    pcVar12[-0xffffffff00000005] = '\0';
    pcVar12[-0xffffffff0000000c] = '\0';
    pcVar12[-0xffffffff0000000b] = '\0';
    pcVar12[-0xffffffff0000000a] = '\0';
    pcVar12[-0xffffffff00000009] = '\0';
    thunk_FUN_113cfb70(pcVar12,uVar2);
    free(_Memory);
    param_1 = (undefined4 *)(local_18);
  }

  if (local_11 != '\0') {
    thunk_FUN_110828b0();
    puVar11 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)param_1[6] != (undefined1 *)0x0) {
      puVar11 = (undefined1 *)((undefined1 *)param_1[6]);
    }
    piVar7 = (int *)((int *)thunk_FUN_11093530(puVar11,0));
    local_20 = (int *)(piVar7);
    if (piVar7 != (int *)0x0) {
      ((SCStr *)((SCStr *)&local_18))->int_allocRep("WOO_WOO");
      pSVar13 = (SCStr *)((SCStr *)&local_18);

      pSVar8 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
      bVar3 = (bool)(((SCLibParameters *)(*(SCLibParameters **)(pSVar8 + 0x4c)))->hasDeveloperOption(pSVar13));
      local_24 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_24 + 1)) << 8 | (uint)(bVar3)));

      ((SCStr *)((SCStr *)&local_18))->int_release();

      puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_10206850(&local_2c,0));
      local_1c = (char *)((char *)*puVar5);

      if ((local_1c == (char *)0x0) || (*local_1c == '\0')) {
        local_18 = (undefined4 *)((undefined4 *)0x0);
      }
      else {
        pcVar12 = (char *)(local_1c);
        do {
          cVar1 = (char)(*pcVar12);
          pcVar12 = (char *)(pcVar12 + 1);
        } while (cVar1 != '\0');
        _Size = (size_t)((int)pcVar12 - (int)(local_1c + 1));
        puVar9 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(_Size + 0x11));
        puVar5 = (undefined4 *)(puVar9 + 4);
        *puVar9 = (undefined4)(1);
        puVar9[3] = _Size;
        puVar9[2] = 0;
        puVar9[1] = 0;
        memcpy(puVar5,local_1c,_Size);
        *(undefined1 *)((int)puVar5 + _Size) = 0;
        piVar7 = (int *)(local_20);
        local_18 = (undefined4 *)(puVar5);
      }
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      piVar7 = (int *)((int *)(**(code **)(*piVar7 + 0x2c))(&local_28,&local_18,param_3,local_24));
      pcVar12 = (char *)("");
      if ((char *)*piVar7 != (char *)0x0) {
        pcVar12 = (char *)((char *)*piVar7);
      }
      *(unsigned char *)((char *)&local_8 + 0) = 5;
      ((SCStr *)(param_2))->int_allocRep(pcVar12);
      *(unsigned char *)((char *)&local_8 + 0) = 6;
      if (((local_28 != 0) && (*(int *)(local_28 + -0x10) < 0xffff)) &&
         (iVar6 = thunk_FUN_1123fcd0((void *)(local_28 + -0x10)), iVar6 == 0)) {
        *(undefined4 *)(local_28 + -8) = 0;
        *(undefined4 *)(local_28 + -0xc) = 0;
        thunk_FUN_113cfb70(local_28,*(undefined4 *)(local_28 + -4));
        free((void *)(local_28 + -0x10));
      }
      puVar5 = (undefined4 *)(local_18);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));
      if (((local_18 != (undefined4 *)0x0) && (puVar9 = local_18 + -4, (int)local_18[-4] < 0xffff))
         && (iVar6 = thunk_FUN_1123fcd0(puVar9), iVar6 == 0)) {
        puVar5[-2] = 0;
        puVar5[-3] = 0;
        thunk_FUN_113cfb70(puVar5,puVar5[-1]);
        free(puVar9);
      }

      iVar6 = (int)(local_2c);
      goto LAB_10507b1b;
    }
  }
  piVar7 = (int *)((int *)thunk_FUN_10206850(&param_3,0));
  pcVar12 = (char *)("");
  if ((char *)*piVar7 != (char *)0x0) {
    pcVar12 = (char *)((char *)*piVar7);
  }

  ((SCStr *)(param_2))->int_allocRep(pcVar12);

  iVar6 = (int)(param_3);
LAB_10507b1b:
  if (((iVar6 != 0) && (*(int *)(iVar6 + -0x10) < 0xffff)) &&
     (iVar10 = thunk_FUN_1123fcd0((void *)(iVar6 + -0x10)), iVar10 == 0)) {
    *(undefined4 *)(iVar6 + -8) = 0;
    *(undefined4 *)(iVar6 + -0xc) = 0;
    thunk_FUN_113cfb70(iVar6,*(undefined4 *)(iVar6 + -4));
    free((void *)(iVar6 + -0x10));
  }

  return (SCStr *)(param_2);

 } catch (...) { }
}


// Reference entry 10507c20; body size 131 bytes.
#line 1 "ENTRY_10507c20"

undefined4 * __stdcall FUN_10507c20(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
 try {
  uint uVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)(0);

  if ((param_4 != 0) && (*(int *)(param_4 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(param_4 + -0x10),uVar1));
    if (iVar2 == 0) {
      *(undefined4 *)(param_4 + -8) = 0;
      *(undefined4 *)(param_4 + -0xc) = 0;
      thunk_FUN_113cfb70(param_4,*(undefined4 *)(param_4 + -4));
      free((void *)(param_4 + -0x10));
    }
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10507cf0; body size 257 bytes.
#line 1 "ENTRY_10507cf0"

undefined4 FUN_10507cf0(undefined4 *param_1,int *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  char *pcVar8;
  
  thunk_FUN_110828b0();
  uVar7 = (undefined4)(5);
  puVar6 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)((undefined1 *)*param_1);
  }
  iVar3 = (int)(thunk_FUN_11093530(puVar6,0));
  pcVar1 = (char *)((char *)*param_1);
  if (iVar3 == 0) {
    if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
      cVar2 = (char)(thunk_FUN_111a0720("LOCALMUSICBROWSE_CPUDN"));
      if (cVar2 != '\0') {
        uVar7 = (undefined4)(1);
      }
    }
  }
  else {
    pcVar8 = (char *)("");
    if (pcVar1 != (char *)0x0) {
      pcVar8 = (char *)(pcVar1);
    }
    piVar4 = (int *)((int *)thunk_FUN_110935f0(pcVar8,0));
    if (piVar4 == (int *)0x0) {
      return (undefined4)(0);
    }
    iVar3 = (int)((**(code **)(*piVar4 + 0x54))());
    if (iVar3 == 1) {
      iVar3 = (int)((**(code **)(*piVar4 + 0x5c))());
      if (((*(ushort *)(iVar3 + 4) & 0x7f) - 1 & 0xfffffffe) == 6) {
        uVar5 = (uint)((**(code **)(*piVar4 + 0x58))());
        if (uVar5 >> 8 == 0xfe) {
          return (undefined4)(4);
        }
        thunk_FUN_110c2c60();
        iVar3 = (int)(thunk_FUN_110c20d0(uVar5 >> 8));
        if (param_2 != (int *)0x0) {
          *param_2 = (int)(iVar3);
        }
        if ((iVar3 != 0) && ((*(uint *)(iVar3 + 0x130) >> 9 & 1) != 0)) {
          return (undefined4)(2);
        }
        return (undefined4)(3);
      }
    }
  }
  return (undefined4)(uVar7);
}


// Reference entry 105082e0; body size 133 bytes.
#line 1 "ENTRY_105082e0"

undefined4 __fastcall FUN_105082e0(int *param_1)

{
 try {
  bool bVar1;
  undefined4 uVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int *)(param_1);
  (**(code **)(*param_1 + 0x178))(&local_14,DAT_12126b84 );

  if ((local_14 == (int *)0x0) || ((char)*local_14 == '\0')) {
    uVar2 = (undefined4)(7);
  }
  else {
    bVar1 = (bool)(((SCStr *)((SCStr *)&local_14))->beginsWith("/getaa"));
    if (bVar1) {
      uVar2 = (undefined4)(1);
    }
    else {
      uVar2 = (undefined4)(0);
    }
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar2);

 } catch (...) { }
}


// Reference entry 105085d0; body size 66 bytes.
#line 1 "ENTRY_105085d0"

SCStr * FUN_105085d0(SCStr *param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    ((SCStr *)(param_1))->int_allocRep("");
    return (SCStr *)(param_1);
  }
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x220,&DAT_11882ff0));
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 105087e0; body size 176 bytes.
#line 1 "ENTRY_105087e0"

SCStr * __thiscall Recovered_Bulk::FUN_105087e0(SCStr *param_2,uint param_3)
{
  int param_1 = (int )this;
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if ((*(char **)(param_1 + 0x134) == (char *)0x0) || (**(char **)(param_1 + 0x134) == '\0')) {
    bVar1 = (bool)(false);
  }
  else {
    bVar1 = (bool)(true);
  }
  uVar3 = (uint)(param_3 + 1);
  if (bVar1) {
    uVar3 = (uint)(param_3);
  }
  if ((uVar3 != 0) &&
     ((*(char **)(param_1 + 0x138) == (char *)0x0 || (**(char **)(param_1 + 0x138) == '\0')))) {
    uVar3 = (uint)(uVar3 + 1);
  }
  if ((1 < uVar3) &&
     ((*(char **)(param_1 + 0x13c) == (char *)0x0 || (**(char **)(param_1 + 0x13c) == '\0')))) {
    uVar3 = (uint)(uVar3 + 1);
  }
  if (uVar3 == 0) {
    uVar4 = (undefined4)(0x21e);
  }
  else if (uVar3 == 1) {
    uVar4 = (undefined4)(0x220);
  }
  else {
    if (uVar3 != 2) {
      ((SCStr *)(param_2))->int_allocRep("");
      return (SCStr *)(param_2);
    }
    uVar4 = (undefined4)(0x21f);
  }
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(uVar4,&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 105088e0; body size 187 bytes.
#line 1 "ENTRY_105088e0"

SCStr * FUN_105088e0(SCStr *param_1,undefined4 param_2)

{
  char *pcVar1;
  
  switch(param_2) {
  case 0:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x21e,&DAT_11882ff0));
    ((SCStr *)(param_1))->int_allocRep(pcVar1);
    return (SCStr *)(param_1);
  case 1:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x220,&DAT_11882ff0));
    ((SCStr *)(param_1))->int_allocRep(pcVar1);
    return (SCStr *)(param_1);
  case 2:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x21f,&DAT_11882ff0));
    ((SCStr *)(param_1))->int_allocRep(pcVar1);
    return (SCStr *)(param_1);
  case 3:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x22e,&DAT_11882ff0));
    ((SCStr *)(param_1))->int_allocRep(pcVar1);
    return (SCStr *)(param_1);
  default:
    ((SCStr *)(param_1))->int_allocRep("");
    return (SCStr *)(param_1);
  }
}


// Reference entry 10509440; body size 161 bytes.
#line 1 "ENTRY_10509440"

void FUN_10509440(undefined4 param_1,undefined4 param_2)

{
 try {
  undefined1 local_b0 [156];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (uint)(DAT_12126b84);

  thunk_FUN_101ff8b0(local_14);

  thunk_FUN_1106b670(param_2);
  thunk_FUN_101ba530(param_1);
  thunk_FUN_1106f6e0();
  thunk_FUN_10508f40(local_b0);
  thunk_FUN_10202e00();

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10509510; body size 167 bytes.
#line 1 "ENTRY_10509510"

int * __thiscall Recovered_Bulk::FUN_10509510(int *param_2,uint param_3)
{
  int *param_1 = (int *)this;
 try {
  uint uVar1;
  int *piVar2;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)((**(code **)(*param_1 + 0x58))(DAT_12126b84 ));
  if (uVar1 <= param_3) {
    *param_2 = (int)(0);

    return (int *)(param_2);
  }
  piVar2 = (int *)((int *)thunk_FUN_1050a540(&local_18,param_3));
  piVar2 = (int *)((int *)*piVar2);

  *param_2 = (int)((int)piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  piVar2 = (int *)(local_14);

  if (local_14 != (int *)0x0) {

    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar2 + 8))();
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 10509680; body size 142 bytes.
#line 1 "ENTRY_10509680"

void __thiscall Recovered_Bulk::FUN_10509680(SCStr *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  SCStr *local_408;
  char acStack_404 [1024];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_408);
  local_408 = (SCStr *)(param_2);
  iVar1 = (int)((**(code **)(*param_1 + 0x180))());
  uVar6 = (undefined4)(0x400);
  uVar4 = (uint)((uint)*(ushort *)(iVar1 + 8));
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)param_1[0x27] != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)((undefined1 *)param_1[0x27]);
  }
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)param_1[0x28] != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)((undefined1 *)param_1[0x28]);
  }
  pcVar5 = (char *)(acStack_404);
  thunk_FUN_1109f7f0(uVar4,puVar3,puVar2,pcVar5,0x400);
  thunk_FUN_110a48f0(uVar4,puVar3,puVar2,pcVar5,uVar6);
  ((SCStr *)(param_2))->int_allocRep(acStack_404);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10509760; body size 111 bytes.
#line 1 "ENTRY_10509760"

int __fastcall FUN_10509760(int param_1)

{
  char cVar1;
  int iVar2;
  char *_Str1;
  undefined1 *puVar3;
  int iVar4;
  
  if ((*(char **)(param_1 + 0x130) == (char *)0x0) ||
     (iVar4 = 2, **(char **)(param_1 + 0x130) == '\0')) {
    iVar4 = (int)(1);
  }
  thunk_FUN_1109f7f0();
  _Str1 = (char *)("");
  if (*(char **)(param_1 + 0x13c) != (char *)0x0) {
    _Str1 = (char *)(*(char **)(param_1 + 0x13c));
  }
  iVar2 = (int)(strncmp(_Str1,"SA_RINCON",9));
  if (iVar2 == 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x13c) != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(*(undefined1 **)(param_1 + 0x13c));
    }
    cVar1 = (char)(thunk_FUN_110a10f0(puVar3));
    if (cVar1 == '\0') {
      return (int)(iVar4 + 1);
    }
  }
  return (int)(iVar4);
}


// Reference entry 105097f0; body size 80 bytes.
#line 1 "ENTRY_105097f0"

int __fastcall FUN_105097f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(char **)(param_1 + 0x134) == (char *)0x0) || (**(char **)(param_1 + 0x134) == '\0')) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(1);
  }
  if ((*(char **)(param_1 + 0x138) == (char *)0x0) || (**(char **)(param_1 + 0x138) == '\0')) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(1);
  }
  if ((*(char **)(param_1 + 0x13c) != (char *)0x0) && (**(char **)(param_1 + 0x13c) != '\0')) {
    return (int)(iVar1 + iVar2 + 1);
  }
  return (int)(iVar1 + iVar2);
}


// Reference entry 10509860; body size 120 bytes.
#line 1 "ENTRY_10509860"

undefined4 __fastcall FUN_10509860(int param_1)

{
  char cVar1;
  int iVar2;
  char *_Str1;
  undefined1 *puVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)(3);
  thunk_FUN_1109f7f0();
  _Str1 = (char *)("");
  if (*(char **)(param_1 + 0x144) != (char *)0x0) {
    _Str1 = (char *)(*(char **)(param_1 + 0x144));
  }
  iVar2 = (int)(strncmp(_Str1,"SA_RINCON",9));
  if (iVar2 == 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x144) != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(*(undefined1 **)(param_1 + 0x144));
    }
    cVar1 = (char)(thunk_FUN_110a10f0(puVar3));
    if (cVar1 == '\0') {
      puVar3 = (undefined1 *)(&DAT_1186d2ee);
      if (*(undefined1 **)(param_1 + 0x144) != (undefined1 *)0x0) {
        puVar3 = (undefined1 *)(*(undefined1 **)(param_1 + 0x144));
      }
      cVar1 = (char)(thunk_FUN_110a1010(puVar3));
      if (cVar1 == '\0') {
        uVar4 = (undefined4)(4);
      }
    }
  }
  return (undefined4)(uVar4);
}


// Reference entry 105099e0; body size 295 bytes.
#line 1 "ENTRY_105099e0"

int * __thiscall Recovered_Bulk::FUN_105099e0(int *param_2,undefined4 param_3,int param_4)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_2 = (int)(0);

  local_18[1] = 1;
  if ((*(char *)(param_1 + 0x1c) != '\0') && (param_4 == 0)) {
    piVar2 = (int *)((int *)(**(code **)(*(int *)(*(int *)(param_1 + 0x14) + 0x1c) + 4))(local_18,uVar1));

    if (piVar2 != (int *)(param_2)) {
      iVar4 = (int)(*param_2);
      if ((iVar4 != 0) && (*(int *)(iVar4 + -0x10) < 0xffff)) {
        iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar4 + -0x10)));
        if (iVar3 == 0) {
          *(undefined4 *)(iVar4 + -8) = 0;
          *(undefined4 *)(iVar4 + -0xc) = 0;
          thunk_FUN_113cfb70(iVar4,*(undefined4 *)(iVar4 + -4));
          free((void *)(iVar4 + -0x10));
        }
      }
      iVar4 = (int)(*piVar2);
      *param_2 = (int)(iVar4);
      if ((iVar4 != 0) && (*(int *)(iVar4 + -0x10) < 0xffff)) {
        thunk_FUN_1123fce0((int *)(iVar4 + -0x10));
      }
    }

    if ((local_18[0] != 0) && (*(int *)(local_18[0] + -0x10) < 0xffff)) {
      iVar4 = (int)(thunk_FUN_1123fcd0((void *)(local_18[0] + -0x10)));
      if (iVar4 == 0) {
        *(undefined4 *)(local_18[0] + -8) = 0;
        *(undefined4 *)(local_18[0] + -0xc) = 0;
        thunk_FUN_113cfb70(local_18[0],*(undefined4 *)(local_18[0] + -4));
        free((void *)(local_18[0] + -0x10));
      }
    }
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 10509b50; body size 206 bytes.
#line 1 "ENTRY_10509b50"

int * __stdcall FUN_10509b50(int *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *local_18;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar3 = (int *)((int *)createSCStringArray());
  piVar1 = (int *)((int *)*piVar3);

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
  ((SCStr *)(local_14))->int_allocRep("SCIActionCategoryDefault");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x24))(local_14);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)(local_14))->int_release();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 1050ac40; body size 89 bytes.
#line 1 "ENTRY_1050ac40"

int __fastcall FUN_1050ac40(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((*(uint *)(param_1 + 0xac) >> 1 & 0x55555555) + (*(uint *)(param_1 + 0xac) & 0x55555555));
  uVar1 = (uint)((uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333));
  uVar1 = (uint)((uVar1 >> 4 & 0xf0f0f0f) + (uVar1 & 0xf0f0f0f));
  uVar1 = (uint)((uVar1 >> 8 & 0xff00ff) + (uVar1 & 0xff00ff));
  return (int)((uVar1 >> 0x10) + (uVar1 & 0xffff));
}


// Reference entry 1050acb0; body size 89 bytes.
#line 1 "ENTRY_1050acb0"

int __fastcall FUN_1050acb0(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((*(uint *)(param_1 + 0xac) >> 1 & 0x55555555) + (*(uint *)(param_1 + 0xac) & 0x55555555));
  uVar1 = (uint)((uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333));
  uVar1 = (uint)((uVar1 >> 4 & 0xf0f0f0f) + (uVar1 & 0xf0f0f0f));
  uVar1 = (uint)((uVar1 >> 8 & 0xff00ff) + (uVar1 & 0xff00ff));
  return (int)((uVar1 >> 0x10) + (uVar1 & 0xffff));
}


// Reference entry 1050ad20; body size 89 bytes.
#line 1 "ENTRY_1050ad20"

int __fastcall FUN_1050ad20(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((*(uint *)(param_1 + 0xac) >> 1 & 0x55555555) + (*(uint *)(param_1 + 0xac) & 0x55555555));
  uVar1 = (uint)((uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333));
  uVar1 = (uint)((uVar1 >> 4 & 0xf0f0f0f) + (uVar1 & 0xf0f0f0f));
  uVar1 = (uint)((uVar1 >> 8 & 0xff00ff) + (uVar1 & 0xff00ff));
  return (int)((uVar1 >> 0x10) + (uVar1 & 0xffff));
}


// Reference entry 1050aea0; body size 103 bytes.
#line 1 "ENTRY_1050aea0"

undefined4 * __thiscall Recovered_Bulk::FUN_1050aea0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIInfoViewHeaderDataSource"));
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


// Reference entry 1050af20; body size 226 bytes.
#line 1 "ENTRY_1050af20"

undefined4 * __thiscall Recovered_Bulk::FUN_1050af20(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
 try {
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIInfoViewHeaderDataSource"));
  piVar4 = (int *)(param_1);
  if (bVar1) {
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (bVar1) {
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 4))(uVar2);
      }
    }
    else {
      piVar4 = (int *)((int *)0x0);
    }
  }

  if (piVar4 == (int *)0x0) {
    if (param_1[2] == 0) {
      *param_2 = (undefined4)(0);

      return (undefined4 *)(param_2);
    }
    puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x3c))());
    (**(code **)*puVar3)(param_2,param_3);

    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(piVar4);

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 1050b270; body size 233 bytes.
#line 1 "ENTRY_1050b270"

undefined4 * __thiscall Recovered_Bulk::FUN_1050b270(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
 try {
  SCStr *this_;
  bool bVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  this_ = (SCStr *)(param_3);


  uVar2 = (uint)(DAT_12126b84);

  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIInfoViewHeaderDataSource"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  else {
    thunk_FUN_1050af20(&param_3,this_);

    if (param_3 != (SCStr *)0x0) {
      *param_2 = (undefined4)(param_3);

      return (undefined4 *)(param_2);
    }
    bVar1 = (bool)(((SCStr *)(this_))->op_eq("SCIObj"));
    if (bVar1) {
      *param_2 = (undefined4)(param_1);
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 4))();
      }

      if (param_3 != (SCStr *)0x0) {
        (**(code **)(*(int *)param_3 + 8))();
      }
    }
    else {
      *param_2 = (undefined4)(0);

      if (param_3 != (SCStr *)0x0) {
        (**(code **)(*(int *)param_3 + 8))(uVar2);
      }
    }
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 1050b3a0; body size 103 bytes.
#line 1 "ENTRY_1050b3a0"

undefined4 * __thiscall Recovered_Bulk::FUN_1050b3a0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIInfoViewHeaderItem"));
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


// Reference entry 1050b420; body size 68 bytes.
#line 1 "ENTRY_1050b420"

undefined4 * __thiscall Recovered_Bulk::FUN_1050b420(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
  if (bVar1) {
    if (param_1 == (int *)&DAT_00000004) {
      param_1 = (int *)((int *)0x0);
    }
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);
  return (undefined4 *)(param_2);
}


// Reference entry 1050b730; body size 99 bytes.
#line 1 "ENTRY_1050b730"

int __thiscall Recovered_Bulk::FUN_1050b730(int param_2)
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


// Reference entry 1050e5b0; body size 108 bytes.
#line 1 "ENTRY_1050e5b0"

bool FUN_1050e5b0(void)

{
 try {
  bool bVar1;
  SCLibrary *pSVar2;
  SCStr *pSVar3;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)(local_14))->int_allocRep("WOO_WOO");
  pSVar3 = (SCStr *)(local_14);

  pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  bVar1 = (bool)(((SCLibParameters *)(*(SCLibParameters **)(pSVar2 + 0x4c)))->hasDeveloperOption(pSVar3));

  ((SCStr *)(local_14))->int_release();

  return (bool)(bVar1);

 } catch (...) { }
}


// Reference entry 1050e670; body size 91 bytes.
#line 1 "ENTRY_1050e670"

int * __thiscall Recovered_Bulk::FUN_1050e670(int *param_2)
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
    return (int *)(param_1);
  }
  param_1[1] = 0;
  return (int *)(param_1);
}


// Reference entry 1050e710; body size 171 bytes.
#line 1 "ENTRY_1050e710"

int * __thiscall Recovered_Bulk::FUN_1050e710(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  *param_1 = (int)(0);
  puVar1 = (undefined4 *)((undefined4 *)*param_2);
  if (puVar1 != (undefined4 *)0x0) {
    local_14 = (int *)(param_1);
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIInfoViewHeaderDataSource");

    piVar4 = (int *)((int *)(**(code **)*puVar1)(&local_14,&param_2,uVar3));
    iVar2 = (int)(*piVar4);
    *piVar4 = (int)(0);
    piVar4 = (int *)((int *)*param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    if (piVar4 != (int *)0x0) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))();
    }
    *param_1 = (int)(iVar2);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }

    ((SCStr *)((SCStr *)&param_2))->int_release();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 1050e890; body size 188 bytes.
#line 1 "ENTRY_1050e890"

int * __thiscall Recovered_Bulk::FUN_1050e890(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = (undefined4 *)(param_2);


  uVar3 = (uint)(DAT_12126b84);

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
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIInfoViewHeaderDataSource");

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

    ((SCStr *)((SCStr *)&param_2))->int_release();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 1050ec80; body size 131 bytes.
#line 1 "ENTRY_1050ec80"

int * __thiscall Recovered_Bulk::FUN_1050ec80(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  iVar1 = (int)(*param_2);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }
  iVar1 = (int)(param_2[1]);

  param_1[1] = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 1050f4c0; body size 351 bytes.
#line 1 "ENTRY_1050f4c0"

int * __thiscall Recovered_Bulk::FUN_1050f4c0(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  char cVar1;
  int *piVar2;
  int *piVar3;
  SCStr aSStack_3c [4];
  int *piStack_38;
  int *piStack_34;
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uStack_30 = (uint)(DAT_12126b84);

  *param_1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (int)param_2;
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCITearOffObjImpl);

  piStack_34 = (int *)((int *)0x1050f522);
  thunk_FUN_103d5ff0();
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCInfoViewHeaderDataSource);
  param_1[4] = (int)(uint)&ghidra_vftable_SCInfoViewHeaderDataSource;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  piStack_34 = (int *)(param_2 + 0x87);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  piStack_38 = (int *)((int *)0x1050f550);
  thunk_FUN_1050e710();
  piVar3 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (param_2 != (int *)0x0) {
    piStack_34 = (int *)((int *)0x1050f56a);
    piVar3 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    piStack_34 = (int *)((int *)0x1050f576);
    (**(code **)(*piVar3 + 4))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  if (param_2 != (int *)0x0) {
    piStack_34 = (int *)((int *)0x1050f58c);
    (**(code **)(*param_2 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if ((param_2 != (int *)0x0) && ((int *)param_1[0xc] != param_2)) {
    piVar2 = (int *)((int *)param_1[0xd]);
    if (piVar2 != (int *)0x0) {
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      piStack_34 = (int *)((int *)0x1050f5b3);
      (**(code **)(*piVar2 + 8))();
    }
    param_1[0xc] = (int)param_2;
    piStack_34 = (int *)((int *)0x1050f5bd);
    piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[0xd] = (int)piVar2;
    piStack_34 = (int *)((int *)0x1050f5c7);
    (**(code **)(*piVar2 + 4))();
    if (*(code **)(*param_1 + 0x20) == thunk_FUN_10517060) {
      piStack_34 = (int *)((int *)0x1050f5da);
      cVar1 = (char)(thunk_FUN_10517060());
    }
    else {
      piStack_34 = (int *)((int *)0x1050f5de);
      cVar1 = (char)((**(code **)(*param_1 + 0x20))());
    }
    if (cVar1 != '\0') {
      piStack_34 = (int *)((int *)0x0);
      piStack_38 = (int *)(param_1);
      ((SCStr *)(aSStack_3c))->int_allocRep("SCIInfoViewHeaderDataSource:onChanged");
      thunk_FUN_103d65f0();
    }
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  if (piVar3 != (int *)0x0) {
    piStack_34 = (int *)((int *)0x1050f609);
    (**(code **)(*piVar3 + 8))();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 1050f680; body size 108 bytes.
#line 1 "ENTRY_1050f680"

undefined4 * __thiscall Recovered_Bulk::FUN_1050f680(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInfoViewHelper);
  thunk_FUN_101ff410(param_2);

  thunk_FUN_101ff410(param_3);
  *(undefined2 *)(param_1 + 0x4f) = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1050fd80; body size 76 bytes.
#line 1 "ENTRY_1050fd80"

void __fastcall FUN_1050fd80(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 1050fdf0; body size 76 bytes.
#line 1 "ENTRY_1050fdf0"

void __fastcall FUN_1050fdf0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 1050fe60; body size 76 bytes.
#line 1 "ENTRY_1050fe60"

void __fastcall FUN_1050fe60(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 1050fed0; body size 68 bytes.
#line 1 "ENTRY_1050fed0"

void __fastcall FUN_1050fed0(int *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 1050fff0; body size 182 bytes.
#line 1 "ENTRY_1050fff0"

void __fastcall FUN_1050fff0(int *param_1)

{
 try {
  int iVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  iVar1 = (int)(param_1[1]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(*param_1);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 105100e0; body size 106 bytes.
#line 1 "ENTRY_105100e0"

void __fastcall FUN_105100e0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEphemeralBrowseItem);
  param_1[6] = (uint)&ghidra_vftable_SCEphemeralBrowseItem;
  piVar1 = (int *)((int *)param_1[0x1b]);

  if (piVar1 != (int *)0x0) {
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_10cf71a0();

  return;

 } catch (...) { }
}


// Reference entry 10510170; body size 941 bytes.
#line 1 "ENTRY_10510170"

void __fastcall FUN_10510170(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInfoViewBrowseDataSource);
  param_1[2] = (uint)&ghidra_vftable_SCInfoViewBrowseDataSource;
  param_1[10] = (uint)&ghidra_vftable_SCInfoViewBrowseDataSource;
  param_1[0x20] = (uint)&ghidra_vftable_SCInfoViewBrowseDataSource;
  param_1[0x21] = (uint)&ghidra_vftable_SCInfoViewBrowseDataSource;
  param_1[0x22] = (uint)&ghidra_vftable_SCInfoViewBrowseDataSource;
  param_1[0x23] = (uint)&ghidra_vftable_SCInfoViewBrowseDataSource;
  param_1[0x24] = (uint)&ghidra_vftable_SCInfoViewBrowseDataSource;
  if (param_1[0x25] != 0) {
    piVar2 = (int *)((int *)param_1[0x26]);
    if (piVar2 != (int *)0x0) {
      param_1[0x25] = 0;
      param_1[0x26] = 0;
      (**(code **)(*piVar2 + 8))(uVar3);
    }
    param_1[0x25] = 0;
    param_1[0x26] = 0;
  }
  piVar2 = (int *)((int *)param_1[0x95]);

  if (piVar2 != (int *)0x0) {
    param_1[0x94] = 0;
    param_1[0x95] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  puVar1 = (undefined4 *)(param_1 + 0x8f);
  param_1[0x8d] = (uint)&ghidra_vftable_SCArray;
  thunk_FUN_101c42f0(*puVar1,param_1[0x90],puVar1);
  param_1[0x90] = *puVar1;
  thunk_FUN_101c6ae0();
  param_1[0x8d] = (uint)&ghidra_vftable_SCIObjImpl;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[0x8d] = (uint)&ghidra_vftable_SCIObj;

  ((SCStr *)((SCStr *)(param_1 + 0x8b)))->int_release();
  param_1[0x8b] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x8a)))->int_release();
  param_1[0x8a] = 0;
  piVar2 = (int *)((int *)param_1[0x88]);

  if (piVar2 != (int *)0x0) {
    param_1[0x87] = 0;
    param_1[0x88] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  thunk_FUN_10202e00();
  thunk_FUN_10202e00();

  ((SCStr *)((SCStr *)(param_1 + 0x35)))->int_release();
  param_1[0x35] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x34)))->int_release();
  param_1[0x34] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x33)))->int_release();
  param_1[0x33] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x32)))->int_release();
  param_1[0x32] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x31)))->int_release();
  param_1[0x31] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x30)))->int_release();
  param_1[0x30] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x2f)))->int_release();
  param_1[0x2f] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x2e)))->int_release();
  param_1[0x2e] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x2d)))->int_release();
  param_1[0x2d] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x2c)))->int_release();
  param_1[0x2c] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x2b)))->int_release();
  param_1[0x2b] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x2a)))->int_release();
  param_1[0x2a] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x29)))->int_release();
  param_1[0x29] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x28)))->int_release();
  param_1[0x28] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x27)))->int_release();
  param_1[0x27] = 0;

  piVar2 = (int *)((int *)param_1[0x26]);
  if (piVar2 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  param_1[0x24] = (uint)&ghidra_vftable_SCIObj;
  param_1[0x23] = (uint)&ghidra_vftable_SCSwfObjHHListener;
  param_1[0x22] = (uint)&ghidra_vftable_SCIObj;
  thunk_FUN_110a9ef0();
  param_1[0x20] = (uint)&ghidra_vftable_SCIObj;
  thunk_FUN_104d76e0();

  return;

 } catch (...) { }
}


// Reference entry 10510610; body size 134 bytes.
#line 1 "ENTRY_10510610"

void __fastcall FUN_10510610(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInfoViewHeaderDataSource);
  param_1[4] = (uint)&ghidra_vftable_SCInfoViewHeaderDataSource;
  piVar1 = (int *)((int *)param_1[0xd]);

  if (piVar1 != (int *)0x0) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_103d60a0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 105106f0; body size 81 bytes.
#line 1 "ENTRY_105106f0"

int * __thiscall Recovered_Bulk::FUN_105106f0(int *param_2)
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


// Reference entry 10510760; body size 81 bytes.
#line 1 "ENTRY_10510760"

int * __thiscall Recovered_Bulk::FUN_10510760(int *param_2)
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


// Reference entry 105107d0; body size 81 bytes.
#line 1 "ENTRY_105107d0"

int * __thiscall Recovered_Bulk::FUN_105107d0(int *param_2)
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


// Reference entry 10510980; body size 82 bytes.
#line 1 "ENTRY_10510980"

undefined4 * __thiscall Recovered_Bulk::FUN_10510980(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCArray);
  thunk_FUN_101c42f0(*puVar1,param_1[3],puVar1);
  param_1[3] = *puVar1;
  thunk_FUN_101c6ae0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10510a90; body size 127 bytes.
#line 1 "ENTRY_10510a90"

undefined4 * __thiscall Recovered_Bulk::FUN_10510a90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEphemeralBrowseItem);
  param_1[6] = (uint)&ghidra_vftable_SCEphemeralBrowseItem;
  piVar1 = (int *)((int *)param_1[0x1b]);

  if (piVar1 != (int *)0x0) {
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_10cf71a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x70);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10510b70; body size 155 bytes.
#line 1 "ENTRY_10510b70"

undefined4 * __thiscall Recovered_Bulk::FUN_10510b70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInfoViewHeaderDataSource);
  param_1[4] = (uint)&ghidra_vftable_SCInfoViewHeaderDataSource;
  piVar1 = (int *)((int *)param_1[0xd]);

  if (piVar1 != (int *)0x0) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_103d60a0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x38);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10511d60; body size 551 bytes.
#line 1 "ENTRY_10511d60"

void __fastcall FUN_10511d60(int *param_1)

{
 try {
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  SCStr aSStack_44 [4];
  int *piStack_40;
  undefined4 uStack_3c;
  int **ppiStack_38;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if ((int *)param_1[0x87] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x87] + 0x18))();
    if (param_1[0x87] != 0) {
      piVar4 = (int *)((int *)param_1[0x88]);
      if (piVar4 != (int *)0x0) {
        param_1[0x87] = 0;
        param_1[0x88] = 0;
        (**(code **)(*piVar4 + 8))();
      }
      param_1[0x87] = 0;
      param_1[0x88] = 0;
    }
  }
  ppiStack_38 = (int **)((int **)(param_1 + 0x39));

  piVar3 = (int *)((int *)thunk_FUN_105061c0());
  piVar4 = (int *)((int *)param_1[0x87]);
  if (piVar3 != (int *)(piVar4)) {
    piVar4 = (int *)((int *)param_1[0x88]);
    if (piVar4 != (int *)0x0) {
      param_1[0x87] = 0;
      param_1[0x88] = 0;
      (**(code **)(*piVar4 + 8))();
    }
    param_1[0x87] = (int)piVar3;
    if (piVar3 == (int *)0x0) {
      param_1[0x88] = 0;

      return;
    }
    piVar4 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
    param_1[0x88] = (int)piVar4;
    (**(code **)(*piVar4 + 4))();
    piVar4 = (int *)((int *)param_1[0x87]);
  }
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x14))();
    cVar2 = (char)((**(code **)(*param_1 + 0x5c))());
    if (((cVar2 != '\0') && (piVar4 = (int *)param_1[0x25], piVar4 != (int *)0x0)) &&
       (puVar1 = (undefined4 *)param_1[0x87], puVar1 != (undefined4 *)0x0)) {
      ppiStack_38 = (int **)((int **)0x10511ea0);
      ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCIInfoViewHeaderDataSource");
      ppiStack_38 = (int **)(&local_18);


      piVar5 = (int *)((int *)(**(code **)*puVar1)());
      piVar3 = (int *)((int *)*piVar5);
      *piVar5 = (int)(0);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
      if (local_18 != (int *)0x0) {

        (**(code **)(*local_18 + 8))();
      }


      ((SCStr *)((SCStr *)&local_14))->int_release();


      if ((piVar3 != (int *)0x0) && ((int *)piVar4[0xc] != piVar3)) {
        piVar5 = (int *)((int *)piVar4[0xd]);
        if (piVar5 != (int *)0x0) {
          piVar4[0xc] = 0;
          piVar4[0xd] = 0;

          (**(code **)(*piVar5 + 8))();
        }
        piVar4[0xc] = (int)piVar3;

        piVar5 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
        piVar4[0xd] = (int)piVar5;

        (**(code **)(*piVar5 + 4))();

        cVar2 = (char)((**(code **)(*piVar4 + 0x20))());
        if (cVar2 != '\0') {

          piStack_40 = (int *)(piVar4);
          ((SCStr *)(aSStack_44))->int_allocRep("SCIInfoViewHeaderDataSource:onChanged");
          thunk_FUN_103d65f0();
        }
      }

      if (piVar3 != (int *)0x0) {

        (**(code **)(*piVar3 + 8))();
      }
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10512010; body size 115 bytes.
#line 1 "ENTRY_10512010"

undefined4 * FUN_10512010(undefined4 *param_1,undefined4 param_2)

{
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0x38));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_1050f4c0(param_2));
  }

  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar1);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105135e0; body size 131 bytes.
#line 1 "ENTRY_105135e0"

void __thiscall Recovered_Bulk::FUN_105135e0(undefined4 param_2,SCStr *param_3)
{
  int param_1 = (int )this;
  bool bVar1;
  short sVar2;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIBrowseDataSource:onBrowseChanged"));
  if (bVar1) {
    if (*(int **)(param_1 + 0x19c) == (int *)0x0) {
      *(undefined2 *)(param_1 + 0x1cc) = 0x404;
    }
    else {
      sVar2 = (short)((**(code **)(**(int **)(param_1 + 0x19c) + 100))());
      *(short *)(param_1 + 0x1cc) = sVar2;
      if (sVar2 != 0x404) {
        if ((sVar2 == 0) || (*(int *)(param_1 + 0x1bc) != *(int *)(param_1 + 0x1c0))) {
          thunk_FUN_10511190();
        }
        goto LAB_10513649;
      }
    }
    thunk_FUN_10511d60();
  }
LAB_10513649:
  (**(code **)(*(int *)(param_1 + -0x80) + 0x110))(0);
  thunk_FUN_10517080();
  return;
}


// Reference entry 10513710; body size 192 bytes.
#line 1 "ENTRY_10513710"

undefined4 * __stdcall FUN_10513710(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0x14));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_103be5e0(uVar1));
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }

  if (piVar3 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10513800; body size 114 bytes.
#line 1 "ENTRY_10513800"

void __stdcall FUN_10513800(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0x14));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_103be5e0(uVar1));
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  *param_1 = (undefined4)(piVar3);

  return;

 } catch (...) { }
}


// Reference entry 10513890; body size 118 bytes.
#line 1 "ENTRY_10513890"

undefined4 __thiscall Recovered_Bulk::FUN_10513890(undefined4 param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
 try {
  undefined4 uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (undefined4)((**(code **)(*param_1 + 0x2c))(&param_3,param_3,DAT_12126b84 ));

  uVar2 = (undefined4)((**(code **)(*param_1 + 0x34))());
  thunk_FUN_102178d0(param_2,uVar1,uVar2);

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4)(param_2);

 } catch (...) { }
}


// Reference entry 10513e90; body size 121 bytes.
#line 1 "ENTRY_10513e90"

void __thiscall Recovered_Bulk::FUN_10513e90(undefined4 *param_2)
{
  int *param_1 = (int *)this;
  undefined4 *_Dst;
  char *_Src;
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  size_t _Size;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x5c))());
  if (((cVar1 != '\0') && (_Src = (char *)param_1[0x3b], _Src != (char *)0x0)) && (*_Src != '\0')) {
    pcVar3 = (char *)(_Src);
    do {
      cVar1 = (char)(*pcVar3);
      pcVar3 = (char *)(pcVar3 + 1);
    } while (cVar1 != '\0');
    _Size = (size_t)((int)pcVar3 - (int)(_Src + 1));
    puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(_Size + 0x11));
    _Dst = (undefined4 *)(puVar2 + 4);
    *puVar2 = (undefined4)(1);
    puVar2[3] = _Size;
    puVar2[2] = 0;
    puVar2[1] = 0;
    memcpy(_Dst,_Src,_Size);
    *(undefined1 *)((int)_Dst + _Size) = 0;
    *param_2 = (undefined4)(_Dst);
    return;
  }
  *param_2 = (undefined4)(0);
  return;
}


// Reference entry 10514060; body size 202 bytes.
#line 1 "ENTRY_10514060"

undefined4 __thiscall Recovered_Bulk::FUN_10514060(undefined4 param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar3 = (int *)((int *)createSCActionFilterer());
  piVar1 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(uVar2));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  puVar4 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0xa0))(&local_18));
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x14))(param_2,*puVar4,param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined4)(param_2);

 } catch (...) { }
}


// Reference entry 10514ac0; body size 1137 bytes.
#line 1 "ENTRY_10514ac0"

undefined4 * __thiscall Recovered_Bulk::FUN_10514ac0(undefined4 *param_2,uint param_3)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  void *pvVar9;
  uint uVar10;
  int *piVar11;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar10 = (uint)(0);

  uVar4 = (uint)((**(code **)(*param_1 + 0x58))(DAT_12126b84 ));
  if (param_3 < uVar4) {
    uVar4 = (uint)((**(code **)(*(int *)param_1[0x87] + 0x58))());
    if (param_3 < uVar4) {
      (**(code **)(*(int *)param_1[0x87] + 0x98))(param_2,param_3);

      return (undefined4 *)(param_2);
    }
    iVar5 = (int)((**(code **)(*(int *)param_1[0x87] + 0x58))());
    iVar1 = (int)(param_1[0x8f]);
    param_3 = (uint)(param_3 - iVar5);
    if (param_3 < (uint)(param_1[0x90] - iVar1 >> 3)) {
      piVar2 = (int *)(*(int **)(iVar1 + 4 + param_3 * 8));
      piVar8 = (int *)(*(int **)(iVar1 + param_3 * 8));
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }

      uVar6 = (undefined4)(thunk_FUN_101ca730(&local_24));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      thunk_FUN_101c39c0(uVar6);
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      if (local_24 != (int *)0x0) {
        (**(code **)(*local_24 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 3;
      thunk_FUN_103be9e0(piVar8,0xffffffff);
      piVar11 = (int *)((int *)0x0);
      local_34 = (int *)((int *)0x0);
      *(unsigned char *)((char *)&local_8 + 0) = 5;
      cVar3 = (char)((**(code **)(*piVar8 + 0x30))());
      if (cVar3 == '\0') {
        pvVar9 = (void *)(operator_new(0x68));
        *(unsigned char *)((char *)&local_8 + 0) = 0x15;
        if (pvVar9 == (void *)0x0) {
          piVar8 = (int *)((int *)0x0);
        }
        else {
          ((SCStr *)((SCStr *)&local_20))->int_allocRep("");
          local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x16)));

          ((SCStr *)((SCStr *)&local_18))->int_allocRep("");


          ((SCStr *)((SCStr *)&local_1c))->int_allocRep("");


          uVar6 = (undefined4)((**(code **)(*piVar8 + 0x1c))(&local_24));

          uVar10 = (uint)(0x1e0);

          piVar8 = (int *)((int *)thunk_FUN_10cf6c80(&local_1c,uVar6,&local_18,0,1,&local_20,4,local_3c));
        }

        if (piVar8 != (int *)0x0) {
          piVar11 = (int *)((int *)(**(code **)(*piVar8 + 0xc))());
          (**(code **)(*piVar11 + 4))();
          local_34 = (int *)(piVar8);
        }
        if ((uVar10 & 0x100) != 0) {
          uVar10 = (uint)(uVar10 & 0xfffffeff);

          local_14 = (uint)(uVar10);
          ((SCStr *)((SCStr *)&local_24))->int_release();
          local_24 = (int *)((int *)0x0);
        }
        if ((char)uVar10 < '\0') {
          uVar10 = (uint)(uVar10 & 0xffffff7f);

          local_14 = (uint)(uVar10);
          ((SCStr *)((SCStr *)&local_1c))->int_release();

        }
        if ((uVar10 & 0x40) != 0) {
          uVar10 = (uint)(uVar10 & 0xffffffbf);

          local_14 = (uint)(uVar10);
          ((SCStr *)((SCStr *)&local_18))->int_release();

        }

        if ((uVar10 & 0x20) != 0) {
          *(unsigned char *)((char *)&local_8 + 0) = 0x21;
          *(unsigned short *)((char *)&local_8 + 1) = 0;
          ((SCStr *)((SCStr *)&local_20))->int_release();
          local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
        }
      }
      else {
        piVar7 = (int *)(operator_new(0x70));
        *(unsigned char *)((char *)&local_8 + 0) = 6;
        if (piVar7 == (int *)0x0) {
          piVar7 = (int *)((int *)0x0);
        }
        else {
          ((SCStr *)((SCStr *)&local_24))->int_allocRep("");
          local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));

          ((SCStr *)((SCStr *)&local_1c))->int_allocRep("");


          ((SCStr *)((SCStr *)&local_18))->int_allocRep("");


          uVar6 = (undefined4)((**(code **)(*piVar8 + 0x1c))(&local_20));

          uVar10 = (uint)(0x1e);

          thunk_FUN_10cf6c80(&local_18,uVar6,&local_1c,0,1,&local_24,4,0);
          *piVar7 = (int)((int)(uint)&ghidra_vftable_SCEphemeralBrowseItem);
          piVar7[6] = (int)(uint)&ghidra_vftable_SCEphemeralBrowseItem;

          piVar7[0x1a] = (int)local_3c;
          piVar7[0x1b] = 0;
          if (local_3c != (int *)0x0) {
            piVar8 = (int *)((int *)(**(code **)(*local_3c + 0xc))());
            piVar7[0x1b] = (int)piVar8;
            (**(code **)(*piVar8 + 4))();
          }
          local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xc)));
          thunk_FUN_104db5b0(4);
        }

        if (piVar7 != (int *)0x0) {
          piVar11 = (int *)(piVar7);
          if (*(code **)(*piVar7 + 0xc) != thunk_FUN_102116c0) {
            piVar11 = (int *)((int *)(**(code **)(*piVar7 + 0xc))());
          }
          (**(code **)(*piVar11 + 4))();
          local_34 = (int *)(piVar7);
        }
        if ((uVar10 & 0x10) != 0) {
          uVar10 = (uint)(uVar10 & 0xffffffef);

          local_14 = (uint)(uVar10);
          ((SCStr *)((SCStr *)&local_20))->int_release();

        }
        if ((uVar10 & 8) != 0) {
          uVar10 = (uint)(uVar10 & 0xfffffff7);

          local_14 = (uint)(uVar10);
          ((SCStr *)((SCStr *)&local_18))->int_release();

        }
        if ((uVar10 & 4) != 0) {
          uVar10 = (uint)(uVar10 & 0xfffffffb);

          local_14 = (uint)(uVar10);
          ((SCStr *)((SCStr *)&local_1c))->int_release();

        }

        if ((uVar10 & 2) != 0) {
          *(unsigned char *)((char *)&local_8 + 0) = 0x14;
          *(unsigned short *)((char *)&local_8 + 1) = 0;
          ((SCStr *)((SCStr *)&local_24))->int_release();
          local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
        }
      }
      *param_2 = (undefined4)(local_34);
      if (local_34 != (int *)0x0) {
        (**(code **)(*local_34 + 4))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0x22;
      if (piVar11 != (int *)0x0) {
        (**(code **)(*piVar11 + 8))();
      }
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x23)));
      if (local_38 != (int *)0x0) {
        (**(code **)(*local_38 + 8))();
      }

      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))();
      }

      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(0);

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 105150a0; body size 133 bytes.
#line 1 "ENTRY_105150a0"

void __thiscall Recovered_Bulk::FUN_105150a0(SCStr *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  SCStr *local_408;
  char local_404 [1024];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_408);
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x9c) != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 0x9c));
  }
  uVar1 = (uint)((uint)*(ushort *)(param_1 + 0x24c));
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0xa0) != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)(*(undefined1 **)(param_1 + 0xa0));
  }
  uVar5 = (undefined4)(0x400);
  pcVar4 = (char *)(local_404);
  local_408 = (SCStr *)(param_2);
  thunk_FUN_1109f7f0(uVar1,puVar3,puVar2,pcVar4,0x400);
  thunk_FUN_110a48f0(uVar1,puVar3,puVar2,pcVar4,uVar5);
  ((SCStr *)(param_2))->int_allocRep(local_404);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10515170; body size 208 bytes.
#line 1 "ENTRY_10515170"

int __fastcall FUN_10515170(int *param_1)

{
 try {
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  SCLibrary *pSVar6;
  SCStr *pSVar7;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int *)(param_1);
  cVar3 = (char)((**(code **)(*param_1 + 0x5c))(DAT_12126b84 ));
  if (cVar3 != '\0') {
    iVar1 = (int)(param_1[0x90]);
    iVar2 = (int)(param_1[0x8f]);
    iVar5 = (int)((**(code **)(*(int *)param_1[0x87] + 0x58))());

    return (int)(iVar5 + (iVar1 - iVar2 >> 3));
  }
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("WOO_WOO");
  pSVar7 = (SCStr *)((SCStr *)&local_14);

  pSVar6 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  bVar4 = (bool)(((SCLibParameters *)(*(SCLibParameters **)(pSVar6 + 0x4c)))->hasDeveloperOption(pSVar7));

  ((SCStr *)((SCStr *)&local_14))->int_release();
  if (bVar4) {

    return (int)(0);
  }

  return (int)(param_1[0x90] - param_1[0x8f] >> 3);

 } catch (...) { }
}


// Reference entry 10515e30; body size 128 bytes.
#line 1 "ENTRY_10515e30"

int * __thiscall Recovered_Bulk::FUN_10515e30(int *param_2)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  iVar1 = (int)(*(int *)(param_1 + 0x14));
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }
  iVar1 = (int)(*(int *)(param_1 + 0x18));

  param_2[1] = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 105168f0; body size 128 bytes.
#line 1 "ENTRY_105168f0"

int * __thiscall Recovered_Bulk::FUN_105168f0(int *param_2)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  iVar1 = (int)(*(int *)(param_1 + 0x1c));
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }
  iVar1 = (int)(*(int *)(param_1 + 0x20));

  param_2[1] = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 10516a30; body size 206 bytes.
#line 1 "ENTRY_10516a30"

int * __stdcall FUN_10516a30(int *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *local_18;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar3 = (int *)((int *)createSCStringArray());
  piVar1 = (int *)((int *)*piVar3);

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
  ((SCStr *)(local_14))->int_allocRep("SCIActionCategoryDefault");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x24))(local_14);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)(local_14))->int_release();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 10516d00; body size 232 bytes.
#line 1 "ENTRY_10516d00"

int * __thiscall Recovered_Bulk::FUN_10516d00(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  if (*(int *)(param_1 + 0x94) == 0) {
    pvVar3 = (void *)(operator_new(0x38));

    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar4 = (int *)((int *)thunk_FUN_1050f4c0(param_1));
    }

    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    piVar1 = (int *)(*(int **)(param_1 + 0x98));

    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x94) = 0;
      *(undefined4 *)(param_1 + 0x98) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0x94) = piVar4;
    if (piVar4 == (int *)0x0) {
      uVar5 = (undefined4)(0);
    }
    else {
      uVar5 = (undefined4)((**(code **)(*piVar4 + 0xc))());
    }
    *(undefined4 *)(param_1 + 0x98) = uVar5;
  }

  piVar4 = (int *)(*(int **)(param_1 + 0x94));
  *param_2 = (int)((int)piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(uVar2);
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 10516eb0; body size 293 bytes.
#line 1 "ENTRY_10516eb0"

void __fastcall FUN_10516eb0(int param_1)

{
 try {
  undefined4 *puVar1;
  undefined1 *puVar2;
  int *local_270;
  SCStr local_26c [4];
  undefined4 local_268;
  void *local_264;
  undefined1 *puStack_260;
  undefined4 local_25c;
  undefined1 local_258 [592];
  uint local_8;


  local_8 = (uint)(DAT_12126b84 ^ (uint)local_258);

  thunk_FUN_11255220(local_8);

  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0xa0) != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 0xa0));
  }
  thunk_FUN_112580d0(puVar2);
  ((SCStr *)(local_26c))->int_allocRep("custom_sd_as_sonos_radio");
  local_25c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_25c + 1)) << 8 | (uint)(1)));

  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_102518f0(&local_270));


  (**(code **)(*(int *)*puVar1 + 0x18))(local_26c);


  if (local_270 != (int *)0x0) {
    (**(code **)(*local_270 + 8))();
  }

  ((SCStr *)(local_26c))->int_release();
  thunk_FUN_11255560();

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10517080; body size 214 bytes.
#line 1 "ENTRY_10517080"

void __fastcall FUN_10517080(int param_1)

{
 try {
  int *piVar1;
  char cVar2;
  int *piVar3;
  SCStr aSStack_30 [4];
  int *piStack_2c;
  int *piStack_28;
  uint uStack_24;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uStack_24 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 0x94));
  if ((piVar1 != (int *)0x0) && (piStack_28 = (int *)(param_1 + 0x21c), *piStack_28 != 0)) {
    piStack_2c = (int *)((int *)0x105170cd);
    thunk_FUN_1050e710();

    if ((local_14 != (int *)0x0) && ((int *)piVar1[0xc] != local_14)) {
      piVar3 = (int *)((int *)piVar1[0xd]);
      if (piVar3 != (int *)0x0) {
        piVar1[0xc] = 0;
        piVar1[0xd] = 0;
        piStack_28 = (int *)((int *)0x105170fa);
        (**(code **)(*piVar3 + 8))();
      }
      piVar1[0xc] = (int)local_14;
      piStack_28 = (int *)((int *)0x10517104);
      piVar3 = (int *)((int *)(**(code **)(*local_14 + 0xc))());
      piVar1[0xd] = (int)piVar3;
      piStack_28 = (int *)((int *)0x1051710e);
      (**(code **)(*piVar3 + 4))();
      piStack_28 = (int *)((int *)0x10517117);
      cVar2 = (char)((**(code **)(*piVar1 + 0x20))());
      if (cVar2 != '\0') {
        piStack_28 = (int *)((int *)0x0);
        piStack_2c = (int *)(piVar1);
        ((SCStr *)(aSStack_30))->int_allocRep("SCIInfoViewHeaderDataSource:onChanged");
        thunk_FUN_103d65f0();
      }
    }

    if (local_14 != (int *)0x0) {
      piStack_28 = (int *)((int *)0x10517145);
      (**(code **)(*local_14 + 8))();
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 105192b0; body size 348 bytes.
#line 1 "ENTRY_105192b0"

void __fastcall FUN_105192b0(int param_1)

{
 try {
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_104d9cc0(DAT_12126b84 );
  puVar1 = (undefined4 *)((undefined4 *)(param_1 + 0x23c));
  thunk_FUN_101c42f0(*puVar1,*(undefined4 *)(param_1 + 0x240),puVar1);
  *(undefined4 *)(param_1 + 0x240) = *puVar1;
  piVar2 = (int *)((int *)thunk_FUN_104ea590());
  piVar3 = (int *)((int *)0x0);
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
    (**(code **)(*piVar3 + 4))();
  }

  if (piVar2 != (int *)0x0) {
    if ((*(char **)(param_1 + 0x9c) != (char *)0x0) && (**(char **)(param_1 + 0x9c) != '\0')) {
      thunk_FUN_104ed040(param_1 + 0x90,param_1 + 0x9c);
    }
  }
  if (*(int *)(param_1 + 0x248) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x248) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x248))(1);
    }
    *(undefined4 *)(param_1 + 0x248) = 0;
  }
  thunk_FUN_110b0460(1);
  thunk_FUN_110adac0(param_1 + 0x84);
  if (*(int **)(param_1 + 0x21c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x21c) + 0x18))(param_1 + 0x80);
    if (*(int *)(param_1 + 0x21c) != 0) {
      piVar2 = (int *)(*(int **)(param_1 + 0x220));
      if (piVar2 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x21c) = 0;
        *(undefined4 *)(param_1 + 0x220) = 0;
        (**(code **)(*piVar2 + 8))();
      }
      *(undefined4 *)(param_1 + 0x21c) = 0;
      *(undefined4 *)(param_1 + 0x220) = 0;
    }
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10519480; body size 118 bytes.
#line 1 "ENTRY_10519480"

void __stdcall FUN_10519480(int param_1)

{
 try {
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  if ((param_1 != 0) && (*(int *)(param_1 + -0x10) < 0xffff)) {
    iVar1 = (int)(thunk_FUN_1123fcd0((void *)(param_1 + -0x10),DAT_12126b84 ));
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + -8) = 0;
      *(undefined4 *)(param_1 + -0xc) = 0;
      thunk_FUN_113cfb70(param_1,*(undefined4 *)(param_1 + -4));
      free((void *)(param_1 + -0x10));
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10519b40; body size 103 bytes.
#line 1 "ENTRY_10519b40"

undefined4 * __thiscall Recovered_Bulk::FUN_10519b40(undefined4 *param_2,SCStr *param_3)
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


// Reference entry 10519bc0; body size 103 bytes.
#line 1 "ENTRY_10519bc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10519bc0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIInfoViewHeaderDataSource"));
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


// Reference entry 10519c40; body size 226 bytes.
#line 1 "ENTRY_10519c40"

undefined4 * __thiscall Recovered_Bulk::FUN_10519c40(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
 try {
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIInfoViewHeaderDataSource"));
  piVar4 = (int *)(param_1);
  if (bVar1) {
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (bVar1) {
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 4))(uVar2);
      }
    }
    else {
      piVar4 = (int *)((int *)0x0);
    }
  }

  if (piVar4 == (int *)0x0) {
    if (param_1[2] == 0) {
      *param_2 = (undefined4)(0);

      return (undefined4 *)(param_2);
    }
    puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x3c))());
    (**(code **)*puVar3)(param_2,param_3);

    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(piVar4);

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10519d60; body size 449 bytes.
#line 1 "ENTRY_10519d60"

int * __thiscall Recovered_Bulk::FUN_10519d60(int *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
 try {
  int *piVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  int *piVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  bVar2 = (bool)(((SCStr *)(param_3))->op_eq("SCIBrowseDataSource"));
  if (!bVar2) {
    bVar2 = (bool)(((SCStr *)(param_3))->op_eq("SCIInfoViewHeaderDataSource"));
    if (bVar2) {
      if (param_1[0x25] == 0) {
        pvVar4 = (void *)(operator_new(0x38));

        if (pvVar4 == (void *)0x0) {
          piVar5 = (int *)((int *)0x0);
        }
        else {
          piVar5 = (int *)((int *)thunk_FUN_1050f4c0(param_1));
        }

        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 4))(uVar3);
        }
        piVar1 = (int *)((int *)param_1[0x26]);

        if (piVar1 != (int *)0x0) {
          param_1[0x25] = 0;
          param_1[0x26] = 0;
          (**(code **)(*piVar1 + 8))();
        }
        param_1[0x25] = (int)piVar5;
        if (piVar5 == (int *)0x0) {
          iVar6 = (int)(0);
        }
        else {
          iVar6 = (int)((**(code **)(*piVar5 + 0xc))());
        }
        param_1[0x26] = iVar6;

      }
      piVar5 = (int *)((int *)param_1[0x25]);
      *param_2 = (int)((int)piVar5);
      if (piVar5 == (int *)0x0) {

        return (int *)(param_2);
      }
      (**(code **)(*piVar5 + 4))();

      return (int *)(param_2);
    }
    bVar2 = (bool)(((SCStr *)(param_3))->op_eq("SCIBrowseGroupsInfo"));
    if (bVar2) {
      piVar5 = (int *)(param_1 + 0x22);
    }
    else {
      bVar2 = (bool)(((SCStr *)(param_3))->op_eq("SCIEventSink"));
      if (!bVar2) {
        bVar2 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
        if (!bVar2) {
          *param_2 = (int)(0);

          return (int *)(param_2);
        }
        *param_2 = (int)((int)param_1);
        if (param_1 == (int *)0x0) {

          return (int *)(param_2);
        }
        (**(code **)(*param_1 + 4))();

        return (int *)(param_2);
      }
      piVar5 = (int *)(param_1 + 0x20);
    }
    param_1 = (int *)((int *)(-(uint)(param_1 != (int *)0x0) & (uint)piVar5));
  }
  *param_2 = (int)((int)param_1);
  if (param_1 == (int *)0x0) {

    return (int *)(param_2);
  }
  (**(code **)(*param_1 + 4))();

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 10519fc0; body size 233 bytes.
#line 1 "ENTRY_10519fc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10519fc0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
 try {
  SCStr *this_;
  bool bVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  this_ = (SCStr *)(param_3);


  uVar2 = (uint)(DAT_12126b84);

  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIInfoViewHeaderDataSource"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  else {
    thunk_FUN_10519c40(&param_3,this_);

    if (param_3 != (SCStr *)0x0) {
      *param_2 = (undefined4)(param_3);

      return (undefined4 *)(param_2);
    }
    bVar1 = (bool)(((SCStr *)(this_))->op_eq("SCIObj"));
    if (bVar1) {
      *param_2 = (undefined4)(param_1);
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 4))();
      }

      if (param_3 != (SCStr *)0x0) {
        (**(code **)(*(int *)param_3 + 8))();
      }
    }
    else {
      *param_2 = (undefined4)(0);

      if (param_3 != (SCStr *)0x0) {
        (**(code **)(*(int *)param_3 + 8))(uVar2);
      }
    }
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 1051a0f0; body size 103 bytes.
#line 1 "ENTRY_1051a0f0"

undefined4 * __thiscall Recovered_Bulk::FUN_1051a0f0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIBrowseItem"));
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


// Reference entry 1051a500; body size 98 bytes.
#line 1 "ENTRY_1051a500"

void __fastcall FUN_1051a500(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  
  thunk_FUN_110b0460(1);
  iVar4 = (int)(param_1 + 0x84);
  iVar2 = (int)(iVar4);
  if (param_1 == 0) {
    iVar2 = (int)(0);
  }
  thunk_FUN_110adac0(iVar2);
  if (param_1 == 0) {
    iVar4 = (int)(0);
  }
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x9c) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x9c));
  }
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0xa0) != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)(*(undefined1 **)(param_1 + 0xa0));
  }
  thunk_FUN_110b3620(iVar4,puVar3,puVar1,0,0);
  return;
}


// Reference entry 1051b4a0; body size 169 bytes.
#line 1 "ENTRY_1051b4a0"

int * __thiscall Recovered_Bulk::FUN_1051b4a0(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = (undefined4 *)(param_2);


  uVar3 = (uint)(DAT_12126b84);

  *param_1 = (int)(0);
  if (param_2 != (undefined4 *)0x0) {
    local_14 = (int *)(param_1);
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIBrowseMetadata");

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

    ((SCStr *)((SCStr *)&param_2))->int_release();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 1051b5b0; body size 114 bytes.
#line 1 "ENTRY_1051b5b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1051b5b0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1051b640; body size 114 bytes.
#line 1 "ENTRY_1051b640"

undefined4 * __thiscall Recovered_Bulk::FUN_1051b640(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1051b6d0; body size 114 bytes.
#line 1 "ENTRY_1051b6d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1051b6d0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1051b760; body size 114 bytes.
#line 1 "ENTRY_1051b760"

undefined4 * __thiscall Recovered_Bulk::FUN_1051b760(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1051c250; body size 312 bytes.
#line 1 "ENTRY_1051c250"

undefined4 * __thiscall Recovered_Bulk::FUN_1051c250(int param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 *puVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  puVar1 = (undefined4 *)(param_1 + 2);

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
  param_1[0x12] = (uint)&ghidra_vftable_SCIOperationProgress;
  param_1[0x13] = param_3;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpWithProgressInfo);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpWithProgressInfo);
  param_1[0x12] = (uint)&ghidra_vftable_SCOpWithProgressInfo;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1051c3e0; body size 173 bytes.
#line 1 "ENTRY_1051c3e0"

undefined4 * __thiscall Recovered_Bulk::FUN_1051c3e0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSelectedItemsAddToQueueAtIdxAction);
  param_1[4] = (uint)&ghidra_vftable_RControlAIOOpRefBase;

  param_1[5] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[6] = 0;
  param_1[4] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 7) = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1051c4c0; body size 173 bytes.
#line 1 "ENTRY_1051c4c0"

undefined4 * __thiscall Recovered_Bulk::FUN_1051c4c0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSelectedItemsPlayNextAction);
  param_1[4] = (uint)&ghidra_vftable_RControlAIOOpRefBase;

  param_1[5] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[6] = 0;
  param_1[4] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 7) = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1051c6b0; body size 167 bytes.
#line 1 "ENTRY_1051c6b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1051c6b0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSelectedItemsReplaceQueueAction);
  param_1[4] = (uint)&ghidra_vftable_RControlAIOOpRefBase;

  param_1[5] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[6] = 0;
  param_1[4] = (uint)&ghidra_vftable_RControlAIOOpRef;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1051c800; body size 68 bytes.
#line 1 "ENTRY_1051c800"

void __fastcall FUN_1051c800(int *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 1051c870; body size 489 bytes.
#line 1 "ENTRY_1051c870"

void __fastcall FUN_1051c870(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RSelectedBrowseItemsOpBase);
  param_1[2] = (uint)&ghidra_vftable_RSelectedBrowseItemsOpBase;
  param_1[7] = (uint)&ghidra_vftable_RSelectedBrowseItemsOpBase;
  param_1[8] = (uint)&ghidra_vftable_RSelectedBrowseItemsOpBase;
  thunk_FUN_10520f40(uVar2);
  piVar1 = (int *)((int *)param_1[0xf]);
  if (piVar1 != (int *)0x0) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  piVar1 = (int *)((int *)param_1[0x11]);
  if (piVar1 != (int *)0x0) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x21)))->int_release();
  param_1[0x21] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x20)))->int_release();
  param_1[0x20] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x1e)))->int_release();
  param_1[0x1e] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x1d)))->int_release();
  param_1[0x1d] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x1c)))->int_release();
  param_1[0x1c] = 0;
  piVar1 = (int *)((int *)param_1[0x19]);

  if (piVar1 != (int *)0x0) {
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x17]);

  if (piVar1 != (int *)0x0) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x11]);

  if (piVar1 != (int *)0x0) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0xf]);

  if (piVar1 != (int *)0x0) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0xb] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  param_1[8] = (uint)&ghidra_vftable_SCBrowseItemEventSink;
  piVar1 = (int *)((int *)param_1[10]);

  if (piVar1 != (int *)0x0) {
    param_1[9] = 0;
    param_1[10] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[7] = (uint)&ghidra_vftable_RProgressInfoForSCOp;
  thunk_FUN_11261f10();

  return;

 } catch (...) { }
}


// Reference entry 1051cae0; body size 319 bytes.
#line 1 "ENTRY_1051cae0"

void __fastcall FUN_1051cae0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RSelectedItemsAddToQueueAtIdxOp);
  param_1[2] = (uint)&ghidra_vftable_RSelectedItemsAddToQueueAtIdxOp;
  param_1[7] = (uint)&ghidra_vftable_RSelectedItemsAddToQueueAtIdxOp;
  param_1[8] = (uint)&ghidra_vftable_RSelectedItemsAddToQueueAtIdxOp;

  ((SCStr *)((SCStr *)(param_1 + 0x39)))->int_release();
  param_1[0x39] = 0;
  param_1[0x36] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0(uVar1);
  param_1[0x31] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();

  ((SCStr *)((SCStr *)(param_1 + 0x2e)))->int_release();
  param_1[0x2e] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x2d)))->int_release();
  param_1[0x2d] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x2b)))->int_release();
  param_1[0x2b] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x2a)))->int_release();
  param_1[0x2a] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x29)))->int_release();
  param_1[0x29] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x28)))->int_release();
  param_1[0x28] = 0;
  thunk_FUN_1051c870();

  return;

 } catch (...) { }
}


// Reference entry 1051cc80; body size 291 bytes.
#line 1 "ENTRY_1051cc80"

void __fastcall FUN_1051cc80(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RSelectedItemsPlayNextOp);
  param_1[2] = (uint)&ghidra_vftable_RSelectedItemsPlayNextOp;
  param_1[7] = (uint)&ghidra_vftable_RSelectedItemsPlayNextOp;
  param_1[8] = (uint)&ghidra_vftable_RSelectedItemsPlayNextOp;
  param_1[0x35] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0(uVar1);
  param_1[0x31] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();

  ((SCStr *)((SCStr *)(param_1 + 0x2d)))->int_release();
  param_1[0x2d] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x2c)))->int_release();
  param_1[0x2c] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x2a)))->int_release();
  param_1[0x2a] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x29)))->int_release();
  param_1[0x29] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x28)))->int_release();
  param_1[0x28] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x27)))->int_release();
  param_1[0x27] = 0;
  thunk_FUN_1051c870();

  return;

 } catch (...) { }
}


// Reference entry 1051ce00; body size 218 bytes.
#line 1 "ENTRY_1051ce00"

void __fastcall FUN_1051ce00(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RSelectedItemsPlayNowOp);
  param_1[2] = (uint)&ghidra_vftable_RSelectedItemsPlayNowOp;
  param_1[7] = (uint)&ghidra_vftable_RSelectedItemsPlayNowOp;
  param_1[8] = (uint)&ghidra_vftable_RSelectedItemsPlayNowOp;
  param_1[0x2e] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0(uVar1);

  ((SCStr *)((SCStr *)(param_1 + 0x2c)))->int_release();
  param_1[0x2c] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x2a)))->int_release();
  param_1[0x2a] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x28)))->int_release();
  param_1[0x28] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x27)))->int_release();
  param_1[0x27] = 0;
  thunk_FUN_1051c870();

  return;

 } catch (...) { }
}


// Reference entry 1051cf20; body size 437 bytes.
#line 1 "ENTRY_1051cf20"

/* WARNING: Removing unreachable block (ram,0x1051d031) */
/* WARNING: Removing unreachable block (ram,0x1051d041) */
/* WARNING: Removing unreachable block (ram,0x1051d045) */

void __fastcall FUN_1051cf20(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RSelectedItemsReplaceQueueOp);
  param_1[2] = (uint)&ghidra_vftable_RSelectedItemsReplaceQueueOp;
  param_1[7] = (uint)&ghidra_vftable_RSelectedItemsReplaceQueueOp;
  param_1[8] = (uint)&ghidra_vftable_RSelectedItemsReplaceQueueOp;
  piVar4 = (int *)((int *)param_1[0x2e]);
  if (piVar4 != (int *)0x0) {
    if (param_1[0x2f] != 0) {
      (**(code **)(*piVar4 + 0x10))(uVar2);
      piVar4 = (int *)((int *)param_1[0x2e]);
    }
    if (((piVar4 != (int *)0x0) && (iVar3 = thunk_FUN_1123fcd0(piVar4 + 1), iVar3 == 0)) &&
       (piVar4 != (int *)0x0)) {
      (**(code **)*piVar4)(1);
    }
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
  }
  param_1[0x31] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();

  param_1[0x2d] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  if ((int *)param_1[0x2e] != (int *)0x0) {
    if (param_1[0x2f] != 0) {
      (**(code **)(*(int *)param_1[0x2e] + 0x10))();
    }
    puVar1 = (undefined4 *)((undefined4 *)param_1[0x2e]);
    if ((puVar1 != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1), iVar3 == 0)) {
      (**(code **)*puVar1)(1);
    }
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
  }

  ((SCStr *)((SCStr *)(param_1 + 0x2b)))->int_release();
  param_1[0x2b] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x2a)))->int_release();
  param_1[0x2a] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x28)))->int_release();
  param_1[0x28] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x27)))->int_release();
  param_1[0x27] = 0;
  thunk_FUN_1051c870();

  return;

 } catch (...) { }
}


// Reference entry 1051d1b0; body size 124 bytes.
#line 1 "ENTRY_1051d1b0"

void __fastcall FUN_1051d1b0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSelectedItemsAddToQueueAtIdxAction);
  param_1[4] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0(uVar2);
  piVar1 = (int *)((int *)param_1[3]);

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 1051d260; body size 124 bytes.
#line 1 "ENTRY_1051d260"

void __fastcall FUN_1051d260(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSelectedItemsPlayNextAction);
  param_1[4] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0(uVar2);
  piVar1 = (int *)((int *)param_1[3]);

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 1051d310; body size 148 bytes.
#line 1 "ENTRY_1051d310"

void __fastcall FUN_1051d310(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSelectedItemsPlayNowAction);

  ((SCStr *)((SCStr *)(param_1 + 8)))->int_release();
  param_1[8] = 0;
  param_1[4] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0(uVar2);
  piVar1 = (int *)((int *)param_1[3]);

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 1051d3d0; body size 124 bytes.
#line 1 "ENTRY_1051d3d0"

void __fastcall FUN_1051d3d0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSelectedItemsReplaceQueueAction);
  param_1[4] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0(uVar2);
  piVar1 = (int *)((int *)param_1[3]);

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 1051d7c0; body size 343 bytes.
#line 1 "ENTRY_1051d7c0"

undefined4 * __thiscall Recovered_Bulk::FUN_1051d7c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RSelectedItemsAddToQueueAtIdxOp);
  param_1[2] = (uint)&ghidra_vftable_RSelectedItemsAddToQueueAtIdxOp;
  param_1[7] = (uint)&ghidra_vftable_RSelectedItemsAddToQueueAtIdxOp;
  param_1[8] = (uint)&ghidra_vftable_RSelectedItemsAddToQueueAtIdxOp;

  ((SCStr *)((SCStr *)(param_1 + 0x39)))->int_release();
  param_1[0x39] = 0;
  param_1[0x36] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0(uVar1);
  param_1[0x31] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();

  ((SCStr *)((SCStr *)(param_1 + 0x2e)))->int_release();
  param_1[0x2e] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x2d)))->int_release();
  param_1[0x2d] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x2b)))->int_release();
  param_1[0x2b] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x2a)))->int_release();
  param_1[0x2a] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x29)))->int_release();
  param_1[0x29] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x28)))->int_release();
  param_1[0x28] = 0;
  thunk_FUN_1051c870();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe8);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1051d980; body size 315 bytes.
#line 1 "ENTRY_1051d980"

undefined4 * __thiscall Recovered_Bulk::FUN_1051d980(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RSelectedItemsPlayNextOp);
  param_1[2] = (uint)&ghidra_vftable_RSelectedItemsPlayNextOp;
  param_1[7] = (uint)&ghidra_vftable_RSelectedItemsPlayNextOp;
  param_1[8] = (uint)&ghidra_vftable_RSelectedItemsPlayNextOp;
  param_1[0x35] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0(uVar1);
  param_1[0x31] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();

  ((SCStr *)((SCStr *)(param_1 + 0x2d)))->int_release();
  param_1[0x2d] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x2c)))->int_release();
  param_1[0x2c] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x2a)))->int_release();
  param_1[0x2a] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x29)))->int_release();
  param_1[0x29] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x28)))->int_release();
  param_1[0x28] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x27)))->int_release();
  param_1[0x27] = 0;
  thunk_FUN_1051c870();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1051db10; body size 242 bytes.
#line 1 "ENTRY_1051db10"

undefined4 * __thiscall Recovered_Bulk::FUN_1051db10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RSelectedItemsPlayNowOp);
  param_1[2] = (uint)&ghidra_vftable_RSelectedItemsPlayNowOp;
  param_1[7] = (uint)&ghidra_vftable_RSelectedItemsPlayNowOp;
  param_1[8] = (uint)&ghidra_vftable_RSelectedItemsPlayNowOp;
  param_1[0x2e] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0(uVar1);

  ((SCStr *)((SCStr *)(param_1 + 0x2c)))->int_release();
  param_1[0x2c] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x2a)))->int_release();
  param_1[0x2a] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x28)))->int_release();
  param_1[0x28] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x27)))->int_release();
  param_1[0x27] = 0;
  thunk_FUN_1051c870();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc4);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1051dd50; body size 145 bytes.
#line 1 "ENTRY_1051dd50"

undefined4 * __thiscall Recovered_Bulk::FUN_1051dd50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSelectedItemsAddToQueueAtIdxAction);
  param_1[4] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0(uVar2);
  piVar1 = (int *)((int *)param_1[3]);

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1051de10; body size 145 bytes.
#line 1 "ENTRY_1051de10"

undefined4 * __thiscall Recovered_Bulk::FUN_1051de10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSelectedItemsPlayNextAction);
  param_1[4] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0(uVar2);
  piVar1 = (int *)((int *)param_1[3]);

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1051ded0; body size 169 bytes.
#line 1 "ENTRY_1051ded0"

undefined4 * __thiscall Recovered_Bulk::FUN_1051ded0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSelectedItemsPlayNowAction);

  ((SCStr *)((SCStr *)(param_1 + 8)))->int_release();
  param_1[8] = 0;
  param_1[4] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0(uVar2);
  piVar1 = (int *)((int *)param_1[3]);

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1051dfb0; body size 145 bytes.
#line 1 "ENTRY_1051dfb0"

undefined4 * __thiscall Recovered_Bulk::FUN_1051dfb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSelectedItemsReplaceQueueAction);
  param_1[4] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0(uVar2);
  piVar1 = (int *)((int *)param_1[3]);

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1051f810; body size 269 bytes.
#line 1 "ENTRY_1051f810"

int * __thiscall Recovered_Bulk::FUN_1051f810(int *param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  uint uVar2;
  int *piVar3;
  SCLibrary *this_;
  int *piVar4;
  int *piVar5;
  SCIOp *pSVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);
  if (param_3 == (int *)0x0) {

    param_3 = (int *)(operator_new(0x50));

    if (param_3 == (int *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      iVar1 = (int)(*(int *)(param_1 + 0x14));
      piVar3 = (int *)((int *)thunk_FUN_1051c250(iVar1,-(uint)(iVar1 != 0) & iVar1 + 0x1cU));
    }
    piVar5 = (int *)((int *)0x0);

    if (piVar3 != (int *)0x0) {
      piVar5 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(uVar2));
      (**(code **)(*piVar5 + 4))();
    }
    pSVar6 = (SCIOp *)((SCIOp *)&param_3);

    this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    piVar4 = (int *)((int *)((SCLibrary *)(this_))->createSCRunAsyncIOOperationAction(pSVar6));
    piVar4 = (int *)((int *)*piVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    *param_2 = (int)((int)piVar4);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar3);
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 8))();
    }

    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))();
    }

    return (int *)(param_2);
  }
  *param_2 = (int)(0);
  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 1051fa80; body size 408 bytes.
#line 1 "ENTRY_1051fa80"

undefined4 * __thiscall Recovered_Bulk::FUN_1051fa80(undefined4 *param_2,int *param_3,void *param_4)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  SCLibrary *this_;
  undefined4 *puVar4;
  int *piVar5;
  SCIAction *pSVar6;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar1 = (int)(thunk_FUN_10579010(param_3,&local_14,DAT_12126b84 ));
  if (iVar1 == 0) {
    *param_2 = (undefined4)(0);

    ((SCStr *)((SCStr *)&local_14))->int_release();

    return (undefined4 *)(param_2);
  }
  param_3 = (int *)(operator_new(0xe8));
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (param_3 == (void *)0x0) {
    uVar2 = (undefined4)(0);
  }
  else {
    uVar2 = (undefined4)(thunk_FUN_1051bbe0(iVar1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                               param_1 + 0x14,param_4,&local_14,5));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0;
  param_3 = (int *)(operator_new(0x20));
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_3 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    param_4 = (void *)(operator_new(0x20));
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    if (param_4 == (void *)0x0) {
      *(unsigned char *)((char *)&local_8 + 0) = 3;
      piVar3 = (int *)((int *)thunk_FUN_10200f40(0));
    }
    else {
      uVar2 = (undefined4)(thunk_FUN_1051c3e0(uVar2));
      *(unsigned char *)((char *)&local_8 + 0) = 3;
      piVar3 = (int *)((int *)thunk_FUN_10200f40(uVar2));
    }
  }
  piVar5 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0;
  if (piVar3 != (int *)0x0) {
    piVar5 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
    (**(code **)(*piVar5 + 4))();
  }
  pSVar6 = (SCIAction *)((SCIAction *)&param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  puVar4 = (undefined4 *)((undefined4 *)((SCLibrary *)(this_))->createActionContextForAction(pSVar6));
  *param_2 = (undefined4)(0);
  uVar2 = (undefined4)(*puVar4);
  *puVar4 = (undefined4)(0);
  *param_2 = (undefined4)(uVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))(piVar3);
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 1051fc80; body size 407 bytes.
#line 1 "ENTRY_1051fc80"

undefined4 * __thiscall Recovered_Bulk::FUN_1051fc80(undefined4 *param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  int *piVar4;
  SCLibrary *this_;
  undefined4 *puVar5;
  int *piVar6;
  SCIAction *pSVar7;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar1 = (int)(thunk_FUN_10579010(param_3,&local_14,DAT_12126b84 ));
  if (iVar1 == 0) {
    *param_2 = (undefined4)(0);

    ((SCStr *)((SCStr *)&local_14))->int_release();

    return (undefined4 *)(param_2);
  }
  param_3 = (int *)(operator_new(0xe8));
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (param_3 == (void *)0x0) {
    uVar2 = (undefined4)(0);
  }
  else {
    uVar2 = (undefined4)(thunk_FUN_1051bbe0(iVar1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                               param_1 + 0x14,0,&local_14,5));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0;
  param_3 = (int *)(operator_new(0x20));
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_3 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    pvVar3 = (void *)(operator_new(0x20));
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    if (pvVar3 == (void *)0x0) {
      *(unsigned char *)((char *)&local_8 + 0) = 3;
      piVar4 = (int *)((int *)thunk_FUN_10200f40(0));
    }
    else {
      uVar2 = (undefined4)(thunk_FUN_1051c3e0(uVar2));
      *(unsigned char *)((char *)&local_8 + 0) = 3;
      piVar4 = (int *)((int *)thunk_FUN_10200f40(uVar2));
    }
  }
  piVar6 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0;
  if (piVar4 != (int *)0x0) {
    piVar6 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
    (**(code **)(*piVar6 + 4))();
  }
  pSVar7 = (SCIAction *)((SCIAction *)&param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  puVar5 = (undefined4 *)((undefined4 *)((SCLibrary *)(this_))->createActionContextForAction(pSVar7));
  *param_2 = (undefined4)(0);
  uVar2 = (undefined4)(*puVar5);
  *puVar5 = (undefined4)(0);
  *param_2 = (undefined4)(uVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))(piVar4);
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10520a20; body size 139 bytes.
#line 1 "ENTRY_10520a20"

char * __thiscall Recovered_Bulk::FUN_10520a20(char *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  int iVar2;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  param_2[0] = '\0';
  param_2[1] = '\0';
  param_2[2] = '\0';
  param_2[3] = '\0';
  iVar2 = (int)(*(int *)(param_1 + 0x50));

  if (iVar2 < 0) {
    if (*(int **)(param_1 + 0x1c) == (int *)0x0) {
      iVar2 = (int)(0);
    }
    else {
      iVar2 = (int)((**(code **)(**(int **)(param_1 + 0x1c) + 0x24))(uVar1));
    }
  }
  thunk_FUN_1109af40(0x2220,&DAT_11887580,iVar2,iVar2);
  ((SCStr *)(this_))->format(param_2);

  return (char *)(param_2);

 } catch (...) { }
}


// Reference entry 10520ad0; body size 139 bytes.
#line 1 "ENTRY_10520ad0"

char * __thiscall Recovered_Bulk::FUN_10520ad0(char *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  int iVar2;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  param_2[0] = '\0';
  param_2[1] = '\0';
  param_2[2] = '\0';
  param_2[3] = '\0';
  iVar2 = (int)(*(int *)(param_1 + 0x50));

  if (iVar2 < 0) {
    if (*(int **)(param_1 + 0x1c) == (int *)0x0) {
      iVar2 = (int)(0);
    }
    else {
      iVar2 = (int)((**(code **)(**(int **)(param_1 + 0x1c) + 0x24))(uVar1));
    }
  }
  thunk_FUN_1109af40(0x2220,&DAT_11887580,iVar2,iVar2);
  ((SCStr *)(this_))->format(param_2);

  return (char *)(param_2);

 } catch (...) { }
}


// Reference entry 10520b80; body size 139 bytes.
#line 1 "ENTRY_10520b80"

char * __thiscall Recovered_Bulk::FUN_10520b80(char *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  int iVar2;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  param_2[0] = '\0';
  param_2[1] = '\0';
  param_2[2] = '\0';
  param_2[3] = '\0';
  iVar2 = (int)(*(int *)(param_1 + 0x50));

  if (iVar2 < 0) {
    if (*(int **)(param_1 + 0x1c) == (int *)0x0) {
      iVar2 = (int)(0);
    }
    else {
      iVar2 = (int)((**(code **)(**(int **)(param_1 + 0x1c) + 0x24))(uVar1));
    }
  }
  thunk_FUN_1109af40(0x2219,&DAT_11887580,iVar2,iVar2);
  ((SCStr *)(this_))->format(param_2);

  return (char *)(param_2);

 } catch (...) { }
}


// Reference entry 10520c30; body size 139 bytes.
#line 1 "ENTRY_10520c30"

char * __thiscall Recovered_Bulk::FUN_10520c30(char *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  int iVar2;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  param_2[0] = '\0';
  param_2[1] = '\0';
  param_2[2] = '\0';
  param_2[3] = '\0';
  iVar2 = (int)(*(int *)(param_1 + 0x50));

  if (iVar2 < 0) {
    if (*(int **)(param_1 + 0x1c) == (int *)0x0) {
      iVar2 = (int)(0);
    }
    else {
      iVar2 = (int)((**(code **)(**(int **)(param_1 + 0x1c) + 0x24))(uVar1));
    }
  }
  thunk_FUN_1109af40(0x2220,&DAT_11887580,iVar2,iVar2);
  ((SCStr *)(this_))->format(param_2);

  return (char *)(param_2);

 } catch (...) { }
}


// Reference entry 10520df0; body size 267 bytes.
#line 1 "ENTRY_10520df0"

undefined4 __thiscall Recovered_Bulk::FUN_10520df0(int param_2,short *param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  
  if ((int *)param_1[0xc] != (int *)0x0) {
    cVar1 = (char)((**(code **)(*(int *)param_1[0xc] + 0xc))());
    if (cVar1 != '\0') {
      iVar2 = (int)((**(code **)(*(int *)param_1[0xc] + 8))());
      goto LAB_10520e13;
    }
  }
  iVar2 = (int)(param_1[0xd]);
LAB_10520e13:
  if (iVar2 == param_2) {
    param_1[0xd] = 0;
    if ((char)param_1[0x14] != '\0') {
      *(undefined1 *)(param_1 + 0x14) = 0;
      if (param_1[0xe] != 0) {
        *(undefined1 *)(param_1[0xe] + 0x30) = 0;
      }
      (**(code **)(*param_1 + 0x3c))();
      return (undefined4)(1);
    }
    if (*param_3 != 0) {
      puVar3 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)param_1[0x1e] != (undefined1 *)0x0) {
        puVar3 = (undefined1 *)((undefined1 *)param_1[0x1e]);
      }
      (**(code **)(*param_1 + 0x34))(*param_3,puVar3);
      if (*param_3 == 0x323) {
        if (param_1[0xe] != 0) {
          *(undefined1 *)(param_1[0xe] + 0x30) = 0;
        }
        (**(code **)(*param_1 + 0x3c))();
        return (undefined4)(1);
      }
      iVar2 = (int)(param_1[0x24]);
      param_1[0x24] = iVar2 + 1;
      if (param_1[0x23] < iVar2) {
        (**(code **)(*param_1 + 0x38))();
        if (param_1[0xe] != 0) {
          *(undefined1 *)(param_1[0xe] + 0x30) = 0;
        }
        (**(code **)(*param_1 + 0x3c))();
        return (undefined4)(1);
      }
    }
    param_1[0x1a] = param_1[0x1a] + param_1[0x1f];
    (**(code **)(*param_1 + 0x30))();
    cVar1 = (char)(thunk_FUN_10523b40());
    if (cVar1 == '\0') {
      if (param_1[0xe] != 0) {
        *(undefined1 *)(param_1[0xe] + 0x30) = 0;
      }
      (**(code **)(*param_1 + 0x3c))();
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10520f40; body size 136 bytes.
#line 1 "ENTRY_10520f40"

void __fastcall FUN_10520f40(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x34) != 0) && (*(int **)(param_1 + 0x30) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x30) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x30));
    if (puVar1 != (undefined4 *)0x0) {
      iVar3 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar3 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (*(int **)(param_1 + 0x58) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x58) + 0x18))(*(undefined4 *)(param_1 + 0x24));
    piVar2 = (int *)(*(int **)(param_1 + 0x5c));
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x38) + 0x30) = 0;
  }
  return;
}


// Reference entry 10520ff0; body size 467 bytes.
#line 1 "ENTRY_10520ff0"

void __thiscall Recovered_Bulk::FUN_10520ff0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_112af4e0("AddToQueue",10,"Starting AddQueueMultiTracksOp at index %d for items [%d, %d]"
                     ,*(undefined4 *)(param_1 + 0x9c),*(int *)(param_1 + 0x68) + 1,
                     *(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x68),
                     DAT_12126b84 );
  puVar1 = (undefined4 *)(operator_new(0xd7e0));

  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    if (*(char *)(param_1 + 0x94) == '\0') {
      local_14 = (int)((*(int *)(param_1 + 0x7c) * 18000 - 18000U) / 0xf + 6000);
    }
    else {

    }
    iVar4 = (int)(*(int *)(*(int *)(param_1 + 0x98) + 0x2c));
    uVar2 = (undefined4)((**(code **)(*(int *)(iVar4 + 4 + *(int *)(*(int *)(iVar4 + 4) + 4)) + 0x48))());
    uVar8 = (undefined4)(0);
    uVar7 = (undefined4)(0);
    uVar6 = (undefined4)(2000);
    uVar3 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar4 + 4) + 4) + iVar4 + 4) + 0x50))
                      (local_14,2000,0,0));
    thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:AVTransport:1","AddMultipleURIsToQueue",
                       uVar3,local_14,uVar6,uVar7,uVar8);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp);
    puVar1[0x18] = (uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp;
    puVar1[0x11b] = (uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp;
    puVar1[0x35f4] = 0;
    puVar1[0x35f5] = 0;
    puVar1[0x35f6] = 0;
    puVar1[0x35f7] = 0;
  }
  piVar5 = (int *)(*(int **)(param_1 + 0xdc));

  if (piVar5 != (int *)0x0) {
    if (*(int *)(param_1 + 0xe0) != 0) {
      (**(code **)(*piVar5 + 0x10))();
      piVar5 = (int *)(*(int **)(param_1 + 0xdc));
    }
    if (piVar5 != (int *)0x0) {
      iVar4 = (int)(thunk_FUN_1123fcd0(piVar5 + 1));
      if (iVar4 == 0) {
        (**(code **)*piVar5)(1);
      }
    }
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  *(undefined4 **)(param_1 + 0xdc) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    thunk_FUN_1123fce0(puVar1 + 1);
  }
  thunk_FUN_10524a20(0,*(undefined4 *)(param_1 + 0xd4),param_2,param_3,param_4,param_5,param_6,
                     *(undefined4 *)(param_1 + 0x9c),0);

  return;

 } catch (...) { }
}


// Reference entry 10521240; body size 467 bytes.
#line 1 "ENTRY_10521240"

void __thiscall Recovered_Bulk::FUN_10521240(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_112af4e0("PlayNext",10,"Starting AddQueueMultiTracksOp at index %d for items [%d, %d]",
                     *(undefined4 *)(param_1 + 0xb8),*(int *)(param_1 + 0x68) + 1,
                     *(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x68),
                     DAT_12126b84 );
  puVar1 = (undefined4 *)(operator_new(0xd7e0));

  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    if (*(char *)(param_1 + 0x94) == '\0') {
      local_14 = (int)((*(int *)(param_1 + 0x7c) * 18000 - 18000U) / 0xf + 6000);
    }
    else {

    }
    iVar4 = (int)(*(int *)(*(int *)(param_1 + 0x98) + 0x2c));
    uVar2 = (undefined4)((**(code **)(*(int *)(iVar4 + 4 + *(int *)(*(int *)(iVar4 + 4) + 4)) + 0x48))());
    uVar8 = (undefined4)(0);
    uVar7 = (undefined4)(0);
    uVar6 = (undefined4)(2000);
    uVar3 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar4 + 4) + 4) + iVar4 + 4) + 0x50))
                      (local_14,2000,0,0));
    thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:AVTransport:1","AddMultipleURIsToQueue",
                       uVar3,local_14,uVar6,uVar7,uVar8);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp);
    puVar1[0x18] = (uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp;
    puVar1[0x11b] = (uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp;
    puVar1[0x35f4] = 0;
    puVar1[0x35f5] = 0;
    puVar1[0x35f6] = 0;
    puVar1[0x35f7] = 0;
  }
  piVar5 = (int *)(*(int **)(param_1 + 0xd8));

  if (piVar5 != (int *)0x0) {
    if (*(int *)(param_1 + 0xdc) != 0) {
      (**(code **)(*piVar5 + 0x10))();
      piVar5 = (int *)(*(int **)(param_1 + 0xd8));
    }
    if (piVar5 != (int *)0x0) {
      iVar4 = (int)(thunk_FUN_1123fcd0(piVar5 + 1));
      if (iVar4 == 0) {
        (**(code **)*piVar5)(1);
      }
    }
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  *(undefined4 **)(param_1 + 0xd8) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    thunk_FUN_1123fce0(puVar1 + 1);
  }
  thunk_FUN_10524a20(0,*(undefined4 *)(param_1 + 0xd0),param_2,param_3,param_4,param_5,param_6,
                     *(undefined4 *)(param_1 + 0xb8),0);

  return;

 } catch (...) { }
}


// Reference entry 10521490; body size 457 bytes.
#line 1 "ENTRY_10521490"

void __thiscall Recovered_Bulk::FUN_10521490(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_112af4e0("PlayNow",10,"Starting AddQueueMultiTracksOp for items [%d, %d]",
                     *(int *)(param_1 + 0x68) + 1,
                     *(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x68),
                     DAT_12126b84 );
  puVar1 = (undefined4 *)(operator_new(0xd7e0));

  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    if (*(char *)(param_1 + 0x94) == '\0') {
      local_14 = (int)((*(int *)(param_1 + 0x7c) * 18000 - 18000U) / 0xf + 6000);
    }
    else {

    }
    iVar4 = (int)(*(int *)(*(int *)(param_1 + 0x98) + 0x2c));
    uVar2 = (undefined4)((**(code **)(*(int *)(iVar4 + 4 + *(int *)(*(int *)(iVar4 + 4) + 4)) + 0x48))());
    uVar8 = (undefined4)(0);
    uVar7 = (undefined4)(0);
    uVar6 = (undefined4)(2000);
    uVar3 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar4 + 4) + 4) + iVar4 + 4) + 0x50))
                      (local_14,2000,0,0));
    thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:AVTransport:1","AddMultipleURIsToQueue",
                       uVar3,local_14,uVar6,uVar7,uVar8);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp);
    puVar1[0x18] = (uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp;
    puVar1[0x11b] = (uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp;
    puVar1[0x35f4] = 0;
    puVar1[0x35f5] = 0;
    puVar1[0x35f6] = 0;
    puVar1[0x35f7] = 0;
  }
  piVar5 = (int *)(*(int **)(param_1 + 0xbc));

  if (piVar5 != (int *)0x0) {
    if (*(int *)(param_1 + 0xc0) != 0) {
      (**(code **)(*piVar5 + 0x10))();
      piVar5 = (int *)(*(int **)(param_1 + 0xbc));
    }
    if (piVar5 != (int *)0x0) {
      iVar4 = (int)(thunk_FUN_1123fcd0(piVar5 + 1));
      if (iVar4 == 0) {
        (**(code **)*piVar5)(1);
      }
    }
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  *(undefined4 **)(param_1 + 0xbc) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    thunk_FUN_1123fce0(puVar1 + 1);
  }
  thunk_FUN_10524a20(0,*(undefined4 *)(param_1 + 0xb4),param_2,param_3,param_4,param_5,param_6,0,0);

  return;

 } catch (...) { }
}


// Reference entry 105216d0; body size 457 bytes.
#line 1 "ENTRY_105216d0"

void __thiscall Recovered_Bulk::FUN_105216d0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_112af4e0("ReplaceQueue",10,
                     "Starting AddQueueMultiTracksOp to end-of-queue for items [%d, %d]",
                     *(int *)(param_1 + 0x68) + 1,
                     *(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x68),
                     DAT_12126b84 );
  puVar1 = (undefined4 *)(operator_new(0xd7e0));

  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    if (*(char *)(param_1 + 0x94) == '\0') {
      local_14 = (int)((*(int *)(param_1 + 0x7c) * 18000 - 18000U) / 0xf + 6000);
    }
    else {

    }
    iVar4 = (int)(*(int *)(*(int *)(param_1 + 0x98) + 0x2c));
    uVar2 = (undefined4)((**(code **)(*(int *)(iVar4 + 4 + *(int *)(*(int *)(iVar4 + 4) + 4)) + 0x48))());
    uVar8 = (undefined4)(0);
    uVar7 = (undefined4)(0);
    uVar6 = (undefined4)(2000);
    uVar3 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar4 + 4) + 4) + iVar4 + 4) + 0x50))
                      (local_14,2000,0,0));
    thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:AVTransport:1","AddMultipleURIsToQueue",
                       uVar3,local_14,uVar6,uVar7,uVar8);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp);
    puVar1[0x18] = (uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp;
    puVar1[0x11b] = (uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp;
    puVar1[0x35f4] = 0;
    puVar1[0x35f5] = 0;
    puVar1[0x35f6] = 0;
    puVar1[0x35f7] = 0;
  }
  piVar5 = (int *)(*(int **)(param_1 + 200));

  if (piVar5 != (int *)0x0) {
    if (*(int *)(param_1 + 0xcc) != 0) {
      (**(code **)(*piVar5 + 0x10))();
      piVar5 = (int *)(*(int **)(param_1 + 200));
    }
    if (piVar5 != (int *)0x0) {
      iVar4 = (int)(thunk_FUN_1123fcd0(piVar5 + 1));
      if (iVar4 == 0) {
        (**(code **)*piVar5)(1);
      }
    }
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  *(undefined4 **)(param_1 + 200) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    thunk_FUN_1123fce0(puVar1 + 1);
  }
  thunk_FUN_10524a20(0,*(undefined4 *)(param_1 + 0xc0),param_2,param_3,param_4,param_5,param_6,0,0);

  return;

 } catch (...) { }
}


// Reference entry 105220f0; body size 442 bytes.
#line 1 "ENTRY_105220f0"

void __thiscall Recovered_Bulk::FUN_105220f0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,char param_7)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  char *pcVar7;
  undefined1 local_418 [1028];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  *(undefined1 *)(param_1 + 0xac) = 0;
  local_14 = (uint)(uVar1);
  if (param_7 == '\0') {
    thunk_FUN_110bf210(0,local_418,0x401);
    pvVar2 = (void *)(operator_new(0xdc));

    if (pvVar2 != (void *)0x0) {
      puVar5 = (undefined1 *)(&DAT_1186d2ee);
      if (*(undefined1 **)(param_1 + 0xb0) != (undefined1 *)0x0) {
        puVar5 = (undefined1 *)(*(undefined1 **)(param_1 + 0xb0));
      }
      thunk_FUN_11140fc0(*(undefined4 *)(*(int *)(param_1 + 0x98) + 0x2c),puVar5,0);
    }

    thunk_FUN_11147440(0,local_418,param_3,param_4,0,0,1,0);
    iVar3 = (int)(*(int *)(param_1 + 0x6c));
    if (iVar3 < 0) {
      if (*(int **)(param_1 + 0x38) == (int *)0x0) {
        iVar3 = (int)(0);
      }
      else {
        iVar3 = (int)((**(code **)(**(int **)(param_1 + 0x38) + 0x24))(uVar1));
      }
    }
    iVar4 = (int)(*(int *)(param_1 + 0x68) + 1);
    pcVar7 = (char *)("Starting AddQueueTracksOp (item %d of %d)");
  }
  else {
    *(undefined1 *)(param_1 + 0xac) = 1;
    pvVar2 = (void *)(operator_new(0x3c));

    if (pvVar2 != (void *)0x0) {
      puVar5 = (undefined1 *)(*(undefined1 **)(*(int *)(param_1 + 0x98) + 0x20));
      puVar6 = (undefined1 *)(&DAT_1186d2ee);
      if (puVar5 != (undefined1 *)0x0) {
        puVar6 = (undefined1 *)(puVar5);
      }
      thunk_FUN_11141590(*(undefined4 *)(*(int *)(param_1 + 0x98) + 0x2c),puVar6);
    }

    thunk_FUN_111474b0(0,param_3,param_4);
    iVar3 = (int)(*(int *)(param_1 + 0x6c));
    if (iVar3 < 0) {
      if (*(int **)(param_1 + 0x38) != (int *)0x0) {
        iVar3 = (int)((**(code **)(**(int **)(param_1 + 0x38) + 0x24))());
        iVar4 = (int)(*(int *)(param_1 + 0x68) + 1);
        pcVar7 = (char *)("Starting PlaySourceOp (item %d of %d)");
        goto LAB_1052227b;
      }
      iVar3 = (int)(0);
    }
    iVar4 = (int)(*(int *)(param_1 + 0x68) + 1);
    pcVar7 = (char *)("Starting PlaySourceOp (item %d of %d)");
  }
LAB_1052227b:
  thunk_FUN_112af4e0("PlayNow",10,pcVar7,iVar4,iVar3);

  thunk_FUN_1148ac28(pvVar2);
  return;

 } catch (...) { }
}


// Reference entry 10523350; body size 181 bytes.
#line 1 "ENTRY_10523350"

void __fastcall FUN_10523350(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(*(int **)(param_1 + 0xdc));
  if (piVar3 == (int *)0x0) {
    if (*(int *)(param_1 + 200) == 0) {
      return;
    }
    iVar2 = (int)(*(int *)(*(int *)(param_1 + 200) + 0xc0));
    thunk_FUN_10372530();
  }
  else {
    iVar2 = (int)(piVar3[0x35f5]);
    *(int *)(param_1 + 0xd4) = piVar3[0x35f7];
    if (*(int *)(param_1 + 0xe0) != 0) {
      (**(code **)(*piVar3 + 0x10))();
      piVar3 = (int *)(*(int **)(param_1 + 0xdc));
    }
    if (((piVar3 != (int *)0x0) && (iVar1 = thunk_FUN_1123fcd0(piVar3 + 1), iVar1 == 0)) &&
       (piVar3 != (int *)0x0)) {
      (**(code **)*piVar3)(1);
    }
    *(undefined4 *)(param_1 + 0xdc) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  if (*(char *)(param_1 + 0xbc) == '\0') {
    *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + iVar2;
    if (*(char *)(param_1 + 0xd0) == '\0') {
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + iVar2;
    }
    return;
  }
  *(undefined1 *)(param_1 + 0xbc) = 0;
  return;
}


// Reference entry 10523440; body size 173 bytes.
#line 1 "ENTRY_10523440"

void __fastcall FUN_10523440(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(*(int **)(param_1 + 0xd8));
  if (piVar3 == (int *)0x0) {
    iVar1 = (int)(*(int *)(param_1 + 200));
    if (iVar1 == 0) {
      return;
    }
    iVar2 = (int)(*(int *)(iVar1 + 0xc0));
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(iVar1 + 0xc4);
  }
  else {
    iVar2 = (int)(piVar3[0x35f5]);
    *(int *)(param_1 + 0xd0) = piVar3[0x35f7];
    if (*(int *)(param_1 + 0xdc) != 0) {
      (**(code **)(*piVar3 + 0x10))();
      piVar3 = (int *)(*(int **)(param_1 + 0xd8));
    }
    if (((piVar3 != (int *)0x0) && (iVar1 = thunk_FUN_1123fcd0(piVar3 + 1), iVar1 == 0)) &&
       (piVar3 != (int *)0x0)) {
      (**(code **)*piVar3)(1);
    }
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  if (*(char *)(param_1 + 0xbc) == '\0') {
    *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + iVar2;
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + iVar2;
    return;
  }
  *(undefined1 *)(param_1 + 0xbc) = 0;
  return;
}


// Reference entry 10523520; body size 103 bytes.
#line 1 "ENTRY_10523520"

void __fastcall FUN_10523520(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int **)(param_1 + 0xbc));
  if (piVar2 != (int *)0x0) {
    *(int *)(param_1 + 0xb4) = piVar2[0x35f7];
    if (*(int *)(param_1 + 0xc0) != 0) {
      (**(code **)(*piVar2 + 0x10))();
      piVar2 = (int *)(*(int **)(param_1 + 0xbc));
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = (int)(thunk_FUN_1123fcd0(piVar2 + 1));
      if ((iVar1 == 0) && (piVar2 != (int *)0x0)) {
        (**(code **)*piVar2)(1);
      }
    }
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  return;
}


// Reference entry 105235a0; body size 151 bytes.
#line 1 "ENTRY_105235a0"

void __fastcall FUN_105235a0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(*(int **)(param_1 + 200));
  if (piVar3 != (int *)0x0) {
    iVar1 = (int)(piVar3[0x35f5]);
    *(int *)(param_1 + 0xc0) = piVar3[0x35f7];
    if (*(int *)(param_1 + 0xcc) != 0) {
      (**(code **)(*piVar3 + 0x10))();
      piVar3 = (int *)(*(int **)(param_1 + 200));
    }
    if (piVar3 != (int *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(piVar3 + 1));
      if ((iVar2 == 0) && (piVar3 != (int *)0x0)) {
        (**(code **)*piVar3)(1);
      }
    }
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + iVar1;
    return;
  }
  if (*(int *)(param_1 + 0xb8) != 0) {
    iVar1 = (int)(*(int *)(*(int *)(param_1 + 0xb8) + 0x60));
    thunk_FUN_10372530();
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + iVar1;
  }
  return;
}


// Reference entry 10523900; body size 455 bytes.
#line 1 "ENTRY_10523900"

undefined4 __fastcall FUN_10523900(int *param_1)

{
 try {
  int *piVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  local_14 = (int *)(param_1);
  if ((int *)param_1[0x18] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x18] + 0x14))(param_1[9],1);
    *(undefined1 *)(param_1 + 0x22) = 0;

    return (undefined4)(1);
  }
  iVar6 = (int)(param_1[0x15]);
  if (-1 < iVar6) {
    iVar6 = (int)(iVar6 + 1);
    param_1[0x15] = iVar6;
  }
  piVar1 = (int *)(param_1 + 0x12);
  if ((iVar6 < 0) || (*piVar1 + -1 + param_1[0x13] < iVar6)) {
    cVar2 = (char)(thunk_FUN_104dcfc0(piVar1));
    if (cVar2 == '\0') {
      uVar4 = (undefined4)((**(code **)(*param_1 + 0x2c))(10,"No selections left"));
      thunk_FUN_112af4e0(uVar4);

      return (undefined4)(0);
    }
    param_1[0x15] = *piVar1;
  }
  if ((int *)param_1[0x16] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x16] + 0x18))(param_1[9],uVar3);
    piVar1 = (int *)((int *)param_1[0x17]);
    if (piVar1 != (int *)0x0) {
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  uVar4 = (undefined4)((**(code **)(*param_1 + 0x2c))
                    (10,"Starting browse on item %d of %d",param_1[0x1a] + param_1[0x1f] + 1,
                     param_1[0x1b]));
  thunk_FUN_112af4e0(uVar4);
  piVar5 = (int *)((int *)(**(code **)(*(int *)param_1[0x10] + 0x98))(&local_14,param_1[0x15]));
  piVar1 = (int *)((int *)*piVar5);
  *piVar5 = (int)(0);
  piVar5 = (int *)((int *)param_1[0x17]);

  if (piVar5 != (int *)0x0) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    (**(code **)(*piVar5 + 8))();
  }
  param_1[0x16] = (int)piVar1;
  if (piVar1 == (int *)0x0) {
    iVar6 = (int)(0);
  }
  else {
    iVar6 = (int)((**(code **)(*piVar1 + 0xc))());
  }
  param_1[0x17] = iVar6;

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  if ((int *)param_1[0x16] == (int *)0x0) {
    uVar4 = (undefined4)((**(code **)(*param_1 + 0x2c))
                      (1,"Browse failure: item %d was not available!",param_1[0x15]));
    thunk_FUN_112af4e0(uVar4);

    return (undefined4)(0);
  }
  *(undefined1 *)(param_1 + 0x22) = 0;
  (**(code **)(*(int *)param_1[0x16] + 0x14))(param_1[9],1);

  return (undefined4)(1);

 } catch (...) { }
}


// Reference entry 10523c70; body size 123 bytes.
#line 1 "ENTRY_10523c70"

void __thiscall Recovered_Bulk::FUN_10523c70(undefined1 param_2)
{
  int param_1 = (int )this;
 try {
  void *pvVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *(undefined1 *)(param_1 + 0x50) = param_2;
  pvVar1 = (void *)(operator_new(0x6c));

  if (pvVar1 == (void *)0x0) {
    uVar2 = (undefined4)(0);
  }
  else {
    uVar2 = (undefined4)(thunk_FUN_111c06e0(0));
  }

  thunk_FUN_102207b0(uVar2,param_1 + 8,*(undefined4 *)(param_1 + 0x10));

  return;

 } catch (...) { }
}


// Reference entry 10524730; body size 106 bytes.
#line 1 "ENTRY_10524730"

undefined4 * __thiscall Recovered_Bulk::FUN_10524730(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIOperationProgress"));
  if (bVar1) {
    param_1 = (int *)((int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x12)));
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIOp"));
    if ((!bVar1) && (bVar1 = ((SCStr *)(param_3))->op_eq("SCIObj"), !bVar1)) {
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


// Reference entry 105248a0; body size 99 bytes.
#line 1 "ENTRY_105248a0"

int __thiscall Recovered_Bulk::FUN_105248a0(int param_2)
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


// Reference entry 10524920; body size 99 bytes.
#line 1 "ENTRY_10524920"

int __thiscall Recovered_Bulk::FUN_10524920(int param_2)
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


// Reference entry 105249a0; body size 99 bytes.
#line 1 "ENTRY_105249a0"

int __thiscall Recovered_Bulk::FUN_105249a0(int param_2)
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


// Reference entry 10524a20; body size 362 bytes.
#line 1 "ENTRY_10524a20"

int __thiscall Recovered_Bulk::FUN_10524a20(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  
  thunk_FUN_1124ffa0("InstanceID",0);
  thunk_FUN_1124f350(param_2);
  thunk_FUN_1124ffa0("UpdateID",0);
  thunk_FUN_1124f350(param_3);
  thunk_FUN_1124ffa0("NumberOfURIs",0);
  thunk_FUN_1124f350(param_4);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("EnqueuedURIs",0));
  (**(code **)(*piVar1 + 0xc))(param_5);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("EnqueuedURIsMetaData",0));
  (**(code **)(*piVar1 + 0xc))(param_5);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("ContainerURI",0));
  (**(code **)(*piVar1 + 0xc))(param_5);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("ContainerMetaData",0));
  (**(code **)(*piVar1 + 0xc))(param_5);
  thunk_FUN_1124ffa0("DesiredFirstTrackNumberEnqueued",0);
  thunk_FUN_1124f350(param_5);
  thunk_FUN_1124ffa0("EnqueueAsNext",0);
  thunk_FUN_1124f3c0(param_6);
  iVar2 = (int)(param_1 + 0xd7d0);
  thunk_FUN_1124ff50("FirstTrackNumberEnqueued");
  thunk_FUN_112504b0(iVar2);
  iVar2 = (int)(param_1 + 0xd7d4);
  thunk_FUN_1124ff50("NumTracksAdded");
  thunk_FUN_112504b0(iVar2);
  iVar2 = (int)(param_1 + 0xd7d8);
  thunk_FUN_1124ff50("NewQueueLength");
  thunk_FUN_112504b0(iVar2);
  iVar2 = (int)(param_1 + 0xd7dc);
  thunk_FUN_1124ff50("NewUpdateID");
  thunk_FUN_112504b0(iVar2);
  return (int)(param_1);
}


// Reference entry 10524c00; body size 192 bytes.
#line 1 "ENTRY_10524c00"

void __fastcall FUN_10524c00(int param_1)

{
 try {
  char cVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  if (*(int *)(param_1 + 0x38) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x38) + 0x30) = 1;
    iVar3 = (int)((**(code **)(**(int **)(param_1 + 0x38) + 0x24))(uVar2));
    *(int *)(param_1 + 0x6c) = iVar3;
    if (iVar3 < *(int *)(param_1 + 0x8c)) {
      *(int *)(param_1 + 0x8c) = iVar3;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x2c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x68) = 0;
    if ((*(int *)(param_1 + 0x6c) != 0) && (cVar1 = thunk_FUN_10523b40(), cVar1 != '\0')) {

      return;
    }
  }
  *(undefined1 *)(param_1 + 0x50) = 1;
  pvVar4 = (void *)(operator_new(0x6c));

  if (pvVar4 == (void *)0x0) {
    uVar5 = (undefined4)(0);
  }
  else {
    uVar5 = (undefined4)(thunk_FUN_111c06e0(0));
  }

  thunk_FUN_102207b0(uVar5,param_1 + 8,*(undefined4 *)(param_1 + 0x10));

  return;

 } catch (...) { }
}


// Reference entry 10524d20; body size 91 bytes.
#line 1 "ENTRY_10524d20"

int * __thiscall Recovered_Bulk::FUN_10524d20(int *param_2)
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
    return (int *)(param_1);
  }
  param_1[1] = 0;
  return (int *)(param_1);
}


// Reference entry 10524da0; body size 248 bytes.
#line 1 "ENTRY_10524da0"

int * __thiscall Recovered_Bulk::FUN_10524da0(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (int)(0);
  piVar4 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  if (piVar4 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(uVar2));
  }

  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)((int *)*param_1);
    if (piVar4 != (int *)0x0) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))();
    }
    *param_1 = (int)(0);
  }
  else {
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIServiceDescriptor");
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

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 10524ee0; body size 91 bytes.
#line 1 "ENTRY_10524ee0"

int * __thiscall Recovered_Bulk::FUN_10524ee0(int *param_2)
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
    return (int *)(param_1);
  }
  param_1[1] = 0;
  return (int *)(param_1);
}


// Reference entry 10524f60; body size 171 bytes.
#line 1 "ENTRY_10524f60"

int * __thiscall Recovered_Bulk::FUN_10524f60(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  *param_1 = (int)(0);
  puVar1 = (undefined4 *)((undefined4 *)*param_2);
  if (puVar1 != (undefined4 *)0x0) {
    local_14 = (int *)(param_1);
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIServiceDescriptorInternals");

    piVar4 = (int *)((int *)(**(code **)*puVar1)(&local_14,&param_2,uVar3));
    iVar2 = (int)(*piVar4);
    *piVar4 = (int)(0);
    piVar4 = (int *)((int *)*param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    if (piVar4 != (int *)0x0) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))();
    }
    *param_1 = (int)(iVar2);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }

    ((SCStr *)((SCStr *)&param_2))->int_release();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 10525140; body size 242 bytes.
#line 1 "ENTRY_10525140"

int * __thiscall Recovered_Bulk::FUN_10525140(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar4 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  if (piVar4 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(uVar2));
  }

  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)((int *)*param_1);
    if (piVar4 != (int *)0x0) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))();
    }
    *param_1 = (int)(0);
  }
  else {
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIServiceDescriptor");
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

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 10525270; body size 188 bytes.
#line 1 "ENTRY_10525270"

int * __thiscall Recovered_Bulk::FUN_10525270(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = (undefined4 *)(param_2);


  uVar3 = (uint)(DAT_12126b84);

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
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIServiceDescriptor");

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

    ((SCStr *)((SCStr *)&param_2))->int_release();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 10525360; body size 83 bytes.
#line 1 "ENTRY_10525360"

int * __thiscall Recovered_Bulk::FUN_10525360(int *param_2)
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
      return (int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (int *)(param_1);
}


// Reference entry 105253d0; body size 78 bytes.
#line 1 "ENTRY_105253d0"

int * __thiscall Recovered_Bulk::FUN_105253d0(int *param_2)
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


// Reference entry 10525600; body size 188 bytes.
#line 1 "ENTRY_10525600"

int * __thiscall Recovered_Bulk::FUN_10525600(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = (undefined4 *)(param_2);


  uVar3 = (uint)(DAT_12126b84);

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
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIServiceDescriptorInternals");

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

    ((SCStr *)((SCStr *)&param_2))->int_release();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 10525750; body size 342 bytes.
#line 1 "ENTRY_10525750"

undefined4 * __thiscall Recovered_Bulk::FUN_10525750(void *param_2,undefined4 *param_3)
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
                    
    thunk_FUN_1052c9c0();
  }
  uVar6 = (uint)(param_1[2] - iVar3 >> 2);
  uVar1 = (uint)(iVar4 + 1);
  if (0x3fffffff - (uVar6 >> 1) < uVar6) {
LAB_1052589c:
                    
    thunk_FUN_1012a2a0();
  }
  uVar6 = (uint)((uVar6 >> 1) + uVar6);
  uVar7 = (uint)(uVar1);
  if (uVar1 <= uVar6) {
    uVar7 = (uint)(uVar6);
  }
  if (0x3fffffff < uVar7) goto LAB_1052589c;
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
    if (uVar7 + 0x23 <= uVar7) goto LAB_1052589c;
    pvVar5 = (void *)(operator_new(uVar7 + 0x23));
    if (pvVar5 == (void *)0x0) goto LAB_10525896;
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
LAB_10525896:
                    
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


// Reference entry 10525fc0; body size 117 bytes.
#line 1 "ENTRY_10525fc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10525fc0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  param_1[1] = param_2;
  param_1[2] = param_2;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceCallToActionAppLinkState);
  ((SCStr *)((SCStr *)(param_1 + 3)))->int_allocRep("");
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  ((SCStr *)((SCStr *)(param_1 + 4)))->int_allocRep("");
  *(undefined1 *)(param_1 + 5) = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105260a0; body size 152 bytes.
#line 1 "ENTRY_105260a0"

undefined4 * __thiscall Recovered_Bulk::FUN_105260a0(undefined4 param_2,undefined1 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  param_1[1] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardStateFor);
  param_1[2] = param_2;

  thunk_FUN_11240650(uVar1);
  param_1[3] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *(undefined2 *)(param_1 + 4) = 1000;
  *(undefined1 *)((int)param_1 + 0x12) = param_3;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceGetLinkCodeState);
  param_1[3] = (uint)&ghidra_vftable_SCMusicServiceGetLinkCodeState;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105263b0; body size 285 bytes.
#line 1 "ENTRY_105263b0"

undefined4 * __thiscall Recovered_Bulk::FUN_105263b0(undefined4 param_2,undefined1 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  param_1[1] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardStateFor);
  param_1[2] = param_2;
  puVar3 = (undefined4 *)(param_1 + 3);

  *puVar3 = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059bd30(puVar3);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  thunk_FUN_11240650(uVar1);
  param_1[10] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceLinkCodeState);
  *puVar3 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceLinkCodeState);
  param_1[10] = (uint)&ghidra_vftable_SCMusicServiceLinkCodeState;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = param_3;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x10] = (uint)&ghidra_vftable_RControlAIOOpRef;
  param_1[0x1d] = 0;
  puVar3 = (undefined4 *)(param_1 + 0x14);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  uVar4 = (undefined4)(0x21);
  thunk_FUN_1109f7f0(puVar3,0x21);
  thunk_FUN_1109f100(puVar3,uVar4);
  thunk_FUN_110c2c60();
  uVar4 = (undefined4)(thunk_FUN_10533e90());
  piVar2 = (int *)((int *)thunk_FUN_110c1f30(uVar4));
  if (*piVar2 == 0) {
    uVar4 = (undefined4)(*(undefined4 *)(piVar2[1] + 0x134));
  }
  else {
    uVar4 = (undefined4)(0);
  }
  uVar4 = (undefined4)(thunk_FUN_110c20d0(uVar4));
  param_1[0x13] = uVar4;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10526770; body size 150 bytes.
#line 1 "ENTRY_10526770"

undefined4 * __thiscall Recovered_Bulk::FUN_10526770(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  param_1[1] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardStateFor);
  param_1[2] = param_2;
  param_1[3] = (uint)&ghidra_vftable_SCSwfObjHHListener;
  puVar1 = (undefined4 *)(param_1 + 4);

  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059bd30(puVar1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceListWaitingState);
  param_1[3] = (uint)&ghidra_vftable_SCMusicServiceListWaitingState;
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceListWaitingState);
  param_1[0xb] = 0;
  param_1[0xc] = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10526830; body size 221 bytes.
#line 1 "ENTRY_10526830"

undefined4 * __thiscall Recovered_Bulk::FUN_10526830(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  param_1[1] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardStateFor);
  param_1[2] = param_2;

  thunk_FUN_11240650(uVar1);
  param_1[3] = (uint)&ghidra_vftable_RControlAIOOpCB;
  param_1[4] = (uint)&ghidra_vftable_RSvcManifestDownloadCompletionCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceLoadMSInfoState);
  param_1[3] = (uint)&ghidra_vftable_SCMusicServiceLoadMSInfoState;
  param_1[4] = (uint)&ghidra_vftable_SCMusicServiceLoadMSInfoState;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  thunk_FUN_112816c0();
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x5d] = (uint)&ghidra_vftable_RControlAIOOpRef;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10528dc0; body size 110 bytes.
#line 1 "ENTRY_10528dc0"

void __fastcall FUN_10528dc0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCArray);
  iVar1 = (int)(param_1[2]);
  param_1[3] = iVar1;
  if (iVar1 != 0) {
    uVar3 = (uint)(param_1[4] - iVar1 & 0xfffffffc);
    iVar2 = (int)(iVar1);
    if (0xfff < uVar3) {
      iVar2 = (int)(*(int *)(iVar1 + -4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (iVar1 - iVar2) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar2,uVar3);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10528e50; body size 76 bytes.
#line 1 "ENTRY_10528e50"

void __fastcall FUN_10528e50(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10528ec0; body size 76 bytes.
#line 1 "ENTRY_10528ec0"

void __fastcall FUN_10528ec0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10528f30; body size 76 bytes.
#line 1 "ENTRY_10528f30"

void __fastcall FUN_10528f30(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10528fa0; body size 76 bytes.
#line 1 "ENTRY_10528fa0"

void __fastcall FUN_10528fa0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10529010; body size 76 bytes.
#line 1 "ENTRY_10529010"

void __fastcall FUN_10529010(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10529080; body size 76 bytes.
#line 1 "ENTRY_10529080"

void __fastcall FUN_10529080(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 105290f0; body size 68 bytes.
#line 1 "ENTRY_105290f0"

void __fastcall FUN_105290f0(int *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10529150; body size 68 bytes.
#line 1 "ENTRY_10529150"

void __fastcall FUN_10529150(int *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 105291c0; body size 81 bytes.
#line 1 "ENTRY_105291c0"

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

void __fastcall FID_conflict__Tidy_105291c0(int *param_1)

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


// Reference entry 10529270; body size 167 bytes.
#line 1 "ENTRY_10529270"

void __fastcall FUN_10529270(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBrowseToServiceRootActionFactory);
  piVar1 = (int *)((int *)param_1[6]);

  if (piVar1 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  param_1[4] = 0;
  piVar1 = (int *)((int *)param_1[3]);

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10529350; body size 89 bytes.
#line 1 "ENTRY_10529350"

void __fastcall FUN_10529350(undefined4 *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceAccountNeededState);

  ((SCStr *)((SCStr *)(param_1 + 3)))->int_release();
  param_1[3] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);

  return;

 } catch (...) { }
}


// Reference entry 105293d0; body size 133 bytes.
#line 1 "ENTRY_105293d0"

void __fastcall FUN_105293d0(undefined4 *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceAppLinkFailState);

  ((SCStr *)((SCStr *)(param_1 + 6)))->int_release();
  param_1[6] = 0;

  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  param_1[4] = 0;

  ((SCStr *)((SCStr *)(param_1 + 3)))->int_release();
  param_1[3] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);

  return;

 } catch (...) { }
}


// Reference entry 10529480; body size 111 bytes.
#line 1 "ENTRY_10529480"

void __fastcall FUN_10529480(undefined4 *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceCallToActionAppLinkState);

  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  param_1[4] = 0;

  ((SCStr *)((SCStr *)(param_1 + 3)))->int_release();
  param_1[3] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);

  return;

 } catch (...) { }
}


// Reference entry 10529540; body size 277 bytes.
#line 1 "ENTRY_10529540"

/* WARNING: Removing unreachable block_10529540 (ram,0x10529612) */
/* WARNING: Removing unreachable block (ram,0x10529622) */
/* WARNING: Removing unreachable block (ram,0x10529626) */

void __fastcall FUN_10529540(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceGetLinkCodeState);
  param_1[3] = (uint)&ghidra_vftable_SCMusicServiceGetLinkCodeState;
  piVar4 = (int *)((int *)param_1[6]);
  if (piVar4 != (int *)0x0) {
    if (param_1[7] != 0) {
      (**(code **)(*piVar4 + 0x10))(uVar2);
      piVar4 = (int *)((int *)param_1[6]);
    }
    if (((piVar4 != (int *)0x0) && (iVar3 = thunk_FUN_1123fcd0(piVar4 + 1), iVar3 == 0)) &&
       (piVar4 != (int *)0x0)) {
      (**(code **)*piVar4)(1);
    }
    param_1[6] = 0;
    param_1[7] = 0;
  }

  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  if ((int *)param_1[6] != (int *)0x0) {
    if (param_1[7] != 0) {
      (**(code **)(*(int *)param_1[6] + 0x10))();
    }
    puVar1 = (undefined4 *)((undefined4 *)param_1[6]);
    if ((puVar1 != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1), iVar3 == 0)) {
      (**(code **)*puVar1)(1);
    }
    param_1[6] = 0;
    param_1[7] = 0;
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  param_1[3] = (uint)&ghidra_vftable_RControlAIOOpCB;
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);

  return;

 } catch (...) { }
}


// Reference entry 105296a0; body size 120 bytes.
#line 1 "ENTRY_105296a0"

void __fastcall FUN_105296a0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceGetShareUsageState);
  param_1[3] = (uint)&ghidra_vftable_SCMusicServiceGetShareUsageState;
  thunk_FUN_102cc960(uVar2);
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[5]);

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);

  return;

 } catch (...) { }
}


// Reference entry 10529750; body size 131 bytes.
#line 1 "ENTRY_10529750"

void __fastcall FUN_10529750(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceIntroState);
  piVar1 = (int *)((int *)param_1[6]);

  if (piVar1 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[4]);

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);

  return;

 } catch (...) { }
}


// Reference entry 10529800; body size 160 bytes.
#line 1 "ENTRY_10529800"

void __fastcall FUN_10529800(undefined4 *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceLaunchAppLinkState);
  param_1[3] = (uint)&ghidra_vftable_SCMusicServiceLaunchAppLinkState;

  ((SCStr *)((SCStr *)(param_1 + 7)))->int_release();
  param_1[7] = 0;

  ((SCStr *)((SCStr *)(param_1 + 6)))->int_release();
  param_1[6] = 0;

  ((SCStr *)((SCStr *)(param_1 + 5)))->int_release();
  param_1[5] = 0;
  param_1[3] = (uint)&ghidra_vftable_SCIObjImpl;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[3] = (uint)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);

  return;

 } catch (...) { }
}


// Reference entry 105298d0; body size 169 bytes.
#line 1 "ENTRY_105298d0"

void __fastcall FUN_105298d0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceLinkCodeState);
  param_1[3] = (uint)&ghidra_vftable_SCMusicServiceLinkCodeState;
  param_1[10] = (uint)&ghidra_vftable_SCMusicServiceLinkCodeState;
  thunk_FUN_1053d930(uVar1);

  ((SCStr *)((SCStr *)(param_1 + 0x1d)))->int_release();
  param_1[0x1d] = 0;
  param_1[0x10] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  param_1[10] = (uint)&ghidra_vftable_RControlAIOOpCB;
  thunk_FUN_11240850();

  param_1[3] = (uint)&ghidra_vftable_SCTimerUser;
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);

  return;

 } catch (...) { }
}


// Reference entry 105299b0; body size 183 bytes.
#line 1 "ENTRY_105299b0"

void __fastcall FUN_105299b0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceListState);
  param_1[3] = (uint)&ghidra_vftable_SCMusicServiceListState;
  thunk_FUN_1053f780(uVar2);
  piVar1 = (int *)((int *)param_1[10]);

  if (piVar1 != (int *)0x0) {
    param_1[9] = 0;
    param_1[10] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[8]);

  if (piVar1 != (int *)0x0) {
    param_1[7] = 0;
    param_1[8] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[3] = (uint)&ghidra_vftable_SCServiceDescriptorManagerEventSink;
  piVar1 = (int *)((int *)param_1[5]);

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);

  return;

 } catch (...) { }
}


// Reference entry 10529aa0; body size 123 bytes.
#line 1 "ENTRY_10529aa0"

void __fastcall FUN_10529aa0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceListWaitingState);
  param_1[3] = (uint)&ghidra_vftable_SCMusicServiceListWaitingState;
  param_1[4] = (uint)&ghidra_vftable_SCMusicServiceListWaitingState;
  thunk_FUN_1053d9b0(uVar1);

  param_1[4] = (uint)&ghidra_vftable_SCTimerUser;
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[3] = (uint)&ghidra_vftable_SCSwfObjHHListener;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);

  return;

 } catch (...) { }
}


// Reference entry 10529b40; body size 222 bytes.
#line 1 "ENTRY_10529b40"

void __fastcall FUN_10529b40(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceLoadMSInfoState);
  param_1[3] = (uint)&ghidra_vftable_SCMusicServiceLoadMSInfoState;
  param_1[4] = (uint)&ghidra_vftable_SCMusicServiceLoadMSInfoState;
  param_1[0x5d] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0(uVar2);
  thunk_FUN_112818d0();
  piVar1 = (int *)((int *)param_1[0xb]);

  if (piVar1 != (int *)0x0) {
    param_1[10] = 0;
    param_1[0xb] = 0;
    (**(code **)(*piVar1 + 8))();
  }

  ((SCStr *)((SCStr *)(param_1 + 9)))->int_release();
  param_1[9] = 0;

  ((SCStr *)((SCStr *)(param_1 + 8)))->int_release();
  param_1[8] = 0;

  ((SCStr *)((SCStr *)(param_1 + 7)))->int_release();
  param_1[7] = 0;
  param_1[3] = (uint)&ghidra_vftable_RControlAIOOpCB;
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);

  return;

 } catch (...) { }
}


// Reference entry 10529c60; body size 110 bytes.
#line 1 "ENTRY_10529c60"

void __fastcall FUN_10529c60(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceLoginInput);
  piVar1 = (int *)((int *)param_1[3]);

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10529cf0; body size 98 bytes.
#line 1 "ENTRY_10529cf0"

void __fastcall FUN_10529cf0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceLoginPasswordState);
  piVar1 = (int *)((int *)param_1[4]);

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);

  return;

 } catch (...) { }
}


// Reference entry 10529d80; body size 110 bytes.
#line 1 "ENTRY_10529d80"

void __fastcall FUN_10529d80(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceNicknameInput);
  piVar1 = (int *)((int *)param_1[3]);

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10529e10; body size 110 bytes.
#line 1 "ENTRY_10529e10"

void __fastcall FUN_10529e10(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServicePasswordInput);
  piVar1 = (int *)((int *)param_1[3]);

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10529ea0; body size 98 bytes.
#line 1 "ENTRY_10529ea0"

void __fastcall FUN_10529ea0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServicePasswordState);
  piVar1 = (int *)((int *)param_1[4]);

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);

  return;

 } catch (...) { }
}


// Reference entry 10529f20; body size 148 bytes.
#line 1 "ENTRY_10529f20"

void __fastcall FUN_10529f20(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0x3b)))->int_release();
  param_1[0x3b] = 0;
  thunk_FUN_102cc870(uVar2);
  thunk_FUN_102cc960();
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[5]);

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);

  return;

 } catch (...) { }
}


// Reference entry 10529fe0; body size 133 bytes.
#line 1 "ENTRY_10529fe0"

void __fastcall FUN_10529fe0(undefined4 *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceResultErrorState);

  ((SCStr *)((SCStr *)(param_1 + 5)))->int_release();
  param_1[5] = 0;

  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  param_1[4] = 0;

  ((SCStr *)((SCStr *)(param_1 + 3)))->int_release();
  param_1[3] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);

  return;

 } catch (...) { }
}


// Reference entry 1052a0b0; body size 201 bytes.
#line 1 "ENTRY_1052a0b0"

void __fastcall FUN_1052a0b0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceSetNicknameState);
  param_1[5] = (uint)&ghidra_vftable_SCMusicServiceSetNicknameState;
  param_1[8] = (uint)&ghidra_vftable_SCMusicServiceSetNicknameState;
  thunk_FUN_1052e8a0(uVar2);
  if (param_1[0xc] != 0) {
    thunk_FUN_104dec20();
    if ((undefined4 *)param_1[0xc] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0xc])(1);
    }
    param_1[0xc] = 0;
  }
  piVar1 = (int *)((int *)param_1[10]);

  if (piVar1 != (int *)0x0) {
    param_1[9] = 0;
    param_1[10] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[8] = (uint)&ghidra_vftable_SCSwfObjHHListener;
  param_1[5] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[7]);

  if (piVar1 != (int *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);

  return;

 } catch (...) { }
}


// Reference entry 1052a1c0; body size 120 bytes.
#line 1 "ENTRY_1052a1c0"

void __fastcall FUN_1052a1c0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceSetShareUsageState);
  param_1[3] = (uint)&ghidra_vftable_SCMusicServiceSetShareUsageState;
  thunk_FUN_102cc870(uVar2);
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[5]);

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);

  return;

 } catch (...) { }
}


// Reference entry 1052a260; body size 524 bytes.
#line 1 "ENTRY_1052a260"

void __fastcall FUN_1052a260(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  undefined4 uVar4;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceWizard);
  param_1[2] = (uint)&ghidra_vftable_SCMusicServiceWizard;
  param_1[10] = (uint)&ghidra_vftable_SCMusicServiceWizard;
  param_1[0x12] = (uint)&ghidra_vftable_SCMusicServiceWizard;
  param_1[0x13] = (uint)&ghidra_vftable_SCMusicServiceWizard;
  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  if (pSVar3 != (SCLibrary *)0x0) {
    uVar4 = (undefined4)((**(code **)(*(int *)pSVar3 + 0xd0))(&local_14,uVar2));
    thunk_FUN_10524d20(uVar4);

    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }

    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 0x18))();
    }

    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
  }

  ((SCStr *)((SCStr *)(param_1 + 0x39ee)))->int_release();
  param_1[0x39ee] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x39ec)))->int_release();
  param_1[0x39ec] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x39eb)))->int_release();
  param_1[0x39eb] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x39ea)))->int_release();
  param_1[0x39ea] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x40)))->int_release();
  param_1[0x40] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x3f)))->int_release();
  param_1[0x3f] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x3e)))->int_release();
  param_1[0x3e] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x3d)))->int_release();
  param_1[0x3d] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x3c)))->int_release();
  param_1[0x3c] = 0;
  piVar1 = (int *)((int *)param_1[0x39]);

  if (piVar1 != (int *)0x0) {
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x37]);

  if (piVar1 != (int *)0x0) {
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_10dd1440();

  return;

 } catch (...) { }
}


// Reference entry 1052a500; body size 305 bytes.
#line 1 "ENTRY_1052a500"

void __fastcall FUN_1052a500(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceWorkingState);
  param_1[3] = (uint)&ghidra_vftable_SCMusicServiceWorkingState;
  param_1[6] = (uint)&ghidra_vftable_SCMusicServiceWorkingState;
  param_1[0xd] = (uint)&ghidra_vftable_SCMusicServiceWorkingState;
  if ((int *)param_1[0x10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x10] + 0x18))(uVar2);
  }
  thunk_FUN_1059d800();
  thunk_FUN_104dec20();
  if ((undefined4 *)param_1[0x16] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x16])(1);
  }
  piVar1 = (int *)((int *)param_1[0x15]);

  if (piVar1 != (int *)0x0) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x13]);

  if (piVar1 != (int *)0x0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x11]);

  if (piVar1 != (int *)0x0) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0xd] = (uint)&ghidra_vftable_SCSwfObjHHListener;

  param_1[6] = (uint)&ghidra_vftable_SCTimerUser;
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[5]);

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);

  return;

 } catch (...) { }
}


// Reference entry 1052a690; body size 181 bytes.
#line 1 "ENTRY_1052a690"

void __fastcall FUN_1052a690(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRemoveServiceAction);
  param_1[2] = (uint)&ghidra_vftable_SCRemoveServiceAction;
  piVar1 = (int *)((int *)param_1[10]);

  if (piVar1 != (int *)0x0) {
    param_1[9] = 0;
    param_1[10] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  ((SCStr *)((SCStr *)(param_1 + 7)))->int_release();
  param_1[7] = 0;
  piVar1 = (int *)((int *)param_1[4]);

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (uint)&ghidra_vftable_SCIObj;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 1052a780; body size 90 bytes.
#line 1 "ENTRY_1052a780"

void __fastcall FUN_1052a780(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCServiceDescriptorManagerEventSink);
  piVar1 = (int *)((int *)param_1[2]);

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 1052a830; body size 190 bytes.
#line 1 "ENTRY_1052a830"

void __fastcall FUN_1052a830(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCToggleScrobbleAction);
  param_1[2] = (uint)&ghidra_vftable_SCToggleScrobbleAction;
  piVar1 = (int *)((int *)param_1[9]);

  if (piVar1 != (int *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[7]);

  if (piVar1 != (int *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[4]);

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (uint)&ghidra_vftable_SCIObj;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 1052a9a0; body size 81 bytes.
#line 1 "ENTRY_1052a9a0"

int * __thiscall Recovered_Bulk::FUN_1052a9a0(int *param_2)
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


// Reference entry 1052aa70; body size 81 bytes.
#line 1 "ENTRY_1052aa70"

int * __thiscall Recovered_Bulk::FUN_1052aa70(int *param_2)
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


// Reference entry 1052aef0; body size 188 bytes.
#line 1 "ENTRY_1052aef0"

undefined4 * __thiscall Recovered_Bulk::FUN_1052aef0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBrowseToServiceRootActionFactory);
  piVar1 = (int *)((int *)param_1[6]);

  if (piVar1 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  param_1[4] = 0;
  piVar1 = (int *)((int *)param_1[3]);

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1052aff0; body size 110 bytes.
#line 1 "ENTRY_1052aff0"

undefined4 * __thiscall Recovered_Bulk::FUN_1052aff0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceAccountNeededState);

  ((SCStr *)((SCStr *)(param_1 + 3)))->int_release();
  param_1[3] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10,uVar1);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1052b080; body size 154 bytes.
#line 1 "ENTRY_1052b080"

undefined4 * __thiscall Recovered_Bulk::FUN_1052b080(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceAppLinkFailState);

  ((SCStr *)((SCStr *)(param_1 + 6)))->int_release();
  param_1[6] = 0;

  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  param_1[4] = 0;

  ((SCStr *)((SCStr *)(param_1 + 3)))->int_release();
  param_1[3] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c,uVar1);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1052b150; body size 132 bytes.
#line 1 "ENTRY_1052b150"

undefined4 * __thiscall Recovered_Bulk::FUN_1052b150(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceCallToActionAppLinkState);

  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  param_1[4] = 0;

  ((SCStr *)((SCStr *)(param_1 + 3)))->int_release();
  param_1[3] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18,uVar1);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1052b3e0; body size 144 bytes.
#line 1 "ENTRY_1052b3e0"

undefined4 * __thiscall Recovered_Bulk::FUN_1052b3e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceGetShareUsageState);
  param_1[3] = (uint)&ghidra_vftable_SCMusicServiceGetShareUsageState;
  thunk_FUN_102cc960(uVar2);
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[5]);

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x80);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1052b4d0; body size 152 bytes.
#line 1 "ENTRY_1052b4d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1052b4d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceIntroState);
  piVar1 = (int *)((int *)param_1[6]);

  if (piVar1 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[4]);

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1052b5a0; body size 181 bytes.
#line 1 "ENTRY_1052b5a0"

undefined4 * __thiscall Recovered_Bulk::FUN_1052b5a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceLaunchAppLinkState);
  param_1[3] = (uint)&ghidra_vftable_SCMusicServiceLaunchAppLinkState;

  ((SCStr *)((SCStr *)(param_1 + 7)))->int_release();
  param_1[7] = 0;

  ((SCStr *)((SCStr *)(param_1 + 6)))->int_release();
  param_1[6] = 0;

  ((SCStr *)((SCStr *)(param_1 + 5)))->int_release();
  param_1[5] = 0;
  param_1[3] = (uint)&ghidra_vftable_SCIObjImpl;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[3] = (uint)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x28,uVar1);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1052b690; body size 191 bytes.
#line 1 "ENTRY_1052b690"

undefined4 * __thiscall Recovered_Bulk::FUN_1052b690(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceLinkCodeState);
  param_1[3] = (uint)&ghidra_vftable_SCMusicServiceLinkCodeState;
  param_1[10] = (uint)&ghidra_vftable_SCMusicServiceLinkCodeState;
  thunk_FUN_1053d930(uVar1);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  ((SCStr *)((SCStr *)(param_1 + 0x1d)))->int_release();
  param_1[0x1d] = 0;
  param_1[0x10] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  param_1[10] = (uint)&ghidra_vftable_RControlAIOOpCB;
  thunk_FUN_11240850();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  param_1[3] = (uint)&ghidra_vftable_SCTimerUser;
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x78);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1052b790; body size 202 bytes.
#line 1 "ENTRY_1052b790"

undefined4 * __thiscall Recovered_Bulk::FUN_1052b790(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceListState);
  param_1[3] = (uint)&ghidra_vftable_SCMusicServiceListState;
  thunk_FUN_1053f780(uVar2);
  piVar1 = (int *)((int *)param_1[10]);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  if (piVar1 != (int *)0x0) {
    param_1[9] = 0;
    param_1[10] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[8]);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar1 != (int *)0x0) {
    param_1[7] = 0;
    param_1[8] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[3] = (uint)&ghidra_vftable_SCServiceDescriptorManagerEventSink;
  piVar1 = (int *)((int *)param_1[5]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x2c);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1052b8a0; body size 148 bytes.
#line 1 "ENTRY_1052b8a0"

undefined4 * __thiscall Recovered_Bulk::FUN_1052b8a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceListWaitingState);
  param_1[3] = (uint)&ghidra_vftable_SCMusicServiceListWaitingState;
  param_1[4] = (uint)&ghidra_vftable_SCMusicServiceListWaitingState;
  thunk_FUN_1053d9b0(uVar1);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  param_1[4] = (uint)&ghidra_vftable_SCTimerUser;
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[3] = (uint)&ghidra_vftable_SCSwfObjHHListener;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x34);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1052b960; body size 246 bytes.
#line 1 "ENTRY_1052b960"

undefined4 * __thiscall Recovered_Bulk::FUN_1052b960(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceLoadMSInfoState);
  param_1[3] = (uint)&ghidra_vftable_SCMusicServiceLoadMSInfoState;
  param_1[4] = (uint)&ghidra_vftable_SCMusicServiceLoadMSInfoState;
  param_1[0x5d] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0(uVar2);
  thunk_FUN_112818d0();
  piVar1 = (int *)((int *)param_1[0xb]);

  if (piVar1 != (int *)0x0) {
    param_1[10] = 0;
    param_1[0xb] = 0;
    (**(code **)(*piVar1 + 8))();
  }

  ((SCStr *)((SCStr *)(param_1 + 9)))->int_release();
  param_1[9] = 0;

  ((SCStr *)((SCStr *)(param_1 + 8)))->int_release();
  param_1[8] = 0;

  ((SCStr *)((SCStr *)(param_1 + 7)))->int_release();
  param_1[7] = 0;
  param_1[3] = (uint)&ghidra_vftable_RControlAIOOpCB;
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x180);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1052baa0; body size 131 bytes.
#line 1 "ENTRY_1052baa0"

undefined4 * __thiscall Recovered_Bulk::FUN_1052baa0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceLoginInput);
  piVar1 = (int *)((int *)param_1[3]);

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

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1052bb50; body size 119 bytes.
#line 1 "ENTRY_1052bb50"

undefined4 * __thiscall Recovered_Bulk::FUN_1052bb50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceLoginPasswordState);
  piVar1 = (int *)((int *)param_1[4]);

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1052bc20; body size 131 bytes.
#line 1 "ENTRY_1052bc20"

undefined4 * __thiscall Recovered_Bulk::FUN_1052bc20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceNicknameInput);
  piVar1 = (int *)((int *)param_1[3]);

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

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1052bcd0; body size 131 bytes.
#line 1 "ENTRY_1052bcd0"

undefined4 * __thiscall Recovered_Bulk::FUN_1052bcd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServicePasswordInput);
  piVar1 = (int *)((int *)param_1[3]);

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

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1052bd80; body size 119 bytes.
#line 1 "ENTRY_1052bd80"

undefined4 * __thiscall Recovered_Bulk::FUN_1052bd80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServicePasswordState);
  piVar1 = (int *)((int *)param_1[4]);

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1052be20; body size 172 bytes.
#line 1 "ENTRY_1052be20"

undefined4 * __thiscall Recovered_Bulk::FUN_1052be20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0x3b)))->int_release();
  param_1[0x3b] = 0;
  thunk_FUN_102cc870(uVar2);
  thunk_FUN_102cc960();
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[5]);

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xf0);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1052bf00; body size 154 bytes.
#line 1 "ENTRY_1052bf00"

undefined4 * __thiscall Recovered_Bulk::FUN_1052bf00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceResultErrorState);

  ((SCStr *)((SCStr *)(param_1 + 5)))->int_release();
  param_1[5] = 0;

  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  param_1[4] = 0;

  ((SCStr *)((SCStr *)(param_1 + 3)))->int_release();
  param_1[3] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18,uVar1);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1052c030; body size 223 bytes.
#line 1 "ENTRY_1052c030"

undefined4 * __thiscall Recovered_Bulk::FUN_1052c030(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceSetNicknameState);
  param_1[5] = (uint)&ghidra_vftable_SCMusicServiceSetNicknameState;
  param_1[8] = (uint)&ghidra_vftable_SCMusicServiceSetNicknameState;
  thunk_FUN_1052e8a0(uVar2);
  if (param_1[0xc] != 0) {
    thunk_FUN_104dec20();
    if ((undefined4 *)param_1[0xc] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0xc])(1);
    }
    param_1[0xc] = 0;
  }
  piVar1 = (int *)((int *)param_1[10]);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  if (piVar1 != (int *)0x0) {
    param_1[9] = 0;
    param_1[10] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[8] = (uint)&ghidra_vftable_SCSwfObjHHListener;
  param_1[5] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[7]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (piVar1 != (int *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x34);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1052c150; body size 144 bytes.
#line 1 "ENTRY_1052c150"

undefined4 * __thiscall Recovered_Bulk::FUN_1052c150(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceSetShareUsageState);
  param_1[3] = (uint)&ghidra_vftable_SCMusicServiceSetShareUsageState;
  thunk_FUN_102cc870(uVar2);
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[5]);

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x88);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1052c240; body size 318 bytes.
#line 1 "ENTRY_1052c240"

undefined4 * __thiscall Recovered_Bulk::FUN_1052c240(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceWorkingState);
  param_1[3] = (uint)&ghidra_vftable_SCMusicServiceWorkingState;
  param_1[6] = (uint)&ghidra_vftable_SCMusicServiceWorkingState;
  param_1[0xd] = (uint)&ghidra_vftable_SCMusicServiceWorkingState;

  if ((int *)param_1[0x10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x10] + 0x18))(uVar2);
  }
  thunk_FUN_1059d800();
  thunk_FUN_104dec20();
  if ((undefined4 *)param_1[0x16] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x16])(1);
  }
  piVar1 = (int *)((int *)param_1[0x15]);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  if (piVar1 != (int *)0x0) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x13]);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar1 != (int *)0x0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x11]);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (piVar1 != (int *)0x0) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0xd] = (uint)&ghidra_vftable_SCSwfObjHHListener;
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  param_1[6] = (uint)&ghidra_vftable_SCTimerUser;
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[5]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x5c);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1052c3e0; body size 202 bytes.
#line 1 "ENTRY_1052c3e0"

undefined4 * __thiscall Recovered_Bulk::FUN_1052c3e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRemoveServiceAction);
  param_1[2] = (uint)&ghidra_vftable_SCRemoveServiceAction;
  piVar1 = (int *)((int *)param_1[10]);

  if (piVar1 != (int *)0x0) {
    param_1[9] = 0;
    param_1[10] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  ((SCStr *)((SCStr *)(param_1 + 7)))->int_release();
  param_1[7] = 0;
  piVar1 = (int *)((int *)param_1[4]);

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (uint)&ghidra_vftable_SCIObj;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x2c);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1052c4f0; body size 113 bytes.
#line 1 "ENTRY_1052c4f0"

undefined4 * __thiscall Recovered_Bulk::FUN_1052c4f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCServiceDescriptorManagerEventSink);
  piVar1 = (int *)((int *)param_1[2]);

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1052c600; body size 211 bytes.
#line 1 "ENTRY_1052c600"

undefined4 * __thiscall Recovered_Bulk::FUN_1052c600(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCToggleScrobbleAction);
  param_1[2] = (uint)&ghidra_vftable_SCToggleScrobbleAction;
  piVar1 = (int *)((int *)param_1[9]);

  if (piVar1 != (int *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[7]);

  if (piVar1 != (int *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[4]);

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (uint)&ghidra_vftable_SCIObj;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x2c);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1052c780; body size 89 bytes.
#line 1 "ENTRY_1052c780"

void __thiscall Recovered_Bulk::FUN_1052c780(int param_2,int param_3,int param_4)
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


// Reference entry 1052c8a0; body size 81 bytes.
#line 1 "ENTRY_1052c8a0"

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

void __fastcall FID_conflict__Tidy_1052c8a0(int *param_1)

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


// Reference entry 1052cd00; body size 101 bytes.
#line 1 "ENTRY_1052cd00"

void __thiscall Recovered_Bulk::FUN_1052cd00(int param_2,short param_3)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x10) + 0x20))());
  if (iVar1 != param_2) {
    thunk_FUN_112af4e0("MusicServiceWizard",1,"Invalid op complete received!");
    return;
  }
  if (param_3 == 0) {
    *(undefined1 *)(param_1 + 0x18) = 1;
    FUN_1006aac8();
    return;
  }
  thunk_FUN_112af4e0("MusicServiceWizard",1,"Error from setting nickname");
  *(undefined1 *)(param_1 + 0x19) = 1;
  FUN_1006aac8();
  return;
}


// Reference entry 1052cd80; body size 65 bytes.
#line 1 "ENTRY_1052cd80"

void __thiscall Recovered_Bulk::FUN_1052cd80(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  if (*(int **)(param_1 + 0x10) == (int *)0x0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x10) + 0x20))());
  }
  if (iVar1 == param_2) {
    *(undefined1 *)(param_1 + 0x74) = 1;
    FUN_1006aac8();
    return;
  }
  thunk_FUN_112af4e0("MusicServiceWizard",1,"Invalid op complete received!");
  return;
}


// Reference entry 1052d370; body size 78 bytes.
#line 1 "ENTRY_1052d370"

void __fastcall FUN_1052d370(int param_1)

{
  uint uVar1;
  int *piVar2;
  
  if ((*(int *)(param_1 + 0x68) != 0) &&
     (uVar1 = (*(int *)(param_1 + 0x68) + *(int *)(param_1 + 100)) - 1,
     piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x5c) +
                                (uVar1 >> 2 & *(int *)(param_1 + 0x60) - 1U) * 4) + (uVar1 & 3) * 4)
     , piVar2 != (int *)0x0)) {
    piVar2 = (int *)((int *)(**(code **)(*piVar2 + 0x60))());
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xb8))();
    }
  }
  thunk_FUN_10dd3060();
  return;
}


// Reference entry 1052d840; body size 371 bytes.
#line 1 "ENTRY_1052d840"

void __thiscall Recovered_Bulk::FUN_1052d840(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  SCLibrary *this_;
  SCIOp *pSVar4;
  int *local_20;
  int *local_1c;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if ((char)param_1[10] == '\0') {
    *(undefined1 *)(param_1 + 10) = 1;
    uVar2 = (undefined4)((**(code **)(*param_2 + 0x20))(&local_14));

    thunk_FUN_101aa9f0(uVar2);
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("MenuSelectedIndex");
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    iVar3 = (int)((**(code **)(*local_20 + 0x24))(&param_2));
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    ((SCStr *)((SCStr *)&param_2))->int_release();
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    if (iVar3 == 2) {
      (**(code **)(*(int *)param_1[3] + 0x18))(param_1);
    }
    else {
      piVar1 = (int *)((int *)param_1[(uint)(iVar3 != 0) * 2 + 7]);
      iVar3 = (int)(param_1[(uint)(iVar3 != 0) * 2 + 6]);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      pSVar4 = (SCIOp *)((SCIOp *)&param_2);
      *(unsigned char *)((char *)&local_8 + 0) = 6;
      this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
      uVar2 = (undefined4)(((SCLibrary *)(this_))->createSCRunAsyncIOOperationAction(pSVar4));
      *(unsigned char *)((char *)&local_8 + 0) = 7;
      thunk_FUN_101aa810(uVar2);
      *(unsigned char *)((char *)&local_8 + 0) = 10;
      if (param_2 != (int *)0x0) {
        (**(code **)(*param_2 + 8))(iVar3);
      }
      *(unsigned char *)((char *)&local_8 + 0) = 9;
      (**(code **)(*param_1 + 0x20))(local_18);
      *(unsigned char *)((char *)&local_8 + 0) = 0xb;
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 8))();
      }
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xc)));
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))();
      }
    }

    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();

      return;
    }
  }
  else {
    (**(code **)(*(int *)param_1[3] + 0x18))(param_1,DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 1052dd40; body size 128 bytes.
#line 1 "ENTRY_1052dd40"

bool __fastcall FUN_1052dd40(int param_1)

{
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 8) + 0xd8));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(DAT_12126b84 );
  }

  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return (bool)(piVar1 != (int *)0x0);

 } catch (...) { }
}


// Reference entry 1052dff0; body size 162 bytes.
#line 1 "ENTRY_1052dff0"

undefined1 __fastcall FUN_1052dff0(int param_1)

{
 try {
  int *piVar1;
  undefined1 uVar2;
  int *piVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar3 = (int *)((int *)(**(code **)(**(int **)(param_1 + 8) + 0x1e0))
                            (&local_14,DAT_12126b84 ));
  piVar1 = (int *)((int *)*piVar3);

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
  uVar2 = (undefined1)((**(code **)(*piVar1 + 0x30))());

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined1)(uVar2);

 } catch (...) { }
}


// Reference entry 1052e0d0; body size 73 bytes.
#line 1 "ENTRY_1052e0d0"

undefined4 __fastcall FUN_1052e0d0(int param_1)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  
  if (*(int *)(param_1 + 0x68) != 0) {
    uVar1 = (uint)((*(int *)(param_1 + 0x68) + *(int *)(param_1 + 100)) - 1);
    piVar2 = (int *)(*(int **)(*(int *)(*(int *)(param_1 + 0x5c) +
                               (uVar1 >> 2 & *(int *)(param_1 + 0x60) - 1U) * 4) + (uVar1 & 3) * 4));
    if (piVar2 != (int *)0x0) {
      cVar3 = (char)((**(code **)(*piVar2 + 0x7c))());
      if (cVar3 != '\0') {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 1052e640; body size 73 bytes.
#line 1 "ENTRY_1052e640"

undefined4 __fastcall FUN_1052e640(int param_1)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  
  if (*(int *)(param_1 + 0x68) != 0) {
    uVar1 = (uint)((*(int *)(param_1 + 0x68) + *(int *)(param_1 + 100)) - 1);
    piVar2 = (int *)(*(int **)(*(int *)(*(int *)(param_1 + 0x5c) +
                               (uVar1 >> 2 & *(int *)(param_1 + 0x60) - 1U) * 4) + (uVar1 & 3) * 4));
    if (piVar2 != (int *)0x0) {
      cVar3 = (char)((**(code **)(*piVar2 + 0x3c))());
      if (cVar3 != '\0') {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 1052e6b0; body size 76 bytes.
#line 1 "ENTRY_1052e6b0"

void __fastcall FUN_1052e6b0(int param_1)

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


// Reference entry 1052e7c0; body size 76 bytes.
#line 1 "ENTRY_1052e7c0"

void __fastcall FUN_1052e7c0(int param_1)

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


// Reference entry 1052e970; body size 64 bytes.
#line 1 "ENTRY_1052e970"

void __fastcall FUN_1052e970(int param_1)

{
  uint uVar1;
  int *piVar2;
  
  if ((*(int *)(param_1 + 0x68) != 0) &&
     (uVar1 = (*(int *)(param_1 + 0x68) + *(int *)(param_1 + 100)) - 1,
     piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x5c) +
                                (uVar1 >> 2 & *(int *)(param_1 + 0x60) - 1U) * 4) + (uVar1 & 3) * 4)
     , piVar2 != (int *)0x0)) {
                    
                    
    (**(code **)(*piVar2 + 0x6c))();
    return;
  }
  return;
}


// Reference entry 1052ef30; body size 117 bytes.
#line 1 "ENTRY_1052ef30"

undefined4 __fastcall FUN_1052ef30(int param_1)

{
 try {
  void *pvVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *(undefined4 *)(param_1 + 0xe8) = 6;
  pvVar1 = (void *)(operator_new(0x180));

  if (pvVar1 != (void *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10526830(param_1));

    return (undefined4)(uVar2);
  }

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 1052fba0; body size 294 bytes.
#line 1 "ENTRY_1052fba0"

undefined4 * __fastcall FUN_1052fba0(int param_1)

{
 try {
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 8) + 0xd8));
  if (piVar1 != (int *)0x0) {
    iVar3 = (int)((**(code **)(*piVar1 + 0x38))(DAT_12126b84 ));
    if ((iVar3 == 2) || (iVar3 == 3)) {
      if (*(char *)(*(int *)(param_1 + 8) + 0xd08) == '\0') {
        pvVar4 = (void *)(operator_new(0x20));

        if (pvVar4 != (void *)0x0) {
          puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_105260a0(*(undefined4 *)(param_1 + 8),0));

          return (undefined4 *)(puVar5);
        }
      }
      else {
        pvVar4 = (void *)(operator_new(0x78));

        if (pvVar4 != (void *)0x0) {
          puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_105263b0(*(undefined4 *)(param_1 + 8),0));

          return (undefined4 *)(puVar5);
        }
      }

      return (undefined4 *)((undefined4 *)0x0);
    }
  }
  puVar5 = (undefined4 *)(operator_new(0x14));
  if (puVar5 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar5[1] = uVar2;
    puVar5[2] = uVar2;
    *puVar5 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceLoginPasswordState);
    puVar5[3] = 0;
    puVar5[4] = 0;

    return (undefined4 *)(puVar5);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 1052fd50; body size 186 bytes.
#line 1 "ENTRY_1052fd50"

undefined4 * __fastcall FUN_1052fd50(int *param_1)

{
 try {
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int *)(param_1);
  if ((char)param_1[5] != '\0') {
    uVar2 = (undefined4)((**(code **)(*param_1 + 8))(&local_14,DAT_12126b84 ));

    puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_10532350(uVar2,param_1 + 4,param_1 + 3));

    ((SCStr *)((SCStr *)&local_14))->int_release();

    return (undefined4 *)(puVar3);
  }
  puVar3 = (undefined4 *)(operator_new(0xc));
  if (puVar3 != (undefined4 *)0x0) {
    iVar1 = (int)(param_1[2]);
    puVar3[1] = iVar1;
    puVar3[2] = iVar1;
    *puVar3 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceCompleteState);

    return (undefined4 *)(puVar3);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 1052fea0; body size 205 bytes.
#line 1 "ENTRY_1052fea0"

undefined4 * __fastcall FUN_1052fea0(int param_1)

{
 try {
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (*(short *)(param_1 + 0x10) == 0) {
    pvVar4 = (void *)(operator_new(0x78));

    if (pvVar4 != (void *)0x0) {
      puVar3 = (undefined4 *)((undefined4 *)
               thunk_FUN_105263b0(*(undefined4 *)(param_1 + 8),*(undefined1 *)(param_1 + 0x12)));

      return (undefined4 *)(puVar3);
    }

    return (undefined4 *)((undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)(operator_new(0x14));
  if (puVar3 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(*(undefined4 *)(param_1 + 8));
    uVar1 = (undefined2)(*(undefined2 *)(param_1 + 0x10));
    puVar3[1] = uVar2;
    puVar3[2] = uVar2;
    *puVar3 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceResultState);
    puVar3[3] = 8;
    *(undefined2 *)(puVar3 + 4) = uVar1;

    return (undefined4 *)(puVar3);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 1052ffa0; body size 303 bytes.
#line 1 "ENTRY_1052ffa0"

undefined4 * __fastcall FUN_1052ffa0(int param_1)

{
 try {
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  void *pvVar4;
  undefined4 *puVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  cVar3 = (char)((**(code **)(**(int **)(param_1 + 8) + 0x1e8))(DAT_12126b84 ));
  if (cVar3 == '\0') {
    puVar5 = (undefined4 *)(operator_new(0x88));
    if (puVar5 != (undefined4 *)0x0) {
      uVar2 = (undefined4)(*(undefined4 *)(param_1 + 8));
      puVar5[1] = uVar2;
      puVar5[2] = uVar2;
      puVar5[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
      puVar5[4] = 0;
      puVar5[5] = 0;
      *puVar5 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceSetShareUsageState);
      puVar5[3] = (uint)&ghidra_vftable_SCMusicServiceSetShareUsageState;
      puVar5[7] = 0;
      puVar5[8] = 0;
      puVar5[10] = 0;
      puVar5[0xb] = 0;
      puVar5[6] = (uint)&ghidra_vftable_SCOpRef;
      puVar5[9] = (uint)&ghidra_vftable_SCOpRef;
      puVar5[0x15] = 0;
      puVar5[0x1f] = 0;
      *(undefined1 *)(puVar5 + 0x20) = 0;

      return (undefined4 *)(puVar5);
    }

    return (undefined4 *)((undefined4 *)0x0);
  }
  iVar1 = (int)(*(int *)(param_1 + 8));
  *(undefined4 *)(iVar1 + 0xe8) = 6;
  pvVar4 = (void *)(operator_new(0x180));

  if (pvVar4 != (void *)0x0) {
    puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_10526830(iVar1));

    return (undefined4 *)(puVar5);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10530120; body size 109 bytes.
#line 1 "ENTRY_10530120"

undefined4 __fastcall FUN_10530120(int param_1)

{
 try {
  void *pvVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  pvVar1 = (void *)(operator_new(0x180));

  if (pvVar1 != (void *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10526830(*(undefined4 *)(param_1 + 8)));

    return (undefined4)(uVar2);
  }

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 105309a0; body size 279 bytes.
#line 1 "ENTRY_105309a0"

undefined4 * __fastcall FUN_105309a0(int param_1)

{
 try {
  undefined2 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  void *pvVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar2 = (int)(*(int *)(param_1 + 0x30));
  if (iVar2 == 0) {
    if (*(char *)(param_1 + 0x3c) == '\0') {
      pvVar5 = (void *)(operator_new(0x5c));

      if (pvVar5 != (void *)0x0) {
        puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_105285a0(*(undefined4 *)(param_1 + 8),1));

        return (undefined4 *)(puVar3);
      }
    }
    else {
      pvVar5 = (void *)(operator_new(0x5c));

      if (pvVar5 != (void *)0x0) {
        puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_105285a0(*(undefined4 *)(param_1 + 8),7));

        return (undefined4 *)(puVar3);
      }
    }

    return (undefined4 *)((undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)(operator_new(0x14));
  if (puVar3 != (undefined4 *)0x0) {
    uVar4 = (undefined4)(*(undefined4 *)(param_1 + 8));
    uVar1 = (undefined2)(*(undefined2 *)(param_1 + 0x30));
    puVar3[1] = uVar4;
    puVar3[2] = uVar4;
    uVar4 = (undefined4)(5);
    if (iVar2 == 0x1f45) {
      uVar4 = (undefined4)(8);
    }
    *puVar3 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceResultState);
    puVar3[3] = uVar4;
    *(undefined2 *)(puVar3 + 4) = uVar1;

    return (undefined4 *)(puVar3);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10530b00; body size 332 bytes.
#line 1 "ENTRY_10530b00"

undefined4 * __fastcall FUN_10530b00(int param_1)

{
 try {
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  undefined4 *puVar6;
  void *pvVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 8) + 0xd8));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(DAT_12126b84 );
  }

  if (piVar1 == (int *)0x0) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    piVar5 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  cVar4 = (char)((**(code **)(*piVar1 + 0x3c))());
  if (cVar4 == '\0') {
    iVar3 = (int)(*(int *)(param_1 + 8));
    *(undefined4 *)(iVar3 + 0xe8) = 6;
    pvVar7 = (void *)(operator_new(0x180));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
    if (pvVar7 != (void *)0x0) {
      puVar6 = (undefined4 *)((undefined4 *)thunk_FUN_10526830(iVar3));
      goto LAB_10530c26;
    }
  }
  else {
    puVar6 = (undefined4 *)(operator_new(0x80));
    if (puVar6 != (undefined4 *)0x0) {
      uVar2 = (undefined4)(*(undefined4 *)(param_1 + 8));
      puVar6[1] = uVar2;
      puVar6[2] = uVar2;
      puVar6[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
      puVar6[4] = 0;
      puVar6[5] = 0;
      *puVar6 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceGetShareUsageState);
      puVar6[3] = (uint)&ghidra_vftable_SCMusicServiceGetShareUsageState;
      puVar6[7] = 0;
      puVar6[8] = 0;
      puVar6[10] = 0;
      puVar6[0xb] = 0;
      puVar6[6] = (uint)&ghidra_vftable_SCOpRef;
      puVar6[9] = (uint)&ghidra_vftable_SCOpRef;
      puVar6[0x15] = 0;
      puVar6[0x1f] = 0;
      goto LAB_10530c26;
    }
  }
  puVar6 = (undefined4 *)((undefined4 *)0x0);
LAB_10530c26:

  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }

  return (undefined4 *)(puVar6);

 } catch (...) { }
}


// Reference entry 10531b70; body size 108 bytes.
#line 1 "ENTRY_10531b70"

undefined4 __fastcall FUN_10531b70(int param_1)

{
 try {
  void *pvVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  pvVar1 = (void *)(operator_new(0x5c));

  if (pvVar1 != (void *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_105285a0(*(undefined4 *)(param_1 + 8),5));

    return (undefined4)(uVar2);
  }

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 10531c40; body size 108 bytes.
#line 1 "ENTRY_10531c40"

undefined4 __fastcall FUN_10531c40(int param_1)

{
 try {
  void *pvVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  pvVar1 = (void *)(operator_new(0x5c));

  if (pvVar1 != (void *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_105285a0(*(undefined4 *)(param_1 + 8),5));

    return (undefined4)(uVar2);
  }

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 10531cd0; body size 201 bytes.
#line 1 "ENTRY_10531cd0"

undefined4 * __fastcall FUN_10531cd0(int param_1)

{
 try {
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (*(char *)(param_1 + 0xe9) == '\0') {
    iVar2 = (int)(*(int *)(param_1 + 8));
    *(undefined4 *)(iVar2 + 0xe8) = 6;
    pvVar4 = (void *)(operator_new(0x180));

    if (pvVar4 != (void *)0x0) {
      puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_10526830(iVar2));

      return (undefined4 *)(puVar3);
    }

    return (undefined4 *)((undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)(operator_new(0xc));
  if (puVar3 != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *puVar3 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceCompleteState);

    return (undefined4 *)(puVar3);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10531e50; body size 629 bytes.
#line 1 "ENTRY_10531e50"

int * __fastcall FUN_10531e50(int *param_1)

{
 try {
  int iVar1;
  char cVar2;
  SCLibrary *this_;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int **ppiVar6;
  int *local_3c;
  int *local_38;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  cVar2 = (char)((**(code **)(*param_1 + 0x38))(DAT_12126b84 ));
  if (cVar2 == '\0') {
    this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    ppiVar6 = (int **)(&local_18);
    uVar3 = (undefined4)(((SCLibrary *)(this_))->getSCHousehold());

    thunk_FUN_101bf370(uVar3);
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))(ppiVar6);
    }
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    uVar3 = (undefined4)((**(code **)(*local_3c + 0x1cc))(&local_1c));
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    thunk_FUN_102c3040(uVar3);
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    uVar3 = (undefined4)(thunk_FUN_102cf840(&local_24));
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    thunk_FUN_102c2fc0(uVar3);
    *(unsigned char *)((char *)&local_8 + 0) = 0xb;
    if (local_24 != (int *)0x0) {
      (**(code **)(*local_24 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 10;
    ((SCStr *)((SCStr *)&local_18))->int_allocRep("AccountUDN");
    *(unsigned char *)((char *)&local_8 + 0) = 0xc;
    (**(code **)(*(int *)param_1[2] + 0xd0))(&local_14,&local_18);
    *(unsigned char *)((char *)&local_8 + 0) = 0xf;
    ((SCStr *)((SCStr *)&local_18))->int_release();
    local_18 = (int *)((int *)0x0);
    *(unsigned char *)((char *)&local_8 + 0) = 0xe;
    uVar3 = (undefined4)((**(code **)(*local_2c + 0x20))(&local_24,&local_14));
    *(unsigned char *)((char *)&local_8 + 0) = 0x10;
    thunk_FUN_102c2d20(uVar3);
    *(unsigned char *)((char *)&local_8 + 0) = 0x13;
    if (local_24 != (int *)0x0) {
      (**(code **)(*local_24 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x12;
    if (local_20 != 0) {
      local_24 = (int *)(operator_new(0xc));
      if (local_24 == (int *)0x0) {
        piVar5 = (int *)((int *)0x0);
      }
      else {
        iVar1 = (int)(param_1[2]);
        local_24[1] = iVar1;
        local_24[2] = iVar1;
        *local_24 = (int)((int)(uint)&ghidra_vftable_SCMusicServiceMultipleAccountsAddedState);
        piVar5 = (int *)(local_24);
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0x14;
      if (local_1c != (int *)0x0) {
        (**(code **)(*local_1c + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0x15;
      ((SCStr *)((SCStr *)&local_14))->int_release();

      *(unsigned char *)((char *)&local_8 + 0) = 0x16;
      if (local_28 != (int *)0x0) {
        (**(code **)(*local_28 + 8))();
      }
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x17)));
      if (local_30 != (int *)0x0) {
        (**(code **)(*local_30 + 8))();
      }

      if (local_38 != (int *)0x0) {
        (**(code **)(*local_38 + 8))();
      }

      return (int *)(piVar5);
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x19;
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x1a;
    ((SCStr *)((SCStr *)&local_14))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x1b;
    if (local_28 != (int *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x1c)));
    if (local_30 != (int *)0x0) {
      (**(code **)(*local_30 + 8))();
    }

    if (local_38 != (int *)0x0) {
      (**(code **)(*local_38 + 8))();
    }

  }
  puVar4 = (undefined4 *)(operator_new(0xc));
  if (puVar4 != (undefined4 *)0x0) {
    iVar1 = (int)(param_1[2]);
    puVar4[1] = iVar1;
    puVar4[2] = iVar1;
    *puVar4 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceCompleteState);

    return (int *)(puVar4);
  }

  return (int *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10532170; body size 167 bytes.
#line 1 "ENTRY_10532170"

undefined4 * __fastcall FUN_10532170(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  
  if (*(char *)((int)param_1 + 0x2d) != '\0') {
    puVar3 = (undefined4 *)(operator_new(0xc));
    if (puVar3 == (undefined4 *)0x0) {
      return (undefined4 *)((undefined4 *)0x0);
    }
    iVar1 = (int)(param_1[2]);
    puVar3[1] = iVar1;
    puVar3[2] = iVar1;
    *puVar3 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceSetNicknameErrorState);
    return (undefined4 *)(puVar3);
  }
  cVar2 = (char)((**(code **)(*param_1 + 0x38))());
  if ((cVar2 == '\0') && (cVar2 = thunk_FUN_10541eb0(), cVar2 != '\0')) {
    puVar3 = (undefined4 *)(operator_new(0xc));
    if (puVar3 == (undefined4 *)0x0) {
      return (undefined4 *)((undefined4 *)0x0);
    }
    iVar1 = (int)(param_1[2]);
    puVar3[1] = iVar1;
    puVar3[2] = iVar1;
    *puVar3 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceMultipleAccountsAddedState);
    return (undefined4 *)(puVar3);
  }
  puVar3 = (undefined4 *)(operator_new(0xc));
  if (puVar3 == (undefined4 *)0x0) {
    return (undefined4 *)((undefined4 *)0x0);
  }
  iVar1 = (int)(param_1[2]);
  puVar3[1] = iVar1;
  puVar3[2] = iVar1;
  *puVar3 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceCompleteState);
  return (undefined4 *)(puVar3);
}


// Reference entry 10532240; body size 118 bytes.
#line 1 "ENTRY_10532240"

undefined4 __fastcall FUN_10532240(int param_1)

{
 try {
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar1 = (int)(*(int *)(param_1 + 8));
  *(undefined4 *)(iVar1 + 0xe8) = 6;
  pvVar2 = (void *)(operator_new(0x180));

  if (pvVar2 != (void *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10526830(iVar1));

    return (undefined4)(uVar3);
  }

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 10532b90; body size 90 bytes.
#line 1 "ENTRY_10532b90"

void __thiscall Recovered_Bulk::FUN_10532b90(undefined4 param_2,SCStr *param_3)
{
  int param_1 = (int )this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->beginsWith("SCIServiceDescriptorManager"));
  if (bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIServiceDescriptorManager:onServiceDescriptorsChanged"));
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 4))(param_2);
      return;
    }
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIServiceDescriptorManager:onPreloadServiceDescriptorsChanged"));
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 8))(param_2);
    }
  }
  return;
}


// Reference entry 105331a0; body size 166 bytes.
#line 1 "ENTRY_105331a0"

char * __thiscall Recovered_Bulk::FUN_105331a0(char *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  SCStr *this_;
  SCStr local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  param_2[0] = '\0';
  param_2[1] = '\0';
  param_2[2] = '\0';
  param_2[3] = '\0';


  puVar2 = (undefined4 *)((undefined4 *)(**(code **)(**(int **)(param_1 + 0xd8) + 0x18))(local_18,uVar1));

  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*puVar2 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)((undefined1 *)*puVar2);
  }
  thunk_FUN_1109aba0(0x2075,&DAT_1188465c,puVar3);
  ((SCStr *)(this_))->format(param_2);

  ((SCStr *)(local_18))->int_release();

  return (char *)(param_2);

 } catch (...) { }
}


// Reference entry 105333d0; body size 1094 bytes.
#line 1 "ENTRY_105333d0"

void __thiscall Recovered_Bulk::FUN_105333d0(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  SCLibrary *this_;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  undefined1 *puVar6;
  int **ppiVar7;
  int *local_290;
  int *local_288;
  int *local_284;
  int *local_280;
  int local_278;
  int *local_274;
  int *local_26c;
  int *local_268;
  void *local_264;
  undefined1 *puStack_260;
  undefined4 local_25c;
  undefined1 local_258 [592];
  uint local_8;


  local_8 = (uint)(DAT_12126b84 ^ (uint)local_258);

  local_26c = (int *)(param_2);
  thunk_FUN_112af4e0("MusicServiceWizard",4,"SCRemoveServiceDescriptor::getAction",local_8);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  ppiVar7 = (int **)(&local_26c);
  piVar2 = (int *)((int *)((SCLibrary *)(this_))->getSCHousehold());
  piVar4 = (int *)((int *)*piVar2);

  *piVar2 = (int)(0);
  if (piVar4 == (int *)0x0) {
    local_290 = (int *)((int *)0x0);
  }
  else {
    local_290 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(ppiVar7));
  }
  *(unsigned char *)((char *)&local_25c + 0) = 3;
  if (local_26c != (int *)0x0) {
    (**(code **)(*local_26c + 8))();
  }
  local_288 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_25c + 0) = 4;
  if (piVar4 != (int *)0x0) {
    uVar3 = (undefined4)((**(code **)(*piVar4 + 0x1cc))(&local_26c));
    *(unsigned char *)((char *)&local_25c + 0) = 5;
    thunk_FUN_102c3040(uVar3);
    *(unsigned char *)((char *)&local_25c + 0) = 8;
    if (local_26c != (int *)0x0) {
      (**(code **)(*local_26c + 8))();
    }
    *(unsigned char *)((char *)&local_25c + 0) = 7;
    if (local_278 != 0) {
      uVar3 = (undefined4)(thunk_FUN_102cf840(&local_268));
      *(unsigned char *)((char *)&local_25c + 0) = 9;
      thunk_FUN_102c2fc0(uVar3);
      *(unsigned char *)((char *)&local_25c + 0) = 0xc;
      if (local_268 != (int *)0x0) {
        (**(code **)(*local_268 + 8))();
      }
      *(unsigned char *)((char *)&local_25c + 0) = 0xb;
      piVar2 = (int *)((int *)(**(code **)(*local_284 + 0x20))(&local_26c,param_1 + 0xc));
      piVar4 = (int *)((int *)*piVar2);
      *(unsigned char *)((char *)&local_25c + 0) = 0xd;
      *piVar2 = (int)(0);
      if (piVar4 == (int *)0x0) {
        local_288 = (int *)((int *)0x0);
      }
      else {
        local_288 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
      }
      *(unsigned char *)((char *)&local_25c + 0) = 0xe;
      if (local_26c != (int *)0x0) {
        (**(code **)(*local_26c + 8))();
      }
      *(unsigned char *)((char *)&local_25c + 0) = 0xf;
      if (local_280 != (int *)0x0) {
        (**(code **)(*local_280 + 8))();
      }
    }
    *(unsigned char *)((char *)&local_25c + 0) = 0x10;
    if (local_274 != (int *)0x0) {
      (**(code **)(*local_274 + 8))();
    }
  }
  *(unsigned char *)((char *)&local_25c + 0) = 0x12;
  thunk_FUN_11255220();
  *(unsigned char *)((char *)&local_25c + 0) = 0x13;
  puVar6 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0xc) != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)(*(undefined1 **)(param_1 + 0xc));
  }
  thunk_FUN_112580d0(puVar6);
  local_26c = (int *)(operator_new(0x2c));
  *(unsigned char *)((char *)&local_25c + 0) = 0x14;
  if (local_26c == (int *)0x0) {
    uVar3 = (undefined4)(0);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_105288b0(*(undefined1 *)(param_1 + 8),param_1 + 0xc));
  }
  *(unsigned char *)((char *)&local_25c + 0) = 0x13;
  piVar2 = (int *)((int *)((SCLibrary *)(this_))->createActionContextForAction((SCIAction *)&local_268));
  piVar4 = (int *)((int *)*piVar2);
  *(unsigned char *)((char *)&local_25c + 0) = 0x15;
  *piVar2 = (int)(0);
  if (piVar4 == (int *)0x0) {
    local_274 = (int *)((int *)0x0);
  }
  else {
    local_274 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(uVar3));
  }
  *(unsigned char *)((char *)&local_25c + 0) = 0x16;
  if (local_268 != (int *)0x0) {
    (**(code **)(*local_268 + 8))();
  }
  *(unsigned char *)((char *)&local_25c + 0) = 0x13;
  piVar2 = (int *)(operator_new(0x2c));
  local_268 = (int *)(piVar2);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar2[2] = 0;
    piVar2[3] = 0;
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCRequireTokenActionFactory);
    piVar2[4] = 0;
    piVar2[5] = 0;
    *(undefined1 *)(piVar2 + 6) = 0;
    piVar2[7] = 0;
    piVar2[8] = 0;
    *(unsigned char *)((char *)&local_25c + 0) = 0x19;
    piVar2[9] = (int)piVar4;
    piVar2[10] = 0;
    if (piVar4 != (int *)0x0) {
      piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
      piVar2[10] = (int)piVar4;
      (**(code **)(*piVar4 + 4))();
    }
  }
  *(unsigned char *)((char *)&local_25c + 0) = 0x13;
  piVar4 = (int *)(operator_new(0x20));
  local_268 = (int *)(piVar4);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    *piVar4 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar4[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar4[2] = (int)(uint)&ghidra_vftable_SCIActionDelegate;
    *piVar4 = (int)((int)(uint)&ghidra_vftable_SCCompoundAction);
    piVar4[2] = (int)(uint)&ghidra_vftable_SCCompoundAction;
    piVar4[3] = 0;
    piVar4[4] = 0;
    *(unsigned char *)((char *)&local_25c + 0) = 0x1d;
    piVar4[5] = (int)piVar2;
    piVar4[6] = 0;
    if (piVar2 != (int *)0x0) {
      if (*(code **)(*piVar2 + 0xc) != thunk_FUN_10211630) {
        piVar2 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
      }
      piVar4[6] = (int)piVar2;
      (**(code **)(*piVar2 + 4))();
    }
    *(undefined1 *)(piVar4 + 7) = 0;
  }
  piVar2 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_25c + 0) = 0x13;
  local_26c = (int *)((int *)0x0);
  if (piVar4 != (int *)0x0) {
    piVar2 = (int *)(piVar4);
    if (*(code **)(*piVar4 + 0xc) != thunk_FUN_102116d0) {
      piVar2 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
    }
    local_26c = (int *)(piVar2);
    (**(code **)(*piVar2 + 4))();
  }
  *(unsigned char *)((char *)&local_25c + 0) = 0x1e;
  piVar5 = (int *)((int *)((SCLibrary *)(this_))->createActionContextForAction((SCIAction *)&local_268));
  piVar1 = (int *)((int *)*piVar5);
  *(unsigned char *)((char *)&local_25c + 0) = 0x1f;
  *piVar5 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(piVar4));
  }
  *(unsigned char *)((char *)&local_25c + 0) = 0x20;
  if (local_268 != (int *)0x0) {
    (**(code **)(*local_268 + 8))();
  }
  *(unsigned char *)((char *)&local_25c + 0) = 0x1e;
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  *(unsigned char *)((char *)&local_25c + 0) = 0x21;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  thunk_FUN_11255560();
  *(unsigned char *)((char *)&local_25c + 0) = 0x22;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  *(unsigned char *)((char *)&local_25c + 0) = 0x23;
  if (local_274 != (int *)0x0) {
    (**(code **)(*local_274 + 8))();
  }
  local_25c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_25c + 1)) << 8 | (uint)(0x24)));
  if (local_288 != (int *)0x0) {
    (**(code **)(*local_288 + 8))();
  }

  if (local_290 != (int *)0x0) {
    (**(code **)(*local_290 + 8))();
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10533930; body size 517 bytes.
#line 1 "ENTRY_10533930"

undefined4 * __thiscall Recovered_Bulk::FUN_10533930(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  SCLibrary *this_;
  undefined4 *puVar6;
  SCIAction *pSVar7;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar2 = (int *)((int *)(**(code **)(**(int **)(param_1 + 8) + 0x18))
                            (&local_14,1,DAT_12126b84 ));
  local_20 = (int *)((int *)*piVar2);

  *piVar2 = (int)(0);
  if (local_20 == (int *)0x0) {
    local_24 = (int *)((int *)0x0);
  }
  else {
    local_24 = (int *)((int *)(**(code **)(*local_20 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  piVar3 = (int *)((int *)(**(code **)(**(int **)(param_1 + 8) + 0x18))(&local_1c,0));
  piVar2 = (int *)((int *)*piVar3);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  *piVar3 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  piVar4 = (int *)(operator_new(0x2c));
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    *piVar4 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar4[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar4[2] = (int)(uint)&ghidra_vftable_SCIActionDelegate;
    piVar4[3] = 0;
    piVar4[4] = 0;
    *(undefined1 *)(piVar4 + 5) = 0;
    *piVar4 = (int)((int)(uint)&ghidra_vftable_SCToggleScrobbleAction);
    piVar4[2] = (int)(uint)&ghidra_vftable_SCToggleScrobbleAction;
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    piVar4[6] = (int)local_20;
    piVar4[7] = 0;
    local_14 = (int *)(piVar4);
    if (local_20 != (int *)0x0) {
      piVar5 = (int *)((int *)(**(code **)(*local_20 + 0xc))());
      piVar4[7] = (int)piVar5;
      (**(code **)(*piVar5 + 4))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 10;
    piVar4[8] = (int)piVar2;
    piVar4[9] = 0;
    if (piVar2 != (int *)0x0) {
      piVar2 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
      piVar4[9] = (int)piVar2;
      (**(code **)(*piVar2 + 4))();
    }
    *(undefined1 *)(piVar4 + 10) = 0;
  }
  piVar2 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  local_14 = (int *)((int *)0x0);
  local_18 = (int *)(piVar4);
  if (piVar4 != (int *)0x0) {
    piVar2 = (int *)(piVar4);
    if (*(code **)(*piVar4 + 0xc) != thunk_FUN_102f8990) {
      piVar2 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
    }
    local_14 = (int *)(piVar2);
    (**(code **)(*piVar2 + 4))();
  }
  pSVar7 = (SCIAction *)((SCIAction *)&local_20);
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  puVar6 = (undefined4 *)((undefined4 *)((SCLibrary *)(this_))->createActionContextForAction(pSVar7));
  uVar1 = (undefined4)(*puVar6);
  *puVar6 = (undefined4)(0);
  *param_2 = (undefined4)(uVar1);
  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))(piVar4);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xe)));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10533e90; body size 140 bytes.
#line 1 "ENTRY_10533e90"

undefined4 __fastcall FUN_10533e90(int *param_1)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);
  if (param_1[0x36] == 0) {
    return (undefined4)(0);
  }

  thunk_FUN_10524f60(param_1 + 0x36);

  if (param_1 == (int *)0x0) {
    uVar2 = (undefined4)(0);
  }
  else {
    uVar2 = (undefined4)((**(code **)(*param_1 + 0x18))(uVar1));
  }

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }

  return (undefined4)(uVar2);

 } catch (...) { }
}


// Reference entry 105346e0; body size 72 bytes.
#line 1 "ENTRY_105346e0"

SCStr * FUN_105346e0(SCStr *param_1,int param_2)

{
  if (param_2 == -1) {
    ((SCStr *)(param_1))->int_allocRep("canceled");
    return (SCStr *)(param_1);
  }
  if (param_2 != 0) {
    ((SCStr *)(param_1))->int_allocRep("unknown");
    return (SCStr *)(param_1);
  }
  ((SCStr *)(param_1))->int_allocRep("default");
  return (SCStr *)(param_1);
}


// Reference entry 10534750; body size 111 bytes.
#line 1 "ENTRY_10534750"

undefined1 __fastcall FUN_10534750(int *param_1)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  local_14 = (int *)(param_1);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("HasAccount");

  uVar1 = (undefined1)((**(code **)(*param_1 + 0xe0))(&local_14,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10534e70; body size 66 bytes.
#line 1 "ENTRY_10534e70"

undefined4 __fastcall FUN_10534e70(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if ((*(int *)(param_1 + 0x68) != 0) &&
     (uVar1 = (*(int *)(param_1 + 0x68) + *(int *)(param_1 + 100)) - 1,
     piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x5c) +
                                (uVar1 >> 2 & *(int *)(param_1 + 0x60) - 1U) * 4) + (uVar1 & 3) * 4)
     , piVar2 != (int *)0x0)) {
                    
                    
    uVar3 = (undefined4)((**(code **)(*piVar2 + 0x68))());
    return (undefined4)(uVar3);
  }
  return (undefined4)(0);
}


// Reference entry 10535050; body size 392 bytes.
#line 1 "ENTRY_10535050"

int * FUN_10535050(int *param_1)

{
 try {
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);


  piVar4 = (int *)(operator_new(0x14));
  if (piVar4 == (int *)0x0) {
    *param_1 = (int)(0);
    param_1[1] = 0;
  }
  else {
    *piVar4 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar4[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar4 = (int)((int)(uint)&ghidra_vftable_SCArray);
    piVar4[2] = 0;
    piVar4[3] = 0;
    piVar4[4] = 0;
    *param_1 = (int)((int)piVar4);
    param_1[1] = 0;
    if (piVar4 != (int *)0x0) {
      local_18 = (int *)(piVar4);
      if (*(code **)(*piVar4 + 0xc) != thunk_FUN_101aa0b0) {
        piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(uVar3));
      }
      param_1[1] = (int)piVar4;
      (**(code **)(*piVar4 + 4))();
    }
  }
  iVar1 = (int)(*param_1);


  local_18 = (int *)((int *)0x4);
  puVar2 = (undefined4 *)(*(undefined4 **)(iVar1 + 0xc));
  if (puVar2 == *(undefined4 **)(iVar1 + 0x10)) {
    thunk_FUN_10525750(puVar2,&local_18);
  }
  else {
    *puVar2 = (undefined4)(4);
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 4;
  }
  iVar1 = (int)(*param_1);
  local_18 = (int *)((int *)0x5);
  puVar2 = (undefined4 *)(*(undefined4 **)(iVar1 + 0xc));
  if (puVar2 == *(undefined4 **)(iVar1 + 0x10)) {
    thunk_FUN_10525750(puVar2,&local_18);
  }
  else {
    *puVar2 = (undefined4)(5);
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 4;
  }
  iVar1 = (int)(*param_1);
  local_18 = (int *)((int *)0x6);
  puVar2 = (undefined4 *)(*(undefined4 **)(iVar1 + 0xc));
  if (puVar2 == *(undefined4 **)(iVar1 + 0x10)) {
    thunk_FUN_10525750(puVar2,&local_18);
  }
  else {
    *puVar2 = (undefined4)(6);
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 4;
  }
  iVar1 = (int)(*param_1);
  local_18 = (int *)((int *)0x7);
  puVar2 = (undefined4 *)(*(undefined4 **)(iVar1 + 0xc));
  if (puVar2 != *(undefined4 **)(iVar1 + 0x10)) {
    *puVar2 = (undefined4)(7);
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 4;

    return (int *)(param_1);
  }
  thunk_FUN_10525750(puVar2,&local_18);

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 10535260; body size 173 bytes.
#line 1 "ENTRY_10535260"

undefined4 * __thiscall Recovered_Bulk::FUN_10535260(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  uint uVar1;
  int *piVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  piVar2 = (int *)(operator_new(0x10));
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCMusicServiceLoginInput);

    piVar2[2] = (int)param_1;
    piVar2[3] = 0;
    if (param_1 != (int *)0x0) {
      piVar3 = (int *)((int *)(**(code **)(*param_1 + 0xc))(uVar1));
      piVar2[3] = (int)piVar3;
      (**(code **)(*piVar3 + 4))();
    }
  }

  *param_2 = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10535510; body size 173 bytes.
#line 1 "ENTRY_10535510"

undefined4 * __thiscall Recovered_Bulk::FUN_10535510(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  uint uVar1;
  int *piVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  piVar2 = (int *)(operator_new(0x10));
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCMusicServiceNicknameInput);

    piVar2[2] = (int)param_1;
    piVar2[3] = 0;
    if (param_1 != (int *)0x0) {
      piVar3 = (int *)((int *)(**(code **)(*param_1 + 0xc))(uVar1));
      piVar2[3] = (int)piVar3;
      (**(code **)(*piVar3 + 4))();
    }
  }

  *param_2 = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10535680; body size 173 bytes.
#line 1 "ENTRY_10535680"

undefined4 * __thiscall Recovered_Bulk::FUN_10535680(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  uint uVar1;
  int *piVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  piVar2 = (int *)(operator_new(0x10));
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCMusicServicePasswordInput);

    piVar2[2] = (int)param_1;
    piVar2[3] = 0;
    if (param_1 != (int *)0x0) {
      piVar3 = (int *)((int *)(**(code **)(*param_1 + 0xc))(uVar1));
      piVar2[3] = (int)piVar3;
      (**(code **)(*piVar3 + 4))();
    }
  }

  *param_2 = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 105357f0; body size 140 bytes.
#line 1 "ENTRY_105357f0"

undefined4 __fastcall FUN_105357f0(int *param_1)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);
  if (param_1[0x36] == 0) {
    return (undefined4)(0);
  }

  thunk_FUN_10524f60(param_1 + 0x36);

  if (param_1 == (int *)0x0) {
    uVar2 = (undefined4)(0);
  }
  else {
    uVar2 = (undefined4)((**(code **)(*param_1 + 0x14))(uVar1));
  }

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }

  return (undefined4)(uVar2);

 } catch (...) { }
}


// Reference entry 105359c0; body size 111 bytes.
#line 1 "ENTRY_105359c0"

undefined1 __fastcall FUN_105359c0(int *param_1)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  local_14 = (int *)(param_1);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("RemovePromoted");

  uVar1 = (undefined1)((**(code **)(*param_1 + 0xe0))(&local_14,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10535fd0; body size 65 bytes.
#line 1 "ENTRY_10535fd0"

undefined4 __fastcall FUN_10535fd0(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if ((*(int *)(param_1 + 0x68) != 0) &&
     (uVar1 = (*(int *)(param_1 + 0x68) + *(int *)(param_1 + 100)) - 1,
     piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x5c) +
                                (uVar1 >> 2 & *(int *)(param_1 + 0x60) - 1U) * 4) + (uVar1 & 3) * 4)
     , piVar2 != (int *)0x0)) {
                    
                    
    uVar3 = (undefined4)((**(code **)(*piVar2 + 4))());
    return (undefined4)(uVar3);
  }
  return (undefined4)(0xffffffff);
}


// Reference entry 10536180; body size 87 bytes.
#line 1 "ENTRY_10536180"

int __fastcall FUN_10536180(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x68) != 0) &&
     (uVar1 = (*(int *)(param_1 + 0x68) + *(int *)(param_1 + 100)) - 1,
     piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x5c) +
                                (uVar1 >> 2 & *(int *)(param_1 + 0x60) - 1U) * 4) + (uVar1 & 3) * 4)
     , piVar2 != (int *)0x0)) {
    piVar2 = (int *)((int *)(**(code **)(*piVar2 + 0x60))());
    if (piVar2 != (int *)0x0) {
      iVar3 = (int)((**(code **)(*piVar2 + 0x1c))());
      if (iVar3 == 0) {
        iVar3 = (int)(1);
      }
      return (int)(iVar3);
    }
  }
  return (int)(*(int *)(param_1 + 0x7c));
}


// Reference entry 105362b0; body size 73 bytes.
#line 1 "ENTRY_105362b0"

undefined4 * __thiscall Recovered_Bulk::FUN_105362b0(undefined4 *param_2,int param_3)
{
  int param_1 = (int )this;
  if (param_3 == 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x1d8))(param_2);
    return (undefined4 *)(param_2);
  }
  if (param_3 != 1) {
    *param_2 = (undefined4)(0);
    return (undefined4 *)(param_2);
  }
  (**(code **)(**(int **)(param_1 + 8) + 0x1dc))(param_2);
  return (undefined4 *)(param_2);
}


// Reference entry 10536390; body size 88 bytes.
#line 1 "ENTRY_10536390"

undefined4 * __thiscall Recovered_Bulk::FUN_10536390(undefined4 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  int *piVar2;
  
  if ((*(int *)(param_1 + 0x68) != 0) &&
     (uVar1 = (*(int *)(param_1 + 0x68) + *(int *)(param_1 + 100)) - 1,
     piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x5c) +
                                (uVar1 >> 2 & *(int *)(param_1 + 0x60) - 1U) * 4) + (uVar1 & 3) * 4)
     , piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0x50))(param_2,param_3);
    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);
  return (undefined4 *)(param_2);
}


// Reference entry 10536a30; body size 159 bytes.
#line 1 "ENTRY_10536a30"

char __fastcall FUN_10536a30(int *param_1)

{
 try {
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int *)(param_1);
  puVar3 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x18))(&local_14,DAT_12126b84 ));
  if (((char *)*puVar3 == (char *)0x0) || (*(char *)*puVar3 == '\0')) {
    bVar1 = (bool)(true);
  }
  else {
    bVar1 = (bool)(false);
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (int *)((int *)0x0);

  if (bVar1) {

    return (char)('\0');
  }
  cVar2 = (char)((**(code **)(*param_1 + 0x30))());

  return (char)((cVar2 == '\0') * '\x02' + '\x01');

 } catch (...) { }
}


// Reference entry 10537800; body size 975 bytes.
#line 1 "ENTRY_10537800"

undefined4 __thiscall Recovered_Bulk::FUN_10537800(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  int *piVar4;
  SCStr *pSVar5;
  undefined4 extraout_ECX;
  SCStr **ppSStack_5c;
  SCStr **ppSStack_58;
  undefined1 auStack_54 [4];
  undefined4 uStack_50;
  SCStr **ppSStack_4c;
  SCStr **ppSStack_48;
  uint uStack_44;
  int *local_2c;
  SCStr *local_28;
  SCStr *local_24;
  char *local_20;
  int local_1c;
  char *local_18;
  char local_13;
  char local_12;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uStack_44 = (uint)(DAT_12126b84);

  ppSStack_48 = (SCStr **)(&local_24);
  ppSStack_4c = (SCStr **)((SCStr **)0x10537836);
  local_1c = (int)(param_1);
  piVar4 = (int *)((int *)createSCIWizardComponentBuilder());
  piVar1 = (int *)((int *)*piVar4);

  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    ppSStack_48 = (SCStr **)((SCStr **)0x10537856);
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_24 != (SCStr *)0x0) {
    ppSStack_48 = (SCStr **)((SCStr **)0x1053786f);
    (**(code **)(*(int *)local_24 + 8))();
  }
  local_18 = (char *)((char *)0x0);
  iVar2 = (int)(*(int *)(param_1 + 8));
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  local_11 = (char)(*(char *)(iVar2 + 0xc722));
  if (((local_11 == '\0') || (*(char *)(iVar2 + 0xc6a0) == '\0')) ||
     (local_12 = '\x01', *(char *)(iVar2 + 0xa69f) == '\0')) {
    local_12 = (char)('\0');
  }
  local_2c = (int *)((int *)(iVar2 + 0xe724));
  if ((*(char *)(iVar2 + 0xe724) == '\0') || (local_13 = '\x01', *(char *)(iVar2 + 0xc723) == '\0'))
  {
    local_13 = (char)('\0');
  }
  if (*(int *)(iVar2 + 0xe8) == 0xb) {
    ppSStack_48 = (SCStr **)(&local_28);
    ppSStack_4c = (SCStr **)((SCStr **)0x105378db);
    local_24 = (SCStr *)((SCStr *)thunk_FUN_10536410());
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    if (local_24 != (SCStr *)&local_18) {
      ppSStack_48 = (SCStr **)((SCStr **)0x105378ee);
      ((SCStr *)((SCStr *)&local_18))->int_release();
      local_18 = (char *)(*(char **)local_24);
      ppSStack_48 = (SCStr **)((SCStr **)0x105378fe);
      ((SCStr *)((SCStr *)&local_18))->int_addref();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    ppSStack_48 = (SCStr **)((SCStr **)0x1053790a);
    ((SCStr *)((SCStr *)&local_28))->int_release();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  ppSStack_48 = (SCStr **)((SCStr **)&local_18);
  ppSStack_4c = (SCStr **)(&local_28);

  (**(code **)(*piVar1 + 0x14))();
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  if (local_28 != (SCStr *)0x0) {

    (**(code **)(*(int *)local_28 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;

  uStack_50 = (undefined4)((**(code **)(**(int **)(*(int *)(local_1c + 8) + 0xd8) + 0x28))());
  ppSStack_58 = (SCStr **)((SCStr **)auStack_54);
  ppSStack_5c = (SCStr **)((SCStr **)0x10537950);
  thunk_FUN_10535d90();
  ppSStack_58 = (SCStr **)(&local_28);
  ppSStack_5c = (SCStr **)((SCStr **)0x1053795b);
  (**(code **)(*piVar1 + 0x24))();
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ppSStack_5c = (SCStr **)((SCStr **)0x0);
  if (local_28 != (SCStr *)0x0) {
    ppSStack_5c = (SCStr **)((SCStr **)0x1053796b);
    (**(code **)(*(int *)local_28 + 8))();
    ppSStack_5c = (SCStr **)((SCStr **)extraout_ECX);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  uVar3 = (undefined1)((undefined1)local_8);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_11 == '\0') {
    *(unsigned char *)((char *)&local_8 + 0) = uVar3;
    ((SCStr *)((SCStr *)&ppSStack_5c))->int_allocRep((char *)(iVar2 + 0xe765));
    local_28 = (SCStr *)((SCStr *)thunk_FUN_10535e60());
    *(unsigned char *)((char *)&local_8 + 0) = 0xb;
    if (local_28 != (SCStr *)&local_18) {
      ppSStack_5c = (SCStr **)((SCStr **)0x105379f2);
      ((SCStr *)((SCStr *)&local_18))->int_release();
      local_18 = (char *)(*(char **)local_28);
      ppSStack_5c = (SCStr **)((SCStr **)0x10537a02);
      ((SCStr *)((SCStr *)&local_18))->int_addref();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0xc;
    ppSStack_5c = (SCStr **)((SCStr **)0x10537a0e);
    ((SCStr *)((SCStr *)&local_24))->int_release();
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    if ((local_18 != (char *)0x0) && (*local_18 != '\0')) goto LAB_10537a60;
    ppSStack_5c = (SCStr **)(&local_24);
    local_28 = (SCStr *)((SCStr *)thunk_FUN_10534020());
    *(unsigned char *)((char *)&local_8 + 0) = 0xd;
    if (local_28 != (SCStr *)&local_18) {
      ppSStack_5c = (SCStr **)((SCStr **)0x10537a40);
      ((SCStr *)((SCStr *)&local_18))->int_release();
      local_18 = (char *)(*(char **)local_28);
      ppSStack_5c = (SCStr **)((SCStr **)0x10537a50);
      ((SCStr *)((SCStr *)&local_18))->int_addref();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0xe;
  }
  else {
    ppSStack_5c = (SCStr **)((SCStr **)0x1c);
    ((SCStr *)((SCStr *)&stack0xffffffa0))->int_allocRep((char *)(iVar2 + 0xc6e1));
    local_28 = (SCStr *)((SCStr *)thunk_FUN_10535f10());
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    if (local_28 != (SCStr *)&local_18) {
      ppSStack_5c = (SCStr **)((SCStr **)0x105379a8);
      ((SCStr *)((SCStr *)&local_18))->int_release();
      local_18 = (char *)(*(char **)local_28);
      ppSStack_5c = (SCStr **)((SCStr **)0x105379b8);
      ((SCStr *)((SCStr *)&local_18))->int_addref();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 10;
  }
  ppSStack_5c = (SCStr **)((SCStr **)0x10537a5c);
  ((SCStr *)((SCStr *)&local_24))->int_release();
LAB_10537a60:
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  ppSStack_5c = (SCStr **)((SCStr **)&local_18);
  (**(code **)(*piVar1 + 0x18))();
  *(unsigned char *)((char *)&local_8 + 0) = 0xf;
  if (local_28 != (SCStr *)0x0) {
    (**(code **)(*(int *)local_28 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  uVar3 = (undefined1)((undefined1)local_8);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if ((local_11 == '\0') || (local_12 == '\0')) {
    *(unsigned char *)((char *)&local_8 + 0) = uVar3;
    if (local_13 == '\0') {
      ((SCStr *)((SCStr *)&local_20))->int_allocRep("");
      *(unsigned char *)((char *)&local_8 + 0) = 0x14;
      ((SCStr *)((SCStr *)&local_18))->int_release();
      local_18 = (char *)(local_20);
      ((SCStr *)((SCStr *)&local_18))->int_addref();
      *(unsigned char *)((char *)&local_8 + 0) = 0x15;
      pSVar5 = (SCStr *)((SCStr *)&local_20);
    }
    else {
      ((SCStr *)((SCStr *)&stack0xffffff9c))->int_allocRep((char *)local_2c);
      pSVar5 = (SCStr *)((SCStr *)thunk_FUN_10535e60(&local_2c));
      *(unsigned char *)((char *)&local_8 + 0) = 0x12;
      if (pSVar5 != (SCStr *)&local_18) {
        ((SCStr *)((SCStr *)&local_18))->int_release();
        local_18 = (char *)(*(char **)pSVar5);
        ((SCStr *)((SCStr *)&local_18))->int_addref();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0x13;
      pSVar5 = (SCStr *)((SCStr *)&local_2c);
    }
  }
  else {
    ((SCStr *)((SCStr *)&stack0xffffff9c))->int_allocRep((char *)(iVar2 + 0xc6a0));
    pSVar5 = (SCStr *)((SCStr *)thunk_FUN_10535e60(&local_28));
    *(unsigned char *)((char *)&local_8 + 0) = 0x10;
    if (pSVar5 != (SCStr *)&local_18) {
      ((SCStr *)((SCStr *)&local_18))->int_release();
      local_18 = (char *)(*(char **)pSVar5);
      ((SCStr *)((SCStr *)&local_18))->int_addref();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x11;
    pSVar5 = (SCStr *)((SCStr *)&local_28);
  }
  ((SCStr *)(pSVar5))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if ((local_18 != (char *)0x0) && (*local_18 != '\0')) {
    (**(code **)(*piVar1 + 0x1c))(&local_2c,&local_18);
    *(unsigned char *)((char *)&local_8 + 0) = 0x16;
    if (local_2c != (int *)0x0) {
      (**(code **)(*local_2c + 8))();
    }
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x5c))();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x17)));
  ((SCStr *)((SCStr *)&local_18))->int_release();
  local_18 = (char *)((char *)0x0);

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined4)(param_2);

 } catch (...) { }
}


// Reference entry 10537cd0; body size 774 bytes.
#line 1 "ENTRY_10537cd0"

undefined4 __stdcall FUN_10537cd0(undefined4 param_1)

{
 try {
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  int *local_30;
  int *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  piVar4 = (int *)((int *)createSCIWizardComponentBuilder());
  piVar1 = (int *)((int *)*piVar4);

  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(uVar3));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }

  *(unsigned char *)((char *)&local_8 + 0) = 4;
  pcVar5 = (char *)((char *)thunk_FUN_1109aba0(0x21b4,&DAT_11882ff0));
  ((SCStr *)((SCStr *)&local_1c))->int_allocRep(pcVar5);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(local_1c);
  ((SCStr *)((SCStr *)&local_14))->int_addref();
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x14))(&local_2c,&local_14);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  if (local_2c != (int *)0x0) {
    (**(code **)(*local_2c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  pcVar5 = (char *)((char *)thunk_FUN_1109aba0(0x21b5,&DAT_11882ff0));
  ((SCStr *)((SCStr *)&local_20))->int_allocRep(pcVar5);
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(local_20);
  ((SCStr *)((SCStr *)&local_14))->int_addref();
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)((SCStr *)&local_20))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x18))(&local_2c,&local_14);
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  if (local_2c != (int *)0x0) {
    (**(code **)(*local_2c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  pcVar5 = (char *)((char *)thunk_FUN_1109aba0(0x20b2,&DAT_11882ff0));
  ((SCStr *)((SCStr *)&local_24))->int_allocRep(pcVar5);
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(local_24);
  ((SCStr *)((SCStr *)&local_14))->int_addref();
  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  ((SCStr *)((SCStr *)&local_24))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  ((SCStr *)((SCStr *)&local_18))->int_allocRep("tryAgain");
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  (**(code **)(*piVar1 + 0x20))(&local_2c,&local_14,&local_18);
  *(unsigned char *)((char *)&local_8 + 0) = 0xe;
  if (local_2c != (int *)0x0) {
    (**(code **)(*local_2c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xf;
  ((SCStr *)((SCStr *)&local_18))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  pcVar5 = (char *)((char *)thunk_FUN_1109aba0(0x2443,&DAT_11882ff0));
  ((SCStr *)((SCStr *)&local_28))->int_allocRep(pcVar5);
  *(unsigned char *)((char *)&local_8 + 0) = 0x10;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(local_28);
  ((SCStr *)((SCStr *)&local_14))->int_addref();
  *(unsigned char *)((char *)&local_8 + 0) = 0x11;
  ((SCStr *)((SCStr *)&local_28))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  ((SCStr *)((SCStr *)&local_18))->int_allocRep("complete");
  *(unsigned char *)((char *)&local_8 + 0) = 0x12;
  piVar6 = (int *)((int *)(**(code **)(*piVar1 + 0x20))(&local_30,&local_14,&local_18));
  piVar2 = (int *)((int *)*piVar6);
  *(unsigned char *)((char *)&local_8 + 0) = 0x13;
  *piVar6 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar6 = (int *)((int *)0x0);
  }
  else {
    piVar6 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0x16;
  if (local_30 != (int *)0x0) {
    (**(code **)(*local_30 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0x18;
  ((SCStr *)((SCStr *)&local_18))->int_release();
  local_18 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0x17;
  ((SCStr *)((SCStr *)&local_2c))->int_allocRep("WizardComponentKeySecondaryButton");
  *(unsigned char *)((char *)&local_8 + 0) = 0x19;
  (**(code **)(*piVar2 + 0x40))(&local_2c,1);
  *(unsigned char *)((char *)&local_8 + 0) = 0x1a;
  ((SCStr *)((SCStr *)&local_2c))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 0x17;
  (**(code **)(*piVar1 + 0x5c))(param_1);
  *(unsigned char *)((char *)&local_8 + 0) = 0x1b;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x1c)));
  ((SCStr *)((SCStr *)&local_14))->int_release();


  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10539620; body size 1127 bytes.
#line 1 "ENTRY_10539620"

undefined4 * __thiscall Recovered_Bulk::FUN_10539620(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  char *pcVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *local_40;
  int *local_38;
  int *local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_24 = (int)(param_1);
  pvVar2 = (void *)(operator_new(0x14));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_103be5e0(uVar1));
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }


  if (piVar3 == (int *)0x0) {
    local_40 = (int *)((int *)0x0);
  }
  else {
    local_40 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  if (*(char *)(*(int *)(param_1 + 8) + 0xd3) == '\0') {
    pcVar4 = (char *)((char *)thunk_FUN_1109aba0(0x2189,&DAT_11882ff0));
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep(pcVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 0xe;
    piVar5 = (int *)((int *)thunk_FUN_102e46f0(&local_18,&local_1c));
    piVar8 = (int *)((int *)*piVar5);
    *(unsigned char *)((char *)&local_8 + 0) = 0xf;
    *piVar5 = (int)(0);
    if (piVar8 == (int *)0x0) {
      piVar5 = (int *)((int *)0x0);
    }
    else {
      piVar5 = (int *)((int *)(**(code **)(*piVar8 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x10;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x11;
    ((SCStr *)((SCStr *)&local_1c))->int_release();
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    thunk_FUN_103be9e0(piVar8,0xffffffff);
    pcVar4 = (char *)((char *)thunk_FUN_1109aba0(0x218a,&DAT_11882ff0));
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep(pcVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 0x12;
    puVar7 = (undefined4 *)((undefined4 *)thunk_FUN_102e43c0(&local_18,&local_1c));
    piVar8 = (int *)((int *)*puVar7);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x13)));
    *puVar7 = (undefined4)(0);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))();
    }
    if (piVar8 == (int *)0x0) {
      piVar5 = (int *)((int *)0x0);
    }
    else {
      piVar5 = (int *)((int *)(**(code **)(*piVar8 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x14;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x15;
  }
  else {
    pcVar4 = (char *)((char *)thunk_FUN_1109aba0(0x218b,&DAT_11882ff0));
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep(pcVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    piVar5 = (int *)((int *)thunk_FUN_102e46f0(&local_18,&local_1c));
    piVar8 = (int *)((int *)*piVar5);
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    *piVar5 = (int)(0);
    if (piVar8 == (int *)0x0) {
      piVar5 = (int *)((int *)0x0);
    }
    else {
      piVar5 = (int *)((int *)(**(code **)(*piVar8 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    ((SCStr *)((SCStr *)&local_1c))->int_release();
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    thunk_FUN_103be9e0(piVar8,0xffffffff);
    pcVar4 = (char *)((char *)thunk_FUN_1109aba0(0x218c,&DAT_11882ff0));
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep(pcVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 10;
    piVar6 = (int *)((int *)thunk_FUN_102e43c0(&local_18,&local_1c));
    piVar8 = (int *)((int *)*piVar6);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xb)));
    *piVar6 = (int)(0);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))();
    }
    if (piVar8 == (int *)0x0) {
      piVar5 = (int *)((int *)0x0);
    }
    else {
      piVar5 = (int *)((int *)(**(code **)(*piVar8 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0xc;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  }
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  thunk_FUN_103be9e0(piVar8,0xffffffff);
  local_24 = (int)(*(undefined4 *)(local_24 + 0x1c));
  *(unsigned char *)((char *)&local_8 + 0) = 0x16;
  piVar6 = (int *)((int *)thunk_FUN_102e2b90(&local_28));
  piVar8 = (int *)((int *)*piVar6);
  *(unsigned char *)((char *)&local_8 + 0) = 0x17;
  *piVar6 = (int)(0);
  if (piVar8 == (int *)0x0) {
    local_38 = (int *)((int *)0x0);
  }
  else {
    local_38 = (int *)((int *)(**(code **)(*piVar8 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0x1a;
  if (local_28 != (int *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0x19;
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("WizardComponentKeyType");
  *(unsigned char *)((char *)&local_8 + 0) = 0x1b;
  (**(code **)(*piVar8 + 0x28))(&local_14,0x19);
  *(unsigned char *)((char *)&local_8 + 0) = 0x1c;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 0x19;
  ((SCStr *)((SCStr *)&local_18))->int_allocRep("WizardComponentKeyList");
  *(unsigned char *)((char *)&local_8 + 0) = 0x1d;
  (**(code **)(*piVar8 + 0x58))(&local_18,local_24);
  *(unsigned char *)((char *)&local_8 + 0) = 0x1e;
  ((SCStr *)((SCStr *)&local_18))->int_release();
  local_18 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0x19;
  ((SCStr *)((SCStr *)&local_1c))->int_allocRep("WizardComponentKeyInput");
  *(unsigned char *)((char *)&local_8 + 0) = 0x1f;
  (**(code **)(*piVar8 + 0x28))(&local_1c,0);
  *(unsigned char *)((char *)&local_8 + 0) = 0x20;
  ((SCStr *)((SCStr *)&local_1c))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 0x19;
  (**(code **)(*piVar8 + 4))();

  *(unsigned char *)((char *)&local_8 + 0) = 0x21;
  if (local_38 != (int *)0x0) {
    (**(code **)(*local_38 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0x16;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }
  piVar5 = (int *)((int *)(**(code **)(*piVar8 + 0xc))());
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  thunk_FUN_103be9e0(piVar8,0xffffffff);
  *param_2 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x23)));
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }

  if (local_40 != (int *)0x0) {
    (**(code **)(*local_40 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10539ba0; body size 322 bytes.
#line 1 "ENTRY_10539ba0"

undefined4 __stdcall FUN_10539ba0(undefined4 param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  char *pcVar4;
  int *local_20;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar3 = (int *)((int *)createSCIWizardComponentBuilder());
  piVar1 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(uVar2));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }

  *(unsigned char *)((char *)&local_8 + 0) = 4;
  pcVar4 = (char *)((char *)thunk_FUN_1109aba0(0x183,&DAT_11882ff0));
  ((SCStr *)((SCStr *)&local_18))->int_allocRep(pcVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(local_18);
  ((SCStr *)((SCStr *)&local_14))->int_addref();
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_18))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x14))(&local_1c,&local_14);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x38))(&local_20);
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x5c))(param_1);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(9)));
  ((SCStr *)((SCStr *)&local_14))->int_release();


  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10539d40; body size 400 bytes.
#line 1 "ENTRY_10539d40"

int * __thiscall Recovered_Bulk::FUN_10539d40(int *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  int *local_18;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  piVar2 = (int *)(*(int **)(param_1 + 0x28));
  if (piVar2 != (int *)0x0) {
    *param_2 = (int)((int)piVar2);
    (**(code **)(*piVar2 + 4))(uVar1);

    return (int *)(param_2);
  }
  local_18 = (int *)(operator_new(0x14));

  if (local_18 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)thunk_FUN_103be5e0());
  }

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  piVar5 = (int *)(*(int **)(param_1 + 0x2c));

  local_18 = (int *)((int *)0x0);
  if (piVar5 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    (**(code **)(*piVar5 + 8))();
  }
  *(int **)(param_1 + 0x28) = piVar2;
  if (piVar2 == (int *)0x0) {
    uVar3 = (undefined4)(0);
  }
  else {
    uVar3 = (undefined4)((**(code **)(*piVar2 + 0xc))());
  }
  *(undefined4 *)(param_1 + 0x2c) = uVar3;

  pcVar4 = (char *)((char *)thunk_FUN_1109aba0(0x183,&DAT_11882ff0));
  ((SCStr *)(local_14))->int_allocRep(pcVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  piVar5 = (int *)((int *)thunk_FUN_102e46f0(&local_18,local_14));
  piVar2 = (int *)((int *)*piVar5);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  *piVar5 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    piVar5 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)(local_14))->int_release();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  thunk_FUN_103be9e0(piVar2,0xffffffff);
  piVar2 = (int *)(*(int **)(param_1 + 0x28));
  *param_2 = (int)((int)piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }

  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 10539f40; body size 1223 bytes.
#line 1 "ENTRY_10539f40"

undefined4 * __thiscall Recovered_Bulk::FUN_10539f40(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  char cVar1;
  uint uVar2;
  int *piVar3;
  SCStr *pSVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int *local_3c;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  local_2c = (int *)(param_1);
  local_30 = (int *)(operator_new(0x14));

  if (local_30 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_103be5e0(uVar2));
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }

  local_30 = (int *)((int *)0x0);
  if (piVar3 == (int *)0x0) {
    local_3c = (int *)((int *)0x0);
  }
  else {
    local_3c = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
  }

  *(unsigned char *)((char *)&local_8 + 0) = 6;
  pSVar4 = (SCStr *)((SCStr *)thunk_FUN_10536410(&local_28));
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  if (pSVar4 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined4)(*(undefined4 *)pSVar4);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((SCStr *)((SCStr *)&local_28))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  piVar5 = (int *)((int *)thunk_FUN_102e46f0(&local_28,&local_14));
  local_18 = (int *)((int *)*piVar5);
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  *piVar5 = (int)(0);
  if (local_18 == (int *)0x0) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    piVar5 = (int *)((int *)(**(code **)(*local_18 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  if (local_28 != (int *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  thunk_FUN_103be9e0(local_18,0xffffffff);
  pcVar6 = (char *)((char *)thunk_FUN_1109aba0(0x21a9,&DAT_11882ff0));
  ((SCStr *)((SCStr *)&local_1c))->int_allocRep(pcVar6);
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(local_1c);
  ((SCStr *)((SCStr *)&local_14))->int_addref();
  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  puVar7 = (undefined4 *)((undefined4 *)thunk_FUN_102e43c0(&local_28,&local_14));
  local_18 = (int *)((int *)*puVar7);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xd)));
  *puVar7 = (undefined4)(0);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }
  if (local_18 == (int *)0x0) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    piVar5 = (int *)((int *)(**(code **)(*local_18 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xe;
  if (local_28 != (int *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  thunk_FUN_103be9e0(local_18,0xffffffff);
  pcVar6 = (char *)((char *)thunk_FUN_1109aba0(0x219e,&DAT_11882ff0));
  ((SCStr *)((SCStr *)&local_20))->int_allocRep(pcVar6);
  *(unsigned char *)((char *)&local_8 + 0) = 0xf;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(local_20);
  ((SCStr *)((SCStr *)&local_14))->int_addref();
  *(unsigned char *)((char *)&local_8 + 0) = 0x10;
  ((SCStr *)((SCStr *)&local_20))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  puVar7 = (undefined4 *)((undefined4 *)thunk_FUN_102e4570(&local_28,&local_14,0));
  local_18 = (int *)((int *)*puVar7);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x11)));
  *puVar7 = (undefined4)(0);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }
  if (local_18 == (int *)0x0) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    piVar5 = (int *)((int *)(**(code **)(*local_18 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0x12;
  if (local_28 != (int *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  thunk_FUN_103be9e0(local_18,0xffffffff);
  pcVar6 = (char *)((char *)thunk_FUN_1109aba0(0x219f,&DAT_11882ff0));
  ((SCStr *)((SCStr *)&local_24))->int_allocRep(pcVar6);
  *(unsigned char *)((char *)&local_8 + 0) = 0x13;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(local_24);
  ((SCStr *)((SCStr *)&local_14))->int_addref();
  *(unsigned char *)((char *)&local_8 + 0) = 0x14;
  ((SCStr *)((SCStr *)&local_24))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  puVar7 = (undefined4 *)((undefined4 *)thunk_FUN_102e4570(&local_28,&local_14,1));
  local_18 = (int *)((int *)*puVar7);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x15)));
  *puVar7 = (undefined4)(0);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }
  if (local_18 == (int *)0x0) {
    local_34 = (int *)((int *)0x0);
  }
  else {
    local_34 = (int *)((int *)(**(code **)(*local_18 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0x16;
  if (local_28 != (int *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  thunk_FUN_103be9e0(local_18,0xffffffff);
  if (param_1[3] == 0) {
    ((SCStr *)((SCStr *)&local_28))->int_allocRep("right_button");
    *(unsigned char *)((char *)&local_8 + 0) = 0x17;
    pcVar6 = (char *)((char *)thunk_FUN_1109aba0(0x208d,&DAT_11882ff0));
    ((SCStr *)((SCStr *)&local_18))->int_allocRep(pcVar6);
    *(unsigned char *)((char *)&local_8 + 0) = 0x18;
    piVar8 = (int *)((int *)thunk_FUN_102e23b0(&local_30,&local_18,&local_28));
    piVar5 = (int *)((int *)*piVar8);
    *piVar8 = (int)(0);
    piVar8 = (int *)((int *)param_1[4]);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x19)));
    if (piVar8 != (int *)0x0) {
      param_1[3] = 0;
      param_1[4] = 0;
      (**(code **)(*piVar8 + 8))();
    }
    param_1[3] = (int)piVar5;
    if (piVar5 == (int *)0x0) {
      iVar9 = (int)(0);
    }
    else {
      iVar9 = (int)((**(code **)(*piVar5 + 0xc))());
    }
    param_1[4] = iVar9;
    *(unsigned char *)((char *)&local_8 + 0) = 0x1a;
    if (local_30 != (int *)0x0) {
      (**(code **)(*local_30 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x1b;
    ((SCStr *)((SCStr *)&local_18))->int_release();
    local_18 = (int *)((int *)0x0);
    *(unsigned char *)((char *)&local_8 + 0) = 0x1c;
    ((SCStr *)((SCStr *)&local_28))->int_release();
    *(unsigned char *)((char *)&local_8 + 0) = 6;
  }
  ((SCStr *)((SCStr *)&local_28))->int_allocRep("WizardComponentKeyDisabled");
  *(unsigned char *)((char *)&local_8 + 0) = 0x1d;
  iVar9 = (int)(*(int *)param_1[3]);
  cVar1 = (char)((**(code **)(*local_2c + 0x7c))());
  (**(code **)(iVar9 + 0x40))(&local_28,cVar1 == '\0');
  *(unsigned char *)((char *)&local_8 + 0) = 0x1e;
  ((SCStr *)((SCStr *)&local_28))->int_release();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  thunk_FUN_103be9e0(local_2c[3],0xffffffff);
  *param_2 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0x1f;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x20)));
  if (local_34 != (int *)0x0) {
    (**(code **)(*local_34 + 8))();
  }

  if (local_3c != (int *)0x0) {
    (**(code **)(*local_3c + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 1053b740; body size 340 bytes.
#line 1 "ENTRY_1053b740"

undefined4 __thiscall Recovered_Bulk::FUN_1053b740(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  char *pcVar4;
  int *local_20;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar3 = (int *)((int *)createSCIWizardComponentBuilder());
  piVar1 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(uVar2));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }

  *(unsigned char *)((char *)&local_8 + 0) = 4;
  pcVar4 = (char *)((char *)thunk_FUN_1109aba0(0x21ad,&DAT_11882ff0));
  ((SCStr *)((SCStr *)&local_18))->int_allocRep(pcVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(local_18);
  ((SCStr *)((SCStr *)&local_14))->int_addref();
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_18))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x14))(&local_1c,&local_14);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if ((*(char **)(param_1 + 0x14) != (char *)0x0) && (**(char **)(param_1 + 0x14) != '\0')) {
    (**(code **)(*piVar1 + 0x18))(&local_20,param_1 + 0x14);
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 8))();
    }
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x5c))(param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(9)));
  ((SCStr *)((SCStr *)&local_14))->int_release();


  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined4)(param_2);

 } catch (...) { }
}


// Reference entry 1053bb90; body size 407 bytes.
#line 1 "ENTRY_1053bb90"

undefined4 __thiscall Recovered_Bulk::FUN_1053bb90(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  SCStr *this_;
  int *local_20;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar3 = (int *)((int *)createSCIWizardComponentBuilder());
  piVar1 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(uVar2));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }

  *(unsigned char *)((char *)&local_8 + 0) = 4;
  pcVar4 = (char *)((char *)thunk_FUN_1109aba0(0x21ad,&DAT_11882ff0));
  ((SCStr *)((SCStr *)&local_18))->int_allocRep(pcVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(local_18);
  ((SCStr *)((SCStr *)&local_14))->int_addref();
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_18))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x14))(&local_1c,&local_14);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  puVar5 = (undefined4 *)((undefined4 *)(**(code **)(**(int **)(param_1 + 8) + 0x98))(&local_1c));
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  puVar6 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*puVar5 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)((undefined1 *)*puVar5);
  }
  thunk_FUN_1109aba0(0x21a4,&DAT_1188465c,puVar6);
  ((SCStr *)(this_))->format((char *)&local_14);
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x18))(&local_20,&local_14);
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x5c))(param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xb)));
  ((SCStr *)((SCStr *)&local_14))->int_release();


  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined4)(param_2);

 } catch (...) { }
}


// Reference entry 1053c4f0; body size 847 bytes.
#line 1 "ENTRY_1053c4f0"

undefined4 __stdcall FUN_1053c4f0(undefined4 param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  char *pcVar4;
  SCLibrary *pSVar5;
  undefined1 *puVar6;
  SCStr *this_;
  int *local_34;
  int *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar3 = (int *)((int *)createSCIWizardComponentBuilder());
  piVar1 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(uVar2));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_30 != (int *)0x0) {
    (**(code **)(*local_30 + 8))();
  }

  *(unsigned char *)((char *)&local_8 + 0) = 4;
  pcVar4 = (char *)((char *)thunk_FUN_1109aba0(0x218d,&DAT_11882ff0));
  ((SCStr *)((SCStr *)&local_1c))->int_allocRep(pcVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(local_1c);
  ((SCStr *)((SCStr *)&local_14))->int_addref();
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x14))(&local_30,&local_14);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  if (local_30 != (int *)0x0) {
    (**(code **)(*local_30 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  pcVar4 = (char *)((char *)thunk_FUN_1109aba0(0x218e,&DAT_11882ff0));
  ((SCStr *)((SCStr *)&local_20))->int_allocRep(pcVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(local_20);
  ((SCStr *)((SCStr *)&local_14))->int_addref();
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)((SCStr *)&local_20))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x18))(&local_30,&local_14);
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  if (local_30 != (int *)0x0) {
    (**(code **)(*local_30 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  pcVar4 = (char *)((char *)thunk_FUN_1109aba0(0x218f,&DAT_11882ff0));
  ((SCStr *)((SCStr *)&local_24))->int_allocRep(pcVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(local_24);
  ((SCStr *)((SCStr *)&local_14))->int_addref();
  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  ((SCStr *)((SCStr *)&local_24))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x18))(&local_30,&local_14);
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  if (local_30 != (int *)0x0) {
    (**(code **)(*local_30 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  pSVar5 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  (**(code **)(*(int *)pSVar5 + 0xa8))(&local_18,9);
  *(unsigned char *)((char *)&local_8 + 0) = 0xe;
  puVar6 = (undefined1 *)(&DAT_1186d2ee);
  if (local_18 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)(local_18);
  }
  thunk_FUN_1109aba0(0x2190,&DAT_1188465c,puVar6);
  ((SCStr *)(this_))->format((char *)&local_14);
  (**(code **)(*piVar1 + 0x18))(&local_30,&local_14);
  *(unsigned char *)((char *)&local_8 + 0) = 0xf;
  if (local_30 != (int *)0x0) {
    (**(code **)(*local_30 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xe;
  pcVar4 = (char *)((char *)thunk_FUN_1109aba0(0x2192,&DAT_11882ff0));
  ((SCStr *)((SCStr *)&local_28))->int_allocRep(pcVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 0x10;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(local_28);
  ((SCStr *)((SCStr *)&local_14))->int_addref();
  *(unsigned char *)((char *)&local_8 + 0) = 0x11;
  ((SCStr *)((SCStr *)&local_28))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 0xe;
  (**(code **)(*piVar1 + 0x44))(&local_30,&local_14,0);
  *(unsigned char *)((char *)&local_8 + 0) = 0x12;
  if (local_30 != (int *)0x0) {
    (**(code **)(*local_30 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xe;
  pSVar5 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  if (*(int *)(*(int *)(pSVar5 + 0x4c) + 0x6c) == 3) {
    pcVar4 = (char *)((char *)thunk_FUN_1109aba0(0x2191,&DAT_11882ff0));
    ((SCStr *)((SCStr *)&local_2c))->int_allocRep(pcVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 0x13;
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined4)(local_2c);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
    *(unsigned char *)((char *)&local_8 + 0) = 0x14;
    ((SCStr *)((SCStr *)&local_2c))->int_release();
    *(unsigned char *)((char *)&local_8 + 0) = 0xe;
    (**(code **)(*piVar1 + 0x18))(&local_34,&local_14);
    *(unsigned char *)((char *)&local_8 + 0) = 0x15;
    if (local_34 != (int *)0x0) {
      (**(code **)(*local_34 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0xe;
  }
  (**(code **)(*piVar1 + 0x5c))(param_1);
  *(unsigned char *)((char *)&local_8 + 0) = 0x16;
  ((SCStr *)((SCStr *)&local_18))->int_release();
  local_18 = (undefined1 *)((undefined1 *)0x0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x17)));
  ((SCStr *)((SCStr *)&local_14))->int_release();


  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 1053c920; body size 441 bytes.
#line 1 "ENTRY_1053c920"

undefined4 __thiscall Recovered_Bulk::FUN_1053c920(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *local_1c;
  SCStr *local_18;
  SCStr *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar3 = (int *)((int *)createSCIWizardComponentBuilder());
  piVar1 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(uVar2));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (SCStr *)0x0) {
    (**(code **)(*(int *)local_18 + 8))();
  }
  local_14 = (SCStr *)((SCStr *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  local_18 = (SCStr *)((SCStr *)thunk_FUN_10536410(&local_1c));
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  if (local_18 != (SCStr *)&local_14) {
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (SCStr *)(*(SCStr **)local_18);
    ((SCStr *)((SCStr *)&local_14))->int_addref();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x14))(&local_1c,&local_14);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (*(int *)(*(int *)(param_1 + 8) + 0xec) == 5) {
    uVar5 = (undefined4)(0x2077);
  }
  else {
    uVar5 = (undefined4)(0x206e);
  }
  pcVar4 = (char *)((char *)thunk_FUN_1109aba0(uVar5,&DAT_11882ff0));
  ((SCStr *)((SCStr *)&local_18))->int_allocRep(pcVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (SCStr *)(local_18);
  ((SCStr *)((SCStr *)&local_14))->int_addref();
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)((SCStr *)&local_18))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x18))(&local_1c,&local_14);
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x38))(&local_1c);
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x5c))(param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xc)));
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (SCStr *)((SCStr *)0x0);

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined4)(param_2);

 } catch (...) { }
}


// Reference entry 1053cb50; body size 774 bytes.
#line 1 "ENTRY_1053cb50"

undefined4 __stdcall FUN_1053cb50(undefined4 param_1)

{
 try {
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  int *local_30;
  int *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  piVar4 = (int *)((int *)createSCIWizardComponentBuilder());
  piVar1 = (int *)((int *)*piVar4);

  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(uVar3));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }

  *(unsigned char *)((char *)&local_8 + 0) = 4;
  pcVar5 = (char *)((char *)thunk_FUN_1109aba0(0x21b4,&DAT_11882ff0));
  ((SCStr *)((SCStr *)&local_1c))->int_allocRep(pcVar5);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(local_1c);
  ((SCStr *)((SCStr *)&local_14))->int_addref();
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x14))(&local_2c,&local_14);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  if (local_2c != (int *)0x0) {
    (**(code **)(*local_2c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  pcVar5 = (char *)((char *)thunk_FUN_1109aba0(0x21b5,&DAT_11882ff0));
  ((SCStr *)((SCStr *)&local_20))->int_allocRep(pcVar5);
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(local_20);
  ((SCStr *)((SCStr *)&local_14))->int_addref();
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)((SCStr *)&local_20))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x18))(&local_2c,&local_14);
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  if (local_2c != (int *)0x0) {
    (**(code **)(*local_2c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  pcVar5 = (char *)((char *)thunk_FUN_1109aba0(0x20b2,&DAT_11882ff0));
  ((SCStr *)((SCStr *)&local_24))->int_allocRep(pcVar5);
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(local_24);
  ((SCStr *)((SCStr *)&local_14))->int_addref();
  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  ((SCStr *)((SCStr *)&local_24))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  ((SCStr *)((SCStr *)&local_18))->int_allocRep("tryAgain");
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  (**(code **)(*piVar1 + 0x20))(&local_2c,&local_14,&local_18);
  *(unsigned char *)((char *)&local_8 + 0) = 0xe;
  if (local_2c != (int *)0x0) {
    (**(code **)(*local_2c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xf;
  ((SCStr *)((SCStr *)&local_18))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  pcVar5 = (char *)((char *)thunk_FUN_1109aba0(0x2443,&DAT_11882ff0));
  ((SCStr *)((SCStr *)&local_28))->int_allocRep(pcVar5);
  *(unsigned char *)((char *)&local_8 + 0) = 0x10;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(local_28);
  ((SCStr *)((SCStr *)&local_14))->int_addref();
  *(unsigned char *)((char *)&local_8 + 0) = 0x11;
  ((SCStr *)((SCStr *)&local_28))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  ((SCStr *)((SCStr *)&local_18))->int_allocRep("complete");
  *(unsigned char *)((char *)&local_8 + 0) = 0x12;
  piVar6 = (int *)((int *)(**(code **)(*piVar1 + 0x20))(&local_30,&local_14,&local_18));
  piVar2 = (int *)((int *)*piVar6);
  *(unsigned char *)((char *)&local_8 + 0) = 0x13;
  *piVar6 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar6 = (int *)((int *)0x0);
  }
  else {
    piVar6 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0x16;
  if (local_30 != (int *)0x0) {
    (**(code **)(*local_30 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0x18;
  ((SCStr *)((SCStr *)&local_18))->int_release();
  local_18 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0x17;
  ((SCStr *)((SCStr *)&local_2c))->int_allocRep("WizardComponentKeySecondaryButton");
  *(unsigned char *)((char *)&local_8 + 0) = 0x19;
  (**(code **)(*piVar2 + 0x40))(&local_2c,1);
  *(unsigned char *)((char *)&local_8 + 0) = 0x1a;
  ((SCStr *)((SCStr *)&local_2c))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 0x17;
  (**(code **)(*piVar1 + 0x5c))(param_1);
  *(unsigned char *)((char *)&local_8 + 0) = 0x1b;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x1c)));
  ((SCStr *)((SCStr *)&local_14))->int_release();


  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 1053cf30; body size 84 bytes.
#line 1 "ENTRY_1053cf30"

undefined4 * __thiscall Recovered_Bulk::FUN_1053cf30(undefined4 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  int *piVar2;
  
  if ((*(int *)(param_1 + 0x68) != 0) &&
     (uVar1 = (*(int *)(param_1 + 0x68) + *(int *)(param_1 + 100)) - 1,
     piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x5c) +
                                (uVar1 >> 2 & *(int *)(param_1 + 0x60) - 1U) * 4) + (uVar1 & 3) * 4)
     , piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0x4c))(param_2);
    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);
  return (undefined4 *)(param_2);
}


// Reference entry 1053cfa0; body size 331 bytes.
#line 1 "ENTRY_1053cfa0"

undefined4 * __thiscall Recovered_Bulk::FUN_1053cfa0(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  piVar3 = (int *)((int *)0x0);
  piVar4 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  if (param_1[0x1a] == 0) {
    *param_2 = (undefined4)(0);
  }
  else {
    local_14 = (int *)((int *)(param_1[0x1a] + param_1[0x19]));
    piVar1 = (int *)(*(int **)(*(int *)(param_1[0x17] + (param_1[0x18] - 1U & (int)local_14 - 1U >> 2) * 4)
                      + ((int)local_14 - 1U & 3) * 4));
    if (piVar1 != (int *)0x0) {
      piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0x1c))(&local_14,DAT_12126b84 ));
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
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0;
      if (piVar3 == (int *)0x0) {
        puVar2 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x140))(&local_14));
        piVar3 = (int *)((int *)*puVar2);
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
        *puVar2 = (undefined4)(0);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 8))();
        }
        if (piVar3 == (int *)0x0) {
          piVar4 = (int *)((int *)0x0);
        }
        else {
          piVar4 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
        }
        *(unsigned char *)((char *)&local_8 + 0) = 4;
        if (local_14 != (int *)0x0) {
          (**(code **)(*local_14 + 8))();
        }
      }
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0;
    *param_2 = (undefined4)(piVar3);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 1053d6f0; body size 68 bytes.
#line 1 "ENTRY_1053d6f0"

uint FUN_1053d6f0(void)

{
 try {
  uint extraout_EAX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  ((SCStr *)((SCStr *)&stack0x00000004))->int_release();

  return (uint)(extraout_EAX & 0xffffff00);

 } catch (...) { }
}


// Reference entry 1053d770; body size 87 bytes.
#line 1 "ENTRY_1053d770"

undefined4 __fastcall FUN_1053d770(int param_1)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    uVar1 = (uint)((*(int *)(param_1 + 0x68) + *(int *)(param_1 + 100)) - 1);
    piVar3 = (int *)(*(int **)(*(int *)(*(int *)(param_1 + 0x5c) +
                               (uVar1 >> 2 & *(int *)(param_1 + 0x60) - 1U) * 4) + (uVar1 & 3) * 4));
  }
  if (*(int *)(*(int *)(param_1 + 0x6c) + 8) != *(int *)(*(int *)(param_1 + 0x6c) + 0xc)) {
    return (undefined4)(1);
  }
  if ((piVar3 != (int *)0x0) && (cVar2 = (**(code **)(*piVar3 + 0x5c))(), cVar2 != '\0')) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 1053d830; body size 161 bytes.
#line 1 "ENTRY_1053d830"

void __fastcall FUN_1053d830(int param_1)

{
  *(undefined1 *)(param_1 + 0xd09) = 0;
  *(undefined1 *)(param_1 + 0x2d4b) = 0;
  *(undefined1 *)(param_1 + 0x4d8d) = 0;
  *(undefined1 *)(param_1 + 0x4d4c) = 0;
  *(undefined1 *)(param_1 + 0x2d0a) = 0;
  *(undefined2 *)(param_1 + 0x59d2) = 0;
  *(undefined1 *)(param_1 + 0x4dce) = 0;
  *(undefined1 *)(param_1 + 0x51cf) = 0;
  *(undefined1 *)(param_1 + 0x55d0) = 0;
  *(undefined1 *)(param_1 + 0x59d1) = 0;
  *(undefined1 *)(param_1 + 0x59d4) = 0;
  *(undefined1 *)(param_1 + 0x7a16) = 0;
  *(undefined1 *)(param_1 + 0x9a58) = 0;
  *(undefined1 *)(param_1 + 0x9a17) = 0;
  *(undefined1 *)(param_1 + 0x79d5) = 0;
  *(undefined2 *)(param_1 + 0xa69e) = 0;
  *(undefined1 *)(param_1 + 0xc6a0) = 0;
  *(undefined1 *)(param_1 + 0xc6e1) = 0;
  *(undefined2 *)(param_1 + 0xc722) = 0;
  *(undefined1 *)(param_1 + 0xe724) = 0;
  *(undefined1 *)(param_1 + 0xe765) = 0;
  *(undefined1 *)(param_1 + 0xe7a6) = 0;
  return;
}


// Reference entry 1053d930; body size 99 bytes.
#line 1 "ENTRY_1053d930"

void __fastcall FUN_1053d930(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    thunk_FUN_1059d940(*(int *)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  piVar2 = (int *)(*(int **)(param_1 + 0x44));
  if (piVar2 != (int *)0x0) {
    if (*(int *)(param_1 + 0x48) != 0) {
      (**(code **)(*piVar2 + 0x10))();
      piVar2 = (int *)(*(int **)(param_1 + 0x44));
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = (int)(thunk_FUN_1123fcd0(piVar2 + 1));
      if ((iVar1 == 0) && (piVar2 != (int *)0x0)) {
        (**(code **)*piVar2)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  return;
}


// Reference entry 1053d9b0; body size 114 bytes.
#line 1 "ENTRY_1053d9b0"

void __fastcall FUN_1053d9b0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    thunk_FUN_1059d940(*(int *)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x30) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x30))(1);
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
    iVar1 = (int)(*(int *)(param_1 + 8));
    *(undefined1 *)(iVar1 + 0xac) = 0;
    if (*(char *)(iVar1 + 0xad) != '\0') {
      *(undefined1 *)(iVar1 + 0xad) = 0;
      thunk_FUN_112af4e0("Wizard",5,
                         "Transition was previously requested, busy over.  Transitioning to next state."
                        );
      FUN_1006aac8();
      return;
    }
  }
  return;
}


// Reference entry 1053e390; body size 64 bytes.
#line 1 "ENTRY_1053e390"

void __thiscall Recovered_Bulk::FUN_1053e390(char param_2)
{
  int param_1 = (int )this;
  *(undefined1 *)(param_1 + 0xac) = 0;
  if ((*(char *)(param_1 + 0xad) != '\0') && (param_2 == '\0')) {
    *(undefined1 *)(param_1 + 0xad) = 0;
    thunk_FUN_112af4e0("Wizard",5,
                       "Transition was previously requested, busy over.  Transitioning to next state."
                      );
    FUN_1006aac8();
  }
  return;
}


// Reference entry 1053e430; body size 64 bytes.
#line 1 "ENTRY_1053e430"

undefined4 __fastcall FUN_1053e430(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if ((*(int *)(param_1 + 0x68) != 0) &&
     (uVar1 = (*(int *)(param_1 + 0x68) + *(int *)(param_1 + 100)) - 1,
     piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x5c) +
                                (uVar1 >> 2 & *(int *)(param_1 + 0x60) - 1U) * 4) + (uVar1 & 3) * 4)
     , piVar2 != (int *)0x0)) {
                    
                    
    uVar3 = (undefined4)((**(code **)(*piVar2 + 0x60))());
    return (undefined4)(uVar3);
  }
  return (undefined4)(0);
}


// Reference entry 1053e4a0; body size 236 bytes.
#line 1 "ENTRY_1053e4a0"

void __fastcall FUN_1053e4a0(int *param_1)

{
 try {
  uint uVar1;
  SCLibrary *pSVar2;
  undefined4 uVar3;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  if (pSVar2 != (SCLibrary *)0x0) {
    uVar3 = (undefined4)((**(code **)(*(int *)pSVar2 + 0xd0))(&local_14,uVar1));

    thunk_FUN_10524d20(uVar3);
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 0x14))();
    }

    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }

  }
  (**(code **)(*param_1 + 0x110))();
  param_1[0x34] = 0x10000;
  param_1[0x3b] = 5;
  *(undefined2 *)(param_1 + 0x39ed) = 0;
  thunk_FUN_1053d830();
  *(undefined1 *)(param_1 + 0x41) = 0;
  *(undefined1 *)((int)param_1 + 0x505) = 0;
  *(undefined1 *)((int)param_1 + 0x906) = 0;
  *(undefined2 *)((int)param_1 + 0xd07) = 1;
  *(undefined1 *)((int)param_1 + 0xe7b6) = 0;

  return;

 } catch (...) { }
}


// Reference entry 1053f650; body size 142 bytes.
#line 1 "ENTRY_1053f650"

void FUN_1053f650(void)

{
 try {
  uint uVar1;
  SCLibrary *pSVar2;
  undefined4 uVar3;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  if (pSVar2 != (SCLibrary *)0x0) {
    uVar3 = (undefined4)((**(code **)(*(int *)pSVar2 + 0xd0))(&local_14,uVar1));

    thunk_FUN_10524d20(uVar3);
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 0x18))();
    }

    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 1053f710; body size 87 bytes.
#line 1 "ENTRY_1053f710"

void __fastcall FUN_1053f710(int param_1)

{
  uint uVar1;
  int *piVar2;
  
  if ((*(int *)(param_1 + 0x68) != 0) &&
     (uVar1 = (*(int *)(param_1 + 0x68) + *(int *)(param_1 + 100)) - 1,
     piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x5c) +
                                (uVar1 >> 2 & *(int *)(param_1 + 0x60) - 1U) * 4) + (uVar1 & 3) * 4)
     , piVar2 != (int *)0x0)) {
    piVar2 = (int *)((int *)(**(code **)(*piVar2 + 0x60))());
    if (piVar2 != (int *)0x0) {
                    
                    
      (**(code **)(*piVar2 + 0xa8))();
      return;
    }
  }
  thunk_FUN_10dd4500(0);
  return;
}


// Reference entry 1053f780; body size 186 bytes.
#line 1 "ENTRY_1053f780"

void __fastcall FUN_1053f780(int param_1)

{
 try {
  uint uVar1;
  SCLibrary *this_;
  undefined4 *puVar2;
  undefined4 uVar3;
  int **ppiVar4;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  if (*(char *)(param_1 + 0x18) != '\0') {
    ppiVar4 = (int **)(&local_18);
    this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    puVar2 = (undefined4 *)((undefined4 *)((SCLibrary *)(this_))->getSCHousehold());

    uVar3 = (undefined4)((**(code **)(*(int *)*puVar2 + 0x1cc))(&local_14,ppiVar4,uVar1));
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    thunk_FUN_102c3040(uVar3);
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 0x18))(*(undefined4 *)(param_1 + 0x10));
    }
    *(undefined1 *)(param_1 + 0x18) = 0;

    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10540e80; body size 79 bytes.
#line 1 "ENTRY_10540e80"

uint __fastcall FUN_10540e80(int param_1)

{
  uint uVar1;
  uint in_EAX;
  
  if ((((*(int *)(param_1 + 0x68) != 0) &&
       (uVar1 = (*(int *)(param_1 + 0x68) + *(int *)(param_1 + 100)) - 1,
       in_EAX = *(uint *)(*(int *)(param_1 + 0x5c) +
                         (uVar1 >> 2 & *(int *)(param_1 + 0x60) - 1U) * 4),
       *(int *)(in_EAX + (uVar1 & 3) * 4) != 0)) && (*(char *)(param_1 + 0xad) != '\0')) &&
     (*(char *)(param_1 + 0xac) != '\0')) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10540ef0; body size 181 bytes.
#line 1 "ENTRY_10540ef0"

undefined4 __fastcall FUN_10540ef0(int *param_1)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  
  cVar2 = (char)((**(code **)(*param_1 + 0xf8))());
  if (cVar2 == '\0') {
    cVar2 = (char)((**(code **)(*param_1 + 0x58))());
    if (cVar2 != '\0') {
      cVar2 = (char)((**(code **)(*param_1 + 0x6c))());
      if (cVar2 != '\0') {
        cVar2 = (char)((**(code **)(*param_1 + 0x44))());
        if (cVar2 != '\0') {
          cVar2 = (char)((**(code **)(*param_1 + 0x48))());
          if (cVar2 == '\0') goto LAB_10540f3f;
        }
        return (undefined4)(0);
      }
    }
  }
LAB_10540f3f:
  if (param_1[0x1a] == 0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    uVar1 = (uint)((param_1[0x1a] + param_1[0x19]) - 1);
    piVar3 = (int *)(*(int **)(*(int *)(param_1[0x17] + (uVar1 >> 2 & param_1[0x18] - 1U) * 4) +
                      (uVar1 & 3) * 4));
  }
  cVar2 = (char)((**(code **)(*param_1 + 0x28))());
  if (cVar2 != '\0') {
    cVar2 = (char)((**(code **)(*param_1 + 0x2c))());
    if ((cVar2 == '\0') && (piVar3 != (int *)0x0)) {
      cVar2 = (char)((**(code **)(*piVar3 + 0x34))());
      if (cVar2 != '\0') {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 10541100; body size 144 bytes.
#line 1 "ENTRY_10541100"

undefined1 __fastcall FUN_10541100(int *param_1)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *local_18;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)(local_14))->int_allocRep("IsSubWizard");

  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0xf0))(&local_18,uVar2));
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  uVar1 = (undefined1)((**(code **)(*(int *)*puVar3 + 0x3c))(local_14));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }

  ((SCStr *)(local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 105411c0; body size 86 bytes.
#line 1 "ENTRY_105411c0"

undefined4 __fastcall FUN_105411c0(int *param_1)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  
  if (param_1[0x1a] != 0) {
    uVar1 = (uint)((param_1[0x1a] + param_1[0x19]) - 1);
    piVar2 = (int *)(*(int **)(*(int *)(param_1[0x17] + (uVar1 >> 2 & param_1[0x18] - 1U) * 4) +
                      (uVar1 & 3) * 4));
    if (piVar2 != (int *)0x0) {
      cVar3 = (char)((**(code **)(*piVar2 + 0x20))());
      if (cVar3 != '\0') {
        cVar3 = (char)((**(code **)(*param_1 + 0x5c))());
        if (cVar3 == '\0') {
          return (undefined4)(1);
        }
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 10541350; body size 289 bytes.
#line 1 "ENTRY_10541350"

bool __fastcall FUN_10541350(int param_1)

{
 try {
  uint uVar1;
  SCLibrary *pSVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  bool bVar6;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);
  if (*(int *)(*(int *)(param_1 + 8) + 0xe8) != 0xb) {
    return (bool)(true);
  }

  ((SCStr *)((SCStr *)&local_14))->int_allocRep((char *)(*(int *)(param_1 + 8) + 0xd09));

  if ((local_14 != (char *)0x0) && (*local_14 != '\0')) {
    pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    uVar3 = (undefined4)((**(code **)(*(int *)pSVar2 + 0x3c))(&local_18,uVar1));
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    thunk_FUN_102636f0(uVar3);
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (local_24 != (int *)0x0) {
      puVar4 = (undefined4 *)((undefined4 *)(**(code **)(*local_24 + 0x18))(&local_1c));
      *(unsigned char *)((char *)&local_8 + 0) = 5;
      iVar5 = (int)((**(code **)(*(int *)*puVar4 + 0x14))(&local_14));
      *(unsigned char *)((char *)&local_8 + 0) = 6;
      if (local_1c != (int *)0x0) {
        (**(code **)(*local_1c + 8))();
      }
      bVar6 = (bool)(iVar5 != 1);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));
      if (local_20 != (int *)0x0) {
        (**(code **)(*local_20 + 8))();
      }
      goto LAB_1054143c;
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(9)));
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 8))();
    }
  }
  bVar6 = (bool)(false);
LAB_1054143c:

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (bool)(bVar6);

 } catch (...) { }
}


// Reference entry 105415b0; body size 73 bytes.
#line 1 "ENTRY_105415b0"

undefined4 __fastcall FUN_105415b0(int param_1)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  
  if (*(int *)(param_1 + 0x68) != 0) {
    uVar1 = (uint)((*(int *)(param_1 + 0x68) + *(int *)(param_1 + 100)) - 1);
    piVar2 = (int *)(*(int **)(*(int *)(*(int *)(param_1 + 0x5c) +
                               (uVar1 >> 2 & *(int *)(param_1 + 0x60) - 1U) * 4) + (uVar1 & 3) * 4));
    if (piVar2 != (int *)0x0) {
      cVar3 = (char)((**(code **)(*piVar2 + 0x74))());
      if (cVar3 != '\0') {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 10541610; body size 98 bytes.
#line 1 "ENTRY_10541610"

undefined4 __fastcall FUN_10541610(int param_1)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  
  if (*(int *)(param_1 + 0x68) != 0) {
    uVar1 = (uint)((*(int *)(param_1 + 0x68) + *(int *)(param_1 + 100)) - 1);
    piVar2 = (int *)(*(int **)(*(int *)(*(int *)(param_1 + 0x5c) +
                               (uVar1 >> 2 & *(int *)(param_1 + 0x60) - 1U) * 4) + (uVar1 & 3) * 4));
    if ((((piVar2 != (int *)0x0) &&
         (*(int *)(*(int *)(param_1 + 0x6c) + 8) == *(int *)(*(int *)(param_1 + 0x6c) + 0xc))) &&
        (*(char *)(param_1 + 0x78) == '\0')) && (*(int *)(param_1 + 0x74) == 0)) {
      cVar3 = (char)((**(code **)(*piVar2 + 0x24))());
      if (cVar3 != '\0') {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 10541710; body size 169 bytes.
#line 1 "ENTRY_10541710"

bool __fastcall FUN_10541710(int param_1)

{
 try {
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("AccountUDN");

  (**(code **)(**(int **)(param_1 + 8) + 0xd0))(&local_18,&local_14,uVar1);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if (local_18 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)(local_18);
  }
  thunk_FUN_110828b0(puVar3);
  iVar2 = (int)(thunk_FUN_11081710(puVar3));

  ((SCStr *)((SCStr *)&local_18))->int_release();

  return (bool)(iVar2 < 2);

 } catch (...) { }
}


// Reference entry 10541810; body size 108 bytes.
#line 1 "ENTRY_10541810"

undefined4 __fastcall FUN_10541810(int *param_1)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  
  if (param_1[0x1a] == 0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    uVar1 = (uint)((param_1[0x1a] + param_1[0x19]) - 1);
    piVar3 = (int *)(*(int **)(*(int *)(param_1[0x17] + (uVar1 >> 2 & param_1[0x18] - 1U) * 4) +
                      (uVar1 & 3) * 4));
  }
  cVar2 = (char)((**(code **)(*param_1 + 0x28))());
  if (cVar2 != '\0') {
    cVar2 = (char)((**(code **)(*param_1 + 0x2c))());
    if (cVar2 != '\0') {
      return (undefined4)(1);
    }
    if ((piVar3 != (int *)0x0) && (cVar2 = (**(code **)(*piVar3 + 0x38))(), cVar2 != '\0')) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 105419a0; body size 103 bytes.
#line 1 "ENTRY_105419a0"

undefined1 __fastcall FUN_105419a0(int *param_1)

{
 try {
  undefined1 uVar1;
  undefined4 uVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int *)(param_1);
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x18))(&local_14,DAT_12126b84 ));

  uVar1 = (undefined1)((**(code **)(*param_1 + 0x2c))(uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10541ae0; body size 103 bytes.
#line 1 "ENTRY_10541ae0"

undefined1 __fastcall FUN_10541ae0(int *param_1)

{
 try {
  undefined1 uVar1;
  undefined4 uVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int *)(param_1);
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x18))(&local_14,DAT_12126b84 ));

  uVar1 = (undefined1)((**(code **)(*param_1 + 0x2c))(uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10541ba0; body size 103 bytes.
#line 1 "ENTRY_10541ba0"

undefined1 __fastcall FUN_10541ba0(int *param_1)

{
 try {
  undefined1 uVar1;
  undefined4 uVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int *)(param_1);
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x18))(&local_14,DAT_12126b84 ));

  uVar1 = (undefined1)((**(code **)(*param_1 + 0x2c))(uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10541d70; body size 216 bytes.
#line 1 "ENTRY_10541d70"

void __thiscall Recovered_Bulk::FUN_10541d70(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  if ((short)param_3 != 0) {
    ((SCStr *)((SCStr *)&param_3))->int_allocRep("MSIServiceInfoDownloadErr");

    (**(code **)(**(int **)(param_1 + -8) + 0xe4))(&param_3,1);

    ((SCStr *)((SCStr *)&param_3))->int_release();
    param_3 = (undefined4)(0);
  }

  if ((*(char *)(param_1 + 0xb) != '\0') && (*(char *)(param_1 + 9) != '\0')) {
    thunk_FUN_1053ee90(uVar2);
  }
  *(undefined2 *)(param_1 + 9) = 0;
  if (*(int *)(param_1 + 0x16c) == 0) {
    iVar1 = (int)(*(int *)(param_1 + -8));
    *(undefined1 *)(iVar1 + 0xac) = 0;
    if (*(char *)(iVar1 + 0xad) != '\0') {
      *(undefined1 *)(iVar1 + 0xad) = 0;
      thunk_FUN_112af4e0("Wizard",5,
                         "Transition was previously requested, busy over.  Transitioning to next state."
                        );
      FUN_1006aac8();
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10541eb0; body size 931 bytes.
#line 1 "ENTRY_10541eb0"

undefined1 __fastcall FUN_10541eb0(int *param_1)

{
 try {
  int *piVar1;
  char cVar2;
  bool bVar3;
  SCLibrary *this_;
  int *piVar4;
  int *piVar5;
  SCStr *this_00;
  int **extraout_ECX;
  int **extraout_ECX_00;
  int **extraout_ECX_01;
  undefined1 uVar6;
  int **ppiStack_88;
  int **ppiStack_84;
  int **ppiStack_80;
  SCStr *pSStack_7c;
  int *local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  int *local_40;
  int *local_38;
  int *local_28;
  int *local_24;
  SCStr local_20 [4];
  int *local_1c;
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  pSStack_7c = (SCStr *)((SCStr *)0x10541ee7);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("AccountUDN");
  pSStack_7c = (SCStr *)(local_20);

  ppiStack_80 = (int **)((int **)0x10541f00);
  (**(code **)(*param_1 + 0xd0))();
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ppiStack_80 = (int **)((int **)0x10541f0c);
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ppiStack_80 = (int **)((int **)0x10541f1c);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  ppiStack_80 = (int **)(&local_1c);
  ppiStack_84 = (int **)((int **)0x10541f27);
  piVar4 = (int *)((int *)((SCLibrary *)(this_))->getSCHousehold());
  piVar1 = (int *)((int *)*piVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    local_60 = (int *)((int *)0x0);
  }
  else {
    ppiStack_84 = (int **)((int **)0x10541f41);
    local_60 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  if (local_1c != (int *)0x0) {
    ppiStack_84 = (int **)((int **)0x10541f5d);
    (**(code **)(*local_1c + 8))();
  }
  ppiStack_84 = (int **)(&local_18);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ppiStack_88 = (int **)((int **)0x10541f6f);
  piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0x1cc))());
  piVar1 = (int *)((int *)*piVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    local_58 = (int *)((int *)0x0);
  }
  else {
    ppiStack_88 = (int **)((int **)0x10541f89);
    local_58 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  if (local_18 != (int *)0x0) {
    ppiStack_88 = (int **)((int **)0x10541fa5);
    (**(code **)(*local_18 + 8))();
  }
  ppiStack_88 = (int **)(&local_1c);
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  piVar4 = (int *)((int *)thunk_FUN_102cf840());
  piVar1 = (int *)((int *)*piVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    local_50 = (int *)((int *)0x0);
  }
  else {
    ppiStack_88 = (int **)((int **)0x10541fce);
    local_50 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xf;
  ppiStack_88 = (int **)((int **)0x0);
  if (local_1c != (int *)0x0) {
    ppiStack_88 = (int **)((int **)0x10541fea);
    (**(code **)(*local_1c + 8))();
    ppiStack_88 = (int **)(extraout_ECX);
  }
  piVar4 = (int *)((int *)param_1[0x36]);
  *(unsigned char *)((char *)&local_8 + 0) = 0xe;
  if (piVar4 != (int *)0x0) {
    ppiStack_88 = (int **)((int **)0x10541fff);
    (**(code **)(*piVar4 + 4))();
    ppiStack_88 = (int **)(extraout_ECX_00);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0x10;
  if (piVar4 == (int *)0x0) {
    local_48 = (int *)((int *)0x0);
  }
  else {
    ppiStack_88 = (int **)((int **)0x10542018);
    local_48 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
    ppiStack_88 = (int **)(extraout_ECX_01);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0x12;
  (**(code **)(*piVar4 + 0x20))(&ppiStack_88);
  piVar5 = (int *)((int *)createServiceAccountsByServiceFilter(&local_1c));
  piVar4 = (int *)((int *)*piVar5);
  *(unsigned char *)((char *)&local_8 + 0) = 0x14;
  *piVar5 = (int)(0);
  if (piVar4 == (int *)0x0) {
    local_40 = (int *)((int *)0x0);
  }
  else {
    local_40 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0x17;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0x16;
  piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0x1c))(&local_24,piVar4));
  piVar1 = (int *)((int *)*piVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 0x18;
  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    local_38 = (int *)((int *)0x0);
  }
  else {
    local_38 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0x1b;
  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x1a)));
  (**(code **)(*piVar1 + 0x18))();
  local_1c = (int *)((int *)0x0);
  local_14 = (uint)(local_14 & 0xffffff00);
  cVar2 = (char)((**(code **)(*piVar1 + 0x1c))());
  if (cVar2 != '\0') {
    do {
      piVar5 = (int *)((int *)thunk_FUN_102c3530(&local_28,piVar1));
      piVar4 = (int *)((int *)*piVar5);
      *(unsigned char *)((char *)&local_8 + 0) = 0x1c;
      *piVar5 = (int)(0);
      if (piVar4 == (int *)0x0) {
        piVar5 = (int *)((int *)0x0);
      }
      else {
        piVar5 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0x1f;
      if (local_28 != (int *)0x0) {
        (**(code **)(*local_28 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0x1e;
      this_00 = (SCStr *)((SCStr *)(**(code **)(*piVar4 + 0x30))(&local_18));
      *(unsigned char *)((char *)&local_8 + 0) = 0x20;
      bVar3 = (bool)(((SCStr *)(this_00))->op_eq(local_20));
      *(unsigned char *)((char *)&local_8 + 0) = 0x21;
      ((SCStr *)((SCStr *)&local_18))->int_release();
      local_14 = (uint)(local_14 & 0xff);
      if (bVar3) {

      }
      local_18 = (int *)((int *)0x0);
      piVar4 = (int *)((int *)((int)local_1c + 1));
      local_1c = (int *)(piVar4);
      if (1 < (int)piVar4) {
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x22)));
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 8))();
        }
        break;
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0x23;
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))();
      }
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x1a)));
      cVar2 = (char)((**(code **)(*piVar1 + 0x1c))());
    } while (cVar2 != '\0');
    if ((1 < (int)piVar4) || ((piVar4 == (int *)0x1 && ((char)local_14 == '\0')))) {
      uVar6 = (undefined1)(1);
      goto LAB_105421ce;
    }
  }
  uVar6 = (undefined1)(0);
LAB_105421ce:
  *(unsigned char *)((char *)&local_8 + 0) = 0x24;
  if (local_38 != (int *)0x0) {
    (**(code **)(*local_38 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0x25;
  if (local_40 != (int *)0x0) {
    (**(code **)(*local_40 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0x26;
  if (local_48 != (int *)0x0) {
    (**(code **)(*local_48 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0x27;
  if (local_50 != (int *)0x0) {
    (**(code **)(*local_50 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0x28;
  if (local_58 != (int *)0x0) {
    (**(code **)(*local_58 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x29)));
  if (local_60 != (int *)0x0) {
    (**(code **)(*local_60 + 8))();
  }

  ((SCStr *)(local_20))->int_release();

  return (undefined1)(uVar6);

 } catch (...) { }
}


// Reference entry 10542940; body size 118 bytes.
#line 1 "ENTRY_10542940"

void __stdcall FUN_10542940(int param_1)

{
 try {
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  if ((param_1 != 0) && (*(int *)(param_1 + -0x10) < 0xffff)) {
    iVar1 = (int)(thunk_FUN_1123fcd0((void *)(param_1 + -0x10),DAT_12126b84 ));
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + -8) = 0;
      *(undefined4 *)(param_1 + -0xc) = 0;
      thunk_FUN_113cfb70(param_1,*(undefined4 *)(param_1 + -4));
      free((void *)(param_1 + -0x10));
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 105429e0; body size 118 bytes.
#line 1 "ENTRY_105429e0"

void __stdcall FUN_105429e0(int param_1)

{
 try {
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  if ((param_1 != 0) && (*(int *)(param_1 + -0x10) < 0xffff)) {
    iVar1 = (int)(thunk_FUN_1123fcd0((void *)(param_1 + -0x10),DAT_12126b84 ));
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + -8) = 0;
      *(undefined4 *)(param_1 + -0xc) = 0;
      thunk_FUN_113cfb70(param_1,*(undefined4 *)(param_1 + -4));
      free((void *)(param_1 + -0x10));
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10542a80; body size 118 bytes.
#line 1 "ENTRY_10542a80"

void __stdcall FUN_10542a80(int param_1)

{
 try {
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  if ((param_1 != 0) && (*(int *)(param_1 + -0x10) < 0xffff)) {
    iVar1 = (int)(thunk_FUN_1123fcd0((void *)(param_1 + -0x10),DAT_12126b84 ));
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + -8) = 0;
      *(undefined4 *)(param_1 + -0xc) = 0;
      thunk_FUN_113cfb70(param_1,*(undefined4 *)(param_1 + -4));
      free((void *)(param_1 + -0x10));
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10542db0; body size 224 bytes.
#line 1 "ENTRY_10542db0"

void __fastcall FUN_10542db0(int param_1)

{
 try {
  char cVar1;
  short sVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x1c))(DAT_12126b84 ));
  if (cVar1 == '\0') {
    sVar2 = (short)((**(code **)(**(int **)(param_1 + 0xc) + 0x24))());
    if (sVar2 == 0) {
      ((SCStr *)((SCStr *)&local_14))->int_allocRep("AccountUDN");

      (**(code **)(**(int **)(param_1 + -0x2c) + 0xd0))(&local_18,&local_14);
      *(unsigned char *)((char *)&local_8 + 0) = 3;
      ((SCStr *)((SCStr *)&local_14))->int_release();

      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
      thunk_FUN_110828b0();
      puVar4 = (undefined1 *)(&DAT_1186d2ee);
      if (local_18 != (undefined1 *)0x0) {
        puVar4 = (undefined1 *)(local_18);
      }
      iVar3 = (int)(thunk_FUN_110935f0(puVar4,1));
      if (iVar3 != 0) {
        thunk_FUN_1059d800();
        thunk_FUN_104dec20();
        FUN_1006aac8();
      }

      ((SCStr *)((SCStr *)&local_18))->int_release();
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10542ef0; body size 108 bytes.
#line 1 "ENTRY_10542ef0"

void __fastcall FUN_10542ef0(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  *(undefined4 *)(param_1 + 0x1c) = 0;
  thunk_FUN_1053d9b0();
  iVar2 = (int)(*(int *)(param_1 + -8));
  if ((*(int *)(iVar2 + 0x68) != 0) &&
     (uVar1 = (*(int *)(iVar2 + 0x68) + *(int *)(iVar2 + 100)) - 1,
     piVar3 = *(int **)(*(int *)(*(int *)(iVar2 + 0x5c) +
                                (uVar1 >> 2 & *(int *)(iVar2 + 0x60) - 1U) * 4) + (uVar1 & 3) * 4),
     piVar3 != (int *)0x0)) {
    piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0x60))());
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0xa8))();
      return;
    }
  }
  thunk_FUN_10dd4500(0);
  return;
}


// Reference entry 10542f80; body size 133 bytes.
#line 1 "ENTRY_10542f80"

void __thiscall Recovered_Bulk::FUN_10542f80(undefined4 param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  thunk_FUN_112af4e0("MusicServiceWizard",1,"WorkingState timed out waiting for MediaServer update")
  ;
  thunk_FUN_1059d940(param_2);
  thunk_FUN_104dec20();
  iVar2 = (int)(*(int *)(param_1 + -0x10));
  if ((*(int *)(iVar2 + 0x68) != 0) &&
     (uVar1 = (*(int *)(iVar2 + 0x68) + *(int *)(iVar2 + 100)) - 1,
     piVar3 = *(int **)(*(int *)(*(int *)(iVar2 + 0x5c) +
                                (uVar1 >> 2 & *(int *)(iVar2 + 0x60) - 1U) * 4) + (uVar1 & 3) * 4),
     piVar3 != (int *)0x0)) {
    piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0x60))());
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0xa8))();
      return;
    }
  }
  thunk_FUN_10dd4500(0);
  return;
}


// Reference entry 10543030; body size 73 bytes.
#line 1 "ENTRY_10543030"

void __thiscall Recovered_Bulk::FUN_10543030(int param_2)
{
  int param_1 = (int )this;
  if ((*(int *)(param_1 + 0xa0) == param_2) &&
     (*(undefined4 *)(param_1 + 0xa0) = 0, *(char *)(param_1 + 0xa5) != '\0')) {
    *(undefined1 *)(param_1 + 0xa5) = 0;
    thunk_FUN_112af4e0("Wizard",5,
                       "Transition was previously requested, min-timer is done.  Transitioning to next state."
                      );
    FUN_1006aac8();
  }
  return;
}


// Reference entry 10543f50; body size 173 bytes.
#line 1 "ENTRY_10543f50"

void __fastcall FUN_10543f50(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar4 = (int *)((int *)(**(code **)(*(int *)pSVar3 + 0x3c))(&local_14,uVar2));
  piVar1 = (int *)((int *)*piVar4);

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
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x20))(-(uint)(param_1 != 0) & param_1 + 0xcU);
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10544090; body size 78 bytes.
#line 1 "ENTRY_10544090"

void __fastcall FUN_10544090(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  (**(code **)(*param_1 + 0x10))(DAT_12126b84 );

  ((SCStr *)((SCStr *)&stack0x00000004))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10544100; body size 134 bytes.
#line 1 "ENTRY_10544100"

void __thiscall Recovered_Bulk::FUN_10544100(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(param_2);


  uVar2 = (uint)(DAT_12126b84);

  thunk_FUN_105441b0(param_2);
  if ((*(char **)(param_1 + 0xf4) != (char *)0x0) && (**(char **)(param_1 + 0xf4) != '\0')) {
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("serviceId");

    (**(code **)(*piVar1 + 0x1c))(&param_2,param_1 + 0xf4,uVar2);

    ((SCStr *)((SCStr *)&param_2))->int_release();
  }

  return;

 } catch (...) { }
}


// Reference entry 105441b0; body size 392 bytes.
#line 1 "ENTRY_105441b0"

void __thiscall Recovered_Bulk::FUN_105441b0(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int local_20;
  SCStr local_1c [4];
  undefined4 local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  ((SCStr *)(local_1c))->int_allocRep("wizardType");

  uVar4 = (undefined4)((**(code **)(*param_1 + 0xb0))(&local_18,uVar3));
  piVar2 = (int *)(param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  (**(code **)(*param_2 + 0x1c))(local_1c,uVar4);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCStr *)((SCStr *)&local_18))->int_release();


  ((SCStr *)(local_1c))->int_release();

  ((SCStr *)((SCStr *)&param_2))->int_allocRep("nextStateId");

  if (param_1[0x1a] == 0) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    local_20 = (int)(param_1[0x1a] + param_1[0x19]);
    piVar5 = (int *)(*(int **)(*(int *)(param_1[0x17] + (param_1[0x18] - 1U & local_20 - 1U >> 2) * 4) +
                      (local_20 - 1U & 3) * 4));
  }
  iVar1 = (int)(*piVar2);
  uVar4 = (undefined4)((**(code **)(*piVar5 + 4))());
  (**(code **)(iVar1 + 0x28))(&param_2,uVar4);

  ((SCStr *)((SCStr *)&param_2))->int_release();

  if (param_1[0x1a] == 0) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    local_20 = (int)(param_1[0x1a] + param_1[0x19]);
    piVar5 = (int *)(*(int **)(*(int *)(param_1[0x17] + (param_1[0x18] - 1U & local_20 - 1U >> 2) * 4) +
                      (local_20 - 1U & 3) * 4));
  }
  (**(code **)(*piVar5 + 8))(&local_14);

  if ((local_14 != (char *)0x0) && (*local_14 != '\0')) {
    ((SCStr *)((SCStr *)&local_20))->int_allocRep("nextStateName");
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    (**(code **)(*piVar2 + 0x1c))(&local_20,&local_14);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
    ((SCStr *)((SCStr *)&local_20))->int_release();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10545060; body size 450 bytes.
#line 1 "ENTRY_10545060"

undefined4 __fastcall FUN_10545060(int *param_1)

{
 try {
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  SCLibrary *pSVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int extraout_ECX;
  int iStack_48;
  int **ppiStack_44;
  uint uStack_40;
  int *local_30;
  int *local_2c;
  undefined4 local_28;
  int *local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uStack_40 = (uint)(DAT_12126b84);

  if ((int *)param_1[7] != (int *)0x0) {
    ppiStack_44 = (int **)((int **)0x10545098);
    cVar3 = (char)((**(code **)(*(int *)param_1[7] + 0x1c))());
    if (cVar3 != '\0') {

      return (undefined4)(0);
    }
  }
  ppiStack_44 = (int **)((int **)0x105450a9);
  cVar3 = (char)((**(code **)(*param_1 + 0x7c))());
  if (cVar3 == '\0') {

    return (undefined4)(0);
  }
  if ((char)param_1[0x20] == '\0') {
    ppiStack_44 = (int **)((int **)0x105450de);
    cVar3 = (char)((**(code **)(*(int *)param_1[2] + 0x1e8))());
    ppiStack_44 = (int **)((int **)0x105450e5);
    pSVar4 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    ppiStack_44 = (int **)(&local_14);
    iStack_48 = (int)(0x105450f0);
    iStack_48 = (int)((**(code **)(*(int *)pSVar4 + 0x18))());

    thunk_FUN_101ccbf0();
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    iStack_48 = (int)(0);
    if (local_14 != (int *)0x0) {
      iStack_48 = (int)(0x10545110);
      (**(code **)(*local_14 + 8))();
      iStack_48 = (int)(extraout_ECX);
    }
    local_1c = (int *)(&iStack_48);
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    pcVar5 = (char *)("Report");
    if (cVar3 == '\0') {
      pcVar5 = (char *)("NoReport");
    }
    ((SCStr *)((SCStr *)&iStack_48))->int_allocRep(pcVar5);
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    ((SCStr *)((SCStr *)&stack0xffffffb4))->int_allocRep("UMTracking");
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    uVar6 = (undefined4)((**(code **)(*local_30 + 0x94))(&local_18));
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    thunk_FUN_102caa30(uVar6);
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    uVar2 = (undefined1)((undefined1)local_8);
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    if (local_20 == 0) {
      *(unsigned char *)((char *)&local_8 + 0) = uVar2;
      thunk_FUN_112af4e0("MusicServiceWizard",1,"Usage data system property set failed!");
      FUN_1006aac8();
    }
    else {
      puVar7 = (undefined4 *)((undefined4 *)thunk_FUN_101da240(&local_28));
      *(unsigned char *)((char *)&local_8 + 0) = 9;
      thunk_FUN_102cb990(&local_20,*puVar7);
      piVar1 = (int *)(local_24);
      *(unsigned char *)((char *)&local_8 + 0) = 10;
      if (local_24 != (int *)0x0) {

        local_24 = (int *)((int *)0x0);
        (**(code **)(*piVar1 + 8))();
      }
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xb)));
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }

    if (local_2c != (int *)0x0) {
      (**(code **)(*local_2c + 8))();
    }

    return (undefined4)(1);
  }

  return (undefined4)(2);

 } catch (...) { }
}


// Reference entry 10545310; body size 103 bytes.
#line 1 "ENTRY_10545310"

undefined4 * __thiscall Recovered_Bulk::FUN_10545310(undefined4 *param_2,SCStr *param_3)
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


// Reference entry 10545390; body size 119 bytes.
#line 1 "ENTRY_10545390"

undefined4 * __thiscall Recovered_Bulk::FUN_10545390(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIServiceAppInteropResponseDelegate"));
  if (bVar1) {
    if (param_1 == (int *)&DAT_0000000c) {
      param_1 = (int *)((int *)0x0);
    }
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
    if (param_1 == (int *)&DAT_0000000c) {
      param_1 = (int *)((int *)0x0);
    }
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10545430; body size 135 bytes.
#line 1 "ENTRY_10545430"

undefined4 * __thiscall Recovered_Bulk::FUN_10545430(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIStringInput"));
  if (((bVar1) || (bVar1 = ((SCStr *)(param_3))->op_eq("SCIStringInputBase"), bVar1)) ||
     (bVar1 = ((SCStr *)(param_3))->op_eq("SCIInput"), bVar1)) {
    *param_2 = (undefined4)(param_1);
    if (param_1 == (int *)0x0) {
      return (undefined4 *)(param_2);
    }
    (**(code **)(*param_1 + 4))();
    return (undefined4 *)(param_2);
  }
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
  if (!bVar1) {
    *param_2 = (undefined4)(0);
    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 == (int *)0x0) {
    return (undefined4 *)(param_2);
  }
  (**(code **)(*param_1 + 4))();
  return (undefined4 *)(param_2);
}


// Reference entry 105454e0; body size 135 bytes.
#line 1 "ENTRY_105454e0"

undefined4 * __thiscall Recovered_Bulk::FUN_105454e0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIStringInput"));
  if (((bVar1) || (bVar1 = ((SCStr *)(param_3))->op_eq("SCIStringInputBase"), bVar1)) ||
     (bVar1 = ((SCStr *)(param_3))->op_eq("SCIInput"), bVar1)) {
    *param_2 = (undefined4)(param_1);
    if (param_1 == (int *)0x0) {
      return (undefined4 *)(param_2);
    }
    (**(code **)(*param_1 + 4))();
    return (undefined4 *)(param_2);
  }
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
  if (!bVar1) {
    *param_2 = (undefined4)(0);
    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 == (int *)0x0) {
    return (undefined4 *)(param_2);
  }
  (**(code **)(*param_1 + 4))();
  return (undefined4 *)(param_2);
}


// Reference entry 10545590; body size 135 bytes.
#line 1 "ENTRY_10545590"

undefined4 * __thiscall Recovered_Bulk::FUN_10545590(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIStringInput"));
  if (((bVar1) || (bVar1 = ((SCStr *)(param_3))->op_eq("SCIStringInputBase"), bVar1)) ||
     (bVar1 = ((SCStr *)(param_3))->op_eq("SCIInput"), bVar1)) {
    *param_2 = (undefined4)(param_1);
    if (param_1 == (int *)0x0) {
      return (undefined4 *)(param_2);
    }
    (**(code **)(*param_1 + 4))();
    return (undefined4 *)(param_2);
  }
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
  if (!bVar1) {
    *param_2 = (undefined4)(0);
    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 == (int *)0x0) {
    return (undefined4 *)(param_2);
  }
  (**(code **)(*param_1 + 4))();
  return (undefined4 *)(param_2);
}


// Reference entry 10545640; body size 103 bytes.
#line 1 "ENTRY_10545640"

undefined4 * __thiscall Recovered_Bulk::FUN_10545640(undefined4 *param_2,SCStr *param_3)
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


// Reference entry 105456c0; body size 103 bytes.
#line 1 "ENTRY_105456c0"

undefined4 * __thiscall Recovered_Bulk::FUN_105456c0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIWizard"));
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


// Reference entry 10546900; body size 73 bytes.
#line 1 "ENTRY_10546900"

undefined4 __fastcall FUN_10546900(int param_1)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  
  if (*(int *)(param_1 + 0x68) != 0) {
    uVar1 = (uint)((*(int *)(param_1 + 0x68) + *(int *)(param_1 + 100)) - 1);
    piVar2 = (int *)(*(int **)(*(int *)(*(int *)(param_1 + 0x5c) +
                               (uVar1 >> 2 & *(int *)(param_1 + 0x60) - 1U) * 4) + (uVar1 & 3) * 4));
    if (piVar2 != (int *)0x0) {
      cVar3 = (char)((**(code **)(*piVar2 + 0x78))());
      if (cVar3 != '\0') {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 10546970; body size 471 bytes.
#line 1 "ENTRY_10546970"

void __fastcall FUN_10546970(int *param_1)

{
 try {
  uint uVar1;
  SCStr local_1c [4];
  SCStr local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("HasAccount");

  (**(code **)(*param_1 + 0xe4))(&local_14,0,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("OpErrorString");

  (**(code **)(*param_1 + 0x1a4))(&local_14);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  ((SCStr *)(local_18))->int_allocRep("");

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("DeviceAuthToken");
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  (**(code **)(*param_1 + 0xd4))(&local_14,local_18);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)(local_18))->int_release();

  ((SCStr *)(local_18))->int_allocRep("");

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("DeviceAuthKey");
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  (**(code **)(*param_1 + 0xd4))(&local_14,local_18);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)(local_18))->int_release();

  ((SCStr *)(local_18))->int_allocRep("RemovePromoted");

  (**(code **)(*param_1 + 0xe4))(local_18,0);

  ((SCStr *)(local_18))->int_release();

  ((SCStr *)(local_1c))->int_allocRep("InInitialSetup");

  (**(code **)(*param_1 + 0xe4))(local_1c,0);

  ((SCStr *)(local_1c))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 105472f0; body size 535 bytes.
#line 1 "ENTRY_105472f0"

void __fastcall FUN_105472f0(int param_1)

{
 try {
  int *piVar1;
  int iVar2;
  SCStr *pSVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  uint local_c8;
  int *local_c4;
  char *local_c0;
  void *local_bc;
  undefined1 *puStack_b8;
  undefined4 local_b4;
  undefined1 local_b0 [132];
  undefined1 local_2c [36];
  uint local_8;


  local_8 = (uint)(DAT_12126b84 ^ (uint)local_b0);

  puVar7 = (undefined1 *)(local_2c);
  uVar8 = (undefined4)(0x21);
  thunk_FUN_1109f7f0(puVar7,0x21,local_8);
  thunk_FUN_1109f100(puVar7,uVar8);
  thunk_FUN_110c2c60();
  uVar8 = (undefined4)(thunk_FUN_10533e90());
  iVar2 = (int)(thunk_FUN_110c1f30(uVar8));
  local_c0 = (char *)((char *)0x0);
  iVar4 = (int)(*(int *)(param_1 + 8));
  piVar6 = (int *)((int *)0x0);

  local_c4 = (int *)((int *)0x0);
  piVar1 = (int *)(*(int **)(iVar4 + 0xe0));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
    iVar4 = (int)(*(int *)(param_1 + 8));
  }
  *(unsigned char *)((char *)&local_b4 + 0) = 1;
  if ((*(int *)(iVar4 + 0xe8) == 0xb) && (piVar1 != (int *)0x0)) {
    pSVar3 = (SCStr *)((SCStr *)(**(code **)(*piVar1 + 0x30))(&local_c8));
    *(unsigned char *)((char *)&local_b4 + 0) = 2;
    if (pSVar3 != (SCStr *)&local_c0) {
      ((SCStr *)((SCStr *)&local_c0))->int_release();
      local_c0 = (char *)(*(char **)pSVar3);
      ((SCStr *)((SCStr *)&local_c0))->int_addref();
    }
    *(unsigned char *)((char *)&local_b4 + 0) = 3;
    ((SCStr *)((SCStr *)&local_c8))->int_release();
    if ((local_c0 != (char *)0x0) && (local_c4 = piVar6, *local_c0 != '\0')) {
      piVar6 = (int *)((int *)local_c0);
      local_c4 = (int *)((int *)local_c0);
    }
  }
  *(unsigned char *)((char *)&local_b4 + 0) = 1;
  local_c8 = (uint)(*(uint *)(param_1 + 8));
  local_b0[0] = 0;
  iVar4 = (int)(thunk_FUN_110828b0());
  if ((iVar4 != 0) && (piVar5 = (int *)thunk_FUN_11082860(), piVar5 != (int *)0x0)) {
    iVar4 = (int)(*piVar5);
    uVar8 = (undefined4)(thunk_FUN_10533e90(local_b0,0x81));
    (**(code **)(iVar4 + 0x24))(uVar8);
    piVar6 = (int *)(local_c4);
  }
  local_c8 = (uint)(-(uint)(param_1 != 0) & param_1 + 0xcU);
  iVar4 = (int)(thunk_FUN_1109f7f0(local_b0));
  iVar4 = (int)(thunk_FUN_111ddf90(*(undefined4 *)(iVar2 + 4),local_2c,piVar6,iVar4 + 0xe1));
  local_c4 = (int *)(*(int **)(param_1 + 0x18));
  if (local_c4 != (int *)0x0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      (**(code **)(*local_c4 + 0x10))();
      local_c4 = (int *)(*(int **)(param_1 + 0x18));
    }
    if ((local_c4 != (int *)0x0) && (iVar2 = thunk_FUN_1123fcd0(local_c4 + 1), iVar2 == 0)) {
      (**(code **)*local_c4)(1);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  *(int *)(param_1 + 0x18) = iVar4;
  if (iVar4 != 0) {
    thunk_FUN_1123fce0(iVar4 + 4);
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      uVar8 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 4))(local_c8,0));
      *(undefined4 *)(param_1 + 0x1c) = uVar8;
    }
  }
  local_b4 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_b4 + 1)) << 8 | (uint)(4)));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }

  ((SCStr *)((SCStr *)&local_c0))->int_release();

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10547590; body size 353 bytes.
#line 1 "ENTRY_10547590"

void FUN_10547590(void)

{
 try {
  int *piVar1;
  undefined1 uVar2;
  SCLibrary *pSVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 extraout_ECX;
  undefined4 uStack_48;
  int **ppiStack_44;
  uint uStack_40;
  undefined4 local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uStack_40 = (uint)(DAT_12126b84);

  ppiStack_44 = (int **)((int **)0x105475c0);
  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  ppiStack_44 = (int **)(local_18);

  piVar4 = (int *)((int *)(**(code **)(*(int *)pSVar3 + 0x18))());
  piVar1 = (int *)((int *)*piVar4);

  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {

    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;

  if (local_18[0] != (int *)0x0) {

    (**(code **)(*local_18[0] + 8))();
    uStack_48 = (undefined4)(extraout_ECX);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)((SCStr *)&uStack_48))->int_allocRep("UMTracking");
  piVar5 = (int *)((int *)(**(code **)(*piVar1 + 0x98))(&local_20));
  piVar1 = (int *)((int *)*piVar5);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  *piVar5 = (int)(0);
  local_1c = (int *)(piVar1);
  if (piVar1 == (int *)0x0) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    piVar5 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  local_18[0] = piVar5;
  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  uVar2 = (undefined1)((undefined1)local_8);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  if (piVar1 == (int *)0x0) {
    *(unsigned char *)((char *)&local_8 + 0) = uVar2;
    thunk_FUN_112af4e0("MusicServiceWizard",1,"Usage data system property get failed!");
    FUN_1006aac8();
  }
  else {
    puVar6 = (undefined4 *)((undefined4 *)thunk_FUN_101da240(&local_28));
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    thunk_FUN_102cba40(&local_1c,*puVar6);
    piVar1 = (int *)(local_24);
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    piVar5 = (int *)(local_18[0]);
    if (local_24 != (int *)0x0) {

      local_24 = (int *)((int *)0x0);
      (**(code **)(*piVar1 + 8))();
      piVar5 = (int *)(local_18[0]);
    }
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10547760; body size 296 bytes.
#line 1 "ENTRY_10547760"

void __fastcall FUN_10547760(int param_1)

{
 try {
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  undefined4 local_268;
  void *local_264;
  undefined1 *puStack_260;
  undefined4 local_25c;
  undefined1 local_258 [592];
  uint local_8;


  local_8 = (uint)(DAT_12126b84 ^ (uint)local_258);

  piVar2 = (int *)(*(int **)(*(int *)(param_1 + 8) + 0xd8));
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(local_8);
  }


  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_25c + 0) = 2;
  bVar4 = (bool)(false);
  iVar3 = (int)(thunk_FUN_110828b0());
  local_268 = (undefined4)(thunk_FUN_10533e90());
  if (iVar3 != 0) {
    thunk_FUN_11255220();
    *(unsigned char *)((char *)&local_25c + 0) = 4;
    cVar1 = (char)((**(code **)(*(int *)(iVar3 + 0x28) + 4))(local_268,0,local_258));
    bVar4 = (bool)(cVar1 == '\0');
    *(unsigned char *)((char *)&local_25c + 0) = 2;
    thunk_FUN_11255560();
  }
  ((SCStr *)((SCStr *)&local_268))->int_allocRep("FirstAccount");
  *(unsigned char *)((char *)&local_25c + 0) = 5;
  (**(code **)(**(int **)(param_1 + 8) + 0xe4))(&local_268,bVar4);
  local_25c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_25c + 1)) << 8 | (uint)(6)));
  ((SCStr *)((SCStr *)&local_268))->int_release();

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10547af0; body size 264 bytes.
#line 1 "ENTRY_10547af0"

void __fastcall FUN_10547af0(int param_1)

{
 try {
  uint uVar1;
  SCStr local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)(local_20))->int_allocRep("");

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("DeviceAuthToken");
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  (**(code **)(**(int **)(param_1 + 8) + 0xd4))(&local_14,local_20,uVar1);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)(local_20))->int_release();

  ((SCStr *)((SCStr *)&local_1c))->int_allocRep("");

  ((SCStr *)((SCStr *)&local_18))->int_allocRep("DeviceAuthKey");
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  (**(code **)(**(int **)(param_1 + 8) + 0xd4))(&local_18,&local_1c);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)((SCStr *)&local_18))->int_release();


  ((SCStr *)((SCStr *)&local_1c))->int_release();


  thunk_FUN_1053f430();

  return;

 } catch (...) { }
}


// Reference entry 10547c40; body size 733 bytes.
#line 1 "ENTRY_10547c40"

void __fastcall FUN_10547c40(int param_1)

{
 try {
  char cVar1;
  uint uVar2;
  SCLibrary *this_;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int **ppiVar7;
  int *local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  undefined4 local_20;
  int *local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  local_18 = (int)(param_1);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("HasAccount");

  (**(code **)(**(int **)(param_1 + 8) + 0xe4))(&local_14,0,uVar2);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  if (*(char *)(param_1 + 0x18) == '\0') {
    ppiVar7 = (int **)(&local_14);
    this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    puVar3 = (undefined4 *)((undefined4 *)((SCLibrary *)(this_))->getSCHousehold());

    uVar4 = (undefined4)((**(code **)(*(int *)*puVar3 + 0x1cc))(&local_1c,ppiVar7));
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    thunk_FUN_102c3040(uVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    if (local_48 != (int *)0x0) {
      (**(code **)(*local_48 + 0x14))(*(undefined4 *)(param_1 + 0x10));
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x34))();
    (**(code **)(**(int **)(param_1 + 0x24) + 0x34))();
    uVar4 = (undefined4)((**(code **)(**(int **)(param_1 + 8) + 0x1e4))(&local_24));
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    thunk_FUN_101fca80(uVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 0xc;
    if (local_24 != (int *)0x0) {
      (**(code **)(*local_24 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0xb;
    if (local_40 != (int *)0x0) {
      (**(code **)(*local_40 + 0x18))();
      cVar1 = (char)((**(code **)(*local_40 + 0x1c))());
      while (cVar1 != '\0') {
        piVar5 = (int *)((int *)(**(code **)(*local_40 + 0x24))(&local_30));
        piVar6 = (int *)((int *)*piVar5);
        *(unsigned char *)((char *)&local_8 + 0) = 0xd;
        *piVar5 = (int)(0);
        if (piVar6 == (int *)0x0) {
          piVar5 = (int *)((int *)0x0);
        }
        else {
          piVar5 = (int *)((int *)(**(code **)(*piVar6 + 0xc))());
        }
        *(unsigned char *)((char *)&local_8 + 0) = 0xe;
        if (piVar6 == (int *)0x0) {
          piVar6 = (int *)((int *)0x0);
          local_2c = (int *)((int *)0x0);
        }
        else {
          ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCIServiceDescriptor");
          *(unsigned char *)((char *)&local_8 + 0) = 0xf;
          puVar3 = (undefined4 *)((undefined4 *)(**(code **)*piVar6)(&local_28,&local_14));
          piVar6 = (int *)((int *)*puVar3);
          *puVar3 = (undefined4)(0);
          *(unsigned char *)((char *)&local_8 + 0) = 0x11;
          local_2c = (int *)(piVar6);
          if (local_28 != (int *)0x0) {
            (**(code **)(*local_28 + 8))();
          }
          *(unsigned char *)((char *)&local_8 + 0) = 0x12;
          ((SCStr *)((SCStr *)&local_14))->int_release();
          local_14 = (int *)((int *)0x0);
        }
        *(unsigned char *)((char *)&local_8 + 0) = 0x13;
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 8))();
        }
        *(unsigned char *)((char *)&local_8 + 0) = 0x16;
        if (local_30 != (int *)0x0) {
          (**(code **)(*local_30 + 8))();
        }
        *(unsigned char *)((char *)&local_8 + 0) = 0x15;
        piVar5 = (int *)(*(int **)(local_18 + 0x1c));
        uVar4 = (undefined4)((**(code **)(*piVar6 + 0x14))(&local_1c));
        *(unsigned char *)((char *)&local_8 + 0) = 0x17;
        (**(code **)(*piVar5 + 0x24))(uVar4);
        *(unsigned char *)((char *)&local_8 + 0) = 0x18;
        ((SCStr *)((SCStr *)&local_1c))->int_release();
        local_1c = (int *)((int *)0x0);
        *(unsigned char *)((char *)&local_8 + 0) = 0x15;
        piVar5 = (int *)(*(int **)(local_18 + 0x24));
        uVar4 = (undefined4)((**(code **)(*piVar6 + 0x20))(&local_20));
        *(unsigned char *)((char *)&local_8 + 0) = 0x19;
        (**(code **)(*piVar5 + 0x24))(uVar4);
        *(unsigned char *)((char *)&local_8 + 0) = 0x1a;
        ((SCStr *)((SCStr *)&local_20))->int_release();

        *(unsigned char *)((char *)&local_8 + 0) = 0x1b;
        (**(code **)(*piVar6 + 8))();
        *(unsigned char *)((char *)&local_8 + 0) = 0xb;
        cVar1 = (char)((**(code **)(*local_40 + 0x1c))());
      }
    }
    ((SCStr *)((SCStr *)&local_20))->int_allocRep((char *)0x0);
    *(unsigned char *)((char *)&local_8 + 0) = 0x1c;
    thunk_FUN_1054b9f0(&local_20);
    *(unsigned char *)((char *)&local_8 + 0) = 0x1d;
    ((SCStr *)((SCStr *)&local_20))->int_release();
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x1e)));
    if (local_3c != (int *)0x0) {
      (**(code **)(*local_3c + 8))();
    }

    if (local_44 != (int *)0x0) {
      (**(code **)(*local_44 + 8))();
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 105485d0; body size 368 bytes.
#line 1 "ENTRY_105485d0"

void __fastcall FUN_105485d0(int param_1)

{
 try {
  int *piVar1;
  undefined1 uVar2;
  SCLibrary *pSVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 extraout_ECX;
  undefined4 uStack_4c;
  int **ppiStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uStack_40 = (uint)(DAT_12126b84);

  ppiStack_48 = (int **)((int **)0x10548607);
  local_14 = (int)(param_1);
  (**(code **)(**(int **)(param_1 + 8) + 0x4c))();
  *(undefined1 *)(param_1 + 0xe8) = 0;
  ppiStack_48 = (int **)((int **)0x10548613);
  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  ppiStack_48 = (int **)(&local_18);

  piVar4 = (int *)((int *)(**(code **)(*(int *)pSVar3 + 0x18))());
  piVar1 = (int *)((int *)*piVar4);

  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {

    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;

  if (local_18 != (int *)0x0) {

    (**(code **)(*local_18 + 8))();
    uStack_4c = (undefined4)(extraout_ECX);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)((SCStr *)&uStack_4c))->int_allocRep("HiddenPreloadSvcs");
  piVar5 = (int *)((int *)(**(code **)(*piVar1 + 0x98))(&local_20));
  piVar1 = (int *)((int *)*piVar5);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  *piVar5 = (int)(0);
  local_1c = (int *)(piVar1);
  if (piVar1 == (int *)0x0) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    piVar5 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  local_18 = (int *)(piVar5);
  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  uVar2 = (undefined1)((undefined1)local_8);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  if (piVar1 == (int *)0x0) {
    *(undefined1 *)(local_14 + 0xea) = 1;
    *(unsigned char *)((char *)&local_8 + 0) = uVar2;
    thunk_FUN_112af4e0("MusicServiceWizard",1,"Get hidden preload services system property failed!")
    ;
  }
  else {
    puVar6 = (undefined4 *)((undefined4 *)thunk_FUN_101da240(&local_28));
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    thunk_FUN_102cba40(&local_1c,*puVar6);
    piVar1 = (int *)(local_24);
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    piVar5 = (int *)(local_18);
    if (local_24 != (int *)0x0) {

      local_24 = (int *)((int *)0x0);
      (**(code **)(*piVar1 + 8))();
      piVar5 = (int *)(local_18);
    }
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10549800; body size 157 bytes.
#line 1 "ENTRY_10549800"

void __fastcall FUN_10549800(int param_1)

{
 try {
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (*(int *)(param_1 + 0x30) == 0) {
    uVar2 = (undefined4)(thunk_FUN_110828b0(DAT_12126b84 ));
    pvVar3 = (void *)(operator_new(0x20));

    if (pvVar3 == (void *)0x0) {
      uVar2 = (undefined4)(0);
    }
    else {
      uVar2 = (undefined4)(thunk_FUN_104ddfd0(param_1 + 0x20,uVar2));
    }

    *(undefined4 *)(param_1 + 0x30) = uVar2;
    thunk_FUN_104deb40();
  }
  if ((*(int **)(param_1 + 0x24) != (int *)0x0) &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))(), cVar1 != '\0')) {

    return;
  }
  *(undefined2 *)(param_1 + 0x2c) = 0;
  thunk_FUN_10548a00();

  return;

 } catch (...) { }
}


// Reference entry 1054a970; body size 227 bytes.
#line 1 "ENTRY_1054a970"

void __fastcall FUN_1054a970(int *param_1)

{
 try {
  int iVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);

  ((SCStr *)(local_14))->int_allocRep("NoRunMode");

  cVar3 = (char)((**(code **)(*param_1 + 0xe0))(local_14,uVar4));

  ((SCStr *)(local_14))->int_release();
  iVar1 = (int)(param_1[0x1a]);

  if (cVar3 == '\0') {
    if ((iVar1 == 0) ||
       (uVar4 = (iVar1 + param_1[0x19]) - 1,
       *(int *)(*(int *)(param_1[0x17] + (uVar4 >> 2 & param_1[0x18] - 1U) * 4) + (uVar4 & 3) * 4)
       == 0)) {
      FUN_1006aac8();
    }
  }
  else if ((iVar1 != 0) &&
          (uVar4 = (iVar1 + param_1[0x19]) - 1,
          piVar2 = *(int **)(*(int *)(param_1[0x17] + (uVar4 >> 2 & param_1[0x18] - 1U) * 4) +
                            (uVar4 & 3) * 4), piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0xc))();

    return;
  }

  return;

 } catch (...) { }
}


// Reference entry 1054aaa0; body size 236 bytes.
#line 1 "ENTRY_1054aaa0"

void __thiscall Recovered_Bulk::FUN_1054aaa0(int *param_2)
{
  int param_1 = (int )this;
 try {
  char cVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  undefined4 uVar4;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  if (param_2 == (int *)0x0) {
    pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    uVar4 = (undefined4)((**(code **)(*(int *)pSVar3 + 0x3c))(&param_2,uVar2));

    thunk_FUN_102636f0(uVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    if (local_24 != (int *)0x0) {
      uVar4 = (undefined4)((**(code **)(*local_24 + 0x18))(&local_14));
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      thunk_FUN_10524ee0(uVar4);
      *(unsigned char *)((char *)&local_8 + 0) = 7;
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 6;
      if (local_1c != (int *)0x0) {
        cVar1 = (char)((**(code **)(*local_1c + 0x18))(param_1 + 0xc,0));
        if (cVar1 != '\0') {
          FUN_1006aac8();
        }
      }
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
      if (local_18 != (int *)0x0) {
        (**(code **)(*local_18 + 8))();
      }
    }

    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 8))();
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 1054abd0; body size 91 bytes.
#line 1 "ENTRY_1054abd0"

void __fastcall FUN_1054abd0(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (int)(*(int *)(param_1 + 8));
  if ((*(int *)(iVar2 + 0x68) != 0) &&
     (uVar1 = (*(int *)(iVar2 + 0x68) + *(int *)(iVar2 + 100)) - 1,
     piVar3 = *(int **)(*(int *)(*(int *)(iVar2 + 0x5c) +
                                (uVar1 >> 2 & *(int *)(iVar2 + 0x60) - 1U) * 4) + (uVar1 & 3) * 4),
     piVar3 != (int *)0x0)) {
    piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0x60))());
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0xa8))();
      return;
    }
  }
  thunk_FUN_10dd4500(0);
  return;
}


// Reference entry 1054ac90; body size 341 bytes.
#line 1 "ENTRY_1054ac90"

void __thiscall Recovered_Bulk::FUN_1054ac90(int *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  SCLibrary *pSVar2;
  undefined4 uVar3;
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


  uVar1 = (uint)(DAT_12126b84);

  if (param_2 == (int *)0x0) {
    pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    uVar3 = (undefined4)((**(code **)(*(int *)pSVar2 + 0x3c))(&local_14,uVar1));

    thunk_FUN_102636f0(uVar3);
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    if (local_2c != (int *)0x0) {
      uVar3 = (undefined4)((**(code **)(*local_2c + 0x18))(&param_2));
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      thunk_FUN_10524ee0(uVar3);
      *(unsigned char *)((char *)&local_8 + 0) = 7;
      if (param_2 != (int *)0x0) {
        (**(code **)(*param_2 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 6;
      if (local_24 != (int *)0x0) {
        uVar3 = (undefined4)(createPropertyBag());
        *(unsigned char *)((char *)&local_8 + 0) = 8;
        thunk_FUN_101aa9f0(uVar3);
        *(unsigned char *)((char *)&local_8 + 0) = 0xb;
        if (local_14 != (int *)0x0) {
          (**(code **)(*local_14 + 8))();
        }
        *(unsigned char *)((char *)&local_8 + 0) = 10;
        ((SCStr *)((SCStr *)&param_2))->int_allocRep("preferBrowserForHttpUri");
        *(unsigned char *)((char *)&local_8 + 0) = 0xc;
        (**(code **)(*local_1c + 0x40))(&param_2,1);
        *(unsigned char *)((char *)&local_8 + 0) = 0xd;
        ((SCStr *)((SCStr *)&param_2))->int_release();
        *(unsigned char *)((char *)&local_8 + 0) = 10;
        (**(code **)(*local_24 + 0x18))(param_1 + 0x74,local_1c);
        *(unsigned char *)((char *)&local_8 + 0) = 0xe;
        if (local_18 != (int *)0x0) {
          (**(code **)(*local_18 + 8))();
        }
      }
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xf)));
      if (local_20 != (int *)0x0) {
        (**(code **)(*local_20 + 8))();
      }
    }

    if (local_28 != (int *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 1054ae40; body size 201 bytes.
#line 1 "ENTRY_1054ae40"

void __thiscall Recovered_Bulk::FUN_1054ae40(int param_2,int param_3)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = (int)(param_3);


  if (param_2 != 0) {
    thunk_FUN_10dd5d50(param_2,param_3);

    return;
  }
  if (param_3 < 0) {
    if (param_3 == -1) {
      FUN_1006aac8(DAT_12126b84 );
    }
  }
  else {
    iVar2 = (int)((**(code **)(**(int **)(param_1 + 0x24) + 0x14))());
    if (iVar1 < iVar2) {
      (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))(&param_3,iVar1);

      thunk_FUN_1054b9f0(&param_3);
      (**(code **)(**(int **)(param_1 + 8) + 0x138))();

      ((SCStr *)((SCStr *)&param_3))->int_release();

      return;
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 1054af90; body size 207 bytes.
#line 1 "ENTRY_1054af90"

void __thiscall Recovered_Bulk::FUN_1054af90(undefined4 param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
 try {
  uint uVar1;
  int *piVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  cVar3 = (char)((**(code **)(*param_1 + 0x5c))(DAT_12126b84 ));
  if (cVar3 == '\0') {
    puVar4 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x18))(local_14));
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*puVar4);
    }
    thunk_FUN_112af4e0("Wizard",5,"Select Input: %i,%i. Wizard State: %s",param_2,param_3,puVar5);

    ((SCStr *)(local_14))->int_release();

    (**(code **)(*param_1 + 0x4c))(param_2);
    if ((param_1[0x1a] != 0) &&
       (uVar1 = (param_1[0x1a] + param_1[0x19]) - 1,
       piVar2 = *(int **)(*(int *)(param_1[0x17] + (uVar1 >> 2 & param_1[0x18] - 1U) * 4) +
                         (uVar1 & 3) * 4), piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 0x54))(param_2,param_3);
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 1054b2d0; body size 233 bytes.
#line 1 "ENTRY_1054b2d0"

void FUN_1054b2d0(int param_1,int param_2)

{
  thunk_FUN_1145c250(param_1,param_2,0x2001);
  thunk_FUN_1145c250(param_1 + 0x2042,param_2 + 0x2042,0x2001);
  thunk_FUN_1145c250(param_1 + 0x4084,param_2 + 0x4084,0x41);
  thunk_FUN_1145c250(param_1 + 0x4043,param_2 + 0x4043,0x41);
  thunk_FUN_1145c250(param_1 + 0x2001,param_2 + 0x2001,0x41);
  thunk_FUN_1145c250(param_1 + 0x40c5,param_2 + 0x40c5,0x401);
  thunk_FUN_1145c250(param_1 + 0x44c6,(char *)(param_2 + 0x44c6),0x401);
  thunk_FUN_1145c250(param_1 + 0x48c7,param_2 + 0x48c7,0x401);
  *(undefined1 *)(param_1 + 0x4cc8) = *(undefined1 *)(param_2 + 0x4cc8);
  if (*(char *)(param_2 + 0x44c6) != '\0') {
    *(undefined2 *)(param_1 + 0x4cc9) = 0x101;
    return;
  }
  *(undefined1 *)(param_1 + 0x4cca) = 1;
  return;
}


// Reference entry 1054b400; body size 79 bytes.
#line 1 "ENTRY_1054b400"

void __stdcall FUN_1054b400(int param_1,int param_2)

{
  thunk_FUN_1145c250(param_1,param_2,0x2001);
  thunk_FUN_1145c250(param_1 + 0x2001,param_2 + 0x2001,0x41);
  thunk_FUN_1145c250(param_1 + 0x2042,param_2 + 0x2042,0x41);
  *(undefined1 *)(param_1 + 0x2083) = 1;
  return;
}


// Reference entry 1054b470; body size 65 bytes.
#line 1 "ENTRY_1054b470"

undefined4 __thiscall Recovered_Bulk::FUN_1054b470(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_112501c0("AccountUDN"));
  (**(code **)(*piVar1 + 0xc))(param_2);
  piVar1 = (int *)((int *)thunk_FUN_112501c0("AccountNickname"));
  (**(code **)(*piVar1 + 0xc))(param_2);
  return (undefined4)(param_1);
}


// Reference entry 1054b530; body size 97 bytes.
#line 1 "ENTRY_1054b530"

void __stdcall FUN_1054b530(int param_1,int param_2)

{
  thunk_FUN_1145c250(param_1,param_2,0x401);
  thunk_FUN_1145c250(param_1 + 0x401,param_2 + 0x401,0x401);
  thunk_FUN_1145c250(param_1 + 0x802,param_2 + 0x802,0x401);
  *(undefined1 *)(param_1 + 0xc03) = *(undefined1 *)(param_2 + 0xc03);
  *(undefined1 *)(param_1 + 0xc04) = 1;
  return;
}


// Reference entry 1054b640; body size 108 bytes.
#line 1 "ENTRY_1054b640"

void __thiscall Recovered_Bulk::FUN_1054b640(undefined4 param_2)
{
  int *param_1 = (int *)this;
 try {
  uint uVar1;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (int *)(param_1);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("HasAccount");

  (**(code **)(*param_1 + 0xe4))(&local_14,param_2,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1054b7c0; body size 108 bytes.
#line 1 "ENTRY_1054b7c0"

void __thiscall Recovered_Bulk::FUN_1054b7c0(undefined4 param_2)
{
  int *param_1 = (int *)this;
 try {
  uint uVar1;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (int *)(param_1);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("RemovePromoted");

  (**(code **)(*param_1 + 0xe4))(&local_14,param_2,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1054b890; body size 84 bytes.
#line 1 "ENTRY_1054b890"

void __thiscall Recovered_Bulk::FUN_1054b890(int param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  int *piVar2;
  char cVar3;
  
  cVar3 = (char)((**(code **)(*param_1 + 0x5c))());
  if (((cVar3 == '\0') && (param_1[0x2c] = param_2, param_1[0x1a] != 0)) &&
     (uVar1 = (param_1[0x1a] + param_1[0x19]) - 1,
     piVar2 = *(int **)(*(int *)(param_1[0x17] + (uVar1 >> 2 & param_1[0x18] - 1U) * 4) +
                       (uVar1 & 3) * 4), piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0x48))(param_2);
  }
  return;
}


// Reference entry 1054b910; body size 168 bytes.
#line 1 "ENTRY_1054b910"

void __thiscall Recovered_Bulk::FUN_1054b910(int param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  if (param_2 != *(int *)(param_1 + 0xe0)) {
    piVar1 = (int *)(*(int **)(param_1 + 0xe4));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xe0) = 0;
      *(undefined4 *)(param_1 + 0xe4) = 0;
      (**(code **)(*piVar1 + 8))(uVar2);
    }
    *(int *)(param_1 + 0xe0) = param_2;
    *(int **)(param_1 + 0xe4) = param_3;
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))();
    }
  }

  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 1054bf80; body size 158 bytes.
#line 1 "ENTRY_1054bf80"

undefined1 __fastcall FUN_1054bf80(int param_1)

{
 try {
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  SCStr local_18 [4];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  uVar3 = (uint)(0);

  if (*(int *)(param_1 + 0x14) == 0) {
    ((SCStr *)(local_18))->int_allocRep("MSIServiceInfoDownloadErr");


    cVar1 = (char)((**(code **)(**(int **)(param_1 + 8) + 0xe0))(local_18,uVar2));
    if (cVar1 == '\0') {
      uVar4 = (undefined1)(1);
      uVar3 = (uint)(local_14);
      goto LAB_1054bff1;
    }
    uVar3 = (uint)(1);
  }
  uVar4 = (undefined1)(0);
LAB_1054bff1:
  if ((uVar3 & 1) != 0) {

    ((SCStr *)(local_18))->int_release();
  }

  return (undefined1)(uVar4);

 } catch (...) { }
}


// Reference entry 1054c180; body size 219 bytes.
#line 1 "ENTRY_1054c180"

uint __fastcall FUN_1054c180(int *param_1)

{
 try {
  char cVar1;
  uint uVar2;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  if ((param_1[0x1a] == 0) ||
     (local_14 = param_1[0x1a] + param_1[0x19],
     *(int *)(*(int *)(param_1[0x17] + (param_1[0x18] - 1U & local_14 - 1U >> 2) * 4) +
             (local_14 - 1U & 3) * 4) == 0)) {
    ((SCStr *)((SCStr *)&local_14))->int_allocRep("NoRunMode");

    cVar1 = (char)((**(code **)(*param_1 + 0xe0))(&local_14));

    ((SCStr *)((SCStr *)&local_14))->int_release();


    if (cVar1 == '\0') {
      uVar2 = (uint)(thunk_FUN_112af4e0("Wizard",1,"Cannot advance to next state before running."));

      return (uint)(uVar2 & 0xffffff00);
    }
  }

  uVar2 = (uint)(FUN_1006aac8(uVar2));

  return (uint)(uVar2);

 } catch (...) { }
}


// Reference entry 1054c8d0; body size 76 bytes.
#line 1 "ENTRY_1054c8d0"

void __fastcall FUN_1054c8d0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 1054c950; body size 254 bytes.
#line 1 "ENTRY_1054c950"

void __fastcall FUN_1054c950(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpLoadLogo);
  param_1[2] = (uint)&ghidra_vftable_SCOpLoadLogo;
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

  ((SCStr *)((SCStr *)(param_1 + 0xe)))->int_release();
  param_1[0xe] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0xd)))->int_release();
  param_1[0xd] = 0;
  param_1[8] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  piVar1 = (int *)((int *)param_1[4]);

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

  return;

 } catch (...) { }
}


// Reference entry 1054cb50; body size 273 bytes.
#line 1 "ENTRY_1054cb50"

undefined4 * __thiscall Recovered_Bulk::FUN_1054cb50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpLoadLogo);
  param_1[2] = (uint)&ghidra_vftable_SCOpLoadLogo;

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
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  ((SCStr *)((SCStr *)(param_1 + 0xe)))->int_release();
  param_1[0xe] = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)((SCStr *)(param_1 + 0xd)))->int_release();
  param_1[0xd] = 0;
  param_1[8] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  piVar1 = (int *)((int *)param_1[4]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
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
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x40);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1054ccb0; body size 145 bytes.
#line 1 "ENTRY_1054ccb0"

void __fastcall FUN_1054ccb0(int param_1)

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
  return;
}


// Reference entry 1054cd70; body size 268 bytes.
#line 1 "ENTRY_1054cd70"

void __thiscall Recovered_Bulk::FUN_1054cd70(int *param_2)
{
  int param_1 = (int )this;
 try {
  char cVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  void *pvVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar3 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar3 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar3 + 8))(uVar2);
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar3 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0x10) = piVar3;
      (**(code **)(*piVar3 + 4))();
    }
  }
  if (*(int **)(param_1 + 0x18) == (int *)0x0) {
    pvVar5 = (void *)(operator_new(0x6c));

    if (pvVar5 == (void *)0x0) {
      uVar4 = (undefined4)(0);
    }
    else {
      uVar4 = (undefined4)(thunk_FUN_111c06e0(0));
    }

    thunk_FUN_102207b0(uVar4,param_1 + 8,0);
    if (*(int **)(param_1 + 0x24) != (int *)0x0) {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x24) + 0xc))());
      if (cVar1 != '\0') {
        uVar4 = (undefined4)((**(code **)(**(int **)(param_1 + 0x24) + 8))());
        goto LAB_1054ce66;
      }
    }
    uVar4 = (undefined4)(*(undefined4 *)(param_1 + 0x28));
  }
  else {
    uVar4 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,2));
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0xc))());
      if (cVar1 != '\0') {
        uVar4 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 8))());
        goto LAB_1054ce66;
      }
    }
    uVar4 = (undefined4)(*(undefined4 *)(param_1 + 0x1c));
  }
LAB_1054ce66:
  *(undefined4 *)(param_1 + 0x2c) = uVar4;

  return;

 } catch (...) { }
}


// Reference entry 1054d4c0; body size 119 bytes.
#line 1 "ENTRY_1054d4c0"

undefined4 * __thiscall Recovered_Bulk::FUN_1054d4c0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIOpLoadLogo"));
  if ((bVar1) || (bVar1 = ((SCStr *)(param_3))->op_eq("SCIOp"), bVar1)) {
    *param_2 = (undefined4)(param_1);
    if (param_1 == (int *)0x0) {
      return (undefined4 *)(param_2);
    }
    (**(code **)(*param_1 + 4))();
    return (undefined4 *)(param_2);
  }
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
  if (!bVar1) {
    *param_2 = (undefined4)(0);
    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 == (int *)0x0) {
    return (undefined4 *)(param_2);
  }
  (**(code **)(*param_1 + 4))();
  return (undefined4 *)(param_2);
}


// Reference entry 1054d650; body size 99 bytes.
#line 1 "ENTRY_1054d650"

int __thiscall Recovered_Bulk::FUN_1054d650(int param_2)
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


// Reference entry 1054da50; body size 111 bytes.
#line 1 "ENTRY_1054da50"

void FUN_1054da50(undefined4 *param_1,undefined4 *param_2)

{
 try {
  int *piVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);
  ppvVar2 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar2, param_1 != (undefined4 *)(param_2)); param_1 = param_1 + 2) {
    piVar1 = (int *)((int *)param_1[1]);

    if (piVar1 != (int *)0x0) {
      *param_1 = (undefined4)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))(uVar3);
    }

  }

  return;

 } catch (...) { }
}


// Reference entry 1054dba0; body size 342 bytes.
#line 1 "ENTRY_1054dba0"

undefined4 * __thiscall Recovered_Bulk::FUN_1054dba0(void *param_2,undefined4 *param_3)
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
                    
    thunk_FUN_10551cb0();
  }
  uVar6 = (uint)(param_1[2] - iVar3 >> 2);
  uVar1 = (uint)(iVar4 + 1);
  if (0x3fffffff - (uVar6 >> 1) < uVar6) {
LAB_1054dcec:
                    
    thunk_FUN_1012a2a0();
  }
  uVar6 = (uint)((uVar6 >> 1) + uVar6);
  uVar7 = (uint)(uVar1);
  if (uVar1 <= uVar6) {
    uVar7 = (uint)(uVar6);
  }
  if (0x3fffffff < uVar7) goto LAB_1054dcec;
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
    if (uVar7 + 0x23 <= uVar7) goto LAB_1054dcec;
    pvVar5 = (void *)(operator_new(uVar7 + 0x23));
    if (pvVar5 == (void *)0x0) goto LAB_1054dce6;
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
LAB_1054dce6:
                    
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


// Reference entry 1054e110; body size 171 bytes.
#line 1 "ENTRY_1054e110"

undefined4 __thiscall Recovered_Bulk::FUN_1054e110(undefined4 param_2,int *param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  char cVar1;
  int *piVar2;
  int *piVar3;
  void **ppvVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar5 = (uint)(DAT_12126b84);
  cVar1 = (char)(*(char *)((int)param_3 + 0xd));
  ppvVar4 = (void **)(&local_10);

  while (ExceptionList = ppvVar4, cVar1 == '\0') {
    thunk_FUN_1054e110(param_2,param_3[2]);
    piVar2 = (int *)((int *)*param_3);
    piVar3 = (int *)((int *)param_3[6]);

    if (piVar3 != (int *)0x0) {
      param_3[5] = 0;
      param_3[6] = 0;
      (**(code **)(*piVar3 + 8))(uVar5);
    }

    ((SCStr *)((SCStr *)(param_3 + 4)))->int_release();
    param_3[4] = 0;

    thunk_FUN_1148a50e(param_3,0x1c);

    param_3 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 1054e2d0; body size 122 bytes.
#line 1 "ENTRY_1054e2d0"

void FUN_1054e2d0(undefined4 param_1,int param_2)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_2 + 0x18));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  ((SCStr *)((SCStr *)(param_2 + 0x10)))->int_release();
  *(undefined4 *)(param_2 + 0x10) = 0;
  thunk_FUN_1148a50e(param_2,0x1c);

  return;

 } catch (...) { }
}


// Reference entry 1054e950; body size 84 bytes.
#line 1 "ENTRY_1054e950"

void FUN_1054e950(undefined4 param_1,undefined4 *param_2)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_2[1]);
  if (piVar1 != (int *)0x0) {
    *param_2 = (undefined4)(0);
    param_2[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 1054eb80; body size 114 bytes.
#line 1 "ENTRY_1054eb80"

undefined4 * __thiscall Recovered_Bulk::FUN_1054eb80(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1054ec10; body size 278 bytes.
#line 1 "ENTRY_1054ec10"

undefined4 * __thiscall Recovered_Bulk::FUN_1054ec10(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

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

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1054f4e0; body size 417 bytes.
#line 1 "ENTRY_1054f4e0"

undefined4 * __thiscall Recovered_Bulk::FUN_1054f4e0(undefined4 param_2,undefined4 param_3,int *param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  pvVar3 = (void *)(operator_new(0x62c8));
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  if (pvVar3 == (void *)0x0) {
    iVar4 = (int)(0);
  }
  else {
    piVar5 = (int *)(param_4);
    if (param_4 != (int *)0x0) {
      (**(code **)(*param_4 + 4))(param_3,param_4,uVar2);
    }
    iVar4 = (int)(thunk_FUN_1054f140(param_2,param_3,piVar5));
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  puVar1 = (undefined4 *)(param_1 + 2);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_11240650();
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  param_1[6] = iVar4;
  if (iVar4 != 0) {
    thunk_FUN_1123fce0(iVar4 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 9) = 1000;
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpDownloadServiceManifestFiles);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpDownloadServiceManifestFiles);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;

  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1054f920; body size 260 bytes.
#line 1 "ENTRY_1054f920"

void __fastcall FUN_1054f920(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

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

  ((SCStr *)((SCStr *)(param_1 + 0xb)))->int_release();
  param_1[0xb] = 0;

  ((SCStr *)((SCStr *)(param_1 + 10)))->int_release();
  param_1[10] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  piVar1 = (int *)((int *)param_1[4]);

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

  return;

 } catch (...) { }
}


// Reference entry 1054fa70; body size 76 bytes.
#line 1 "ENTRY_1054fa70"

void __fastcall FUN_1054fa70(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 1054fb90; body size 135 bytes.
#line 1 "ENTRY_1054fb90"

void __fastcall FUN_1054fb90(int param_1)

{
 try {
  int iVar1;
  int *piVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  iVar1 = (int)(*(int *)(param_1 + 4));
  if (iVar1 != 0) {
    piVar2 = (int *)(*(int **)(iVar1 + 0x18));

    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(iVar1 + 0x14) = 0;
      *(undefined4 *)(iVar1 + 0x18) = 0;
      (**(code **)(*piVar2 + 8))(uVar3);
    }

    ((SCStr *)((SCStr *)(iVar1 + 0x10)))->int_release();
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }

  return;

 } catch (...) { }
}


// Reference entry 1054fd40; body size 81 bytes.
#line 1 "ENTRY_1054fd40"

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

void __fastcall FID_conflict__Tidy_1054fd40(int *param_1)

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


// Reference entry 1054fdb0; body size 96 bytes.
#line 1 "ENTRY_1054fdb0"

void __fastcall FUN_1054fdb0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_1054da50(*param_1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
    uVar3 = (uint)(param_1[2] - iVar1 & 0xfffffff8);
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


// Reference entry 1054fe30; body size 207 bytes.
#line 1 "ENTRY_1054fe30"

void __fastcall FUN_1054fe30(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RDownloadServiceManifestFilesAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RDownloadServiceManifestFilesAIOOp;
  thunk_FUN_10555000(uVar2);
  param_1[0x18ac] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  param_1[0x18a9] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  param_1[0x18a6] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  param_1[0x18a2] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_1054ff50();
  piVar1 = (int *)((int *)param_1[0x59]);

  if (piVar1 != (int *)0x0) {
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_112818d0();
  thunk_FUN_11261f10();

  return;

 } catch (...) { }
}


// Reference entry 1054ff50; body size 162 bytes.
#line 1 "ENTRY_1054ff50"

void __fastcall FUN_1054ff50(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RServiceManifestGetRequest);
  param_1[1] = (uint)&ghidra_vftable_RServiceManifestGetRequest;

  ((SCStr *)((SCStr *)(param_1 + 0x1846)))->int_release();
  param_1[0x1846] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x1845)))->int_release();
  param_1[0x1845] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x1844)))->int_release();
  param_1[0x1844] = 0;
  thunk_FUN_1124a3d0(uVar1);

  return;

 } catch (...) { }
}


// Reference entry 10550020; body size 172 bytes.
#line 1 "ENTRY_10550020"

void __fastcall FUN_10550020(undefined4 *param_1)

{
 try {
  int iVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpDownloadServiceManifestFiles);
  param_1[2] = (uint)&ghidra_vftable_SCOpDownloadServiceManifestFiles;
  if (((int *)param_1[6] != (int *)0x0) && (param_1[7] != 0)) {
    (**(code **)(*(int *)param_1[6] + 0x10))(uVar2);
  }
  iVar1 = (int)(param_1[0x12]);
  param_1[0x13] = iVar1;
  if (iVar1 != 0) {
    uVar2 = (uint)(param_1[0x14] - iVar1 & 0xfffffffc);
    iVar3 = (int)(iVar1);
    if (0xfff < uVar2) {
      iVar3 = (int)(*(int *)(iVar1 + -4));
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (iVar1 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar2);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
  }
  thunk_FUN_1054f920();

  return;

 } catch (...) { }
}


// Reference entry 10550100; body size 134 bytes.
#line 1 "ENTRY_10550100"

void __fastcall FUN_10550100(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCServiceManifest);
  piVar1 = (int *)((int *)param_1[5]);

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  ((SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 105501b0; body size 204 bytes.
#line 1 "ENTRY_105501b0"

void __fastcall FUN_105501b0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCServiceManifestManager);
  param_1[2] = (uint)&ghidra_vftable_SCServiceManifestManager;
  param_1[3] = (uint)&ghidra_vftable_SCServiceManifestManager;
  param_1[4] = (uint)&ghidra_vftable_SCServiceManifestManager;
  thunk_FUN_105551d0(uVar2);
  thunk_FUN_11242a10();
  thunk_FUN_1054e110(param_1 + 0xb,*(undefined4 *)(param_1[0xb] + 4));
  thunk_FUN_1148a50e(param_1[0xb],0x1c);
  thunk_FUN_1054fdb0();
  param_1[4] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[6]);

  if (piVar1 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[3] = (uint)&ghidra_vftable_SCSwfObjHHListener;
  param_1[2] = (uint)&ghidra_vftable_RServiceManifestCB;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10550320; body size 81 bytes.
#line 1 "ENTRY_10550320"

int * __thiscall Recovered_Bulk::FUN_10550320(int *param_2)
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


// Reference entry 105503f0; body size 81 bytes.
#line 1 "ENTRY_105503f0"

int * __thiscall Recovered_Bulk::FUN_105503f0(int *param_2)
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


// Reference entry 10550880; body size 106 bytes.
#line 1 "ENTRY_10550880"

undefined4 * __thiscall Recovered_Bulk::FUN_10550880(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);

  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105509c0; body size 235 bytes.
#line 1 "ENTRY_105509c0"

undefined4 * __thiscall Recovered_Bulk::FUN_105509c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RDownloadServiceManifestFilesAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RDownloadServiceManifestFilesAIOOp;
  thunk_FUN_10555000(uVar2);
  param_1[0x18ac] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  param_1[0x18a9] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  param_1[0x18a6] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  param_1[0x18a2] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_1054ff50();
  piVar1 = (int *)((int *)param_1[0x59]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  if (piVar1 != (int *)0x0) {
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_112818d0();
  thunk_FUN_11261f10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x62c8);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10550b80; body size 155 bytes.
#line 1 "ENTRY_10550b80"

undefined4 * __thiscall Recovered_Bulk::FUN_10550b80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCServiceManifest);
  piVar1 = (int *)((int *)param_1[5]);

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  ((SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10550d50; body size 89 bytes.
#line 1 "ENTRY_10550d50"

void __thiscall Recovered_Bulk::FUN_10550d50(int param_2,int param_3,int param_4)
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


// Reference entry 10550dc0; body size 104 bytes.
#line 1 "ENTRY_10550dc0"

void __thiscall Recovered_Bulk::FUN_10550dc0(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_1054da50(*param_1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
    uVar3 = (uint)(param_1[2] - iVar1 & 0xfffffff8);
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
  param_1[1] = param_2 + param_3 * 8;
  param_1[2] = param_2 + param_4 * 8;
  return;
}


// Reference entry 105517b0; body size 79 bytes.
#line 1 "ENTRY_105517b0"

void __thiscall Recovered_Bulk::FUN_105517b0(int param_2)
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


// Reference entry 105518d0; body size 83 bytes.
#line 1 "ENTRY_105518d0"

void __thiscall Recovered_Bulk::FUN_105518d0(int *param_2)
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


// Reference entry 10551940; body size 81 bytes.
#line 1 "ENTRY_10551940"

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

void __fastcall FID_conflict__Tidy_10551940(int *param_1)

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


// Reference entry 105519b0; body size 96 bytes.
#line 1 "ENTRY_105519b0"

void __fastcall FUN_105519b0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_1054da50(*param_1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
    uVar3 = (uint)(param_1[2] - iVar1 & 0xfffffff8);
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


// Reference entry 10551cd0; body size 76 bytes.
#line 1 "ENTRY_10551cd0"

void __fastcall FUN_10551cd0(int param_1)

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


// Reference entry 10551ef0; body size 149 bytes.
#line 1 "ENTRY_10551ef0"

void __thiscall Recovered_Bulk::FUN_10551ef0(int *param_2,undefined4 param_3)
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


// Reference entry 10552ee0; body size 206 bytes.
#line 1 "ENTRY_10552ee0"

void __thiscall Recovered_Bulk::FUN_10552ee0(undefined4 *param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar4 = (int *)(*(int **)(param_1 + 4));
  piVar6 = (int *)(param_3 + 2);
  piVar5 = (int *)(param_3);
  if ((int *)(piVar6) != piVar4) {
    do {
      iVar3 = (int)(*piVar6);
      if (iVar3 != *piVar5) {
        piVar1 = (int *)((int *)piVar5[1]);
        if (piVar1 != (int *)0x0) {
          *piVar5 = (int)(0);
          piVar5[1] = 0;
          (**(code **)(*piVar1 + 8))(uVar2);
          iVar3 = (int)(*piVar6);
        }
        *piVar5 = (int)(iVar3);
        piVar1 = (int *)((int *)piVar6[1]);
        piVar5[1] = (int)piVar1;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))();
        }
      }
      piVar6 = (int *)(piVar6 + 2);
      piVar5 = (int *)(piVar5 + 2);
    } while ((int *)(piVar6) != piVar4);
    piVar4 = (int *)(*(int **)(param_1 + 4));
  }
  piVar6 = (int *)((int *)piVar4[-1]);

  if (piVar6 != (int *)0x0) {
    piVar4[-2] = 0;
    piVar4[-1] = 0;
    (**(code **)(*piVar6 + 8))();
    piVar4 = (int *)(*(int **)(param_1 + 4));
  }
  *(int **)(param_1 + 4) = piVar4 + -2;
  *param_2 = (undefined4)(param_3);

  return;

 } catch (...) { }
}


// Reference entry 10553000; body size 78 bytes.
#line 1 "ENTRY_10553000"

void __thiscall Recovered_Bulk::FUN_10553000(int *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_1054e240(local_c,param_3);
  if (*(char *)(local_4 + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_3))->op_lt((SCStr *)(local_4 + 0x10)));
    if (!bVar1) {
      *param_2 = (int)(local_4);
      return;
    }
  }
  *param_2 = (int)(*param_1);
  return;
}


// Reference entry 10553070; body size 240 bytes.
#line 1 "ENTRY_10553070"

undefined1 __fastcall FUN_10553070(int param_1)

{
 try {
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  int *piVar4;
  int *local_1c;
  SCStr local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  uVar2 = (undefined1)(0);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("advertising");

  piVar4 = (int *)((int *)(**(code **)(**(int **)(param_1 + 0x10) + 0x48))(&local_1c,&local_14,uVar3));
  piVar1 = (int *)((int *)*piVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 5;
  if (piVar1 != (int *)0x0) {
    ((SCStr *)(local_18))->int_allocRep("headers");
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    uVar2 = (undefined1)((**(code **)(*piVar1 + 0x3c))(local_18));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
    ((SCStr *)(local_18))->int_release();
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined1)(uVar2);

 } catch (...) { }
}


// Reference entry 105531a0; body size 390 bytes.
#line 1 "ENTRY_105531a0"

undefined1 __stdcall FUN_105531a0(uint param_1)

{
 try {
  int *piVar1;
  undefined1 uVar2;
  int *piVar3;
  int *piVar4;
  int *local_24;
  int *local_20;
  int *local_1c;
  SCStr local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (undefined1)(0);
  thunk_FUN_103a3e50(local_18,param_1 << 8 | 7,DAT_12126b84 );

  piVar3 = (int *)((int *)thunk_FUN_10556310(&local_1c,local_18));
  piVar1 = (int *)((int *)*piVar3);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (piVar1 != (int *)0x0) {
    param_1 = (uint)(param_1 & 0xffffff);
    ((SCStr *)((SCStr *)&local_14))->int_allocRep("advertising");
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    piVar4 = (int *)((int *)(**(code **)(*(int *)piVar1[4] + 0x48))(&local_24,&local_14));
    piVar1 = (int *)((int *)*piVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    *piVar4 = (int)(0);
    local_20 = (int *)(piVar1);
    if (piVar1 == (int *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    local_1c = (int *)(piVar4);
    if (local_24 != (int *)0x0) {
      (**(code **)(*local_24 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0xb;
    ((SCStr *)((SCStr *)&local_14))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 10;
    if (piVar1 == (int *)0x0) {
      uVar2 = (undefined1)(*(uint *)((char *)&param_1 + 3));
    }
    else {
      ((SCStr *)((SCStr *)&param_1))->int_allocRep("headers");
      *(unsigned char *)((char *)&local_8 + 0) = 0xc;
      uVar2 = (undefined1)((**(code **)(*piVar1 + 0x3c))(&param_1));
      *(unsigned char *)((char *)&local_8 + 0) = 0xd;
      ((SCStr *)((SCStr *)&param_1))->int_release();
      param_1 = (uint)(0);
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0xe;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))();
    }
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xf)));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  ((SCStr *)(local_18))->int_release();

  return (undefined1)(uVar2);

 } catch (...) { }
}


// Reference entry 10553390; body size 109 bytes.
#line 1 "ENTRY_10553390"

undefined4 __thiscall Recovered_Bulk::FUN_10553390(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("apiKey");

  (**(code **)(**(int **)(param_1 + 0x10) + 0x18))(param_2,&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(param_2);

 } catch (...) { }
}


// Reference entry 10553420; body size 297 bytes.
#line 1 "ENTRY_10553420"

undefined4 __stdcall FUN_10553420(int *param_1,undefined4 param_2,undefined4 param_3)

{
 try {
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  SCStr local_1c [4];
  undefined4 local_18;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_103a3e50(local_14,param_1,DAT_12126b84 );

  piVar2 = (int *)((int *)thunk_FUN_10556310(&param_1,local_14));
  piVar1 = (int *)((int *)*piVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  if (piVar1 != (int *)0x0) {
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    ((SCStr *)((SCStr *)&param_1))->int_allocRep("apiKey");
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*(int *)piVar1[4] + 0x18))(local_1c,&param_1));

    *(unsigned char *)((char *)&local_8 + 0) = 7;
    ((SCStr *)((SCStr *)&param_1))->int_release();
    param_1 = (int *)((int *)0x0);
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*puVar3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*puVar3);
    }
    thunk_FUN_1145c250(param_2,puVar4,param_3);
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    ((SCStr *)(local_1c))->int_release();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(9)));
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  ((SCStr *)(local_14))->int_release();

  return (undefined4)(param_2);

 } catch (...) { }
}


// Reference entry 105538d0; body size 239 bytes.
#line 1 "ENTRY_105538d0"

undefined4 __stdcall FUN_105538d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
 try {
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  SCStr local_18 [4];
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_103a3e50(&param_1,param_1,DAT_12126b84 );

  piVar2 = (int *)((int *)thunk_FUN_10556310(&local_14,&param_1));
  piVar1 = (int *)((int *)*piVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (piVar1 != (int *)0x0) {
    puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_105535a0(local_18));
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*puVar3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*puVar3);
    }
    thunk_FUN_1145c250(param_2,puVar4,param_3);
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    ((SCStr *)(local_18))->int_release();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();

  return (undefined4)(param_2);

 } catch (...) { }
}


// Reference entry 10553a40; body size 133 bytes.
#line 1 "ENTRY_10553a40"

char * FUN_10553a40(char *param_1,undefined4 param_2)

{
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  thunk_FUN_103a3ed0(param_2,DAT_12126b84 );
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';

  ((SCStr *)(this_))->format(param_1);

  return (char *)(param_1);

 } catch (...) { }
}


// Reference entry 10553b20; body size 108 bytes.
#line 1 "ENTRY_10553b20"

undefined4 __stdcall FUN_10553b20(undefined4 param_1)

{
 try {
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)(local_14))->int_allocRep("presentationMap");

  thunk_FUN_10557e50(param_1,local_14);

  ((SCStr *)(local_14))->int_release();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10555000; body size 371 bytes.
#line 1 "ENTRY_10555000"

void __fastcall FUN_10555000(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x6290) != 0) && (*(int **)(param_1 + 0x628c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x628c) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x628c));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x628c) = 0;
    *(undefined4 *)(param_1 + 0x6290) = 0;
  }
  if ((*(int *)(param_1 + 0x62a0) != 0) && (*(int **)(param_1 + 0x629c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x629c) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x629c));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x629c) = 0;
    *(undefined4 *)(param_1 + 0x62a0) = 0;
  }
  if ((*(int *)(param_1 + 0x62ac) != 0) && (*(int **)(param_1 + 0x62a8) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x62a8) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x62a8));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x62a8) = 0;
    *(undefined4 *)(param_1 + 0x62ac) = 0;
  }
  if ((*(int *)(param_1 + 0x62b8) != 0) && (*(int **)(param_1 + 0x62b4) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x62b4) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x62b4));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x62b4) = 0;
    *(undefined4 *)(param_1 + 0x62b8) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x62c0) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x62c0))(1);
    *(undefined4 *)(param_1 + 0x62c0) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x62c4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x62c4))(1);
    *(undefined4 *)(param_1 + 0x62c4) = 0;
  }
  return;
}


// Reference entry 105551d0; body size 67 bytes.
#line 1 "ENTRY_105551d0"

void __fastcall FUN_105551d0(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(*(undefined4 **)(param_1 + 0x20));
  puVar1 = (undefined4 *)((undefined4 *)(param_1 + 0x20));
  if (puVar3 != *(undefined4 **)(param_1 + 0x24)) {
    do {
      cVar2 = (char)((**(code **)(*(int *)*puVar3 + 0x1c))());
      if (cVar2 != '\0') {
        (**(code **)(*(int *)*puVar3 + 0x18))();
      }
      puVar3 = (undefined4 *)(puVar3 + 2);
    } while (puVar3 != *(undefined4 **)(param_1 + 0x24));
  }
  thunk_FUN_1054da50(*puVar1,*(undefined4 *)(param_1 + 0x24),puVar1);
  *(undefined4 *)(param_1 + 0x24) = *puVar1;
  return;
}


// Reference entry 10556270; body size 128 bytes.
#line 1 "ENTRY_10556270"

void __fastcall FUN_10556270(int param_1)

{
 try {
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_101f6530(&local_18,DAT_12126b84 );

  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);

  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10556770; body size 118 bytes.
#line 1 "ENTRY_10556770"

void __stdcall FUN_10556770(int param_1)

{
 try {
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  if ((param_1 != 0) && (*(int *)(param_1 + -0x10) < 0xffff)) {
    iVar1 = (int)(thunk_FUN_1123fcd0((void *)(param_1 + -0x10),DAT_12126b84 ));
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + -8) = 0;
      *(undefined4 *)(param_1 + -0xc) = 0;
      thunk_FUN_113cfb70(param_1,*(undefined4 *)(param_1 + -4));
      free((void *)(param_1 + -0x10));
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10556830; body size 232 bytes.
#line 1 "ENTRY_10556830"

void __thiscall Recovered_Bulk::FUN_10556830(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;

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

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10556e10; body size 438 bytes.
#line 1 "ENTRY_10556e10"

undefined1 __stdcall FUN_10556e10(undefined4 *param_1,undefined4 param_2,int *param_3)

{
 try {
  FILE *_File;
  size_t _Count;
  undefined4 uVar1;
  void *_DstBuf;
  size_t sVar2;
  int iVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  int *piVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  puVar5 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)((undefined1 *)*param_1);
  }
  _File = (FILE *)((FILE *)thunk_FUN_1145cb70(puVar5,&DAT_118a1488,DAT_12126b84 ));
  puVar5 = (undefined1 *)(&DAT_1186d2ee);
  if (_File == (FILE *)0x0) {
    pcVar4 = (char *)("Service manifest file could not be opened: %s");
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_1);
    }
    uVar1 = (undefined4)(3);
  }
  else {
    fseek(_File,0,2);
    _Count = (size_t)(ftell(_File));
    fseek(_File,0,0);
    if (0 < (int)_Count) {
      _DstBuf = (void *)((void *)thunk_FUN_1148b586(_Count + 1));
      sVar2 = (size_t)(fread(_DstBuf,1,_Count,_File));
      *(undefined1 *)((int)_DstBuf + _Count) = 0;
      fclose(_File);
      if (sVar2 == _Count) {
        piVar7 = (int *)(param_3);
        if (param_3 != (int *)0x0) {
          (**(code **)(*param_3 + 4))(param_2,param_3);
        }
        iVar3 = (int)(thunk_FUN_10556960(_DstBuf,_Count,param_2,piVar7));
        free(_DstBuf);
        if (iVar3 == 0) {
          uVar6 = (undefined1)(1);
        }
        else {
          if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
            puVar5 = (undefined1 *)((undefined1 *)*param_1);
          }
          thunk_FUN_112af4e0("svcmanifest",1,"Could not parse manifest %s, error: %d",puVar5,iVar3);
          uVar6 = (undefined1)(0);
        }
      }
      else {
        if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
          puVar5 = (undefined1 *)((undefined1 *)*param_1);
        }
        thunk_FUN_112af4e0("svcmanifest",1,
                           "Failed to read service manifest file %s. Read %ld out of %ld bytes",
                           puVar5,sVar2,_Count);
        free(_DstBuf);
        uVar6 = (undefined1)(0);
      }
      goto LAB_10556f8f;
    }
    fclose(_File);
    pcVar4 = (char *)("Service manifest file is empty: %s");
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_1);
    }
    uVar1 = (undefined4)(1);
  }
  thunk_FUN_112af4e0("svcmanifest",uVar1,pcVar4,puVar5);
  uVar6 = (undefined1)(0);
LAB_10556f8f:

  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }

  return (undefined1)(uVar6);

 } catch (...) { }
}


// Reference entry 10557950; body size 99 bytes.
#line 1 "ENTRY_10557950"

int __thiscall Recovered_Bulk::FUN_10557950(int param_2)
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


// Reference entry 10557c30; body size 128 bytes.
#line 1 "ENTRY_10557c30"

void __fastcall FUN_10557c30(int param_1)

{
 try {
  undefined4 uVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (undefined4)(thunk_FUN_110828b0(DAT_12126b84 ));
  pvVar2 = (void *)(operator_new(0x20));

  if (pvVar2 == (void *)0x0) {
    uVar1 = (undefined4)(0);
  }
  else {
    uVar1 = (undefined4)(thunk_FUN_104ddfd0(-(uint)(param_1 != 0) & param_1 + 0xcU,uVar1));
  }

  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  thunk_FUN_104deb40();

  return;

 } catch (...) { }
}


// Reference entry 10557da0; body size 136 bytes.
#line 1 "ENTRY_10557da0"

void __stdcall FUN_10557da0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  thunk_FUN_110828b0();
  iVar1 = (int)(thunk_FUN_103a3ed0(param_1));
  uVar2 = (uint)(thunk_FUN_11081a40());
  uVar5 = (uint)(0);
  if (uVar2 != 0) {
    do {
      piVar3 = (int *)((int *)thunk_FUN_11081680(uVar5));
      if ((((piVar3 != (int *)0x0) && (iVar4 = (**(code **)(*piVar3 + 0x54))(), iVar4 == 1)) &&
          (iVar4 = (**(code **)(*piVar3 + 0x5c))(),
          ((*(ushort *)(iVar4 + 4) & 0x7f) - 1 & 0xfffffffe) == 6)) &&
         (iVar4 = (**(code **)(*piVar3 + 0x58))(), iVar4 == iVar1)) {
        (**(code **)(*piVar3 + 0x24))();
        thunk_FUN_110e36b0();
      }
      uVar5 = (uint)(uVar5 + 1);
    } while (uVar5 < uVar2);
  }
  return;
}


// Reference entry 10558ca0; body size 94 bytes.
#line 1 "ENTRY_10558ca0"

undefined4 * __fastcall FUN_10558ca0(undefined4 *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_104da560(DAT_12126b84 );

  thunk_FUN_103d5ff0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEnterZIPBrowseItem);
  param_1[6] = (uint)&ghidra_vftable_SCEnterZIPBrowseItem;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105594c0; body size 76 bytes.
#line 1 "ENTRY_105594c0"

void __fastcall FUN_105594c0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10559530; body size 76 bytes.
#line 1 "ENTRY_10559530"

void __fastcall FUN_10559530(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 105595a0; body size 76 bytes.
#line 1 "ENTRY_105595a0"

void __fastcall FUN_105595a0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10559610; body size 76 bytes.
#line 1 "ENTRY_10559610"

void __fastcall FUN_10559610(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10559680; body size 76 bytes.
#line 1 "ENTRY_10559680"

void __fastcall FUN_10559680(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 105596f0; body size 76 bytes.
#line 1 "ENTRY_105596f0"

void __fastcall FUN_105596f0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10559760; body size 76 bytes.
#line 1 "ENTRY_10559760"

void __fastcall FUN_10559760(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10559c40; body size 272 bytes.
#line 1 "ENTRY_10559c40"

void __fastcall FUN_10559c40(undefined4 *param_1)

{
 try {
  uint uVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRadioBrowseDataSource);
  param_1[2] = (uint)&ghidra_vftable_SCRadioBrowseDataSource;
  param_1[10] = (uint)&ghidra_vftable_SCRadioBrowseDataSource;
  param_1[0x20] = (uint)&ghidra_vftable_SCRadioBrowseDataSource;
  param_1[0x21] = (uint)&ghidra_vftable_SCRadioBrowseDataSource;
  param_1[0x22] = (uint)&ghidra_vftable_SCRadioBrowseDataSource;
  param_1[0x23] = (uint)&ghidra_vftable_SCRadioBrowseDataSource;
  param_1[0x24] = (uint)&ghidra_vftable_SCRadioBrowseDataSource;
  param_1[0x25] = (uint)&ghidra_vftable_SCRadioBrowseDataSource;
  param_1[0x94] = (uint)&ghidra_vftable_SCRadioBrowseDataSource;
  param_1[0x95] = (uint)&ghidra_vftable_SCRadioBrowseDataSource;
  param_1[0x96] = (uint)&ghidra_vftable_SCRadioBrowseDataSource;
  piVar2 = (int *)((int *)param_1[0xa1]);
  if (param_1[0xa0] != 0) {
    if (piVar2 != (int *)0x0) {
      param_1[0xa0] = 0;
      param_1[0xa1] = 0;
      (**(code **)(*piVar2 + 8))(uVar1);
    }
    param_1[0xa0] = 0;
    piVar2 = (int *)((int *)0x0);
    param_1[0xa1] = 0;
  }

  if (piVar2 != (int *)0x0) {
    param_1[0xa0] = 0;
    param_1[0xa1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  thunk_FUN_102037c0();

  return;

 } catch (...) { }
}


// Reference entry 10559da0; body size 153 bytes.
#line 1 "ENTRY_10559da0"

void __fastcall FUN_10559da0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRadioBrowseItem);
  param_1[6] = (uint)&ghidra_vftable_SCRadioBrowseItem;
  param_1[0xe] = (uint)&ghidra_vftable_SCRadioBrowseItem;
  param_1[0xf] = (uint)&ghidra_vftable_SCRadioBrowseItem;
  param_1[0x10] = (uint)&ghidra_vftable_SCRadioBrowseItem;
  param_1[0x11] = (uint)&ghidra_vftable_SCRadioBrowseItem;
  param_1[0x46] = (uint)&ghidra_vftable_SCRadioBrowseItem;
  piVar1 = (int *)((int *)param_1[0x49]);

  if (piVar1 != (int *)0x0) {
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_10203d60();

  return;

 } catch (...) { }
}


// Reference entry 1055a290; body size 81 bytes.
#line 1 "ENTRY_1055a290"

int * __thiscall Recovered_Bulk::FUN_1055a290(int *param_2)
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


// Reference entry 1055a300; body size 81 bytes.
#line 1 "ENTRY_1055a300"

int * __thiscall Recovered_Bulk::FUN_1055a300(int *param_2)
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


// Reference entry 1055a370; body size 81 bytes.
#line 1 "ENTRY_1055a370"

int * __thiscall Recovered_Bulk::FUN_1055a370(int *param_2)
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


// Reference entry 1055aa60; body size 300 bytes.
#line 1 "ENTRY_1055aa60"

undefined4 * __thiscall Recovered_Bulk::FUN_1055aa60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRadioBrowseDataSource);
  param_1[2] = (uint)&ghidra_vftable_SCRadioBrowseDataSource;
  param_1[10] = (uint)&ghidra_vftable_SCRadioBrowseDataSource;
  param_1[0x20] = (uint)&ghidra_vftable_SCRadioBrowseDataSource;
  param_1[0x21] = (uint)&ghidra_vftable_SCRadioBrowseDataSource;
  param_1[0x22] = (uint)&ghidra_vftable_SCRadioBrowseDataSource;
  param_1[0x23] = (uint)&ghidra_vftable_SCRadioBrowseDataSource;
  param_1[0x24] = (uint)&ghidra_vftable_SCRadioBrowseDataSource;
  param_1[0x25] = (uint)&ghidra_vftable_SCRadioBrowseDataSource;
  param_1[0x94] = (uint)&ghidra_vftable_SCRadioBrowseDataSource;
  param_1[0x95] = (uint)&ghidra_vftable_SCRadioBrowseDataSource;
  param_1[0x96] = (uint)&ghidra_vftable_SCRadioBrowseDataSource;
  piVar2 = (int *)((int *)param_1[0xa1]);

  if (param_1[0xa0] != 0) {
    if (piVar2 != (int *)0x0) {
      param_1[0xa0] = 0;
      param_1[0xa1] = 0;
      (**(code **)(*piVar2 + 8))(uVar1);
    }
    param_1[0xa0] = 0;
    piVar2 = (int *)((int *)0x0);
    param_1[0xa1] = 0;
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  if (piVar2 != (int *)0x0) {
    param_1[0xa0] = 0;
    param_1[0xa1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  thunk_FUN_102037c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x288);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1055ac10; body size 86 bytes.
#line 1 "ENTRY_1055ac10"

undefined4 * __thiscall Recovered_Bulk::FUN_1055ac10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
  param_1[6] = (uint)&ghidra_vftable_SCRadioPickCityBrowseItem;
  param_1[0xe] = (uint)&ghidra_vftable_SCRadioPickCityBrowseItem;
  param_1[0xf] = (uint)&ghidra_vftable_SCRadioPickCityBrowseItem;
  param_1[0x10] = (uint)&ghidra_vftable_SCRadioPickCityBrowseItem;
  param_1[0x11] = (uint)&ghidra_vftable_SCRadioPickCityBrowseItem;
  param_1[0x46] = (uint)&ghidra_vftable_SCRadioPickCityBrowseItem;
  thunk_FUN_10203d60();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x120);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1055cbe0; body size 267 bytes.
#line 1 "ENTRY_1055cbe0"

undefined4 * __stdcall FUN_1055cbe0(undefined4 *param_1)

{
 try {
  uint uVar1;
  SCLibrary *this_;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int **ppiVar5;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ppiVar5 = (int **)(&local_14);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar2 = (int *)((int *)((SCLibrary *)(this_))->getSCHousehold());
  local_1c = (int *)((int *)*piVar2);

  *piVar2 = (int)(0);
  if (local_1c == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*local_1c + 0xc))(ppiVar5,uVar1));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  piVar4 = (int *)((int *)0x0);
  piVar3 = (int *)((int *)0x0);
  local_18 = (int *)((int *)0x0);
  local_14 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_1c != (int *)0x0) {
    piVar3 = (int *)((int *)(**(code **)(*local_1c + 0xb4))(&local_1c));
    piVar4 = (int *)((int *)*piVar3);
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    *piVar3 = (int)(0);
    local_18 = (int *)(piVar4);
    if (piVar4 == (int *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      piVar3 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    local_14 = (int *)(piVar3);
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  *param_1 = (undefined4)(piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1055d1a0; body size 434 bytes.
#line 1 "ENTRY_1055d1a0"

int * __stdcall FUN_1055d1a0(int *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  SCLibrary *this_;
  int *piVar4;
  int *piVar5;
  SCIAction *pSVar6;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar3 = (int *)(operator_new(0x140));
  local_14 = (int *)(piVar3);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    *piVar3 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar3[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar3[2] = (int)(uint)&ghidra_vftable_SCIActionDelegate;
    piVar3[3] = 0;
    piVar3[4] = 0;
    *(undefined1 *)(piVar3 + 5) = 0;
    piVar3[6] = (int)(uint)&ghidra_vftable_RCPBrowseOperationCB;
    *piVar3 = (int)((int)(uint)&ghidra_vftable_SCRadioSetZIPAction);
    piVar3[2] = (int)(uint)&ghidra_vftable_SCRadioSetZIPAction;
    piVar3[6] = (int)(uint)&ghidra_vftable_SCRadioSetZIPAction;
    piVar3[7] = 0;
    piVar3[8] = 0;
    piVar3[9] = 0;
    piVar3[10] = 0;
    piVar3[0xb] = 0;

    piVar3[0xc] = 0;
    thunk_FUN_11202480(uVar2);
    piVar3[0x4d] = (int)(uint)&ghidra_vftable_RLocationNameExtractorCB;
    piVar3[0x4e] = (int)(piVar3 + 0xd);
    piVar3[0x4f] = 0x100;
    *(undefined1 *)(piVar3 + 0xd) = 0;
  }
  piVar5 = (int *)((int *)0x0);

  if (piVar3 != (int *)0x0) {
    piVar5 = (int *)(piVar3);
    if (*(code **)(*piVar3 + 0xc) != thunk_FUN_102f8990) {
      piVar5 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
    }
    (**(code **)(*piVar5 + 4))();
  }
  pSVar6 = (SCIAction *)((SCIAction *)&local_14);

  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar4 = (int *)((int *)((SCLibrary *)(this_))->createActionContextForAction(pSVar6));
  piVar1 = (int *)((int *)*piVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(piVar3));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  *param_1 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xb)));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 1055d490; body size 184 bytes.
#line 1 "ENTRY_1055d490"

int * __thiscall Recovered_Bulk::FUN_1055d490(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar3 = (int *)((int *)thunk_FUN_1020c230(&local_14));
  piVar1 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(uVar2));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (*(int **)(param_1 + 0x120) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x120) + 0x88))(piVar1);
  }
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 1055d710; body size 192 bytes.
#line 1 "ENTRY_1055d710"

undefined4 * __thiscall Recovered_Bulk::FUN_1055d710(undefined4 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  piVar2 = (int *)(operator_new(0x120));

  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    thunk_FUN_10200aa0(param_1 + 0xb8,param_1 + 0xb4,param_3,param_1);
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
    piVar2[6] = (int)(uint)&ghidra_vftable_SCRadioPickCityBrowseItem;
    piVar2[0xe] = (int)(uint)&ghidra_vftable_SCRadioPickCityBrowseItem;
    piVar2[0xf] = (int)(uint)&ghidra_vftable_SCRadioPickCityBrowseItem;
    piVar2[0x10] = (int)(uint)&ghidra_vftable_SCRadioPickCityBrowseItem;
    piVar2[0x11] = (int)(uint)&ghidra_vftable_SCRadioPickCityBrowseItem;
    piVar2[0x46] = (int)(uint)&ghidra_vftable_SCRadioPickCityBrowseItem;
  }

  *param_2 = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(uVar1);
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 1055dd20; body size 308 bytes.
#line 1 "ENTRY_1055dd20"

undefined4 * __stdcall FUN_1055dd20(undefined4 *param_1)

{
 try {
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (int *)(operator_new(0x14));

  if (local_14 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)thunk_FUN_103be5e0(uVar1));
  }

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }

  local_14 = (int *)((int *)0x0);
  if (piVar2 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  piVar4 = (int *)(operator_new(8));
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    *piVar4 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar4[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar4 = (int)((int)(uint)&ghidra_vftable_SCRadioSetZIPDescriptor);
    local_14 = (int *)(piVar4);
    if (*(code **)(*piVar4 + 0xc) == thunk_FUN_101da390) {
      (**(code **)(*piVar4 + 4))();
    }
    else {
      piVar5 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
      (**(code **)(*piVar5 + 4))();
    }
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  local_14 = (int *)(piVar4);
  thunk_FUN_103beae0(&local_14,0xffffffff);
  *param_1 = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1055eb60; body size 192 bytes.
#line 1 "ENTRY_1055eb60"

undefined4 * __stdcall FUN_1055eb60(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0x14));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_103be5e0(uVar1));
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }

  if (piVar3 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1055f7d0; body size 358 bytes.
#line 1 "ENTRY_1055f7d0"

undefined4 __thiscall Recovered_Bulk::FUN_1055f7d0(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  SCLibrary *this_;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  SCIOp *pSVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar2 = (int *)(param_2);


  uVar1 = (uint)(DAT_12126b84);

  if (param_2 != (int *)param_1[3]) {
    piVar4 = (int *)((int *)param_1[4]);
    if (piVar4 != (int *)0x0) {
      param_1[3] = 0;
      param_1[4] = 0;
      (**(code **)(*piVar4 + 8))(uVar1);
    }
    param_1[3] = (int)piVar2;
    if (piVar2 == (int *)0x0) {
      param_1[4] = 0;
    }
    else {
      piVar2 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
      param_1[4] = (int)piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  puVar7 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)param_1[7] != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)((undefined1 *)param_1[7]);
  }
  puVar8 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)param_1[6] != (undefined1 *)0x0) {
    puVar8 = (undefined1 *)((undefined1 *)param_1[6]);
  }
  thunk_FUN_1109f7f0(puVar8,puVar7);
  iVar3 = (int)(thunk_FUN_1109e300(puVar8,puVar7));
  if (iVar3 == 0) {

    return (undefined4)(0);
  }
  param_2 = (int *)(operator_new(0x48));

  if (param_2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)thunk_FUN_101b94f0(iVar3));
  }
  piVar4 = (int *)((int *)param_1[9]);

  if (piVar2 != (int *)(piVar4)) {
    piVar4 = (int *)((int *)param_1[10]);
    if (piVar4 != (int *)0x0) {
      param_1[9] = 0;
      param_1[10] = 0;
      (**(code **)(*piVar4 + 8))();
    }
    param_1[9] = (int)piVar2;
    if (piVar2 == (int *)0x0) {
      param_1[10] = 0;
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar2 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
      param_1[10] = (int)piVar2;
      (**(code **)(*piVar2 + 4))();
      piVar4 = (int *)((int *)param_1[9]);
    }
  }
  pSVar9 = (SCIOp *)((SCIOp *)&param_2);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  puVar5 = (undefined4 *)((undefined4 *)((SCLibrary *)(this_))->createSCRunAsyncIOOperationAction(pSVar9));

  uVar6 = (undefined4)((**(code **)(*param_1 + 0x20))(*puVar5,piVar4));

  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }

  return (undefined4)(uVar6);

 } catch (...) { }
}


// Reference entry 10560310; body size 76 bytes.
#line 1 "ENTRY_10560310"

void __fastcall FUN_10560310(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10562c70; body size 114 bytes.
#line 1 "ENTRY_10562c70"

undefined4 * __thiscall Recovered_Bulk::FUN_10562c70(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10562d30; body size 278 bytes.
#line 1 "ENTRY_10562d30"

undefined4 * __thiscall Recovered_Bulk::FUN_10562d30(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

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

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10563140; body size 193 bytes.
#line 1 "ENTRY_10563140"

undefined4 * __thiscall Recovered_Bulk::FUN_10563140(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:AVTransport:1","GetMediaInfo",uVar3,param_3
                     ,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetMediaInfoAIOOp);
  param_1[0x18] = (uint)&ghidra_vftable_RUpnpAVTGetMediaInfoAIOOp;
  param_1[0x11b] = (uint)&ghidra_vftable_RUpnpAVTGetMediaInfoAIOOp;
  param_1[0x35f4] = 0;
  *(undefined1 *)(param_1 + 0x35f5) = 0;
  *(undefined1 *)(param_1 + 0x36f5) = 0;
  *(undefined1 *)(param_1 + 0x37f5) = 0;
  *(undefined1 *)(param_1 + 0x3bf5) = 0;
  *(undefined1 *)(param_1 + 0x3cf5) = 0;
  *(undefined1 *)(param_1 + 0x40f5) = 0;
  *(undefined1 *)(param_1 + 0x41f5) = 0;
  *(undefined1 *)(param_1 + 0x42f5) = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 10563ec0; body size 374 bytes.
#line 1 "ENTRY_10563ec0"

undefined4 * __thiscall Recovered_Bulk::FUN_10563ec0(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  pvVar3 = (void *)(operator_new(0x25d0));

  if (pvVar3 == (void *)0x0) {
    iVar5 = (int)(0);
  }
  else {
    puVar6 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)((undefined1 *)*param_3);
    }
    puVar7 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar7 = (undefined1 *)((undefined1 *)*param_2);
    }
    uVar4 = (undefined4)(thunk_FUN_110b0460(1,puVar7,puVar6,uVar2));
    iVar5 = (int)(thunk_FUN_110dbdf0(uVar4,puVar7,puVar6));
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  puVar1 = (undefined4 *)(param_1 + 2);

  thunk_FUN_11240650();
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  param_1[6] = iVar5;
  if (iVar5 != 0) {
    thunk_FUN_1123fce0(iVar5 + 4);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpLookupMetadata);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpLookupMetadata);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10564600; body size 169 bytes.
#line 1 "ENTRY_10564600"

undefined4 * __thiscall Recovered_Bulk::FUN_10564600(undefined4 param_2,undefined4 param_3,int param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPlayMenuAddDescriptor);
  thunk_FUN_101ff8b0(uVar1);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  thunk_FUN_1145c250(param_1 + 2,param_2,0x401);
  thunk_FUN_1145c250((int)param_1 + 0x409,param_3,0x1001);
  if (param_4 != 0) {
    thunk_FUN_10204c50(param_4);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10564870; body size 169 bytes.
#line 1 "ENTRY_10564870"

undefined4 * __thiscall Recovered_Bulk::FUN_10564870(undefined4 param_2,undefined4 param_3,int param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPlayMenuPlayNextDescriptor);
  thunk_FUN_101ff8b0(uVar1);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  thunk_FUN_1145c250(param_1 + 2,param_2,0x401);
  thunk_FUN_1145c250((int)param_1 + 0x409,param_3,0x1001);
  if (param_4 != 0) {
    thunk_FUN_10204c50(param_4);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10565220; body size 76 bytes.
#line 1 "ENTRY_10565220"

void __fastcall FUN_10565220(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10565290; body size 76 bytes.
#line 1 "ENTRY_10565290"

void __fastcall FUN_10565290(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10565300; body size 76 bytes.
#line 1 "ENTRY_10565300"

void __fastcall FUN_10565300(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10565370; body size 76 bytes.
#line 1 "ENTRY_10565370"

void __fastcall FUN_10565370(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 105653e0; body size 76 bytes.
#line 1 "ENTRY_105653e0"

void __fastcall FUN_105653e0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10565450; body size 76 bytes.
#line 1 "ENTRY_10565450"

void __fastcall FUN_10565450(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 105654c0; body size 76 bytes.
#line 1 "ENTRY_105654c0"

void __fastcall FUN_105654c0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10565530; body size 76 bytes.
#line 1 "ENTRY_10565530"

void __fastcall FUN_10565530(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 105655a0; body size 76 bytes.
#line 1 "ENTRY_105655a0"

void __fastcall FUN_105655a0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10565610; body size 76 bytes.
#line 1 "ENTRY_10565610"

void __fastcall FUN_10565610(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10565680; body size 76 bytes.
#line 1 "ENTRY_10565680"

void __fastcall FUN_10565680(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 105656f0; body size 76 bytes.
#line 1 "ENTRY_105656f0"

void __fastcall FUN_105656f0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10565760; body size 76 bytes.
#line 1 "ENTRY_10565760"

void __fastcall FUN_10565760(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 105657d0; body size 68 bytes.
#line 1 "ENTRY_105657d0"

void __fastcall FUN_105657d0(int *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10565830; body size 68 bytes.
#line 1 "ENTRY_10565830"

void __fastcall FUN_10565830(int *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10565890; body size 68 bytes.
#line 1 "ENTRY_10565890"

void __fastcall FUN_10565890(int *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 105658f0; body size 68 bytes.
#line 1 "ENTRY_105658f0"

void __fastcall FUN_105658f0(int *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10565c90; body size 165 bytes.
#line 1 "ENTRY_10565c90"

void __fastcall FUN_10565c90(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddToQueueUIAction);
  param_1[2] = (uint)&ghidra_vftable_SCAddToQueueUIAction;
  thunk_FUN_10202e00(uVar2);
  piVar1 = (int *)((int *)param_1[7]);

  if (piVar1 != (int *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[4]);

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (uint)&ghidra_vftable_SCIObj;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 105667f0; body size 198 bytes.
#line 1 "ENTRY_105667f0"

void __fastcall FUN_105667f0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPlayNextUIAction);
  param_1[2] = (uint)&ghidra_vftable_SCPlayNextUIAction;
  thunk_FUN_10202e00(uVar2);
  piVar1 = (int *)((int *)param_1[10]);

  if (piVar1 != (int *)0x0) {
    param_1[9] = 0;
    param_1[10] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[7]);

  if (piVar1 != (int *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[4]);

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (uint)&ghidra_vftable_SCIObj;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10566bd0; body size 81 bytes.
#line 1 "ENTRY_10566bd0"

int * __thiscall Recovered_Bulk::FUN_10566bd0(int *param_2)
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


// Reference entry 10567360; body size 189 bytes.
#line 1 "ENTRY_10567360"

undefined4 * __thiscall Recovered_Bulk::FUN_10567360(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddToQueueUIAction);
  param_1[2] = (uint)&ghidra_vftable_SCAddToQueueUIAction;
  thunk_FUN_10202e00(uVar2);
  piVar1 = (int *)((int *)param_1[7]);

  if (piVar1 != (int *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[4]);

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (uint)&ghidra_vftable_SCIObj;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10567b50; body size 65 bytes.
#line 1 "ENTRY_10567b50"

undefined4 * __thiscall Recovered_Bulk::FUN_10567b50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPlayMenuAddDescriptor);
  thunk_FUN_10202e00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14a8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10567ca0; body size 65 bytes.
#line 1 "ENTRY_10567ca0"

undefined4 * __thiscall Recovered_Bulk::FUN_10567ca0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPlayMenuPlayNextDescriptor);
  thunk_FUN_10202e00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14a8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10567e80; body size 222 bytes.
#line 1 "ENTRY_10567e80"

undefined4 * __thiscall Recovered_Bulk::FUN_10567e80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPlayNextUIAction);
  param_1[2] = (uint)&ghidra_vftable_SCPlayNextUIAction;
  thunk_FUN_10202e00(uVar2);
  piVar1 = (int *)((int *)param_1[10]);

  if (piVar1 != (int *)0x0) {
    param_1[9] = 0;
    param_1[10] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[7]);

  if (piVar1 != (int *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[4]);

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (uint)&ghidra_vftable_SCIObj;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,200);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1056b440; body size 76 bytes.
#line 1 "ENTRY_1056b440"

void __fastcall FUN_1056b440(int param_1)

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


// Reference entry 1056b4a0; body size 149 bytes.
#line 1 "ENTRY_1056b4a0"

void __thiscall Recovered_Bulk::FUN_1056b4a0(int *param_2,undefined4 param_3)
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


// Reference entry 10573650; body size 445 bytes.
#line 1 "ENTRY_10573650"

undefined4 * __thiscall Recovered_Bulk::FUN_10573650(undefined4 *param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  int *piVar2;
  void *pvVar3;
  int *piVar4;
  SCLibrary *this_;
  undefined4 *puVar5;
  undefined4 uVar6;
  SCIAction *pSVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  piVar2 = (int *)(operator_new(0x20));

  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    pvVar3 = (void *)(operator_new(0x18f4));
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      uVar6 = (undefined4)(*(undefined4 *)(param_1 + 0x18b4));
      piVar4 = (int *)(*(int **)(param_1 + 0x18b8));
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(uVar6,piVar4,uVar1);
      }
      piVar4 = (int *)((int *)thunk_FUN_105640a0(param_3,param_1 + 8,param_1 + 0x409,param_1 + 0x80a,
                                         param_1 + 0x180c,param_1 + 0x1810,
                                         *(undefined4 *)(param_1 + 0x18ac),
                                         *(undefined1 *)(param_1 + 0x18b0),
                                         *(undefined1 *)(param_1 + 0x18b1),
                                         *(undefined1 *)(param_1 + 0x18b2),uVar6,piVar4));
    }
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar2[2] = (int)(uint)&ghidra_vftable_SCIActionDelegate;
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCCompoundAction);
    piVar2[2] = (int)(uint)&ghidra_vftable_SCCompoundAction;
    piVar2[3] = 0;
    piVar2[4] = 0;
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
    piVar2[5] = (int)piVar4;
    piVar2[6] = 0;
    if (piVar4 != (int *)0x0) {
      piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
      piVar2[6] = (int)piVar4;
      (**(code **)(*piVar4 + 4))();
    }
    *(undefined1 *)(piVar2 + 7) = 0;
  }
  piVar4 = (int *)((int *)0x0);

  if (piVar2 != (int *)0x0) {
    piVar4 = (int *)(piVar2);
    if (*(code **)(*piVar2 + 0xc) != thunk_FUN_102116d0) {
      piVar4 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
    }
    (**(code **)(*piVar4 + 4))();
  }
  pSVar7 = (SCIAction *)((SCIAction *)&param_3);

  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  puVar5 = (undefined4 *)((undefined4 *)((SCLibrary *)(this_))->createActionContextForAction(pSVar7));
  uVar6 = (undefined4)(*puVar5);
  *puVar5 = (undefined4)(0);
  *param_2 = (undefined4)(uVar6);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))(piVar2);
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10573880; body size 707 bytes.
#line 1 "ENTRY_10573880"

void __stdcall FUN_10573880(int *param_1,undefined4 param_2)

{
 try {
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 local_444 [4];
  int *local_434;
  int *local_430;
  int *local_42c;
  int *local_428;
  int local_424;
  int *local_420;
  int *local_41c;
  void *local_418;
  undefined1 *puStack_414;
  undefined4 local_410;
  undefined1 local_40c [1028];
  uint local_8;


  local_8 = (uint)(DAT_12126b84 ^ (uint)local_40c);

  local_428 = (int *)(param_1);
  local_41c = (int *)(param_1);
  iVar2 = (int)(thunk_FUN_10579010(param_2,0,local_8));
  if (iVar2 == 0) {
    *param_1 = (int)(0);
  }
  else {
    thunk_FUN_110bf210(0,local_40c,0x401);
    iVar7 = (int)(0);
    local_444[0] = 0;

    cVar1 = (char)(thunk_FUN_1113f860(0,"CurrentTrack",0,local_444));
    if (cVar1 != '\0') {
      iVar7 = (int)(thunk_FUN_111a2df0());
      iVar7 = (int)(iVar7 + 1);
    }
    local_41c = (int *)(operator_new(0xdc));
    *(unsigned char *)((char *)&local_410 + 0) = 1;
    if (local_41c == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(thunk_FUN_11140fc0(*(undefined4 *)(iVar2 + 0x2c),&DAT_1186d2ee,0));
    }
    *(unsigned char *)((char *)&local_410 + 0) = 0;
    thunk_FUN_11147440(0,local_40c,local_424 + 8,local_424 + 0x409,iVar7,1,0,0);
    piVar4 = (int *)(operator_new(0x48));
    *(unsigned char *)((char *)&local_410 + 0) = 2;
    local_41c = (int *)(piVar4);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      thunk_FUN_101b94f0(uVar3);
      *piVar4 = (int)((int)(uint)&ghidra_vftable_SCAddQueueOp);
      piVar4[2] = (int)(uint)&ghidra_vftable_SCAddQueueOp;
    }
    piVar6 = (int *)((int *)0x0);
    *(unsigned char *)((char *)&local_410 + 0) = 0;
    local_430 = (int *)((int *)0x0);
    local_434 = (int *)(piVar4);
    if (piVar4 != (int *)0x0) {
      piVar6 = (int *)(piVar4);
      if (*(code **)(*piVar4 + 0xc) != thunk_FUN_101bb8a0) {
        piVar6 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
      }
      local_430 = (int *)(piVar6);
      (**(code **)(*piVar6 + 4))();
    }
    *(unsigned char *)((char *)&local_410 + 0) = 3;
    piVar5 = (int *)(operator_new(200));
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)((int *)0x0);
    }
    else {
      *piVar5 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      piVar5[1] = 0;
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      piVar5[2] = (int)(uint)&ghidra_vftable_SCIActionDelegate;
      piVar5[3] = 0;
      piVar5[4] = 0;
      *(undefined1 *)(piVar5 + 5) = 0;
      *piVar5 = (int)((int)(uint)&ghidra_vftable_SCPlayNextUIAction);
      piVar5[2] = (int)(uint)&ghidra_vftable_SCPlayNextUIAction;
      *(unsigned char *)((char *)&local_410 + 0) = 5;
      piVar5[6] = (int)piVar4;
      piVar5[7] = 0;
      local_41c = (int *)(piVar5);
      if (piVar4 != (int *)0x0) {
        piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
        piVar5[7] = (int)piVar4;
        (**(code **)(*piVar4 + 4))();
      }
      *(undefined1 *)(piVar5 + 8) = 0;
      piVar5[9] = 0;
      piVar5[10] = 0;
      *(unsigned char *)((char *)&local_410 + 0) = 7;
      thunk_FUN_101ff8b0();
      *(unsigned char *)((char *)&local_410 + 0) = 8;
      if (local_424 + 0x140c != 0) {
        thunk_FUN_10204c50(local_424 + 0x140c);
      }
    }
    piVar4 = (int *)((int *)0x0);
    *(unsigned char *)((char *)&local_410 + 0) = 3;
    local_41c = (int *)((int *)0x0);
    local_420 = (int *)(piVar5);
    if (piVar5 != (int *)0x0) {
      piVar4 = (int *)(piVar5);
      if (*(code **)(*piVar5 + 0xc) != thunk_FUN_102f8990) {
        piVar4 = (int *)((int *)(**(code **)(*piVar5 + 0xc))());
      }
      local_41c = (int *)(piVar4);
      (**(code **)(*piVar4 + 4))();
    }
    *(unsigned char *)((char *)&local_410 + 0) = 9;
    piVar5 = (int *)((int *)thunk_FUN_104edc80(&local_42c,piVar5));
    *local_428 = (int)(0);
    iVar2 = (int)(*piVar5);
    *piVar5 = (int)(0);
    *local_428 = (int)(iVar2);
    *(unsigned char *)((char *)&local_410 + 0) = 10;
    if (local_42c != (int *)0x0) {
      (**(code **)(*local_42c + 8))();
    }
    *(unsigned char *)((char *)&local_410 + 0) = 0xb;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))();
    }
    local_410 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_410 + 1)) << 8 | (uint)(0xc)));
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))();
    }

    thunk_FUN_111a36f0();
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10574010; body size 522 bytes.
#line 1 "ENTRY_10574010"

void __thiscall Recovered_Bulk::FUN_10574010(undefined4 *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *local_420;
  int *local_41c;
  void *local_418;
  undefined1 *puStack_414;
  undefined4 local_410;
  undefined1 local_40c [1028];
  uint local_8;


  local_8 = (uint)(DAT_12126b84 ^ (uint)local_40c);

  local_41c = (int *)(param_1);
  iVar1 = (int)(thunk_FUN_10579010(param_3,0,local_8));
  if (iVar1 == 0) {
    *param_2 = (undefined4)(0);
  }
  else {
    thunk_FUN_110bf210(0,local_40c,0x401);
    local_420 = (int *)(operator_new(100));

    if (local_420 == (int *)0x0) {
      uVar2 = (undefined4)(0);
    }
    else {
      uVar2 = (undefined4)(thunk_FUN_11141c10(*(undefined4 *)(iVar1 + 0x2c)));
    }

    thunk_FUN_11147a80(0,local_40c,param_1 + 2,(int)param_1 + 0x409,&DAT_11881128);
    local_420 = (int *)(operator_new(0x48));

    if (local_420 == (int *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      piVar3 = (int *)((int *)thunk_FUN_101b94f0(uVar2));
    }
    piVar5 = (int *)((int *)0x0);

    if (piVar3 != (int *)0x0) {
      piVar5 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
      (**(code **)(*piVar5 + 4))();
    }

    local_420 = (int *)(operator_new(0x4d0));
    *(unsigned char *)((char *)&local_410 + 0) = 3;
    if (local_420 == (int *)0x0) {
      local_41c = (int *)((int *)0x0);
    }
    else {
      local_41c = (int *)((int *)thunk_FUN_10564f10(piVar3,param_1 + 2,param_3,1,(char)local_41c[0x52b],0,
                                            local_41c + 0x52a,local_41c + 0x503));
    }
    piVar3 = (int *)((int *)0x0);
    *(unsigned char *)((char *)&local_410 + 0) = 2;
    if (local_41c != (int *)0x0) {
      piVar3 = (int *)((int *)(**(code **)(*local_41c + 0xc))());
      (**(code **)(*piVar3 + 4))();
    }
    *(unsigned char *)((char *)&local_410 + 0) = 4;
    puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_104edc80(&local_420,local_41c));
    *param_2 = (undefined4)(0);
    uVar2 = (undefined4)(*puVar4);
    *puVar4 = (undefined4)(0);
    *param_2 = (undefined4)(uVar2);
    *(unsigned char *)((char *)&local_410 + 0) = 5;
    if (local_420 != (int *)0x0) {
      (**(code **)(*local_420 + 8))();
    }
    local_410 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_410 + 1)) << 8 | (uint)(6)));
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }

    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))();
    }
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 105760c0; body size 128 bytes.
#line 1 "ENTRY_105760c0"

void __fastcall FUN_105760c0(int param_1)

{
 try {
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_101f6530(&local_18,DAT_12126b84 );

  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);

  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 105761a0; body size 232 bytes.
#line 1 "ENTRY_105761a0"

void __thiscall Recovered_Bulk::FUN_105761a0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;

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

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10576a10; body size 451 bytes.
#line 1 "ENTRY_10576a10"

bool __thiscall Recovered_Bulk::FUN_10576a10(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  SCLibrary *pSVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar3 = (int *)(param_2);


  uVar2 = (uint)(DAT_12126b84);

  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar5 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar5 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar5 + 8))(uVar2);
    }
    *(int **)(param_1 + 0xc) = piVar3;
    if (piVar3 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
      *(int **)(param_1 + 0x10) = piVar3;
      (**(code **)(*piVar3 + 4))();
    }
  }

  pSVar4 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar5 = (int *)((int *)(**(code **)(*(int *)pSVar4 + 0x18))(&param_2));
  piVar3 = (int *)((int *)*piVar5);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar5 = (int)(0);
  if (piVar3 == (int *)0x0) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    piVar5 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0;
  piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0xd8))(&param_2,param_1 + 0x24));
  local_14 = (int *)((int *)*piVar3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  *piVar3 = (int)(0);
  if (local_14 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*local_14 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  puVar6 = (undefined4 *)((undefined4 *)(**(code **)(*local_14 + 0x3c))(&local_18));
  local_14 = (int *)((int *)*puVar6);
  *puVar6 = (undefined4)(0);
  piVar1 = (int *)(*(int **)(param_1 + 0x30));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *(int **)(param_1 + 0x2c) = local_14;
  if (local_14 == (int *)0x0) {
    uVar7 = (undefined4)(0);
  }
  else {
    uVar7 = (undefined4)((**(code **)(*local_14 + 0xc))());
  }
  *(undefined4 *)(param_1 + 0x30) = uVar7;
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(*(undefined4 *)(param_1 + 0x1c));
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xb)));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }

  return (bool)(piVar1 != (int *)0x0);

 } catch (...) { }
}


// Reference entry 105791b0; body size 320 bytes.
#line 1 "ENTRY_105791b0"

int __thiscall Recovered_Bulk::FUN_105791b0(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  undefined4 uVar2;
  
  thunk_FUN_1124ffa0("InstanceID",0);
  thunk_FUN_1124f350(param_2);
  iVar1 = (int)(param_1 + 0xd7d0);
  thunk_FUN_1124ff50("NrTracks");
  thunk_FUN_112504b0(iVar1);
  uVar2 = (undefined4)(0x400);
  iVar1 = (int)(param_1 + 0xd7d4);
  thunk_FUN_1124ff50("MediaDuration");
  thunk_FUN_112503c0(iVar1,uVar2);
  uVar2 = (undefined4)(0x400);
  iVar1 = (int)(param_1 + 0xdbd4);
  thunk_FUN_1124ff50("CurrentURI");
  thunk_FUN_112503c0(iVar1,uVar2);
  uVar2 = (undefined4)(0x1000);
  iVar1 = (int)(param_1 + 0xdfd4);
  thunk_FUN_1124ff50("CurrentURIMetaData");
  thunk_FUN_112503c0(iVar1,uVar2);
  uVar2 = (undefined4)(0x400);
  iVar1 = (int)(param_1 + 0xefd4);
  thunk_FUN_1124ff50("NextURI");
  thunk_FUN_112503c0(iVar1,uVar2);
  uVar2 = (undefined4)(0x1000);
  iVar1 = (int)(param_1 + 0xf3d4);
  thunk_FUN_1124ff50("NextURIMetaData");
  thunk_FUN_112503c0(iVar1,uVar2);
  uVar2 = (undefined4)(0x400);
  iVar1 = (int)(param_1 + 0x103d4);
  thunk_FUN_1124ff50("PlayMedium");
  thunk_FUN_112503c0(iVar1,uVar2);
  uVar2 = (undefined4)(0x400);
  iVar1 = (int)(param_1 + 0x107d4);
  thunk_FUN_1124ff50("RecordMedium");
  thunk_FUN_112503c0(iVar1,uVar2);
  uVar2 = (undefined4)(0x400);
  iVar1 = (int)(param_1 + 0x10bd4);
  thunk_FUN_1124ff50("WriteStatus");
  thunk_FUN_112503c0(iVar1,uVar2);
  return (int)(param_1);
}


// Reference entry 10579340; body size 69 bytes.
#line 1 "ENTRY_10579340"

undefined4 __thiscall Recovered_Bulk::FUN_10579340(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  int *piVar1;
  
  thunk_FUN_1124ffa0("InstanceID",0);
  thunk_FUN_1124f350(param_2);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("Speed",0));
  (**(code **)(*piVar1 + 0xc))(param_3);
  return (undefined4)(param_1);
}


// Reference entry 105793a0; body size 98 bytes.
#line 1 "ENTRY_105793a0"

undefined4 __thiscall Recovered_Bulk::FUN_105793a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  int *piVar1;
  
  thunk_FUN_1124ffa0("InstanceID",0);
  thunk_FUN_1124f350(param_2);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("CurrentURI",0));
  (**(code **)(*piVar1 + 0xc))(param_3);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("CurrentURIMetaData",0));
  (**(code **)(*piVar1 + 0xc))(param_3);
  return (undefined4)(param_1);
}


// Reference entry 1057b000; body size 76 bytes.
#line 1 "ENTRY_1057b000"

void __fastcall FUN_1057b000(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 1057b070; body size 76 bytes.
#line 1 "ENTRY_1057b070"

void __fastcall FUN_1057b070(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 1057b0e0; body size 76 bytes.
#line 1 "ENTRY_1057b0e0"

void __fastcall FUN_1057b0e0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 1057b2c0; body size 99 bytes.
#line 1 "ENTRY_1057b2c0"

void __fastcall FUN_1057b2c0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[0x1a]);

  if (piVar1 != (int *)0x0) {
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddPlaylistAction);
  thunk_FUN_1057b850();

  return;

 } catch (...) { }
}


// Reference entry 1057b7d0; body size 98 bytes.
#line 1 "ENTRY_1057b7d0"

void __fastcall FUN_1057b7d0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIStackedItemImpl);
  piVar1 = (int *)((int *)param_1[2]);

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 1057c010; body size 81 bytes.
#line 1 "ENTRY_1057c010"

int * __thiscall Recovered_Bulk::FUN_1057c010(int *param_2)
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


// Reference entry 1057c410; body size 120 bytes.
#line 1 "ENTRY_1057c410"

undefined4 * __thiscall Recovered_Bulk::FUN_1057c410(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[0x1a]);

  if (piVar1 != (int *)0x0) {
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddPlaylistAction);
  thunk_FUN_1057b850();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6c);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1057c9d0; body size 119 bytes.
#line 1 "ENTRY_1057c9d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1057c9d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIStackedItemImpl);
  piVar1 = (int *)((int *)param_1[2]);

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1057dec0; body size 161 bytes.
#line 1 "ENTRY_1057dec0"

int * __thiscall Recovered_Bulk::FUN_1057dec0(int *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined1 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_1057eb50(param_2,param_3);

  if ((((*param_2 != 0) && (*(int *)(param_1 + 0x54) != 0)) && (*(int *)(param_1 + 100) != 0)) &&
     (*(int *)(param_1 + 0x24) != 0)) {
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x1c) != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 0x1c));
    }
    thunk_FUN_11128910(puVar2,uVar1);
    thunk_FUN_11128570(puVar2);
    thunk_FUN_103b70a0();
    *(undefined1 *)(param_1 + 0x20) = 1;
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 1057fb60; body size 143 bytes.
#line 1 "ENTRY_1057fb60"

int * __thiscall Recovered_Bulk::FUN_1057fb60(int *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined1 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_1057eb50(param_2,param_3);

  if (((*param_2 != 0) && (*(int *)(param_1 + 0x54) != 0)) && (*(int *)(param_1 + 0x24) != 0)) {
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x1c) != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 0x1c));
    }
    thunk_FUN_11128910(puVar2,uVar1);
    thunk_FUN_11128570(puVar2);
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 10580350; body size 900 bytes.
#line 1 "ENTRY_10580350"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void __thiscall Recovered_Bulk::FUN_10580350(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  char *pcVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 *local_1018;
  void *local_1014;
  undefined1 *puStack_1010;
  undefined4 local_100c;
  undefined1 local_1008 [1024];
  undefined1 local_c08 [1024];
  undefined1 local_808 [1024];
  undefined1 local_408 [1024];
  uint local_8;


  uVar2 = (uint)(DAT_12126b84 ^ (uint)local_1008);

  local_1018 = (undefined4 *)(param_2);
  local_8 = (uint)(uVar2);
  iVar3 = (int)(thunk_FUN_110828b0(uVar2));
  iVar3 = (int)((*(code *)**(undefined4 **)(iVar3 + 0x1c))());
  if (iVar3 != 0) {
    iVar3 = (int)(thunk_FUN_110cb9c0());
    if (iVar3 != 0) {
      if (*(char *)(param_1 + 0x60) == '\0') {
        local_1018 = (undefined4 *)(operator_new(0xd7d0));

        if (local_1018 == (undefined4 *)0x0) {
          puVar12 = (undefined4 *)((undefined4 *)0x0);
        }
        else {
          iVar3 = (int)(thunk_FUN_110cb9c0());
          iVar3 = (int)(*(int *)(iVar3 + 0x2c));
          uVar6 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar3 + 4) + 4) + 4 + iVar3) + 0x48))());
          uVar17 = (undefined4)(0);
          uVar16 = (undefined4)(0);
          iVar1 = (int)(*(int *)(*(int *)(iVar3 + 4) + 4));
          uVar15 = (undefined4)(2000);
          uVar14 = (undefined4)(10000);
          uVar7 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar3 + 4) + 4) + 4 + iVar3) + 0x50))
                            (10000,2000,0,0));
          pcVar13 = (char *)("UpdateObject");
          uVar8 = (undefined4)((**(code **)(*(int *)(iVar3 + iVar1 + 4) + 0x68))("UpdateObject",uVar7));
          puVar12 = (undefined4 *)(local_1018);
          thunk_FUN_111c0760(uVar6,uVar8,pcVar13,uVar7,uVar14,uVar15,uVar16,uVar17);
          *puVar12 = (undefined4)((uint)&ghidra_vftable_RUpnpCDUpdateObjectAIOOp);
          puVar12[0x18] = (uint)&ghidra_vftable_RUpnpCDUpdateObjectAIOOp;
          puVar12[0x11b] = (uint)&ghidra_vftable_RUpnpCDUpdateObjectAIOOp;
        }

        thunk_FUN_112740e0(local_408,0x400);

        thunk_FUN_112740e0(local_808,0x400);
        *(unsigned char *)((char *)&local_100c + 0) = 3;
        puVar10 = (undefined1 *)(&DAT_1186d2ee);
        if (*(undefined1 **)(param_1 + 0x14) != (undefined1 *)0x0) {
          puVar10 = (undefined1 *)(*(undefined1 **)(param_1 + 0x14));
        }
        thunk_FUN_11274b50("dc:title",puVar10);
        puVar10 = (undefined1 *)(&DAT_1186d2ee);
        if (*(undefined1 **)(param_1 + 0x10) != (undefined1 *)0x0) {
          puVar10 = (undefined1 *)(*(undefined1 **)(param_1 + 0x10));
        }
        thunk_FUN_11274b50("dc:title",puVar10);
        thunk_FUN_11244c70(local_c08,0x400);
        *(unsigned char *)((char *)&local_100c + 0) = 4;
        thunk_FUN_11244c70(local_1008,0x400);
        *(unsigned char *)((char *)&local_100c + 0) = 5;
        thunk_FUN_11244fe0(local_408);
        thunk_FUN_11244fe0(local_808);
        puVar10 = (undefined1 *)(&DAT_1186d2ee);
        if (*(undefined1 **)(param_1 + 0x18) != (undefined1 *)0x0) {
          puVar10 = (undefined1 *)(*(undefined1 **)(param_1 + 0x18));
        }
        piVar4 = (int *)((int *)thunk_FUN_1124ffa0("ObjectID",0));
        (**(code **)(*piVar4 + 0xc))(puVar10);
        piVar4 = (int *)((int *)thunk_FUN_1124ffa0("CurrentTagValue",0));
        (**(code **)(*piVar4 + 0xc))(local_c08);
        piVar4 = (int *)((int *)thunk_FUN_1124ffa0("NewTagValue",0));
        (**(code **)(*piVar4 + 0xc))(local_1008);
        pvVar5 = (void *)(operator_new(0x48));
        *(unsigned char *)((char *)&local_100c + 0) = 6;
        if (pvVar5 == (void *)0x0) {
          piVar4 = (int *)((int *)0x0);
        }
        else {
          piVar4 = (int *)((int *)thunk_FUN_101b94f0(puVar12));
        }
        local_100c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_100c + 1)) << 8 | (uint)(5)));
        *param_2 = (undefined4)(piVar4);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 4))();
        }
        thunk_FUN_11244ed0();
        thunk_FUN_11244ed0();
        thunk_FUN_112741b0();
        thunk_FUN_112741b0();
      }
      else {
        puVar10 = (undefined1 *)(&DAT_1186d2ee);
        if (*(undefined1 **)(param_1 + 0x18) != (undefined1 *)0x0) {
          puVar10 = (undefined1 *)(*(undefined1 **)(param_1 + 0x18));
        }
        puVar11 = (undefined1 *)(&DAT_1186d2ee);
        if (*(undefined1 **)(param_1 + 0x1c) != (undefined1 *)0x0) {
          puVar11 = (undefined1 *)(*(undefined1 **)(param_1 + 0x1c));
        }
        puVar9 = (undefined1 *)(&DAT_1186d2ee);
        if (*(undefined1 **)(param_1 + 0x10) != (undefined1 *)0x0) {
          puVar9 = (undefined1 *)(*(undefined1 **)(param_1 + 0x10));
        }
        thunk_FUN_112af4e0("SCRenamePlaylistAction",1,"Rename PL.  newName:[%s] CPUDN:[%s] OID:[%s]"
                           ,puVar9,puVar11,puVar10);
        thunk_FUN_110828b0(uVar2);
        puVar10 = (undefined1 *)(&DAT_1186d2ee);
        if (*(undefined1 **)(param_1 + 0x1c) != (undefined1 *)0x0) {
          puVar10 = (undefined1 *)(*(undefined1 **)(param_1 + 0x1c));
        }
        piVar4 = (int *)((int *)thunk_FUN_11093530(puVar10,0));
        (**(code **)(*piVar4 + 0x28))();
        local_1018 = (undefined4 *)((undefined4 *)0x0);
        puVar10 = (undefined1 *)(&DAT_1186d2ee);
        if (*(undefined1 **)(param_1 + 0x10) != (undefined1 *)0x0) {
          puVar10 = (undefined1 *)(*(undefined1 **)(param_1 + 0x10));
        }
        puVar11 = (undefined1 *)(&DAT_1186d2ee);
        if (*(undefined1 **)(param_1 + 0x18) != (undefined1 *)0x0) {
          puVar11 = (undefined1 *)(*(undefined1 **)(param_1 + 0x18));
        }
        thunk_FUN_111de8a0(puVar11,puVar10,&local_1018);
        pvVar5 = (void *)(operator_new(0x48));

        if (pvVar5 == (void *)0x0) {
          piVar4 = (int *)((int *)0x0);
        }
        else {
          piVar4 = (int *)((int *)thunk_FUN_101b94f0(local_1018));
        }

        *param_2 = (undefined4)(piVar4);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 4))();
        }
      }
      goto LAB_105806ad;
    }
  }
  *param_2 = (undefined4)(0);
LAB_105806ad:

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10581410; body size 423 bytes.
#line 1 "ENTRY_10581410"

int * __thiscall Recovered_Bulk::FUN_10581410(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  void *pvVar4;
  int *piVar5;
  SCLibrary *this_;
  int *piVar6;
  SCIAction *pSVar7;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar3 = (int *)(operator_new(0x20));

  local_14 = (int *)(piVar3);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    pvVar4 = (void *)(operator_new(0x28));
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    if (pvVar4 == (void *)0x0) {
      piVar5 = (int *)((int *)0x0);
    }
    else {
      piVar5 = (int *)((int *)thunk_FUN_1057a0e0(param_1 + 8,param_1 + 0xc,0,*(undefined1 *)(param_1 + 0x10)
                                         ,param_1 + 0x14));
    }
    *piVar3 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar3[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar3[2] = (int)(uint)&ghidra_vftable_SCIActionDelegate;
    *piVar3 = (int)((int)(uint)&ghidra_vftable_SCCompoundAction);
    piVar3[2] = (int)(uint)&ghidra_vftable_SCCompoundAction;
    piVar3[3] = 0;
    piVar3[4] = 0;
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
    piVar3[5] = (int)piVar5;
    piVar3[6] = 0;
    if (piVar5 != (int *)0x0) {
      piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0xc))(uVar2));
      piVar3[6] = (int)piVar5;
      (**(code **)(*piVar5 + 4))();
    }
    *(undefined1 *)(piVar3 + 7) = 0;
  }
  piVar5 = (int *)((int *)0x0);

  if (piVar3 != (int *)0x0) {
    piVar5 = (int *)(piVar3);
    if (*(code **)(*piVar3 + 0xc) != thunk_FUN_102116d0) {
      piVar5 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
    }
    (**(code **)(*piVar5 + 4))();
  }
  pSVar7 = (SCIAction *)((SCIAction *)&local_14);

  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar6 = (int *)((int *)((SCLibrary *)(this_))->createActionContextForAction(pSVar7));
  piVar1 = (int *)((int *)*piVar6);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  *piVar6 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(piVar3));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 105823b0; body size 506 bytes.
#line 1 "ENTRY_105823b0"

undefined4 * __thiscall Recovered_Bulk::FUN_105823b0(undefined4 *param_2,uint param_3)
{
  int param_1 = (int )this;
 try {
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar5 = (uint)(DAT_12126b84);
  if (*(uint *)(param_1 + 200) < param_3) {
    *param_2 = (undefined4)(0);
    return (undefined4 *)(param_2);
  }

  piVar6 = (int *)(operator_new(0x148));

  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)((int *)0x0);
  }
  else {
    uVar1 = (undefined1)(*(undefined1 *)(param_1 + 0x2a0));
    piVar2 = (int *)(*(int **)(param_1 + 0x29c));
    piVar7 = (int *)(*(int **)(param_1 + 0x298));
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(uVar5);
    }
    iVar3 = (int)(*(int *)(param_1 + 0x294));
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    thunk_FUN_10200aa0(param_1 + 0xb8,param_1 + 0xb4,param_3,param_1);
    piVar6[0x48] = (int)(uint)&ghidra_vftable_SCIStackedItemImpl;
    piVar6[0x49] = 0;
    piVar6[0x4a] = 0;
    piVar6[0x4b] = iVar3;
    *piVar6 = (int)((int)(uint)&ghidra_vftable_SCPlaylistsBrowseItem);
    piVar6[6] = (int)(uint)&ghidra_vftable_SCPlaylistsBrowseItem;
    piVar6[0xe] = (int)(uint)&ghidra_vftable_SCPlaylistsBrowseItem;
    piVar6[0xf] = (int)(uint)&ghidra_vftable_SCPlaylistsBrowseItem;
    piVar6[0x10] = (int)(uint)&ghidra_vftable_SCPlaylistsBrowseItem;
    piVar6[0x11] = (int)(uint)&ghidra_vftable_SCPlaylistsBrowseItem;
    piVar6[0x46] = (int)(uint)&ghidra_vftable_SCPlaylistsBrowseItem;
    piVar6[0x48] = (int)(uint)&ghidra_vftable_SCPlaylistsBrowseItem;
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    piVar6[0x4c] = (int)piVar7;
    piVar6[0x4d] = (int)piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    piVar6[0x4e] = 0;
    piVar6[0x4f] = 0;
    *(undefined1 *)(piVar6 + 0x50) = uVar1;
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    if (piVar7 != (int *)piVar6[0x49]) {
      piVar4 = (int *)((int *)piVar6[0x4a]);
      if (piVar4 != (int *)0x0) {
        piVar6[0x49] = 0;
        piVar6[0x4a] = 0;
        (**(code **)(*piVar4 + 8))();
      }
      piVar6[0x49] = (int)piVar7;
      if (piVar7 == (int *)0x0) {
        piVar6[0x4a] = 0;
      }
      else {
        piVar7 = (int *)((int *)(**(code **)(*piVar7 + 0xc))());
        piVar6[0x4a] = (int)piVar7;
        (**(code **)(*piVar7 + 4))();
      }
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))();
    }
  }

  *param_2 = (undefined4)(piVar6);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 105855b0; body size 158 bytes.
#line 1 "ENTRY_105855b0"

void __fastcall FUN_105855b0(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 auStack_2a0 [8];
  int iStack_298;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)auStack_2a0);
  if ((char)param_1[0x50] != '\0') {
    cVar1 = (char)((**(code **)(*param_1 + 0x9c))());
    if (cVar1 != '\0') {
      iVar2 = (int)((**(code **)(param_1[0xe] + 0x14))(0));
      puVar3 = (undefined1 *)(&DAT_1186d2ee);
      if (*(undefined1 **)(iVar2 + 0xc) != (undefined1 *)0x0) {
        puVar3 = (undefined1 *)(*(undefined1 **)(iVar2 + 0xc));
      }
      thunk_FUN_111cb020(puVar3,0);
      thunk_FUN_111cfc30(auStack_2a0);
      if ((iStack_298 == 8) || (iStack_298 == 0x10)) {
        thunk_FUN_1148ac28();
        return;
      }
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10585690; body size 133 bytes.
#line 1 "ENTRY_10585690"

void __fastcall FUN_10585690(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uStack_2a4;
  undefined1 auStack_2a0 [668];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)auStack_2a0);
  if (*(char *)(param_1 + 0x140) == '\0') {
    uStack_2a4 = (undefined4)(0x105856bd);
    thunk_FUN_1148ac28();
    return;
  }
  uStack_2a4 = (undefined4)(0);
  iVar1 = (int)((**(code **)(*(int *)(param_1 + 0x38) + 0x14))());
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(iVar1 + 0xc) != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)(*(undefined1 **)(iVar1 + 0xc));
  }
  thunk_FUN_111cb020(puVar2,0);
  thunk_FUN_111cfc30(&uStack_2a4);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10585de0; body size 252 bytes.
#line 1 "ENTRY_10585de0"

int __thiscall Recovered_Bulk::FUN_10585de0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  thunk_FUN_1124ffa0("InstanceID",0);
  thunk_FUN_1124f350(param_2);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("Title",0));
  (**(code **)(*piVar1 + 0xc))(param_3);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("EnqueuedURI",0));
  (**(code **)(*piVar1 + 0xc))(param_3);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("EnqueuedURIMetaData",0));
  (**(code **)(*piVar1 + 0xc))(param_3);
  iVar2 = (int)(param_1 + 0xd7d0);
  thunk_FUN_1124ff50("NumTracksAdded");
  thunk_FUN_112504b0(iVar2);
  iVar2 = (int)(param_1 + 0xd7d4);
  thunk_FUN_1124ff50("NewQueueLength");
  thunk_FUN_112504b0(iVar2);
  uVar3 = (undefined4)(0x400);
  iVar2 = (int)(param_1 + 0xd7d8);
  thunk_FUN_1124ff50("AssignedObjectID");
  thunk_FUN_112503c0(iVar2,uVar3);
  iVar2 = (int)(param_1 + 0xdbd8);
  thunk_FUN_1124ff50("NewUpdateID");
  thunk_FUN_112504b0(iVar2);
  return (int)(param_1);
}


// Reference entry 10585f50; body size 98 bytes.
#line 1 "ENTRY_10585f50"

undefined4 __thiscall Recovered_Bulk::FUN_10585f50(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("ObjectID",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("CurrentTagValue",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("NewTagValue",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  return (undefined4)(param_1);
}


// Reference entry 10586420; body size 114 bytes.
#line 1 "ENTRY_10586420"

undefined4 * __thiscall Recovered_Bulk::FUN_10586420(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10586510; body size 278 bytes.
#line 1 "ENTRY_10586510"

undefined4 * __thiscall Recovered_Bulk::FUN_10586510(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

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

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105877c0; body size 268 bytes.
#line 1 "ENTRY_105877c0"

undefined4 * __thiscall Recovered_Bulk::FUN_105877c0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_10200aa0(param_2,param_3,param_4,param_5);

  thunk_FUN_11240650(uVar1);
  param_1[0x48] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFavoritesBrowseItem);
  param_1[6] = (uint)&ghidra_vftable_SCFavoritesBrowseItem;
  param_1[0xe] = (uint)&ghidra_vftable_SCFavoritesBrowseItem;
  param_1[0xf] = (uint)&ghidra_vftable_SCFavoritesBrowseItem;
  param_1[0x10] = (uint)&ghidra_vftable_SCFavoritesBrowseItem;
  param_1[0x11] = (uint)&ghidra_vftable_SCFavoritesBrowseItem;
  param_1[0x46] = (uint)&ghidra_vftable_SCFavoritesBrowseItem;
  param_1[0x48] = (uint)&ghidra_vftable_SCFavoritesBrowseItem;
  param_1[0x49] = 0;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_101ff8b0();
  *(undefined1 *)(param_1 + 0x71) = 0;
  param_1[0x72] = 0xffffffff;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x73] = (uint)&ghidra_vftable_RControlAIOOpRef;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x76] = (uint)&ghidra_vftable_RControlAIOOpRef;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10587d70; body size 292 bytes.
#line 1 "ENTRY_10587d70"

undefined4 * __thiscall Recovered_Bulk::FUN_10587d70(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 *puVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  puVar1 = (undefined4 *)(param_1 + 2);

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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAddFavorites);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpAddFavorites);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105881e0; body size 76 bytes.
#line 1 "ENTRY_105881e0"

void __fastcall FUN_105881e0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10588250; body size 76 bytes.
#line 1 "ENTRY_10588250"

void __fastcall FUN_10588250(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 105882c0; body size 76 bytes.
#line 1 "ENTRY_105882c0"

void __fastcall FUN_105882c0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10588330; body size 76 bytes.
#line 1 "ENTRY_10588330"

void __fastcall FUN_10588330(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10588c80; body size 81 bytes.
#line 1 "ENTRY_10588c80"

int * __thiscall Recovered_Bulk::FUN_10588c80(int *param_2)
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


// Reference entry 10588da0; body size 144 bytes.
#line 1 "ENTRY_10588da0"

int * __thiscall Recovered_Bulk::FUN_10588da0(int *param_2)
{
  int *param_1 = (int *)this;
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
    iVar1 = (int)(param_2[3]);
    param_2[3] = 0;
    param_1[3] = iVar1;
  }
  return (int *)(param_1);
}


// Reference entry 10589b30; body size 123 bytes.
#line 1 "ENTRY_10589b30"

void __thiscall Recovered_Bulk::FUN_10589b30(int *param_2)
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
  return;
}


// Reference entry 10589c30; body size 76 bytes.
#line 1 "ENTRY_10589c30"

void __fastcall FUN_10589c30(int param_1)

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


// Reference entry 10589c90; body size 149 bytes.
#line 1 "ENTRY_10589c90"

void __thiscall Recovered_Bulk::FUN_10589c90(int *param_2,undefined4 param_3)
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


// Reference entry 1058a0c0; body size 78 bytes.
#line 1 "ENTRY_1058a0c0"

void __thiscall Recovered_Bulk::FUN_1058a0c0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)
{
  int param_1 = (int )this;
  uint *puVar1;
  
  thunk_FUN_10207fd0(param_2,param_3,param_4,param_5,param_6);
  puVar1 = (uint *)((uint *)(**(int **)(param_1 + 0x104) + (*(uint *)(param_1 + 0x108) >> 5) * 4));
  *puVar1 = (uint)(*puVar1 & ~(1 << (*(uint *)(param_1 + 0x108) & 0x1f)));
  (**(code **)(*(int *)(param_1 + -0x118) + 0xf4))();
  return;
}


// Reference entry 1058a680; body size 72 bytes.
#line 1 "ENTRY_1058a680"

uint __fastcall FUN_1058a680(int param_1)

{
  uint in_EAX;
  
  if (*(char *)(param_1 + 0x1c4) != '\0') {
    in_EAX = (uint)(thunk_FUN_10219a00(param_1 + 0x128));
    if (((char)in_EAX == '\0') &&
       (in_EAX = 1 << ((byte)*(uint *)(param_1 + 0x220) & 0x1f),
       (*(uint *)(**(int **)(param_1 + 0x21c) + (*(uint *)(param_1 + 0x220) >> 5) * 4) & in_EAX) !=
       0)) {
      return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
    }
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 1058bf80; body size 558 bytes.
#line 1 "ENTRY_1058bf80"

void FUN_1058bf80(undefined4 *param_1,undefined4 *param_2)

{
 try {
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  void *local_290;
  undefined1 *puStack_28c;
  int local_288;
  char local_284 [636];
  uint local_8;
  
  local_288 = (int)(-1);

  local_8 = (uint)(DAT_12126b84 ^ (uint)local_284);

  iVar2 = (int)(thunk_FUN_110828b0(local_8));
  iVar2 = (int)((*(code *)**(undefined4 **)(iVar2 + 0x1c))());
  if (iVar2 != 0) {
    thunk_FUN_112740e0(local_284,0x27b);

    thunk_FUN_11274a10("<DIDL-Lite xmlns:dc=\"http://purl.org/dc/elements/1.1/\"    xmlns:upnp=\"urn:schemas-upnp-org:metadata-1-0/upnp/\"    xmlns:r=\"urn:schemas-rinconnetworks-com:metadata-1-0/\"    xmlns=\"urn:schemas-upnp-org:metadata-1-0/DIDL-Lite/\">    <item>"
                       ,0xeb);
    pcVar3 = (char *)((char *)param_2[0xb]);
    if (((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) &&
       (pcVar3 = (char *)*param_2, pcVar3 == (char *)0x0)) {
      pcVar3 = (char *)("");
    }
    thunk_FUN_11274b50("dc:title",pcVar3);
    thunk_FUN_11274a10("    </item>\n</DIDL-Lite>",0x18);
    pcVar3 = (char *)(_strdup(local_284));
    thunk_FUN_112740e0(local_284,0x27b);
    thunk_FUN_112741b0();
    thunk_FUN_11274a10("<DIDL-Lite xmlns:dc=\"http://purl.org/dc/elements/1.1/\"    xmlns:upnp=\"urn:schemas-upnp-org:metadata-1-0/upnp/\"    xmlns:r=\"urn:schemas-rinconnetworks-com:metadata-1-0/\"    xmlns=\"urn:schemas-upnp-org:metadata-1-0/DIDL-Lite/\">    <item>"
                       ,0xeb);
    puVar8 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      puVar8 = (undefined1 *)((undefined1 *)*param_1);
    }
    thunk_FUN_11274b50("dc:title",puVar8);
    thunk_FUN_11274a10("    </item>\n</DIDL-Lite>",0x18);
    puVar4 = (undefined4 *)(operator_new(0xd7d0));
    *(unsigned char *)((char *)&local_288 + 0) = 1;
    if (puVar4 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_110cb9c0());
      iVar2 = (int)(*(int *)(iVar2 + 0x2c));
      uVar5 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x48))());
      uVar13 = (undefined4)(0);
      uVar12 = (undefined4)(0);
      iVar1 = (int)(*(int *)(*(int *)(iVar2 + 4) + 4));
      uVar11 = (undefined4)(2000);
      uVar10 = (undefined4)(2000);
      uVar6 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x50))
                        (2000,2000,0,0));
      pcVar9 = (char *)("UpdateObject");
      uVar7 = (undefined4)((**(code **)(*(int *)(iVar2 + iVar1 + 4) + 0x68))("UpdateObject",uVar6));
      thunk_FUN_111c0760(uVar5,uVar7,pcVar9,uVar6,uVar10,uVar11,uVar12,uVar13);
      *puVar4 = (undefined4)((uint)&ghidra_vftable_RUpnpCDUpdateObjectAIOOp);
      puVar4[0x18] = (uint)&ghidra_vftable_RUpnpCDUpdateObjectAIOOp;
      puVar4[0x11b] = (uint)&ghidra_vftable_RUpnpCDUpdateObjectAIOOp;
    }
    local_288 = (int)((uint)*(unsigned short *)((char *)&local_288 + 1) << 8);
    puVar8 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)param_2[3] != (undefined1 *)0x0) {
      puVar8 = (undefined1 *)((undefined1 *)param_2[3]);
    }
    thunk_FUN_10585f50(puVar8,pcVar3,local_284);
    free(pcVar3);
    thunk_FUN_112741b0();
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 1058d160; body size 192 bytes.
#line 1 "ENTRY_1058d160"

undefined4 * __stdcall FUN_1058d160(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0x14));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_103be5e0(uVar1));
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }

  if (piVar3 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1058d260; body size 230 bytes.
#line 1 "ENTRY_1058d260"

void __thiscall Recovered_Bulk::FUN_1058d260(uint param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  int iVar2;
  undefined1 local_a0 [156];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_a0);
  if (((char)param_1[0x71] == '\0') || (cVar1 = thunk_FUN_10219a00(param_1 + 0x4a), cVar1 != '\0'))
  {
    thunk_FUN_1148ac28();
    return;
  }
  if ((param_2 != 0) && ((uint)(param_1[99] - param_1[0x62] >> 2) < param_2)) {
    thunk_FUN_1148ac28();
    return;
  }
  iVar2 = (int)(thunk_FUN_1020b1d0(param_2));
  if (iVar2 == 7) {
    (**(code **)(*param_1 + 0xec))(local_a0);
    thunk_FUN_10202e00();
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1058d390; body size 228 bytes.
#line 1 "ENTRY_1058d390"

void __thiscall Recovered_Bulk::FUN_1058d390(uint param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  int iVar2;
  undefined1 local_a0 [156];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_a0);
  if (((((*(uint *)(*(int *)param_1[0x87] + ((uint)param_1[0x88] >> 5) * 4) &
         1 << ((byte)param_1[0x88] & 0x1f)) != 0) && ((char)param_1[0x71] != '\0')) &&
      (cVar1 = thunk_FUN_10219a00(param_1 + 0x4a), cVar1 == '\0')) &&
     (((param_2 == 0 || (param_2 <= (uint)(param_1[99] - param_1[0x62] >> 2))) &&
      (iVar2 = thunk_FUN_1020b1d0(param_2), iVar2 == 7)))) {
    (**(code **)(*param_1 + 0xec))(local_a0);
    thunk_FUN_10202e00();
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1058ded0; body size 202 bytes.
#line 1 "ENTRY_1058ded0"

undefined4 __thiscall Recovered_Bulk::FUN_1058ded0(undefined4 param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar3 = (int *)((int *)createSCActionFilterer());
  piVar1 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(uVar2));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  puVar4 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0xa0))(&local_18));
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x14))(param_2,*puVar4,param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined4)(param_2);

 } catch (...) { }
}


// Reference entry 1058e840; body size 143 bytes.
#line 1 "ENTRY_1058e840"

undefined4 FUN_1058e840(void)

{
 try {
  int *piVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 extraout_var;
  undefined2 uVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (undefined2)(0x3eb);
  piVar1 = (int *)((int *)thunk_FUN_104ea590(DAT_12126b84 ));
  piVar5 = (int *)((int *)0x0);
  uVar2 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    piVar5 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
    uVar2 = (undefined4)((**(code **)(*piVar5 + 4))());
  }

  if (piVar1 != (int *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_104ea520());
    uVar4 = (undefined2)((undefined2)uVar2);
  }
  uVar3 = (undefined2)((undefined2)((uint)uVar2 >> 0x10));

  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
    uVar3 = (undefined2)(extraout_var);
  }

  return (undefined4)(((uint)(uVar3) << 16 | (uint)(uVar4)));

 } catch (...) { }
}


// Reference entry 10590fb0; body size 1650 bytes.
#line 1 "ENTRY_10590fb0"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void __thiscall Recovered_Bulk::FUN_10590fb0(int param_2,int param_3)
{
  int param_1 = (int )this;
 try {
  uint3 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  int *piVar16;
  char *pcVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int local_183c;
  undefined1 *local_1838;
  int *local_1830;
  int *local_182c;
  int *local_1828;
  int local_1824;
  uint local_1820;
  void *local_181c;
  undefined1 *puStack_1818;
  int local_1814;
  undefined1 local_1810 [3076];
  undefined1 local_c0c [3076];
  uint local_8;
  
  local_1814 = (int)(-1);

  local_8 = (uint)(DAT_12126b84 ^ (uint)local_1810);

  uVar13 = (uint)(0);

  local_1824 = (int)(param_3);
  if ((((*(int *)(param_1 + 0x1d4) == 0) && (iVar2 = thunk_FUN_110828b0(local_8), iVar2 != 0)) &&
      (iVar2 = (*(code *)**(undefined4 **)(iVar2 + 0x1c))(), iVar2 != 0)) &&
     (iVar2 = thunk_FUN_110cb9c0(), iVar2 != 0)) {
    iVar2 = (int)(thunk_FUN_110cb9c0());
    iVar2 = (int)(*(int *)(iVar2 + 0x2c));
    if (iVar2 != 0) {
      thunk_FUN_112740e0(local_c0c,0xc01);
      *(unsigned char *)((char *)&local_1814 + 0) = 0;
      *(unsigned short *)((char *)&local_1814 + 1) = 0;
      thunk_FUN_11274a10("<DIDL-Lite xmlns:dc=\"http://purl.org/dc/elements/1.1/\"    xmlns:upnp=\"urn:schemas-upnp-org:metadata-1-0/upnp/\"    xmlns:r=\"urn:schemas-rinconnetworks-com:metadata-1-0/\"    xmlns=\"urn:schemas-upnp-org:metadata-1-0/DIDL-Lite/\">    <item>"
                         ,0xeb);
      local_182c = (int *)((int *)0x0);
      local_1830 = (int *)((int *)(*(int *)(param_2 + 100) - *(int *)(param_2 + 0x60) >> 2));
      if (local_1830 != (int *)0x0) {
        do {
          *(unsigned char *)((char *)&local_1814 + 0) = 1;
          if (local_182c < (int *)(*(int *)(param_2 + 100) - *(int *)(param_2 + 0x60) >> 2)) {
            puVar15 = (undefined1 *)(*(undefined1 **)(*(int *)(param_2 + 0x60) + (int)local_182c * 4));
            if ((puVar15 != (undefined1 *)0x0) && (*(int *)(puVar15 + -0x10) < 0xffff)) {
              thunk_FUN_1123fce0(puVar15 + -0x10);
            }
            local_1814 = (int)(((uint)(*(unsigned short *)((char *)&local_1814 + 1)) << 8 | (uint)(2)));
            uVar13 = (uint)(uVar13 | 1);
            local_1838 = (undefined1 *)(puVar15);
          }
          else {

            uVar13 = (uint)(uVar13 | 2);

            puVar15 = (undefined1 *)((undefined1 *)0x0);
          }
          if ((puVar15 != (undefined1 *)0x0) && (*(int *)(puVar15 + -0x10) < 0xffff)) {
            local_1820 = (uint)(uVar13);
            thunk_FUN_1123fce0(puVar15 + -0x10);
          }
          uVar14 = (uint)(uVar13 | 4);
          local_1820 = (uint)(uVar14);
          if ((uVar13 & 2) != 0) {
            uVar14 = (uint)(uVar13 & 0xfffffffd | 4);

            local_1820 = (uint)(uVar14);
            if (((local_183c != 0) &&
                (local_1828 = (int *)(local_183c + -0x10), *local_1828 < 0xffff)) &&
               (iVar3 = thunk_FUN_1123fcd0(local_1828), iVar3 == 0)) {
              local_1828[2] = 0;
              local_1828[1] = 0;
              thunk_FUN_113cfb70(local_1828 + 4,local_1828[3]);
              free(local_1828);
            }
          }
          *(unsigned short *)((char *)&local_1814 + 1) = 0;
          uVar1 = (uint3)(*(unsigned short *)((char *)&local_1814 + 1));
          if ((uVar14 & 1) != 0) {
            uVar14 = (uint)(uVar14 & 0xfffffffe);
            *(unsigned short *)((char *)&local_1814 + 1) = 0;
            uVar1 = (uint3)(*(unsigned short *)((char *)&local_1814 + 1));
            *(unsigned char *)((char *)&local_1814 + 0) = 5;
            *(unsigned short *)((char *)&local_1814 + 1) = 0;
            local_1820 = (uint)(uVar14);
            if (((local_1838 != (undefined1 *)0x0) &&
                (uVar1 = *(unsigned short *)((char *)&local_1814 + 1), *(int *)(local_1838 + -0x10) < 0xffff)) &&
               (iVar3 = thunk_FUN_1123fcd0(local_1838 + -0x10), uVar1 = *(unsigned short *)((char *)&local_1814 + 1), iVar3 == 0
               )) {
              *(undefined4 *)(local_1838 + -8) = 0;
              *(undefined4 *)(local_1838 + -0xc) = 0;
              thunk_FUN_113cfb70(local_1838,*(undefined4 *)(local_1838 + -4));
              free(local_1838 + -0x10);
              uVar1 = (uint3)(*(unsigned short *)((char *)&local_1814 + 1));
            }
          }
          *(unsigned short *)((char *)&local_1814 + 1) = uVar1;
          *(unsigned char *)((char *)&local_1814 + 0) = 1;
          puVar4 = (undefined1 *)(&DAT_1186d2ee);
          if (puVar15 != (undefined1 *)0x0) {
            puVar4 = (undefined1 *)(puVar15);
          }
          thunk_FUN_11274b50("upnp:albumArtURI",puVar4);
          uVar13 = (uint)(uVar14 & 0xfffffffb);
          *(unsigned char *)((char *)&local_1814 + 0) = 6;
          local_1820 = (uint)(uVar13);
          if (((puVar15 != (undefined1 *)0x0) && (*(int *)(puVar15 + -0x10) < 0xffff)) &&
             (iVar3 = thunk_FUN_1123fcd0(puVar15 + -0x10), iVar3 == 0)) {
            *(undefined4 *)(puVar15 + -8) = 0;
            *(undefined4 *)(puVar15 + -0xc) = 0;
            thunk_FUN_113cfb70(puVar15,*(undefined4 *)(puVar15 + -4));
            free(puVar15 + -0x10);
          }
          local_182c = (int *)((int *)((int)local_182c + 1));
          *(unsigned char *)((char *)&local_1814 + 0) = 0;
        } while (local_182c < local_1830);
      }
      thunk_FUN_11274a10("    </item>\n</DIDL-Lite>",0x18);
      thunk_FUN_112740e0(local_1810,0xc01);
      thunk_FUN_112741b0();
      thunk_FUN_11274a10("<DIDL-Lite xmlns:dc=\"http://purl.org/dc/elements/1.1/\"    xmlns:upnp=\"urn:schemas-upnp-org:metadata-1-0/upnp/\"    xmlns:r=\"urn:schemas-rinconnetworks-com:metadata-1-0/\"    xmlns=\"urn:schemas-upnp-org:metadata-1-0/DIDL-Lite/\">    <item>"
                         ,0xeb);
      iVar3 = (int)(local_1824);
      puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_10206850(&local_1830,0));
      *(unsigned char *)((char *)&local_1814 + 0) = 7;
      puVar15 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)*puVar5 != (undefined1 *)0x0) {
        puVar15 = (undefined1 *)((undefined1 *)*puVar5);
      }
      thunk_FUN_11274b50("upnp:albumArtURI",puVar15);
      piVar12 = (int *)(local_1830);
      *(unsigned char *)((char *)&local_1814 + 0) = 8;
      if (((local_1830 != (int *)0x0) &&
          (piVar7 = local_1830 + -4, iVar3 = local_1824, local_1830[-4] < 0xffff)) &&
         (iVar6 = thunk_FUN_1123fcd0(piVar7), iVar3 = local_1824, iVar6 == 0)) {
        piVar12[-2] = 0;
        piVar12[-3] = 0;
        thunk_FUN_113cfb70(piVar12,piVar12[-1]);
        free(piVar7);
        iVar3 = (int)(local_1824);
      }
      piVar7 = (int *)((int *)(*(int *)(iVar3 + 100) - *(int *)(iVar3 + 0x60) >> 2));
      local_1828 = (int *)((int *)0x1);
      piVar12 = (int *)(local_1830);
      if ((int *)0x1 < piVar7) {
        do {
          *(unsigned char *)((char *)&local_1814 + 0) = 9;
          if (local_1828 < (int *)(*(int *)(iVar3 + 100) - *(int *)(iVar3 + 0x60) >> 2)) {
            piVar16 = (int *)(*(int **)(*(int *)(iVar3 + 0x60) + (int)local_1828 * 4));
            local_1830 = (int *)(piVar16);
            if ((piVar16 != (int *)0x0) && (piVar16[-4] < 0xffff)) {
              thunk_FUN_1123fce0(piVar16 + -4);
            }
            local_1814 = (int)(((uint)(*(unsigned short *)((char *)&local_1814 + 1)) << 8 | (uint)(10)));
            uVar13 = (uint)(uVar13 | 8);
            piVar12 = (int *)(piVar16);
          }
          else {

            uVar13 = (uint)(uVar13 | 0x10);

            piVar16 = (int *)((int *)0x0);
          }
          if ((piVar16 != (int *)0x0) && (piVar16[-4] < 0xffff)) {
            local_1820 = (uint)(uVar13);
            thunk_FUN_1123fce0(piVar16 + -4);
          }
          uVar14 = (uint)(uVar13 | 0x20);
          local_1820 = (uint)(uVar14);
          if ((uVar13 & 0x10) != 0) {
            uVar14 = (uint)(uVar13 & 0xffffffef | 0x20);

            local_1820 = (uint)(uVar14);
            if (((local_183c != 0) &&
                (local_182c = (int *)(local_183c + -0x10), *local_182c < 0xffff)) &&
               (iVar3 = thunk_FUN_1123fcd0(local_182c), iVar3 == 0)) {
              local_182c[2] = 0;
              local_182c[1] = 0;
              thunk_FUN_113cfb70(local_182c + 4,local_182c[3]);
              free(local_182c);
            }
          }
          *(unsigned short *)((char *)&local_1814 + 1) = 0;
          uVar1 = (uint3)(*(unsigned short *)((char *)&local_1814 + 1));
          if ((uVar14 & 8) != 0) {
            uVar14 = (uint)(uVar14 & 0xfffffff7);
            *(unsigned short *)((char *)&local_1814 + 1) = 0;
            uVar1 = (uint3)(*(unsigned short *)((char *)&local_1814 + 1));
            *(unsigned char *)((char *)&local_1814 + 0) = 0xd;
            *(unsigned short *)((char *)&local_1814 + 1) = 0;
            local_1820 = (uint)(uVar14);
            if (((piVar12 != (int *)0x0) && (uVar1 = *(unsigned short *)((char *)&local_1814 + 1), piVar12[-4] < 0xffff)) &&
               (iVar3 = thunk_FUN_1123fcd0(piVar12 + -4), uVar1 = *(unsigned short *)((char *)&local_1814 + 1), iVar3 == 0)) {
              piVar12[-2] = 0;
              piVar12[-3] = 0;
              thunk_FUN_113cfb70(piVar12,piVar12[-1]);
              free(piVar12 + -4);
              uVar1 = (uint3)(*(unsigned short *)((char *)&local_1814 + 1));
            }
          }
          *(unsigned short *)((char *)&local_1814 + 1) = uVar1;
          *(unsigned char *)((char *)&local_1814 + 0) = 9;
          piVar8 = (int *)((int *)&DAT_1186d2ee);
          if (piVar16 != (int *)0x0) {
            piVar8 = (int *)(piVar16);
          }
          thunk_FUN_11274b50("upnp:albumArtURI",piVar8);
          uVar13 = (uint)(uVar14 & 0xffffffdf);
          *(unsigned char *)((char *)&local_1814 + 0) = 0xe;
          local_1820 = (uint)(uVar13);
          if (((piVar16 != (int *)0x0) && (piVar16[-4] < 0xffff)) &&
             (iVar3 = thunk_FUN_1123fcd0(piVar16 + -4), iVar3 == 0)) {
            piVar16[-2] = 0;
            piVar16[-3] = 0;
            thunk_FUN_113cfb70(piVar16,piVar16[-1]);
            free(piVar16 + -4);
          }
          local_1828 = (int *)((int *)((int)local_1828 + 1));
          iVar3 = (int)(local_1824);
        } while (local_1828 < piVar7);
      }
      *(unsigned char *)((char *)&local_1814 + 0) = 0;
      thunk_FUN_11274a10("    </item>\n</DIDL-Lite>",0x18);
      puVar5 = (undefined4 *)(operator_new(0xd7d0));
      *(unsigned char *)((char *)&local_1814 + 0) = 0xf;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)((undefined4 *)0x0);
      }
      else {
        uVar9 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x48))());
        uVar21 = (undefined4)(0);
        uVar20 = (undefined4)(0);
        iVar3 = (int)(*(int *)(*(int *)(iVar2 + 4) + 4));
        uVar19 = (undefined4)(2000);
        uVar18 = (undefined4)(2000);
        uVar10 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x50))
                           (2000,2000,0,0));
        pcVar17 = (char *)("UpdateObject");
        uVar11 = (undefined4)((**(code **)(*(int *)(iVar2 + iVar3 + 4) + 0x68))("UpdateObject",uVar10));
        thunk_FUN_111c0760(uVar9,uVar11,pcVar17,uVar10,uVar18,uVar19,uVar20,uVar21);
        *puVar5 = (undefined4)((uint)&ghidra_vftable_RUpnpCDUpdateObjectAIOOp);
        puVar5[0x18] = (uint)&ghidra_vftable_RUpnpCDUpdateObjectAIOOp;
        puVar5[0x11b] = (uint)&ghidra_vftable_RUpnpCDUpdateObjectAIOOp;
      }
      local_1814 = (int)((uint)*(unsigned short *)((char *)&local_1814 + 1) << 8);
      puVar15 = (undefined1 *)(&DAT_1186d2ee);
      if (*(undefined1 **)(param_2 + 0xc) != (undefined1 *)0x0) {
        puVar15 = (undefined1 *)(*(undefined1 **)(param_2 + 0xc));
      }
      piVar12 = (int *)((int *)thunk_FUN_1124ffa0("ObjectID",0));
      (**(code **)(*piVar12 + 0xc))(puVar15);
      piVar12 = (int *)((int *)thunk_FUN_1124ffa0("CurrentTagValue",0));
      (**(code **)(*piVar12 + 0xc))(local_c0c);
      piVar12 = (int *)((int *)thunk_FUN_1124ffa0("NewTagValue",0));
      (**(code **)(*piVar12 + 0xc))(local_1810);
      thunk_FUN_102207b0(puVar5,-(uint)(param_1 != 0) & param_1 + 0x120U,0);
      thunk_FUN_112741b0();
    }
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 105918c0; body size 128 bytes.
#line 1 "ENTRY_105918c0"

void __fastcall FUN_105918c0(int param_1)

{
 try {
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_101f6530(&local_18,DAT_12126b84 );

  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);

  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10591eb0; body size 238 bytes.
#line 1 "ENTRY_10591eb0"

void __fastcall FUN_10591eb0(int param_1)

{
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (*(int **)(param_1 + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x8c) + 0x18))
              (param_1 + 0x84,DAT_12126b84 );
    piVar1 = (int *)(*(int **)(param_1 + 0x90));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  piVar1 = (int *)((int *)thunk_FUN_104ea590());
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
    (**(code **)(*piVar2 + 4))();
  }

  if (piVar1 != (int *)0x0) {
    thunk_FUN_104ed670(param_1 + 0x84);
    thunk_FUN_104ed250(param_1 + 0x80,*(undefined4 *)(param_1 + 0x94));
  }

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10592000; body size 118 bytes.
#line 1 "ENTRY_10592000"

void __stdcall FUN_10592000(int param_1)

{
 try {
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  if ((param_1 != 0) && (*(int *)(param_1 + -0x10) < 0xffff)) {
    iVar1 = (int)(thunk_FUN_1123fcd0((void *)(param_1 + -0x10),DAT_12126b84 ));
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + -8) = 0;
      *(undefined4 *)(param_1 + -0xc) = 0;
      thunk_FUN_113cfb70(param_1,*(undefined4 *)(param_1 + -4));
      free((void *)(param_1 + -0x10));
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10592100; body size 232 bytes.
#line 1 "ENTRY_10592100"

void __thiscall Recovered_Bulk::FUN_10592100(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;

  *(undefined4 *)(param_1 + 0x14) = 0;
  (**(code **)(*(int *)(param_1 + 0x28) + 0x18))();
  if ((((*(char **)(param_1 + 0x20) != (char *)0x0) && (**(char **)(param_1 + 0x20) != '\0')) &&
      (*(char **)(param_1 + 0x24) != (char *)0x0)) && (**(char **)(param_1 + 0x24) != '\0')) {
    (**(code **)(*piVar1 + 0x40))();
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

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10592730; body size 217 bytes.
#line 1 "ENTRY_10592730"

undefined4 __fastcall FUN_10592730(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  
  if (((char)param_1[0x71] != '\0') && (param_1[0x72] == -1)) {
    param_1[0x72] = 0;
    iVar2 = (int)((**(code **)(*param_1 + 0x8c))());
    if ((iVar2 == 0) || ((param_1[99] - param_1[0x62] & 0xfffffffcU) == 0)) {
      uVar5 = (undefined4)(0);
      puVar3 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)param_1[0x4e] != (undefined1 *)0x0) {
        puVar3 = (undefined1 *)((undefined1 *)param_1[0x4e]);
      }
      thunk_FUN_110828b0(puVar3,0);
      iVar2 = (int)(thunk_FUN_110935f0(puVar3,uVar5));
      if ((iVar2 != 0) && (cVar1 = thunk_FUN_1021adf0(), cVar1 != '\0')) {
        puVar3 = (undefined1 *)(&DAT_1186d2ee);
        if ((undefined1 *)param_1[0x4d] != (undefined1 *)0x0) {
          puVar3 = (undefined1 *)((undefined1 *)param_1[0x4d]);
        }
        cVar1 = (char)(thunk_FUN_111f1980(puVar3,0));
        if (cVar1 == '\0') {
          return (undefined4)(0);
        }
      }
      thunk_FUN_110b0460(1);
      puVar3 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)param_1[0x4d] != (undefined1 *)0x0) {
        puVar3 = (undefined1 *)((undefined1 *)param_1[0x4d]);
      }
      puVar4 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)param_1[0x4e] != (undefined1 *)0x0) {
        puVar4 = (undefined1 *)((undefined1 *)param_1[0x4e]);
      }
      thunk_FUN_110b3620(param_1 + 0x46,puVar4,puVar3,0,0);
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10592cf0; body size 187 bytes.
#line 1 "ENTRY_10592cf0"

void __thiscall Recovered_Bulk::FUN_10592cf0(int param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  void *pvVar5;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;


  uVar3 = (uint)(DAT_12126b84);

  iVar1 = (int)(*(int *)(param_1 + 0x20));
  thunk_FUN_10221570(param_2,param_3);
  if (param_2 != 0) {
    cVar2 = (char)(thunk_FUN_110a5ba0(param_1 + 0x6c,"object.item.audioItem.linein",uVar3));
    if ((cVar2 != '\0') && (iVar1 == 0)) {
      uVar4 = (undefined4)(thunk_FUN_110828b0());
      pvVar5 = (void *)(operator_new(0x20));
      if (pvVar5 == (void *)0x0) {
        uVar4 = (undefined4)(0);
      }
      else {
        local_8 = (int)(iVar1);
        uVar4 = (undefined4)(thunk_FUN_104ddfd0(param_1 + 0x1ec,uVar4));
      }

      *(undefined4 *)(param_1 + 0x1f0) = uVar4;
      thunk_FUN_104deb40();
      thunk_FUN_104ddf60();
      thunk_FUN_10592970();
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10592de0; body size 139 bytes.
#line 1 "ENTRY_10592de0"

void __thiscall Recovered_Bulk::FUN_10592de0(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  char cVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x20));
  thunk_FUN_10221850(param_2);
  if (((iVar1 != 0) && (*(int *)(param_1 + 0x20) == 0)) && (param_2 != 0)) {
    cVar2 = (char)(thunk_FUN_110a5ba0(param_1 + 0x6c,"object.item.audioItem.linein"));
    if (cVar2 != '\0') {
      thunk_FUN_110b0460(1);
      thunk_FUN_110adac0(param_1 + 0x118);
      thunk_FUN_104ddf90();
      if (*(int *)(param_1 + 0x1f0) != 0) {
        thunk_FUN_104dec20();
        if (*(undefined4 **)(param_1 + 0x1f0) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(param_1 + 0x1f0))(1);
        }
        *(undefined4 *)(param_1 + 0x1f0) = 0;
      }
    }
  }
  return;
}


// Reference entry 10594090; body size 112 bytes.
#line 1 "ENTRY_10594090"

int __stdcall FUN_10594090(int param_1,int param_2,int param_3)

{
 try {
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  ppvVar1 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar1, param_1 != param_2); param_1 = param_1 + 0x1c) {
    thunk_FUN_10594e60(param_1);
    param_3 = (int)(param_3 + 0x1c);

  }

  return (int)(param_3);

 } catch (...) { }
}


// Reference entry 10594210; body size 113 bytes.
#line 1 "ENTRY_10594210"

int FUN_10594210(int param_1,int param_2,int param_3)

{
 try {
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  ppvVar1 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar1, param_1 != param_2); param_1 = param_1 + 0x1c) {
    thunk_FUN_10594e60(param_1);
    param_3 = (int)(param_3 + 0x1c);

  }

  return (int)(param_3);

 } catch (...) { }
}


// Reference entry 105951f0; body size 76 bytes.
#line 1 "ENTRY_105951f0"

void __fastcall FUN_105951f0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10595470; body size 117 bytes.
#line 1 "ENTRY_10595470"

void __fastcall FUN_10595470(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10593850(*param_1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
    uVar2 = (uint)(((param_1[2] - iVar1) / 0xc) * 0xc);
    iVar3 = (int)(iVar1);
    if (0xfff < uVar2) {
      iVar3 = (int)(*(int *)(iVar1 + -4));
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (iVar1 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar2);
    *param_1 = (int)(0);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// Reference entry 10595790; body size 81 bytes.
#line 1 "ENTRY_10595790"

int * __thiscall Recovered_Bulk::FUN_10595790(int *param_2)
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


// Reference entry 10595dc0; body size 312 bytes.
#line 1 "ENTRY_10595dc0"

void __thiscall Recovered_Bulk::FUN_10595dc0(uint param_2)
{
  uint *param_1 = (uint *)this;
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (0x15555555 < param_2) {
                    
    thunk_FUN_10596a60();
  }
  uVar2 = (uint)(*param_1);
  uVar5 = (uint)((int)(param_1[2] - uVar2) / 0xc);
  if (0x15555555 - (uVar5 >> 1) < uVar5) {
    uVar5 = (uint)(0x15555555);
  }
  else {
    uVar5 = (uint)((uVar5 >> 1) + uVar5);
    if (uVar5 < param_2) {
      uVar5 = (uint)(param_2);
    }
  }
  if (uVar2 != 0) {
    thunk_FUN_10593850(uVar2,param_1[1],param_1);
    uVar2 = (uint)(*param_1);
    uVar3 = (uint)(((int)(param_1[2] - uVar2) / 0xc) * 0xc);
    uVar4 = (uint)(uVar2);
    if (0xfff < uVar3) {
      uVar4 = (uint)(*(uint *)(uVar2 - 4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (uVar2 - uVar4) - 4) goto LAB_10595eb7;
    }
    thunk_FUN_1148a50e(uVar4,uVar3);
    *param_1 = (uint)(0);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (uVar5 < 0x15555556) {
    uVar5 = (uint)(uVar5 * 0xc);
    if (uVar5 < 0x1000) {
      if (uVar5 == 0) {
        *param_1 = (uint)(0);
        param_1[1] = 0;
        param_1[2] = 0;
        return;
      }
      pvVar1 = (void *)(operator_new(uVar5));
      *param_1 = (uint)((uint)pvVar1);
      param_1[1] = (uint)pvVar1;
      param_1[2] = (uint)((int)pvVar1 + uVar5);
      return;
    }
    if (uVar5 < uVar5 + 0x23) {
      pvVar1 = (void *)(operator_new(uVar5 + 0x23));
      if (pvVar1 != (void *)0x0) {
        uVar2 = (uint)((int)pvVar1 + 0x23U & 0xffffffe0);
        *(void **)(uVar2 - 4) = pvVar1;
        *param_1 = (uint)(uVar2);
        param_1[1] = uVar2;
        param_1[2] = uVar2 + uVar5;
        return;
      }
LAB_10595eb7:
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10596780; body size 79 bytes.
#line 1 "ENTRY_10596780"

void __thiscall Recovered_Bulk::FUN_10596780(int param_2)
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


// Reference entry 10596890; body size 83 bytes.
#line 1 "ENTRY_10596890"

void __thiscall Recovered_Bulk::FUN_10596890(int *param_2)
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


// Reference entry 10596900; body size 117 bytes.
#line 1 "ENTRY_10596900"

void __fastcall FUN_10596900(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10593850(*param_1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
    uVar2 = (uint)(((param_1[2] - iVar1) / 0xc) * 0xc);
    iVar3 = (int)(iVar1);
    if (0xfff < uVar2) {
      iVar3 = (int)(*(int *)(iVar1 + -4));
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (iVar1 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar2);
    *param_1 = (int)(0);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// Reference entry 105969a0; body size 136 bytes.
#line 1 "ENTRY_105969a0"

void __fastcall FUN_105969a0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)(*param_1);
  if (iVar2 != 0) {
    iVar3 = (int)(param_1[1]);
    if (iVar2 != iVar3) {
      do {
        thunk_FUN_10de8ec0();
        iVar2 = (int)(iVar2 + 0x1c);
      } while (iVar2 != iVar3);
      iVar2 = (int)(*param_1);
    }
    uVar1 = (uint)(((param_1[2] - iVar2) / 0x1c) * 0x1c);
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


// Reference entry 10597140; body size 65 bytes.
#line 1 "ENTRY_10597140"

void __stdcall FUN_10597140(int param_1,int param_2)

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


// Reference entry 1059a040; body size 198 bytes.
#line 1 "ENTRY_1059a040"

void __fastcall FUN_1059a040(int param_1)

{
 try {
  int iVar1;
  char cVar2;
  uint uVar3;
  SCLibrary *pSVar4;
  int *piVar5;
  __time64_t _Var6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  pSVar4 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  if (pSVar4 != (SCLibrary *)0x0) {
    piVar5 = (int *)((int *)(**(code **)(*(int *)pSVar4 + 0x154))(uVar3));
    if (piVar5 != (int *)0x0) {
      cVar2 = (char)(thunk_FUN_112a7f50(param_1 + 0x30));

      _Var6 = (__time64_t)(_time64((__time64_t *)0x0));
      iVar1 = (int)(*(int *)(param_1 + 0x24));
      thunk_FUN_112af4e0("ServiceOutageManager",2,"Polling: Next fetch in %d seconds",iVar1);
      (**(code **)(*piVar5 + 8))(LAB_10024e4c,0,_Var6 + iVar1,0);
      if (cVar2 != '\0') {
        thunk_FUN_112a8010(param_1 + 0x30);
      }
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 1059a850; body size 159 bytes.
#line 1 "ENTRY_1059a850"

void __fastcall FUN_1059a850(int param_1)

{
 try {
  char cVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  if (pSVar3 != (SCLibrary *)0x0) {
    iVar4 = (int)((**(code **)(*(int *)pSVar3 + 0x154))(uVar2));
    if (iVar4 != 0) {
      cVar1 = (char)(thunk_FUN_112a7f50(param_1 + 0x30));

      thunk_FUN_1126f750(LAB_10024e4c,0);
      thunk_FUN_112af4e0("ServiceOutageManager",2,"Polling has been suspended.");
      if (cVar1 != '\0') {
        thunk_FUN_112a8010(param_1 + 0x30);
      }
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 1059b670; body size 71 bytes.
#line 1 "ENTRY_1059b670"

void __thiscall Recovered_Bulk::FUN_1059b670(undefined4 param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (int)(*param_1);
  piVar3 = (int *)(*(int **)(iVar2 + 4));
  if (*(char *)((int)piVar3 + 0xd) == '\0') {
    do {
      thunk_FUN_1059b6d0(param_2,piVar3[2]);
      piVar1 = (int *)((int *)*piVar3);
      thunk_FUN_1148a50e(piVar3,0x18);
      piVar3 = (int *)(piVar1);
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    iVar2 = (int)(*param_1);
  }
  thunk_FUN_1148a50e(iVar2,0x18);
  return;
}


// Reference entry 1059b760; body size 73 bytes.
#line 1 "ENTRY_1059b760"

int * __thiscall Recovered_Bulk::FUN_1059b760(int *param_2,uint *param_3)
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


// Reference entry 1059b890; body size 214 bytes.
#line 1 "ENTRY_1059b890"

int * __thiscall Recovered_Bulk::FUN_1059b890(int *param_2,uint *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
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


  uVar2 = (uint)(DAT_12126b84);

  thunk_FUN_1059b760(&local_24,param_3);
  if ((*(char *)(local_1c + 0xd) == '\0') && (*(uint *)(local_1c + 0x10) <= *param_3)) {
    *param_2 = (int)(local_1c);
    *(undefined1 *)(param_2 + 1) = 0;

    return (int *)(param_2);
  }
  if (param_1[1] != 0xaaaaaaa) {
    uVar1 = (undefined4)(*param_1);


    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x18));
    puVar3[4] = *param_3;
    puVar3[5] = 0;
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    iVar4 = (int)(thunk_FUN_1059cad0(local_24,local_20,puVar3));
    *param_2 = (int)(iVar4);
    *(undefined1 *)(param_2 + 1) = 1;

    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar2);

 } catch (...) { }
}


// Reference entry 1059c220; body size 181 bytes.
#line 1 "ENTRY_1059c220"

int __thiscall Recovered_Bulk::FUN_1059c220(uint *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
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


  uVar2 = (uint)(DAT_12126b84);

  thunk_FUN_1059b760(&local_24,param_2);
  if ((*(char *)(local_1c + 0xd) != '\0') || (*param_2 < *(uint *)(local_1c + 0x10))) {
    if (param_1[1] == 0xaaaaaaa) {
                    
      thunk_FUN_101d7220(uVar2);
    }
    uVar1 = (undefined4)(*param_1);


    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x18));
    puVar3[4] = *param_2;
    puVar3[5] = 0;
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    local_1c = (int)(thunk_FUN_1059cad0(local_24,local_20,puVar3));
  }

  return (int)(local_1c + 0x14);

 } catch (...) { }
}


// Reference entry 1059cd60; body size 79 bytes.
#line 1 "ENTRY_1059cd60"

void __thiscall Recovered_Bulk::FUN_1059cd60(int param_2)
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


// Reference entry 1059ce50; body size 83 bytes.
#line 1 "ENTRY_1059ce50"

void __thiscall Recovered_Bulk::FUN_1059ce50(int *param_2)
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


// Reference entry 1059d030; body size 69 bytes.
#line 1 "ENTRY_1059d030"

void __thiscall Recovered_Bulk::FUN_1059d030(int *param_2,uint *param_3)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_1059b760(local_c,param_3);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(uint *)(local_4 + 0x10) <= *param_3)) {
    *param_2 = (int)(local_4);
    return;
  }
  *param_2 = (int)(*param_1);
  return;
}


// Reference entry 1059d0b0; body size 72 bytes.
#line 1 "ENTRY_1059d0b0"

void __stdcall FUN_1059d0b0(int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x14));
  bVar2 = (bool)(((SCLibrary *)(0))->isShuttingDown());
  if (puVar1 != (undefined4 *)0x0) {
    if ((!bVar2) && (puVar1[2] != 0)) {
      thunk_FUN_101badc0();
    }
    (**(code **)*puVar1)(1);
  }
  uVar3 = (undefined4)(thunk_FUN_1059c6f0(param_1));
  thunk_FUN_1148a50e(uVar3,0x18);
  return;
}


// Reference entry 1059d120; body size 118 bytes.
#line 1 "ENTRY_1059d120"

bool __thiscall Recovered_Bulk::FUN_1059d120(uint param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined1 local_c [8];
  int local_4;
  
  uVar1 = (uint)(param_2);
  if (param_2 == 0) {
    return (bool)(false);
  }
  cVar2 = (char)(thunk_FUN_112a7f50(param_1 + 0x10));
  thunk_FUN_1059b760(local_c,&param_2);
  if (((*(char *)(local_4 + 0xd) == '\0') && (*(uint *)(local_4 + 0x10) <= uVar1)) &&
     (local_4 != *(int *)(param_1 + 8))) {
    bVar3 = (bool)(*(int *)(*(int *)(local_4 + 0x14) + 8) != 0);
  }
  else {
    bVar3 = (bool)(false);
  }
  if (cVar2 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x10);
  }
  return (bool)(bVar3);
}


// Reference entry 1059d200; body size 168 bytes.
#line 1 "ENTRY_1059d200"

void __thiscall Recovered_Bulk::FUN_1059d200(uint param_2)
{
  int param_1 = (int )this;
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 unaff_EBX;
  undefined1 local_c [8];
  int local_4;
  
  iVar1 = (int)(param_1 + 0x10);
  cVar4 = (char)(thunk_FUN_112a7f50(iVar1));
  thunk_FUN_1059b760(local_c,&param_2);
  uVar3 = (uint)(param_2);
  if (((*(char *)(local_4 + 0xd) == '\0') && (*(uint *)(local_4 + 0x10) <= param_2)) &&
     (local_4 != *(int *)(param_1 + 8))) {
    puVar2 = (undefined4 *)(*(undefined4 **)(local_4 + 0x14));
    puVar2[2] = 0;
    (**(code **)*puVar2)(1);
    uVar5 = (undefined4)(thunk_FUN_1059c6f0(local_4));
    thunk_FUN_1148a50e(uVar5,0x18);
    if ((char)((uint)unaff_EBX >> 0x18) != '\0') {
      thunk_FUN_112a8010(iVar1);
    }
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 4) + 4))(uVar3);
      return;
    }
  }
  else if (cVar4 != '\0') {
    thunk_FUN_112a8010(iVar1);
  }
  return;
}


// Reference entry 1059d800; body size 251 bytes.
#line 1 "ENTRY_1059d800"

void __fastcall FUN_1059d800(int param_1)

{
 try {
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  cVar4 = (char)(thunk_FUN_112a7f50(param_1 + 0x10,DAT_12126b84 ));

  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      iVar1 = (int)(**(int **)(param_1 + 8));
      puVar2 = (undefined4 *)(*(undefined4 **)(iVar1 + 0x14));
      bVar5 = (bool)(((SCLibrary *)(0))->isShuttingDown());
      if (bVar5) {
        if (puVar2 != (undefined4 *)0x0) goto LAB_1059d8b2;
      }
      else if (puVar2 != (undefined4 *)0x0) {
        if ((puVar2[2] != 0) && ((int *)puVar2[1] != (int *)0x0)) {
          (**(code **)(*(int *)puVar2[1] + 0x10))();
          puVar3 = (undefined4 *)((undefined4 *)puVar2[1]);
          if ((puVar3 != (undefined4 *)0x0) && (iVar6 = thunk_FUN_1123fcd0(puVar3 + 1), iVar6 == 0))
          {
            (**(code **)*puVar3)(1);
          }
          puVar2[1] = 0;
          puVar2[2] = 0;
        }
LAB_1059d8b2:
        (**(code **)*puVar2)(1);
      }
      uVar7 = (undefined4)(thunk_FUN_1059c6f0(iVar1));
      thunk_FUN_1148a50e(uVar7,0x18);
    } while (*(int *)(param_1 + 0xc) != 0);
  }
  if (cVar4 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x10);
  }

  return;

 } catch (...) { }
}


// Reference entry 1059d940; body size 152 bytes.
#line 1 "ENTRY_1059d940"

void __thiscall Recovered_Bulk::FUN_1059d940(uint param_2)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  uint uVar2;
  undefined1 local_24 [8];
  int local_1c;
  int local_18;
  char local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar2 = (uint)(param_2);


  if (param_2 != 0) {
    iVar1 = (int)(param_1 + 0x10);
    local_18 = (int)(iVar1);
    local_14 = (char)(thunk_FUN_112a7f50(iVar1,DAT_12126b84 ));

    thunk_FUN_1059b760(local_24,&param_2);
    if (((*(char *)(local_1c + 0xd) == '\0') && (*(uint *)(local_1c + 0x10) <= uVar2)) &&
       (local_1c != *(int *)(param_1 + 8))) {
      thunk_FUN_1059d0b0(local_1c);
    }
    if (local_14 != '\0') {
      thunk_FUN_112a8010(iVar1);
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 1059e4c0; body size 148 bytes.
#line 1 "ENTRY_1059e4c0"

undefined4 * __thiscall Recovered_Bulk::FUN_1059e4c0(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  (**(code **)(*param_1 + 0x38))(&local_18,DAT_12126b84 );

  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_105aca80(&local_14,param_1[3],param_1[4],(char)param_1[5]));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_2 = (undefined4)(uVar1);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 1059e580; body size 138 bytes.
#line 1 "ENTRY_1059e580"

undefined4 * __thiscall Recovered_Bulk::FUN_1059e580(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0xdc));

  if (pvVar2 == (void *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 0xc))(0,0,0,uVar1));
    piVar4 = (int *)((int *)thunk_FUN_105a7950(uVar3));
  }

  *param_2 = (undefined4)(piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 1059e8c0; body size 267 bytes.
#line 1 "ENTRY_1059e8c0"

void __thiscall Recovered_Bulk::FUN_1059e8c0(void *param_2,int param_3)
{
  int *param_1 = (int *)this;
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  size_t _Size;
  void *_Dst;
  uint uVar4;
  
  _Size = (size_t)(param_3 - (int)param_2);
  _Dst = (void *)((void *)*param_1);
  uVar3 = (uint)((int)_Size >> 4);
  uVar2 = (uint)(param_1[2] - (int)_Dst >> 4);
  if (uVar2 < uVar3) {
    if (0xfffffff < uVar3) {
                    
      thunk_FUN_105a1f20();
    }
    if (0xfffffff - (uVar2 >> 1) < uVar2) {
      uVar4 = (uint)(0xfffffff);
    }
    else {
      uVar4 = (uint)((uVar2 >> 1) + uVar2);
      if (uVar4 < uVar3) {
        uVar4 = (uint)(uVar3);
      }
    }
    if (_Dst != (void *)0x0) {
      uVar2 = (uint)(uVar2 * 0x10);
      pvVar1 = (void *)(_Dst);
      if (0xfff < uVar2) {
        pvVar1 = (void *)(*(void **)((int)_Dst + -4));
        uVar2 = (uint)(uVar2 + 0x23);
        if (0x1f < (uint)((int)_Dst + (-4 - (int)pvVar1))) goto LAB_1059e981;
      }
      thunk_FUN_1148a50e(pvVar1,uVar2);
      *param_1 = (int)(0);
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (0xfffffff < uVar4) {
LAB_1059e9c1:
                    
      thunk_FUN_1012a2a0();
    }
    uVar4 = (uint)(uVar4 * 0x10);
    if (uVar4 < 0x1000) {
      if (uVar4 == 0) {
        _Dst = (void *)((void *)0x0);
      }
      else {
        _Dst = (void *)(operator_new(uVar4));
      }
    }
    else {
      if (uVar4 + 0x23 <= uVar4) goto LAB_1059e9c1;
      pvVar1 = (void *)(operator_new(uVar4 + 0x23));
      if (pvVar1 == (void *)0x0) {
LAB_1059e981:
                    
        _invalid_parameter_noinfo_noreturn();
      }
      _Dst = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
      *(void **)((int)_Dst + -4) = pvVar1;
    }
    *param_1 = (int)((int)_Dst);
    param_1[1] = (int)_Dst;
    param_1[2] = (int)(uVar4 + (int)_Dst);
  }
  memmove(_Dst,param_2,_Size);
  param_1[1] = (int)_Dst + _Size;
  return;
}


// Reference entry 1059ea10; body size 376 bytes.
#line 1 "ENTRY_1059ea10"

void __thiscall Recovered_Bulk::FUN_1059ea10(int param_2,int param_3)
{
  int *param_1 = (int *)this;
 try {
  uint uVar1;
  int iVar2;
  void **ppvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);
  iVar7 = (int)(*param_1);
  uVar1 = (uint)((param_3 - param_2) / 0x18);
  iVar6 = (int)(param_1[1]);
  uVar5 = (uint)((iVar6 - iVar7) / 0x18);
  if (uVar1 <= uVar5) {
    iVar7 = (int)(iVar7 + uVar1 * 0x18);
    ppvVar3 = (void **)(&local_10);
    iVar2 = (int)(iVar7);
    if (param_2 != param_3) {
      do {

        thunk_FUN_10def210(param_2);
        param_2 = (int)(param_2 + 0x18);

      } while (param_2 != param_3);
      iVar6 = (int)(param_1[1]);
    }
    for (; ExceptionList = (void *)(ppvVar3, iVar2 != iVar6); iVar2 = iVar2 + 0x18) {
      thunk_FUN_10def0d0(uVar4);

    }
    param_1[1] = iVar7;

    return;
  }

  if ((uint)((param_1[2] - iVar7) / 0x18) < uVar1) {
    thunk_FUN_105a1330(uVar1);
    uVar5 = (uint)(0);
  }
  iVar7 = (int)(param_2 + uVar5 * 0x18);
  for (; param_2 != iVar7; param_2 = param_2 + 0x18) {
    thunk_FUN_10def210(param_2);
  }
  iVar6 = (int)(param_1[1]);

  for (; iVar7 != param_3; iVar7 = iVar7 + 0x18) {
    thunk_FUN_10deea50(iVar7);
    iVar6 = (int)(iVar6 + 0x18);
  }
  param_1[1] = iVar6;

  return;

 } catch (...) { }
}


// Reference entry 1059ee10; body size 267 bytes.
#line 1 "ENTRY_1059ee10"

undefined4 * __thiscall Recovered_Bulk::FUN_1059ee10(void *param_2,undefined4 *param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  void *_Src;
  int iVar4;
  void *_Dst;
  uint uVar5;
  uint uVar6;
  
  iVar3 = (int)(*param_1);
  iVar4 = (int)(param_1[1] - iVar3 >> 2);
  if (iVar4 == 0x3fffffff) {
                    
    thunk_FUN_105a1f00();
  }
  uVar5 = (uint)(param_1[2] - iVar3 >> 2);
  uVar1 = (uint)(iVar4 + 1);
  if (0x3fffffff - (uVar5 >> 1) < uVar5) {
    uVar5 = (uint)(0x3fffffff);
  }
  else {
    uVar5 = (uint)((uVar5 >> 1) + uVar5);
    if (uVar5 < uVar1) {
      uVar5 = (uint)(uVar1);
    }
  }
  _Dst = (void *)((void *)thunk_FUN_105a1f40(uVar5));
  puVar2 = (undefined4 *)((undefined4 *)((int)_Dst + ((int)param_2 - iVar3 >> 2) * 4));
  *puVar2 = (undefined4)(*param_3);
  _Src = (void *)((void *)*param_1);
  if (param_2 == (void *)param_1[1]) {
    memmove(_Dst,_Src,param_1[1] - (int)_Src);
  }
  else {
    memmove(_Dst,_Src,(int)param_2 - (int)_Src);
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
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar6);
  }
  *param_1 = (int)((int)_Dst);
  param_1[1] = (int)((int)_Dst + uVar1 * 4);
  param_1[2] = (int)((int)_Dst + uVar5 * 4);
  return (undefined4 *)(puVar2);
}


// Reference entry 1059ef60; body size 267 bytes.
#line 1 "ENTRY_1059ef60"

undefined4 * __thiscall Recovered_Bulk::FUN_1059ef60(void *param_2,undefined4 *param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  void *_Src;
  int iVar4;
  void *_Dst;
  uint uVar5;
  uint uVar6;
  
  iVar3 = (int)(*param_1);
  iVar4 = (int)(param_1[1] - iVar3 >> 2);
  if (iVar4 == 0x3fffffff) {
                    
    thunk_FUN_105a1f10();
  }
  uVar5 = (uint)(param_1[2] - iVar3 >> 2);
  uVar1 = (uint)(iVar4 + 1);
  if (0x3fffffff - (uVar5 >> 1) < uVar5) {
    uVar5 = (uint)(0x3fffffff);
  }
  else {
    uVar5 = (uint)((uVar5 >> 1) + uVar5);
    if (uVar5 < uVar1) {
      uVar5 = (uint)(uVar1);
    }
  }
  _Dst = (void *)((void *)thunk_FUN_105a1fb0(uVar5));
  puVar2 = (undefined4 *)((undefined4 *)((int)_Dst + ((int)param_2 - iVar3 >> 2) * 4));
  *puVar2 = (undefined4)(*param_3);
  _Src = (void *)((void *)*param_1);
  if (param_2 == (void *)param_1[1]) {
    memmove(_Dst,_Src,param_1[1] - (int)_Src);
  }
  else {
    memmove(_Dst,_Src,(int)param_2 - (int)_Src);
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
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar6);
  }
  *param_1 = (int)((int)_Dst);
  param_1[1] = (int)((int)_Dst + uVar1 * 4);
  param_1[2] = (int)((int)_Dst + uVar5 * 4);
  return (undefined4 *)(puVar2);
}


// Reference entry 1059f0b0; body size 71 bytes.
#line 1 "ENTRY_1059f0b0"

void __thiscall Recovered_Bulk::FUN_1059f0b0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (int)(*param_1);
  piVar3 = (int *)(*(int **)(iVar2 + 4));
  if (*(char *)((int)piVar3 + 0xd) == '\0') {
    do {
      thunk_FUN_1059f110(param_2,piVar3[2]);
      piVar1 = (int *)((int *)*piVar3);
      thunk_FUN_1148a50e(piVar3,0x30);
      piVar3 = (int *)(piVar1);
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    iVar2 = (int)(*param_1);
  }
  thunk_FUN_1148a50e(iVar2,0x30);
  return;
}


// Reference entry 1059f1a0; body size 73 bytes.
#line 1 "ENTRY_1059f1a0"

int * __thiscall Recovered_Bulk::FUN_1059f1a0(int *param_2,int *param_3)
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


// Reference entry 1059f300; body size 232 bytes.
#line 1 "ENTRY_1059f300"

int * __thiscall Recovered_Bulk::FUN_1059f300(int *param_2,int *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  thunk_FUN_1059f1a0(&local_24,param_3);
  if ((*(char *)(local_1c + 0xd) == '\0') && (*(int *)(local_1c + 0x10) <= *param_3)) {
    *param_2 = (int)(local_1c);
    *(undefined1 *)(param_2 + 1) = 0;

    return (int *)(param_2);
  }
  if (param_1[1] != 0x5555555) {
    uVar1 = (undefined4)(*param_1);

    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x30));

    puVar3[4] = *param_3;
    local_14 = (undefined4 *)(puVar3);
    thunk_FUN_103d6a60(0);
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    iVar4 = (int)(thunk_FUN_105a1750(local_24,local_20,puVar3));
    *param_2 = (int)(iVar4);
    *(undefined1 *)(param_2 + 1) = 1;

    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar2);

 } catch (...) { }
}


// Reference entry 1059f4a0; body size 112 bytes.
#line 1 "ENTRY_1059f4a0"

int __stdcall FUN_1059f4a0(int param_1,int param_2,int param_3)

{
 try {
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  ppvVar1 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar1, param_1 != param_2); param_1 = param_1 + 0x18) {
    thunk_FUN_10deea50(param_1);
    param_3 = (int)(param_3 + 0x18);

  }

  return (int)(param_3);

 } catch (...) { }
}


// Reference entry 1059f5e0; body size 113 bytes.
#line 1 "ENTRY_1059f5e0"

int FUN_1059f5e0(int param_1,int param_2,int param_3)

{
 try {
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  ppvVar1 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar1, param_1 != param_2); param_1 = param_1 + 0x18) {
    thunk_FUN_10deea50(param_1);
    param_3 = (int)(param_3 + 0x18);

  }

  return (int)(param_3);

 } catch (...) { }
}


// Reference entry 1059fd80; body size 129 bytes.
#line 1 "ENTRY_1059fd80"

int __thiscall Recovered_Bulk::FUN_1059fd80(int param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_1059fce0(param_2);

  thunk_FUN_1059fc40(param_2 + 0xc);
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x10));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  if (puVar1 == *(undefined4 **)(param_1 + 0x14)) {
    thunk_FUN_1059ee10(puVar1,&param_3);
  }
  else {
    *puVar1 = (undefined4)(param_3);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 4;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 1059fe30; body size 126 bytes.
#line 1 "ENTRY_1059fe30"

int __thiscall Recovered_Bulk::FUN_1059fe30(int param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_1059fce0(param_2);

  thunk_FUN_1059fc40(param_2 + 0xc);
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  if (puVar1 == *(undefined4 **)(param_1 + 8)) {
    thunk_FUN_1059ef60(puVar1,&param_3);
  }
  else {
    *puVar1 = (undefined4)(param_3);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 105a0190; body size 81 bytes.
#line 1 "ENTRY_105a0190"

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

void __fastcall FID_conflict__Tidy_105a0190(int *param_1)

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


// Reference entry 105a0200; body size 81 bytes.
#line 1 "ENTRY_105a0200"

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

void __fastcall FID_conflict__Tidy_105a0200(int *param_1)

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


// Reference entry 105a0270; body size 81 bytes.
#line 1 "ENTRY_105a0270"

void __fastcall FUN_105a0270(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
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
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// Reference entry 105a02e0; body size 127 bytes.
#line 1 "ENTRY_105a02e0"

void __fastcall FUN_105a02e0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)(*param_1);
  if (iVar2 != 0) {
    iVar3 = (int)(param_1[1]);
    if (iVar2 != iVar3) {
      do {
        thunk_FUN_10def0d0();
        iVar2 = (int)(iVar2 + 0x18);
      } while (iVar2 != iVar3);
      iVar2 = (int)(*param_1);
    }
    uVar1 = (uint)(((param_1[2] - iVar2) / 0x18) * 0x18);
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


// Reference entry 105a0380; body size 145 bytes.
#line 1 "ENTRY_105a0380"

void __fastcall FUN_105a0380(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)(*param_1);
  if (iVar2 != 0) {
    iVar3 = (int)(param_1[1]);
    if (iVar2 != iVar3) {
      do {
        thunk_FUN_105a0380();
        thunk_FUN_105a1c80();
        iVar2 = (int)(iVar2 + 0x1c);
      } while (iVar2 != iVar3);
      iVar2 = (int)(*param_1);
    }
    uVar1 = (uint)(((param_1[2] - iVar2) / 0x1c) * 0x1c);
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


// Reference entry 105a0440; body size 153 bytes.
#line 1 "ENTRY_105a0440"

void __fastcall FUN_105a0440(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (int)(param_1[3]);
  if (iVar1 != 0) {
    uVar3 = (uint)(param_1[5] - iVar1 & 0xfffffffc);
    iVar2 = (int)(iVar1);
    if (0xfff < uVar3) {
      iVar2 = (int)(*(int *)(iVar1 + -4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (iVar1 - iVar2) - 4U) goto LAB_105a04d3;
    }
    thunk_FUN_1148a50e(iVar2,uVar3);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  iVar1 = (int)(*param_1);
  if (iVar1 != 0) {
    uVar3 = (uint)(param_1[2] - iVar1 & 0xfffffffc);
    iVar2 = (int)(iVar1);
    if (0xfff < uVar3) {
      iVar2 = (int)(*(int *)(iVar1 + -4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (iVar1 - iVar2) - 4U) {
LAB_105a04d3:
                    
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


// Reference entry 105a0530; body size 146 bytes.
#line 1 "ENTRY_105a0530"

void __fastcall FUN_105a0530(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)(*(int *)(param_1 + 0x10));
  if (iVar2 != 0) {
    iVar3 = (int)(*(int *)(param_1 + 0x14));
    if (iVar2 != iVar3) {
      do {
        thunk_FUN_105a0530();
        iVar2 = (int)(iVar2 + 0x1c);
      } while (iVar2 != iVar3);
      iVar2 = (int)(*(int *)(param_1 + 0x10));
    }
    uVar1 = (uint)(((*(int *)(param_1 + 0x18) - iVar2) / 0x1c) * 0x1c);
    iVar3 = (int)(iVar2);
    if (0xfff < uVar1) {
      iVar3 = (int)(*(int *)(iVar2 + -4));
      uVar1 = (uint)(uVar1 + 0x23);
      if (0x1f < (iVar2 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar1);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  thunk_FUN_105a02e0();
  return;
}


// Reference entry 105a06a0; body size 238 bytes.
#line 1 "ENTRY_105a06a0"

void __fastcall FUN_105a06a0(int param_1)

{
 try {
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 0x30));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    (**(code **)(*piVar1 + 8))(uVar3);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x28));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x20));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_105a02e0();
  iVar2 = (int)(*(int *)(param_1 + 4));
  if (iVar2 != 0) {
    uVar3 = (uint)(*(int *)(param_1 + 0xc) - iVar2 & 0xfffffff0);
    iVar4 = (int)(iVar2);
    if (0xfff < uVar3) {
      iVar4 = (int)(*(int *)(iVar2 + -4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (iVar2 - iVar4) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar3);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }

  return;

 } catch (...) { }
}


// Reference entry 105a09b0; body size 197 bytes.
#line 1 "ENTRY_105a09b0"

int __thiscall Recovered_Bulk::FUN_105a09b0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  thunk_FUN_1059f1a0(&local_24,param_2);
  if ((*(char *)(local_1c + 0xd) != '\0') || (*param_2 < *(int *)(local_1c + 0x10))) {
    if (param_1[1] == 0x5555555) {
                    
      thunk_FUN_101d7220(uVar2);
    }
    uVar1 = (undefined4)(*param_1);

    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x30));

    puVar3[4] = *param_2;
    local_14 = (undefined4 *)(puVar3);
    thunk_FUN_103d6a60(0);
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    local_1c = (int)(thunk_FUN_105a1750(local_24,local_20,puVar3));
  }

  return (int)(local_1c + 0x18);

 } catch (...) { }
}


// Reference entry 105a0b80; body size 88 bytes.
#line 1 "ENTRY_105a0b80"

int * __thiscall Recovered_Bulk::FUN_105a0b80(int *param_2)
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


// Reference entry 105a10f0; body size 89 bytes.
#line 1 "ENTRY_105a10f0"

void __thiscall Recovered_Bulk::FUN_105a10f0(int param_2,int param_3,int param_4)
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


// Reference entry 105a1160; body size 89 bytes.
#line 1 "ENTRY_105a1160"

void __thiscall Recovered_Bulk::FUN_105a1160(int param_2,int param_3,int param_4)
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


// Reference entry 105a1330; body size 322 bytes.
#line 1 "ENTRY_105a1330"

void __thiscall Recovered_Bulk::FUN_105a1330(uint param_2)
{
  uint *param_1 = (uint *)this;
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (0xaaaaaaa < param_2) {
                    
    thunk_FUN_105a1f30();
  }
  uVar3 = (uint)(*param_1);
  uVar5 = (uint)((int)(param_1[2] - uVar3) / 0x18);
  if (0xaaaaaaa - (uVar5 >> 1) < uVar5) {
    uVar5 = (uint)(0xaaaaaaa);
  }
  else {
    uVar5 = (uint)((uVar5 >> 1) + uVar5);
    if (uVar5 < param_2) {
      uVar5 = (uint)(param_2);
    }
  }
  if (uVar3 != 0) {
    uVar4 = (uint)(param_1[1]);
    if (uVar3 != uVar4) {
      do {
        thunk_FUN_10def0d0();
        uVar3 = (uint)(uVar3 + 0x18);
      } while (uVar3 != uVar4);
      uVar3 = (uint)(*param_1);
    }
    uVar2 = (uint)(((int)(param_1[2] - uVar3) / 0x18) * 0x18);
    uVar4 = (uint)(uVar3);
    if (0xfff < uVar2) {
      uVar4 = (uint)(*(uint *)(uVar3 - 4));
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (uVar3 - uVar4) - 4) goto LAB_105a1431;
    }
    thunk_FUN_1148a50e(uVar4,uVar2);
    *param_1 = (uint)(0);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (uVar5 < 0xaaaaaab) {
    uVar5 = (uint)(uVar5 * 0x18);
    if (uVar5 < 0x1000) {
      if (uVar5 == 0) {
        *param_1 = (uint)(0);
        param_1[1] = 0;
        param_1[2] = 0;
        return;
      }
      pvVar1 = (void *)(operator_new(uVar5));
      *param_1 = (uint)((uint)pvVar1);
      param_1[1] = (uint)pvVar1;
      param_1[2] = (uint)((int)pvVar1 + uVar5);
      return;
    }
    if (uVar5 < uVar5 + 0x23) {
      pvVar1 = (void *)(operator_new(uVar5 + 0x23));
      if (pvVar1 != (void *)0x0) {
        uVar3 = (uint)((int)pvVar1 + 0x23U & 0xffffffe0);
        *(void **)(uVar3 - 4) = pvVar1;
        *param_1 = (uint)(uVar3);
        param_1[1] = uVar3;
        param_1[2] = uVar3 + uVar5;
        return;
      }
LAB_105a1431:
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 105a1b30; body size 81 bytes.
#line 1 "ENTRY_105a1b30"

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

void __fastcall FID_conflict__Tidy_105a1b30(int *param_1)

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


// Reference entry 105a1ba0; body size 81 bytes.
#line 1 "ENTRY_105a1ba0"

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

void __fastcall FID_conflict__Tidy_105a1ba0(int *param_1)

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


// Reference entry 105a1c10; body size 81 bytes.
#line 1 "ENTRY_105a1c10"

void __fastcall FUN_105a1c10(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
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
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// Reference entry 105a1c80; body size 127 bytes.
#line 1 "ENTRY_105a1c80"

void __fastcall FUN_105a1c80(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)(*param_1);
  if (iVar2 != 0) {
    iVar3 = (int)(param_1[1]);
    if (iVar2 != iVar3) {
      do {
        thunk_FUN_10def0d0();
        iVar2 = (int)(iVar2 + 0x18);
      } while (iVar2 != iVar3);
      iVar2 = (int)(*param_1);
    }
    uVar1 = (uint)(((param_1[2] - iVar2) / 0x18) * 0x18);
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


// Reference entry 105a1d20; body size 145 bytes.
#line 1 "ENTRY_105a1d20"

void __fastcall FUN_105a1d20(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)(*param_1);
  if (iVar2 != 0) {
    iVar3 = (int)(param_1[1]);
    if (iVar2 != iVar3) {
      do {
        thunk_FUN_105a1d20();
        thunk_FUN_105a1c80();
        iVar2 = (int)(iVar2 + 0x1c);
      } while (iVar2 != iVar3);
      iVar2 = (int)(*param_1);
    }
    uVar1 = (uint)(((param_1[2] - iVar2) / 0x1c) * 0x1c);
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


// Reference entry 105a1f40; body size 87 bytes.
#line 1 "ENTRY_105a1f40"

void * FUN_105a1f40(uint param_1)

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


// Reference entry 105a1fb0; body size 87 bytes.
#line 1 "ENTRY_105a1fb0"

void * FUN_105a1fb0(uint param_1)

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


// Reference entry 105a2110; body size 90 bytes.
#line 1 "ENTRY_105a2110"

void * FUN_105a2110(uint param_1)

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


// Reference entry 105a23d0; body size 65 bytes.
#line 1 "ENTRY_105a23d0"

void __stdcall FUN_105a23d0(int param_1,int param_2)

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


// Reference entry 105a2450; body size 69 bytes.
#line 1 "ENTRY_105a2450"

void __thiscall Recovered_Bulk::FUN_105a2450(int *param_2,int *param_3)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_1059f1a0(local_c,param_3);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= *param_3)) {
    *param_2 = (int)(local_4);
    return;
  }
  *param_2 = (int)(*param_1);
  return;
}


// Reference entry 105a24b0; body size 402 bytes.
#line 1 "ENTRY_105a24b0"

undefined4 * __thiscall Recovered_Bulk::FUN_105a24b0(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 local_48 [24];
  undefined1 local_30 [24];
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar2 = (int)((**(code **)(*param_1 + 0x10))(DAT_12126b84 ));
  if (iVar2 == 0) {
    *param_2 = (undefined4)(0);
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;

    return (undefined4 *)(param_2);
  }
  if (param_1[1] != 0) {
    puVar4 = (undefined1 *)(local_30);
    (**(code **)(*param_1 + 0x10))(puVar4);
    iVar3 = (int)(thunk_FUN_105a24b0(puVar4));
    iVar2 = (int)(param_1[1]);

    local_14 = (int)(iVar2);
    thunk_FUN_1059fce0(iVar3);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    thunk_FUN_1059fc40(iVar3 + 0xc);
    piVar1 = (int *)((int *)param_2[1]);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    if (piVar1 != (int *)param_2[2]) {
      *piVar1 = (int)(iVar2);
      param_2[1] = param_2[1] + 4;
      thunk_FUN_105a0440();

      return (undefined4 *)(param_2);
    }
    thunk_FUN_1059ef60(piVar1,&local_14);
    thunk_FUN_105a0440();

    return (undefined4 *)(param_2);
  }
  puVar4 = (undefined1 *)(local_48);
  (**(code **)(*param_1 + 0x10))(puVar4);
  iVar2 = (int)(thunk_FUN_105a24b0(puVar4));
  local_18 = (int)(param_1[2]);

  local_14 = (int)(local_18);
  thunk_FUN_1059fce0(iVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  thunk_FUN_1059fc40(iVar2 + 0xc);
  piVar1 = (int *)((int *)param_2[4]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  if (piVar1 == (int *)param_2[5]) {
    thunk_FUN_1059ee10(piVar1,&local_18);
  }
  else {
    *piVar1 = (int)(local_14);
    param_2[4] = param_2[4] + 4;
  }
  thunk_FUN_105a0440();

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 105a29f0; body size 74 bytes.
#line 1 "ENTRY_105a29f0"

longlong __thiscall Recovered_Bulk::FUN_105a29f0(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_1059f1a0(local_c,&param_2);
  if (((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= param_2)) &&
     (local_4 != *(int *)(param_1 + 0x6c))) {
    iVar1 = (int)(thunk_FUN_103d6c80());
    return (longlong)((longlong)iVar1);
  }
  return (longlong)(0);
}


// Reference entry 105a2b50; body size 74 bytes.
#line 1 "ENTRY_105a2b50"

bool __fastcall FUN_105a2b50(int param_1)

{
  undefined4 local_10;
  undefined1 local_c [8];
  int local_4;
  
  local_10 = (undefined4)(0);
  thunk_FUN_1059f1a0(local_c,&local_10);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) < 1)) {
    return (bool)(local_4 != *(int *)(param_1 + 0x6c));
  }
  return (bool)(false);
}


// Reference entry 105a2cd0; body size 310 bytes.
#line 1 "ENTRY_105a2cd0"

void __stdcall FUN_105a2cd0(undefined4 param_1)

{
 try {
  int *piVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  SCLibrary *pSVar5;
  int *piVar6;
  int iVar7;
  int *local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);

  thunk_FUN_105a0840(param_1);
  local_14 = (int *)((int *)0x0);
  thunk_FUN_105a09b0(&local_14);
  thunk_FUN_103d6e00(uVar4);
  pSVar5 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar6 = (int *)((int *)(**(code **)(*(int *)pSVar5 + 0x90))(&local_14));
  piVar1 = (int *)((int *)*piVar6);

  *piVar6 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar6 = (int *)((int *)0x0);
  }
  else {
    piVar6 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  local_1c = (int *)(piVar6);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (piVar1 != (int *)0x0) {
    iVar7 = (int)((**(code **)(*piVar1 + 0x1c))());
    if (iVar7 == 2) {
      bVar2 = (bool)(true);
      goto LAB_105a2d8a;
    }
  }
  bVar2 = (bool)(false);
LAB_105a2d8a:

  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))();
  }

  if (bVar2) {
    local_14 = (int *)((int *)0x1);
    thunk_FUN_105a09b0(&local_14);
    thunk_FUN_103d6e00();
  }
  (**(code **)(**(int **)(local_18 + 0x74) + 8))();
  cVar3 = (char)(thunk_FUN_105af680());
  if (cVar3 != '\0') {
    local_1c = (int *)((int *)0x2);
    thunk_FUN_105a09b0(&local_1c);
    thunk_FUN_103d6e00();
  }

  return;

 } catch (...) { }
}


// Reference entry 105a2e60; body size 337 bytes.
#line 1 "ENTRY_105a2e60"

void FUN_105a2e60(undefined4 param_1)

{
 try {
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (undefined4)(thunk_FUN_10df6360(DAT_12126b84 ));

  cVar1 = (char)(thunk_FUN_10def450(uVar2));

  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    param_1 = (undefined4)(1);
LAB_105a2f30:
    thunk_FUN_105a09b0(&param_1);
    thunk_FUN_103d6e00();

    return;
  }
  uVar2 = (undefined4)(thunk_FUN_10df6290());

  cVar1 = (char)(thunk_FUN_10def450(uVar2));

  thunk_FUN_10def0d0();
  if (cVar1 == '\0') {
    uVar2 = (undefined4)(thunk_FUN_10dfd3a0());

    cVar1 = (char)(thunk_FUN_10def450(uVar2));

    thunk_FUN_10def0d0();
    if (cVar1 != '\0') {
      param_1 = (undefined4)(2);
      goto LAB_105a2f30;
    }
    uVar2 = (undefined4)(thunk_FUN_10df7cf0());

    cVar1 = (char)(thunk_FUN_10def490(uVar2));

    thunk_FUN_105a0530();
    if (cVar1 == '\0') {

      return;
    }

    puVar3 = (undefined4 *)(&local_14);
  }
  else {
    param_1 = (undefined4)(1);
    puVar3 = (undefined4 *)(&param_1);
  }
  thunk_FUN_105a09b0(puVar3);
  thunk_FUN_103d6e70();

  return;

 } catch (...) { }
}


// Reference entry 105a3010; body size 118 bytes.
#line 1 "ENTRY_105a3010"

void __thiscall Recovered_Bulk::FUN_105a3010(undefined4 param_2)
{
  int param_1 = (int )this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  thunk_FUN_105a0840(param_2);
  piVar4 = (int *)((int *)**(int **)(param_1 + 0x6c));
  if (piVar4 != *(int **)(param_1 + 0x6c)) {
    do {
      thunk_FUN_103d6e70();
      piVar2 = (int *)((int *)piVar4[2]);
      if (*(char *)((int)piVar2 + 0xd) == '\0') {
        cVar1 = (char)(*(char *)(*piVar2 + 0xd));
        piVar4 = (int *)(piVar2);
        piVar2 = (int *)((int *)*piVar2);
        while (cVar1 == '\0') {
          cVar1 = (char)(*(char *)(*piVar2 + 0xd));
          piVar4 = (int *)(piVar2);
          piVar2 = (int *)((int *)*piVar2);
        }
      }
      else {
        cVar1 = (char)(*(char *)(piVar4[1] + 0xd));
        piVar3 = (int *)((int *)piVar4[1]);
        piVar2 = (int *)(piVar4);
        while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
          cVar1 = (char)(*(char *)(piVar4[1] + 0xd));
          piVar3 = (int *)((int *)piVar4[1]);
          piVar2 = (int *)(piVar4);
        }
      }
    } while (piVar4 != *(int **)(param_1 + 0x6c));
  }
  return;
}


// Reference entry 105a30b0; body size 177 bytes.
#line 1 "ENTRY_105a30b0"

undefined1 FUN_105a30b0(void)

{
 try {
  int *piVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  int *piVar4;
  int iVar5;
  undefined1 uVar6;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar4 = (int *)((int *)(**(code **)(*(int *)pSVar3 + 0x90))(&local_14,uVar2));
  piVar1 = (int *)((int *)*piVar4);

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
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (piVar1 != (int *)0x0) {
    iVar5 = (int)((**(code **)(*piVar1 + 0x1c))());
    if (iVar5 == 2) {
      uVar6 = (undefined1)(1);
      goto LAB_105a313b;
    }
  }
  uVar6 = (undefined1)(0);
LAB_105a313b:

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined1)(uVar6);

 } catch (...) { }
}


// Reference entry 105a31b0; body size 71 bytes.
#line 1 "ENTRY_105a31b0"

uint __fastcall FUN_105a31b0(int param_1)

{
  uint uVar1;
  undefined4 local_10;
  undefined1 local_c [8];
  int local_4;
  
  local_10 = (undefined4)(0);
  uVar1 = (uint)(thunk_FUN_1059f1a0(local_c,&local_10));
  if (((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) < 1)) &&
     (local_4 != *(int *)(param_1 + 0x6c))) {
    uVar1 = (uint)(thunk_FUN_103d6d80());
    return (uint)(uVar1);
  }
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 105a3d30; body size 125 bytes.
#line 1 "ENTRY_105a3d30"

undefined4 * __thiscall Recovered_Bulk::FUN_105a3d30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  pvVar1 = (void *)(operator_new(0x20));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);

  thunk_FUN_105a4960(param_2,param_2);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105a3df0; body size 220 bytes.
#line 1 "ENTRY_105a3df0"

int * __thiscall Recovered_Bulk::FUN_105a3df0(int *param_2)
{
  int *param_1 = (int *)this;
 try {
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


  *param_1 = (int)(0);
  param_1[1] = 0;
  pvVar7 = (void *)(operator_new(0x38));
  *(void **)pvVar7 = (void *)(pvVar7);
  *(void **)((int)pvVar7 + 4) = pvVar7;
  *(void **)((int)pvVar7 + 8) = pvVar7;
  *(undefined2 *)((int)pvVar7 + 0xc) = 0x101;
  *param_1 = (int)((int)pvVar7);

  uVar8 = (undefined4)(thunk_FUN_105a4bf0(*(undefined4 *)(*param_2 + 4),pvVar7,param_2));
  *(undefined4 *)(*param_1 + 4) = uVar8;
  piVar2 = (int *)((int *)*param_1);
  param_1[1] = param_2[1];
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
    iVar4 = (int)(*(int *)(*param_1 + 4));
    iVar5 = (int)(*(int *)(iVar4 + 8));
    cVar1 = (char)(*(char *)(iVar5 + 0xd));
    while (cVar1 == '\0') {
      cVar1 = (char)(*(char *)(*(int *)(iVar5 + 8) + 0xd));
      iVar4 = (int)(iVar5);
      iVar5 = (int)(*(int *)(iVar5 + 8));
    }
    *(int *)(*param_1 + 8) = iVar4;
  }
  else {
    *piVar2 = (int)((int)piVar2);
    *(int *)(*param_1 + 8) = *param_1;
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 105a4960; body size 113 bytes.
#line 1 "ENTRY_105a4960"

void __thiscall Recovered_Bulk::FUN_105a4960(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)(thunk_FUN_105a4a80(*(undefined4 *)(*param_2 + 4),*param_1,param_3));
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


// Reference entry 105a4fd0; body size 71 bytes.
#line 1 "ENTRY_105a4fd0"

void __thiscall Recovered_Bulk::FUN_105a4fd0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (int)(*param_1);
  piVar3 = (int *)(*(int **)(iVar2 + 4));
  if (*(char *)((int)piVar3 + 0xd) == '\0') {
    do {
      thunk_FUN_105a50c0(param_2,piVar3[2]);
      piVar1 = (int *)((int *)*piVar3);
      thunk_FUN_1148a50e(piVar3,0x18);
      piVar3 = (int *)(piVar1);
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    iVar2 = (int)(*param_1);
  }
  thunk_FUN_1148a50e(iVar2,0x18);
  return;
}


// Reference entry 105a5630; body size 73 bytes.
#line 1 "ENTRY_105a5630"

int * __thiscall Recovered_Bulk::FUN_105a5630(int *param_2,int *param_3)
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


// Reference entry 105a5690; body size 73 bytes.
#line 1 "ENTRY_105a5690"

int * __thiscall Recovered_Bulk::FUN_105a5690(int *param_2,uint *param_3)
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


// Reference entry 105a5b50; body size 214 bytes.
#line 1 "ENTRY_105a5b50"

int * __thiscall Recovered_Bulk::FUN_105a5b50(int *param_2,int *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
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


  uVar2 = (uint)(DAT_12126b84);

  thunk_FUN_105a5630(&local_24,param_3);
  if ((*(char *)(local_1c + 0xd) == '\0') && (*(int *)(local_1c + 0x10) <= *param_3)) {
    *param_2 = (int)(local_1c);
    *(undefined1 *)(param_2 + 1) = 0;

    return (int *)(param_2);
  }
  if (param_1[1] != 0xaaaaaaa) {
    uVar1 = (undefined4)(*param_1);


    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x18));
    puVar3[4] = *param_3;
    puVar3[5] = 0;
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    iVar4 = (int)(thunk_FUN_105aa9d0(local_24,local_20,puVar3));
    *param_2 = (int)(iVar4);
    *(undefined1 *)(param_2 + 1) = 1;

    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar2);

 } catch (...) { }
}


// Reference entry 105a7380; body size 128 bytes.
#line 1 "ENTRY_105a7380"

undefined4 * __thiscall Recovered_Bulk::FUN_105a7380(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  pvVar1 = (void *)(operator_new(0x20));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);

  thunk_FUN_105a4960(param_2,param_2);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105a7470; body size 220 bytes.
#line 1 "ENTRY_105a7470"

int * __thiscall Recovered_Bulk::FUN_105a7470(int *param_2)
{
  int *param_1 = (int *)this;
 try {
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


  *param_1 = (int)(0);
  param_1[1] = 0;
  pvVar7 = (void *)(operator_new(0x38));
  *(void **)pvVar7 = (void *)(pvVar7);
  *(void **)((int)pvVar7 + 4) = pvVar7;
  *(void **)((int)pvVar7 + 8) = pvVar7;
  *(undefined2 *)((int)pvVar7 + 0xc) = 0x101;
  *param_1 = (int)((int)pvVar7);

  uVar8 = (undefined4)(thunk_FUN_105a4bf0(*(undefined4 *)(*param_2 + 4),pvVar7,param_2));
  *(undefined4 *)(*param_1 + 4) = uVar8;
  piVar2 = (int *)((int *)*param_1);
  param_1[1] = param_2[1];
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
    iVar4 = (int)(*(int *)(*param_1 + 4));
    iVar5 = (int)(*(int *)(iVar4 + 8));
    cVar1 = (char)(*(char *)(iVar5 + 0xd));
    while (cVar1 == '\0') {
      cVar1 = (char)(*(char *)(*(int *)(iVar5 + 8) + 0xd));
      iVar4 = (int)(iVar5);
      iVar5 = (int)(*(int *)(iVar5 + 8));
    }
    *(int *)(*param_1 + 8) = iVar4;
  }
  else {
    *piVar2 = (int)((int)piVar2);
    *(int *)(*param_1 + 8) = *param_1;
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 105a7c60; body size 76 bytes.
#line 1 "ENTRY_105a7c60"

void __fastcall FUN_105a7c60(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 105a7cd0; body size 76 bytes.
#line 1 "ENTRY_105a7cd0"

void __fastcall FUN_105a7cd0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 105a7d40; body size 68 bytes.
#line 1 "ENTRY_105a7d40"

void __fastcall FUN_105a7d40(int *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 105a8430; body size 127 bytes.
#line 1 "ENTRY_105a8430"

void __fastcall FUN_105a8430(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 0x30));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x28));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_10def0d0();

  return;

 } catch (...) { }
}


// Reference entry 105a84e0; body size 83 bytes.
#line 1 "ENTRY_105a84e0"

void __fastcall FUN_105a84e0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);

  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 105a8b60; body size 71 bytes.
#line 1 "ENTRY_105a8b60"

int * __thiscall Recovered_Bulk::FUN_105a8b60(int *param_2)
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
  param_1[2] = param_2[2];
  return (int *)(param_1);
}


// Reference entry 105a8f40; body size 181 bytes.
#line 1 "ENTRY_105a8f40"

int __thiscall Recovered_Bulk::FUN_105a8f40(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
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


  uVar2 = (uint)(DAT_12126b84);

  thunk_FUN_105a5630(&local_24,param_2);
  if ((*(char *)(local_1c + 0xd) != '\0') || (*param_2 < *(int *)(local_1c + 0x10))) {
    if (param_1[1] == 0xaaaaaaa) {
                    
      thunk_FUN_101d7220(uVar2);
    }
    uVar1 = (undefined4)(*param_1);


    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x18));
    puVar3[4] = *param_2;
    puVar3[5] = 0;
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    local_1c = (int)(thunk_FUN_105aa9d0(local_24,local_20,puVar3));
  }

  return (int)(local_1c + 0x14);

 } catch (...) { }
}


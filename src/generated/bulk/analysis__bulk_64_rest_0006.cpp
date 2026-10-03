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
extern __declspec(dllimport) int ceil(...);
extern int createActionContextForAction(...);
extern int createSCActionFilterer(...);
extern int createSCRunAsyncIOOperationAction(...);
extern __declspec(dllimport) int fclose(...);
extern __declspec(dllimport) int fseek(...);
extern __declspec(dllimport) int ftell(...);
extern int getSCHousehold(...);
extern int getSingleton(...);
extern int isShuttingDown(...);
extern __declspec(dllimport) int memmove(...);
extern int operator_new(...);
extern __declspec(dllimport) int strncmp(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_1012d130(...);
extern int thunk_FUN_101aa0b0(...);
extern int thunk_FUN_101b94f0(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101ba300(...);
extern int thunk_FUN_101ba530(...);
extern int thunk_FUN_101badc0(...);
extern int thunk_FUN_101bb8a0(...);
extern int thunk_FUN_101c42f0(...);
extern int thunk_FUN_101c6ae0(...);
extern int thunk_FUN_101d7220(...);
extern int thunk_FUN_101da390(...);
extern int thunk_FUN_101f6530(...);
extern int thunk_FUN_101ff410(...);
extern int thunk_FUN_101ff8b0(...);
extern int thunk_FUN_10200aa0(...);
extern int thunk_FUN_10200f40(...);
extern int thunk_FUN_10202e00(...);
extern int thunk_FUN_10203d60(...);
extern int thunk_FUN_10204c50(...);
extern int thunk_FUN_10206850(...);
extern int thunk_FUN_10207fd0(...);
extern int thunk_FUN_1020b1d0(...);
extern int thunk_FUN_1020c230(...);
extern int thunk_FUN_10211630(...);
extern int thunk_FUN_102116d0(...);
extern int thunk_FUN_10219a00(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_10221570(...);
extern int thunk_FUN_10221850(...);
extern int thunk_FUN_102636f0(...);
extern int thunk_FUN_102c2fc0(...);
extern int thunk_FUN_102c3040(...);
extern int thunk_FUN_102cf840(...);
extern int thunk_FUN_102f8990(...);
extern int thunk_FUN_10372530(...);
extern int thunk_FUN_103a3ed0(...);
extern int thunk_FUN_103b70a0(...);
extern int thunk_FUN_103be5e0(...);
extern int thunk_FUN_103beae0(...);
extern int thunk_FUN_103d5ff0(...);
extern int thunk_FUN_103d60a0(...);
extern int thunk_FUN_103d6a60(...);
extern int thunk_FUN_103d6c80(...);
extern int thunk_FUN_103d6d80(...);
extern int thunk_FUN_103d6e00(...);
extern int thunk_FUN_103d6e70(...);
extern int thunk_FUN_104d9cc0(...);
extern int thunk_FUN_104da560(...);
extern int thunk_FUN_104db5b0(...);
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
extern int thunk_FUN_104f8cb0(...);
extern int thunk_FUN_104f9920(...);
extern int thunk_FUN_104fac60(...);
extern int thunk_FUN_104fc050(...);
extern int thunk_FUN_104fc800(...);
extern int thunk_FUN_104fdf60(...);
extern int thunk_FUN_104fe480(...);
extern int thunk_FUN_10500110(...);
extern int thunk_FUN_105009a0(...);
extern int thunk_FUN_10500cf0(...);
extern int thunk_FUN_10508f40(...);
extern int thunk_FUN_1050a540(...);
extern int thunk_FUN_1050e710(...);
extern int thunk_FUN_1050f4c0(...);
extern int thunk_FUN_1051c250(...);
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
extern int thunk_FUN_10533e90(...);
extern int thunk_FUN_1053d830(...);
extern int thunk_FUN_1053d9b0(...);
extern int thunk_FUN_10541eb0(...);
extern int thunk_FUN_10548a00(...);
extern int thunk_FUN_1054da50(...);
extern int thunk_FUN_1054f140(...);
extern int thunk_FUN_10551cb0(...);
extern int thunk_FUN_10556960(...);
extern int thunk_FUN_105640a0(...);
extern int thunk_FUN_10564f10(...);
extern int thunk_FUN_10579010(...);
extern int thunk_FUN_1057a0e0(...);
extern int thunk_FUN_1057a360(...);
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
extern int thunk_FUN_105a0530(...);
extern int thunk_FUN_105a0840(...);
extern int thunk_FUN_105a09b0(...);
extern int thunk_FUN_105a1750(...);
extern int thunk_FUN_105a1f00(...);
extern int thunk_FUN_105a1f10(...);
extern int thunk_FUN_105a1f20(...);
extern int thunk_FUN_105a1f40(...);
extern int thunk_FUN_105a1fb0(...);
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
extern int thunk_FUN_10dae000(...);
extern int thunk_FUN_10db22c0(...);
extern int thunk_FUN_10db5070(...);
extern int thunk_FUN_10db55a0(...);
extern int thunk_FUN_10dd3060(...);
extern int thunk_FUN_10dd4500(...);
extern int thunk_FUN_10deea50(...);
extern int thunk_FUN_10def0d0(...);
extern int thunk_FUN_10def450(...);
extern int thunk_FUN_10def490(...);
extern int thunk_FUN_10df26a0(...);
extern int thunk_FUN_10df6290(...);
extern int thunk_FUN_10df6360(...);
extern int thunk_FUN_10df7cf0(...);
extern int thunk_FUN_10dfd3a0(...);
extern int thunk_FUN_1106b190(...);
extern int thunk_FUN_1106b670(...);
extern int thunk_FUN_1106f6e0(...);
extern int thunk_FUN_1106f8f0(...);
extern int thunk_FUN_11081680(...);
extern int thunk_FUN_11081a40(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_11093530(...);
extern int thunk_FUN_110935f0(...);
extern int thunk_FUN_1109f100(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_110a1010(...);
extern int thunk_FUN_110a10f0(...);
extern int thunk_FUN_110a5ba0(...);
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
extern int thunk_FUN_111a0e70(...);
extern int thunk_FUN_111a2df0(...);
extern int thunk_FUN_111a36f0(...);
extern int thunk_FUN_111c06e0(...);
extern int thunk_FUN_111c0760(...);
extern int thunk_FUN_111cb020(...);
extern int thunk_FUN_111cfc30(...);
extern int thunk_FUN_111de8a0(...);
extern int thunk_FUN_11202480(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11240650(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_11244c70(...);
extern int thunk_FUN_11244ed0(...);
extern int thunk_FUN_11244fe0(...);
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
extern int thunk_FUN_1126f750(...);
extern int thunk_FUN_112740e0(...);
extern int thunk_FUN_112741b0(...);
extern int thunk_FUN_11274a10(...);
extern int thunk_FUN_11274b50(...);
extern int thunk_FUN_112816c0(...);
extern int thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_112a9cf0(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1145c250(...);
extern int thunk_FUN_1145cb70(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148ac80(...);
extern int thunk_FUN_1148b586(...);
extern int DAT_1186d2ee;
extern int DAT_11880fb0;
extern int DAT_11881128;
extern int DAT_118823e4;
extern int DAT_118a1488;
extern int DAT_12126b84;
extern int DAT_121a1e20;
extern int g_lSCObjCount;
extern int ghidra_vftable_RCPBrowseOperationCB;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_RDataSource;
extern int ghidra_vftable_RITQHandler;
extern int ghidra_vftable_RLocationNameExtractorCB;
extern int ghidra_vftable_RSvcManifestDownloadCompletionCB;
extern int ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp;
extern int ghidra_vftable_RUpnpAVTGetMediaInfoAIOOp;
extern int ghidra_vftable_RUpnpCDUpdateObjectAIOOp;
extern int ghidra_vftable_SCAddPlaylistAction;
extern int ghidra_vftable_SCAddQueueOp;
extern int ghidra_vftable_SCAddToNewPlaylistAction;
extern int ghidra_vftable_SCAddToQueueUIAction;
extern int ghidra_vftable_SCArray;
extern int ghidra_vftable_SCCPInfoListDataSource;
extern int ghidra_vftable_SCCompoundAction;
extern int ghidra_vftable_SCContentProviderInfoViewHeaderDataSource;
extern int ghidra_vftable_SCContentSessionManager;
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
extern int ghidra_vftable_SCITearOffObjImpl;
extern int ghidra_vftable_SCInfoTextViewDataSource;
extern int ghidra_vftable_SCInfoViewDynamicCPMenu;
extern int ghidra_vftable_SCInfoViewHelper;
extern int ghidra_vftable_SCInfoviewHeaderInfo;
extern int ghidra_vftable_SCLocalMusicInfoListData;
extern int ghidra_vftable_SCMusicLibraryAlbumViewData;
extern int ghidra_vftable_SCMusicLibraryArtistInfoListData;
extern int ghidra_vftable_SCMusicLibraryArtistViewData;
extern int ghidra_vftable_SCMusicServiceCompleteState;
extern int ghidra_vftable_SCMusicServiceGetLinkCodeState;
extern int ghidra_vftable_SCMusicServiceGetShareUsageState;
extern int ghidra_vftable_SCMusicServiceLinkCodeState;
extern int ghidra_vftable_SCMusicServiceListWaitingState;
extern int ghidra_vftable_SCMusicServiceLoadMSInfoState;
extern int ghidra_vftable_SCMusicServiceLoginInput;
extern int ghidra_vftable_SCMusicServiceLoginPasswordState;
extern int ghidra_vftable_SCMusicServiceMultipleAccountsAddedState;
extern int ghidra_vftable_SCMusicServiceNicknameInput;
extern int ghidra_vftable_SCMusicServicePasswordInput;
extern int ghidra_vftable_SCMusicServiceResultState;
extern int ghidra_vftable_SCMusicServiceSetNicknameErrorState;
extern int ghidra_vftable_SCMusicServiceSetShareUsageState;
extern int ghidra_vftable_SCNewWizLifecycleRecorder;
extern int ghidra_vftable_SCOpAddFavorites;
extern int ghidra_vftable_SCOpDownloadServiceManifestFiles;
extern int ghidra_vftable_SCOpImpl;
extern int ghidra_vftable_SCOpLookupMetadata;
extern int ghidra_vftable_SCOpRef;
extern int ghidra_vftable_SCOpWithProgressInfo;
extern int ghidra_vftable_SCPlayMenuAddDescriptor;
extern int ghidra_vftable_SCPlayMenuPlayNextDescriptor;
extern int ghidra_vftable_SCPlayNextUIAction;
extern int ghidra_vftable_SCRadioPickCityBrowseItem;
extern int ghidra_vftable_SCRadioSetZIPAction;
extern int ghidra_vftable_SCRadioSetZIPDescriptor;
extern int ghidra_vftable_SCRequireTokenActionFactory;
extern int ghidra_vftable_SCSelectedItemsAddToQueueAtIdxAction;
extern int ghidra_vftable_SCSelectedItemsPlayNextAction;
extern int ghidra_vftable_SCSelectedItemsReplaceQueueAction;
extern int ghidra_vftable_SCSwfObjHHListener;
extern int ghidra_vftable_SCTimerInternal;
extern int ghidra_vftable_SCTimerUser;
extern int ghidra_vftable_SCToggleScrobbleAction;
extern int ghidra_vftable_SCWizardState;
extern int ghidra_vftable_SCWizardStateFor;
extern int ghidra_vftable_sc_Timer;
extern int in_EAX;
extern int in_stack_0000002c;
extern int unaff_EBX;
extern undefined1 LAB_10024e4c[];
extern undefined1 LAB_104fc114[];
extern undefined1 LAB_104fc12f[];
extern undefined1 LAB_1052227b[];
extern undefined1 LAB_10525896[];
extern undefined1 LAB_1052589c[];
extern undefined1 LAB_10530c26[];
extern undefined1 LAB_10540f3f[];
extern undefined1 LAB_1054ce66[];
extern undefined1 LAB_1054dce6[];
extern undefined1 LAB_1054dcec[];
extern undefined1 LAB_10556f8f[];
extern undefined1 LAB_105806ad[];
extern undefined1 LAB_10594e11[];
extern undefined1 LAB_10595eb7[];
extern undefined1 LAB_1059e981[];
extern undefined1 LAB_1059e9c1[];
extern undefined1 LAB_105a2d8a[];
extern undefined1 LAB_105a2f30[];
extern undefined1 LAB_105a313b[];
extern undefined1 LAB_115896ce[];
extern undefined1 LAB_1158971e[];
extern undefined1 LAB_11589b0d[];
extern undefined1 LAB_11589b4d[];
extern undefined1 LAB_11589c5b[];
extern undefined1 LAB_11589c9d[];
extern undefined1 LAB_11589ceb[];
extern undefined1 LAB_1158a3ad[];
extern undefined1 LAB_1158a3ed[];
extern undefined1 LAB_1158a42d[];
extern undefined1 LAB_1158a96d[];
extern undefined1 LAB_1158a9b4[];
extern undefined1 LAB_1158accd[];
extern undefined1 LAB_1158ad7d[];
extern undefined1 LAB_1158adbd[];
extern undefined1 LAB_1158b02d[];
extern undefined1 LAB_1158b12d[];
extern undefined1 LAB_1158b183[];
extern undefined1 LAB_1158b1db[];
extern undefined1 LAB_1158b880[];
extern undefined1 LAB_1158bbfc[];
extern undefined1 LAB_1158c01c[];
extern undefined1 LAB_1158c134[];
extern undefined1 LAB_1158c184[];
extern undefined1 LAB_1158c2dd[];
extern undefined1 LAB_1158c580[];
extern undefined1 LAB_1158c5cd[];
extern undefined1 LAB_1158c626[];
extern undefined1 LAB_1158c8b4[];
extern undefined1 LAB_1158cf1d[];
extern undefined1 LAB_1158cf68[];
extern undefined1 LAB_1158d3f0[];
extern undefined1 LAB_1158d540[];
extern undefined1 LAB_1158d5d0[];
extern undefined1 LAB_1158d9b4[];
extern undefined1 LAB_1158dd84[];
extern undefined1 LAB_1158ddd4[];
extern undefined1 LAB_1158e08d[];
extern undefined1 LAB_1158e0cd[];
extern undefined1 LAB_1158e62d[];
extern undefined1 LAB_1158e7dd[];
extern undefined1 LAB_1158e8ec[];
extern undefined1 LAB_1158ebdd[];
extern undefined1 LAB_1158ec10[];
extern undefined1 LAB_1158f07d[];
extern undefined1 LAB_1158f0bd[];
extern undefined1 LAB_1158f0fd[];
extern undefined1 LAB_1158f13d[];
extern undefined1 LAB_1158f4ab[];
extern undefined1 LAB_1158f4f5[];
extern undefined1 LAB_1158f535[];
extern undefined1 LAB_1158f5d5[];
extern undefined1 LAB_1158f600[];
extern undefined1 LAB_1158ff24[];
extern undefined1 LAB_11590447[];
extern undefined1 LAB_11590497[];
extern undefined1 LAB_115904e7[];
extern undefined1 LAB_11590537[];
extern undefined1 LAB_1159068c[];
extern undefined1 LAB_11590a74[];
extern undefined1 LAB_11590b94[];
extern undefined1 LAB_11590e1d[];
extern undefined1 LAB_11590f09[];
extern undefined1 LAB_11590fd8[];
extern undefined1 LAB_11591054[];
extern undefined1 LAB_1159109d[];
extern undefined1 LAB_115910dd[];
extern undefined1 LAB_1159111d[];
extern undefined1 LAB_11591948[];
extern undefined1 LAB_11591aa0[];
extern undefined1 LAB_11591ad0[];
extern undefined1 LAB_11591ce0[];
extern undefined1 LAB_115921c0[];
extern undefined1 LAB_1159299d[];
extern undefined1 LAB_11592a75[];
extern undefined1 LAB_11592bf7[];
extern undefined1 LAB_11592e13[];
extern undefined1 LAB_11592e94[];
extern undefined1 LAB_11592ed7[];
extern undefined1 LAB_11592f27[];
extern undefined1 LAB_11593123[];
extern undefined1 LAB_11593177[];
extern undefined1 LAB_115933f4[];
extern undefined1 LAB_11593434[];
extern undefined1 LAB_11593477[];
extern undefined1 LAB_11593557[];
extern undefined1 LAB_115939d3[];
extern undefined1 LAB_11593a8f[];
extern undefined1 LAB_11593b4d[];
extern undefined1 LAB_11593d5e[];
extern undefined1 LAB_11593dac[];
extern undefined1 LAB_11593e3c[];
extern undefined1 LAB_11593e8c[];
extern undefined1 LAB_11593ecd[];
extern undefined1 LAB_115952cd[];
extern undefined1 LAB_115955e5[];
extern undefined1 LAB_11595895[];
extern undefined1 LAB_115958dd[];
extern undefined1 LAB_11596100[];
extern undefined1 LAB_11596130[];
extern undefined1 LAB_11596160[];
extern undefined1 LAB_115964a5[];
extern undefined1 LAB_115973c4[];
extern undefined1 LAB_115976e5[];
extern undefined1 LAB_115978dd[];
extern undefined1 LAB_11597be4[];
extern undefined1 LAB_11597e8d[];
extern undefined1 LAB_11597ecd[];
extern undefined1 LAB_11597f6d[];
extern undefined1 LAB_11597fcb[];
extern undefined1 LAB_1159800d[];
extern undefined1 LAB_11598165[];
extern undefined1 LAB_115985ed[];
extern undefined1 LAB_1159862d[];
extern undefined1 LAB_1159866d[];
extern undefined1 LAB_115991ed[];
extern undefined1 LAB_115992e0[];
extern undefined1 LAB_1159931d[];
extern undefined1 LAB_115993cd[];
extern undefined1 LAB_115995f4[];
extern undefined1 LAB_1159994d[];
extern undefined1 LAB_11599b79[];
extern undefined1 LAB_1159a7a5[];
extern undefined1 LAB_1159a983[];
extern undefined1 LAB_1159a9d5[];
extern undefined1 LAB_1159aa67[];
extern undefined1 LAB_1159abcc[];
extern undefined1 LAB_1159afe4[];
extern undefined1 LAB_1159bbdd[];
extern undefined1 LAB_1159bc3b[];
extern undefined1 LAB_1159bd93[];
extern undefined1 LAB_1159c09d[];
extern undefined1 LAB_1159c24b[];
extern undefined1 LAB_1159c31b[];
extern undefined1 LAB_1159c43e[];
extern undefined1 LAB_1159c870[];
extern undefined1 LAB_1159c8a0[];
extern undefined1 LAB_1159c8d0[];
extern undefined1 LAB_1159c900[];
extern undefined1 LAB_1159f26c[];
extern undefined1 LAB_1159f329[];
extern undefined1 LAB_1159f485[];
extern undefined1 LAB_1159fa3d[];
extern undefined1 LAB_1159fa7d[];
extern undefined1 LAB_1159fc2d[];
extern undefined1 LAB_115a0265[];
extern undefined1 LAB_115a108e[];
extern undefined1 LAB_115a14de[];
extern undefined1 LAB_115a1685[];
extern undefined1 LAB_115a17d9[];
extern undefined1 LAB_115a19f9[];
extern undefined1 LAB_115a261d[];
extern undefined1 LAB_115a267b[];
extern undefined1 LAB_115a2a99[];
extern undefined1 LAB_115a2c0b[];
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
extern undefined1 LAB_115a530d[];
extern undefined1 LAB_115a5395[];
extern undefined1 LAB_115a616d[];
extern undefined1 LAB_115a62ed[];
extern undefined1 LAB_115a645d[];
extern undefined1 LAB_115a64dd[];
extern undefined1 LAB_115a651d[];
extern undefined1 LAB_115a655d[];
extern undefined1 LAB_115a65c0[];
extern undefined1 LAB_115a665d[];
extern undefined1 LAB_115a687d[];
extern undefined1 LAB_115a6c3d[];
extern undefined1 LAB_115a6c87[];
extern undefined1 LAB_115a6cd5[];
extern undefined1 LAB_115a6d55[];
extern undefined1 LAB_115a6d8d[];
extern undefined1 LAB_115a6dcd[];
extern undefined1 LAB_115a6e0d[];
extern undefined1 LAB_115a6e58[];
extern undefined1 LAB_115a6ea8[];
extern undefined1 LAB_115a6efb[];
extern undefined1 LAB_115a6f60[];
extern undefined1 LAB_115a6fa5[];
extern undefined1 LAB_115a7195[];
extern undefined1 LAB_115a71e5[];
extern undefined1 LAB_115a7235[];
extern undefined1 LAB_115a73cd[];
extern undefined1 LAB_115a74ed[];
extern undefined1 LAB_115a752d[];
extern undefined1 LAB_115a7acd[];
extern undefined1 LAB_115a7e4d[];
extern undefined1 LAB_115a7e8d[];
extern undefined1 LAB_115a7ecd[];
extern undefined1 LAB_115a7f0d[];
extern undefined1 LAB_115a7f4d[];
extern undefined1 LAB_115a7f8d[];
extern undefined1 LAB_115a801b[];
extern undefined1 LAB_115a81d0[];
extern undefined1 LAB_115a8350[];
extern undefined1 LAB_115a83ed[];
extern int *stack0x00000008;
extern int *stack0xfffffffc;
extern void *ExceptionList;
namespace std {}
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int createActionContextForAction(A...); template<class... A> int createSCRunAsyncIOOperationAction(A...); template<class... A> int getSCHousehold(A...); template<class... A> int getSingleton(A...); template<class... A> int isShuttingDown(A...); };
struct SCRemoveServiceDescriptor { char _pad; SCRemoveServiceDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int getAction; };
namespace std { template<class...> struct _Parallelism_allocator { char _pad; _Parallelism_allocator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct allocator { char _pad; allocator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct greater { char _pad; greater(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct priority_queue { char _pad; priority_queue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct vector { char _pad; vector(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
typedef void *CHN;
typedef void *CPUDN;
typedef void *DIDL;
typedef void *LOCALMUSICBROWSE_CPUDN;
typedef void *OID;
typedef void *PL;
typedef void *SA_RINCON;
typedef void *WARNING;
struct AVTransport { char _pad; AVTransport(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AccountNickname { char _pad; AccountNickname(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AccountUDN { char _pad; AccountUDN(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Action { char _pad; Action(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Add { char _pad; Add(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AddMultipleURIsToQueue { char _pad; AddMultipleURIsToQueue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AddQueueMultiTracksOp { char _pad; AddQueueMultiTracksOp(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AddQueueTracksOp { char _pad; AddQueueTracksOp(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AddToQueue { char _pad; AddToQueue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AssignedObjectID { char _pad; AssignedObjectID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Base { char _pad; Base(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Before { char _pad; Before(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ContainerMetaData { char _pad; ContainerMetaData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ContainerURI { char _pad; ContainerURI(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct CurrentTagValue { char _pad; CurrentTagValue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct CurrentTrack { char _pad; CurrentTrack(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct CurrentURI { char _pad; CurrentURI(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct CurrentURIMetaData { char _pad; CurrentURIMetaData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DesiredFirstTrackNumberEnqueued { char _pad; DesiredFirstTrackNumberEnqueued(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Different { char _pad; Different(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct EnqueueAsNext { char _pad; EnqueueAsNext(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct EnqueuedURI { char _pad; EnqueuedURI(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct EnqueuedURIMetaData { char _pad; EnqueuedURIMetaData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct EnqueuedURIs { char _pad; EnqueuedURIs(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct EnqueuedURIsMetaData { char _pad; EnqueuedURIsMetaData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Error { char _pad; Error(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct FID_conflict__Tidy { char _pad; FID_conflict__Tidy(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Failed { char _pad; Failed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct FirstTrackNumberEnqueued { char _pad; FirstTrackNumberEnqueued(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Function { char _pad; Function(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct GetMediaInfo { char _pad; GetMediaInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct InstanceID { char _pad; InstanceID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Invalid { char _pad; Invalid(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Library { char _pad; Library(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Lite { char _pad; Lite(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Matches { char _pad; Matches(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct MediaDuration { char _pad; MediaDuration(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct MediaServer { char _pad; MediaServer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Multiple { char _pad; Multiple(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct MusicServiceWizard { char _pad; MusicServiceWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Names { char _pad; Names(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct NewQueueLength { char _pad; NewQueueLength(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct NewTagValue { char _pad; NewTagValue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct NewUpdateID { char _pad; NewUpdateID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Next { char _pad; Next(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct NextURI { char _pad; NextURI(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct NextURIMetaData { char _pad; NextURIMetaData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct NrTracks { char _pad; NrTracks(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct NumTracksAdded { char _pad; NumTracksAdded(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct NumberOfURIs { char _pad; NumberOfURIs(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ObjectID { char _pad; ObjectID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct PlayMedium { char _pad; PlayMedium(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct PlayNext { char _pad; PlayNext(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct PlayNow { char _pad; PlayNow(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct PlaySourceOp { char _pad; PlaySourceOp(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Polling { char _pad; Polling(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Read { char _pad; Read(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RecordMedium { char _pad; RecordMedium(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Release { char _pad; Release(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Rename { char _pad; Rename(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ReplaceQueue { char _pad; ReplaceQueue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCAddPlaylistDescriptor { char _pad; SCAddPlaylistDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIAction { char _pad; SCIAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIOp { char _pad; SCIOp(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCRenamePlaylistAction { char _pad; SCRenamePlaylistAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Service { char _pad; Service(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ServiceOutageManager { char _pad; ServiceOutageManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Speed { char _pad; Speed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Starting { char _pad; Starting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Studio { char _pad; Studio(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Title { char _pad; Title(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Transition { char _pad; Transition(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Transitioning { char _pad; Transitioning(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct UpdateID { char _pad; UpdateID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct UpdateObject { char _pad; UpdateObject(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Visual { char _pad; Visual(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct With { char _pad; With(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Wizard { char _pad; Wizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WorkingState { char _pad; WorkingState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WriteStatus { char _pad; WriteStatus(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered_Bulk { char _pad; int __thiscall FUN_104f6be0(int param_2); undefined1 * __thiscall FUN_104f7610(undefined1 *param_2); undefined1 * __thiscall FUN_104f7700(undefined1 *param_2); undefined4 * __thiscall FUN_104f9d60(undefined4 *param_2); undefined4 * __thiscall FUN_104f9ed0(undefined4 param_2); undefined4 * __thiscall FUN_104fbdf0(byte param_2); void __thiscall FUN_104fc050(uint param_2,undefined4 param_3); void __thiscall FUN_104fc1b0(int param_2,int param_3,int param_4); float __thiscall FUN_104fc2f0(int param_2); void __thiscall FUN_104fce70(int param_2); void __thiscall FUN_104fcf60(int param_2); undefined4 __thiscall FUN_104ff310(int *param_2); void __thiscall FUN_104ffc90(int *param_2); void __thiscall FUN_10500080(undefined4 param_2); undefined4 * __thiscall FUN_10501180(undefined4 param_2); undefined4 * __thiscall FUN_10501300(undefined4 param_2); undefined4 * __thiscall FUN_105013a0(undefined4 param_2); undefined4 * __thiscall FUN_10501b10(undefined4 param_2); undefined4 * __thiscall FUN_10501ea0(undefined4 param_2); undefined4 * __thiscall FUN_10501f50(undefined4 param_2); undefined4 * __thiscall FUN_10502000(undefined4 param_2); undefined4 * __thiscall FUN_10504ba0(byte param_2); undefined4 * __thiscall FUN_10504dd0(byte param_2); void __thiscall FUN_105055e0(undefined4 *param_2); int * __thiscall FUN_10509510(int *param_2,uint param_3); int * __thiscall FUN_105099e0(int *param_2,undefined4 param_3,int param_4); int * __thiscall FUN_1050a7f0(int *param_2); int __thiscall FUN_1050b730(int param_2); int * __thiscall FUN_1050ec80(int *param_2); undefined4 * __thiscall FUN_1050ed30(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7); undefined4 * __thiscall FUN_1050f680(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10510980(byte param_2); void __thiscall FUN_10513e90(undefined4 *param_2); undefined4 __thiscall FUN_10514060(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10514160(undefined4 *param_2); int * __thiscall FUN_10515e30(int *param_2); int * __thiscall FUN_105168f0(int *param_2); int * __thiscall FUN_10516d00(int *param_2); undefined4 * __thiscall FUN_1051b5b0(int param_2); undefined4 * __thiscall FUN_1051b640(int param_2); undefined4 * __thiscall FUN_1051b6d0(int param_2); undefined4 * __thiscall FUN_1051b760(int param_2); undefined4 * __thiscall FUN_1051c250(int param_2,undefined4 param_3); undefined4 * __thiscall FUN_1051c3e0(int param_2); undefined4 * __thiscall FUN_1051c4c0(int param_2); undefined4 * __thiscall FUN_1051c6b0(int param_2); int * __thiscall FUN_1051f810(int *param_2,int *param_3); void __thiscall FUN_10520ff0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6); void __thiscall FUN_10521240(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6); void __thiscall FUN_10521490(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6); void __thiscall FUN_105216d0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6); void __thiscall FUN_105220f0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,char param_7); void __thiscall FUN_10523c70(undefined1 param_2); int __thiscall FUN_105248a0(int param_2); int __thiscall FUN_10524920(int param_2); int __thiscall FUN_105249a0(int param_2); int __thiscall FUN_10524a20(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6); undefined4 * __thiscall FUN_10525750(void *param_2,undefined4 *param_3); undefined4 * __thiscall FUN_105260a0(undefined4 param_2,undefined1 param_3); undefined4 * __thiscall FUN_105263b0(undefined4 param_2,undefined1 param_3); undefined4 * __thiscall FUN_10526770(undefined4 param_2); undefined4 * __thiscall FUN_10526830(undefined4 param_2); undefined4 * __thiscall FUN_10526950(int *param_2); undefined4 * __thiscall FUN_10526a50(int *param_2); undefined4 * __thiscall FUN_10526af0(int *param_2); undefined4 * __thiscall FUN_10528c70(int *param_2,int *param_3); undefined4 * __thiscall FUN_1052b8a0(byte param_2); void __thiscall FUN_1052c780(int param_2,int param_3,int param_4); void __thiscall FUN_1052cd00(int param_2,short param_3); void __thiscall FUN_1052cd80(int param_2); void __thiscall FUN_105333d0(int *param_2); undefined4 * __thiscall FUN_10533930(undefined4 *param_2); undefined4 * __thiscall FUN_10535260(undefined4 *param_2); undefined4 * __thiscall FUN_10535510(undefined4 *param_2); undefined4 * __thiscall FUN_10535680(undefined4 *param_2); undefined4 * __thiscall FUN_105362b0(undefined4 *param_2,int param_3); undefined4 * __thiscall FUN_10536390(undefined4 *param_2,undefined4 param_3); undefined4 * __thiscall FUN_1053cf30(undefined4 *param_2); undefined4 * __thiscall FUN_1053cfa0(undefined4 *param_2); void __thiscall FUN_1053e390(char param_2); void __thiscall FUN_10542f80(undefined4 param_2); void __thiscall FUN_10543030(int param_2); void __thiscall FUN_1054aaa0(int *param_2); undefined4 __thiscall FUN_1054b470(undefined4 param_2); void __thiscall FUN_1054b890(int param_2); void __thiscall FUN_1054b910(int param_2,int *param_3); void __thiscall FUN_1054cd70(int *param_2); int __thiscall FUN_1054d650(int param_2); undefined4 * __thiscall FUN_1054dba0(void *param_2,undefined4 *param_3); undefined4 * __thiscall FUN_1054eb80(int param_2); undefined4 * __thiscall FUN_1054ec10(int param_2); undefined4 * __thiscall FUN_1054ef20(undefined4 param_2); undefined4 * __thiscall FUN_1054f4e0(undefined4 param_2,undefined4 param_3,int *param_4); void __thiscall FUN_10550d50(int param_2,int param_3,int param_4); void __thiscall FUN_10550dc0(int param_2,int param_3,int param_4); void __thiscall FUN_105517b0(int param_2); void __thiscall FUN_10551ef0(int *param_2,undefined4 param_3); void __thiscall FUN_10556830(undefined4 param_2,undefined4 param_3); int __thiscall FUN_10557950(int param_2); undefined4 * __thiscall FUN_1055ac10(byte param_2); int * __thiscall FUN_1055d490(int *param_2); undefined4 * __thiscall FUN_1055d710(undefined4 *param_2,undefined4 param_3); undefined4 * __thiscall FUN_10562c70(int param_2); undefined4 * __thiscall FUN_10562d30(int param_2); undefined4 * __thiscall FUN_10563140(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); undefined4 * __thiscall FUN_10563670(int *param_2,int param_3); undefined4 * __thiscall FUN_10563ec0(undefined4 *param_2,undefined4 *param_3); undefined4 * __thiscall FUN_10564600(undefined4 param_2,undefined4 param_3,int param_4); undefined4 * __thiscall FUN_10564870(undefined4 param_2,undefined4 param_3,int param_4); undefined4 * __thiscall FUN_10564b80(int *param_2,int param_3); undefined4 * __thiscall FUN_10567b50(byte param_2); undefined4 * __thiscall FUN_10567ca0(byte param_2); void __thiscall FUN_1056b4a0(int *param_2,undefined4 param_3); undefined4 * __thiscall FUN_10573650(undefined4 *param_2,int *param_3); void __thiscall FUN_10574010(undefined4 *param_2,undefined4 param_3); void __thiscall FUN_105761a0(undefined4 param_2,undefined4 param_3); bool __thiscall FUN_10576a10(int *param_2); int __thiscall FUN_105791b0(undefined4 param_2); undefined4 __thiscall FUN_10579340(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_105793a0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10579d90(undefined4 param_2,undefined4 param_3,byte param_4,
            undefined4 param_5,undefined4 param_6,int *param_7); int * __thiscall FUN_1057dec0(int *param_2,undefined4 param_3); int * __thiscall FUN_1057fb60(int *param_2,undefined4 param_3); /* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void __thiscall FUN_10580350(undefined4 *param_2); undefined4 * __thiscall FUN_10580a10(undefined4 *param_2); int * __thiscall FUN_10581410(int *param_2); int __thiscall FUN_10585de0(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_10585f50(undefined4 param_2); undefined4 * __thiscall FUN_10586420(int param_2); undefined4 * __thiscall FUN_10586510(int param_2); undefined4 * __thiscall FUN_105877c0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5); undefined4 * __thiscall FUN_10587d70(int param_2); void __thiscall FUN_10589c90(int *param_2,undefined4 param_3); void __thiscall FUN_1058a0c0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6); void __thiscall FUN_1058d260(uint param_2); void __thiscall FUN_1058d390(uint param_2); undefined4 __thiscall FUN_1058ded0(undefined4 param_2,undefined4 param_3); /* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void __thiscall FUN_10590fb0(int param_2,int param_3); void __thiscall FUN_10592100(undefined4 param_2,undefined4 param_3); void __thiscall FUN_10592cf0(int param_2,undefined4 param_3); void __thiscall FUN_10592de0(int param_2); undefined4 * __thiscall FUN_10594ab0(undefined4 param_2); undefined4 * __thiscall FUN_10594cf0(int *param_2); void __thiscall FUN_10595dc0(uint param_2); void __thiscall FUN_10596780(int param_2); undefined4 * __thiscall FUN_1059b440(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5); void __thiscall FUN_1059b670(undefined4 param_2); int * __thiscall FUN_1059b760(int *param_2,uint *param_3); int * __thiscall FUN_1059b890(int *param_2,uint *param_3); undefined4 * __thiscall FUN_1059bbd0(undefined4 param_2); undefined4 * __thiscall FUN_1059bd30(undefined4 param_2); undefined4 * __thiscall FUN_1059bde0(undefined4 *param_2); int __thiscall FUN_1059c220(uint *param_2); void __thiscall FUN_1059cd60(int param_2); void __thiscall FUN_1059d030(int *param_2,uint *param_3); bool __thiscall FUN_1059d120(uint param_2); void __thiscall FUN_1059d200(uint param_2); void __thiscall FUN_1059d940(uint param_2); undefined4 * __thiscall FUN_1059e4c0(undefined4 *param_2); undefined4 * __thiscall FUN_1059e580(undefined4 *param_2); undefined4 * __thiscall FUN_1059e720(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5); void __thiscall FUN_1059e8c0(void *param_2,int param_3); undefined4 * __thiscall FUN_1059ee10(void *param_2,undefined4 *param_3); undefined4 * __thiscall FUN_1059ef60(void *param_2,undefined4 *param_3); void __thiscall FUN_1059f0b0(undefined4 param_2); int * __thiscall FUN_1059f1a0(int *param_2,int *param_3); int * __thiscall FUN_1059f300(int *param_2,int *param_3); undefined4 * __thiscall FUN_1059faa0(undefined4 param_2); undefined4 * __thiscall FUN_1059fc40(undefined4 *param_2); undefined4 * __thiscall FUN_1059fce0(undefined4 *param_2); int __thiscall FUN_1059fd80(int param_2,undefined4 param_3); int __thiscall FUN_1059fe30(int param_2,undefined4 param_3); undefined4 * __thiscall FUN_1059ffb0(undefined4 param_2,undefined4 param_3); int __thiscall FUN_105a09b0(int *param_2); int * __thiscall FUN_105a0b80(int *param_2); void __thiscall FUN_105a10f0(int param_2,int param_3,int param_4); void __thiscall FUN_105a1160(int param_2,int param_3,int param_4); void __thiscall FUN_105a2450(int *param_2,int *param_3); longlong __thiscall FUN_105a29f0(int param_2); void __thiscall FUN_105a3010(undefined4 param_2); undefined4 * __thiscall FUN_105a3910(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5); undefined4 * __thiscall FUN_105a3d30(undefined4 param_2); int * __thiscall FUN_105a3df0(int *param_2); void __thiscall FUN_105a4960(int *param_2,undefined4 param_3); void __thiscall FUN_105a4fd0(undefined4 param_2); int * __thiscall FUN_105a5630(int *param_2,int *param_3); int * __thiscall FUN_105a5690(int *param_2,uint *param_3); int * __thiscall FUN_105a5b50(int *param_2,int *param_3); undefined4 * __thiscall FUN_105a6fb0(undefined4 param_2); undefined4 * __thiscall FUN_105a7030(undefined4 param_2); undefined4 * __thiscall FUN_105a70b0(undefined4 param_2); undefined4 * __thiscall FUN_105a7130(undefined4 param_2); undefined4 * __thiscall FUN_105a7380(undefined4 param_2); int * __thiscall FUN_105a7470(int *param_2); undefined4 * __thiscall FUN_105a7700(undefined4 *param_2); int __thiscall FUN_105a8f40(int *param_2); };
using namespace std;
void __fastcall FUN_104ef480(int param_1);
undefined4 * FUN_104f9350(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * FUN_104f93f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_104f9920(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __fastcall FUN_104fa120(undefined4 *param_1);
void __fastcall FUN_104fac60(int param_1);
void __fastcall FUN_104face0(int *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_104fb060(int *param_1);
void __fastcall FUN_104fb0d0(int *param_1);
void __fastcall FUN_104fb350(undefined4 *param_1);
void __fastcall FUN_104fb4f0(int *param_1);
void __fastcall FUN_104fd000(float *param_1);
void __fastcall FUN_104fd160(int *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_104fd1f0(int *param_1);
void __fastcall FUN_104fd260(int *param_1);
undefined4 * __stdcall FUN_104fd2e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_104fd380(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __stdcall FUN_104fd420(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __stdcall FUN_104ffbd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void __fastcall FUN_10503a10(undefined4 *param_1);
undefined4 * FUN_10505a60(undefined4 *param_1);
undefined4 * FUN_10507000(undefined4 *param_1,int param_2);
undefined4 * __stdcall FUN_10507440(undefined4 *param_1);
void __stdcall FUN_10507530(undefined4 *param_1);
undefined4 * __stdcall FUN_10507c20(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4);
undefined4 FUN_10507cf0(undefined4 *param_1,int *param_2);
void FUN_10509440(undefined4 param_1,undefined4 param_2);
int __fastcall FUN_10509760(int param_1);
int __fastcall FUN_105097f0(int param_1);
undefined4 __fastcall FUN_10509860(int param_1);
int __fastcall FUN_1050ac40(int param_1);
int __fastcall FUN_1050acb0(int param_1);
int __fastcall FUN_1050ad20(int param_1);
void __fastcall FUN_1050fed0(int *param_1);
void __fastcall FUN_1050fff0(int *param_1);
undefined4 * FUN_10512010(undefined4 *param_1,undefined4 param_2);
undefined4 * __stdcall FUN_10513710(undefined4 *param_1);
void __stdcall FUN_10513800(undefined4 *param_1);
void __fastcall FUN_105192b0(int param_1);
void __stdcall FUN_10519480(int param_1);
void __fastcall FUN_1051a500(int param_1);
void __fastcall FUN_1051c800(int *param_1);
void __fastcall FUN_10520f40(int param_1);
void __fastcall FUN_10523350(int param_1);
void __fastcall FUN_10523440(int param_1);
void __fastcall FUN_10523520(int param_1);
void __fastcall FUN_105235a0(int param_1);
void __fastcall FUN_10524c00(int param_1);
void __fastcall FUN_105290f0(int *param_1);
void __fastcall FUN_10529150(int *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_105291c0(int *param_1);
void __fastcall FUN_10529aa0(undefined4 *param_1);
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
undefined4 * __fastcall FUN_1052fea0(int param_1);
undefined4 * __fastcall FUN_1052ffa0(int param_1);
undefined4 __fastcall FUN_10530120(int param_1);
undefined4 * __fastcall FUN_105309a0(int param_1);
undefined4 * __fastcall FUN_10530b00(int param_1);
undefined4 __fastcall FUN_10531b70(int param_1);
undefined4 __fastcall FUN_10531c40(int param_1);
undefined4 * __fastcall FUN_10531cd0(int param_1);
undefined4 * __fastcall FUN_10532170(int *param_1);
undefined4 __fastcall FUN_10532240(int param_1);
undefined4 __fastcall FUN_10533e90(int *param_1);
undefined4 __fastcall FUN_10534e70(int param_1);
int * FUN_10535050(int *param_1);
undefined4 __fastcall FUN_105357f0(int *param_1);
undefined4 __fastcall FUN_10535fd0(int param_1);
int __fastcall FUN_10536180(int param_1);
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
undefined4 __fastcall FUN_105411c0(int *param_1);
undefined4 __fastcall FUN_105415b0(int param_1);
undefined4 __fastcall FUN_10541610(int param_1);
undefined4 __fastcall FUN_10541810(int *param_1);
void __stdcall FUN_10542940(int param_1);
void __stdcall FUN_105429e0(int param_1);
void __stdcall FUN_10542a80(int param_1);
void __fastcall FUN_10542ef0(int param_1);
void __fastcall FUN_10543f50(int param_1);
undefined4 __fastcall FUN_10546900(int param_1);
void __fastcall FUN_10549800(int param_1);
void __fastcall FUN_1054abd0(int param_1);
void FUN_1054b2d0(int param_1,int param_2);
void __stdcall FUN_1054b400(int param_1,int param_2);
void __stdcall FUN_1054b530(int param_1,int param_2);
void __fastcall FUN_1054ccb0(int param_1);
undefined4 * FUN_1054e5f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * FUN_1054e6c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_1054fd40(int *param_1);
void __fastcall FUN_1054fdb0(int *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_10551940(int *param_1);
void __fastcall FUN_105519b0(int *param_1);
undefined4 * __stdcall FUN_10551a60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_10551b30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __stdcall FUN_10551c00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __fastcall FUN_10551cd0(int param_1);
void __fastcall FUN_10555000(int param_1);
void __fastcall FUN_105551d0(int param_1);
void __fastcall FUN_10556270(int param_1);
void __stdcall FUN_10556770(int param_1);
undefined1 __stdcall FUN_10556e10(undefined4 *param_1,undefined4 param_2,int *param_3);
void __fastcall FUN_10557c30(int param_1);
void __stdcall FUN_10557da0(undefined4 param_1);
undefined4 * __fastcall FUN_10558ca0(undefined4 *param_1);
undefined4 * __fastcall FUN_105592d0(undefined4 *param_1);
undefined4 * __stdcall FUN_1055cbe0(undefined4 *param_1);
int * __stdcall FUN_1055d1a0(int *param_1);
undefined4 * __stdcall FUN_1055dd20(undefined4 *param_1);
undefined4 * __stdcall FUN_1055eb60(undefined4 *param_1);
void __fastcall FUN_105657d0(int *param_1);
void __fastcall FUN_10565830(int *param_1);
void __fastcall FUN_10565890(int *param_1);
void __fastcall FUN_105658f0(int *param_1);
void __fastcall FUN_1056b440(int param_1);
void __stdcall FUN_10573880(int *param_1,undefined4 param_2);
void __fastcall FUN_105760c0(int param_1);
void __fastcall FUN_105855b0(int *param_1);
void __fastcall FUN_10585690(int param_1);
void __fastcall FUN_10589c30(int param_1);
uint __fastcall FUN_1058a680(int param_1);
void FUN_1058bf80(undefined4 *param_1,undefined4 *param_2);
undefined4 * __stdcall FUN_1058d160(undefined4 *param_1);
undefined4 FUN_1058e840(void);
void __fastcall FUN_105918c0(int param_1);
void __fastcall FUN_10591eb0(int param_1);
void __stdcall FUN_10592000(int param_1);
int __stdcall FUN_10594090(int param_1,int param_2,int param_3);
int FUN_10594210(int param_1,int param_2,int param_3);
void __fastcall FUN_10595470(int *param_1);
void __fastcall FUN_10596900(int *param_1);
void __stdcall FUN_10597140(int param_1,int param_2);
void __fastcall FUN_1059a040(int param_1);
void __fastcall FUN_1059a850(int param_1);
void __stdcall FUN_1059d0b0(int param_1);
int __stdcall FUN_1059f4a0(int param_1,int param_2,int param_3);
int FUN_1059f5e0(int param_1,int param_2,int param_3);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_105a0190(int *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_105a0200(int *param_1);
void __fastcall FUN_105a0270(int *param_1);
void __fastcall FUN_105a0530(int param_1);
void __fastcall FUN_105a06a0(int param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_105a1b30(int *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_105a1ba0(int *param_1);
void __fastcall FUN_105a1c10(int *param_1);
void * FUN_105a1f40(uint param_1);
void * FUN_105a1fb0(uint param_1);
void * FUN_105a2110(uint param_1);
void __stdcall FUN_105a23d0(int param_1,int param_2);
bool __fastcall FUN_105a2b50(int param_1);
void __stdcall FUN_105a2cd0(undefined4 param_1);
void FUN_105a2e60(undefined4 param_1);
undefined1 FUN_105a30b0(void);
uint __fastcall FUN_105a31b0(int param_1);
void __fastcall FUN_105a7d40(int *param_1);
void __fastcall FUN_105a8430(int param_1);
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


// Reference entry 104f9350; body size 124 bytes.
#line 1 "ENTRY_104f9350"

undefined4 * FUN_104f9350(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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
    *param_3 = (undefined4)(*param_1);
    piVar1 = (int *)((int *)param_1[1]);
    param_3[1] = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(uVar3);
    }
    param_3 = (undefined4 *)(param_3 + 2);

  }

  return (undefined4 *)(param_3);

 } catch (...) { }
}


// Reference entry 104f93f0; body size 124 bytes.
#line 1 "ENTRY_104f93f0"

undefined4 * FUN_104f93f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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
    *param_3 = (undefined4)(*param_1);
    piVar1 = (int *)((int *)param_1[1]);
    param_3[1] = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(uVar3);
    }
    param_3 = (undefined4 *)(param_3 + 2);

  }

  return (undefined4 *)(param_3);

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


// Reference entry 104f9d60; body size 164 bytes.
#line 1 "ENTRY_104f9d60"

undefined4 * __thiscall Recovered_Bulk::FUN_104f9d60(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x10));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[1] = (undefined4)(pvVar1);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);

  param_1[6] = (undefined4)(7);
  param_1[7] = (undefined4)(8);
  *param_1 = (undefined4)(0x3f800000);
  thunk_FUN_104fc050(0x10,param_1[1]);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 104f9ed0; body size 93 bytes.
#line 1 "ENTRY_104f9ed0"

undefined4 * __thiscall Recovered_Bulk::FUN_104f9ed0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)(param_2);

  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  param_1[1] = (undefined4)(pvVar1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 104fa120; body size 161 bytes.
#line 1 "ENTRY_104fa120"

undefined4 * __fastcall FUN_104fa120(undefined4 *param_1)

{
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x10));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[1] = (undefined4)(pvVar1);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);

  param_1[6] = (undefined4)(7);
  param_1[7] = (undefined4)(8);
  *param_1 = (undefined4)(0x3f800000);
  thunk_FUN_104fc050(0x10,param_1[1]);

  return (undefined4 *)(param_1);

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
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  return;
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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
  }
  return;
}


// Reference entry 104fb350; body size 92 bytes.
#line 1 "ENTRY_104fb350"

void __fastcall FUN_104fb350(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCContentSessionManager);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCContentSessionManager);
  DAT_121a1e20 = (int)(0);
  thunk_FUN_104fac60();
  thunk_FUN_104f8a70(param_1 + 4,*(undefined4 *)(param_1[4] + 4));
  thunk_FUN_1148a50e(param_1[4],0x1c);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCSwfObjHHListener);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
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


// Reference entry 104fbdf0; body size 114 bytes.
#line 1 "ENTRY_104fbdf0"

undefined4 * __thiscall Recovered_Bulk::FUN_104fbdf0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCContentSessionManager);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCContentSessionManager);
  DAT_121a1e20 = (int)(0);
  thunk_FUN_104fac60();
  thunk_FUN_104f8a70(param_1 + 4,*(undefined4 *)(param_1[4] + 4));
  thunk_FUN_1148a50e(param_1[4],0x1c);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCSwfObjHHListener);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x38);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104fc050; body size 228 bytes.
#line 1 "ENTRY_104fc050"

void __thiscall Recovered_Bulk::FUN_104fc050(uint param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  uVar5 = (uint)(param_1[1] - *param_1 >> 2);
  if (param_2 <= uVar5) {
    thunk_FUN_104f9920(*param_1,param_1[1],&param_3);
    return;
  }
  if (0x3fffffff < param_2) {
LAB_104fc12f:
                    
    thunk_FUN_1012a2a0();
  }
  uVar7 = (uint)(param_2 * 4);
  if (uVar7 < 0x1000) {
    if (uVar7 == 0) {
      puVar6 = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      puVar6 = (undefined4 *)(operator_new(uVar7));
    }
  }
  else {
    if (uVar7 + 0x23 <= uVar7) goto LAB_104fc12f;
    pvVar3 = (void *)(operator_new(uVar7 + 0x23));
    if (pvVar3 == (void *)0x0) goto LAB_104fc114;
    puVar6 = (undefined4 *)((undefined4 *)((int)pvVar3 + 0x23U & 0xffffffe0));
    puVar6[-1] = (undefined4)(pvVar3);
  }
  if (uVar5 != 0) {
    iVar2 = (int)(*param_1);
    uVar5 = (uint)(uVar5 * 4);
    iVar4 = (int)(iVar2);
    if (0xfff < uVar5) {
      iVar4 = (int)(*(int *)(iVar2 + -4));
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (iVar2 - iVar4) - 4U) {
LAB_104fc114:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar5);
  }
  puVar1 = (undefined4 *)(puVar6 + param_2);
  *param_1 = (int)((int)puVar6);
  param_1[1] = (int)((int)puVar1);
  param_1[2] = (int)((int)puVar1);
  for (; (undefined4 *)(puVar6) != puVar1; puVar6 = puVar6 + 1) {
    *puVar6 = (undefined4)(param_3);
  }
  return;
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
  param_1[1] = (int)(param_2 + param_3 * 8);
  param_1[2] = (int)(param_2 + param_4 * 8);
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
  piVar1[1] = (int)(*(int *)(param_2 + 4));
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
  piVar2[2] = (int)((int)piVar1);
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
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
  }
  return;
}


// Reference entry 104fd2e0; body size 123 bytes.
#line 1 "ENTRY_104fd2e0"

undefined4 * __stdcall FUN_104fd2e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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
    *param_3 = (undefined4)(*param_1);
    piVar1 = (int *)((int *)param_1[1]);
    param_3[1] = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(uVar3);
    }
    param_3 = (undefined4 *)(param_3 + 2);

  }

  return (undefined4 *)(param_3);

 } catch (...) { }
}


// Reference entry 104fd380; body size 121 bytes.
#line 1 "ENTRY_104fd380"

void FUN_104fd380(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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
    *param_3 = (undefined4)(*param_1);
    piVar1 = (int *)((int *)param_1[1]);
    param_3[1] = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(uVar3);
    }
    param_3 = (undefined4 *)(param_3 + 2);

  }

  return;

 } catch (...) { }
}


// Reference entry 104fd420; body size 121 bytes.
#line 1 "ENTRY_104fd420"

void __stdcall FUN_104fd420(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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
    *param_3 = (undefined4)(*param_1);
    piVar1 = (int *)((int *)param_1[1]);
    param_3[1] = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(uVar3);
    }
    param_3 = (undefined4 *)(param_3 + 2);

  }

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


// Reference entry 10501180; body size 94 bytes.
#line 1 "ENTRY_10501180"

undefined4 * __thiscall Recovered_Bulk::FUN_10501180(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  param_1[1] = (undefined4)(0);
  *(undefined2 *)(param_1 + 2) = 0;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCPInfoListDataSource);
  thunk_FUN_101ff410(param_2);

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
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCITearOffObjImpl);

  thunk_FUN_103d5ff0(uVar1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCContentProviderInfoViewHeaderDataSource);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCContentProviderInfoViewHeaderDataSource);

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

  param_1[1] = (undefined4)(0);
  *(undefined2 *)(param_1 + 2) = 0;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCPInfoListDataSource);
  thunk_FUN_101ff410(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEmptyCPInfoListDataSource);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10501b10; body size 284 bytes.
#line 1 "ENTRY_10501b10"

undefined4 * __thiscall Recovered_Bulk::FUN_10501b10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  param_1[1] = (undefined4)(0);
  *(undefined2 *)(param_1 + 2) = 0;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCPInfoListDataSource);
  thunk_FUN_101ff410(param_2);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCInfoViewDynamicCPMenu);
  param_1[0x2b] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLocalMusicInfoListData);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCLocalMusicInfoListData);
  param_1[0x2c] = (undefined4)(0);
  param_1[0x2d] = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  param_1[0x2e] = (undefined4)(0);
  param_1[0x2f] = (undefined4)(0);
  pvVar2 = (void *)(operator_new(0x18));
  *(void **)pvVar2 = (void *)(pvVar2);
  *(void **)((int)pvVar2 + 4) = pvVar2;
  *(void **)((int)pvVar2 + 8) = pvVar2;
  *(undefined2 *)((int)pvVar2 + 0xc) = 0x101;
  param_1[0x2e] = (undefined4)(pvVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  param_1[0x30] = (undefined4)(0);
  param_1[0x31] = (undefined4)(0);
  pvVar2 = (void *)(operator_new(0x18));
  *(void **)pvVar2 = (void *)(pvVar2);
  *(void **)((int)pvVar2 + 4) = pvVar2;
  *(void **)((int)pvVar2 + 8) = pvVar2;
  *(undefined2 *)((int)pvVar2 + 0xc) = 0x101;
  param_1[0x30] = (undefined4)(pvVar2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  thunk_FUN_10db55a0(uVar1);
  thunk_FUN_10db5070();

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
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCMusicLibraryAlbumViewData);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCMusicLibraryAlbumViewData);
  param_1[0x20] = (undefined4)((uint)&ghidra_vftable_SCMusicLibraryAlbumViewData);
  param_1[0x4c] = (undefined4)((uint)&ghidra_vftable_SCMusicLibraryAlbumViewData);
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

  param_1[1] = (undefined4)(0);
  *(undefined2 *)(param_1 + 2) = 0;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCPInfoListDataSource);
  thunk_FUN_101ff410(param_2);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCInfoViewDynamicCPMenu);
  param_1[0x2b] = (undefined4)(0);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicLibraryArtistInfoListData);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCMusicLibraryArtistInfoListData);
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
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCMusicLibraryArtistViewData);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCMusicLibraryArtistViewData);
  param_1[0x20] = (undefined4)((uint)&ghidra_vftable_SCMusicLibraryArtistViewData);
  param_1[0x51] = (undefined4)(0);
  *(undefined2 *)(param_1 + 0x52) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  param_1[0x50] = (undefined4)((uint)&ghidra_vftable_SCCPInfoListDataSource);
  thunk_FUN_101ff410(param_2);
  param_1[0x7a] = (undefined4)((uint)&ghidra_vftable_SCInfoViewDynamicCPMenu);
  param_1[0x7b] = (undefined4)(0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[0x50] = (undefined4)((uint)&ghidra_vftable_SCMusicLibraryArtistInfoListData);
  param_1[0x7a] = (undefined4)((uint)&ghidra_vftable_SCMusicLibraryArtistInfoListData);
  thunk_FUN_10db22c0(uVar1);

  return (undefined4 *)(param_1);

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


// Reference entry 10504ba0; body size 72 bytes.
#line 1 "ENTRY_10504ba0"

undefined4 * __thiscall Recovered_Bulk::FUN_10504ba0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCContentProviderInfoViewHeaderDataSource);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCContentProviderInfoViewHeaderDataSource);
  thunk_FUN_103d60a0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
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
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCInfoTextViewDataSource);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  param_1[3] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDataSource);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  return (undefined4 *)(param_1);
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
    puVar2[3] = (undefined4)(_Size);
    puVar2[2] = (undefined4)(0);
    puVar2[1] = (undefined4)(0);
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

  param_1[1] = (undefined4)(0);
  *param_1 = (undefined4)(piVar3);
  if (piVar3 == (int *)0x0) {
    uVar4 = (undefined4)(0);
  }
  else {
    uVar4 = (undefined4)((**(code **)(*piVar3 + 0xc))());
  }
  param_1[1] = (undefined4)(uVar4);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10507000; body size 165 bytes.
#line 1 "ENTRY_10507000"

undefined4 * FUN_10507000(undefined4 *param_1,int param_2)

{
 try {
  uint uVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  piVar2 = (int *)(operator_new(0x30));
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar2[2] = (int)(param_2);
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCITearOffObjImpl);

    thunk_FUN_103d5ff0(uVar1);
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCContentProviderInfoViewHeaderDataSource);
    piVar2[4] = (int)((int)(uint)&ghidra_vftable_SCContentProviderInfoViewHeaderDataSource);
  }

  *param_1 = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }

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

  local_18[1] = (int)(1);
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


// Reference entry 1050a7f0; body size 279 bytes.
#line 1 "ENTRY_1050a7f0"

int * __thiscall Recovered_Bulk::FUN_1050a7f0(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  if (*(int *)(param_1 + 0x88) == 0) {
    piVar3 = (int *)(operator_new(0x30));
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      *piVar3 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      piVar3[1] = (int)(0);
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      piVar3[2] = (int)(param_1);
      *piVar3 = (int)((int)(uint)&ghidra_vftable_SCITearOffObjImpl);

      thunk_FUN_103d5ff0();
      *piVar3 = (int)((int)(uint)&ghidra_vftable_SCContentProviderInfoViewHeaderDataSource);
      piVar3[4] = (int)((int)(uint)&ghidra_vftable_SCContentProviderInfoViewHeaderDataSource);
    }

    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    piVar1 = (int *)(*(int **)(param_1 + 0x8c));

    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0x88) = piVar3;
    if (piVar3 == (int *)0x0) {
      uVar4 = (undefined4)(0);
    }
    else {
      uVar4 = (undefined4)((**(code **)(*piVar3 + 0xc))());
    }
    *(undefined4 *)(param_1 + 0x8c) = uVar4;
  }

  piVar3 = (int *)(*(int **)(param_1 + 0x88));
  *param_2 = (int)((int)piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar2);
  }

  return (int *)(param_2);

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

  param_1[1] = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 1050ed30; body size 152 bytes.
#line 1 "ENTRY_1050ed30"

undefined4 * __thiscall Recovered_Bulk::FUN_1050ed30(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_10cf6c80(param_2,param_3,param_4,0,1,param_5,param_6,0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEphemeralBrowseItem);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCEphemeralBrowseItem);

  param_1[0x1a] = (undefined4)(param_7);
  param_1[0x1b] = (undefined4)(0);
  if (param_7 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*param_7 + 0xc))(uVar1));
    param_1[0x1b] = (undefined4)(piVar2);
    (**(code **)(*piVar2 + 4))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  thunk_FUN_104db5b0(4);

  return (undefined4 *)(param_1);

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


// Reference entry 10510980; body size 82 bytes.
#line 1 "ENTRY_10510980"

undefined4 * __thiscall Recovered_Bulk::FUN_10510980(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCArray);
  thunk_FUN_101c42f0(*puVar1,param_1[3],puVar1);
  param_1[3] = (undefined4)(*puVar1);
  thunk_FUN_101c6ae0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4 *)(param_1);
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
    puVar2[3] = (undefined4)(_Size);
    puVar2[2] = (undefined4)(0);
    puVar2[1] = (undefined4)(0);
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


// Reference entry 10514160; body size 134 bytes.
#line 1 "ENTRY_10514160"

undefined4 * __thiscall Recovered_Bulk::FUN_10514160(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  uint uVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_1050e710(param_1 + 0x87);

  *param_2 = (undefined4)(param_1);
  param_2[1] = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0xc))(uVar1));
    param_2[1] = (undefined4)(piVar2);
    (**(code **)(*piVar2 + 4))();
  }

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }

  return (undefined4 *)(param_2);

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

  param_2[1] = (int)(iVar1);
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

  param_2[1] = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }

  return (int *)(param_2);

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

  param_1[1] = (undefined4)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = (undefined4)(0);
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

  param_1[1] = (undefined4)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = (undefined4)(0);
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

  param_1[1] = (undefined4)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = (undefined4)(0);
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

  param_1[1] = (undefined4)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = (undefined4)(0);
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
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  puVar1 = (undefined4 *)(param_1 + 2);

  thunk_FUN_11240650(uVar2);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = (undefined4)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = (undefined4)(0);
  param_1[5] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[0xd] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCElapsedTimeMeasurement);
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = (undefined4)(0);
  param_1[0x10] = (undefined4)(0);
  param_1[0x11] = (undefined4)(0);
  param_1[0x12] = (undefined4)((uint)&ghidra_vftable_SCIOperationProgress);
  param_1[0x13] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpWithProgressInfo);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpWithProgressInfo);
  param_1[0x12] = (undefined4)((uint)&ghidra_vftable_SCOpWithProgressInfo);

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
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSelectedItemsAddToQueueAtIdxAction);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[5] = (undefined4)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[6] = (undefined4)(0);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
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
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSelectedItemsPlayNextAction);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[5] = (undefined4)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[6] = (undefined4)(0);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
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
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSelectedItemsReplaceQueueAction);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[5] = (undefined4)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[6] = (undefined4)(0);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

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
    puVar1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp);
    puVar1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp);
    puVar1[0x35f4] = (undefined4)(0);
    puVar1[0x35f5] = (undefined4)(0);
    puVar1[0x35f6] = (undefined4)(0);
    puVar1[0x35f7] = (undefined4)(0);
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
    puVar1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp);
    puVar1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp);
    puVar1[0x35f4] = (undefined4)(0);
    puVar1[0x35f5] = (undefined4)(0);
    puVar1[0x35f6] = (undefined4)(0);
    puVar1[0x35f7] = (undefined4)(0);
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
    puVar1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp);
    puVar1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp);
    puVar1[0x35f4] = (undefined4)(0);
    puVar1[0x35f5] = (undefined4)(0);
    puVar1[0x35f6] = (undefined4)(0);
    puVar1[0x35f7] = (undefined4)(0);
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
    puVar1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp);
    puVar1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp);
    puVar1[0x35f4] = (undefined4)(0);
    puVar1[0x35f5] = (undefined4)(0);
    puVar1[0x35f6] = (undefined4)(0);
    puVar1[0x35f7] = (undefined4)(0);
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
  param_1[1] = (int)((int)((int)_Dst + uVar1 * 4));
  param_1[2] = (int)((int)(uVar7 + (int)_Dst));
  return (undefined4 *)(puVar2);
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

  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardStateFor);
  param_1[2] = (undefined4)(param_2);

  thunk_FUN_11240650(uVar1);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  *(undefined2 *)(param_1 + 4) = 1000;
  *(undefined1 *)((int)param_1 + 0x12) = param_3;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceGetLinkCodeState);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCMusicServiceGetLinkCodeState);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  param_1[5] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

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

  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardStateFor);
  param_1[2] = (undefined4)(param_2);
  puVar3 = (undefined4 *)(param_1 + 3);

  *puVar3 = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059bd30(puVar3);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  thunk_FUN_11240650(uVar1);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceLinkCodeState);
  *puVar3 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceLinkCodeState);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCMusicServiceLinkCodeState);
  param_1[0xb] = (undefined4)(0);
  param_1[0xc] = (undefined4)(0);
  param_1[0xd] = (undefined4)(0);
  param_1[0xe] = (undefined4)(0);
  *(undefined1 *)(param_1 + 0xf) = param_3;
  param_1[0x11] = (undefined4)(0);
  param_1[0x12] = (undefined4)(0);
  param_1[0x10] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  param_1[0x1d] = (undefined4)(0);
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
  param_1[0x13] = (undefined4)(uVar4);

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

  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardStateFor);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCSwfObjHHListener);
  puVar1 = (undefined4 *)(param_1 + 4);

  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059bd30(puVar1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceListWaitingState);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCMusicServiceListWaitingState);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceListWaitingState);
  param_1[0xb] = (undefined4)(0);
  param_1[0xc] = (undefined4)(0);

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

  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardStateFor);
  param_1[2] = (undefined4)(param_2);

  thunk_FUN_11240650(uVar1);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_RSvcManifestDownloadCompletionCB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceLoadMSInfoState);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCMusicServiceLoadMSInfoState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCMusicServiceLoadMSInfoState);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[9] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  thunk_FUN_112816c0();
  param_1[0x5e] = (undefined4)(0);
  param_1[0x5f] = (undefined4)(0);
  param_1[0x5d] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10526950; body size 125 bytes.
#line 1 "ENTRY_10526950"

undefined4 * __thiscall Recovered_Bulk::FUN_10526950(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceLoginInput);

  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))(uVar1));
    param_1[3] = (undefined4)(piVar2);
    (**(code **)(*piVar2 + 4))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10526a50; body size 125 bytes.
#line 1 "ENTRY_10526a50"

undefined4 * __thiscall Recovered_Bulk::FUN_10526a50(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceNicknameInput);

  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))(uVar1));
    param_1[3] = (undefined4)(piVar2);
    (**(code **)(*piVar2 + 4))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10526af0; body size 125 bytes.
#line 1 "ENTRY_10526af0"

undefined4 * __thiscall Recovered_Bulk::FUN_10526af0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServicePasswordInput);

  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))(uVar1));
    param_1[3] = (undefined4)(piVar2);
    (**(code **)(*piVar2 + 4))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10528c70; body size 197 bytes.
#line 1 "ENTRY_10528c70"

undefined4 * __thiscall Recovered_Bulk::FUN_10528c70(int *param_2,int *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegate);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCToggleScrobbleAction);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCToggleScrobbleAction);

  param_1[6] = (undefined4)(param_2);
  param_1[7] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))(uVar1));
    param_1[7] = (undefined4)(piVar2);
    (**(code **)(*piVar2 + 4))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  param_1[8] = (undefined4)(param_3);
  param_1[9] = (undefined4)(0);
  if (param_3 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*param_3 + 0xc))());
    param_1[9] = (undefined4)(piVar2);
    (**(code **)(*piVar2 + 4))();
  }
  *(undefined1 *)(param_1 + 10) = 0;

  return (undefined4 *)(param_1);

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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
  }
  return;
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
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCMusicServiceListWaitingState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCMusicServiceListWaitingState);
  thunk_FUN_1053d9b0(uVar1);

  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCSwfObjHHListener);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);

  return;

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
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCMusicServiceListWaitingState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCMusicServiceListWaitingState);
  thunk_FUN_1053d9b0(uVar1);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCSwfObjHHListener);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x34);
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
  param_1[1] = (int)(param_2 + param_3 * 4);
  param_1[2] = (int)(param_2 + param_4 * 4);
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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
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
    puVar5[1] = (undefined4)(uVar2);
    puVar5[2] = (undefined4)(uVar2);
    *puVar5 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceLoginPasswordState);
    puVar5[3] = (undefined4)(0);
    puVar5[4] = (undefined4)(0);

    return (undefined4 *)(puVar5);
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
    puVar3[1] = (undefined4)(uVar2);
    puVar3[2] = (undefined4)(uVar2);
    *puVar3 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceResultState);
    puVar3[3] = (undefined4)(8);
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
      puVar5[1] = (undefined4)(uVar2);
      puVar5[2] = (undefined4)(uVar2);
      puVar5[3] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
      puVar5[4] = (undefined4)(0);
      puVar5[5] = (undefined4)(0);
      *puVar5 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceSetShareUsageState);
      puVar5[3] = (undefined4)((uint)&ghidra_vftable_SCMusicServiceSetShareUsageState);
      puVar5[7] = (undefined4)(0);
      puVar5[8] = (undefined4)(0);
      puVar5[10] = (undefined4)(0);
      puVar5[0xb] = (undefined4)(0);
      puVar5[6] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
      puVar5[9] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
      puVar5[0x15] = (undefined4)(0);
      puVar5[0x1f] = (undefined4)(0);
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
    puVar3[1] = (undefined4)(uVar4);
    puVar3[2] = (undefined4)(uVar4);
    uVar4 = (undefined4)(5);
    if (iVar2 == 0x1f45) {
      uVar4 = (undefined4)(8);
    }
    *puVar3 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceResultState);
    puVar3[3] = (undefined4)(uVar4);
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
      puVar6[1] = (undefined4)(uVar2);
      puVar6[2] = (undefined4)(uVar2);
      puVar6[3] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
      puVar6[4] = (undefined4)(0);
      puVar6[5] = (undefined4)(0);
      *puVar6 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceGetShareUsageState);
      puVar6[3] = (undefined4)((uint)&ghidra_vftable_SCMusicServiceGetShareUsageState);
      puVar6[7] = (undefined4)(0);
      puVar6[8] = (undefined4)(0);
      puVar6[10] = (undefined4)(0);
      puVar6[0xb] = (undefined4)(0);
      puVar6[6] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
      puVar6[9] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
      puVar6[0x15] = (undefined4)(0);
      puVar6[0x1f] = (undefined4)(0);
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
    puVar3[1] = (undefined4)(uVar1);
    puVar3[2] = (undefined4)(uVar1);
    *puVar3 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceCompleteState);

    return (undefined4 *)(puVar3);
  }

  return (undefined4 *)((undefined4 *)0x0);

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
    puVar3[1] = (undefined4)(iVar1);
    puVar3[2] = (undefined4)(iVar1);
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
    puVar3[1] = (undefined4)(iVar1);
    puVar3[2] = (undefined4)(iVar1);
    *puVar3 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceMultipleAccountsAddedState);
    return (undefined4 *)(puVar3);
  }
  puVar3 = (undefined4 *)(operator_new(0xc));
  if (puVar3 == (undefined4 *)0x0) {
    return (undefined4 *)((undefined4 *)0x0);
  }
  iVar1 = (int)(param_1[2]);
  puVar3[1] = (undefined4)(iVar1);
  puVar3[2] = (undefined4)(iVar1);
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
    piVar2[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar2[2] = (int)(0);
    piVar2[3] = (int)(0);
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCRequireTokenActionFactory);
    piVar2[4] = (int)(0);
    piVar2[5] = (int)(0);
    *(undefined1 *)(piVar2 + 6) = 0;
    piVar2[7] = (int)(0);
    piVar2[8] = (int)(0);
    *(unsigned char *)((char *)&local_25c + 0) = 0x19;
    piVar2[9] = (int)((int)piVar4);
    piVar2[10] = (int)(0);
    if (piVar4 != (int *)0x0) {
      piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
      piVar2[10] = (int)((int)piVar4);
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
    piVar4[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar4[2] = (int)((int)(uint)&ghidra_vftable_SCIActionDelegate);
    *piVar4 = (int)((int)(uint)&ghidra_vftable_SCCompoundAction);
    piVar4[2] = (int)((int)(uint)&ghidra_vftable_SCCompoundAction);
    piVar4[3] = (int)(0);
    piVar4[4] = (int)(0);
    *(unsigned char *)((char *)&local_25c + 0) = 0x1d;
    piVar4[5] = (int)((int)piVar2);
    piVar4[6] = (int)(0);
    if (piVar2 != (int *)0x0) {
      if (*(code **)(*piVar2 + 0xc) != thunk_FUN_10211630) {
        piVar2 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
      }
      piVar4[6] = (int)((int)piVar2);
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
    piVar4[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar4[2] = (int)((int)(uint)&ghidra_vftable_SCIActionDelegate);
    piVar4[3] = (int)(0);
    piVar4[4] = (int)(0);
    *(undefined1 *)(piVar4 + 5) = 0;
    *piVar4 = (int)((int)(uint)&ghidra_vftable_SCToggleScrobbleAction);
    piVar4[2] = (int)((int)(uint)&ghidra_vftable_SCToggleScrobbleAction);
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    piVar4[6] = (int)((int)local_20);
    piVar4[7] = (int)(0);
    local_14 = (int *)(piVar4);
    if (local_20 != (int *)0x0) {
      piVar5 = (int *)((int *)(**(code **)(*local_20 + 0xc))());
      piVar4[7] = (int)((int)piVar5);
      (**(code **)(*piVar5 + 4))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 10;
    piVar4[8] = (int)((int)piVar2);
    piVar4[9] = (int)(0);
    if (piVar2 != (int *)0x0) {
      piVar2 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
      piVar4[9] = (int)((int)piVar2);
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
    param_1[1] = (int)(0);
  }
  else {
    *piVar4 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar4[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar4 = (int)((int)(uint)&ghidra_vftable_SCArray);
    piVar4[2] = (int)(0);
    piVar4[3] = (int)(0);
    piVar4[4] = (int)(0);
    *param_1 = (int)((int)piVar4);
    param_1[1] = (int)(0);
    if (piVar4 != (int *)0x0) {
      local_18 = (int *)(piVar4);
      if (*(code **)(*piVar4 + 0xc) != thunk_FUN_101aa0b0) {
        piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(uVar3));
      }
      param_1[1] = (int)((int)piVar4);
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
    piVar2[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCMusicServiceLoginInput);

    piVar2[2] = (int)((int)param_1);
    piVar2[3] = (int)(0);
    if (param_1 != (int *)0x0) {
      piVar3 = (int *)((int *)(**(code **)(*param_1 + 0xc))(uVar1));
      piVar2[3] = (int)((int)piVar3);
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
    piVar2[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCMusicServiceNicknameInput);

    piVar2[2] = (int)((int)param_1);
    piVar2[3] = (int)(0);
    if (param_1 != (int *)0x0) {
      piVar3 = (int *)((int *)(**(code **)(*param_1 + 0xc))(uVar1));
      piVar2[3] = (int)((int)piVar3);
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
    piVar2[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCMusicServicePasswordInput);

    piVar2[2] = (int)((int)param_1);
    piVar2[3] = (int)(0);
    if (param_1 != (int *)0x0) {
      piVar3 = (int *)((int *)(**(code **)(*param_1 + 0xc))(uVar1));
      piVar2[3] = (int)((int)piVar3);
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
  param_1[0x34] = (int)(0x10000);
  param_1[0x3b] = (int)(5);
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
  param_1[1] = (int)((int)((int)_Dst + uVar1 * 4));
  param_1[2] = (int)((int)(uVar7 + (int)_Dst));
  return (undefined4 *)(puVar2);
}


// Reference entry 1054e5f0; body size 124 bytes.
#line 1 "ENTRY_1054e5f0"

undefined4 * FUN_1054e5f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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
    *param_3 = (undefined4)(*param_1);
    piVar1 = (int *)((int *)param_1[1]);
    param_3[1] = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(uVar3);
    }
    param_3 = (undefined4 *)(param_3 + 2);

  }

  return (undefined4 *)(param_3);

 } catch (...) { }
}


// Reference entry 1054e6c0; body size 124 bytes.
#line 1 "ENTRY_1054e6c0"

undefined4 * FUN_1054e6c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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
    *param_3 = (undefined4)(*param_1);
    piVar1 = (int *)((int *)param_1[1]);
    param_3[1] = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(uVar3);
    }
    param_3 = (undefined4 *)(param_3 + 2);

  }

  return (undefined4 *)(param_3);

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

  param_1[1] = (undefined4)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = (undefined4)(0);
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
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

  thunk_FUN_11240650(uVar1);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = (undefined4)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = (undefined4)(0);
  param_1[5] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[0xd] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCElapsedTimeMeasurement);
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = (undefined4)(0);
  param_1[0x10] = (undefined4)(0);
  param_1[0x11] = (undefined4)(0);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1054ef20; body size 93 bytes.
#line 1 "ENTRY_1054ef20"

undefined4 * __thiscall Recovered_Bulk::FUN_1054ef20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)(param_2);

  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  param_1[1] = (undefined4)(pvVar1);

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
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  puVar1 = (undefined4 *)(param_1 + 2);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_11240650();
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  param_1[6] = (undefined4)(iVar4);
  if (iVar4 != 0) {
    thunk_FUN_1123fce0(iVar4 + 4);
  }
  param_1[7] = (undefined4)(0);
  param_1[5] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  param_1[8] = (undefined4)(0);
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[0xd] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCElapsedTimeMeasurement);
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = (undefined4)(0);
  param_1[0x10] = (undefined4)(0);
  param_1[0x11] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpDownloadServiceManifestFiles);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpDownloadServiceManifestFiles);
  param_1[0x12] = (undefined4)(0);
  param_1[0x13] = (undefined4)(0);
  param_1[0x14] = (undefined4)(0);

  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 8))();
  }

  return (undefined4 *)(param_1);

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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
  }
  return;
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
  param_1[1] = (int)(param_2 + param_3 * 4);
  param_1[2] = (int)(param_2 + param_4 * 4);
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
  param_1[1] = (int)(param_2 + param_3 * 8);
  param_1[2] = (int)(param_2 + param_4 * 8);
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
  piVar1[1] = (int)(*(int *)(param_2 + 4));
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
  piVar2[2] = (int)((int)piVar1);
  *piVar1 = (int)(param_2);
  *(int **)(param_2 + 4) = piVar1;
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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
  }
  return;
}


// Reference entry 10551a60; body size 123 bytes.
#line 1 "ENTRY_10551a60"

undefined4 * __stdcall FUN_10551a60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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
    *param_3 = (undefined4)(*param_1);
    piVar1 = (int *)((int *)param_1[1]);
    param_3[1] = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(uVar3);
    }
    param_3 = (undefined4 *)(param_3 + 2);

  }

  return (undefined4 *)(param_3);

 } catch (...) { }
}


// Reference entry 10551b30; body size 121 bytes.
#line 1 "ENTRY_10551b30"

void FUN_10551b30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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
    *param_3 = (undefined4)(*param_1);
    piVar1 = (int *)((int *)param_1[1]);
    param_3[1] = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(uVar3);
    }
    param_3 = (undefined4 *)(param_3 + 2);

  }

  return;

 } catch (...) { }
}


// Reference entry 10551c00; body size 121 bytes.
#line 1 "ENTRY_10551c00"

void __stdcall FUN_10551c00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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
    *param_3 = (undefined4)(*param_1);
    piVar1 = (int *)((int *)param_1[1]);
    param_3[1] = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(uVar3);
    }
    param_3 = (undefined4 *)(param_3 + 2);

  }

  return;

 } catch (...) { }
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
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCEnterZIPBrowseItem);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105592d0; body size 225 bytes.
#line 1 "ENTRY_105592d0"

undefined4 * __fastcall FUN_105592d0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegate);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = (undefined4)((uint)&ghidra_vftable_RCPBrowseOperationCB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRadioSetZIPAction);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCRadioSetZIPAction);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCRadioSetZIPAction);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[9] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);

  param_1[0xc] = (undefined4)(0);
  thunk_FUN_11202480(uVar1);
  param_1[0x4d] = (undefined4)((uint)&ghidra_vftable_RLocationNameExtractorCB);
  param_1[0x4e] = (undefined4)(param_1 + 0xd);
  param_1[0x4f] = (undefined4)(0x100);
  *(undefined1 *)(param_1 + 0xd) = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1055ac10; body size 86 bytes.
#line 1 "ENTRY_1055ac10"

undefined4 * __thiscall Recovered_Bulk::FUN_1055ac10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
  param_1[0xf] = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
  param_1[0x10] = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
  param_1[0x46] = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
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
    piVar3[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar3[2] = (int)((int)(uint)&ghidra_vftable_SCIActionDelegate);
    piVar3[3] = (int)(0);
    piVar3[4] = (int)(0);
    *(undefined1 *)(piVar3 + 5) = 0;
    piVar3[6] = (int)((int)(uint)&ghidra_vftable_RCPBrowseOperationCB);
    *piVar3 = (int)((int)(uint)&ghidra_vftable_SCRadioSetZIPAction);
    piVar3[2] = (int)((int)(uint)&ghidra_vftable_SCRadioSetZIPAction);
    piVar3[6] = (int)((int)(uint)&ghidra_vftable_SCRadioSetZIPAction);
    piVar3[7] = (int)(0);
    piVar3[8] = (int)(0);
    piVar3[9] = (int)(0);
    piVar3[10] = (int)(0);
    piVar3[0xb] = (int)(0);

    piVar3[0xc] = (int)(0);
    thunk_FUN_11202480(uVar2);
    piVar3[0x4d] = (int)((int)(uint)&ghidra_vftable_RLocationNameExtractorCB);
    piVar3[0x4e] = (int)((int)(piVar3 + 0xd));
    piVar3[0x4f] = (int)(0x100);
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
    piVar2[6] = (int)((int)(uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
    piVar2[0xe] = (int)((int)(uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
    piVar2[0xf] = (int)((int)(uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
    piVar2[0x10] = (int)((int)(uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
    piVar2[0x11] = (int)((int)(uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
    piVar2[0x46] = (int)((int)(uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
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
    piVar4[1] = (int)(0);
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

  param_1[1] = (undefined4)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = (undefined4)(0);
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
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

  thunk_FUN_11240650(uVar1);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = (undefined4)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = (undefined4)(0);
  param_1[5] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[0xd] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCElapsedTimeMeasurement);
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = (undefined4)(0);
  param_1[0x10] = (undefined4)(0);
  param_1[0x11] = (undefined4)(0);

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
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetMediaInfoAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetMediaInfoAIOOp);
  param_1[0x35f4] = (undefined4)(0);
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


// Reference entry 10563670; body size 195 bytes.
#line 1 "ENTRY_10563670"

undefined4 * __thiscall Recovered_Bulk::FUN_10563670(int *param_2,int param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegate);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddToQueueUIAction);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCAddToQueueUIAction);

  param_1[6] = (undefined4)(param_2);
  param_1[7] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))(uVar1));
    param_1[7] = (undefined4)(piVar2);
    (**(code **)(*piVar2 + 4))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *(undefined1 *)(param_1 + 8) = 0;
  thunk_FUN_101ff8b0();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (param_3 != 0) {
    thunk_FUN_10204c50(param_3);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
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
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  puVar1 = (undefined4 *)(param_1 + 2);

  thunk_FUN_11240650();
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  param_1[6] = (undefined4)(iVar5);
  if (iVar5 != 0) {
    thunk_FUN_1123fce0(iVar5 + 4);
  }
  param_1[7] = (undefined4)(0);
  param_1[5] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[0xd] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCElapsedTimeMeasurement);
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = (undefined4)(0);
  param_1[0x10] = (undefined4)(0);
  param_1[0x11] = (undefined4)(0);
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
  param_1[1] = (undefined4)(0);
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
  param_1[1] = (undefined4)(0);
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


// Reference entry 10564b80; body size 209 bytes.
#line 1 "ENTRY_10564b80"

undefined4 * __thiscall Recovered_Bulk::FUN_10564b80(int *param_2,int param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegate);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPlayNextUIAction);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCPlayNextUIAction);

  param_1[6] = (undefined4)(param_2);
  param_1[7] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))(uVar1));
    param_1[7] = (undefined4)(piVar2);
    (**(code **)(*piVar2 + 4))();
  }
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_101ff8b0();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  if (param_3 != 0) {
    thunk_FUN_10204c50(param_3);
  }

  return (undefined4 *)(param_1);

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
    piVar2[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar2[2] = (int)((int)(uint)&ghidra_vftable_SCIActionDelegate);
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCCompoundAction);
    piVar2[2] = (int)((int)(uint)&ghidra_vftable_SCCompoundAction);
    piVar2[3] = (int)(0);
    piVar2[4] = (int)(0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
    piVar2[5] = (int)((int)piVar4);
    piVar2[6] = (int)(0);
    if (piVar4 != (int *)0x0) {
      piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
      piVar2[6] = (int)((int)piVar4);
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
    local_444[0] = (undefined4)(0);

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
      piVar4[2] = (int)((int)(uint)&ghidra_vftable_SCAddQueueOp);
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
      piVar5[1] = (int)(0);
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      piVar5[2] = (int)((int)(uint)&ghidra_vftable_SCIActionDelegate);
      piVar5[3] = (int)(0);
      piVar5[4] = (int)(0);
      *(undefined1 *)(piVar5 + 5) = 0;
      *piVar5 = (int)((int)(uint)&ghidra_vftable_SCPlayNextUIAction);
      piVar5[2] = (int)((int)(uint)&ghidra_vftable_SCPlayNextUIAction);
      *(unsigned char *)((char *)&local_410 + 0) = 5;
      piVar5[6] = (int)((int)piVar4);
      piVar5[7] = (int)(0);
      local_41c = (int *)(piVar5);
      if (piVar4 != (int *)0x0) {
        piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
        piVar5[7] = (int)((int)piVar4);
        (**(code **)(*piVar4 + 4))();
      }
      *(undefined1 *)(piVar5 + 8) = 0;
      piVar5[9] = (int)(0);
      piVar5[10] = (int)(0);
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


// Reference entry 10579d90; body size 162 bytes.
#line 1 "ENTRY_10579d90"

undefined4 * __thiscall Recovered_Bulk::FUN_10579d90(undefined4 param_2,undefined4 param_3,byte param_4,
            undefined4 param_5,undefined4 param_6,int *param_7)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_1057a360(param_2,param_3,param_4 ^ 1,param_5);
  *(byte *)(param_1 + 0x18) = param_4;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddToNewPlaylistAction);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  param_1[0x19] = (undefined4)(param_6);
  param_1[0x1a] = (undefined4)(param_7);
  if (param_7 != (int *)0x0) {
    (**(code **)(*param_7 + 4))(uVar1);
  }

  if (param_7 != (int *)0x0) {
    (**(code **)(*param_7 + 8))();
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
          puVar12[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpCDUpdateObjectAIOOp);
          puVar12[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpCDUpdateObjectAIOOp);
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


// Reference entry 10580a10; body size 632 bytes.
#line 1 "ENTRY_10580a10"

undefined4 * __thiscall Recovered_Bulk::FUN_10580a10(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 uVar1;
  char cVar2;
  int *piVar3;
  SCLibrary *this_;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int *piVar7;
  SCIAction *pSVar8;
  int *local_30;
  int *local_28;
  undefined4 *local_24;
  int local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  piVar7 = (int *)((int *)0x0);
  local_30 = (int *)((int *)0x0);
  local_18 = (undefined4 *)((undefined4 *)(param_1 + 0x1c));

  puVar5 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*local_18 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)((undefined1 *)*local_18);
  }
  local_1c = (undefined4 *)((undefined4 *)(param_1 + 0x18));
  puVar6 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*local_1c != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)((undefined1 *)*local_1c);
  }
  local_20 = (int)(param_1);
  thunk_FUN_112af4e0("SCAddPlaylistDescriptor",1,"Before Action: Add new PL. CPUDN:[%s] OID:[%s]",
                     puVar6,puVar5,DAT_12126b84 );
  if (*(int *)(param_1 + 0x10) == 0) {
    local_28 = (int *)(operator_new(0x20));
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    if (local_28 == (int *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      puVar4 = (undefined4 *)(operator_new(100));
      *(unsigned char *)((char *)&local_8 + 0) = 7;
      local_24 = (undefined4 *)(puVar4);
      if (puVar4 == (undefined4 *)0x0) {
        *(unsigned char *)((char *)&local_8 + 0) = 6;
        piVar3 = (int *)((int *)thunk_FUN_10200f40(0));
      }
      else {
        cVar2 = (char)(*(char *)(param_1 + 0x14));
        thunk_FUN_1057a360(local_1c,local_18,cVar2 == '\0',0);
        *puVar4 = (undefined4)((uint)&ghidra_vftable_SCAddPlaylistAction);
        *(char *)(puVar4 + 0x18) = cVar2;
        *(unsigned char *)((char *)&local_8 + 0) = 6;
        piVar3 = (int *)((int *)thunk_FUN_10200f40(puVar4));
      }
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0;
    if (piVar3 != (int *)0x0) {
      piVar7 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
      (**(code **)(*piVar7 + 4))();
      local_30 = (int *)(piVar3);
    }
  }
  else {
    if (*(char *)(param_1 + 0x14) != '\0') {
      cVar2 = (char)(thunk_FUN_111a0e70(&DAT_118823e4));
      if (cVar2 != '\0') {
        thunk_FUN_1106f8f0();
      }
    }
    local_28 = (int *)(operator_new(0x20));
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    if (local_28 == (int *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      local_14 = (undefined4 *)(operator_new(0x6c));
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      if (local_14 == (undefined4 *)0x0) {
        *(unsigned char *)((char *)&local_8 + 0) = 1;
        piVar3 = (int *)((int *)thunk_FUN_10200f40(0));
      }
      else {
        piVar3 = (int *)(*(int **)(param_1 + 0xc));
        local_24 = (undefined4 *)(*(undefined4 **)(param_1 + 8));
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 4))();
        }
        cVar2 = (char)(*(char *)(param_1 + 0x14));
        *(unsigned char *)((char *)&local_8 + 0) = 3;
        thunk_FUN_1057a360(local_1c,local_18,cVar2 == '\0',*(undefined4 *)(local_20 + 0x10));
        *(char *)(local_14 + 0x18) = cVar2;
        *local_14 = (undefined4)((uint)&ghidra_vftable_SCAddToNewPlaylistAction);
        *(unsigned char *)((char *)&local_8 + 0) = 4;
        local_14[0x19] = (undefined4)(local_24);
        local_14[0x1a] = (undefined4)(piVar3);
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 4))();
        }
        *(unsigned char *)((char *)&local_8 + 0) = 5;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))();
        }
        *(unsigned char *)((char *)&local_8 + 0) = 1;
        piVar3 = (int *)((int *)thunk_FUN_10200f40(local_14));
      }
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0;
    if (piVar3 != (int *)0x0) {
      piVar7 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
      (**(code **)(*piVar7 + 4))();
      local_30 = (int *)(piVar3);
    }
  }
  pSVar8 = (SCIAction *)((SCIAction *)&local_28);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  puVar4 = (undefined4 *)((undefined4 *)((SCLibrary *)(this_))->createActionContextForAction(pSVar8));
  uVar1 = (undefined4)(*puVar4);
  *puVar4 = (undefined4)(0);
  *param_2 = (undefined4)(uVar1);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
  if (local_28 != (int *)0x0) {
    (**(code **)(*local_28 + 8))(local_30);
  }

  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 8))();
  }

  return (undefined4 *)(param_2);

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
    piVar3[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar3[2] = (int)((int)(uint)&ghidra_vftable_SCIActionDelegate);
    *piVar3 = (int)((int)(uint)&ghidra_vftable_SCCompoundAction);
    piVar3[2] = (int)((int)(uint)&ghidra_vftable_SCCompoundAction);
    piVar3[3] = (int)(0);
    piVar3[4] = (int)(0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
    piVar3[5] = (int)((int)piVar5);
    piVar3[6] = (int)(0);
    if (piVar5 != (int *)0x0) {
      piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0xc))(uVar2));
      piVar3[6] = (int)((int)piVar5);
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

  param_1[1] = (undefined4)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = (undefined4)(0);
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
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

  thunk_FUN_11240650(uVar1);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = (undefined4)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = (undefined4)(0);
  param_1[5] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[0xd] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCElapsedTimeMeasurement);
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = (undefined4)(0);
  param_1[0x10] = (undefined4)(0);
  param_1[0x11] = (undefined4)(0);

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
  param_1[0x48] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFavoritesBrowseItem);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCFavoritesBrowseItem);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCFavoritesBrowseItem);
  param_1[0xf] = (undefined4)((uint)&ghidra_vftable_SCFavoritesBrowseItem);
  param_1[0x10] = (undefined4)((uint)&ghidra_vftable_SCFavoritesBrowseItem);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCFavoritesBrowseItem);
  param_1[0x46] = (undefined4)((uint)&ghidra_vftable_SCFavoritesBrowseItem);
  param_1[0x48] = (undefined4)((uint)&ghidra_vftable_SCFavoritesBrowseItem);
  param_1[0x49] = (undefined4)(0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_101ff8b0();
  *(undefined1 *)(param_1 + 0x71) = 0;
  param_1[0x72] = (undefined4)(0xffffffff);
  param_1[0x74] = (undefined4)(0);
  param_1[0x75] = (undefined4)(0);
  param_1[0x73] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  param_1[0x77] = (undefined4)(0);
  param_1[0x78] = (undefined4)(0);
  param_1[0x76] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

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
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  puVar1 = (undefined4 *)(param_1 + 2);

  thunk_FUN_11240650(uVar2);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = (undefined4)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = (undefined4)(0);
  param_1[5] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[0xd] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCElapsedTimeMeasurement);
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = (undefined4)(0);
  param_1[0x10] = (undefined4)(0);
  param_1[0x11] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAddFavorites);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpAddFavorites);

  return (undefined4 *)(param_1);

 } catch (...) { }
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
      puVar4[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpCDUpdateObjectAIOOp);
      puVar4[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpCDUpdateObjectAIOOp);
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
              local_1828[2] = (int)(0);
              local_1828[1] = (int)(0);
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
        piVar12[-2] = (int)(0);
        piVar12[-3] = (int)(0);
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
              local_182c[2] = (int)(0);
              local_182c[1] = (int)(0);
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
              piVar12[-2] = (int)(0);
              piVar12[-3] = (int)(0);
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
            piVar16[-2] = (int)(0);
            piVar16[-3] = (int)(0);
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
        puVar5[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpCDUpdateObjectAIOOp);
        puVar5[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpCDUpdateObjectAIOOp);
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


// Reference entry 10594ab0; body size 93 bytes.
#line 1 "ENTRY_10594ab0"

undefined4 * __thiscall Recovered_Bulk::FUN_10594ab0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)(param_2);

  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x30));
  param_1[1] = (undefined4)(pvVar1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10594cf0; body size 294 bytes.
#line 1 "ENTRY_10594cf0"

undefined4 * __thiscall Recovered_Bulk::FUN_10594cf0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int iVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  iVar6 = (int)(*param_2);
  iVar1 = (int)(param_2[1]);
  if (iVar6 != iVar1) {
    uVar4 = (uint)((iVar1 - iVar6) / 0x1c);
    if (0x9249249 < uVar4) {
LAB_10594e11:
                    
      thunk_FUN_1012a2a0(uVar2);
    }
    uVar4 = (uint)(uVar4 * 0x1c);
    if (uVar4 < 0x1000) {
      if (uVar4 == 0) {
        pvVar5 = (void *)((void *)0x0);
      }
      else {
        pvVar5 = (void *)(operator_new(uVar4));
      }
    }
    else {
      if (uVar4 + 0x23 <= uVar4) goto LAB_10594e11;
      pvVar3 = (void *)(operator_new(uVar4 + 0x23));
      if (pvVar3 == (void *)0x0) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
      pvVar5 = (void *)((void *)((int)pvVar3 + 0x23U & 0xffffffe0));
      *(void **)((int)pvVar5 + -4) = pvVar3;
    }
    *param_1 = (undefined4)(pvVar5);
    param_1[1] = (undefined4)(pvVar5);
    param_1[2] = (undefined4)((void *)(uVar4 + (int)pvVar5));

    do {
      thunk_FUN_10594e60(iVar6);
      pvVar5 = (void *)((void *)((int)pvVar5 + 0x1c));
      iVar6 = (int)(iVar6 + 0x1c);
    } while (iVar6 != iVar1);
    param_1[1] = (undefined4)(pvVar5);
  }

  return (undefined4 *)(param_1);

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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
  }
  return;
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
    param_1[1] = (uint)(0);
    param_1[2] = (uint)(0);
  }
  if (uVar5 < 0x15555556) {
    uVar5 = (uint)(uVar5 * 0xc);
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
      if (pvVar1 != (void *)0x0) {
        uVar2 = (uint)((int)pvVar1 + 0x23U & 0xffffffe0);
        *(void **)(uVar2 - 4) = pvVar1;
        *param_1 = (uint)(uVar2);
        param_1[1] = (uint)(uVar2);
        param_1[2] = (uint)(uVar2 + uVar5);
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
  piVar1[1] = (int)(*(int *)(param_2 + 4));
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
  piVar2[2] = (int)((int)piVar1);
  *piVar1 = (int)(param_2);
  *(int **)(param_2 + 4) = piVar1;
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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
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


// Reference entry 1059b440; body size 144 bytes.
#line 1 "ENTRY_1059b440"

undefined4 * __thiscall Recovered_Bulk::FUN_1059b440(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)(param_2);

  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18));
  param_1[1] = (undefined4)(pvVar1);
  *(undefined4 *)((int)pvVar1 + 0x10) = *(undefined4 *)*param_5;
  *(undefined4 *)((int)pvVar1 + 0x14) = 0;
  *(undefined4 *)param_1[1] = (undefined4)(param_3);
  *(undefined4 *)(param_1[1] + 4) = param_3;
  *(undefined4 *)(param_1[1] + 8) = param_3;
  *(undefined1 *)(param_1[1] + 0xc) = 0;
  *(undefined1 *)(param_1[1] + 0xd) = 0;

  return (undefined4 *)(param_1);

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
  param_2[1] = (int)(0);
  param_2[2] = (int)(iVar1);
  if (*(char *)((int)puVar4 + 0xd) == '\0') {
    uVar2 = (uint)(*param_3);
    do {
      *param_2 = (int)((int)puVar4);
      uVar3 = (uint)(puVar4[4]);
      if (uVar2 <= uVar3) {
        param_2[2] = (int)((int)puVar4);
        puVar4 = (undefined4 *)((undefined4 *)*puVar4);
      }
      else {
        puVar4 = (undefined4 *)((undefined4 *)puVar4[2]);
      }
      param_2[1] = (int)((uint)(uVar2 <= uVar3));
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
    puVar3[4] = (undefined4)(*param_3);
    puVar3[5] = (undefined4)(0);
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = (undefined4)(uVar1);
    puVar3[2] = (undefined4)(uVar1);
    *(undefined2 *)(puVar3 + 3) = 0;
    iVar4 = (int)(thunk_FUN_1059cad0(local_24,local_20,puVar3));
    *param_2 = (int)(iVar4);
    *(undefined1 *)(param_2 + 1) = 1;

    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar2);

 } catch (...) { }
}


// Reference entry 1059bbd0; body size 93 bytes.
#line 1 "ENTRY_1059bbd0"

undefined4 * __thiscall Recovered_Bulk::FUN_1059bbd0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)(param_2);

  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18));
  param_1[1] = (undefined4)(pvVar1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1059bd30; body size 141 bytes.
#line 1 "ENTRY_1059bd30"

undefined4 * __thiscall Recovered_Bulk::FUN_1059bd30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_11240650(DAT_12126b84 );
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCTimerInternal);
  param_1[1] = (undefined4)(param_2);

  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  param_1[2] = (undefined4)(pvVar1);
  thunk_FUN_112a9cf0(param_1 + 4);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1059bde0; body size 257 bytes.
#line 1 "ENTRY_1059bde0"

undefined4 * __thiscall Recovered_Bulk::FUN_1059bde0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  int *in_stack_0000002c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_11240650(uVar1);
  param_1[1] = (undefined4)((uint)&ghidra_vftable_SCTimerInternal);
  param_1[2] = (undefined4)(param_1);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  pvVar2 = (void *)(operator_new(0x18));
  *(void **)pvVar2 = (void *)(pvVar2);
  *(void **)((int)pvVar2 + 4) = pvVar2;
  *(void **)((int)pvVar2 + 8) = pvVar2;
  *(undefined2 *)((int)pvVar2 + 0xc) = 0x101;
  param_1[3] = (undefined4)(pvVar2);
  thunk_FUN_112a9cf0(param_1 + 5);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  *param_1 = (undefined4)((uint)&ghidra_vftable_sc_Timer);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_sc_Timer);
  *(undefined1 *)(param_1 + 8) = 0;
  uVar3 = (undefined4)(param_2[1]);
  param_1[10] = (undefined4)(*param_2);
  param_1[0xb] = (undefined4)(uVar3);
  param_1[0x15] = (undefined4)(0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  if (in_stack_0000002c != (int *)0x0) {
    uVar3 = (undefined4)((**(code **)*in_stack_0000002c)(param_1 + 0xc));
    param_1[0x15] = (undefined4)(uVar3);
    if (in_stack_0000002c != (int *)0x0) {
      (**(code **)(*in_stack_0000002c + 0x10))(in_stack_0000002c != (int *)&stack0x00000008);
    }
  }

  return (undefined4 *)(param_1);

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
    puVar3[4] = (undefined4)(*param_2);
    puVar3[5] = (undefined4)(0);
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = (undefined4)(uVar1);
    puVar3[2] = (undefined4)(uVar1);
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
  piVar1[1] = (int)(*(int *)(param_2 + 4));
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
  piVar2[2] = (int)((int)piVar1);
  *piVar1 = (int)(param_2);
  *(int **)(param_2 + 4) = piVar1;
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
    puVar2[2] = (undefined4)(0);
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


// Reference entry 1059e720; body size 154 bytes.
#line 1 "ENTRY_1059e720"

undefined4 * __thiscall Recovered_Bulk::FUN_1059e720(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)(param_2);

  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x30));
  param_1[1] = (undefined4)(pvVar1);

  *(undefined4 *)((int)pvVar1 + 0x10) = *(undefined4 *)*param_5;
  thunk_FUN_103d6a60(0);
  *(undefined4 *)param_1[1] = (undefined4)(param_3);
  *(undefined4 *)(param_1[1] + 4) = param_3;
  *(undefined4 *)(param_1[1] + 8) = param_3;
  *(undefined1 *)(param_1[1] + 0xc) = 0;
  *(undefined1 *)(param_1[1] + 0xd) = 0;

  return (undefined4 *)(param_1);

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
      param_1[1] = (int)(0);
      param_1[2] = (int)(0);
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
    param_1[1] = (int)((int)_Dst);
    param_1[2] = (int)((int)(uVar4 + (int)_Dst));
  }
  memmove(_Dst,param_2,_Size);
  param_1[1] = (int)((int)_Dst + _Size);
  return;
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
  param_1[1] = (int)((int)((int)_Dst + uVar1 * 4));
  param_1[2] = (int)((int)((int)_Dst + uVar5 * 4));
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
  param_1[1] = (int)((int)((int)_Dst + uVar1 * 4));
  param_1[2] = (int)((int)((int)_Dst + uVar5 * 4));
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
  param_2[1] = (int)(0);
  param_2[2] = (int)(iVar1);
  if (*(char *)((int)puVar3 + 0xd) == '\0') {
    iVar1 = (int)(*param_3);
    do {
      *param_2 = (int)((int)puVar3);
      iVar2 = (int)(puVar3[4]);
      if (iVar1 <= iVar2) {
        param_2[2] = (int)((int)puVar3);
        puVar3 = (undefined4 *)((undefined4 *)*puVar3);
      }
      else {
        puVar3 = (undefined4 *)((undefined4 *)puVar3[2]);
      }
      param_2[1] = (int)((uint)(iVar1 <= iVar2));
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

    puVar3[4] = (undefined4)(*param_3);
    local_14 = (undefined4 *)(puVar3);
    thunk_FUN_103d6a60(0);
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = (undefined4)(uVar1);
    puVar3[2] = (undefined4)(uVar1);
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


// Reference entry 1059faa0; body size 93 bytes.
#line 1 "ENTRY_1059faa0"

undefined4 * __thiscall Recovered_Bulk::FUN_1059faa0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)(param_2);

  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x30));
  param_1[1] = (undefined4)(pvVar1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1059fc40; body size 100 bytes.
#line 1 "ENTRY_1059fc40"

undefined4 * __thiscall Recovered_Bulk::FUN_1059fc40(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *_Src;
  void *_Dst;
  size_t _Size;
  int iVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  _Src = (void *)((void *)*param_2);
  if (_Src != (void *)param_2[1]) {
    _Size = (size_t)((int)param_2[1] - (int)_Src);
    iVar1 = (int)((int)_Size >> 2);
    _Dst = (void *)((void *)thunk_FUN_105a1f40(iVar1));
    *param_1 = (undefined4)(_Dst);
    param_1[1] = (undefined4)(_Dst);
    param_1[2] = (undefined4)((void *)((int)_Dst + iVar1 * 4));
    memmove(_Dst,_Src,_Size);
    param_1[1] = (undefined4)((void *)((int)_Dst + iVar1 * 4));
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1059fce0; body size 100 bytes.
#line 1 "ENTRY_1059fce0"

undefined4 * __thiscall Recovered_Bulk::FUN_1059fce0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *_Src;
  void *_Dst;
  size_t _Size;
  int iVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  _Src = (void *)((void *)*param_2);
  if (_Src != (void *)param_2[1]) {
    _Size = (size_t)((int)param_2[1] - (int)_Src);
    iVar1 = (int)((int)_Size >> 2);
    _Dst = (void *)((void *)thunk_FUN_105a1fb0(iVar1));
    *param_1 = (undefined4)(_Dst);
    param_1[1] = (undefined4)(_Dst);
    param_1[2] = (undefined4)((void *)((int)_Dst + iVar1 * 4));
    memmove(_Dst,_Src,_Size);
    param_1[1] = (undefined4)((void *)((int)_Dst + iVar1 * 4));
  }
  return (undefined4 *)(param_1);
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


// Reference entry 1059ffb0; body size 155 bytes.
#line 1 "ENTRY_1059ffb0"

undefined4 * __thiscall Recovered_Bulk::FUN_1059ffb0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizLifecycleRecorder);
  thunk_FUN_10df26a0(uVar1);

  thunk_FUN_10df26a0();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  param_1[0x1b] = (undefined4)(0);
  param_1[0x1c] = (undefined4)(0);
  pvVar2 = (void *)(operator_new(0x30));
  *(void **)pvVar2 = (void *)(pvVar2);
  *(void **)((int)pvVar2 + 4) = pvVar2;
  *(void **)((int)pvVar2 + 8) = pvVar2;
  *(undefined2 *)((int)pvVar2 + 0xc) = 0x101;
  param_1[0x1b] = (undefined4)(pvVar2);
  param_1[0x1d] = (undefined4)(param_2);
  param_1[0x1e] = (undefined4)(param_3);

  return (undefined4 *)(param_1);

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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
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

    puVar3[4] = (undefined4)(*param_2);
    local_14 = (undefined4 *)(puVar3);
    thunk_FUN_103d6a60(0);
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = (undefined4)(uVar1);
    puVar3[2] = (undefined4)(uVar1);
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
  param_1[1] = (int)(param_2 + param_3 * 4);
  param_1[2] = (int)(param_2 + param_4 * 4);
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
  param_1[1] = (int)(param_2 + param_3 * 4);
  param_1[2] = (int)(param_2 + param_4 * 4);
  return;
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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
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


// Reference entry 105a3910; body size 144 bytes.
#line 1 "ENTRY_105a3910"

undefined4 * __thiscall Recovered_Bulk::FUN_105a3910(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)(param_2);

  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18));
  param_1[1] = (undefined4)(pvVar1);
  *(undefined4 *)((int)pvVar1 + 0x10) = *(undefined4 *)*param_5;
  *(undefined4 *)((int)pvVar1 + 0x14) = 0;
  *(undefined4 *)param_1[1] = (undefined4)(param_3);
  *(undefined4 *)(param_1[1] + 4) = param_3;
  *(undefined4 *)(param_1[1] + 8) = param_3;
  *(undefined1 *)(param_1[1] + 0xc) = 0;
  *(undefined1 *)(param_1[1] + 0xd) = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
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
  param_1[1] = (undefined4)(0);
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
  param_1[1] = (int)(0);
  pvVar7 = (void *)(operator_new(0x38));
  *(void **)pvVar7 = (void *)(pvVar7);
  *(void **)((int)pvVar7 + 4) = pvVar7;
  *(void **)((int)pvVar7 + 8) = pvVar7;
  *(undefined2 *)((int)pvVar7 + 0xc) = 0x101;
  *param_1 = (int)((int)pvVar7);

  uVar8 = (undefined4)(thunk_FUN_105a4bf0(*(undefined4 *)(*param_2 + 4),pvVar7,param_2));
  *(undefined4 *)(*param_1 + 4) = uVar8;
  piVar2 = (int *)((int *)*param_1);
  param_1[1] = (int)(param_2[1]);
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
  param_1[1] = (int)(param_2[1]);
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
  param_2[1] = (int)(0);
  param_2[2] = (int)(iVar1);
  if (*(char *)((int)puVar3 + 0xd) == '\0') {
    iVar1 = (int)(*param_3);
    do {
      *param_2 = (int)((int)puVar3);
      iVar2 = (int)(puVar3[4]);
      if (iVar1 <= iVar2) {
        param_2[2] = (int)((int)puVar3);
        puVar3 = (undefined4 *)((undefined4 *)*puVar3);
      }
      else {
        puVar3 = (undefined4 *)((undefined4 *)puVar3[2]);
      }
      param_2[1] = (int)((uint)(iVar1 <= iVar2));
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
  param_2[1] = (int)(0);
  param_2[2] = (int)(iVar1);
  if (*(char *)((int)puVar4 + 0xd) == '\0') {
    uVar2 = (uint)(*param_3);
    do {
      *param_2 = (int)((int)puVar4);
      uVar3 = (uint)(puVar4[4]);
      if (uVar2 <= uVar3) {
        param_2[2] = (int)((int)puVar4);
        puVar4 = (undefined4 *)((undefined4 *)*puVar4);
      }
      else {
        puVar4 = (undefined4 *)((undefined4 *)puVar4[2]);
      }
      param_2[1] = (int)((uint)(uVar2 <= uVar3));
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
    puVar3[4] = (undefined4)(*param_3);
    puVar3[5] = (undefined4)(0);
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = (undefined4)(uVar1);
    puVar3[2] = (undefined4)(uVar1);
    *(undefined2 *)(puVar3 + 3) = 0;
    iVar4 = (int)(thunk_FUN_105aa9d0(local_24,local_20,puVar3));
    *param_2 = (int)(iVar4);
    *(undefined1 *)(param_2 + 1) = 1;

    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar2);

 } catch (...) { }
}


// Reference entry 105a6fb0; body size 93 bytes.
#line 1 "ENTRY_105a6fb0"

undefined4 * __thiscall Recovered_Bulk::FUN_105a6fb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)(param_2);

  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18));
  param_1[1] = (undefined4)(pvVar1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105a7030; body size 93 bytes.
#line 1 "ENTRY_105a7030"

undefined4 * __thiscall Recovered_Bulk::FUN_105a7030(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)(param_2);

  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x20));
  param_1[1] = (undefined4)(pvVar1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105a70b0; body size 93 bytes.
#line 1 "ENTRY_105a70b0"

undefined4 * __thiscall Recovered_Bulk::FUN_105a70b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)(param_2);

  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x38));
  param_1[1] = (undefined4)(pvVar1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105a7130; body size 93 bytes.
#line 1 "ENTRY_105a7130"

undefined4 * __thiscall Recovered_Bulk::FUN_105a7130(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)(param_2);

  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  param_1[1] = (undefined4)(pvVar1);

  return (undefined4 *)(param_1);

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
  param_1[1] = (undefined4)(0);
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
  param_1[1] = (int)(0);
  pvVar7 = (void *)(operator_new(0x38));
  *(void **)pvVar7 = (void *)(pvVar7);
  *(void **)((int)pvVar7 + 4) = pvVar7;
  *(void **)((int)pvVar7 + 8) = pvVar7;
  *(undefined2 *)((int)pvVar7 + 0xc) = 0x101;
  *param_1 = (int)((int)pvVar7);

  uVar8 = (undefined4)(thunk_FUN_105a4bf0(*(undefined4 *)(*param_2 + 4),pvVar7,param_2));
  *(undefined4 *)(*param_1 + 4) = uVar8;
  piVar2 = (int *)((int *)*param_1);
  param_1[1] = (int)(param_2[1]);
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


// Reference entry 105a7700; body size 147 bytes.
#line 1 "ENTRY_105a7700"

undefined4 * __thiscall Recovered_Bulk::FUN_105a7700(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  param_1[2] = (undefined4)(param_2[2]);
  thunk_FUN_10deea50(param_2 + 3);
  param_1[9] = (undefined4)(param_2[9]);
  piVar1 = (int *)((int *)param_2[10]);

  param_1[10] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }
  param_1[0xb] = (undefined4)(param_2[0xb]);
  piVar1 = (int *)((int *)param_2[0xc]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  param_1[0xc] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }

  return (undefined4 *)(param_1);

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
    puVar3[4] = (undefined4)(*param_2);
    puVar3[5] = (undefined4)(0);
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = (undefined4)(uVar1);
    puVar3[2] = (undefined4)(uVar1);
    *(undefined2 *)(puVar3 + 3) = 0;
    local_1c = (int)(thunk_FUN_105aa9d0(local_24,local_20,puVar3));
  }

  return (int)(local_1c + 0x14);

 } catch (...) { }
}


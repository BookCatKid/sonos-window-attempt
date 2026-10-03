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
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern int append(...);
extern int beginsWith(...);
extern __declspec(dllimport) int ceil(...);
extern int contains(...);
extern int createActionContextForAction(...);
extern int createPropertyBag(...);
extern int createSCActionFilterer(...);
extern int createSCStringArray(...);
extern int experiment(...);
extern __declspec(dllimport) int fclose(...);
extern int feature(...);
extern int format(...);
extern __declspec(dllimport) int fseek(...);
extern int getSCHousehold(...);
extern int getSingleton(...);
extern int hasDeveloperOption(...);
extern int int_addref(...);
extern int int_allocRep(...);
extern int int_release(...);
extern int int_start(...);
extern int isNotEmpty(...);
extern int isShuttingDown(...);
extern int length(...);
extern int op_eq(...);
extern int operator_new(...);
extern int stringWithFormat(...);
extern __declspec(dllimport) int strncmp(...);
extern __declspec(dllimport) int strtoul(...);
extern int thunk_FUN_10120220(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_1012a4c0(...);
extern int thunk_FUN_1012cab0(...);
extern int thunk_FUN_1012d130(...);
extern int thunk_FUN_101a2b90(...);
extern int thunk_FUN_101a2bf0(...);
extern int thunk_FUN_101aa9f0(...);
extern int thunk_FUN_101b5540(...);
extern int thunk_FUN_101b5de0(...);
extern int thunk_FUN_101b87f0(...);
extern int thunk_FUN_101b9a40(...);
extern int thunk_FUN_101b9d60(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101ba530(...);
extern int thunk_FUN_101be460(...);
extern int thunk_FUN_101be780(...);
extern int thunk_FUN_101bf1f0(...);
extern int thunk_FUN_101bf370(...);
extern int thunk_FUN_101c42f0(...);
extern int thunk_FUN_101c4810(...);
extern int thunk_FUN_101c5190(...);
extern int thunk_FUN_101c6ae0(...);
extern int thunk_FUN_101c8790(...);
extern int thunk_FUN_101caf60(...);
extern int thunk_FUN_101ccbf0(...);
extern int thunk_FUN_101cd010(...);
extern int thunk_FUN_101cde00(...);
extern int thunk_FUN_101cdee0(...);
extern int thunk_FUN_101cdf90(...);
extern int thunk_FUN_101d3630(...);
extern int thunk_FUN_101d4290(...);
extern int thunk_FUN_101d6b80(...);
extern int thunk_FUN_101d7220(...);
extern int thunk_FUN_101da380(...);
extern int thunk_FUN_101da390(...);
extern int thunk_FUN_101da3a0(...);
extern int thunk_FUN_101da4a0(...);
extern int thunk_FUN_101dad50(...);
extern int thunk_FUN_101dbeb0(...);
extern int thunk_FUN_101dcfc0(...);
extern int thunk_FUN_101e2d80(...);
extern int thunk_FUN_101e6900(...);
extern int thunk_FUN_101e69d0(...);
extern int thunk_FUN_101e76a0(...);
extern int thunk_FUN_101e7e50(...);
extern int thunk_FUN_101e85f0(...);
extern int thunk_FUN_101e8670(...);
extern int thunk_FUN_101e8710(...);
extern int thunk_FUN_101e8900(...);
extern int thunk_FUN_101e8b00(...);
extern int thunk_FUN_101e8ca0(...);
extern int thunk_FUN_101e8ef0(...);
extern int thunk_FUN_101e90e0(...);
extern int thunk_FUN_101e9180(...);
extern int thunk_FUN_101ec4a0(...);
extern int thunk_FUN_101ec790(...);
extern int thunk_FUN_101ec940(...);
extern int thunk_FUN_101ec9b0(...);
extern int thunk_FUN_101ee670(...);
extern int thunk_FUN_101f13e0(...);
extern int thunk_FUN_101f3880(...);
extern int thunk_FUN_101f4150(...);
extern int thunk_FUN_101f4a30(...);
extern int thunk_FUN_101f6530(...);
extern int thunk_FUN_101f66f0(...);
extern int thunk_FUN_101f6bb0(...);
extern int thunk_FUN_101fad10(...);
extern int thunk_FUN_101fcfa0(...);
extern int thunk_FUN_101fd3a0(...);
extern int thunk_FUN_101fd7b0(...);
extern int thunk_FUN_101fd960(...);
extern int thunk_FUN_101fda20(...);
extern int thunk_FUN_101fdb50(...);
extern int thunk_FUN_101fdc90(...);
extern int thunk_FUN_101fdfe0(...);
extern int thunk_FUN_101ff410(...);
extern int thunk_FUN_101ff8b0(...);
extern int thunk_FUN_10200aa0(...);
extern int thunk_FUN_10201010(...);
extern int thunk_FUN_10201120(...);
extern int thunk_FUN_10202e00(...);
extern int thunk_FUN_10203970(...);
extern int thunk_FUN_10203dc0(...);
extern int thunk_FUN_10204c50(...);
extern int thunk_FUN_10206850(...);
extern int thunk_FUN_10206e60(...);
extern int thunk_FUN_10207220(...);
extern int thunk_FUN_102072a0(...);
extern int thunk_FUN_10207b10(...);
extern int thunk_FUN_102089f0(...);
extern int thunk_FUN_1020a4c0(...);
extern int thunk_FUN_1020d760(...);
extern int thunk_FUN_1021adf0(...);
extern int thunk_FUN_1021d3c0(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_10220d70(...);
extern int thunk_FUN_10220fc0(...);
extern int thunk_FUN_10222610(...);
extern int thunk_FUN_102244a0(...);
extern int thunk_FUN_10224630(...);
extern int thunk_FUN_10224f30(...);
extern int thunk_FUN_10225310(...);
extern int thunk_FUN_102253f0(...);
extern int thunk_FUN_10225ef0(...);
extern int thunk_FUN_10225ff0(...);
extern int thunk_FUN_102260c0(...);
extern int thunk_FUN_10226130(...);
extern int thunk_FUN_1022d2b0(...);
extern int thunk_FUN_1022d6c0(...);
extern int thunk_FUN_1022d7c0(...);
extern int thunk_FUN_1022df10(...);
extern int thunk_FUN_10232a30(...);
extern int thunk_FUN_10232bf0(...);
extern int thunk_FUN_10232db0(...);
extern int thunk_FUN_102341a0(...);
extern int thunk_FUN_10234b50(...);
extern int thunk_FUN_1023a9c0(...);
extern int thunk_FUN_1023a9f0(...);
extern int thunk_FUN_1023fb30(...);
extern int thunk_FUN_10240a30(...);
extern int thunk_FUN_10240d50(...);
extern int thunk_FUN_10240ec0(...);
extern int thunk_FUN_10240fb0(...);
extern int thunk_FUN_10242250(...);
extern int thunk_FUN_10245cd0(...);
extern int thunk_FUN_10245f80(...);
extern int thunk_FUN_102460b0(...);
extern int thunk_FUN_10246170(...);
extern int thunk_FUN_10246290(...);
extern int thunk_FUN_10246ce0(...);
extern int thunk_FUN_102473e0(...);
extern int thunk_FUN_10247e10(...);
extern int thunk_FUN_1024a960(...);
extern int thunk_FUN_1024be70(...);
extern int thunk_FUN_1024bf80(...);
extern int thunk_FUN_1024cfc0(...);
extern int thunk_FUN_102517b0(...);
extern int thunk_FUN_102518f0(...);
extern int thunk_FUN_10254f10(...);
extern int thunk_FUN_102878a0(...);
extern int thunk_FUN_10288040(...);
extern int thunk_FUN_1028a700(...);
extern int thunk_FUN_1028b250(...);
extern int thunk_FUN_10292c70(...);
extern int thunk_FUN_10292cf0(...);
extern int thunk_FUN_102a0500(...);
extern int thunk_FUN_102d5690(...);
extern int thunk_FUN_102d5720(...);
extern int thunk_FUN_102d85d0(...);
extern int thunk_FUN_10308dc0(...);
extern int thunk_FUN_10308fd0(...);
extern int thunk_FUN_10309390(...);
extern int thunk_FUN_10309500(...);
extern int thunk_FUN_10309e90(...);
extern int thunk_FUN_10309ff0(...);
extern int thunk_FUN_1030a0d0(...);
extern int thunk_FUN_10320760(...);
extern int thunk_FUN_103238a0(...);
extern int thunk_FUN_10328780(...);
extern int thunk_FUN_1033d2d0(...);
extern int thunk_FUN_103434a0(...);
extern int thunk_FUN_1037a2b0(...);
extern int thunk_FUN_1037aad0(...);
extern int thunk_FUN_1037c680(...);
extern int thunk_FUN_1037cba0(...);
extern int thunk_FUN_1037cbb0(...);
extern int thunk_FUN_1037ddd0(...);
extern int thunk_FUN_1037f130(...);
extern int thunk_FUN_1038c3f0(...);
extern int thunk_FUN_1038d6e0(...);
extern int thunk_FUN_1038dd80(...);
extern int thunk_FUN_103aca40(...);
extern int thunk_FUN_103b91f0(...);
extern int thunk_FUN_103be5e0(...);
extern int thunk_FUN_103be9e0(...);
extern int thunk_FUN_103d0050(...);
extern int thunk_FUN_103d0880(...);
extern int thunk_FUN_103d3580(...);
extern int thunk_FUN_103d4f80(...);
extern int thunk_FUN_103d53c0(...);
extern int thunk_FUN_103d60a0(...);
extern int thunk_FUN_103d61d0(...);
extern int thunk_FUN_103d63b0(...);
extern int thunk_FUN_103d63d0(...);
extern int thunk_FUN_103d65f0(...);
extern int thunk_FUN_103d6930(...);
extern int thunk_FUN_103d6a60(...);
extern int thunk_FUN_103d6e00(...);
extern int thunk_FUN_103eb600(...);
extern int thunk_FUN_1040bfa0(...);
extern int thunk_FUN_1041cc10(...);
extern int thunk_FUN_10435c80(...);
extern int thunk_FUN_10436b00(...);
extern int thunk_FUN_10436b10(...);
extern int thunk_FUN_10436ca0(...);
extern int thunk_FUN_10436cd0(...);
extern int thunk_FUN_10437a40(...);
extern int thunk_FUN_10437b20(...);
extern int thunk_FUN_10437b40(...);
extern int thunk_FUN_104d76e0(...);
extern int thunk_FUN_104d9900(...);
extern int thunk_FUN_104d9cc0(...);
extern int thunk_FUN_104da760(...);
extern int thunk_FUN_104dbeb0(...);
extern int thunk_FUN_104dce00(...);
extern int thunk_FUN_104dd4a0(...);
extern int thunk_FUN_104ddf90(...);
extern int thunk_FUN_104ddfd0(...);
extern int thunk_FUN_104deb40(...);
extern int thunk_FUN_104dec20(...);
extern int thunk_FUN_104e7580(...);
extern int thunk_FUN_104ea590(...);
extern int thunk_FUN_104ed040(...);
extern int thunk_FUN_104ed740(...);
extern int thunk_FUN_104ed870(...);
extern int thunk_FUN_104f6770(...);
extern int thunk_FUN_104f7a90(...);
extern int thunk_FUN_10509ca0(...);
extern int thunk_FUN_1050f680(...);
extern int thunk_FUN_105106c0(...);
extern int thunk_FUN_105142d0(...);
extern int thunk_FUN_1059bd30(...);
extern int thunk_FUN_1059c050(...);
extern int thunk_FUN_1059d5a0(...);
extern int thunk_FUN_1059d800(...);
extern int thunk_FUN_1059d940(...);
extern int thunk_FUN_1059dd40(...);
extern int thunk_FUN_105a7950(...);
extern int thunk_FUN_105a85f0(...);
extern int thunk_FUN_105ad850(...);
extern int thunk_FUN_105b5360(...);
extern int thunk_FUN_105b5ef0(...);
extern int thunk_FUN_105ed770(...);
extern int thunk_FUN_105ed9c0(...);
extern int thunk_FUN_105ee3e0(...);
extern int thunk_FUN_105ef470(...);
extern int thunk_FUN_105f0080(...);
extern int thunk_FUN_10649300(...);
extern int thunk_FUN_1106b190(...);
extern int thunk_FUN_1106e690(...);
extern int thunk_FUN_1106f2b0(...);
extern int thunk_FUN_1106f6e0(...);
extern int thunk_FUN_1106fb60(...);
extern int thunk_FUN_11080e90(...);
extern int thunk_FUN_11081140(...);
extern int thunk_FUN_11081b20(...);
extern int thunk_FUN_11081d90(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_11093530(...);
extern int thunk_FUN_110935f0(...);
extern int thunk_FUN_11093a20(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_1109e3f0(...);
extern int thunk_FUN_1109e4d0(...);
extern int thunk_FUN_1109f100(...);
extern int thunk_FUN_1109f140(...);
extern int thunk_FUN_1109f210(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_110a3340(...);
extern int thunk_FUN_110a48f0(...);
extern int thunk_FUN_110a54e0(...);
extern int thunk_FUN_110a5700(...);
extern int thunk_FUN_110a5ba0(...);
extern int thunk_FUN_110a9ef0(...);
extern int thunk_FUN_110adac0(...);
extern int thunk_FUN_110b0460(...);
extern int thunk_FUN_110b2900(...);
extern int thunk_FUN_110b3620(...);
extern int thunk_FUN_110b59c0(...);
extern int thunk_FUN_110b5aa0(...);
extern int thunk_FUN_110cb9c0(...);
extern int thunk_FUN_110db5f0(...);
extern int thunk_FUN_110ecc20(...);
extern int thunk_FUN_110f2980(...);
extern int thunk_FUN_110f4420(...);
extern int thunk_FUN_111a0720(...);
extern int thunk_FUN_111a0940(...);
extern int thunk_FUN_111a0e70(...);
extern int thunk_FUN_111a1540(...);
extern int thunk_FUN_111c06e0(...);
extern int thunk_FUN_111c0760(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_11242b10(...);
extern int thunk_FUN_11242ca0(...);
extern int thunk_FUN_11242d90(...);
extern int thunk_FUN_11242f30(...);
extern int thunk_FUN_11249230(...);
extern int thunk_FUN_1124d740(...);
extern int thunk_FUN_1124d770(...);
extern int thunk_FUN_1124d790(...);
extern int thunk_FUN_1124d7a0(...);
extern int thunk_FUN_1124d7e0(...);
extern int thunk_FUN_1124d980(...);
extern int thunk_FUN_1124ff50(...);
extern int thunk_FUN_1124ffa0(...);
extern int thunk_FUN_112503c0(...);
extern int thunk_FUN_112504b0(...);
extern int thunk_FUN_11255220(...);
extern int thunk_FUN_11255560(...);
extern int thunk_FUN_112580d0(...);
extern int thunk_FUN_11272de0(...);
extern int thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1145c2a0(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148ac80(...);
extern int thunk_FUN_1148b586(...);
extern int DAT_1186d2ee;
extern int DAT_1187b694;
extern int DAT_11880fb0;
extern int DAT_11882ff0;
extern int DAT_1188465c;
extern int DAT_11884810;
extern int DAT_11884fe8;
extern int DAT_11887338;
extern int DAT_11887910;
extern int DAT_11887928;
extern int DAT_11889c5c;
extern int DAT_12126b84;
extern int DAT_121a0a28;
extern int DAT_121a0a34;
extern int DAT_121a0a64;
extern int g_lSCObjCount;
extern int ghidra_vftable_BatteryWeakChargerData;
extern int ghidra_vftable_FactoryResetData;
extern int ghidra_vftable_ForgotHouseholdData;
extern int ghidra_vftable_InvalidOptimo2OrientationData;
extern int ghidra_vftable_LaunchWifiConfig;
extern int ghidra_vftable_LegacyCRModernHHData;
extern int ghidra_vftable_ModernCRLegacyZPsAndHHSWGenData;
extern int ghidra_vftable_NoNetworkFoundData;
extern int ghidra_vftable_OutdatedControllerData;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RFavoriteHelper;
extern int ghidra_vftable_RITQHandler;
extern int ghidra_vftable_RUpnpCDGetAllPrefixLocationsAIOOp;
extern int ghidra_vftable_RetailDemoData;
extern int ghidra_vftable_SCAccountManagerEventSink;
extern int ghidra_vftable_SCActionDelegateProxy;
extern int ghidra_vftable_SCActionFilterer;
extern int ghidra_vftable_SCActionOnGroupWrapperActionDescriptor;
extern int ghidra_vftable_SCActionWrapperActionDescriptor;
extern int ghidra_vftable_SCAllNodeBrowseItemBase;
extern int ghidra_vftable_SCAppReporting;
extern int ghidra_vftable_SCAppSessionManager;
extern int ghidra_vftable_SCAppUrlAction;
extern int ghidra_vftable_SCAppUrlActionDescriptor;
extern int ghidra_vftable_SCAsyncBrowseDataSource;
extern int ghidra_vftable_SCAsyncBrowseDataSourceBase;
extern int ghidra_vftable_SCAsyncBrowseItem;
extern int ghidra_vftable_SCAsyncBrowseItemBase;
extern int ghidra_vftable_SCBTClassicConnectionManagerEventSink;
extern int ghidra_vftable_SCBrowseItemEventSink;
extern int ghidra_vftable_SCCompoundAction;
extern int ghidra_vftable_SCController;
extern int ghidra_vftable_SCControllerTest;
extern int ghidra_vftable_SCControllerTest_InitializeFlutterAutomation;
extern int ghidra_vftable_SCController_LimitedAccessStateData;
extern int ghidra_vftable_SCCreateAndSummonNewWizActionDescriptorFor;
extern int ghidra_vftable_SCData;
extern int ghidra_vftable_SCDeferredEvtHelper;
extern int ghidra_vftable_SCDisplayCustomControlActionDescriptor;
extern int ghidra_vftable_SCDisplayWizardActionDescriptorBase;
extern int ghidra_vftable_SCEulaManager;
extern int ghidra_vftable_SCEventSubscriptionImpl;
extern int ghidra_vftable_SCExperimentManager;
extern int ghidra_vftable_SCFetchTokenOpActionWrapper;
extern int ghidra_vftable_SCFileBackedData;
extern int ghidra_vftable_SCHouseholdManagerEventSink;
extern int ghidra_vftable_SCIActionDelegateCB;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCIncrementHHSwgenAndOnlineUpdateWizardActionDescriptor;
extern int ghidra_vftable_SCNewWizControllerFor;
extern int ghidra_vftable_SCOnlineUpdateWizardActionDescriptor;
extern int ghidra_vftable_SCOpCBProxy;
extern int ghidra_vftable_SCOpRef;
extern int ghidra_vftable_SCOpRefBase;
extern int ghidra_vftable_SCOpenURIActionDescriptor;
extern int ghidra_vftable_SCOpenUrlActionDescriptor;
extern int ghidra_vftable_SCRequireTokenActionDescriptor;
extern int ghidra_vftable_SCSelectedItemsAddToQueueAtIdxDescriptor;
extern int ghidra_vftable_SCSelectedItemsAddToQueueDescriptor;
extern int ghidra_vftable_SCSelectedItemsPlayNextDescriptor;
extern int ghidra_vftable_SCSelectedItemsReplaceQueueDescriptor;
extern int ghidra_vftable_SCShareManagerEventSink;
extern int ghidra_vftable_SCStringArray;
extern int ghidra_vftable_SCSwfObjBCListener;
extern int ghidra_vftable_SCSwfObjHHListener;
extern int ghidra_vftable_SCSystemEventSink;
extern int ghidra_vftable_SCSystemStatusManagerEventSink;
extern int ghidra_vftable_SCTimerUser;
extern int ghidra_vftable_SCUrl;
extern int ghidra_vftable_SCUserAccountEventSink;
extern int ghidra_vftable_SCVersion;
extern int ghidra_vftable_SCWeakChargerLearnMoreActionDescriptor;
extern int ghidra_vftable_SWGenMismatchModernControllerMixedLegacyHHData;
extern int ghidra_vftable_ScopedRWLock;
extern int ghidra_vftable_UnsupportedData;
extern int ghidra_vftable_ZonePlayerUpdateData;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int in_EAX;
extern int unaff_EBP;
extern undefined1 LAB_101f38fa[];
extern undefined1 LAB_101f5876[];
extern undefined1 LAB_101f591d[];
extern undefined1 LAB_101f599a[];
extern undefined1 LAB_101f8a17[];
extern undefined1 LAB_101f8a29[];
extern undefined1 LAB_101f8da8[];
extern undefined1 LAB_10204f0d[];
extern undefined1 LAB_10207f11[];
extern undefined1 LAB_1021c23a[];
extern undefined1 LAB_1021c243[];
extern undefined1 LAB_1021c391[];
extern undefined1 LAB_1021c629[];
extern undefined1 LAB_1023b368[];
extern undefined1 LAB_1023b4eb[];
extern undefined1 LAB_1023b663[];
extern undefined1 LAB_1023bf22[];
extern undefined1 LAB_1023d2a1[];
extern undefined1 LAB_102400e2[];
extern undefined1 LAB_102401f9[];
extern undefined1 LAB_10240f50[];
extern undefined1 LAB_10241fc9[];
extern undefined1 LAB_102498dc[];
extern undefined1 LAB_1024ff97[];
extern undefined1 LAB_10250099[];
extern undefined1 LAB_114f62b7[];
extern undefined1 LAB_114f62fd[];
extern undefined1 LAB_114f633d[];
extern undefined1 LAB_114f637d[];
extern undefined1 LAB_114f6810[];
extern undefined1 LAB_114f6980[];
extern undefined1 LAB_114f6bf0[];
extern undefined1 LAB_114f78a0[];
extern undefined1 LAB_114f7910[];
extern undefined1 LAB_114f7940[];
extern undefined1 LAB_114f7a30[];
extern undefined1 LAB_114f7a60[];
extern undefined1 LAB_114f7e50[];
extern undefined1 LAB_114f7e80[];
extern undefined1 LAB_114f7eb0[];
extern undefined1 LAB_114f7ee0[];
extern undefined1 LAB_114f7f10[];
extern undefined1 LAB_114f7f40[];
extern undefined1 LAB_114f7f70[];
extern undefined1 LAB_114f7fa0[];
extern undefined1 LAB_114f7fd0[];
extern undefined1 LAB_114f8030[];
extern undefined1 LAB_114f8060[];
extern undefined1 LAB_114f8180[];
extern undefined1 LAB_114f81b0[];
extern undefined1 LAB_114f82d0[];
extern undefined1 LAB_114f8300[];
extern undefined1 LAB_114f8420[];
extern undefined1 LAB_114f8450[];
extern undefined1 LAB_114f8b50[];
extern undefined1 LAB_114f8c3d[];
extern undefined1 LAB_114f8c84[];
extern undefined1 LAB_114f919d[];
extern undefined1 LAB_114f94a0[];
extern undefined1 LAB_114f94d0[];
extern undefined1 LAB_114f9545[];
extern undefined1 LAB_114f9585[];
extern undefined1 LAB_114f95e0[];
extern undefined1 LAB_114f983d[];
extern undefined1 LAB_114f987d[];
extern undefined1 LAB_114f98bd[];
extern undefined1 LAB_114f98fd[];
extern undefined1 LAB_114f9d90[];
extern undefined1 LAB_114f9dc0[];
extern undefined1 LAB_114f9df0[];
extern undefined1 LAB_114f9e20[];
extern undefined1 LAB_114f9e50[];
extern undefined1 LAB_114f9e80[];
extern undefined1 LAB_114f9eb0[];
extern undefined1 LAB_114f9ee0[];
extern undefined1 LAB_114f9f10[];
extern undefined1 LAB_114f9f40[];
extern undefined1 LAB_114f9f70[];
extern undefined1 LAB_114f9fa0[];
extern undefined1 LAB_114f9fd0[];
extern undefined1 LAB_114fa000[];
extern undefined1 LAB_114fa030[];
extern undefined1 LAB_114fa060[];
extern undefined1 LAB_114fa090[];
extern undefined1 LAB_114fa0c0[];
extern undefined1 LAB_114fa0f0[];
extern undefined1 LAB_114fa120[];
extern undefined1 LAB_114fa150[];
extern undefined1 LAB_114fa180[];
extern undefined1 LAB_114fa1b0[];
extern undefined1 LAB_114fa1e0[];
extern undefined1 LAB_114fa210[];
extern undefined1 LAB_114fa240[];
extern undefined1 LAB_114fa270[];
extern undefined1 LAB_114fa2a0[];
extern undefined1 LAB_114fa2d0[];
extern undefined1 LAB_114fa480[];
extern undefined1 LAB_114fa540[];
extern undefined1 LAB_114fa5a0[];
extern undefined1 LAB_114fa630[];
extern undefined1 LAB_114fa660[];
extern undefined1 LAB_114fa690[];
extern undefined1 LAB_114fa6d5[];
extern undefined1 LAB_114fa940[];
extern undefined1 LAB_114fa970[];
extern undefined1 LAB_114faa00[];
extern undefined1 LAB_114faa60[];
extern undefined1 LAB_114faa90[];
extern undefined1 LAB_114fada5[];
extern undefined1 LAB_114fb0ad[];
extern undefined1 LAB_114fb1d0[];
extern undefined1 LAB_114fb200[];
extern undefined1 LAB_114fb545[];
extern undefined1 LAB_114fbbbd[];
extern undefined1 LAB_114fbd1d[];
extern undefined1 LAB_114fbd5d[];
extern undefined1 LAB_114fc34d[];
extern undefined1 LAB_114fc38d[];
extern undefined1 LAB_114fc455[];
extern undefined1 LAB_114fc48d[];
extern undefined1 LAB_114fc6c0[];
extern undefined1 LAB_114fc6f0[];
extern undefined1 LAB_114fc8b0[];
extern undefined1 LAB_114fcaa0[];
extern undefined1 LAB_114fce56[];
extern undefined1 LAB_114fd3fd[];
extern undefined1 LAB_114fdb92[];
extern undefined1 LAB_114fdfd0[];
extern undefined1 LAB_114fe000[];
extern undefined1 LAB_114fe1c0[];
extern undefined1 LAB_114fe1f0[];
extern undefined1 LAB_114fe26d[];
extern undefined1 LAB_114fe2ad[];
extern undefined1 LAB_114fe2ed[];
extern undefined1 LAB_114fe5a0[];
extern undefined1 LAB_114fe5d0[];
extern undefined1 LAB_114fe600[];
extern undefined1 LAB_114fe630[];
extern undefined1 LAB_114fe660[];
extern undefined1 LAB_114fe690[];
extern undefined1 LAB_114fe780[];
extern undefined1 LAB_114fe7b0[];
extern undefined1 LAB_114fe840[];
extern undefined1 LAB_114fe870[];
extern undefined1 LAB_114fef00[];
extern undefined1 LAB_114fef30[];
extern undefined1 LAB_114fefe0[];
extern undefined1 LAB_114ff87d[];
extern undefined1 LAB_114ff96d[];
extern undefined1 LAB_114ffad6[];
extern undefined1 LAB_114ffb5d[];
extern undefined1 LAB_114ffb9d[];
extern undefined1 LAB_115000b0[];
extern undefined1 LAB_115000e0[];
extern undefined1 LAB_115001a5[];
extern undefined1 LAB_11500330[];
extern undefined1 LAB_115003f0[];
extern undefined1 LAB_11500470[];
extern undefined1 LAB_115004a0[];
extern undefined1 LAB_11500500[];
extern undefined1 LAB_11500530[];
extern undefined1 LAB_11500590[];
extern undefined1 LAB_115005f0[];
extern undefined1 LAB_115008c0[];
extern undefined1 LAB_115008f0[];
extern undefined1 LAB_11500965[];
extern undefined1 LAB_11500b4d[];
extern undefined1 LAB_11500b8d[];
extern undefined1 LAB_1150119d[];
extern undefined1 LAB_1150136d[];
extern undefined1 LAB_115014ed[];
extern undefined1 LAB_115015ad[];
extern undefined1 LAB_115015ed[];
extern undefined1 LAB_11501675[];
extern undefined1 LAB_1150173d[];
extern undefined1 LAB_1150177d[];
extern undefined1 LAB_11501810[];
extern undefined1 LAB_11501840[];
extern undefined1 LAB_11501870[];
extern undefined1 LAB_11501900[];
extern undefined1 LAB_11501975[];
extern undefined1 LAB_11501a20[];
extern undefined1 LAB_11501a65[];
extern undefined1 LAB_11501c05[];
extern undefined1 LAB_11501d05[];
extern undefined1 LAB_11501d45[];
extern undefined1 LAB_11501d85[];
extern undefined1 LAB_11501dc5[];
extern undefined1 LAB_11501e15[];
extern undefined1 LAB_11501e50[];
extern undefined1 LAB_11501e80[];
extern undefined1 LAB_11501eb0[];
extern undefined1 LAB_11501ef5[];
extern undefined1 LAB_11501f2d[];
extern undefined1 LAB_11501f60[];
extern undefined1 LAB_11501f90[];
extern undefined1 LAB_1150200d[];
extern undefined1 LAB_1150205e[];
extern undefined1 LAB_1150218c[];
extern undefined1 LAB_115022e4[];
extern undefined1 LAB_11502d80[];
extern undefined1 LAB_11502db0[];
extern undefined1 LAB_11502de0[];
extern undefined1 LAB_11502e10[];
extern undefined1 LAB_11502e40[];
extern undefined1 LAB_11502e70[];
extern undefined1 LAB_11502ea0[];
extern undefined1 LAB_11502ed0[];
extern undefined1 LAB_11502f00[];
extern undefined1 LAB_11502f30[];
extern undefined1 LAB_11502f60[];
extern undefined1 LAB_11502f90[];
extern undefined1 LAB_11502fc0[];
extern undefined1 LAB_11502ff0[];
extern undefined1 LAB_11503020[];
extern undefined1 LAB_11503050[];
extern undefined1 LAB_11503080[];
extern undefined1 LAB_115030b0[];
extern undefined1 LAB_115030e0[];
extern undefined1 LAB_11503110[];
extern undefined1 LAB_11503140[];
extern undefined1 LAB_11503170[];
extern undefined1 LAB_115031a0[];
extern undefined1 LAB_115031d0[];
extern undefined1 LAB_11503200[];
extern undefined1 LAB_11503230[];
extern undefined1 LAB_11503260[];
extern undefined1 LAB_11503290[];
extern undefined1 LAB_115032c0[];
extern undefined1 LAB_115032f0[];
extern undefined1 LAB_11503500[];
extern undefined1 LAB_11503530[];
extern undefined1 LAB_11503560[];
extern undefined1 LAB_11503590[];
extern undefined1 LAB_115035c0[];
extern undefined1 LAB_115035f0[];
extern undefined1 LAB_11503620[];
extern undefined1 LAB_11503650[];
extern undefined1 LAB_11503680[];
extern undefined1 LAB_115036b0[];
extern undefined1 LAB_115036e0[];
extern undefined1 LAB_11503710[];
extern undefined1 LAB_11503740[];
extern undefined1 LAB_11503770[];
extern undefined1 LAB_115037a0[];
extern undefined1 LAB_115037d0[];
extern undefined1 LAB_11503800[];
extern undefined1 LAB_11503830[];
extern undefined1 LAB_11503860[];
extern undefined1 LAB_11503890[];
extern undefined1 LAB_115038c0[];
extern undefined1 LAB_11503905[];
extern undefined1 LAB_11503930[];
extern undefined1 LAB_11503960[];
extern undefined1 LAB_11503990[];
extern undefined1 LAB_115039c0[];
extern undefined1 LAB_115039f0[];
extern undefined1 LAB_11503a20[];
extern undefined1 LAB_11503a50[];
extern undefined1 LAB_11503a80[];
extern undefined1 LAB_11503ab0[];
extern undefined1 LAB_11503ae0[];
extern undefined1 LAB_11503b10[];
extern undefined1 LAB_11503b40[];
extern undefined1 LAB_11503b70[];
extern undefined1 LAB_11503ba0[];
extern undefined1 LAB_11503bd0[];
extern undefined1 LAB_11503e77[];
extern undefined1 LAB_11503edd[];
extern undefined1 LAB_11504297[];
extern undefined1 LAB_11504414[];
extern undefined1 LAB_11504440[];
extern undefined1 LAB_11504e33[];
extern undefined1 LAB_11504e8d[];
extern undefined1 LAB_1150543b[];
extern undefined1 LAB_1150559d[];
extern undefined1 LAB_11506704[];
extern undefined1 LAB_11506795[];
extern undefined1 LAB_11506940[];
extern undefined1 LAB_11506a35[];
extern undefined1 LAB_11506add[];
extern undefined1 LAB_11506b20[];
extern undefined1 LAB_11506b6d[];
extern undefined1 LAB_11506c18[];
extern undefined1 LAB_11506c83[];
extern undefined1 LAB_11506e4d[];
extern undefined1 LAB_1150700d[];
extern undefined1 LAB_115072c5[];
extern undefined1 LAB_1150732f[];
extern undefined1 LAB_11507447[];
extern undefined1 LAB_1150769f[];
extern undefined1 LAB_1150782c[];
extern undefined1 LAB_11507886[];
extern undefined1 LAB_11507950[];
extern undefined1 LAB_11507980[];
extern undefined1 LAB_11507a10[];
extern undefined1 LAB_11507a40[];
extern undefined1 LAB_11507ebd[];
extern undefined1 LAB_11507f2f[];
extern undefined1 LAB_11507f94[];
extern undefined1 LAB_11507ffd[];
extern undefined1 LAB_1150806d[];
extern undefined1 LAB_115080c3[];
extern undefined1 LAB_11508100[];
extern undefined1 LAB_1150814d[];
extern undefined1 LAB_1150818d[];
extern undefined1 LAB_115081cd[];
extern undefined1 LAB_1150820d[];
extern undefined1 LAB_11508530[];
extern undefined1 LAB_115085dd[];
extern undefined1 LAB_1150862d[];
extern undefined1 LAB_1150869d[];
extern undefined1 LAB_1150878d[];
extern undefined1 LAB_115087cd[];
extern undefined1 LAB_1150888d[];
extern undefined1 LAB_115088cd[];
extern undefined1 LAB_11508a1d[];
extern undefined1 LAB_11508a65[];
extern undefined1 LAB_11508aa5[];
extern undefined1 LAB_11508aed[];
extern undefined1 LAB_11508b35[];
extern undefined1 LAB_11508b75[];
extern undefined1 LAB_11508ba0[];
extern undefined1 LAB_11508bd0[];
extern undefined1 LAB_11508c00[];
extern undefined1 LAB_11508c45[];
extern undefined1 LAB_11508c85[];
extern undefined1 LAB_11508cc5[];
extern undefined1 LAB_11508d05[];
extern undefined1 LAB_11508db0[];
extern undefined1 LAB_11508de0[];
extern undefined1 LAB_11508e9d[];
extern undefined1 LAB_11508edd[];
extern undefined1 LAB_11508f25[];
extern undefined1 LAB_11508f65[];
extern undefined1 LAB_11508fa5[];
extern undefined1 LAB_11508fe5[];
extern undefined1 LAB_115091ed[];
extern undefined1 LAB_1150922d[];
extern undefined1 LAB_1150926d[];
extern undefined1 LAB_115092ad[];
extern undefined1 LAB_115092ed[];
extern undefined1 LAB_1150932d[];
extern undefined1 LAB_1150936d[];
extern undefined1 LAB_115093ad[];
extern undefined1 LAB_1150952d[];
extern undefined1 LAB_1150956d[];
extern undefined1 LAB_115095ad[];
extern undefined1 LAB_115095ed[];
extern undefined1 LAB_1150962d[];
extern undefined1 LAB_1150966d[];
extern undefined1 LAB_115096ad[];
extern undefined1 LAB_1150973d[];
extern undefined1 LAB_1150977d[];
extern undefined1 LAB_115097bd[];
extern undefined1 LAB_11509d2d[];
extern undefined1 LAB_11509dfd[];
extern undefined1 LAB_11509e3d[];
extern undefined1 LAB_11509e7d[];
extern undefined1 LAB_11509eb0[];
extern undefined1 LAB_11509ee0[];
extern undefined1 LAB_11509f10[];
extern undefined1 LAB_11509f40[];
extern undefined1 LAB_11509f70[];
extern undefined1 LAB_11509fa0[];
extern undefined1 LAB_11509fd0[];
extern undefined1 LAB_1150a000[];
extern undefined1 LAB_1150a030[];
extern undefined1 LAB_1150a060[];
extern undefined1 LAB_1150a090[];
extern undefined1 LAB_1150a0c0[];
extern undefined1 LAB_1150a0f0[];
extern undefined1 LAB_1150a120[];
extern undefined1 LAB_1150a150[];
extern undefined1 LAB_1150a180[];
extern undefined1 LAB_1150a1b0[];
extern undefined1 LAB_1150a1e0[];
extern undefined1 LAB_1150a210[];
extern undefined1 LAB_1150a240[];
extern undefined1 LAB_1150a270[];
extern undefined1 LAB_1150a2a0[];
extern undefined1 LAB_1150a300[];
extern undefined1 LAB_1150a330[];
extern undefined1 LAB_1150a360[];
extern undefined1 LAB_1150a390[];
extern undefined1 LAB_1150a3c0[];
extern undefined1 LAB_1150a3f0[];
extern undefined1 LAB_1150a420[];
extern undefined1 LAB_1150a450[];
extern undefined1 LAB_1150a480[];
extern undefined1 LAB_1150a4b0[];
extern undefined1 LAB_1150a4e0[];
extern undefined1 LAB_1150a510[];
extern undefined1 LAB_1150a540[];
extern undefined1 LAB_1150a570[];
extern undefined1 LAB_1150a5a0[];
extern undefined1 LAB_1150a5d0[];
extern undefined1 LAB_1150a600[];
extern undefined1 LAB_1150a630[];
extern undefined1 LAB_1150a660[];
extern undefined1 LAB_1150a690[];
extern undefined1 LAB_1150a6c0[];
extern undefined1 LAB_1150a6f0[];
extern undefined1 LAB_1150a720[];
extern undefined1 LAB_1150a750[];
extern undefined1 LAB_1150a780[];
extern undefined1 LAB_1150a7b0[];
extern undefined1 LAB_1150a7e0[];
extern undefined1 LAB_1150a810[];
extern undefined1 LAB_1150a840[];
extern undefined1 LAB_1150a870[];
extern undefined1 LAB_1150a8a0[];
extern undefined1 LAB_1150a8d0[];
extern undefined1 LAB_1150a900[];
extern undefined1 LAB_1150a930[];
extern undefined1 LAB_1150a960[];
extern undefined1 LAB_1150a990[];
extern undefined1 LAB_1150a9c0[];
extern undefined1 LAB_1150ae10[];
extern undefined1 LAB_1150ae55[];
extern undefined1 LAB_1150ae95[];
extern undefined1 LAB_1150aed5[];
extern undefined1 LAB_1150af15[];
extern undefined1 LAB_1150af40[];
extern undefined1 LAB_1150af70[];
extern undefined1 LAB_1150afe5[];
extern undefined1 LAB_1150b035[];
extern undefined1 LAB_1150b29c[];
extern undefined1 LAB_1150b2d0[];
extern undefined1 LAB_1150b300[];
extern undefined1 LAB_1150b33d[];
extern undefined1 LAB_1150b37d[];
extern undefined1 LAB_1150b3bd[];
extern undefined1 LAB_1150b3fd[];
extern undefined1 LAB_1150b454[];
extern undefined1 LAB_1150b4b4[];
extern undefined1 LAB_1150b514[];
extern undefined1 LAB_1150b574[];
extern undefined1 LAB_1150b5d4[];
extern undefined1 LAB_1150b68a[];
extern undefined1 LAB_1150b6f4[];
extern undefined1 LAB_1150b81e[];
extern undefined1 LAB_1150b8b9[];
extern undefined1 LAB_1150b97a[];
extern undefined1 LAB_1150baa4[];
extern undefined1 LAB_1150bb04[];
extern undefined1 LAB_1150bb64[];
extern undefined1 LAB_1150bbc4[];
extern undefined1 LAB_1150bc24[];
extern undefined1 LAB_1150bc84[];
extern undefined1 LAB_1150bda4[];
extern undefined1 LAB_1150be04[];
extern undefined1 LAB_1150bf24[];
extern undefined1 LAB_1150bf84[];
extern undefined1 LAB_1150bfe4[];
extern undefined1 LAB_1150c044[];
extern undefined1 LAB_1150c0a4[];
extern undefined1 LAB_1150c104[];
extern undefined1 LAB_1150c164[];
extern undefined1 LAB_1150c294[];
extern undefined1 LAB_1150c2f4[];
extern undefined1 LAB_1150c354[];
extern undefined1 LAB_1150c3b4[];
extern undefined1 LAB_1150c414[];
extern undefined1 LAB_1150c474[];
extern undefined1 LAB_1150c4d4[];
extern undefined1 LAB_1150c51d[];
extern undefined1 LAB_1150c6b5[];
extern undefined1 LAB_1150c705[];
extern undefined1 LAB_1150c75d[];
extern undefined1 LAB_1150c8a5[];
extern undefined1 LAB_1150c915[];
extern undefined1 LAB_1150c965[];
extern undefined1 LAB_1150cb05[];
extern undefined1 LAB_1150cba5[];
extern undefined1 LAB_1150cfc0[];
extern undefined1 LAB_1150d590[];
extern undefined1 LAB_1150d616[];
extern undefined1 LAB_1150d7bd[];
extern undefined1 LAB_1150d875[];
extern undefined1 LAB_1150db65[];
extern undefined1 LAB_1150dbe6[];
extern undefined1 LAB_1150dc35[];
extern undefined1 LAB_1150dcfe[];
extern undefined1 LAB_1150dd6d[];
extern undefined1 LAB_1150dddd[];
extern undefined1 LAB_1150de95[];
extern undefined1 LAB_1150e385[];
extern undefined1 LAB_1150e3bd[];
extern undefined1 LAB_1150e41d[];
extern undefined1 LAB_1150e45d[];
extern undefined1 LAB_1150e52d[];
extern undefined1 LAB_1150e57d[];
extern undefined1 LAB_1150e5c5[];
extern undefined1 LAB_1150e620[];
extern undefined1 LAB_1150e650[];
extern undefined1 LAB_1150e680[];
extern undefined1 LAB_1150e6b0[];
extern undefined1 LAB_1150e6e0[];
extern undefined1 LAB_1150e710[];
extern undefined1 LAB_1150e81d[];
extern undefined1 LAB_1150e8f0[];
extern undefined1 LAB_1150e920[];
extern undefined1 LAB_1150ea10[];
extern undefined1 LAB_1150ea40[];
extern undefined1 LAB_1150edfc[];
extern undefined1 LAB_1150ee67[];
extern undefined1 LAB_1150eeb7[];
extern undefined1 LAB_1150eef0[];
extern undefined1 LAB_1150ef3e[];
extern undefined1 LAB_1150ef95[];
extern undefined1 LAB_1150efe5[];
extern undefined1 LAB_1150f025[];
extern undefined1 LAB_1150f06d[];
extern undefined1 LAB_1150f174[];
extern undefined1 LAB_1150f1a0[];
extern undefined1 LAB_1150f1ed[];
extern undefined1 LAB_1150f25d[];
extern undefined1 LAB_1150f408[];
extern undefined1 LAB_1150f440[];
extern undefined1 LAB_1150f470[];
extern undefined1 LAB_1150f4a0[];
extern undefined1 LAB_1150f635[];
extern undefined1 LAB_1150f685[];
extern undefined1 LAB_1150f6c5[];
extern undefined1 LAB_1150f705[];
extern undefined1 LAB_1150f745[];
extern undefined1 LAB_1150f7c5[];
extern undefined1 LAB_1150f815[];
extern undefined1 LAB_1150f9b5[];
extern undefined1 LAB_1150fa4d[];
extern undefined1 LAB_1150fa9d[];
extern undefined1 LAB_1150fb15[];
extern undefined1 LAB_1150fb50[];
extern undefined1 LAB_1150fbb0[];
extern undefined1 LAB_1150fbe0[];
extern undefined1 LAB_11510145[];
extern undefined1 LAB_11510275[];
extern undefined1 LAB_1151038d[];
extern undefined1 LAB_11510415[];
extern undefined1 LAB_115104dd[];
extern undefined1 LAB_1151051d[];
extern undefined1 LAB_115105f0[];
extern undefined1 LAB_11510620[];
extern undefined1 LAB_11510650[];
extern undefined1 LAB_11510680[];
extern undefined1 LAB_115106b0[];
extern undefined1 LAB_115106e0[];
extern undefined1 LAB_115109c5[];
extern undefined1 LAB_115109fd[];
extern undefined1 LAB_11510a3d[];
extern undefined1 LAB_11510f60[];
extern undefined1 LAB_1151157d[];
extern undefined1 LAB_115115bd[];
extern undefined1 LAB_115115fd[];
extern undefined1 LAB_1151168d[];
extern undefined1 LAB_11511900[];
extern undefined1 LAB_11511970[];
extern undefined1 LAB_115119a0[];
extern undefined1 LAB_115119e5[];
extern undefined1 LAB_11511a25[];
extern undefined1 LAB_11511a65[];
extern undefined1 LAB_11511b55[];
extern int *PTR_DAT_119c0d94;
extern int *stack0x00000004;
extern int *stack0x00000008;
extern int *stack0xfffffffc;
extern void *ExceptionList;
struct SCLibParameters { char _pad; SCLibParameters(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int hasDeveloperOption(A...); };
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int createActionContextForAction(A...); template<class... A> int getSCHousehold(A...); template<class... A> int getSingleton(A...); template<class... A> int isShuttingDown(A...); };
struct SCOpRefBase { char _pad; SCOpRefBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int int_start(A...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int append(A...); template<class... A> int beginsWith(A...); template<class... A> int contains(A...); template<class... A> int format(A...); template<class... A> int int_addref(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); template<class... A> int isNotEmpty(A...); template<class... A> int length(A...); template<class... A> int op_eq(A...); template<class... A> int stringWithFormat(A...); };
typedef void *A;
typedef void *ABCDEFGHIJKLMNOPQRSTUVWXYZ;
typedef void *AP;
typedef void *AT;
typedef void *AU;
typedef void *BE;
typedef void *CA;
typedef void *CH;
typedef void *CN;
typedef void *CONNECTIVITY_STATE_LIMITED_ACCESS;
typedef void *CONNECTIVITY_STATE_NORMAL;
typedef void *CONNECTIVITY_STATE_SEARCHING;
typedef void *CONNECTIVITY_STATE_WELCOME;
typedef void *DE;
typedef void *DK;
typedef void *ES;
typedef void *FI;
typedef void *FR;
typedef void *GB;
typedef void *HHID;
typedef void *IE;
typedef void *IT;
typedef void *JP;
typedef void *LOCK;
typedef void *MX;
typedef void *NL;
typedef void *NO;
typedef void *NZ;
typedef void *PL;
typedef void *REDACTED;
typedef void *RELEASE;
typedef void *S;
typedef void *SE;
typedef void *UDN;
typedef void *UNLOCK;
typedef void *US;
typedef void *WARNING;
struct Attempting { char _pad; Attempting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Automation { char _pad; Automation(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Backgrounded { char _pad; Backgrounded(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Bridges { char _pad; Bridges(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Browse { char _pad; Browse(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Bssid { char _pad; Bssid(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ConnectTimeout { char _pad; ConnectTimeout(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Connected { char _pad; Connected(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ConnectedPartners { char _pad; ConnectedPartners(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ContainerID { char _pad; ContainerID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Controller { char _pad; Controller(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Current { char _pad; Current(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Error { char _pad; Error(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Eula { char _pad; Eula(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ExperimentsMenu { char _pad; ExperimentsMenu(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Factory { char _pad; Factory(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Failed { char _pad; Failed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Feature { char _pad; Feature(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Flutter { char _pad; Flutter(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Foregrounded { char _pad; Foregrounded(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Forgetting { char _pad; Forgetting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct GetAllPrefixLocations { char _pad; GetAllPrefixLocations(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Getting { char _pad; Getting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Gone { char _pad; Gone(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Hidden { char _pad; Hidden(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Initializes { char _pad; Initializes(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct KnownNetwork { char _pad; KnownNetwork(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct LANPermissionsDenied { char _pad; LANPermissionsDenied(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Launched { char _pad; Launched(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct My { char _pad; My(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Network { char _pad; Network(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct No { char _pad; No(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct None { char _pad; None(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Now { char _pad; Now(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ObjectID { char _pad; ObjectID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Offline { char _pad; Offline(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct OfflineNonZoneBridgesFound { char _pad; OfflineNonZoneBridgesFound(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Online { char _pad; Online(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Only { char _pad; Only(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct OnlyZoneBridgesFound { char _pad; OnlyZoneBridgesFound(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct OutOfRange { char _pad; OutOfRange(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct PlayModel { char _pad; PlayModel(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct PlayModelHeroView { char _pad; PlayModelHeroView(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Playable { char _pad; Playable(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Playing { char _pad; Playing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct PrefixAndIndexCSV { char _pad; PrefixAndIndexCSV(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Resetting { char _pad; Resetting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCAccountManager { char _pad; SCAccountManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCAsyncBrowseDataSource { char _pad; SCAsyncBrowseDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCController { char _pad; SCController(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCControllerTest { char _pad; SCControllerTest(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCData { char _pad; SCData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCEulaManager { char _pad; SCEulaManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCExperimentManager { char _pad; SCExperimentManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIAccountManager { char _pad; SCIAccountManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIAction { char _pad; SCIAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIActionContext { char _pad; SCIActionContext(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIActionDelegate { char _pad; SCIActionDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIActionDescriptor { char _pad; SCIActionDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIActionOnGroupDescriptor { char _pad; SCIActionOnGroupDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIAddToQueueAtNumberDescriptor { char _pad; SCIAddToQueueAtNumberDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIAppReporting { char _pad; SCIAppReporting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIAppSessionManager { char _pad; SCIAppSessionManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIAutomationDelegate { char _pad; SCIAutomationDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIBTClassicConnectionManager { char _pad; SCIBTClassicConnectionManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIBrowseDataSource { char _pad; SCIBrowseDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIBrowseGroupsInfo { char _pad; SCIBrowseGroupsInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIBrowseItem { char _pad; SCIBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIBrowseMetadata { char _pad; SCIBrowseMetadata(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIController { char _pad; SCIController(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIControllerTest { char _pad; SCIControllerTest(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCICrashReportManager { char _pad; SCICrashReportManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIData { char _pad; SCIData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIEulaManager { char _pad; SCIEulaManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIEventSink { char _pad; SCIEventSink(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIExperimentManager { char _pad; SCIExperimentManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIHouseholdManager { char _pad; SCIHouseholdManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIInnerActionFactory { char _pad; SCIInnerActionFactory(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINetworkManagement { char _pad; SCINetworkManagement(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINewWizController { char _pad; SCINewWizController(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINowPlaying { char _pad; SCINowPlaying(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINowPlayingSource { char _pad; SCINowPlayingSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINowPlayingTransport { char _pad; SCINowPlayingTransport(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIObj { char _pad; SCIObj(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIPowerscrollDataSource { char _pad; SCIPowerscrollDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCISelectableItem { char _pad; SCISelectableItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCISystem { char _pad; SCISystem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCITooltip { char _pad; SCITooltip(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIUserAccount { char _pad; SCIUserAccount(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIWifiDelegate { char _pad; SCIWifiDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIZoneGroupMgr { char _pad; SCIZoneGroupMgr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Search { char _pad; Search(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Searching { char _pad; Searching(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Setting { char _pad; Setting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Settings { char _pad; Settings(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SetupHousehold { char _pad; SetupHousehold(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Sonos { char _pad; Sonos(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Starboy { char _pad; Starboy(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct State { char _pad; State(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct StateChanged { char _pad; StateChanged(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Still { char _pad; Still(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Substate { char _pad; Substate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Suspending { char _pad; Suspending(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct System { char _pad; System(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SystemNotFound { char _pad; SystemNotFound(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Terminating { char _pad; Terminating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct TotalPrefixes { char _pad; TotalPrefixes(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Unknown { char _pad; Unknown(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct UnknownNetwork { char _pad; UnknownNetwork(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct UpdateID { char _pad; UpdateID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WiFi { char _pad; WiFi(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WrongAP { char _pad; WrongAP(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered_Bulk { char _pad; void __thiscall FUN_101bbc60(undefined4 param_2,undefined4 param_3); void __thiscall FUN_101bbd90(undefined4 param_2,undefined4 param_3); int * __thiscall FUN_101bc4f0(int *param_2); undefined4 * __thiscall FUN_101be320(byte param_2); int * __thiscall FUN_101bf370(int *param_2); int * __thiscall FUN_101c3940(int *param_2); int * __thiscall FUN_101c39c0(int *param_2); int * __thiscall FUN_101c3b00(int *param_2); int * __thiscall FUN_101c7350(int *param_2); undefined4 * __thiscall FUN_101c7880(byte param_2); int * __thiscall FUN_101c7910(byte param_2); undefined4 * __thiscall FUN_101c7d70(byte param_2); undefined4 * __thiscall FUN_101c7ed0(byte param_2); void __thiscall FUN_101c8570(int param_2,int param_3,int param_4); float __thiscall FUN_101c8680(int param_2); void __thiscall FUN_101c8bc0(int param_2); undefined4 * __thiscall FUN_101ca290(undefined4 *param_2,undefined4 param_3,int *param_4); SCIAction * __thiscall FUN_101caf70(SCIAction *param_2); undefined4 * __thiscall FUN_101cc560(int param_2); int * __thiscall FUN_101cc950(int *param_2); int * __thiscall FUN_101cc9d0(int *param_2); int * __thiscall FUN_101ccab0(int *param_2); int * __thiscall FUN_101ccb50(int *param_2); int * __thiscall FUN_101ccbf0(int *param_2); int * __thiscall FUN_101ccf10(int *param_2); int * __thiscall FUN_101ccf90(int *param_2); int * __thiscall FUN_101cd010(int *param_2); int * __thiscall FUN_101cd0d0(int *param_2); int * __thiscall FUN_101cd150(int *param_2); int * __thiscall FUN_101cd1d0(int *param_2); int * __thiscall FUN_101cd2b0(int *param_2); int * __thiscall FUN_101cd7d0(int *param_2); uint __thiscall FUN_101cda80(undefined4 *param_2); void __thiscall FUN_101cdda0(undefined4 param_2); undefined4 * __thiscall FUN_101ce690(undefined4 *param_2,uint *param_3); int __thiscall FUN_101d01f0(int param_2); int __thiscall FUN_101d0270(int param_2); int __thiscall FUN_101d0300(int *param_2); int __thiscall FUN_101d0370(int param_2); int __thiscall FUN_101d0400(int param_2); int * __thiscall FUN_101d3bb0(int *param_2); int * __thiscall FUN_101d3c80(int *param_2); int * __thiscall FUN_101d3cf0(int *param_2); int * __thiscall FUN_101d3dc0(int *param_2); int * __thiscall FUN_101d3e30(int *param_2); int * __thiscall FUN_101d3ea0(int *param_2); int * __thiscall FUN_101d3f10(int *param_2); int * __thiscall FUN_101d3f80(int *param_2); int * __thiscall FUN_101d3fe0(int *param_2); undefined4 * __thiscall FUN_101d4290(uint *param_2); int * __thiscall FUN_101d4810(int *param_2); undefined4 * __thiscall FUN_101d53d0(byte param_2); undefined4 * __thiscall FUN_101d5770(byte param_2); undefined4 * __thiscall FUN_101d5b30(byte param_2); undefined4 * __thiscall FUN_101d5e00(byte param_2); undefined4 * __thiscall FUN_101d5ee0(byte param_2); void __thiscall FUN_101d6e80(int param_2); void __thiscall FUN_101d7100(int *param_2); void __thiscall FUN_101d7620(int param_2,undefined2 param_3); int __thiscall FUN_101d7e10(int *param_2,undefined4 param_3); undefined4 __thiscall FUN_101d9170(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_101d9560(undefined4 *param_2); int * __thiscall FUN_101d95e0(int *param_2); undefined4 * __thiscall FUN_101d9710(undefined4 *param_2); int * __thiscall FUN_101da240(int *param_2); undefined4 * __thiscall FUN_101dcfc0(undefined4 *param_2); void __thiscall FUN_101dd3a0(undefined1 param_2); void __thiscall FUN_101dfd70(int param_2); int * __thiscall FUN_101e04e0(int *param_2); int * __thiscall FUN_101e0560(int *param_2); int * __thiscall FUN_101e0900(int *param_2); int * __thiscall FUN_101e09e0(int *param_2); int * __thiscall FUN_101e1410(int *param_2); int * __thiscall FUN_101e1480(int *param_2); void __thiscall FUN_101e2250(int param_2); void __thiscall FUN_101e2330(int *param_2); bool __thiscall FUN_101e2c90(int *param_2); int * __thiscall FUN_101e3a80(int *param_2); int * __thiscall FUN_101e7e50(int *param_2); int * __thiscall FUN_101e7fd0(int *param_2); int * __thiscall FUN_101e8090(int *param_2); int * __thiscall FUN_101e8390(int *param_2); int * __thiscall FUN_101e8400(int *param_2); void __thiscall FUN_101e8480(int param_2,int param_3); undefined4 * __thiscall FUN_101e9810(undefined4 *param_2,int *param_3,int *param_4); undefined4 * __thiscall FUN_101e99b0(undefined4 *param_2,int *param_3,int *param_4); int * __thiscall FUN_101ea090(int *param_2); int * __thiscall FUN_101eb4b0(int *param_2); int * __thiscall FUN_101eb520(int *param_2); int * __thiscall FUN_101eb590(int *param_2); int * __thiscall FUN_101eb600(int *param_2); int * __thiscall FUN_101eb6d0(int *param_2); int * __thiscall FUN_101eb7a0(int *param_2); undefined4 * __thiscall FUN_101ebce0(byte param_2); undefined4 * __thiscall FUN_101ebd70(byte param_2); void __thiscall FUN_101ec0c0(int param_2,int param_3,int param_4); void __thiscall FUN_101ec150(int param_2,int param_3,int param_4); void __thiscall FUN_101ee0c0(undefined4 *param_2,int *param_3); void __thiscall FUN_101ee1d0(undefined4 *param_2,int *param_3); undefined4 * __thiscall FUN_101ee590(undefined4 *param_2,int *param_3); undefined4 * __thiscall FUN_101f13e0(undefined4 *param_2); undefined4 * __thiscall FUN_101f1740(undefined4 *param_2,int *param_3,int *param_4); undefined4 * __thiscall FUN_101f18e0(undefined4 *param_2,int *param_3,int *param_4); void __thiscall FUN_101f31c0(int param_2,int param_3,undefined1 param_4); void __thiscall FUN_101f3520(int *param_2); void __thiscall FUN_101f3630(int *param_2); int * __thiscall FUN_101f3db0(int *param_2); int * __thiscall FUN_101f4c70(int *param_2); int * __thiscall FUN_101f4ce0(int *param_2); undefined4 * __thiscall FUN_101f5060(byte param_2); undefined4 * __thiscall FUN_101f5180(byte param_2); void __thiscall FUN_101f5640(SCStr *param_2); void __thiscall FUN_101f6390(undefined1 *param_2); void __thiscall FUN_101f8170(undefined4 param_2,SCStr *param_3,undefined4 param_4); undefined4 * __thiscall FUN_101f84c0(undefined4 *param_2,SCStr *param_3); void __thiscall FUN_101f8630(undefined4 *param_2,undefined4 *param_3,undefined4 param_4); void __thiscall FUN_101f8690(undefined4 param_2); void __thiscall FUN_101f9190(int *param_2); void __thiscall FUN_101f9400(undefined4 param_2); void __thiscall FUN_101f96b0(undefined1 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6); undefined4 * __thiscall FUN_101f9800(int param_2); int __thiscall FUN_101fa0a0(int param_2); int __thiscall FUN_101fa120(int *param_2); int __thiscall FUN_101fa190(int param_2); undefined4 * __thiscall FUN_101fa950(byte param_2); undefined4 * __thiscall FUN_101fab70(byte param_2); undefined4 * __thiscall FUN_101fb690(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_101fb710(undefined4 *param_2,SCStr *param_3); void __thiscall FUN_101fc010(int ***param_2); int * __thiscall FUN_101fc680(int *param_2); int * __thiscall FUN_101fc720(int *param_2); int * __thiscall FUN_101fc7a0(int *param_2); int * __thiscall FUN_101fc820(int *param_2); int * __thiscall FUN_101fc920(int *param_2); int * __thiscall FUN_101fca00(int *param_2); int * __thiscall FUN_101fca80(int *param_2); int * __thiscall FUN_101fcb00(int *param_2); int * __thiscall FUN_101fcbe0(int *param_2); int * __thiscall FUN_101fcd40(int *param_2); int * __thiscall FUN_101fcdc0(int *param_2); int * __thiscall FUN_101fce40(int *param_2); int * __thiscall FUN_101fcec0(int *param_2); int * __thiscall FUN_101fcfa0(int *param_2); int * __thiscall FUN_101fd060(int *param_2); int * __thiscall FUN_101fd0e0(int *param_2); int * __thiscall FUN_101fd250(int *param_2); int * __thiscall FUN_101fd3a0(int *param_2); int * __thiscall FUN_101fd4f0(undefined4 *param_2); void __thiscall FUN_101fd7b0(int param_2,int param_3); undefined4 __thiscall FUN_101fdb50(undefined4 param_2,int *param_3); int * __thiscall FUN_101fdc90(int *param_2,undefined4 param_3); int * __thiscall FUN_101fde60(int *param_2,int *param_3); undefined4 * __thiscall FUN_101feed0(undefined4 *param_2); int * __thiscall FUN_101ff140(int *param_2); undefined4 * __thiscall FUN_101ff2f0(int param_2,int param_3,int *param_4); int * __thiscall FUN_101ff410(int *param_2); int * __thiscall FUN_102047e0(int *param_2); int * __thiscall FUN_10204850(int *param_2); int * __thiscall FUN_10204920(int *param_2); int * __thiscall FUN_10204990(int *param_2); int * __thiscall FUN_10204a00(int *param_2); int * __thiscall FUN_10204a70(int *param_2); int * __thiscall FUN_10204b40(int *param_2); int * __thiscall FUN_10204bb0(int *param_2); int __thiscall FUN_10204c50(int param_2); int __thiscall FUN_10204e40(int *param_2); int * __thiscall FUN_10205660(byte param_2); undefined4 * __thiscall FUN_102057b0(byte param_2); undefined4 * __thiscall FUN_10205910(byte param_2); undefined4 * __thiscall FUN_10205b80(byte param_2); undefined4 * __thiscall FUN_10205c30(byte param_2); undefined4 * __thiscall FUN_10205d10(byte param_2); undefined4 * __thiscall FUN_10205e00(byte param_2); undefined4 * __thiscall FUN_10205f00(byte param_2); undefined4 * __thiscall FUN_10206180(byte param_2); undefined4 * __thiscall FUN_10206230(byte param_2); undefined4 * __thiscall FUN_10206310(byte param_2); undefined4 * __thiscall FUN_102063e0(byte param_2); undefined4 * __thiscall FUN_102064b0(byte param_2); undefined4 * __thiscall FUN_10206580(byte param_2); undefined4 * __thiscall FUN_10206650(byte param_2); int * __thiscall FUN_10206790(byte param_2); int * __thiscall FUN_10206850(int *param_2,uint param_3); void __thiscall FUN_10207ce0(undefined4 param_2,char *param_3,int *param_4,undefined4 param_5,
            undefined4 param_6); undefined4 * __thiscall FUN_10209230(undefined4 *param_2,undefined4 param_3); void __thiscall FUN_1020a450(int *param_2,undefined4 param_3); undefined4 * __thiscall FUN_1020a760(undefined4 *param_2); undefined4 __thiscall FUN_1020b9d0(undefined4 param_2,undefined4 param_3); int __thiscall FUN_1020d260(undefined4 *param_2); undefined4 * __thiscall FUN_1020d830(undefined4 *param_2); undefined4 __thiscall FUN_1020d9f0(undefined4 param_2,undefined4 param_3); int * __thiscall FUN_1020f4f0(int *param_2,uint param_3); void __thiscall FUN_1020f890(SCStr *param_2); void __thiscall FUN_1020fc00(int *param_2); SCStr * __thiscall FUN_10210410(SCStr *param_2,uint param_3); int * __thiscall FUN_102161d0(int *param_2); undefined4 __thiscall FUN_102162f0(undefined4 param_2); undefined4 * __thiscall FUN_10216ee0(undefined4 *param_2); int __thiscall FUN_10217340(undefined4 *param_2); undefined1 __thiscall FUN_10218810(char *param_2); bool __thiscall FUN_10219ac0(int param_2); void __thiscall FUN_1021bf80(int *param_2,int *param_3); undefined4 * __thiscall FUN_1021f010(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1021f0b0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1021f180(undefined4 *param_2,SCStr *param_3); int * __thiscall FUN_1021f270(int *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1021f3a0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1021f420(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1021f4f0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1021f570(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1021f610(undefined4 *param_2,SCStr *param_3); undefined4 __thiscall FUN_102207b0(int param_2,undefined4 param_3,undefined4 param_4); int __thiscall FUN_10220860(undefined4 param_2); void __thiscall FUN_10220920(int *param_2); void __thiscall FUN_10220b00(char param_2); void __thiscall FUN_102213d0(undefined4 param_2,byte param_3); void __thiscall FUN_10221570(int param_2,byte param_3); void __thiscall FUN_10221850(int param_2); void __thiscall FUN_10221970(int param_2); void __thiscall FUN_10221af0(int *param_2); undefined4 * __thiscall FUN_10221be0(int param_2); undefined4 * __thiscall FUN_10221c80(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10221ff0(byte param_2); size_t __thiscall FUN_10222280(uint param_2,void *param_3,size_t param_4); size_t __thiscall FUN_10222350(long param_2,void *param_3,size_t param_4); undefined4 * __thiscall FUN_10222470(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_102224f0(undefined4 *param_2,SCStr *param_3); size_t __thiscall FUN_10222610(void *param_2,size_t param_3); int * __thiscall FUN_102226d0(int *param_2); void __thiscall FUN_10223470(char *param_2); undefined1 __thiscall FUN_10223710(SCStr *param_2); undefined4 * __thiscall FUN_10223d70(int param_2); undefined4 * __thiscall FUN_10223e00(int param_2); undefined4 * __thiscall FUN_10224010(undefined4 *param_2); undefined4 * __thiscall FUN_10224250(int param_2); int * __thiscall FUN_10224f30(int *param_2); int * __thiscall FUN_10224fb0(int *param_2); int * __thiscall FUN_10225030(int *param_2); int * __thiscall FUN_10225170(int *param_2); int * __thiscall FUN_10225230(int *param_2); int * __thiscall FUN_10225310(undefined4 *param_2); int * __thiscall FUN_102253f0(int *param_2); int * __thiscall FUN_10225670(int *param_2); int * __thiscall FUN_102257a0(undefined4 *param_2); int * __thiscall FUN_10225900(undefined4 *param_2); void __thiscall FUN_10227ab0(int *param_2,byte *param_3); void __thiscall FUN_10227b30(int *param_2,byte *param_3); undefined4 * __thiscall FUN_102286c0(undefined4 *param_2); undefined4 * __thiscall FUN_10228750(undefined4 *param_2,int param_3); undefined4 * __thiscall FUN_10228810(undefined4 param_2,undefined4 param_3,int param_4); undefined4 * __thiscall FUN_102288b0(undefined4 param_2,undefined4 param_3,int param_4); undefined4 * __thiscall FUN_10228950(undefined4 param_2,undefined4 param_3,int param_4); undefined4 * __thiscall FUN_102289f0(undefined4 param_2,undefined4 param_3,int param_4); undefined4 * __thiscall FUN_10228d60(undefined4 param_2,undefined4 param_3,undefined4 param_4); int __thiscall FUN_10229c30(int param_2); int __thiscall FUN_10229cb0(int param_2); int __thiscall FUN_10229d30(int param_2); int __thiscall FUN_10229db0(int param_2); int __thiscall FUN_10229e30(int param_2); int __thiscall FUN_10229eb0(int *param_2); int __thiscall FUN_10229f20(int param_2); int __thiscall FUN_10229fa0(int *param_2); int __thiscall FUN_1022a010(int param_2); int __thiscall FUN_1022a090(int *param_2); int __thiscall FUN_1022a100(int param_2); undefined4 * __thiscall FUN_1022a920(undefined4 param_2); int __thiscall FUN_1022c0c0(int *param_2); int __thiscall FUN_1022c130(int param_2); int __thiscall FUN_1022c450(int *param_2); int __thiscall FUN_1022c4c0(int param_2); int * __thiscall FUN_1022f2b0(int *param_2); int * __thiscall FUN_1022f320(int *param_2); int * __thiscall FUN_1022f390(int *param_2); int * __thiscall FUN_1022f400(int *param_2); undefined4 * __thiscall FUN_1022ff90(byte param_2); undefined4 * __thiscall FUN_10230060(byte param_2); undefined4 * __thiscall FUN_10230130(byte param_2); undefined4 * __thiscall FUN_10230200(byte param_2); undefined4 * __thiscall FUN_102302d0(byte param_2); undefined4 * __thiscall FUN_10230460(byte param_2); undefined4 * __thiscall FUN_102304d0(byte param_2); undefined4 * __thiscall FUN_10230540(byte param_2); undefined4 * __thiscall FUN_102305b0(byte param_2); undefined4 * __thiscall FUN_10230620(byte param_2); int __thiscall FUN_102307f0(byte param_2); int __thiscall FUN_10230850(byte param_2); undefined4 * __thiscall FUN_10230a60(byte param_2); undefined4 * __thiscall FUN_10230bd0(byte param_2); undefined4 * __thiscall FUN_10230d30(byte param_2); undefined4 * __thiscall FUN_10230dd0(byte param_2); undefined4 * __thiscall FUN_10230e80(byte param_2); undefined4 * __thiscall FUN_10230f90(byte param_2); undefined4 * __thiscall FUN_10231080(byte param_2); undefined4 * __thiscall FUN_10231210(byte param_2); undefined4 * __thiscall FUN_102312f0(byte param_2); undefined4 * __thiscall FUN_102313d0(byte param_2); undefined4 * __thiscall FUN_10231490(byte param_2); undefined4 * __thiscall FUN_102315a0(byte param_2); float __thiscall FUN_102324b0(int param_2); float __thiscall FUN_10232560(int param_2); float __thiscall FUN_10232610(int param_2); void __thiscall FUN_102334e0(int param_2); void __thiscall FUN_10233550(int param_2); void __thiscall FUN_102335c0(int param_2); void __thiscall FUN_10234b50(int *param_2); void __thiscall FUN_102361a0(undefined4 param_2,SCStr *param_3); void __thiscall FUN_10236240(undefined4 param_2,SCStr *param_3); void __thiscall FUN_10236310(undefined4 param_2,SCStr *param_3); void __thiscall FUN_102363b0(undefined4 param_2,SCStr *param_3); undefined4 * __thiscall FUN_10236630(undefined4 *param_2); undefined4 * __thiscall FUN_10236720(undefined4 *param_2); undefined4 * __thiscall FUN_102367a0(undefined4 *param_2); void __thiscall FUN_10236af0(undefined4 *param_2); SCStr * __thiscall FUN_1023a580(SCStr *param_2); SCStr * __thiscall FUN_1023a680(SCStr *param_2); SCStr * __thiscall FUN_1023a7d0(SCStr *param_2); undefined4 __thiscall FUN_1023ab60(uint param_2); undefined1 __thiscall FUN_1023b5a0(undefined4 *param_2,int *param_3); void __thiscall FUN_1023d600(int *param_2,int *param_3); void __thiscall FUN_102420a0(int *param_2); void __thiscall FUN_10243300(int *param_2); void __thiscall FUN_102433e0(int param_2); undefined4 * __thiscall FUN_102437a0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_10243820(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_102438a0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_10243920(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_102439a0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_10243a20(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_10243aa0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_10243b20(undefined4 *param_2,SCStr *param_3); void __thiscall FUN_10245260(int *param_2,int *param_3); void __thiscall FUN_102454b0(undefined4 param_2); void __thiscall FUN_10245960(int *param_2,int *param_3); int * __thiscall FUN_10245b70(int *param_2); int * __thiscall FUN_10245cd0(int *param_2); int * __thiscall FUN_10245e00(undefined4 *param_2); undefined4 __thiscall FUN_102460b0(undefined4 param_2,int *param_3); undefined4 __thiscall FUN_10246170(undefined4 param_2,int *param_3); undefined4 __thiscall FUN_10246290(undefined4 param_2,int *param_3); int * __thiscall FUN_10247810(int *param_2); int * __thiscall FUN_10247880(int *param_2); undefined4 * __thiscall FUN_10248790(undefined4 *param_2); SCStr * __thiscall FUN_10248870(SCStr *param_2); undefined4 * __thiscall FUN_102489a0(undefined4 *param_2); char * __thiscall FUN_10248b60(char *param_2,int *param_3,int *param_4); undefined4 __thiscall FUN_10248ca0(undefined4 param_2,int *param_3,int *param_4); void __thiscall FUN_10249580(int *param_2); undefined4 * __thiscall FUN_10249970(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1024a1c0(undefined4 *param_2); int * __thiscall FUN_1024a590(int *param_2); int * __thiscall FUN_1024a600(int *param_2); undefined4 * __thiscall FUN_1024afd0(undefined4 *param_2,SCStr *param_3); void __thiscall FUN_1024b180(undefined4 param_2); void __thiscall FUN_1024b3c0(int *param_2); undefined4 * __thiscall FUN_1024c520(byte param_2); undefined4 * __thiscall FUN_1024e050(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1024e520(int param_2); int __thiscall FUN_1024ee50(int param_2); int __thiscall FUN_1024eed0(int *param_2); int __thiscall FUN_1024ef40(int param_2); int * __thiscall FUN_1024f800(int *param_2); int * __thiscall FUN_1024f870(int *param_2); undefined4 * __thiscall FUN_1024f9e0(byte param_2); void __thiscall FUN_1024ff20(SCStr *param_2); void __thiscall FUN_10250010(SCStr *param_2); undefined4 * __thiscall FUN_10252c00(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_10252c80(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_10252d00(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_10253a90(int param_2); undefined4 * __thiscall FUN_10253b20(int param_2); undefined4 * __thiscall FUN_10253bb0(int param_2); undefined4 * __thiscall FUN_10253d10(int param_2); undefined4 __thiscall FUN_10254f10(undefined4 param_2,int *param_3); };
using namespace std;
undefined1 * __fastcall FUN_101bb8c0(int param_1);
void __fastcall FUN_101bba70(int param_1);
void __fastcall FUN_101bbb40(int param_1);
void __fastcall FUN_101be060(undefined4 *param_1);
undefined4 * FUN_101be780(undefined4 *param_1);
undefined4 * FUN_101be800(undefined4 *param_1);
void __fastcall FUN_101bf3f0(undefined4 *param_1);
void __stdcall FUN_101c3fc0(undefined4 *param_1);
void FUN_101c42f0(undefined4 *param_1,undefined4 *param_2);
void FUN_101c4810(undefined4 param_1,undefined4 *param_2);
void FUN_101c4920(undefined4 param_1,int param_2);
void FUN_101c5000(undefined4 param_1,int *param_2);
void FUN_101c50b0(undefined4 param_1,undefined4 *param_2);
void FUN_101c5190(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __fastcall FUN_101c63b0(undefined4 *param_1);
void __fastcall FUN_101c6420(undefined4 *param_1);
void __fastcall FUN_101c6490(undefined4 *param_1);
void __fastcall FUN_101c6500(undefined4 *param_1);
void __fastcall FUN_101c6570(undefined4 *param_1);
void __fastcall FUN_101c65e0(undefined4 *param_1);
void __fastcall FUN_101c6650(undefined4 *param_1);
void __fastcall FUN_101c66c0(undefined4 *param_1);
void __fastcall FUN_101c6730(int *param_1);
void __fastcall FUN_101c6810(int param_1);
void __fastcall FUN_101c6890(int *param_1);
void __fastcall FUN_101c6900(int param_1);
void __fastcall FUN_101c6a20(int *param_1);
void __fastcall FUN_101c6ae0(int *param_1);
void __fastcall FUN_101c6e70(undefined4 *param_1);
void __fastcall FUN_101c6fa0(undefined4 *param_1);
void __fastcall FUN_101c72f0(int *param_1);
void __stdcall FUN_101c75f0(undefined4 *param_1);
void FUN_101c82e0(char *param_1);
void __fastcall FUN_101c8c50(float *param_1);
void __fastcall FUN_101c8d30(int *param_1);
void __fastcall FUN_101c8dc0(int *param_1);
undefined4 * FUN_101ca620(undefined4 *param_1);
undefined4 * FUN_101ca730(undefined4 *param_1);
void FUN_101cdf90(undefined4 param_1,undefined4 *param_2);
void FUN_101ce0b0(undefined4 param_1,int param_2);
undefined4 * FUN_101ce290(int param_1);
void FUN_101ceb80(undefined4 param_1,undefined4 *param_2);
int __fastcall FUN_101d1770(undefined4 *param_1);
void __fastcall FUN_101d19a0(undefined4 *param_1);
void __fastcall FUN_101d1a90(undefined4 *param_1);
void __fastcall FUN_101d1b00(undefined4 *param_1);
void __fastcall FUN_101d1b70(undefined4 *param_1);
void __fastcall FUN_101d1be0(undefined4 *param_1);
void __fastcall FUN_101d1c50(undefined4 *param_1);
void __fastcall FUN_101d1cc0(undefined4 *param_1);
void __fastcall FUN_101d1d30(undefined4 *param_1);
void __fastcall FUN_101d1da0(undefined4 *param_1);
void __fastcall FUN_101d1e10(undefined4 *param_1);
void __fastcall FUN_101d1e80(undefined4 *param_1);
void __fastcall FUN_101d1ef0(undefined4 *param_1);
void __fastcall FUN_101d1f60(undefined4 *param_1);
void __fastcall FUN_101d1fd0(undefined4 *param_1);
void __fastcall FUN_101d2040(undefined4 *param_1);
void __fastcall FUN_101d20b0(undefined4 *param_1);
void __fastcall FUN_101d2120(undefined4 *param_1);
void __fastcall FUN_101d2190(undefined4 *param_1);
void __fastcall FUN_101d2200(undefined4 *param_1);
void __fastcall FUN_101d2270(undefined4 *param_1);
void __fastcall FUN_101d22e0(undefined4 *param_1);
void __fastcall FUN_101d2350(undefined4 *param_1);
void __fastcall FUN_101d23c0(undefined4 *param_1);
void __fastcall FUN_101d2430(undefined4 *param_1);
void __fastcall FUN_101d24a0(undefined4 *param_1);
void __fastcall FUN_101d2510(int *param_1);
void __fastcall FUN_101d2570(int *param_1);
void __fastcall FUN_101d25d0(int *param_1);
void __fastcall FUN_101d2af0(int param_1);
void __fastcall FUN_101d34d0(undefined4 *param_1);
void __fastcall FUN_101d3630(undefined4 *param_1);
void __fastcall FUN_101d3910(undefined4 *param_1);
void __fastcall FUN_101d39b0(undefined4 *param_1);
void __fastcall FUN_101d3a70(int param_1);
undefined4 * __fastcall FUN_101d60a0(int param_1);
void __fastcall FUN_101d8430(int *param_1);
int * FUN_101da5c0(int *param_1);
void __fastcall FUN_101dac00(int param_1);
void __fastcall FUN_101dacb0(int param_1);
void __fastcall FUN_101dc620(int *param_1);
undefined1 FUN_101dccc0(undefined4 param_1,undefined4 param_2);
undefined1 FUN_101dce50(void);
void __fastcall FUN_101df750(int param_1);
void FUN_101df910(void);
void __fastcall FUN_101dfc50(int param_1);
void __fastcall FUN_101e11a0(int *param_1);
void __fastcall FUN_101e1200(int *param_1);
void __fastcall FUN_101e24d0(int param_1);
float10 __fastcall FUN_101e3700(int *param_1);
bool __stdcall FUN_101e50d0(undefined4 param_1);
undefined4 * __fastcall FUN_101e6a90(undefined4 *param_1);
int * FUN_101e85f0(int *param_1,int *param_2,int *param_3);
void FUN_101e8670(undefined4 *param_1,undefined4 *param_2);
void FUN_101e8710(undefined4 *param_1,undefined4 *param_2);
int * FUN_101e8ef0(int *param_1,int *param_2,int *param_3);
void FUN_101e9520(undefined4 param_1,undefined4 *param_2);
void FUN_101e9590(undefined4 param_1,undefined4 *param_2);
void __fastcall FUN_101eabf0(undefined4 *param_1);
void __fastcall FUN_101eac60(undefined4 *param_1);
void __fastcall FUN_101eacd0(undefined4 *param_1);
void __fastcall FUN_101ead40(undefined4 *param_1);
void __fastcall FUN_101eadb0(undefined4 *param_1);
void __fastcall FUN_101eae20(undefined4 *param_1);
void __fastcall FUN_101eb010(int param_1);
void __fastcall FUN_101eb080(int param_1);
void __fastcall FUN_101eb1b0(int *param_1);
void __fastcall FUN_101ec4a0(int *param_1);
void __fastcall FUN_101ec520(int *param_1);
void * FUN_101ec940(uint param_1);
void * FUN_101ec9b0(uint param_1);
undefined4 FUN_101f0850(undefined4 param_1,undefined4 param_2);
undefined4 FUN_101f0dc0(undefined4 param_1);
int __fastcall FUN_101f34a0(int param_1);
void __fastcall FUN_101f3880(int param_1);
void FUN_101f4060(undefined4 *param_1,undefined4 *param_2);
void FUN_101f43f0(undefined4 param_1,undefined4 *param_2);
void __fastcall FUN_101f4770(undefined4 *param_1);
void __fastcall FUN_101f47e0(int *param_1);
void __fastcall FUN_101f4930(undefined4 *param_1);
void __fastcall FUN_101f4a30(undefined4 *param_1);
void __stdcall FUN_101f52b0(undefined4 *param_1,undefined4 *param_2);
void __fastcall FUN_101f53d0(undefined4 *param_1);
int * FUN_101f6450(int *param_1);
undefined4 * FUN_101f9a80(int param_1);
int __fastcall FUN_101fa3e0(undefined4 *param_1);
void __fastcall FUN_101fa530(undefined4 *param_1);
void __fastcall FUN_101fa5a0(undefined4 *param_1);
void __fastcall FUN_101fa7e0(undefined4 *param_1);
undefined4 * __fastcall FUN_101fae20(int param_1);
int __fastcall FUN_101fb3c0(int *param_1);
int * FUN_101fb480(int *param_1);
int * FUN_101fd650(int *param_1,int *param_2);
int * FUN_101fd960(int *param_1,int *param_2,int *param_3);
void FUN_101fda20(int *param_1,int *param_2);
void FUN_101fdd20(undefined4 param_1,int param_2);
int * FUN_101fdfe0(int *param_1,int *param_2,int *param_3,undefined4 param_4);
void FUN_101fe3a0(undefined4 param_1,int *param_2);
void FUN_101fe440(undefined4 param_1,int *param_2);
undefined4 * __fastcall FUN_101ff8b0(undefined4 *param_1);
void __fastcall FUN_10201980(undefined4 *param_1);
void __fastcall FUN_102019f0(undefined4 *param_1);
void __fastcall FUN_10201a60(undefined4 *param_1);
void __fastcall FUN_10201ad0(undefined4 *param_1);
void __fastcall FUN_10201b40(undefined4 *param_1);
void __fastcall FUN_10201bb0(undefined4 *param_1);
void __fastcall FUN_10201c20(undefined4 *param_1);
void __fastcall FUN_10201c90(undefined4 *param_1);
void __fastcall FUN_10201d00(undefined4 *param_1);
void __fastcall FUN_10201d70(undefined4 *param_1);
void __fastcall FUN_10201de0(undefined4 *param_1);
void __fastcall FUN_10201e50(undefined4 *param_1);
void __fastcall FUN_10201ec0(undefined4 *param_1);
void __fastcall FUN_10201f30(undefined4 *param_1);
void __fastcall FUN_10201fa0(undefined4 *param_1);
void __fastcall FUN_10202010(undefined4 *param_1);
void __fastcall FUN_10202080(undefined4 *param_1);
void __fastcall FUN_102020f0(undefined4 *param_1);
void __fastcall FUN_10202160(undefined4 *param_1);
void __fastcall FUN_102021d0(undefined4 *param_1);
void __fastcall FUN_10202240(undefined4 *param_1);
void __fastcall FUN_102022b0(undefined4 *param_1);
void __fastcall FUN_10202320(undefined4 *param_1);
void __fastcall FUN_10202390(undefined4 *param_1);
void __fastcall FUN_10202400(undefined4 *param_1);
void __fastcall FUN_10202470(undefined4 *param_1);
void __fastcall FUN_102024e0(undefined4 *param_1);
void __fastcall FUN_10202550(undefined4 *param_1);
void __fastcall FUN_102025c0(int *param_1);
void __fastcall FUN_10202620(int *param_1);
void __fastcall FUN_10202aa0(int param_1);
void __fastcall FUN_10202bd0(int *param_1);
void __fastcall FUN_10202ca0(int *param_1);
void __fastcall FUN_10202d40(undefined4 *param_1);
void __fastcall FUN_10202e00(int *param_1);
void __fastcall FUN_10203530(undefined4 *param_1);
void __fastcall FUN_102036c0(undefined4 *param_1);
void __fastcall FUN_102037c0(undefined4 *param_1);
void __fastcall FUN_10203970(undefined4 *param_1);
void __fastcall FUN_10203d60(undefined4 *param_1);
void __fastcall FUN_10203dc0(undefined4 *param_1);
void __fastcall FUN_10203f60(undefined4 *param_1);
void __fastcall FUN_10204000(undefined4 *param_1);
void __fastcall FUN_102040d0(undefined4 *param_1);
void __fastcall FUN_102041c0(undefined4 *param_1);
void __fastcall FUN_10204300(undefined4 *param_1);
void __fastcall FUN_10204390(undefined4 *param_1);
void __fastcall FUN_10204460(undefined4 *param_1);
void __fastcall FUN_10204510(undefined4 *param_1);
void __fastcall FUN_102045c0(undefined4 *param_1);
void __fastcall FUN_10204670(undefined4 *param_1);
void __fastcall FUN_10204720(undefined4 *param_1);
void __fastcall FUN_10207220(int *param_1);
void * FUN_10207b10(uint param_1);
uint __fastcall FUN_10208940(int param_1);
void __fastcall FUN_1020a4c0(undefined4 param_1);
char __fastcall FUN_102104d0(int *param_1);
int * __stdcall FUN_10217430(int *param_1);
uint __fastcall FUN_10217670(int *param_1);
void __fastcall FUN_10217740(int *param_1);
undefined1 __fastcall FUN_102177e0(int param_1);
void __fastcall FUN_10217af0(int *param_1);
void __fastcall FUN_10217cd0(int param_1);
undefined4 *** FUN_10218f20(undefined4 param_1,undefined4 *param_2,undefined4 param_3);
undefined1 FUN_102194a0(int param_1);
void __fastcall FUN_10219650(int *param_1);
undefined4 __fastcall FUN_10219ef0(int param_1);
undefined1 __fastcall FUN_1021acc0(int *param_1);
void __fastcall FUN_1021ae30(int param_1);
void FUN_1021b310(undefined4 param_1,int param_2);
void __fastcall FUN_1021d0d0(int *param_1);
void __fastcall FUN_1021d2a0(int param_1);
void __fastcall FUN_1021d3c0(int param_1);
void __stdcall FUN_1021db00(int param_1);
void __stdcall FUN_1021dcd0(int param_1);
void __fastcall FUN_1021ddb0(int param_1);
void FUN_1021e2d0(int param_1);
void __stdcall FUN_1021e370(int param_1);
undefined4 __fastcall FUN_1021f6a0(int param_1);
undefined4 __fastcall FUN_1021f710(int *param_1);
undefined4 FUN_1021f768(void);
undefined4 __stdcall FUN_10220510(undefined4 param_1,undefined4 param_2,char *param_3);
void __stdcall FUN_102209a0(int param_1);
undefined1 __fastcall FUN_10220d70(int param_1);
undefined1 __fastcall FUN_10220fc0(int param_1);
void __fastcall FUN_10221700(int param_1);
undefined4 * FUN_10222090(undefined4 *param_1);
void __fastcall FUN_10222eb0(undefined4 *param_1);
int * FUN_102232b0(int *param_1);
void FUN_10225d70(undefined4 *param_1,undefined4 *param_2);
void FUN_102260c0(undefined4 param_1,undefined4 *param_2);
void FUN_10226130(undefined4 param_1,undefined4 *param_2);
void FUN_102262d0(undefined4 param_1,int param_2);
undefined4 * FUN_102263b0(int param_1);
undefined4 * FUN_102264d0(int param_1);
undefined4 * FUN_102265f0(undefined4 *param_1);
undefined4 * FUN_10226730(int param_1);
void FUN_10227510(undefined4 param_1,int param_2);
void FUN_10227590(undefined4 param_1,undefined4 *param_2);
void FUN_10227930(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_102279b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_10227a30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __fastcall FUN_1022a660(undefined4 *param_1);
undefined4 * __fastcall FUN_1022a740(undefined4 *param_1);
undefined4 * __fastcall FUN_1022a7e0(undefined4 *param_1);
undefined4 * __fastcall FUN_1022a880(undefined4 *param_1);
undefined4 * __fastcall FUN_1022a9d0(undefined4 *param_1);
undefined4 * __fastcall FUN_1022aa70(undefined4 *param_1);
undefined4 * __fastcall FUN_1022abf0(undefined4 *param_1);
undefined4 * __fastcall FUN_1022aca0(undefined4 *param_1);
undefined4 * __fastcall FUN_1022ad60(undefined4 *param_1);
undefined4 * __fastcall FUN_1022c540(undefined4 *param_1);
undefined4 * __fastcall FUN_1022c5e0(undefined4 *param_1);
void __fastcall FUN_1022c740(undefined4 *param_1);
void __fastcall FUN_1022c7f0(undefined4 *param_1);
void __fastcall FUN_1022c8a0(undefined4 *param_1);
void __fastcall FUN_1022c950(undefined4 *param_1);
int __fastcall FUN_1022ca00(undefined4 *param_1);
void __fastcall FUN_1022cc90(undefined4 *param_1);
void __fastcall FUN_1022cd00(undefined4 *param_1);
void __fastcall FUN_1022cd70(undefined4 *param_1);
void __fastcall FUN_1022cde0(undefined4 *param_1);
void __fastcall FUN_1022ce50(undefined4 *param_1);
void __fastcall FUN_1022cec0(undefined4 *param_1);
void __fastcall FUN_1022cf30(undefined4 *param_1);
void __fastcall FUN_1022cfa0(undefined4 *param_1);
void __fastcall FUN_1022d010(undefined4 *param_1);
void __fastcall FUN_1022d080(undefined4 *param_1);
void __fastcall FUN_1022d0f0(undefined4 *param_1);
void __fastcall FUN_1022d160(undefined4 *param_1);
void __fastcall FUN_1022d1d0(undefined4 *param_1);
void __fastcall FUN_1022d240(undefined4 *param_1);
void __fastcall FUN_1022d2b0(undefined4 *param_1);
void __fastcall FUN_1022d320(undefined4 *param_1);
void __fastcall FUN_1022d390(int *param_1);
void __fastcall FUN_1022d6c0(int param_1);
void __fastcall FUN_1022d740(int param_1);
void __fastcall FUN_1022d7c0(int param_1);
void __fastcall FUN_1022d870(int *param_1);
void __fastcall FUN_1022d8e0(int *param_1);
void __fastcall FUN_1022d950(int *param_1);
void __fastcall FUN_1022d9c0(int param_1);
void __fastcall FUN_1022dd80(int param_1);
void __fastcall FUN_1022df10(int *param_1);
void __fastcall FUN_1022e040(undefined4 *param_1);
void __fastcall FUN_1022e0e0(int *param_1);
void __fastcall FUN_1022e200(undefined4 *param_1);
void __fastcall FUN_1022e350(undefined4 *param_1);
void __fastcall FUN_1022e3e0(undefined4 *param_1);
void __fastcall FUN_1022e470(undefined4 *param_1);
void __fastcall FUN_1022e510(undefined4 *param_1);
void __fastcall FUN_1022e8c0(undefined4 *param_1);
void __fastcall FUN_1022e970(undefined4 *param_1);
void __fastcall FUN_1022ea60(undefined4 *param_1);
void __fastcall FUN_1022eb00(undefined4 *param_1);
void __fastcall FUN_1022eb90(undefined4 *param_1);
void __fastcall FUN_1022eca0(undefined4 *param_1);
void __fastcall FUN_1022eda0(undefined4 *param_1);
void __fastcall FUN_1022ee20(undefined4 *param_1);
void __fastcall FUN_1022eed0(undefined4 *param_1);
void __fastcall FUN_10231c70(int *param_1);
void __fastcall FUN_10231cd0(int *param_1);
undefined4 * __fastcall FUN_10231f10(int param_1);
undefined4 * __fastcall FUN_10231fb0(int param_1);
undefined4 * __fastcall FUN_102320a0(int param_1);
undefined4 * __fastcall FUN_102321d0(int param_1);
void __stdcall FUN_102326c0(undefined4 *param_1,undefined4 *param_2);
void __fastcall FUN_102337c0(float *param_1);
void __fastcall FUN_10233870(float *param_1);
void __fastcall FUN_10233920(float *param_1);
void __fastcall FUN_10233fc0(int *param_1);
void __fastcall FUN_10234030(int *param_1);
void __fastcall FUN_102340a0(int *param_1);
void __fastcall FUN_102341a0(undefined4 *param_1);
void __fastcall FUN_102354e0(int param_1);
void __fastcall FUN_102360e0(int *param_1);
undefined4 * __stdcall FUN_10237370(undefined4 *param_1);
undefined4 * __stdcall FUN_10237460(undefined4 *param_1);
undefined4 * __stdcall FUN_10237550(undefined4 *param_1);
undefined4 * __stdcall FUN_10237640(undefined4 *param_1);
undefined4 * __stdcall FUN_10237730(undefined4 *param_1);
undefined4 * __stdcall FUN_10237820(undefined4 *param_1);
undefined4 * __stdcall FUN_10237b20(undefined4 *param_1);
undefined4 * __stdcall FUN_10237ea0(undefined4 *param_1);
undefined4 * __stdcall FUN_10238060(undefined4 *param_1);
undefined4 * FUN_10238220(undefined4 *param_1);
undefined4 * __stdcall FUN_102387b0(undefined4 *param_1);
undefined4 * __stdcall FUN_102388a0(undefined4 *param_1);
undefined4 * __stdcall FUN_10238990(undefined4 *param_1);
undefined4 * __stdcall FUN_10238a80(undefined4 *param_1);
undefined4 * __stdcall FUN_10238b70(undefined4 *param_1);
undefined4 * __stdcall FUN_10238c60(undefined4 *param_1);
undefined4 * __stdcall FUN_10238f70(undefined4 *param_1);
undefined4 * __stdcall FUN_10239060(undefined4 *param_1);
undefined4 * __stdcall FUN_10239370(undefined4 *param_1);
undefined4 * __stdcall FUN_10239460(undefined4 *param_1);
undefined4 * __stdcall FUN_10239620(undefined4 *param_1);
undefined4 * __stdcall FUN_10239710(undefined4 *param_1);
undefined4 * __stdcall FUN_10239800(undefined4 *param_1);
undefined4 * __stdcall FUN_102398f0(undefined4 *param_1);
undefined4 * __stdcall FUN_102399e0(undefined4 *param_1);
undefined4 * __stdcall FUN_10239d70(undefined4 *param_1);
undefined4 * __stdcall FUN_10239e60(undefined4 *param_1);
undefined4 * __stdcall FUN_10239f50(undefined4 *param_1);
undefined4 * __stdcall FUN_1023a040(undefined4 *param_1);
undefined4 * __stdcall FUN_1023a130(undefined4 *param_1);
undefined4 * __stdcall FUN_1023a220(undefined4 *param_1);
undefined4 * __stdcall FUN_1023a310(undefined4 *param_1);
undefined1 FUN_1023b2b0(int *param_1,undefined4 *param_2);
undefined1 FUN_1023b3d0(int *param_1,undefined4 *param_2);
undefined1 FUN_1023bb70(int *param_1,undefined4 *param_2);
undefined1 FUN_1023bd30(int *param_1,undefined4 *param_2);
undefined1 FUN_1023bfe0(int *param_1,undefined4 *param_2);
undefined4 FUN_1023c100(undefined4 *param_1,undefined4 *param_2);
undefined4 FUN_1023d290(void);
void __fastcall FUN_1023d350(int param_1);
void __stdcall FUN_1023ea50(undefined4 param_1,int *param_2);
undefined4 FUN_10240090(void);
void __stdcall FUN_10240130(int *param_1);
void FUN_10240a30(void);
undefined1 FUN_10240ec0(void);
void FUN_10241a10(void);
void __fastcall FUN_10241ce0(int param_1);
void __fastcall FUN_10241da0(int param_1);
undefined1 FUN_10241ed0(void);
void __fastcall FUN_10242250(int param_1);
void FUN_102423a0(void);
undefined1 FUN_10242750(void);
undefined1 __fastcall FUN_10242870(int *param_1);
void __fastcall FUN_10243520(int param_1);
void __fastcall FUN_102435c0(int param_1);
void __fastcall FUN_10245190(int param_1);
void __fastcall FUN_102452f0(int param_1);
void FUN_102463d0(undefined4 param_1,int param_2);
void FUN_10246450(undefined4 param_1,int param_2);
void FUN_10246510(undefined4 param_1,int param_2);
undefined4 * __fastcall FUN_10246b90(undefined4 *param_1);
void __fastcall FUN_10246fc0(undefined4 *param_1);
void __fastcall FUN_10247030(int *param_1);
void __fastcall FUN_102473e0(int param_1);
void __fastcall FUN_10247530(undefined4 *param_1);
void __fastcall FUN_10247e10(int *param_1);
void __stdcall FUN_10247e90(undefined1 *param_1);
void * FUN_10248280(uint param_1);
void * FUN_10248300(uint param_1);
undefined4 * FUN_10248380(undefined4 *param_1);
undefined4 * FUN_10248480(undefined4 *param_1);
void __fastcall FUN_10248680(int *param_1);
void __stdcall FUN_10248dc0(int *param_1);
void __fastcall FUN_102492f0(int param_1);
void __stdcall FUN_102494d0(int param_1);
void __fastcall FUN_10249720(int param_1);
undefined4 __stdcall FUN_102497a0(undefined4 param_1);
void __fastcall FUN_1024a280(undefined4 *param_1);
void __fastcall FUN_1024a2f0(undefined4 *param_1);
void __fastcall FUN_1024a360(undefined4 *param_1);
void __fastcall FUN_1024aa40(int param_1);
void __fastcall FUN_1024aca0(int param_1);
void __fastcall FUN_1024ad60(int param_1);
void __fastcall FUN_1024ae20(int param_1);
void __fastcall FUN_1024aee0(int param_1);
void __fastcall FUN_1024b210(int param_1);
void __fastcall FUN_1024bdc0(int param_1);
void __fastcall FUN_1024be70(int param_1);
void FUN_1024bf80(void);
void __fastcall FUN_1024c2f0(undefined4 *param_1);
void __fastcall FUN_1024c3c0(undefined4 *param_1);
void FUN_1024df10(void);
undefined4 * FUN_1024e7e0(int param_1);
int __fastcall FUN_1024f2e0(undefined4 *param_1);
void __fastcall FUN_1024f430(undefined4 *param_1);
void __fastcall FUN_1024f4a0(undefined4 *param_1);
void __fastcall FUN_1024f510(undefined4 *param_1);
void __fastcall FUN_1024f650(undefined4 *param_1);
undefined4 * __fastcall FUN_1024fca0(int param_1);
undefined4 * FUN_102518f0(undefined4 *param_1);
void __fastcall FUN_102535a0(int param_1);
void FUN_10254af0(undefined4 *param_1,undefined4 *param_2);
void FUN_102550f0(undefined4 param_1,int param_2);
undefined4 * FUN_102551e0(int param_1);
undefined4 * FUN_10255300(int param_1);
undefined4 * FUN_10255420(int param_1);
undefined4 * FUN_10255730(int param_1);
// Reference entry 101bb8c0; body size 324 bytes.
#line 1 "ENTRY_101bb8c0"

undefined1 * __fastcall FUN_101bb8c0(int param_1)

{
 try {
  char *pcVar1;
  undefined1 *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  int local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  pcVar1 = (char *)(*(char **)(param_1 + 0x60));
  if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
    if ((*(int *)(param_1 + 0x1c) == 0) || (*(char *)(param_1 + 0xa71) != '\0')) {

      piVar4 = (int *)(&local_18);

      uVar8 = (uint)(2);
    }
    else {
      piVar4 = (int *)((int *)thunk_FUN_101b9a40(*(int *)(param_1 + 0x1c) + 0x489));
      uVar8 = (uint)(1);

    }
    iVar6 = (int)(local_18);
    local_14 = (uint)(uVar8);
    thunk_FUN_101ba530(piVar4);
    if ((uVar8 & 2) != 0) {
      uVar8 = (uint)(uVar8 & 0xfffffffd);

      local_14 = (uint)(uVar8);
      if ((iVar6 != 0) && (piVar4 = (int *)(iVar6 + -0x10), *piVar4 < 0xffff)) {
        iVar5 = (int)(thunk_FUN_1123fcd0(piVar4,uVar3));
        if (iVar5 == 0) {
          *(undefined4 *)(iVar6 + -8) = 0;
          *(undefined4 *)(iVar6 + -0xc) = 0;
          thunk_FUN_113cfb70(iVar6,*(undefined4 *)(iVar6 + -4));
          free(piVar4);
        }
      }
    }
    if ((uVar8 & 1) != 0) {

      if ((local_1c != 0) && (*(int *)(local_1c + -0x10) < 0xffff)) {
        iVar6 = (int)(thunk_FUN_1123fcd0((void *)(local_1c + -0x10),uVar3));
        if (iVar6 == 0) {
          *(undefined4 *)(local_1c + -8) = 0;
          *(undefined4 *)(local_1c + -0xc) = 0;
          thunk_FUN_113cfb70(local_1c,*(undefined4 *)(local_1c + -4));
          free((void *)(local_1c + -0x10));
        }
      }
    }
  }
  puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 0x60));
  puVar7 = (undefined1 *)(&DAT_1186d2ee);
  if (puVar2 != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)(puVar2);
  }

  return (undefined1 *)(puVar7);

 } catch (...) { }
}


// Reference entry 101bba70; body size 70 bytes.
#line 1 "ENTRY_101bba70"

void __fastcall FUN_101bba70(int param_1)

{
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
  return;
}


// Reference entry 101bbb40; body size 128 bytes.
#line 1 "ENTRY_101bbb40"

void __fastcall FUN_101bbb40(int param_1)

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


// Reference entry 101bbc60; body size 232 bytes.
#line 1 "ENTRY_101bbc60"

void __thiscall Recovered_Bulk::FUN_101bbc60(undefined4 param_2,undefined4 param_3)
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


// Reference entry 101bbd90; body size 250 bytes.
#line 1 "ENTRY_101bbd90"

void __thiscall Recovered_Bulk::FUN_101bbd90(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x40) + 4))
              (param_2,param_3,DAT_12126b84 );
  }
  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
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


// Reference entry 101bc4f0; body size 91 bytes.
#line 1 "ENTRY_101bc4f0"

int * __thiscall Recovered_Bulk::FUN_101bc4f0(int *param_2)
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


// Reference entry 101be060; body size 76 bytes.
#line 1 "ENTRY_101be060"

void __fastcall FUN_101be060(undefined4 *param_1)

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


// Reference entry 101be320; body size 69 bytes.
#line 1 "ENTRY_101be320"

undefined4 * __thiscall Recovered_Bulk::FUN_101be320(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStringArray);
  thunk_FUN_101be460();
  thunk_FUN_101a2bf0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101be780; body size 96 bytes.
#line 1 "ENTRY_101be780"

undefined4 * FUN_101be780(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(operator_new(0x14));
  if (piVar1 == (int *)0x0) {
    *param_1 = (undefined4)(0);
  }
  else {
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar1[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCStringArray);
    piVar1[2] = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    *param_1 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      return (undefined4 *)(param_1);
    }
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101be800; body size 98 bytes.
#line 1 "ENTRY_101be800"

undefined4 * FUN_101be800(undefined4 *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_101be780(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101bf370; body size 91 bytes.
#line 1 "ENTRY_101bf370"

int * __thiscall Recovered_Bulk::FUN_101bf370(int *param_2)
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


// Reference entry 101bf3f0; body size 76 bytes.
#line 1 "ENTRY_101bf3f0"

void __fastcall FUN_101bf3f0(undefined4 *param_1)

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


// Reference entry 101c3940; body size 91 bytes.
#line 1 "ENTRY_101c3940"

int * __thiscall Recovered_Bulk::FUN_101c3940(int *param_2)
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


// Reference entry 101c39c0; body size 91 bytes.
#line 1 "ENTRY_101c39c0"

int * __thiscall Recovered_Bulk::FUN_101c39c0(int *param_2)
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


// Reference entry 101c3b00; body size 91 bytes.
#line 1 "ENTRY_101c3b00"

int * __thiscall Recovered_Bulk::FUN_101c3b00(int *param_2)
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


// Reference entry 101c3fc0; body size 207 bytes.
#line 1 "ENTRY_101c3fc0"

void __stdcall FUN_101c3fc0(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  uint local_1c [4];
  uint local_c;
  uint local_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_1c);
  pcVar4 = (char *)("");
  if ((char *)*param_1 != (char *)0x0) {
    pcVar4 = (char *)((char *)*param_1);
  }
  local_c = (uint)(0);
  local_8 = (uint)(0xf);
  local_1c[0] = local_1c[0] & 0xffffff00;
  pcVar2 = (char *)(pcVar4);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  thunk_FUN_1012d130(pcVar4,(int)pcVar2 - (int)(pcVar4 + 1));
  uVar3 = (uint)(0);
  if (local_c != 0) {
    do {
      uVar3 = (uint)(uVar3 + 1);
    } while (uVar3 < local_c);
  }
  if (0xf < local_8) {
    uVar3 = (uint)(local_8 + 1);
    uVar5 = (uint)(local_1c[0]);
    if (0xfff < uVar3) {
      uVar5 = (uint)(*(uint *)(local_1c[0] - 4));
      uVar3 = (uint)(local_8 + 0x24);
      if (0x1f < (local_1c[0] - uVar5) - 4) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(uVar5,uVar3);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 101c42f0; body size 111 bytes.
#line 1 "ENTRY_101c42f0"

void FUN_101c42f0(undefined4 *param_1,undefined4 *param_2)

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


// Reference entry 101c4810; body size 176 bytes.
#line 1 "ENTRY_101c4810"

void FUN_101c4810(undefined4 param_1,undefined4 *param_2)

{
 try {
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);

  *(undefined4 *)param_2[1] = 0;
  puVar3 = (undefined4 *)((undefined4 *)*param_2);
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)*puVar3);
    thunk_FUN_101c6ae0(uVar4);
    iVar2 = (int)(puVar3[2]);

    if (((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) &&
       (iVar5 = thunk_FUN_1123fcd0((void *)(iVar2 + -0x10)), iVar5 == 0)) {
      *(undefined4 *)(iVar2 + -8) = 0;
      *(undefined4 *)(iVar2 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar2,*(undefined4 *)(iVar2 + -4));
      free((void *)(iVar2 + -0x10));
    }

    thunk_FUN_1148a50e(puVar3,0x18);
    puVar3 = (undefined4 *)(puVar1);
  }

  return;

 } catch (...) { }
}


// Reference entry 101c4920; body size 140 bytes.
#line 1 "ENTRY_101c4920"

void FUN_101c4920(undefined4 param_1,int param_2)

{
 try {
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_101c6ae0(DAT_12126b84 );
  iVar1 = (int)(*(int *)(param_2 + 8));

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  thunk_FUN_1148a50e(param_2,0x18);

  return;

 } catch (...) { }
}


// Reference entry 101c5000; body size 126 bytes.
#line 1 "ENTRY_101c5000"

void FUN_101c5000(undefined4 param_1,int *param_2)

{
 try {
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_101c6ae0(DAT_12126b84 );
  iVar1 = (int)(*param_2);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 101c50b0; body size 84 bytes.
#line 1 "ENTRY_101c50b0"

void FUN_101c50b0(undefined4 param_1,undefined4 *param_2)

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


// Reference entry 101c5190; body size 95 bytes.
#line 1 "ENTRY_101c5190"

void FUN_101c5190(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 101c63b0; body size 76 bytes.
#line 1 "ENTRY_101c63b0"

void __fastcall FUN_101c63b0(undefined4 *param_1)

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


// Reference entry 101c6420; body size 76 bytes.
#line 1 "ENTRY_101c6420"

void __fastcall FUN_101c6420(undefined4 *param_1)

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


// Reference entry 101c6490; body size 76 bytes.
#line 1 "ENTRY_101c6490"

void __fastcall FUN_101c6490(undefined4 *param_1)

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


// Reference entry 101c6500; body size 76 bytes.
#line 1 "ENTRY_101c6500"

void __fastcall FUN_101c6500(undefined4 *param_1)

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


// Reference entry 101c6570; body size 76 bytes.
#line 1 "ENTRY_101c6570"

void __fastcall FUN_101c6570(undefined4 *param_1)

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


// Reference entry 101c65e0; body size 76 bytes.
#line 1 "ENTRY_101c65e0"

void __fastcall FUN_101c65e0(undefined4 *param_1)

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


// Reference entry 101c6650; body size 76 bytes.
#line 1 "ENTRY_101c6650"

void __fastcall FUN_101c6650(undefined4 *param_1)

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


// Reference entry 101c66c0; body size 76 bytes.
#line 1 "ENTRY_101c66c0"

void __fastcall FUN_101c66c0(undefined4 *param_1)

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


// Reference entry 101c6730; body size 68 bytes.
#line 1 "ENTRY_101c6730"

void __fastcall FUN_101c6730(int *param_1)

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


// Reference entry 101c6810; body size 99 bytes.
#line 1 "ENTRY_101c6810"

void __fastcall FUN_101c6810(int param_1)

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
  thunk_FUN_101c4810(puVar4,*puVar4);
  thunk_FUN_1148a50e(*puVar4,0x18);
  return;
}


// Reference entry 101c6890; body size 77 bytes.
#line 1 "ENTRY_101c6890"

void __fastcall FUN_101c6890(int *param_1)

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


// Reference entry 101c6900; body size 153 bytes.
#line 1 "ENTRY_101c6900"

void __fastcall FUN_101c6900(int param_1)

{
 try {
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar1 = (int)(*(int *)(param_1 + 4));
  if (iVar1 != 0) {
    thunk_FUN_101c6ae0(DAT_12126b84 );
    iVar1 = (int)(*(int *)(iVar1 + 8));

    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
      if (iVar2 == 0) {
        *(undefined4 *)(iVar1 + -8) = 0;
        *(undefined4 *)(iVar1 + -0xc) = 0;
        thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
        free((void *)(iVar1 + -0x10));
      }
    }
  }
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }

  return;

 } catch (...) { }
}


// Reference entry 101c6a20; body size 125 bytes.
#line 1 "ENTRY_101c6a20"

void __fastcall FUN_101c6a20(int *param_1)

{
 try {
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_101c6ae0(DAT_12126b84 );
  iVar1 = (int)(*param_1);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 101c6ae0; body size 96 bytes.
#line 1 "ENTRY_101c6ae0"

void __fastcall FUN_101c6ae0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_101c42f0(*param_1,param_1[1],param_1);
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


// Reference entry 101c6e70; body size 216 bytes.
#line 1 "ENTRY_101c6e70"

void __fastcall FUN_101c6e70(undefined4 *param_1)

{
 try {
  int *piVar1;
  char cVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFetchTokenOpActionWrapper);
  param_1[2] = (uint)&ghidra_vftable_SCFetchTokenOpActionWrapper;
  if ((int *)param_1[7] != (int *)0x0) {
    cVar2 = (char)((**(code **)(*(int *)param_1[7] + 0x1c))(uVar3));
    if (cVar2 != '\0') {
      (**(code **)(*(int *)param_1[7] + 0x18))();
    }
  }
  piVar1 = (int *)((int *)param_1[8]);

  if (piVar1 != (int *)0x0) {
    param_1[7] = 0;
    param_1[8] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[6]);

  if (piVar1 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[2] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[4]);

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 101c6fa0; body size 90 bytes.
#line 1 "ENTRY_101c6fa0"

void __fastcall FUN_101c6fa0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  piVar1 = (int *)((int *)param_1[2]);

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 101c72f0; body size 72 bytes.
#line 1 "ENTRY_101c72f0"

void __fastcall FUN_101c72f0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *local_4;
  
  iVar2 = (int)(*param_1);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) {
    piVar1 = (int *)((int *)(iVar2 + 4));
    local_4 = (int *)(param_1);
    thunk_FUN_101c4810(piVar1,*(undefined4 *)(iVar2 + 4));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int *)(*piVar1 + 4) = *piVar1;
    *(undefined4 *)(iVar2 + 8) = 0;
    local_4 = (int *)((int *)*piVar1);
    thunk_FUN_101c5190(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),&local_4);
  }
  return;
}


// Reference entry 101c7350; body size 81 bytes.
#line 1 "ENTRY_101c7350"

int * __thiscall Recovered_Bulk::FUN_101c7350(int *param_2)
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


// Reference entry 101c75f0; body size 207 bytes.
#line 1 "ENTRY_101c75f0"

void __stdcall FUN_101c75f0(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  uint local_1c [4];
  uint local_c;
  uint local_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_1c);
  pcVar4 = (char *)("");
  if ((char *)*param_1 != (char *)0x0) {
    pcVar4 = (char *)((char *)*param_1);
  }
  local_c = (uint)(0);
  local_8 = (uint)(0xf);
  local_1c[0] = local_1c[0] & 0xffffff00;
  pcVar2 = (char *)(pcVar4);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  thunk_FUN_1012d130(pcVar4,(int)pcVar2 - (int)(pcVar4 + 1));
  uVar3 = (uint)(0);
  if (local_c != 0) {
    do {
      uVar3 = (uint)(uVar3 + 1);
    } while (uVar3 < local_c);
  }
  if (0xf < local_8) {
    uVar3 = (uint)(local_8 + 1);
    uVar5 = (uint)(local_1c[0]);
    if (0xfff < uVar3) {
      uVar5 = (uint)(*(uint *)(local_1c[0] - 4));
      uVar3 = (uint)(local_8 + 0x24);
      if (0x1f < (local_1c[0] - uVar5) - 4) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(uVar5,uVar3);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 101c7880; body size 106 bytes.
#line 1 "ENTRY_101c7880"

undefined4 * __thiscall Recovered_Bulk::FUN_101c7880(byte param_2)
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


// Reference entry 101c7910; body size 148 bytes.
#line 1 "ENTRY_101c7910"

int * __thiscall Recovered_Bulk::FUN_101c7910(byte param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_101c6ae0(DAT_12126b84 );
  iVar1 = (int)(*param_1);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 101c7d70; body size 235 bytes.
#line 1 "ENTRY_101c7d70"

undefined4 * __thiscall Recovered_Bulk::FUN_101c7d70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  char cVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFetchTokenOpActionWrapper);
  param_1[2] = (uint)&ghidra_vftable_SCFetchTokenOpActionWrapper;

  if ((int *)param_1[7] != (int *)0x0) {
    cVar2 = (char)((**(code **)(*(int *)param_1[7] + 0x1c))(uVar3));
    if (cVar2 != '\0') {
      (**(code **)(*(int *)param_1[7] + 0x18))();
    }
  }
  piVar1 = (int *)((int *)param_1[8]);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  if (piVar1 != (int *)0x0) {
    param_1[7] = 0;
    param_1[8] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[6]);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar1 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[2] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[4]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101c7ed0; body size 113 bytes.
#line 1 "ENTRY_101c7ed0"

undefined4 * __thiscall Recovered_Bulk::FUN_101c7ed0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
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


// Reference entry 101c82e0; body size 189 bytes.
#line 1 "ENTRY_101c82e0"

void FUN_101c82e0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint local_1c [4];
  uint local_c;
  uint local_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_1c);
  local_c = (uint)(0);
  local_8 = (uint)(0xf);
  local_1c[0] = local_1c[0] & 0xffffff00;
  pcVar2 = (char *)(param_1);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  thunk_FUN_1012d130(param_1,(int)pcVar2 - (int)(param_1 + 1));
  uVar3 = (uint)(0);
  if (local_c != 0) {
    do {
      uVar3 = (uint)(uVar3 + 1);
    } while (uVar3 < local_c);
  }
  if (0xf < local_8) {
    uVar3 = (uint)(local_8 + 1);
    uVar4 = (uint)(local_1c[0]);
    if (0xfff < uVar3) {
      uVar4 = (uint)(*(uint *)(local_1c[0] - 4));
      uVar3 = (uint)(local_8 + 0x24);
      if (0x1f < (local_1c[0] - uVar4) - 4) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(uVar4,uVar3);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 101c8570; body size 104 bytes.
#line 1 "ENTRY_101c8570"

void __thiscall Recovered_Bulk::FUN_101c8570(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_101c42f0(*param_1,param_1[1],param_1);
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


// Reference entry 101c8680; body size 136 bytes.
#line 1 "ENTRY_101c8680"

float __thiscall Recovered_Bulk::FUN_101c8680(int param_2)
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


// Reference entry 101c8bc0; body size 87 bytes.
#line 1 "ENTRY_101c8bc0"

void __thiscall Recovered_Bulk::FUN_101c8bc0(int param_2)
{
  float *param_1 = (float *)this;
  double dVar1;
  
  dVar1 = (double)(ceil((double)((float)((double)param_2 + (double)(&DAT_11880fb0)[-(param_2 >> 0x1f)]) /
                       *param_1)));
  thunk_FUN_1148ac80(dVar1);
  return;
}


// Reference entry 101c8c50; body size 133 bytes.
#line 1 "ENTRY_101c8c50"

void __fastcall FUN_101c8c50(float *param_1)

{
  ceil((double)((float)((double)((int)param_1[2] + 1) +
                       (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) / *param_1));
  thunk_FUN_1148ac80();
  thunk_FUN_101c8790();
  return;
}


// Reference entry 101c8d30; body size 77 bytes.
#line 1 "ENTRY_101c8d30"

void __fastcall FUN_101c8d30(int *param_1)

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


// Reference entry 101c8dc0; body size 96 bytes.
#line 1 "ENTRY_101c8dc0"

void __fastcall FUN_101c8dc0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_101c42f0(*param_1,param_1[1],param_1);
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


// Reference entry 101ca290; body size 102 bytes.
#line 1 "ENTRY_101ca290"

undefined4 * __thiscall Recovered_Bulk::FUN_101ca290(undefined4 *param_2,undefined4 param_3,int *param_4)
{
  int *param_1 = (int *)this;
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x18))
                     (&param_4,param_3,param_4,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_2 = (undefined4)(uVar1);

  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 101ca620; body size 211 bytes.
#line 1 "ENTRY_101ca620"

undefined4 * FUN_101ca620(undefined4 *param_1)

{
 try {
  uint uVar1;
  int *piVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  piVar2 = (int *)(operator_new(8));
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
    piVar3 = (int *)((int *)0x0);
  }
  else {
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCActionFilterer);
    piVar3 = (int *)((int *)0x0);
    if (piVar2 != (int *)0x0) {
      if (*(code **)(*piVar2 + 0xc) == thunk_FUN_101caf60) {
        (**(code **)(*piVar2 + 4))();
        piVar3 = (int *)(piVar2);
      }
      else {
        piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))(uVar1));
        (**(code **)(*piVar3 + 4))();
      }
    }
  }

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


// Reference entry 101ca730; body size 112 bytes.
#line 1 "ENTRY_101ca730"

undefined4 * FUN_101ca730(undefined4 *param_1)

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

  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101caf70; body size 148 bytes.
#line 1 "ENTRY_101caf70"

SCIAction * __thiscall Recovered_Bulk::FUN_101caf70(SCIAction *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  SCLibrary *this_;
  SCIAction *pSVar4;
  
  puVar3 = (undefined4 *)(operator_new(0x30));
  if (puVar3 != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
    uVar2 = (undefined4)(*(undefined4 *)(param_1 + 8));
    *puVar3 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
    puVar3[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    puVar3[2] = (uint)&ghidra_vftable_SCIOpCBDelegate;
    puVar3[3] = 0;
    puVar3[4] = 0;
    *puVar3 = (undefined4)((uint)&ghidra_vftable_SCFetchTokenOpActionWrapper);
    puVar3[2] = (uint)&ghidra_vftable_SCFetchTokenOpActionWrapper;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = uVar2;
    puVar3[10] = uVar1;
    *(undefined1 *)(puVar3 + 0xb) = 0;
  }
  pSVar4 = (SCIAction *)(param_2);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  ((SCLibrary *)(this_))->createActionContextForAction(pSVar4);
  return (SCIAction *)(param_2);
}


// Reference entry 101cc560; body size 107 bytes.
#line 1 "ENTRY_101cc560"

undefined4 * __thiscall Recovered_Bulk::FUN_101cc560(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[0xb] = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = uVar2;
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101cc950; body size 91 bytes.
#line 1 "ENTRY_101cc950"

int * __thiscall Recovered_Bulk::FUN_101cc950(int *param_2)
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


// Reference entry 101cc9d0; body size 91 bytes.
#line 1 "ENTRY_101cc9d0"

int * __thiscall Recovered_Bulk::FUN_101cc9d0(int *param_2)
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


// Reference entry 101ccab0; body size 91 bytes.
#line 1 "ENTRY_101ccab0"

int * __thiscall Recovered_Bulk::FUN_101ccab0(int *param_2)
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


// Reference entry 101ccb50; body size 91 bytes.
#line 1 "ENTRY_101ccb50"

int * __thiscall Recovered_Bulk::FUN_101ccb50(int *param_2)
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


// Reference entry 101ccbf0; body size 91 bytes.
#line 1 "ENTRY_101ccbf0"

int * __thiscall Recovered_Bulk::FUN_101ccbf0(int *param_2)
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


// Reference entry 101ccf10; body size 91 bytes.
#line 1 "ENTRY_101ccf10"

int * __thiscall Recovered_Bulk::FUN_101ccf10(int *param_2)
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


// Reference entry 101ccf90; body size 91 bytes.
#line 1 "ENTRY_101ccf90"

int * __thiscall Recovered_Bulk::FUN_101ccf90(int *param_2)
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


// Reference entry 101cd010; body size 91 bytes.
#line 1 "ENTRY_101cd010"

int * __thiscall Recovered_Bulk::FUN_101cd010(int *param_2)
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


// Reference entry 101cd0d0; body size 91 bytes.
#line 1 "ENTRY_101cd0d0"

int * __thiscall Recovered_Bulk::FUN_101cd0d0(int *param_2)
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


// Reference entry 101cd150; body size 91 bytes.
#line 1 "ENTRY_101cd150"

int * __thiscall Recovered_Bulk::FUN_101cd150(int *param_2)
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


// Reference entry 101cd1d0; body size 91 bytes.
#line 1 "ENTRY_101cd1d0"

int * __thiscall Recovered_Bulk::FUN_101cd1d0(int *param_2)
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


// Reference entry 101cd2b0; body size 78 bytes.
#line 1 "ENTRY_101cd2b0"

int * __thiscall Recovered_Bulk::FUN_101cd2b0(int *param_2)
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


// Reference entry 101cd7d0; body size 78 bytes.
#line 1 "ENTRY_101cd7d0"

int * __thiscall Recovered_Bulk::FUN_101cd7d0(int *param_2)
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


// Reference entry 101cda80; body size 77 bytes.
#line 1 "ENTRY_101cda80"

uint __thiscall Recovered_Bulk::FUN_101cda80(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_EAX;
  int iVar4;
  
  iVar1 = (int)(param_2[1]);
  if (iVar1 != 0) {
    iVar3 = (int)(*(int *)(iVar1 + 4));
    while (iVar3 != 0) {
      LOCK();
      iVar4 = (int)(*(int *)(iVar1 + 4));
      if (iVar3 == iVar4) {
        *(int *)(iVar1 + 4) = iVar3 + 1;
        iVar4 = (int)(iVar3);
      }
      UNLOCK();
      if (iVar4 == iVar3) {
        *param_1 = (undefined4)(*param_2);
        uVar2 = (undefined4)(param_2[1]);
        param_1[1] = uVar2;
        return (uint)(((uint)((int3)((uint)uVar2 >> 8)) << 8 | (uint)(1)));
      }
      in_EAX = (uint)(0);
      iVar3 = (int)(iVar4);
    }
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 101cdda0; body size 71 bytes.
#line 1 "ENTRY_101cdda0"

void __thiscall Recovered_Bulk::FUN_101cdda0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (int)(*param_1);
  piVar3 = (int *)(*(int **)(iVar2 + 4));
  if (*(char *)((int)piVar3 + 0xd) == '\0') {
    do {
      thunk_FUN_101cdee0(param_2,piVar3[2]);
      piVar1 = (int *)((int *)*piVar3);
      thunk_FUN_1148a50e(piVar3,0x30);
      piVar3 = (int *)(piVar1);
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    iVar2 = (int)(*param_1);
  }
  thunk_FUN_1148a50e(iVar2,0x30);
  return;
}


// Reference entry 101cdf90; body size 140 bytes.
#line 1 "ENTRY_101cdf90"

void FUN_101cdf90(undefined4 param_1,undefined4 *param_2)

{
 try {
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);

  *(undefined4 *)param_2[1] = 0;
  puVar3 = (undefined4 *)((undefined4 *)*param_2);
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)*puVar3);
    piVar2 = (int *)((int *)puVar3[3]);

    if (piVar2 != (int *)0x0) {
      puVar3[2] = 0;
      puVar3[3] = 0;
      (**(code **)(*piVar2 + 8))(uVar4);
    }

    thunk_FUN_1148a50e(puVar3,0x10);
    puVar3 = (undefined4 *)(puVar1);
  }

  return;

 } catch (...) { }
}


// Reference entry 101ce0b0; body size 98 bytes.
#line 1 "ENTRY_101ce0b0"

void FUN_101ce0b0(undefined4 param_1,int param_2)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_2 + 0xc));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_1148a50e(param_2,0x10);

  return;

 } catch (...) { }
}


// Reference entry 101ce290; body size 121 bytes.
#line 1 "ENTRY_101ce290"

undefined4 * FUN_101ce290(int param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;

  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 101ce690; body size 272 bytes.
#line 1 "ENTRY_101ce690"

undefined4 * __thiscall Recovered_Bulk::FUN_101ce690(undefined4 *param_2,uint *param_3)
{
  int *param_1 = (int *)this;
 try {
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  bVar7 = (bool)(false);
  puVar6 = (undefined4 *)((undefined4 *)puVar1[1]);
  puVar5 = (undefined4 *)(puVar1);
  if (*(char *)((int)puVar6 + 0xd) == '\0') {
    puVar2 = (undefined4 *)(puVar6);
    do {
      puVar6 = (undefined4 *)(puVar2);
      bVar7 = (bool)(*param_3 <= (uint)puVar6[4]);
      if (bVar7) {
        puVar2 = (undefined4 *)((undefined4 *)*puVar6);
        puVar5 = (undefined4 *)(puVar6);
      }
      else {
        puVar2 = (undefined4 *)((undefined4 *)puVar6[2]);
      }
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
  }
  if ((*(char *)((int)puVar5 + 0xd) == '\0') && ((uint)puVar5[4] <= *param_3)) {
    *param_2 = (undefined4)(puVar5);
    *(undefined1 *)(param_2 + 1) = 0;
    return (undefined4 *)(param_2);
  }

  if (param_1[1] == 0x5555555) {
                    
    thunk_FUN_101d7220(DAT_12126b84 );
  }

  piVar3 = (int *)(operator_new(0x30));

  piVar3[4] = *param_3;
  thunk_FUN_103d6a60(0);
  *piVar3 = (int)((int)puVar1);
  piVar3[1] = (int)puVar1;
  piVar3[2] = (int)puVar1;
  *(undefined2 *)(piVar3 + 3) = 0;
  uVar4 = (undefined4)(thunk_FUN_101d6b80(puVar6,bVar7,piVar3));
  *param_2 = (undefined4)(uVar4);
  *(undefined1 *)(param_2 + 1) = 1;

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 101ceb80; body size 84 bytes.
#line 1 "ENTRY_101ceb80"

void FUN_101ceb80(undefined4 param_1,undefined4 *param_2)

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


// Reference entry 101d01f0; body size 93 bytes.
#line 1 "ENTRY_101d01f0"

int __thiscall Recovered_Bulk::FUN_101d01f0(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 101d0270; body size 93 bytes.
#line 1 "ENTRY_101d0270"

int __thiscall Recovered_Bulk::FUN_101d0270(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 101d0300; body size 87 bytes.
#line 1 "ENTRY_101d0300"

int __thiscall Recovered_Bulk::FUN_101d0300(int *param_2)
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


// Reference entry 101d0370; body size 93 bytes.
#line 1 "ENTRY_101d0370"

int __thiscall Recovered_Bulk::FUN_101d0370(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 101d0400; body size 93 bytes.
#line 1 "ENTRY_101d0400"

int __thiscall Recovered_Bulk::FUN_101d0400(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 101d1770; body size 236 bytes.
#line 1 "ENTRY_101d1770"

int __fastcall FUN_101d1770(undefined4 *param_1)

{
 try {
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


  uVar4 = (uint)(DAT_12126b84);

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

  if (piVar3 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    iVar5 = (int)((**(code **)(*piVar3 + 8))());
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return (int)(iVar5);

 } catch (...) { }
}


// Reference entry 101d19a0; body size 177 bytes.
#line 1 "ENTRY_101d19a0"

void __fastcall FUN_101d19a0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

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

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_101d3630();

  return;

 } catch (...) { }
}


// Reference entry 101d1a90; body size 76 bytes.
#line 1 "ENTRY_101d1a90"

void __fastcall FUN_101d1a90(undefined4 *param_1)

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


// Reference entry 101d1b00; body size 76 bytes.
#line 1 "ENTRY_101d1b00"

void __fastcall FUN_101d1b00(undefined4 *param_1)

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


// Reference entry 101d1b70; body size 76 bytes.
#line 1 "ENTRY_101d1b70"

void __fastcall FUN_101d1b70(undefined4 *param_1)

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


// Reference entry 101d1be0; body size 76 bytes.
#line 1 "ENTRY_101d1be0"

void __fastcall FUN_101d1be0(undefined4 *param_1)

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


// Reference entry 101d1c50; body size 76 bytes.
#line 1 "ENTRY_101d1c50"

void __fastcall FUN_101d1c50(undefined4 *param_1)

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


// Reference entry 101d1cc0; body size 76 bytes.
#line 1 "ENTRY_101d1cc0"

void __fastcall FUN_101d1cc0(undefined4 *param_1)

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


// Reference entry 101d1d30; body size 76 bytes.
#line 1 "ENTRY_101d1d30"

void __fastcall FUN_101d1d30(undefined4 *param_1)

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


// Reference entry 101d1da0; body size 76 bytes.
#line 1 "ENTRY_101d1da0"

void __fastcall FUN_101d1da0(undefined4 *param_1)

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


// Reference entry 101d1e10; body size 76 bytes.
#line 1 "ENTRY_101d1e10"

void __fastcall FUN_101d1e10(undefined4 *param_1)

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


// Reference entry 101d1e80; body size 76 bytes.
#line 1 "ENTRY_101d1e80"

void __fastcall FUN_101d1e80(undefined4 *param_1)

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


// Reference entry 101d1ef0; body size 76 bytes.
#line 1 "ENTRY_101d1ef0"

void __fastcall FUN_101d1ef0(undefined4 *param_1)

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


// Reference entry 101d1f60; body size 76 bytes.
#line 1 "ENTRY_101d1f60"

void __fastcall FUN_101d1f60(undefined4 *param_1)

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


// Reference entry 101d1fd0; body size 76 bytes.
#line 1 "ENTRY_101d1fd0"

void __fastcall FUN_101d1fd0(undefined4 *param_1)

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


// Reference entry 101d2040; body size 76 bytes.
#line 1 "ENTRY_101d2040"

void __fastcall FUN_101d2040(undefined4 *param_1)

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


// Reference entry 101d20b0; body size 76 bytes.
#line 1 "ENTRY_101d20b0"

void __fastcall FUN_101d20b0(undefined4 *param_1)

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


// Reference entry 101d2120; body size 76 bytes.
#line 1 "ENTRY_101d2120"

void __fastcall FUN_101d2120(undefined4 *param_1)

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


// Reference entry 101d2190; body size 76 bytes.
#line 1 "ENTRY_101d2190"

void __fastcall FUN_101d2190(undefined4 *param_1)

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


// Reference entry 101d2200; body size 76 bytes.
#line 1 "ENTRY_101d2200"

void __fastcall FUN_101d2200(undefined4 *param_1)

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


// Reference entry 101d2270; body size 76 bytes.
#line 1 "ENTRY_101d2270"

void __fastcall FUN_101d2270(undefined4 *param_1)

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


// Reference entry 101d22e0; body size 76 bytes.
#line 1 "ENTRY_101d22e0"

void __fastcall FUN_101d22e0(undefined4 *param_1)

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


// Reference entry 101d2350; body size 76 bytes.
#line 1 "ENTRY_101d2350"

void __fastcall FUN_101d2350(undefined4 *param_1)

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


// Reference entry 101d23c0; body size 76 bytes.
#line 1 "ENTRY_101d23c0"

void __fastcall FUN_101d23c0(undefined4 *param_1)

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


// Reference entry 101d2430; body size 76 bytes.
#line 1 "ENTRY_101d2430"

void __fastcall FUN_101d2430(undefined4 *param_1)

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


// Reference entry 101d24a0; body size 76 bytes.
#line 1 "ENTRY_101d24a0"

void __fastcall FUN_101d24a0(undefined4 *param_1)

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


// Reference entry 101d2510; body size 68 bytes.
#line 1 "ENTRY_101d2510"

void __fastcall FUN_101d2510(int *param_1)

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


// Reference entry 101d2570; body size 68 bytes.
#line 1 "ENTRY_101d2570"

void __fastcall FUN_101d2570(int *param_1)

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


// Reference entry 101d25d0; body size 68 bytes.
#line 1 "ENTRY_101d25d0"

void __fastcall FUN_101d25d0(int *param_1)

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


// Reference entry 101d2af0; body size 111 bytes.
#line 1 "ENTRY_101d2af0"

void __fastcall FUN_101d2af0(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  iVar3 = (int)(*(int *)(param_1 + 4));
  if (iVar3 != 0) {
    piVar1 = (int *)(*(int **)(iVar3 + 0xc));

    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(iVar3 + 8) = 0;
      *(undefined4 *)(iVar3 + 0xc) = 0;
      (**(code **)(*piVar1 + 8))(uVar2);
      iVar3 = (int)(*(int *)(param_1 + 4));
    }
    if (iVar3 != 0) {
      thunk_FUN_1148a50e(iVar3,0x10);
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 101d34d0; body size 90 bytes.
#line 1 "ENTRY_101d34d0"

void __fastcall FUN_101d34d0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIActionDelegateCB);
  piVar1 = (int *)((int *)param_1[2]);

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 101d3630; body size 162 bytes.
#line 1 "ENTRY_101d3630"

void __fastcall FUN_101d3630(undefined4 *param_1)

{
 try {
  char cVar1;
  uint uVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRefBase);
  if ((int *)param_1[1] == (int *)0x0) {
    piVar3 = (int *)((int *)param_1[2]);
  }
  else {
    cVar1 = (char)((**(code **)(*(int *)param_1[1] + 0x1c))(uVar2));
    if (cVar1 != '\0') {
      (**(code **)(*(int *)param_1[1] + 0x18))();
    }
    piVar3 = (int *)((int *)param_1[2]);
    if (piVar3 != (int *)0x0) {
      param_1[1] = 0;
      param_1[2] = 0;
      (**(code **)(*piVar3 + 8))();
    }
    param_1[1] = 0;
    piVar3 = (int *)((int *)0x0);
    param_1[2] = 0;
  }

  if (piVar3 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar3 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 101d3910; body size 90 bytes.
#line 1 "ENTRY_101d3910"

void __fastcall FUN_101d3910(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSystemStatusManagerEventSink);
  piVar1 = (int *)((int *)param_1[2]);

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 101d39b0; body size 97 bytes.
#line 1 "ENTRY_101d39b0"

void __fastcall FUN_101d39b0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_ScopedRWLock);
  if (*(char *)(param_1 + 3) != '\0') {
    if (param_1[2] == 0) {
      thunk_FUN_11242ca0();

      return;
    }
    thunk_FUN_11242f30(uVar1);
  }

  return;

 } catch (...) { }
}


// Reference entry 101d3a70; body size 124 bytes.
#line 1 "ENTRY_101d3a70"

void __fastcall FUN_101d3a70(int param_1)

{
 try {
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  void **ppvVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar5 = (uint)(DAT_12126b84);
  ppvVar4 = (void **)(&local_10);
  puVar3 = (undefined4 *)(*(undefined4 **)(param_1 + 4));

  while (ExceptionList = ppvVar4, puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)*puVar3);
    piVar2 = (int *)((int *)puVar3[3]);

    if (piVar2 != (int *)0x0) {
      puVar3[2] = 0;
      puVar3[3] = 0;
      (**(code **)(*piVar2 + 8))(uVar5);
    }

    thunk_FUN_1148a50e(puVar3,0x10);

    puVar3 = (undefined4 *)(puVar1);
  }

  return;

 } catch (...) { }
}


// Reference entry 101d3bb0; body size 81 bytes.
#line 1 "ENTRY_101d3bb0"

int * __thiscall Recovered_Bulk::FUN_101d3bb0(int *param_2)
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


// Reference entry 101d3c80; body size 81 bytes.
#line 1 "ENTRY_101d3c80"

int * __thiscall Recovered_Bulk::FUN_101d3c80(int *param_2)
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


// Reference entry 101d3cf0; body size 81 bytes.
#line 1 "ENTRY_101d3cf0"

int * __thiscall Recovered_Bulk::FUN_101d3cf0(int *param_2)
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


// Reference entry 101d3dc0; body size 81 bytes.
#line 1 "ENTRY_101d3dc0"

int * __thiscall Recovered_Bulk::FUN_101d3dc0(int *param_2)
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


// Reference entry 101d3e30; body size 81 bytes.
#line 1 "ENTRY_101d3e30"

int * __thiscall Recovered_Bulk::FUN_101d3e30(int *param_2)
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


// Reference entry 101d3ea0; body size 81 bytes.
#line 1 "ENTRY_101d3ea0"

int * __thiscall Recovered_Bulk::FUN_101d3ea0(int *param_2)
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


// Reference entry 101d3f10; body size 81 bytes.
#line 1 "ENTRY_101d3f10"

int * __thiscall Recovered_Bulk::FUN_101d3f10(int *param_2)
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


// Reference entry 101d3f80; body size 65 bytes.
#line 1 "ENTRY_101d3f80"

int * __thiscall Recovered_Bulk::FUN_101d3f80(int *param_2)
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


// Reference entry 101d3fe0; body size 81 bytes.
#line 1 "ENTRY_101d3fe0"

int * __thiscall Recovered_Bulk::FUN_101d3fe0(int *param_2)
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


// Reference entry 101d4290; body size 237 bytes.
#line 1 "ENTRY_101d4290"

undefined4 * __thiscall Recovered_Bulk::FUN_101d4290(uint *param_2)
{
  int *param_1 = (int *)this;
 try {
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  bVar6 = (bool)(false);
  puVar5 = (undefined4 *)((undefined4 *)puVar1[1]);
  puVar4 = (undefined4 *)(puVar1);
  if (*(char *)((int)puVar5 + 0xd) == '\0') {
    puVar2 = (undefined4 *)(puVar5);
    do {
      puVar5 = (undefined4 *)(puVar2);
      bVar6 = (bool)(*param_2 <= (uint)puVar5[4]);
      if (bVar6) {
        puVar2 = (undefined4 *)((undefined4 *)*puVar5);
        puVar4 = (undefined4 *)(puVar5);
      }
      else {
        puVar2 = (undefined4 *)((undefined4 *)puVar5[2]);
      }
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
  }
  if ((*(char *)((int)puVar4 + 0xd) != '\0') || (*param_2 < (uint)puVar4[4])) {
    if (param_1[1] == 0x5555555) {
                    
      thunk_FUN_101d7220(DAT_12126b84 );
    }

    piVar3 = (int *)(operator_new(0x30));

    piVar3[4] = *param_2;
    thunk_FUN_103d6a60(0);
    *piVar3 = (int)((int)puVar1);
    piVar3[1] = (int)puVar1;
    piVar3[2] = (int)puVar1;
    *(undefined2 *)(piVar3 + 3) = 0;
    puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_101d6b80(puVar5,bVar6,piVar3));
  }

  return (undefined4 *)(puVar4 + 6);

 } catch (...) { }
}


// Reference entry 101d4810; body size 88 bytes.
#line 1 "ENTRY_101d4810"

int * __thiscall Recovered_Bulk::FUN_101d4810(int *param_2)
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


// Reference entry 101d53d0; body size 261 bytes.
#line 1 "ENTRY_101d53d0"

undefined4 * __thiscall Recovered_Bulk::FUN_101d53d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar4 = (uint)(DAT_12126b84);

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

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101d5770; body size 106 bytes.
#line 1 "ENTRY_101d5770"

undefined4 * __thiscall Recovered_Bulk::FUN_101d5770(byte param_2)
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


// Reference entry 101d5b30; body size 113 bytes.
#line 1 "ENTRY_101d5b30"

undefined4 * __thiscall Recovered_Bulk::FUN_101d5b30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIActionDelegateCB);
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


// Reference entry 101d5e00; body size 113 bytes.
#line 1 "ENTRY_101d5e00"

undefined4 * __thiscall Recovered_Bulk::FUN_101d5e00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSystemStatusManagerEventSink);
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


// Reference entry 101d5ee0; body size 114 bytes.
#line 1 "ENTRY_101d5ee0"

undefined4 * __thiscall Recovered_Bulk::FUN_101d5ee0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_ScopedRWLock);
  if (*(char *)(param_1 + 3) != '\0') {
    if (param_1[2] == 0) {
      thunk_FUN_11242ca0();
    }
    else {
      thunk_FUN_11242f30(uVar1);
    }
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101d60a0; body size 124 bytes.
#line 1 "ENTRY_101d60a0"

undefined4 * __fastcall FUN_101d60a0(int param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;

  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x2c))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 101d6e80; body size 79 bytes.
#line 1 "ENTRY_101d6e80"

void __thiscall Recovered_Bulk::FUN_101d6e80(int param_2)
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


// Reference entry 101d7100; body size 83 bytes.
#line 1 "ENTRY_101d7100"

void __thiscall Recovered_Bulk::FUN_101d7100(int *param_2)
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


// Reference entry 101d7620; body size 68 bytes.
#line 1 "ENTRY_101d7620"

void __thiscall Recovered_Bulk::FUN_101d7620(int param_2,undefined2 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  
  if (*(int **)(param_1 + 100) == (int *)0x0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 100) + 0x20))());
  }
  if (param_2 == iVar1) {
    iVar1 = (int)(thunk_FUN_103eb600());
    if (iVar1 == -2) {
      thunk_FUN_112af4e0("SCAccountManager",1,"Error in sending reset password email %d",param_3);
    }
  }
  return;
}


// Reference entry 101d7e10; body size 110 bytes.
#line 1 "ENTRY_101d7e10"

int __thiscall Recovered_Bulk::FUN_101d7e10(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 4))();
  piVar1 = (int *)((int *)param_1[2]);
  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[1] = (int)param_2;
  if (param_2 == (int *)0x0) {
    param_1[2] = 0;
  }
  else {
    iVar2 = (int)((**(code **)(*param_2 + 0xc))());
    param_1[2] = iVar2;
    if ((int *)param_1[1] != (int *)0x0) {
      (**(code **)(*(int *)param_1[1] + 0x14))(param_3);
      return (int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (int)(param_1[1]);
}


// Reference entry 101d8430; body size 67 bytes.
#line 1 "ENTRY_101d8430"

void __fastcall FUN_101d8430(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = (int)(*param_1);
  cVar1 = (char)(*(char *)((int)*(int **)(iVar2 + 4) + 0xd));
  piVar4 = (int *)(*(int **)(iVar2 + 4));
  while (cVar1 == '\0') {
    thunk_FUN_101cdee0(param_1,piVar4[2]);
    piVar3 = (int *)((int *)*piVar4);
    thunk_FUN_1148a50e(piVar4,0x30);
    piVar4 = (int *)(piVar3);
    cVar1 = (char)(*(char *)((int)piVar3 + 0xd));
  }
  *(int *)(iVar2 + 4) = iVar2;
  *(int *)iVar2 = (int)(iVar2);
  *(int *)(iVar2 + 8) = iVar2;
  param_1[1] = 0;
  return;
}


// Reference entry 101d9170; body size 127 bytes.
#line 1 "ENTRY_101d9170"

undefined4 __thiscall Recovered_Bulk::FUN_101d9170(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  char cVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  cVar1 = (char)(thunk_FUN_112a7f50(param_1 + 0xb0,DAT_12126b84 ));

  thunk_FUN_101dad50(param_2,param_3);
  if (cVar1 != '\0') {
    thunk_FUN_112a8010(param_1 + 0xb0);
  }

  return (undefined4)(param_2);

 } catch (...) { }
}


// Reference entry 101d9560; body size 97 bytes.
#line 1 "ENTRY_101d9560"

undefined4 * __thiscall Recovered_Bulk::FUN_101d9560(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int *)(param_1);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x38))(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_2 = (undefined4)(uVar1);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 101d95e0; body size 183 bytes.
#line 1 "ENTRY_101d95e0"

int * __thiscall Recovered_Bulk::FUN_101d95e0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    piVar2 = (int *)(operator_new(0xc));
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)((int *)0x0);
    }
    else {
      *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      piVar2[1] = 0;
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      *piVar2 = (int)((int)(uint)&ghidra_vftable_SCActionDelegateProxy);
      piVar2[2] = param_1;
    }
    if (piVar2 != *(int **)(param_1 + 4)) {
      piVar1 = (int *)(*(int **)(param_1 + 8));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
        (**(code **)(*piVar1 + 8))();
      }
      *(int **)(param_1 + 4) = piVar2;
      if (piVar2 == (int *)0x0) {
        *(undefined4 *)(param_1 + 8) = 0;
      }
      else {
        if (*(code **)(*piVar2 + 0xc) != thunk_FUN_101da380) {
          piVar2 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
        }
        *(int **)(param_1 + 8) = piVar2;
        (**(code **)(*piVar2 + 4))();
      }
    }
  }
  piVar2 = (int *)(*(int **)(param_1 + 4));
  *param_2 = (int)((int)piVar2);
  param_2[1] = 0;
  if (piVar2 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
    param_2[1] = (int)piVar2;
    (**(code **)(*piVar2 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 101d9710; body size 97 bytes.
#line 1 "ENTRY_101d9710"

undefined4 * __thiscall Recovered_Bulk::FUN_101d9710(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int *)(param_1);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x3c))(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_2 = (undefined4)(uVar1);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 101da240; body size 183 bytes.
#line 1 "ENTRY_101da240"

int * __thiscall Recovered_Bulk::FUN_101da240(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    piVar2 = (int *)(operator_new(0xc));
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)((int *)0x0);
    }
    else {
      *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      piVar2[1] = 0;
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      *piVar2 = (int)((int)(uint)&ghidra_vftable_SCOpCBProxy);
      piVar2[2] = param_1;
    }
    if (piVar2 != *(int **)(param_1 + 4)) {
      piVar1 = (int *)(*(int **)(param_1 + 8));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
        (**(code **)(*piVar1 + 8))();
      }
      *(int **)(param_1 + 4) = piVar2;
      if (piVar2 == (int *)0x0) {
        *(undefined4 *)(param_1 + 8) = 0;
      }
      else {
        if (*(code **)(*piVar2 + 0xc) != thunk_FUN_101da3a0) {
          piVar2 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
        }
        *(int **)(param_1 + 8) = piVar2;
        (**(code **)(*piVar2 + 4))();
      }
    }
  }
  piVar2 = (int *)(*(int **)(param_1 + 4));
  *param_2 = (int)((int)piVar2);
  param_2[1] = 0;
  if (piVar2 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
    param_2[1] = (int)piVar2;
    (**(code **)(*piVar2 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 101da5c0; body size 164 bytes.
#line 1 "ENTRY_101da5c0"

int * FUN_101da5c0(int *param_1)

{
 try {
  int *piVar1;
  int *piVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar2 = (int *)((int *)thunk_FUN_101da4a0(&local_14,DAT_12126b84 ));
  piVar1 = (int *)((int *)*piVar2);

  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  *param_1 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 101dac00; body size 135 bytes.
#line 1 "ENTRY_101dac00"

void __fastcall FUN_101dac00(int param_1)

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


// Reference entry 101dacb0; body size 71 bytes.
#line 1 "ENTRY_101dacb0"

void __fastcall FUN_101dacb0(int param_1)

{
  int *piVar1;
  char cVar2;
  
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


// Reference entry 101dc620; body size 106 bytes.
#line 1 "ENTRY_101dc620"

void __fastcall FUN_101dc620(int *param_1)

{
 try {
  undefined4 *puVar1;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int *)(param_1);
  thunk_FUN_10309500(DAT_12126b84 );
  puVar1 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x3c))(&local_14));

  thunk_FUN_10308fd0(*puVar1);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 101dccc0; body size 205 bytes.
#line 1 "ENTRY_101dccc0"

undefined1 FUN_101dccc0(undefined4 param_1,undefined4 param_2)

{
 try {
  int *piVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (undefined1)(0);
  puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_101da4a0(&local_18,DAT_12126b84 ));

  piVar4 = (int *)((int *)(**(code **)(*(int *)*puVar3 + 0x3c))(&local_14));
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
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  if (piVar1 != (int *)0x0) {
    uVar2 = (undefined1)((**(code **)(*piVar1 + 0x8c))(param_1,param_2));
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined1)(uVar2);

 } catch (...) { }
}


// Reference entry 101dce50; body size 109 bytes.
#line 1 "ENTRY_101dce50"

undefined1 FUN_101dce50(void)

{
 try {
  undefined1 uVar1;
  int *piVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar2 = (int *)((int *)thunk_FUN_101da4a0(&local_14,DAT_12126b84 ));

  uVar1 = (undefined1)((**(code **)(**(int **)(*piVar2 + 0x15c) + 0x20))());

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 101dcfc0; body size 84 bytes.
#line 1 "ENTRY_101dcfc0"

undefined4 * __thiscall Recovered_Bulk::FUN_101dcfc0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_2 = (undefined4)(0);
  param_2[1] = 0;
  iVar1 = (int)(param_1[1]);
  if (iVar1 != 0) {
    iVar3 = (int)(*(int *)(iVar1 + 4));
    if (*(int *)(iVar1 + 4) != 0) {
      while( true ) {
        LOCK();
        iVar2 = (int)(*(int *)(iVar1 + 4));
        if (iVar3 == iVar2) {
          *(int *)(iVar1 + 4) = iVar3 + 1;
          iVar2 = (int)(iVar3);
        }
        UNLOCK();
        if (iVar2 == iVar3) break;
        iVar3 = (int)(iVar2);
        if (iVar2 == 0) {
          return (undefined4 *)(param_2);
        }
      }
      *param_2 = (undefined4)(*param_1);
      param_2[1] = param_1[1];
    }
  }
  return (undefined4 *)(param_2);
}


// Reference entry 101dd3a0; body size 272 bytes.
#line 1 "ENTRY_101dd3a0"

void __thiscall Recovered_Bulk::FUN_101dd3a0(undefined1 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined1 *puVar1;
  uint uVar2;
  void *_Src;
  uint uVar3;
  void *_Dst;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  
  uVar6 = (uint)(param_1[4]);
  uVar2 = (uint)(param_1[5]);
  if (uVar6 < uVar2) {
    param_1[4] = uVar6 + 1;
    if (0xf < uVar2) {
      param_1 = (undefined4 *)((undefined4 *)*param_1);
    }
    *(undefined1 *)((int)param_1 + uVar6) = param_2;
    *(undefined1 *)((int)param_1 + uVar6 + 1) = 0;
    return;
  }
  if (uVar6 == 0x7fffffff) {
                    
    thunk_FUN_1012a4c0();
  }
  uVar4 = (uint)(uVar6 + 1 | 0xf);
  if (uVar4 < 0x80000000) {
    if (0x7fffffff - (uVar2 >> 1) < uVar2) {
      uVar4 = (uint)(0x7fffffff);
    }
    else {
      uVar3 = (uint)((uVar2 >> 1) + uVar2);
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
  param_1[4] = uVar6 + 1;
  puVar1 = (undefined1 *)((undefined1 *)((int)_Dst + uVar6));
  if (uVar2 < 0x10) {
    memcpy(_Dst,param_1,uVar6);
    *puVar1 = (undefined1)(param_2);
    puVar1[1] = 0;
    *param_1 = (undefined4)(_Dst);
    return;
  }
  _Src = (void *)((void *)*param_1);
  memcpy(_Dst,_Src,uVar6);
  uVar6 = (uint)(uVar2 + 1);
  *puVar1 = (undefined1)(param_2);
  puVar1[1] = 0;
  pvVar5 = (void *)(_Src);
  if (0xfff < uVar6) {
    pvVar5 = (void *)(*(void **)((int)_Src + -4));
    uVar6 = (uint)(uVar2 + 0x24);
    if (0x1f < (uint)((int)_Src + (-4 - (int)pvVar5))) {
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1148a50e(pvVar5,uVar6);
  *param_1 = (undefined4)(_Dst);
  return;
}


// Reference entry 101df750; body size 353 bytes.
#line 1 "ENTRY_101df750"

void __fastcall FUN_101df750(int param_1)

{
 try {
  int *piVar1;
  char cVar2;
  SCLibrary *pSVar3;
  undefined4 uVar4;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (*(int *)(param_1 + 0xf4) != 0) {
    (**(code **)(*(int *)(param_1 + 0xf0) + 4))(DAT_12126b84 );
    (**(code **)(*(int *)(param_1 + 0xf0) + 4))();
  }
  if (*(char *)(param_1 + 0xc2) != '\0') {
    piVar1 = (int *)((int *)(param_1 + 0xb0));
    cVar2 = (char)(thunk_FUN_112a7f50(piVar1));
    local_18 = (int *)((int *)((uint)(*(unsigned short *)((char *)&local_18 + 1)) << 8 | (uint)(cVar2)));

    thunk_FUN_101dbeb0();

    if (cVar2 != '\0') {
      thunk_FUN_112a8010(piVar1);
    }
    pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    uVar4 = (undefined4)((**(code **)(*(int *)pSVar3 + 0x18))(&local_14));

    thunk_FUN_101ccbf0(uVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xcc))(*(undefined4 *)(param_1 + 0x7c));
    }

    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }

  }
  piVar1 = (int *)(*(int **)(param_1 + 0xd0));
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)(param_1 + 0xa8));
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  thunk_FUN_101cdf90(piVar1,*piVar1);
  *(int *)*piVar1 = (int)(*piVar1);
  *(int *)(*piVar1 + 4) = *piVar1;
  *(undefined4 *)(param_1 + 0xac) = 0;

  return;

 } catch (...) { }
}


// Reference entry 101df910; body size 112 bytes.
#line 1 "ENTRY_101df910"

void FUN_101df910(void)

{
 try {
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_101da4a0(&local_14,DAT_12126b84 );

  thunk_FUN_101d4290(&stack0x00000004);
  thunk_FUN_103d6e00();

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 101dfc50; body size 169 bytes.
#line 1 "ENTRY_101dfc50"

void __fastcall FUN_101dfc50(int param_1)

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
  piVar4 = (int *)((int *)(**(code **)(*(int *)pSVar3 + 0x18))(&local_14,uVar2));
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
    (**(code **)(*piVar1 + 0xc4))(*(undefined4 *)(param_1 + 0x7c));
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 101dfd70; body size 147 bytes.
#line 1 "ENTRY_101dfd70"

void __thiscall Recovered_Bulk::FUN_101dfd70(int param_2)
{
  int param_1 = (int )this;
 try {
  char cVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (*(char *)(param_1 + 0xc2) != '\0') {
    cVar1 = (char)(thunk_FUN_112a7f50(param_1 + 0xb0,DAT_12126b84 ));

    thunk_FUN_101dbeb0();

    if (cVar1 != '\0') {
      thunk_FUN_112a8010(param_1 + 0xb0);
    }
  }
  if (param_2 != 0) {
    thunk_FUN_103d6930(param_2);
  }

  return;

 } catch (...) { }
}


// Reference entry 101e04e0; body size 91 bytes.
#line 1 "ENTRY_101e04e0"

int * __thiscall Recovered_Bulk::FUN_101e04e0(int *param_2)
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


// Reference entry 101e0560; body size 78 bytes.
#line 1 "ENTRY_101e0560"

int * __thiscall Recovered_Bulk::FUN_101e0560(int *param_2)
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


// Reference entry 101e0900; body size 78 bytes.
#line 1 "ENTRY_101e0900"

int * __thiscall Recovered_Bulk::FUN_101e0900(int *param_2)
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


// Reference entry 101e09e0; body size 78 bytes.
#line 1 "ENTRY_101e09e0"

int * __thiscall Recovered_Bulk::FUN_101e09e0(int *param_2)
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


// Reference entry 101e11a0; body size 68 bytes.
#line 1 "ENTRY_101e11a0"

void __fastcall FUN_101e11a0(int *param_1)

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


// Reference entry 101e1200; body size 68 bytes.
#line 1 "ENTRY_101e1200"

void __fastcall FUN_101e1200(int *param_1)

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


// Reference entry 101e1410; body size 81 bytes.
#line 1 "ENTRY_101e1410"

int * __thiscall Recovered_Bulk::FUN_101e1410(int *param_2)
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


// Reference entry 101e1480; body size 81 bytes.
#line 1 "ENTRY_101e1480"

int * __thiscall Recovered_Bulk::FUN_101e1480(int *param_2)
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


// Reference entry 101e2250; body size 79 bytes.
#line 1 "ENTRY_101e2250"

void __thiscall Recovered_Bulk::FUN_101e2250(int param_2)
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


// Reference entry 101e2330; body size 83 bytes.
#line 1 "ENTRY_101e2330"

void __thiscall Recovered_Bulk::FUN_101e2330(int *param_2)
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


// Reference entry 101e24d0; body size 112 bytes.
#line 1 "ENTRY_101e24d0"

void __fastcall FUN_101e24d0(int param_1)

{
 try {
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_11242d90(DAT_12126b84 );
  iVar1 = (int)(*(int *)(param_1 + 0x10));
  thunk_FUN_101cde00((int *)(param_1 + 0x10),*(undefined4 *)(iVar1 + 4));
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)iVar1 = (int)(iVar1);
  *(int *)(iVar1 + 8) = iVar1;
  *(undefined4 *)(param_1 + 0x14) = 0;

  thunk_FUN_11242f30();

  return;

 } catch (...) { }
}


// Reference entry 101e2c90; body size 95 bytes.
#line 1 "ENTRY_101e2c90"

bool __thiscall Recovered_Bulk::FUN_101e2c90(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x84))
                            (&param_2,param_2,DAT_12126b84 ));
  iVar1 = (int)(*piVar2);

  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }

  return (bool)(iVar1 != 0);

 } catch (...) { }
}


// Reference entry 101e3700; body size 103 bytes.
#line 1 "ENTRY_101e3700"

float10 __fastcall FUN_101e3700(int *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  double dStack_8;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x18))());
  if (cVar1 == '\0') {
    return (float10)((float10)DAT_11884810);
  }
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)param_1[4] != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)((undefined1 *)param_1[4]);
  }
  cVar1 = (char)(thunk_FUN_1145c2a0(puVar2,&dStack_8));
  if (cVar1 != '\0') {
    return (float10)((float10)dStack_8);
  }
  return (float10)((float10)DAT_11884810);
}


// Reference entry 101e3a80; body size 317 bytes.
#line 1 "ENTRY_101e3a80"

int * __thiscall Recovered_Bulk::FUN_101e3a80(int *param_2)
{
  int param_1 = (int )this;
 try {
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar5 = (uint)(DAT_12126b84);

  piVar6 = (int *)((int *)createSCStringArray());
  piVar2 = (int *)((int *)*piVar6);

  *piVar6 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar6 = (int *)((int *)0x0);
  }
  else {
    piVar6 = (int *)((int *)(**(code **)(*piVar2 + 0xc))(uVar5));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  thunk_FUN_11242b10();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  piVar7 = (int *)((int *)**(int **)(param_1 + 0x10));
  cVar1 = (char)(*(char *)((int)piVar7 + 0xd));
  while (cVar1 == '\0') {
    (**(code **)(*piVar2 + 0x24))(piVar7 + 4);
    piVar3 = (int *)((int *)piVar7[2]);
    if (*(char *)((int)piVar3 + 0xd) == '\0') {
      cVar1 = (char)(*(char *)(*piVar3 + 0xd));
      piVar7 = (int *)(piVar3);
      piVar3 = (int *)((int *)*piVar3);
      while (cVar1 == '\0') {
        cVar1 = (char)(*(char *)(*piVar3 + 0xd));
        piVar7 = (int *)(piVar3);
        piVar3 = (int *)((int *)*piVar3);
      }
    }
    else {
      cVar1 = (char)(*(char *)(piVar7[1] + 0xd));
      piVar4 = (int *)((int *)piVar7[1]);
      piVar3 = (int *)(piVar7);
      while ((piVar7 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar7[2]))) {
        cVar1 = (char)(*(char *)(piVar7[1] + 0xd));
        piVar4 = (int *)((int *)piVar7[1]);
        piVar3 = (int *)(piVar7);
      }
    }
    cVar1 = (char)(*(char *)((int)piVar7 + 0xd));
  }
  *param_2 = (int)((int)piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  thunk_FUN_11242ca0();

  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))();
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 101e50d0; body size 132 bytes.
#line 1 "ENTRY_101e50d0"

bool __stdcall FUN_101e50d0(undefined4 param_1)

{
 try {
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_11242d90(DAT_12126b84 );

  iVar1 = (int)(thunk_FUN_101e2d80(param_1));

  thunk_FUN_11242f30();

  return (bool)(iVar1 != 0);

 } catch (...) { }
}


// Reference entry 101e6a90; body size 142 bytes.
#line 1 "ENTRY_101e6a90"

undefined4 * __fastcall FUN_101e6a90(undefined4 *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUrl);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;

  thunk_FUN_101e76a0(&DAT_1186d2ee);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101e7e50; body size 91 bytes.
#line 1 "ENTRY_101e7e50"

int * __thiscall Recovered_Bulk::FUN_101e7e50(int *param_2)
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


// Reference entry 101e7fd0; body size 91 bytes.
#line 1 "ENTRY_101e7fd0"

int * __thiscall Recovered_Bulk::FUN_101e7fd0(int *param_2)
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


// Reference entry 101e8090; body size 91 bytes.
#line 1 "ENTRY_101e8090"

int * __thiscall Recovered_Bulk::FUN_101e8090(int *param_2)
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


// Reference entry 101e8390; body size 78 bytes.
#line 1 "ENTRY_101e8390"

int * __thiscall Recovered_Bulk::FUN_101e8390(int *param_2)
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


// Reference entry 101e8400; body size 78 bytes.
#line 1 "ENTRY_101e8400"

int * __thiscall Recovered_Bulk::FUN_101e8400(int *param_2)
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


// Reference entry 101e8480; body size 286 bytes.
#line 1 "ENTRY_101e8480"

void __thiscall Recovered_Bulk::FUN_101e8480(int param_2,int param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = (uint)(param_3 - param_2 >> 3);
  iVar3 = (int)(*param_1);
  uVar1 = (uint)(param_1[1] - iVar3 >> 3);
  if (uVar4 <= uVar1) {
    iVar2 = (int)(iVar3 + uVar4 * 8);
    thunk_FUN_101e85f0(param_2,param_3,iVar3);
    thunk_FUN_101e8710(iVar2,param_1[1],param_1);
    param_1[1] = iVar2;
    return;
  }
  uVar5 = (uint)(param_1[2] - iVar3 >> 3);
  if (uVar5 < uVar4) {
    if (0x1fffffff < uVar4) {
                    
      thunk_FUN_101ec790();
    }
    if (0x1fffffff - (uVar5 >> 1) < uVar5) {
      uVar5 = (uint)(0x1fffffff);
    }
    else {
      uVar5 = (uint)(uVar5 + (uVar5 >> 1));
      if (uVar5 < uVar4) {
        uVar5 = (uint)(uVar4);
      }
    }
    if (iVar3 != 0) {
      thunk_FUN_101e8710(iVar3,param_1[1],param_1);
      iVar3 = (int)(*param_1);
      uVar1 = (uint)(param_1[2] - iVar3 & 0xfffffff8);
      iVar2 = (int)(iVar3);
      if (0xfff < uVar1) {
        iVar2 = (int)(*(int *)(iVar3 + -4));
        uVar1 = (uint)(uVar1 + 0x23);
        if (0x1f < (iVar3 - iVar2) - 4U) {
                    
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1148a50e(iVar2,uVar1);
      *param_1 = (int)(0);
      param_1[1] = 0;
      param_1[2] = 0;
    }
    iVar3 = (int)(thunk_FUN_101ec9b0(uVar5));
    *param_1 = (int)(iVar3);
    uVar1 = (uint)(0);
    param_1[1] = iVar3;
    param_1[2] = iVar3 + uVar5 * 8;
  }
  iVar2 = (int)(param_2 + uVar1 * 8);
  thunk_FUN_101e85f0(param_2,iVar2,iVar3);
  iVar3 = (int)(thunk_FUN_101e9180(iVar2,param_3,param_1[1],param_1));
  param_1[1] = iVar3;
  return;
}


// Reference entry 101e85f0; body size 92 bytes.
#line 1 "ENTRY_101e85f0"

int * FUN_101e85f0(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (int *)(param_2)) {
    return (int *)(param_3);
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
  return (int *)(param_3);
}


// Reference entry 101e8670; body size 111 bytes.
#line 1 "ENTRY_101e8670"

void FUN_101e8670(undefined4 *param_1,undefined4 *param_2)

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


// Reference entry 101e8710; body size 111 bytes.
#line 1 "ENTRY_101e8710"

void FUN_101e8710(undefined4 *param_1,undefined4 *param_2)

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


// Reference entry 101e8ef0; body size 93 bytes.
#line 1 "ENTRY_101e8ef0"

int * FUN_101e8ef0(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if ((int *)(param_2) == param_1) {
    return (int *)(param_3);
  }
  do {
    iVar2 = (int)(param_2[-2]);
    piVar4 = (int *)(param_2 + -2);
    piVar3 = (int *)(param_3 + -2);
    if (iVar2 != *piVar3) {
      piVar1 = (int *)((int *)param_3[-1]);
      if (piVar1 != (int *)0x0) {
        *piVar3 = (int)(0);
        param_3[-1] = 0;
        (**(code **)(*piVar1 + 8))();
        iVar2 = (int)(*piVar4);
      }
      *piVar3 = (int)(iVar2);
      piVar1 = (int *)((int *)param_2[-1]);
      param_3[-1] = (int)piVar1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    param_3 = (int *)(piVar3);
    param_2 = (int *)(piVar4);
  } while (piVar4 != (int *)(param_1));
  return (int *)(piVar3);
}


// Reference entry 101e9520; body size 84 bytes.
#line 1 "ENTRY_101e9520"

void FUN_101e9520(undefined4 param_1,undefined4 *param_2)

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


// Reference entry 101e9590; body size 84 bytes.
#line 1 "ENTRY_101e9590"

void FUN_101e9590(undefined4 param_1,undefined4 *param_2)

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


// Reference entry 101e9810; body size 322 bytes.
#line 1 "ENTRY_101e9810"

undefined4 * __thiscall Recovered_Bulk::FUN_101e9810(undefined4 *param_2,int *param_3,int *param_4)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)(*(int **)(param_1 + 4));
  if (piVar1 == *(int **)(param_1 + 8)) {
    uVar5 = (undefined4)(thunk_FUN_101e8b00(param_3,param_4));
    *param_2 = (undefined4)(uVar5);

    return (undefined4 *)(param_2);
  }
  iVar2 = (int)(*param_4);
  if ((int *)(param_3) != piVar1) {
    piVar3 = (int *)((int *)param_4[1]);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(DAT_12126b84 );
    }
    *piVar1 = (int)(piVar1[-2]);
    piVar4 = (int *)((int *)piVar1[-1]);

    piVar1[1] = (int)piVar4;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    thunk_FUN_101e8ef0(param_3,piVar1 + -2,piVar1);
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

    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
    *param_2 = (undefined4)(param_3);

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

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 101e99b0; body size 322 bytes.
#line 1 "ENTRY_101e99b0"

undefined4 * __thiscall Recovered_Bulk::FUN_101e99b0(undefined4 *param_2,int *param_3,int *param_4)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)(*(int **)(param_1 + 4));
  if (piVar1 == *(int **)(param_1 + 8)) {
    uVar5 = (undefined4)(thunk_FUN_101e8ca0(param_3,param_4));
    *param_2 = (undefined4)(uVar5);

    return (undefined4 *)(param_2);
  }
  iVar2 = (int)(*param_4);
  if ((int *)(param_3) != piVar1) {
    piVar3 = (int *)((int *)param_4[1]);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(DAT_12126b84 );
    }
    *piVar1 = (int)(piVar1[-2]);
    piVar4 = (int *)((int *)piVar1[-1]);

    piVar1[1] = (int)piVar4;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    thunk_FUN_101e8ef0(param_3,piVar1 + -2,piVar1);
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

    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
    *param_2 = (undefined4)(param_3);

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

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 101ea090; body size 148 bytes.
#line 1 "ENTRY_101ea090"

int * __thiscall Recovered_Bulk::FUN_101ea090(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (int)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  iVar4 = (int)(*param_2);
  iVar1 = (int)(param_2[1]);
  if (iVar4 != iVar1) {
    iVar5 = (int)(iVar1 - iVar4 >> 3);
    iVar3 = (int)(thunk_FUN_101ec940(iVar5));
    *param_1 = (int)(iVar3);
    param_1[1] = iVar3;
    param_1[2] = iVar3 + iVar5 * 8;

    iVar4 = (int)(thunk_FUN_101e90e0(iVar4,iVar1,iVar3,param_1,uVar2));
    param_1[1] = iVar4;
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 101eabf0; body size 76 bytes.
#line 1 "ENTRY_101eabf0"

void __fastcall FUN_101eabf0(undefined4 *param_1)

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


// Reference entry 101eac60; body size 76 bytes.
#line 1 "ENTRY_101eac60"

void __fastcall FUN_101eac60(undefined4 *param_1)

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


// Reference entry 101eacd0; body size 76 bytes.
#line 1 "ENTRY_101eacd0"

void __fastcall FUN_101eacd0(undefined4 *param_1)

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


// Reference entry 101ead40; body size 76 bytes.
#line 1 "ENTRY_101ead40"

void __fastcall FUN_101ead40(undefined4 *param_1)

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


// Reference entry 101eadb0; body size 76 bytes.
#line 1 "ENTRY_101eadb0"

void __fastcall FUN_101eadb0(undefined4 *param_1)

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


// Reference entry 101eae20; body size 76 bytes.
#line 1 "ENTRY_101eae20"

void __fastcall FUN_101eae20(undefined4 *param_1)

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


// Reference entry 101eb010; body size 84 bytes.
#line 1 "ENTRY_101eb010"

void __fastcall FUN_101eb010(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 101eb080; body size 84 bytes.
#line 1 "ENTRY_101eb080"

void __fastcall FUN_101eb080(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 101eb1b0; body size 96 bytes.
#line 1 "ENTRY_101eb1b0"

void __fastcall FUN_101eb1b0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_101e8710(*param_1,param_1[1],param_1);
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


// Reference entry 101eb4b0; body size 81 bytes.
#line 1 "ENTRY_101eb4b0"

int * __thiscall Recovered_Bulk::FUN_101eb4b0(int *param_2)
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


// Reference entry 101eb520; body size 81 bytes.
#line 1 "ENTRY_101eb520"

int * __thiscall Recovered_Bulk::FUN_101eb520(int *param_2)
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


// Reference entry 101eb590; body size 81 bytes.
#line 1 "ENTRY_101eb590"

int * __thiscall Recovered_Bulk::FUN_101eb590(int *param_2)
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


// Reference entry 101eb600; body size 81 bytes.
#line 1 "ENTRY_101eb600"

int * __thiscall Recovered_Bulk::FUN_101eb600(int *param_2)
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


// Reference entry 101eb6d0; body size 81 bytes.
#line 1 "ENTRY_101eb6d0"

int * __thiscall Recovered_Bulk::FUN_101eb6d0(int *param_2)
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


// Reference entry 101eb7a0; body size 81 bytes.
#line 1 "ENTRY_101eb7a0"

int * __thiscall Recovered_Bulk::FUN_101eb7a0(int *param_2)
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


// Reference entry 101ebce0; body size 106 bytes.
#line 1 "ENTRY_101ebce0"

undefined4 * __thiscall Recovered_Bulk::FUN_101ebce0(byte param_2)
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


// Reference entry 101ebd70; body size 106 bytes.
#line 1 "ENTRY_101ebd70"

undefined4 * __thiscall Recovered_Bulk::FUN_101ebd70(byte param_2)
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


// Reference entry 101ec0c0; body size 104 bytes.
#line 1 "ENTRY_101ec0c0"

void __thiscall Recovered_Bulk::FUN_101ec0c0(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_101e8670(*param_1,param_1[1],param_1);
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


// Reference entry 101ec150; body size 104 bytes.
#line 1 "ENTRY_101ec150"

void __thiscall Recovered_Bulk::FUN_101ec150(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_101e8710(*param_1,param_1[1],param_1);
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


// Reference entry 101ec4a0; body size 96 bytes.
#line 1 "ENTRY_101ec4a0"

void __fastcall FUN_101ec4a0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_101e8670(*param_1,param_1[1],param_1);
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


// Reference entry 101ec520; body size 96 bytes.
#line 1 "ENTRY_101ec520"

void __fastcall FUN_101ec520(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_101e8710(*param_1,param_1[1],param_1);
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


// Reference entry 101ec940; body size 87 bytes.
#line 1 "ENTRY_101ec940"

void * FUN_101ec940(uint param_1)

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


// Reference entry 101ec9b0; body size 87 bytes.
#line 1 "ENTRY_101ec9b0"

void * FUN_101ec9b0(uint param_1)

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


// Reference entry 101ee0c0; body size 206 bytes.
#line 1 "ENTRY_101ee0c0"

void __thiscall Recovered_Bulk::FUN_101ee0c0(undefined4 *param_2,int *param_3)
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


// Reference entry 101ee1d0; body size 206 bytes.
#line 1 "ENTRY_101ee1d0"

void __thiscall Recovered_Bulk::FUN_101ee1d0(undefined4 *param_2,int *param_3)
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


// Reference entry 101ee590; body size 99 bytes.
#line 1 "ENTRY_101ee590"

undefined4 * __thiscall Recovered_Bulk::FUN_101ee590(undefined4 *param_2,int *param_3)
{
  int *param_1 = (int *)this;
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x28))(&param_3,param_3,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_2 = (undefined4)(uVar1);

  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 101f0850; body size 96 bytes.
#line 1 "ENTRY_101f0850"

undefined4 FUN_101f0850(undefined4 param_1,undefined4 param_2)

{
 try {
  uint uVar1;
  undefined1 local_34 [36];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_101e6900(param_2);

  thunk_FUN_101ee670(param_1,local_34,uVar1);
  thunk_FUN_10120220();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 101f0dc0; body size 98 bytes.
#line 1 "ENTRY_101f0dc0"

undefined4 FUN_101f0dc0(undefined4 param_1)

{
 try {
  uint uVar1;
  undefined1 local_34 [36];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_101e69d0("sonos:///settings");

  thunk_FUN_101ee670(param_1,local_34,uVar1);
  thunk_FUN_10120220();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 101f13e0; body size 451 bytes.
#line 1 "ENTRY_101f13e0"

undefined4 * __thiscall Recovered_Bulk::FUN_101f13e0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *local_30;
  int *local_2c;
  int local_28;
  int *local_24;
  int *local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;

  uVar4 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(0);
  param_2[1] = 0;
  param_2[2] = 0;
  iVar8 = (int)(0x38);

  if (*(int *)(param_1 + 0x84) < 1) {
    iVar8 = (int)(0x2c);
  }

  puVar9 = (undefined4 *)(*(undefined4 **)(iVar8 + param_1));
  local_28 = (int)(param_1);
  while( true ) {
    iVar8 = (int)(0x3c);
    if (*(int *)(local_28 + 0x84) < 1) {
      iVar8 = (int)(0x30);
    }
    if (puVar9 == *(undefined4 **)(iVar8 + local_28)) break;
    piVar1 = (int *)((int *)puVar9[1]);
    piVar10 = (int *)((int *)*puVar9);
    local_24 = (int *)(piVar10);
    local_18 = (undefined4 *)(puVar9);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(uVar4);
    }
    uVar7 = (uint)(0);


    iVar8 = (int)((**(code **)(*piVar10 + 0x18))());
    if (iVar8 != 0) {
      do {
        piVar5 = (int *)((int *)(**(code **)(*piVar10 + 0x28))(&local_20,uVar7));
        piVar10 = (int *)((int *)*piVar5);
        *(unsigned char *)((char *)&local_8 + 0) = 2;
        *piVar5 = (int)(0);
        local_30 = (int *)(piVar10);
        if (piVar10 == (int *)0x0) {
          piVar5 = (int *)((int *)0x0);
        }
        else {
          piVar5 = (int *)((int *)(**(code **)(*piVar10 + 0xc))());
        }
        *(unsigned char *)((char *)&local_8 + 0) = 5;
        local_2c = (int *)(piVar5);
        if (local_20 != (int *)0x0) {
          (**(code **)(*local_20 + 8))();
        }
        *(unsigned char *)((char *)&local_8 + 0) = 4;
        if ((piVar10 != (int *)0x0) && (cVar3 = thunk_FUN_1041cc10(), cVar3 != '\0')) {
          piVar2 = (int *)((int *)param_2[1]);
          if (piVar2 == (int *)param_2[2]) {
            thunk_FUN_101e8900(piVar2,&local_30);
          }
          else {
            *piVar2 = (int)((int)piVar10);
            piVar2[1] = (int)piVar5;
            if (piVar5 != (int *)0x0) {
              (**(code **)(*piVar5 + 4))();
            }
            param_2[1] = param_2[1] + 8;
          }
        }
        *(unsigned char *)((char *)&local_8 + 0) = 6;
        if (piVar5 != (int *)0x0) {
          local_30 = (int *)((int *)0x0);
          local_2c = (int *)((int *)0x0);
          (**(code **)(*piVar5 + 8))();
        }
        piVar10 = (int *)(local_24);
        uVar7 = (uint)(local_14 + 1);
        local_8 = (uint)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
        local_14 = (uint)(uVar7);
        uVar6 = (uint)((**(code **)(*local_24 + 0x18))());
        puVar9 = (undefined4 *)(local_18);
      } while (uVar7 < uVar6);
    }

    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
    puVar9 = (undefined4 *)(puVar9 + 2);
    local_8 = (uint)(local_8 & 0xffffff00);
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 101f1740; body size 322 bytes.
#line 1 "ENTRY_101f1740"

undefined4 * __thiscall Recovered_Bulk::FUN_101f1740(undefined4 *param_2,int *param_3,int *param_4)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)(*(int **)(param_1 + 4));
  if (piVar1 == *(int **)(param_1 + 8)) {
    uVar5 = (undefined4)(thunk_FUN_101e8ca0(param_3,param_4));
    *param_2 = (undefined4)(uVar5);

    return (undefined4 *)(param_2);
  }
  iVar2 = (int)(*param_4);
  if ((int *)(param_3) != piVar1) {
    piVar3 = (int *)((int *)param_4[1]);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(DAT_12126b84 );
    }
    *piVar1 = (int)(piVar1[-2]);
    piVar4 = (int *)((int *)piVar1[-1]);

    piVar1[1] = (int)piVar4;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    thunk_FUN_101e8ef0(param_3,piVar1 + -2,piVar1);
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

    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
    *param_2 = (undefined4)(param_3);

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

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 101f18e0; body size 322 bytes.
#line 1 "ENTRY_101f18e0"

undefined4 * __thiscall Recovered_Bulk::FUN_101f18e0(undefined4 *param_2,int *param_3,int *param_4)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)(*(int **)(param_1 + 4));
  if (piVar1 == *(int **)(param_1 + 8)) {
    uVar5 = (undefined4)(thunk_FUN_101e8b00(param_3,param_4));
    *param_2 = (undefined4)(uVar5);

    return (undefined4 *)(param_2);
  }
  iVar2 = (int)(*param_4);
  if ((int *)(param_3) != piVar1) {
    piVar3 = (int *)((int *)param_4[1]);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(DAT_12126b84 );
    }
    *piVar1 = (int)(piVar1[-2]);
    piVar4 = (int *)((int *)piVar1[-1]);

    piVar1[1] = (int)piVar4;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    thunk_FUN_101e8ef0(param_3,piVar1 + -2,piVar1);
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

    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
    *param_2 = (undefined4)(param_3);

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

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 101f31c0; body size 172 bytes.
#line 1 "ENTRY_101f31c0"

void __thiscall Recovered_Bulk::FUN_101f31c0(int param_2,int param_3,undefined1 param_4)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)(operator_new(0x14));
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar2[2] = param_2;
    piVar2[3] = param_3;
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCRequireTokenActionDescriptor);
    *(undefined1 *)(piVar2 + 4) = param_4;
  }
  if (piVar2 != *(int **)(param_1 + 0x7c)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x80));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x7c) = 0;
      *(undefined4 *)(param_1 + 0x80) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0x7c) = piVar2;
    if (piVar2 != (int *)0x0) {
      if (*(code **)(*piVar2 + 0xc) != thunk_FUN_101da390) {
        piVar2 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
      }
      *(int **)(param_1 + 0x80) = piVar2;
      (**(code **)(*piVar2 + 4))();
      return;
    }
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  return;
}


// Reference entry 101f34a0; body size 89 bytes.
#line 1 "ENTRY_101f34a0"

int __fastcall FUN_101f34a0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = (int)(0);
  iVar2 = (int)(0x38);
  if (*(int *)(param_1 + 0x84) < 1) {
    iVar2 = (int)(0x2c);
  }
  puVar3 = (undefined4 *)(*(undefined4 **)(iVar2 + param_1));
  while( true ) {
    iVar2 = (int)(0x3c);
    if (*(int *)(param_1 + 0x84) < 1) {
      iVar2 = (int)(0x30);
    }
    if (puVar3 == *(undefined4 **)(iVar2 + param_1)) break;
    iVar2 = (int)((**(code **)(*(int *)*puVar3 + 0x18))());
    iVar1 = (int)(iVar1 + iVar2);
    puVar3 = (undefined4 *)(puVar3 + 2);
  }
  return (int)(iVar1);
}


// Reference entry 101f3520; body size 174 bytes.
#line 1 "ENTRY_101f3520"

void __thiscall Recovered_Bulk::FUN_101f3520(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  if (param_2 != (int *)0x0) {
    thunk_FUN_103d61d0(param_2,0);
    iVar2 = (int)(thunk_FUN_103d63b0(uVar1));
    if (iVar2 == 1) {
      uVar1 = (uint)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 10));
      thunk_FUN_10288040(uVar1);
      thunk_FUN_1028a700(uVar1);
      puVar4 = (undefined4 *)(&param_2);
      thunk_FUN_10288040(puVar4);
      piVar3 = (int *)((int *)thunk_FUN_102878a0(puVar4));
      iVar2 = (int)(*piVar3);

      if (param_2 != (int *)0x0) {
        (**(code **)(*param_2 + 8))();
      }

      if (iVar2 == 0) {
        thunk_FUN_101f3880();
        (**(code **)(*param_1 + 0x58))();
      }
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 101f3630; body size 157 bytes.
#line 1 "ENTRY_101f3630"

void __thiscall Recovered_Bulk::FUN_101f3630(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  if (param_2 != (int *)0x0) {
    thunk_FUN_103d6930(param_2);
    if (param_1[4] == 0) {
      piVar3 = (int *)(param_1 + 10);
      thunk_FUN_10288040(piVar3,uVar2);
      thunk_FUN_1028b250(piVar3);
      puVar4 = (undefined4 *)(&param_2);
      thunk_FUN_10288040(puVar4);
      piVar3 = (int *)((int *)thunk_FUN_102878a0(puVar4));
      iVar1 = (int)(*piVar3);

      if (param_2 != (int *)0x0) {
        (**(code **)(*param_2 + 8))();
      }

      if (iVar1 == 0) {
        thunk_FUN_101f3880();
        (**(code **)(*param_1 + 0x5c))();
      }
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 101f3880; body size 308 bytes.
#line 1 "ENTRY_101f3880"

void __fastcall FUN_101f3880(int param_1)

{
 try {
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int **ppiVar6;
  undefined1 local_2c [12];
  int *local_20;
  int *local_1c;
  int *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  local_18 = (int *)((int *)0x0);
  piVar4 = (int *)((int *)thunk_FUN_101f13e0(local_2c));
  iVar1 = (int)(piVar4[1]);
  iVar2 = (int)(*piVar4);
  thunk_FUN_101ec4a0(uVar3);
  piVar4 = (int *)(local_18);
  if ((*(int *)(param_1 + 0x10) != 0) && (iVar1 - iVar2 >> 3 != 0)) {
    ppiVar6 = (int **)(&local_18);
    thunk_FUN_10288040(ppiVar6);
    piVar5 = (int *)((int *)thunk_FUN_102878a0(ppiVar6));
    piVar4 = (int *)((int *)0x1);
    if (*piVar5 == 0) {
      local_11 = (char)('\x01');
      goto LAB_101f38fa;
    }
  }
  local_11 = (char)('\0');
LAB_101f38fa:
  if (((uint)piVar4 & 1) != 0) {

    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }

  }
  piVar5 = (int *)((int *)thunk_FUN_10292cf0(&local_20));
  piVar4 = (int *)((int *)*piVar5);

  *piVar5 = (int)(0);
  local_1c = (int *)(piVar4);
  if (piVar4 == (int *)0x0) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    piVar5 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  local_18 = (int *)(piVar5);
  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  if ((*(char *)(param_1 + 0x8b) != local_11) && (piVar4 != (int *)0x0)) {
    if (local_11 == '\0') {
      (**(code **)(*piVar4 + 0x50))(*(undefined4 *)(param_1 + 0x44));
      *(undefined1 *)(param_1 + 0x8b) = 0;
    }
    else {
      (**(code **)(*piVar4 + 0x4c))();
      *(undefined1 *)(param_1 + 0x8b) = 1;
    }
  }

  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 101f3db0; body size 91 bytes.
#line 1 "ENTRY_101f3db0"

int * __thiscall Recovered_Bulk::FUN_101f3db0(int *param_2)
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


// Reference entry 101f4060; body size 111 bytes.
#line 1 "ENTRY_101f4060"

void FUN_101f4060(undefined4 *param_1,undefined4 *param_2)

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


// Reference entry 101f43f0; body size 84 bytes.
#line 1 "ENTRY_101f43f0"

void FUN_101f43f0(undefined4 param_1,undefined4 *param_2)

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


// Reference entry 101f4770; body size 76 bytes.
#line 1 "ENTRY_101f4770"

void __fastcall FUN_101f4770(undefined4 *param_1)

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


// Reference entry 101f47e0; body size 68 bytes.
#line 1 "ENTRY_101f47e0"

void __fastcall FUN_101f47e0(int *param_1)

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


// Reference entry 101f4930; body size 187 bytes.
#line 1 "ENTRY_101f4930"

void __fastcall FUN_101f4930(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)((undefined4 *)param_1[1]);
    if (puVar3 != (undefined4 *)(puVar4)) {
      do {
        piVar1 = (int *)((int *)puVar3[1]);

        if (piVar1 != (int *)0x0) {
          *puVar3 = (undefined4)(0);
          puVar3[1] = 0;
          (**(code **)(*piVar1 + 8))(uVar2);
        }
        puVar3 = (undefined4 *)(puVar3 + 2);
      } while (puVar3 != (undefined4 *)(puVar4));
      puVar3 = (undefined4 *)((undefined4 *)*param_1);
    }

    uVar2 = (uint)(param_1[2] - (int)puVar3 & 0xfffffff8);
    puVar4 = (undefined4 *)(puVar3);
    if (0xfff < uVar2) {
      puVar4 = (undefined4 *)((undefined4 *)puVar3[-1]);
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (uint)((int)puVar3 + (-4 - (int)puVar4))) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(puVar4,uVar2);
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    param_1[2] = 0;
  }

  return;

 } catch (...) { }
}


// Reference entry 101f4a30; body size 187 bytes.
#line 1 "ENTRY_101f4a30"

void __fastcall FUN_101f4a30(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)((undefined4 *)param_1[1]);
    if (puVar3 != (undefined4 *)(puVar4)) {
      do {
        piVar1 = (int *)((int *)puVar3[1]);

        if (piVar1 != (int *)0x0) {
          *puVar3 = (undefined4)(0);
          puVar3[1] = 0;
          (**(code **)(*piVar1 + 8))(uVar2);
        }
        puVar3 = (undefined4 *)(puVar3 + 2);
      } while (puVar3 != (undefined4 *)(puVar4));
      puVar3 = (undefined4 *)((undefined4 *)*param_1);
    }

    uVar2 = (uint)(param_1[2] - (int)puVar3 & 0xfffffff8);
    puVar4 = (undefined4 *)(puVar3);
    if (0xfff < uVar2) {
      puVar4 = (undefined4 *)((undefined4 *)puVar3[-1]);
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (uint)((int)puVar3 + (-4 - (int)puVar4))) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(puVar4,uVar2);
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    param_1[2] = 0;
  }

  return;

 } catch (...) { }
}


// Reference entry 101f4c70; body size 81 bytes.
#line 1 "ENTRY_101f4c70"

int * __thiscall Recovered_Bulk::FUN_101f4c70(int *param_2)
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


// Reference entry 101f4ce0; body size 81 bytes.
#line 1 "ENTRY_101f4ce0"

int * __thiscall Recovered_Bulk::FUN_101f4ce0(int *param_2)
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


// Reference entry 101f5060; body size 106 bytes.
#line 1 "ENTRY_101f5060"

undefined4 * __thiscall Recovered_Bulk::FUN_101f5060(byte param_2)
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


// Reference entry 101f5180; body size 177 bytes.
#line 1 "ENTRY_101f5180"

undefined4 * __thiscall Recovered_Bulk::FUN_101f5180(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAppReporting);

  ((SCStr *)((SCStr *)(param_1 + 6)))->int_release();
  param_1[6] = 0;

  ((SCStr *)((SCStr *)(param_1 + 5)))->int_release();
  param_1[5] = 0;
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
    thunk_FUN_1148a50e(param_1,0x20);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101f52b0; body size 113 bytes.
#line 1 "ENTRY_101f52b0"

void __stdcall FUN_101f52b0(undefined4 *param_1,undefined4 *param_2)

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


// Reference entry 101f53d0; body size 187 bytes.
#line 1 "ENTRY_101f53d0"

void __fastcall FUN_101f53d0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)((undefined4 *)param_1[1]);
    if (puVar3 != (undefined4 *)(puVar4)) {
      do {
        piVar1 = (int *)((int *)puVar3[1]);

        if (piVar1 != (int *)0x0) {
          *puVar3 = (undefined4)(0);
          puVar3[1] = 0;
          (**(code **)(*piVar1 + 8))(uVar2);
        }
        puVar3 = (undefined4 *)(puVar3 + 2);
      } while (puVar3 != (undefined4 *)(puVar4));
      puVar3 = (undefined4 *)((undefined4 *)*param_1);
    }

    uVar2 = (uint)(param_1[2] - (int)puVar3 & 0xfffffff8);
    puVar4 = (undefined4 *)(puVar3);
    if (0xfff < uVar2) {
      puVar4 = (undefined4 *)((undefined4 *)puVar3[-1]);
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (uint)((int)puVar3 + (-4 - (int)puVar4))) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(puVar4,uVar2);
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    param_1[2] = 0;
  }

  return;

 } catch (...) { }
}


// Reference entry 101f5640; body size 989 bytes.
#line 1 "ENTRY_101f5640"

void __thiscall Recovered_Bulk::FUN_101f5640(SCStr *param_2)
{
  int param_1 = (int )this;
 try {
  char cVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  SCStr *pSVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  bool bVar13;
  char *pcVar14;
  int *local_58;
  int *local_54;
  int *local_4c;
  int *local_48;
  int local_44;
  int *local_3c;
  int *local_38 [2];
  int local_30;
  int *local_2c;
  int local_28;
  int *local_24;
  undefined4 local_20;
  int *local_1c;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (*(char *)(param_1 + 0x1c) != '\0') {
    local_28 = (int)(param_1);
    uVar4 = (undefined4)(thunk_FUN_1037a2b0(&local_1c,DAT_12126b84 ));

    thunk_FUN_101bf370(uVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    thunk_FUN_1037ddd0(&local_58,0);
    piVar10 = (int *)((int *)0x0);


    local_2c = (int *)((int *)0x0);
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    thunk_FUN_10309390(local_38);
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    piVar12 = (int *)((int *)*local_38[0]);
    bVar13 = (bool)(piVar12 == (int *)(local_38)[0]);
    while (!bVar13) {
      bVar13 = (bool)(((SCStr *)(param_2))->isNotEmpty());
      if ((bVar13) && (bVar13 = ((SCStr *)(param_2))->op_eq((SCStr *)(piVar12 + 4)), bVar13)) {
        thunk_FUN_11249230("statusAtDisplayExit","Hidden");
      }
      else {
        iVar7 = (int)(local_18);
        piVar8 = (int *)(local_58);
        if (local_58 != (int *)(local_54)) {
          do {
            iVar6 = (int)(*piVar8);
            if (iVar6 != iVar7) {
              if (piVar10 != (int *)0x0) {

                local_2c = (int *)((int *)0x0);
                local_18 = (int)(iVar6);
                (**(code **)(*piVar10 + 8))();
                iVar6 = (int)(*piVar8);
              }
              piVar10 = (int *)((int *)piVar8[1]);
              iVar7 = (int)(iVar6);
              local_30 = (int)(iVar6);
              local_2c = (int *)(piVar10);
              local_18 = (int)(iVar6);
              if (piVar10 != (int *)0x0) {
                (**(code **)(*piVar10 + 4))();
                iVar7 = (int)(local_18);
              }
            }
            if (iVar7 != 0) {
              pSVar5 = (SCStr *)((SCStr *)thunk_FUN_10320760(&local_1c));
              *(unsigned char *)((char *)&local_8 + 0) = 7;
              local_11 = (char)(((SCStr *)(pSVar5))->op_eq((SCStr *)(piVar12 + 4)));
              *(unsigned char *)((char *)&local_8 + 0) = 8;
              ((SCStr *)((SCStr *)&local_1c))->int_release();
              local_1c = (int *)((int *)0x0);
              *(unsigned char *)((char *)&local_8 + 0) = 6;
              uVar3 = (undefined1)((undefined1)local_8);
              *(unsigned char *)((char *)&local_8 + 0) = 6;
              iVar7 = (int)(local_18);
              if (local_11 != '\0') {
                *(unsigned char *)((char *)&local_8 + 0) = uVar3;
                thunk_FUN_11249230("statusAtDisplayExit","Offline");
                goto LAB_101f591d;
              }
            }
            piVar8 = (int *)(piVar8 + 2);
          } while (piVar8 != (int *)(local_54));
        }
        thunk_FUN_1037f130(&local_4c,9);
        *(unsigned char *)((char *)&local_8 + 0) = 9;
        iVar7 = (int)(local_18);
        piVar8 = (int *)(local_4c);
        if (local_4c != (int *)(local_48)) {
          do {
            iVar6 = (int)(*piVar8);
            if (iVar6 != iVar7) {
              if (piVar10 != (int *)0x0) {

                local_2c = (int *)((int *)0x0);
                local_18 = (int)(iVar6);
                (**(code **)(*piVar10 + 8))();
                iVar6 = (int)(*piVar8);
              }
              piVar10 = (int *)((int *)piVar8[1]);
              iVar7 = (int)(iVar6);
              local_30 = (int)(iVar6);
              local_2c = (int *)(piVar10);
              local_18 = (int)(iVar6);
              if (piVar10 != (int *)0x0) {
                (**(code **)(*piVar10 + 4))();
                iVar7 = (int)(local_18);
              }
            }
            if (iVar7 != 0) {
              pSVar5 = (SCStr *)((SCStr *)thunk_FUN_10320760(&local_20));
              *(unsigned char *)((char *)&local_8 + 0) = 10;
              local_11 = (char)(((SCStr *)(pSVar5))->op_eq((SCStr *)(piVar12 + 4)));
              *(unsigned char *)((char *)&local_8 + 0) = 0xb;
              ((SCStr *)((SCStr *)&local_20))->int_release();

              *(unsigned char *)((char *)&local_8 + 0) = 9;
              iVar7 = (int)(local_18);
              if (local_11 != '\0') {
                pcVar14 = (char *)("Online");
                goto LAB_101f5876;
              }
            }
            piVar8 = (int *)(piVar8 + 2);
          } while (piVar8 != (int *)(local_48));
        }
        pcVar14 = (char *)("Gone");
LAB_101f5876:
        thunk_FUN_11249230("statusAtDisplayExit",pcVar14);
        *(unsigned char *)((char *)&local_8 + 0) = 6;
        if (local_4c != (int *)0x0) {
          local_24 = (int *)(local_48);
          piVar8 = (int *)(local_48);
          piVar11 = (int *)(local_4c);
          if (local_4c != (int *)(local_48)) {
            do {
              piVar2 = (int *)((int *)piVar11[1]);
              *(unsigned char *)((char *)&local_8 + 0) = 0xc;
              if (piVar2 != (int *)0x0) {
                *piVar11 = (int)(0);
                piVar11[1] = 0;
                (**(code **)(*piVar2 + 8))();
                piVar8 = (int *)(local_24);
              }
              piVar11 = (int *)(piVar11 + 2);
            } while ((int *)(piVar11) != piVar8);
          }
          *(unsigned char *)((char *)&local_8 + 0) = 6;
          uVar9 = (uint)((local_44 - (int)local_4c >> 3) * 8);
          piVar8 = (int *)(local_4c);
          if (0xfff < uVar9) {
            piVar8 = (int *)((int *)local_4c[-1]);
            uVar9 = (uint)(uVar9 + 0x23);
            if (0x1f < (uint)((int)local_4c + (-4 - (int)piVar8))) goto LAB_101f599a;
          }
          thunk_FUN_1148a50e(piVar8,uVar9);
          local_4c = (int *)((int *)0x0);
          local_48 = (int *)((int *)0x0);

        }
      }
LAB_101f591d:
      thunk_FUN_10309ff0("persistentDevices","pdDevices",piVar12 + 5);
      piVar8 = (int *)((int *)piVar12[2]);
      if (*(char *)((int)piVar8 + 0xd) == '\0') {
        cVar1 = (char)(*(char *)(*piVar8 + 0xd));
        piVar12 = (int *)(piVar8);
        piVar8 = (int *)((int *)*piVar8);
        while (cVar1 == '\0') {
          cVar1 = (char)(*(char *)(*piVar8 + 0xd));
          piVar12 = (int *)(piVar8);
          piVar8 = (int *)((int *)*piVar8);
        }
        bVar13 = (bool)(piVar12 == (int *)(local_38)[0]);
      }
      else {
        cVar1 = (char)(*(char *)(piVar12[1] + 0xd));
        piVar11 = (int *)((int *)piVar12[1]);
        piVar8 = (int *)(piVar12);
        while ((piVar12 = piVar11, cVar1 == '\0' && (piVar8 == (int *)piVar12[2]))) {
          cVar1 = (char)(*(char *)(piVar12[1] + 0xd));
          piVar11 = (int *)((int *)piVar12[1]);
          piVar8 = (int *)(piVar12);
        }
        bVar13 = (bool)(piVar12 == (int *)(local_38)[0]);
      }
    }
    thunk_FUN_10308dc0();
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    *(undefined1 *)(local_28 + 0x1c) = 0;
    thunk_FUN_101f4150(local_38,local_38[0][1]);
    if (0x1f < (uint)((int)local_38[0] + (-4 - local_38[0][-1]))) {
LAB_101f599a:
                    
      _invalid_parameter_noinfo_noreturn();
    }
    thunk_FUN_1148a50e(local_38[0][-1],0x104f);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xd)));
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 8))();
    }
    thunk_FUN_101f4a30();

    if (local_3c != (int *)0x0) {
      (**(code **)(*local_3c + 8))();
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 101f6390; body size 124 bytes.
#line 1 "ENTRY_101f6390"

void __thiscall Recovered_Bulk::FUN_101f6390(undefined1 *param_2)
{
  int *param_1 = (int *)this;
 try {
  undefined1 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  (**(code **)(*param_1 + 0x54))(&param_2,param_2,DAT_12126b84 );

  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(param_2);
  }
  thunk_FUN_10309e90(&DAT_11884fe8,"focus","viewId",puVar1,0);

  ((SCStr *)((SCStr *)&param_2))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 101f6450; body size 124 bytes.
#line 1 "ENTRY_101f6450"

int * FUN_101f6450(int *param_1)

{
 try {
  int *piVar1;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)thunk_FUN_101f6530(&local_18,DAT_12126b84 ));
  piVar1 = (int *)((int *)*piVar1);

  *param_1 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  piVar1 = (int *)(local_14);

  if (local_14 != (int *)0x0) {

    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 101f8170; body size 355 bytes.
#line 1 "ENTRY_101f8170"

void __thiscall Recovered_Bulk::FUN_101f8170(undefined4 param_2,SCStr *param_3,undefined4 param_4)
{
  int *param_1 = (int *)this;
 try {
  SCStr *pSVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_20 = (undefined1 *)((undefined1 *)0x0);
  local_14 = (undefined1 *)((undefined1 *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  (**(code **)(*param_1 + 0x54))(&param_3,param_3,DAT_12126b84 );
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_101f6bb0(&local_1c,param_4);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  pSVar1 = (SCStr *)((SCStr *)&DAT_1186d2ee);
  if (param_3 != (SCStr *)0x0) {
    pSVar1 = (SCStr *)(param_3);
  }
  ((SCStr *)(pSVar1))->format((char *)&local_14);
  thunk_FUN_101f66f0(&local_18,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  pSVar1 = (SCStr *)((SCStr *)&DAT_1186d2ee);
  if (param_3 != (SCStr *)0x0) {
    pSVar1 = (SCStr *)(param_3);
  }
  pcVar5 = (char *)("inter.%s");
  ((SCStr *)(pSVar1))->format((char *)&local_20);
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)(local_14);
  }
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (local_18 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)(local_18);
  }
  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_20 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_20);
  }
  thunk_FUN_10309e90(puVar4,"userInteraction",&DAT_1187b694,puVar2,"target",puVar3,0,pcVar5,pSVar1);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)((SCStr *)&local_18))->int_release();
  local_18 = (undefined1 *)((undefined1 *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_1c))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)((SCStr *)&param_3))->int_release();
  param_3 = (SCStr *)((SCStr *)0x0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined1 *)((undefined1 *)0x0);

  ((SCStr *)((SCStr *)&local_20))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 101f84c0; body size 103 bytes.
#line 1 "ENTRY_101f84c0"

undefined4 * __thiscall Recovered_Bulk::FUN_101f84c0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIAppReporting"));
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


// Reference entry 101f8630; body size 77 bytes.
#line 1 "ENTRY_101f8630"

void __thiscall Recovered_Bulk::FUN_101f8630(undefined4 *param_2,undefined4 *param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)((undefined1 *)*param_3);
  }
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)((undefined1 *)*param_2);
  }
  thunk_FUN_1030a0d0(puVar2,puVar1,param_4,0);
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x14))(param_2,param_3,param_4);
  }
  return;
}


// Reference entry 101f8690; body size 1915 bytes.
#line 1 "ENTRY_101f8690"

void __thiscall Recovered_Bulk::FUN_101f8690(undefined4 param_2)
{
  int *param_1 = (int *)this;
 try {
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  char *pcVar4;
  int *piVar5;
  SCLibrary *pSVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  SCStr *pSVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  int *piVar15;
  char *pcVar16;
  int **ppiVar17;
  uint *puVar18;
  int *local_d8c;
  int *local_d84;
  uint local_d74;
  int *local_d70;
  int *local_d6c;
  int *local_d68;
  int *local_d64;
  int *local_d60;
  int *local_d5c;
  undefined4 local_d58;
  int *local_d54;
  int *local_d50;
  undefined4 local_d4c;
  int *local_d48;
  int *local_d44;
  undefined4 local_d40;
  void *local_d3c;
  undefined1 *puStack_d38;
  undefined4 local_d34;
  char local_d30 [3300];
  char local_4c [68];
  uint local_8;
  
  pcVar16 = (char *)(local_d30);

  local_8 = (uint)(DAT_12126b84 ^ (uint)pcVar16);

  puVar18 = (uint *)(&local_d74);

  pcVar4 = (char *)(pcVar16);
  thunk_FUN_1109f7f0(pcVar16,puVar18,local_8);
  thunk_FUN_1109f140(pcVar4,puVar18);
  uVar14 = (uint)(0);
  if (local_d74 != 0) {
    do {
      if (uVar14 != 0) {
        ((SCStr *)((SCStr *)&local_d58))->append(",",1);
      }
      pcVar4 = (char *)(pcVar16);
      do {
        cVar1 = (char)(*pcVar4);
        pcVar4 = (char *)(pcVar4 + 1);
      } while (cVar1 != '\0');
      ((SCStr *)((SCStr *)&local_d58))->append(pcVar16,(int)pcVar4 - (int)(pcVar16 + 1));
      uVar14 = (uint)(uVar14 + 1);
      pcVar16 = (char *)(pcVar16 + 0x21);
    } while (uVar14 < local_d74);
  }
  piVar5 = (int *)((int *)createPropertyBag());
  piVar15 = (int *)((int *)*piVar5);
  *(unsigned char *)((char *)&local_d34 + 0) = 1;
  *piVar5 = (int)(0);
  local_d54 = (int *)(piVar15);
  if (piVar15 == (int *)0x0) {
    local_d8c = (int *)((int *)0x0);
  }
  else {
    local_d8c = (int *)((int *)(**(code **)(*piVar15 + 0xc))());
  }
  *(unsigned char *)((char *)&local_d34 + 0) = 4;
  if (local_d48 != (int *)0x0) {
    (**(code **)(*local_d48 + 8))();
  }
  *(unsigned char *)((char *)&local_d34 + 0) = 3;
  pSVar6 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar5 = (int *)((int *)0x0);
  local_d44 = (int *)((int *)0x0);
  if (pSVar6 != (SCLibrary *)0x0) {
    ((SCStr *)((SCStr *)&local_d40))->int_allocRep("SCINetworkManagement");
    *(unsigned char *)((char *)&local_d34 + 0) = 5;
    puVar7 = (undefined4 *)((undefined4 *)(*(code *)**(undefined4 **)pSVar6)(&local_d5c,&local_d40));
    piVar5 = (int *)((int *)*puVar7);
    *puVar7 = (undefined4)(0);
    *(unsigned char *)((char *)&local_d34 + 0) = 7;
    local_d44 = (int *)(piVar5);
    if (local_d5c != (int *)0x0) {
      (**(code **)(*local_d5c + 8))();
    }
    *(unsigned char *)((char *)&local_d34 + 0) = 8;
    ((SCStr *)((SCStr *)&local_d40))->int_release();

  }
  *(unsigned char *)((char *)&local_d34 + 0) = 9;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0x3c))(piVar15,0);
  }
  pSVar6 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar8 = (int *)((int *)(**(code **)(*(int *)pSVar6 + 0x90))(&local_d6c));
  piVar9 = (int *)((int *)*piVar8);
  *(unsigned char *)((char *)&local_d34 + 0) = 10;
  *piVar8 = (int)(0);
  if (piVar9 == (int *)0x0) {
    local_d84 = (int *)((int *)0x0);
  }
  else {
    local_d84 = (int *)((int *)(**(code **)(*piVar9 + 0xc))());
  }
  *(unsigned char *)((char *)&local_d34 + 0) = 0xd;
  if (local_d6c != (int *)0x0) {
    (**(code **)(*local_d6c + 8))();
  }
  *(unsigned char *)((char *)&local_d34 + 0) = 0xc;
  if (piVar9 != (int *)0x0) {
    (**(code **)(*piVar9 + 0x34))(piVar15);
  }
  ((SCStr *)((SCStr *)&local_d40))->int_allocRep("Starboy");
  pSVar11 = (SCStr *)((SCStr *)&local_d40);
  *(unsigned char *)((char *)&local_d34 + 0) = 0xe;
  pSVar6 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  bVar3 = (bool)(((SCLibParameters *)(*(SCLibParameters **)(pSVar6 + 0x4c)))->hasDeveloperOption(pSVar11));
  *(unsigned char *)((char *)&local_d34 + 0) = 0xf;
  ((SCStr *)((SCStr *)&local_d40))->int_release();
  *(unsigned char *)((char *)&local_d34 + 0) = 0xc;
  uVar2 = (undefined1)((undefined1)local_d34);
  *(unsigned char *)((char *)&local_d34 + 0) = 0xc;
  if (bVar3) {
    puVar7 = (undefined4 *)((undefined4 *)thunk_FUN_1023a9c0(&local_d5c));
    local_d68 = (int *)((int *)*puVar7);
    *(unsigned char *)((char *)&local_d34 + 0) = 0x10;
    *puVar7 = (undefined4)(0);
    local_d48 = (int *)(local_d68);
    if (local_d68 == (int *)0x0) {
      piVar9 = (int *)((int *)0x0);
    }
    else {
      piVar9 = (int *)((int *)(**(code **)(*local_d68 + 0xc))());
    }
    *(unsigned char *)((char *)&local_d34 + 0) = 0x13;
    local_d64 = (int *)(piVar9);
    if (local_d5c != (int *)0x0) {
      (**(code **)(*local_d5c + 8))();
    }
    *(unsigned char *)((char *)&local_d34 + 0) = 0x12;
    if (local_d48 != (int *)0x0) {
      thunk_FUN_10234b50(piVar15);
    }
    *(unsigned char *)((char *)&local_d34 + 0) = 0x14;
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 8))();
    }
LAB_101f8a29:
    *(unsigned char *)((char *)&local_d34 + 0) = 0xc;
    ((SCStr *)((SCStr *)&local_d48))->int_allocRep("ConnectTimeout");
    *(unsigned char *)((char *)&local_d34 + 0) = 0x29;
    ((SCStr *)((SCStr *)&local_d40))->int_allocRep("eventType");
    *(unsigned char *)((char *)&local_d34 + 0) = 0x2a;
    (**(code **)(*piVar15 + 0x1c))(&local_d40,&local_d48);
    *(unsigned char *)((char *)&local_d34 + 0) = 0x2b;
    ((SCStr *)((SCStr *)&local_d40))->int_release();

    *(unsigned char *)((char *)&local_d34 + 0) = 0x2c;
    ((SCStr *)((SCStr *)&local_d48))->int_release();
    *(unsigned char *)((char *)&local_d34 + 0) = 0xc;
    ((SCStr *)((SCStr *)&local_d48))->int_allocRep("hhids");
    *(unsigned char *)((char *)&local_d34 + 0) = 0x2d;
    (**(code **)(*piVar15 + 0x1c))(&local_d48,&local_d58);
    *(unsigned char *)((char *)&local_d34 + 0) = 0x2e;
    ((SCStr *)((SCStr *)&local_d48))->int_release();
    ppiVar17 = (int **)(&local_d50);
    *(unsigned char *)((char *)&local_d34 + 0) = 0xc;
    pSVar6 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    puVar7 = (undefined4 *)((undefined4 *)((SCLibrary *)(pSVar6))->getSCHousehold());
    piVar9 = (int *)((int *)*puVar7);
    *(unsigned char *)((char *)&local_d34 + 0) = 0x2f;
    *puVar7 = (undefined4)(0);
    local_d6c = (int *)(piVar9);
    local_d68 = (int *)(piVar9);
    if (piVar9 == (int *)0x0) {
      local_d64 = (int *)((int *)0x0);
    }
    else {
      local_d64 = (int *)((int *)(**(code **)(*piVar9 + 0xc))(ppiVar17));
    }
    *(unsigned char *)((char *)&local_d34 + 0) = 0x32;
    if (local_d50 != (int *)0x0) {
      (**(code **)(*local_d50 + 8))();
    }
    *(unsigned char *)((char *)&local_d34 + 0) = 0x31;
    piVar8 = (int *)((int *)(**(code **)(*piVar9 + 0x18))(&local_d70));
    piVar9 = (int *)((int *)*piVar8);
    *(unsigned char *)((char *)&local_d34 + 0) = 0x33;
    *piVar8 = (int)(0);
    local_d60 = (int *)(piVar9);
    if (piVar9 == (int *)0x0) {
      local_d5c = (int *)((int *)0x0);
    }
    else {
      local_d5c = (int *)((int *)(**(code **)(*piVar9 + 0xc))());
    }
    *(unsigned char *)((char *)&local_d34 + 0) = 0x36;
    if (local_d70 != (int *)0x0) {
      (**(code **)(*local_d70 + 8))();
    }

    local_d34 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_d34 + 1)) << 8 | (uint)(0x37)));
    iVar10 = (int)((**(code **)(*piVar9 + 0x14))());
    if (iVar10 != 0) {
      uVar14 = (uint)(0);
      do {
        if (uVar14 != 0) {
          ((SCStr *)((SCStr *)&local_d4c))->append(",",1);
        }
        pSVar11 = (SCStr *)((SCStr *)(**(code **)(*piVar9 + 0x1c))(&local_d48,uVar14));
        *(unsigned char *)((char *)&local_d34 + 0) = 0x38;
        pcVar16 = (char *)("");
        if (*(char **)pSVar11 != (char *)0x0) {
          pcVar16 = (char *)(*(char **)pSVar11);
        }
        uVar12 = (uint)(((SCStr *)(pSVar11))->length());
        ((SCStr *)((SCStr *)&local_d4c))->append(pcVar16,uVar12);
        *(unsigned char *)((char *)&local_d34 + 0) = 0x39;
        ((SCStr *)((SCStr *)&local_d48))->int_release();
        local_d48 = (int *)((int *)0x0);
        uVar14 = (uint)(uVar14 + 1);
        local_d34 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_d34 + 1)) << 8 | (uint)(0x37)));
        uVar12 = (uint)((**(code **)(*piVar9 + 0x14))());
        piVar15 = (int *)(local_d54);
        piVar5 = (int *)(local_d44);
      } while (uVar14 < uVar12);
    }
    ((SCStr *)((SCStr *)&local_d44))->int_allocRep("expectedHHIDs");
    *(unsigned char *)((char *)&local_d34 + 0) = 0x3a;
    (**(code **)(*piVar15 + 0x1c))(&local_d44,&local_d4c);
    *(unsigned char *)((char *)&local_d34 + 0) = 0x3b;
    ((SCStr *)((SCStr *)&local_d44))->int_release();
    *(unsigned char *)((char *)&local_d34 + 0) = 0x37;
    iVar10 = (int)((**(code **)(*(int *)local_d6c[0x32] + 100))());
    local_d50 = (int *)((int *)thunk_FUN_1109f7f0());
    local_d48 = (int *)((int *)0xffffffff);
    if (iVar10 == 0) {
      uVar13 = (undefined4)(0xffffffff);
    }
    else {
      local_d48 = (int *)((int *)thunk_FUN_11081140());
      uVar13 = (undefined4)(thunk_FUN_11081d90());
    }
    if (local_d50 != (int *)0x0) {
      thunk_FUN_1109f210(local_4c,0x41);
      ((SCStr *)((SCStr *)&local_d44))->int_allocRep(local_4c);
      *(unsigned char *)((char *)&local_d34 + 0) = 0x3c;
      ((SCStr *)((SCStr *)&local_d40))->int_allocRep("crIP");
      *(unsigned char *)((char *)&local_d34 + 0) = 0x3d;
      (**(code **)(*piVar15 + 0x1c))(&local_d40,&local_d44);
      *(unsigned char *)((char *)&local_d34 + 0) = 0x3e;
      ((SCStr *)((SCStr *)&local_d40))->int_release();

      *(unsigned char *)((char *)&local_d34 + 0) = 0x3f;
      ((SCStr *)((SCStr *)&local_d44))->int_release();
      *(unsigned char *)((char *)&local_d34 + 0) = 0x37;
    }
    ((SCStr *)((SCStr *)&local_d44))->int_allocRep("numDeviceDescriptionAttempts");
    *(unsigned char *)((char *)&local_d34 + 0) = 0x40;
    (**(code **)(*piVar15 + 0x28))(&local_d44,local_d48);
    *(unsigned char *)((char *)&local_d34 + 0) = 0x41;
    ((SCStr *)((SCStr *)&local_d44))->int_release();
    *(unsigned char *)((char *)&local_d34 + 0) = 0x37;
    ((SCStr *)((SCStr *)&local_d44))->int_allocRep("numReceivedMSearchNotifies");
    *(unsigned char *)((char *)&local_d34 + 0) = 0x42;
    (**(code **)(*piVar15 + 0x28))(&local_d44,uVar13);
    *(unsigned char *)((char *)&local_d34 + 0) = 0x43;
    ((SCStr *)((SCStr *)&local_d44))->int_release();
    *(unsigned char *)((char *)&local_d34 + 0) = 0x37;
    ((SCStr *)((SCStr *)&local_d44))->int_allocRep("wifiRSSI");
    *(unsigned char *)((char *)&local_d34 + 0) = 0x44;
    (**(code **)(*piVar15 + 0x1c))(&local_d44,param_2);
    *(unsigned char *)((char *)&local_d34 + 0) = 0x45;
    ((SCStr *)((SCStr *)&local_d44))->int_release();
    *(unsigned char *)((char *)&local_d34 + 0) = 0x37;
    ((SCStr *)((SCStr *)&local_d44))->int_allocRep("household");
    *(unsigned char *)((char *)&local_d34 + 0) = 0x46;
    ((SCStr *)((SCStr *)&local_d40))->int_allocRep("household");
    *(unsigned char *)((char *)&local_d34 + 0) = 0x47;
    (**(code **)(*param_1 + 0x18))(&local_d40,&local_d44,piVar15);
    *(unsigned char *)((char *)&local_d34 + 0) = 0x48;
    ((SCStr *)((SCStr *)&local_d40))->int_release();

    *(unsigned char *)((char *)&local_d34 + 0) = 0x49;
    ((SCStr *)((SCStr *)&local_d44))->int_release();
    *(unsigned char *)((char *)&local_d34 + 0) = 0x4a;
    ((SCStr *)((SCStr *)&local_d4c))->int_release();

    *(unsigned char *)((char *)&local_d34 + 0) = 0x4b;
    if (local_d5c != (int *)0x0) {
      (**(code **)(*local_d5c + 8))();
    }
    *(unsigned char *)((char *)&local_d34 + 0) = 0x4c;
    if (local_d64 == (int *)0x0) goto LAB_101f8da8;
    iVar10 = (int)(*local_d64);
  }
  else {
    ppiVar17 = (int **)(&local_d50);
    *(unsigned char *)((char *)&local_d34 + 0) = uVar2;
    pSVar6 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    puVar7 = (undefined4 *)((undefined4 *)((SCLibrary *)(pSVar6))->getSCHousehold());
    piVar15 = (int *)((int *)*puVar7);
    *(unsigned char *)((char *)&local_d34 + 0) = 0x15;
    *puVar7 = (undefined4)(0);
    local_d68 = (int *)(piVar15);
    if (piVar15 == (int *)0x0) {
      piVar9 = (int *)((int *)0x0);
    }
    else {
      piVar9 = (int *)((int *)(**(code **)(*piVar15 + 0xc))(ppiVar17));
    }
    *(unsigned char *)((char *)&local_d34 + 0) = 0x16;
    local_d64 = (int *)(piVar9);
    if (piVar15 == (int *)0x0) {
      piVar8 = (int *)((int *)0x0);
      local_d70 = (int *)((int *)0x0);
    }
    else {
      ((SCStr *)((SCStr *)&local_d40))->int_allocRep("SCIZoneGroupMgr");
      *(unsigned char *)((char *)&local_d34 + 0) = 0x17;
      puVar7 = (undefined4 *)((undefined4 *)(**(code **)*piVar15)(&local_d5c,&local_d40));
      piVar8 = (int *)((int *)*puVar7);
      *puVar7 = (undefined4)(0);
      *(unsigned char *)((char *)&local_d34 + 0) = 0x19;
      local_d70 = (int *)(piVar8);
      if (local_d5c != (int *)0x0) {
        (**(code **)(*local_d5c + 8))();
      }
      *(unsigned char *)((char *)&local_d34 + 0) = 0x1a;
      ((SCStr *)((SCStr *)&local_d40))->int_release();

    }
    *(unsigned char *)((char *)&local_d34 + 0) = 0x1b;
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 8))();
    }
    *(unsigned char *)((char *)&local_d34 + 0) = 0x1e;
    if (local_d50 != (int *)0x0) {
      (**(code **)(*local_d50 + 8))();
    }
    piVar15 = (int *)(local_d54);
    *(unsigned char *)((char *)&local_d34 + 0) = 0x1d;
    if (piVar8 == (int *)0x0) {
LAB_101f8a17:
      *(unsigned char *)((char *)&local_d34 + 0) = 0x28;
      piVar15 = (int *)(local_d54);
      if (piVar8 != (int *)0x0) {
        (**(code **)(*piVar8 + 8))();
        piVar15 = (int *)(local_d54);
      }
      goto LAB_101f8a29;
    }
    (**(code **)(*piVar8 + 0x58))(local_d54);
    ((SCStr *)((SCStr *)&local_d48))->int_allocRep("topologyState");
    *(unsigned char *)((char *)&local_d34 + 0) = 0x1f;
    pSVar11 = (SCStr *)((SCStr *)(**(code **)(*piVar15 + 0x18))(&local_d40,&local_d48));
    *(unsigned char *)((char *)&local_d34 + 0) = 0x20;
    bVar3 = (bool)(((SCStr *)(pSVar11))->op_eq("Playable"));
    *(unsigned char *)((char *)&local_d34 + 0) = 0x21;
    ((SCStr *)((SCStr *)&local_d40))->int_release();

    *(unsigned char *)((char *)&local_d34 + 0) = 0x22;
    ((SCStr *)((SCStr *)&local_d48))->int_release();
    if (!bVar3) goto LAB_101f8a17;
    iVar10 = (int)(*piVar8);
    *(unsigned char *)((char *)&local_d34 + 0) = 0x23;
  }
  (**(code **)(iVar10 + 8))();
LAB_101f8da8:
  *(unsigned char *)((char *)&local_d34 + 0) = 0x4d;
  if (local_d84 != (int *)0x0) {
    (**(code **)(*local_d84 + 8))();
  }
  *(unsigned char *)((char *)&local_d34 + 0) = 0x4e;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }
  local_d34 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_d34 + 1)) << 8 | (uint)(0x4f)));
  if (local_d8c != (int *)0x0) {
    (**(code **)(*local_d8c + 8))();
  }

  ((SCStr *)((SCStr *)&local_d58))->int_release();

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 101f9190; body size 80 bytes.
#line 1 "ENTRY_101f9190"

void __thiscall Recovered_Bulk::FUN_101f9190(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if (param_2 != *(int **)(param_1 + 8)) {
    piVar1 = (int *)(*(int **)(param_1 + 0xc));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 8) = param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0xc) = piVar1;
      (**(code **)(*piVar1 + 4))();
      return;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


// Reference entry 101f9400; body size 105 bytes.
#line 1 "ENTRY_101f9400"

void __thiscall Recovered_Bulk::FUN_101f9400(undefined4 param_2)
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
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("");

  (**(code **)(*param_1 + 0x34))(param_2,&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 101f96b0; body size 257 bytes.
#line 1 "ENTRY_101f96b0"

void __thiscall Recovered_Bulk::FUN_101f96b0(undefined1 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)
{
  int *param_1 = (int *)this;
 try {
  SCStr *this_;
  SCStr *this_00;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  (**(code **)(*param_1 + 0x54))(&local_18,param_2,DAT_12126b84 );
  local_14 = (undefined1 *)((undefined1 *)0x0);
  param_2 = (undefined1 *)((undefined1 *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  pcVar7 = (char *)("%dx%d");
  uVar8 = (undefined4)(param_3);
  uVar9 = (undefined4)(param_4);
  ((SCStr *)(this_))->format((char *)&local_14);
  pcVar4 = (char *)("(%d,%d)");
  uVar5 = (undefined4)(param_5);
  uVar6 = (undefined4)(param_6);
  ((SCStr *)(this_00))->format((char *)&param_2);
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (local_18 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)(local_18);
  }
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(param_2);
  }
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)(local_14);
  }
  thunk_FUN_10309e90(&DAT_11884fe8,"viewPropChange","windowSize",puVar3,"coord",puVar1,"viewId",
                     puVar2,0,pcVar4,uVar5,uVar6,pcVar7,uVar8,uVar9);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (undefined1 *)((undefined1 *)0x0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined1 *)((undefined1 *)0x0);

  ((SCStr *)((SCStr *)&local_18))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 101f9800; body size 107 bytes.
#line 1 "ENTRY_101f9800"

undefined4 * __thiscall Recovered_Bulk::FUN_101f9800(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[0xb] = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = uVar2;
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101f9a80; body size 121 bytes.
#line 1 "ENTRY_101f9a80"

undefined4 * FUN_101f9a80(int param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;

  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 101fa0a0; body size 93 bytes.
#line 1 "ENTRY_101fa0a0"

int __thiscall Recovered_Bulk::FUN_101fa0a0(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 101fa120; body size 87 bytes.
#line 1 "ENTRY_101fa120"

int __thiscall Recovered_Bulk::FUN_101fa120(int *param_2)
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


// Reference entry 101fa190; body size 93 bytes.
#line 1 "ENTRY_101fa190"

int __thiscall Recovered_Bulk::FUN_101fa190(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 101fa3e0; body size 236 bytes.
#line 1 "ENTRY_101fa3e0"

int __fastcall FUN_101fa3e0(undefined4 *param_1)

{
 try {
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


  uVar4 = (uint)(DAT_12126b84);

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

  if (piVar3 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    iVar5 = (int)((**(code **)(*piVar3 + 8))());
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return (int)(iVar5);

 } catch (...) { }
}


// Reference entry 101fa530; body size 76 bytes.
#line 1 "ENTRY_101fa530"

void __fastcall FUN_101fa530(undefined4 *param_1)

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


// Reference entry 101fa5a0; body size 76 bytes.
#line 1 "ENTRY_101fa5a0"

void __fastcall FUN_101fa5a0(undefined4 *param_1)

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


// Reference entry 101fa7e0; body size 73 bytes.
#line 1 "ENTRY_101fa7e0"

void __fastcall FUN_101fa7e0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAppSessionManager);
  piVar2 = (int *)((int *)param_1[0xb]);
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


// Reference entry 101fa950; body size 261 bytes.
#line 1 "ENTRY_101fa950"

undefined4 * __thiscall Recovered_Bulk::FUN_101fa950(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar4 = (uint)(DAT_12126b84);

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

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101fab70; body size 95 bytes.
#line 1 "ENTRY_101fab70"

undefined4 * __thiscall Recovered_Bulk::FUN_101fab70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAppSessionManager);
  piVar2 = (int *)((int *)param_1[0xb]);
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
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101fac20; body size 157 bytes.
#line 1 "ENTRY_101fac20"

SCStr * FUN_101fac20(SCStr *param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    ((SCStr *)(param_1))->int_allocRep("None");
    return (SCStr *)(param_1);
  case 1:
    ((SCStr *)(param_1))->int_allocRep("Launched");
    return (SCStr *)(param_1);
  case 2:
    ((SCStr *)(param_1))->int_allocRep("Foregrounded");
    return (SCStr *)(param_1);
  case 3:
    ((SCStr *)(param_1))->int_allocRep("Backgrounded");
    return (SCStr *)(param_1);
  case 4:
    ((SCStr *)(param_1))->int_allocRep("Suspending");
    return (SCStr *)(param_1);
  case 5:
    ((SCStr *)(param_1))->int_allocRep("Terminating");
    return (SCStr *)(param_1);
  default:
    ((SCStr *)(param_1))->int_allocRep("");
    return (SCStr *)(param_1);
  }
}


// Reference entry 101fad10; body size 181 bytes.
#line 1 "ENTRY_101fad10"

SCStr * FUN_101fad10(SCStr *param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    ((SCStr *)(param_1))->int_allocRep("My Sonos");
    return (SCStr *)(param_1);
  case 1:
    ((SCStr *)(param_1))->int_allocRep("Browse");
    return (SCStr *)(param_1);
  case 2:
    ((SCStr *)(param_1))->int_allocRep("System");
    return (SCStr *)(param_1);
  case 3:
    ((SCStr *)(param_1))->int_allocRep("Search");
    return (SCStr *)(param_1);
  case 4:
    ((SCStr *)(param_1))->int_allocRep("Settings");
    return (SCStr *)(param_1);
  case 5:
    ((SCStr *)(param_1))->int_allocRep("Now Playing");
    return (SCStr *)(param_1);
  case 6:
    ((SCStr *)(param_1))->int_allocRep("None");
    return (SCStr *)(param_1);
  default:
    ((SCStr *)(param_1))->int_allocRep("");
    return (SCStr *)(param_1);
  }
}


// Reference entry 101fae20; body size 124 bytes.
#line 1 "ENTRY_101fae20"

undefined4 * __fastcall FUN_101fae20(int param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;

  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x2c))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 101fb3c0; body size 125 bytes.
#line 1 "ENTRY_101fb3c0"

int __fastcall FUN_101fb3c0(int *param_1)

{
 try {
  bool bVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int *)(param_1);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x14))(&local_14,DAT_12126b84 ));
  if (((char *)*puVar2 == (char *)0x0) || (*(char *)*puVar2 == '\0')) {
    bVar1 = (bool)(true);
  }
  else {
    bVar1 = (bool)(false);
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();
  if (bVar1) {

    return (int)(0);
  }

  return (int)(param_1[2]);

 } catch (...) { }
}


// Reference entry 101fb480; body size 193 bytes.
#line 1 "ENTRY_101fb480"

int * FUN_101fb480(int *param_1)

{
 try {
  uint uVar1;
  SCLibrary *pSVar2;
  int *piVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar4 = (int *)((int *)0x0);
  if (pSVar2 != (SCLibrary *)0x0) {
    piVar4 = (int *)((int *)(**(code **)(*(int *)pSVar2 + 0xc))(uVar1));
    (**(code **)(*piVar4 + 4))();
  }

  if (pSVar2 == (SCLibrary *)0x0) {
    *param_1 = (int)(0);

  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*(int *)pSVar2 + 0x90))(&local_14));
    piVar3 = (int *)((int *)*piVar3);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    *param_1 = (int)((int)piVar3);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }

  }
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 101fb690; body size 103 bytes.
#line 1 "ENTRY_101fb690"

undefined4 * __thiscall Recovered_Bulk::FUN_101fb690(undefined4 *param_2,SCStr *param_3)
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


// Reference entry 101fb710; body size 103 bytes.
#line 1 "ENTRY_101fb710"

undefined4 * __thiscall Recovered_Bulk::FUN_101fb710(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIAppSessionManager"));
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


// Reference entry 101fc010; body size 243 bytes.
#line 1 "ENTRY_101fc010"

void __thiscall Recovered_Bulk::FUN_101fc010(int ***param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined4 *puVar2;
  undefined4 extraout_ECX;
  undefined4 uVar3;
  undefined4 uStack_38;
  char *pcStack_34;
  undefined4 *puStack_2c;
  int **ppiStack_28;
  uint uStack_24;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uStack_24 = (uint)(DAT_12126b84);

  ppiStack_28 = (int **)((int **)param_2);
  *(int ****)(param_1 + 0xc) = param_2;
  puStack_2c = (undefined4 *)(&param_2);
  thunk_FUN_101fad10();
  pcStack_34 = (char *)("Current tab is %s");

  thunk_FUN_112af4e0("session");

  ppiStack_28 = (int **)((int **)0x101fc079);
  ((SCStr *)((SCStr *)&param_2))->int_release();
  ppiStack_28 = (int **)(&local_14);

  puStack_2c = (undefined4 *)((undefined4 *)0x101fc089);
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_1024a960());
  piVar1 = (int *)((int *)*puVar2);
  puStack_2c = (undefined4 *)(*(undefined4 **)(param_1 + 0xc));

  pcStack_34 = (char *)((char *)0x101fc0a0);
  param_2 = (int ***)(&ppiStack_28);
  thunk_FUN_101fad10();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  pcStack_34 = (char *)((char *)0x101fc0b3);
  ((SCStr *)((SCStr *)&puStack_2c))->int_allocRep("app.tab");
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  (**(code **)(*piVar1 + 0x1c))();

  uVar3 = (undefined4)(0);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
    uVar3 = (undefined4)(extraout_ECX);
  }

  uStack_38 = (undefined4)(uVar3);
  pcStack_34 = (char *)((char *)param_1);
  ((SCStr *)((SCStr *)&uStack_38))->int_allocRep("SCIAppSessionManager:onTabChanged");
  thunk_FUN_103d63d0();

  return;

 } catch (...) { }
}


// Reference entry 101fc680; body size 91 bytes.
#line 1 "ENTRY_101fc680"

int * __thiscall Recovered_Bulk::FUN_101fc680(int *param_2)
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


// Reference entry 101fc720; body size 91 bytes.
#line 1 "ENTRY_101fc720"

int * __thiscall Recovered_Bulk::FUN_101fc720(int *param_2)
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


// Reference entry 101fc7a0; body size 91 bytes.
#line 1 "ENTRY_101fc7a0"

int * __thiscall Recovered_Bulk::FUN_101fc7a0(int *param_2)
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


// Reference entry 101fc820; body size 91 bytes.
#line 1 "ENTRY_101fc820"

int * __thiscall Recovered_Bulk::FUN_101fc820(int *param_2)
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


// Reference entry 101fc920; body size 91 bytes.
#line 1 "ENTRY_101fc920"

int * __thiscall Recovered_Bulk::FUN_101fc920(int *param_2)
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


// Reference entry 101fca00; body size 91 bytes.
#line 1 "ENTRY_101fca00"

int * __thiscall Recovered_Bulk::FUN_101fca00(int *param_2)
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


// Reference entry 101fca80; body size 91 bytes.
#line 1 "ENTRY_101fca80"

int * __thiscall Recovered_Bulk::FUN_101fca80(int *param_2)
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


// Reference entry 101fcb00; body size 170 bytes.
#line 1 "ENTRY_101fcb00"

int * __thiscall Recovered_Bulk::FUN_101fcb00(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar3 = (int *)(param_2);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (int)(0);
  if (*param_2 != 0) {
    local_14 = (int *)(param_1);
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCINowPlayingSource");

    piVar3 = (int *)((int *)(*(code *)**(undefined4 **)*piVar3)(&local_14,&param_2,uVar2));
    iVar1 = (int)(*piVar3);
    *piVar3 = (int)(0);
    piVar3 = (int *)((int *)*param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    if (piVar3 != (int *)0x0) {
      *param_1 = (int)(0);
      (**(code **)(*piVar3 + 8))();
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


// Reference entry 101fcbe0; body size 170 bytes.
#line 1 "ENTRY_101fcbe0"

int * __thiscall Recovered_Bulk::FUN_101fcbe0(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar3 = (int *)(param_2);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (int)(0);
  if (*param_2 != 0) {
    local_14 = (int *)(param_1);
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCINowPlayingTransport");

    piVar3 = (int *)((int *)(*(code *)**(undefined4 **)*piVar3)(&local_14,&param_2,uVar2));
    iVar1 = (int)(*piVar3);
    *piVar3 = (int)(0);
    piVar3 = (int *)((int *)*param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    if (piVar3 != (int *)0x0) {
      *param_1 = (int)(0);
      (**(code **)(*piVar3 + 8))();
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


// Reference entry 101fcd40; body size 91 bytes.
#line 1 "ENTRY_101fcd40"

int * __thiscall Recovered_Bulk::FUN_101fcd40(int *param_2)
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


// Reference entry 101fcdc0; body size 91 bytes.
#line 1 "ENTRY_101fcdc0"

int * __thiscall Recovered_Bulk::FUN_101fcdc0(int *param_2)
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


// Reference entry 101fce40; body size 91 bytes.
#line 1 "ENTRY_101fce40"

int * __thiscall Recovered_Bulk::FUN_101fce40(int *param_2)
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


// Reference entry 101fcec0; body size 171 bytes.
#line 1 "ENTRY_101fcec0"

int * __thiscall Recovered_Bulk::FUN_101fcec0(int *param_2)
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
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCINowPlaying");

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


// Reference entry 101fcfa0; body size 91 bytes.
#line 1 "ENTRY_101fcfa0"

int * __thiscall Recovered_Bulk::FUN_101fcfa0(int *param_2)
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


// Reference entry 101fd060; body size 91 bytes.
#line 1 "ENTRY_101fd060"

int * __thiscall Recovered_Bulk::FUN_101fd060(int *param_2)
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


// Reference entry 101fd0e0; body size 91 bytes.
#line 1 "ENTRY_101fd0e0"

int * __thiscall Recovered_Bulk::FUN_101fd0e0(int *param_2)
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


// Reference entry 101fd250; body size 78 bytes.
#line 1 "ENTRY_101fd250"

int * __thiscall Recovered_Bulk::FUN_101fd250(int *param_2)
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


// Reference entry 101fd3a0; body size 78 bytes.
#line 1 "ENTRY_101fd3a0"

int * __thiscall Recovered_Bulk::FUN_101fd3a0(int *param_2)
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


// Reference entry 101fd4f0; body size 188 bytes.
#line 1 "ENTRY_101fd4f0"

int * __thiscall Recovered_Bulk::FUN_101fd4f0(undefined4 *param_2)
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
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCINowPlaying");

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


// Reference entry 101fd650; body size 261 bytes.
#line 1 "ENTRY_101fd650"

int * FUN_101fd650(int *param_1,int *param_2)

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

  ((SCStr *)(local_14))->int_allocRep("SCIActionOnGroupDescriptor");

  piVar3 = (int *)((int *)(**(code **)(*param_2 + 0x20))(&local_18,local_14,uVar2));
  piVar1 = (int *)((int *)*piVar3);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar3 = (int)(0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)(local_14))->int_release();
  local_18 = (int *)((int *)0x0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *param_1 = (int)((int)piVar1);
  local_18 = (int *)(piVar3);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
  if (piVar3 == (int *)0x0) {

    return (int *)(param_1);
  }
  (**(code **)(*piVar3 + 8))();

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 101fd7b0; body size 286 bytes.
#line 1 "ENTRY_101fd7b0"

void __thiscall Recovered_Bulk::FUN_101fd7b0(int param_2,int param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = (uint)(param_3 - param_2 >> 2);
  iVar3 = (int)(*param_1);
  uVar1 = (uint)(param_1[1] - iVar3 >> 2);
  if (uVar4 <= uVar1) {
    iVar2 = (int)(iVar3 + uVar4 * 4);
    thunk_FUN_101fd960(param_2,param_3,iVar3);
    thunk_FUN_101fda20(iVar2,param_1[1],param_1);
    param_1[1] = iVar2;
    return;
  }
  uVar5 = (uint)(param_1[2] - iVar3 >> 2);
  if (uVar5 < uVar4) {
    if (0x3fffffff < uVar4) {
                    
      thunk_FUN_102072a0();
    }
    if (0x3fffffff - (uVar5 >> 1) < uVar5) {
      uVar5 = (uint)(0x3fffffff);
    }
    else {
      uVar5 = (uint)(uVar5 + (uVar5 >> 1));
      if (uVar5 < uVar4) {
        uVar5 = (uint)(uVar4);
      }
    }
    if (iVar3 != 0) {
      thunk_FUN_101fda20(iVar3,param_1[1],param_1);
      iVar3 = (int)(*param_1);
      uVar1 = (uint)(param_1[2] - iVar3 & 0xfffffffc);
      iVar2 = (int)(iVar3);
      if (0xfff < uVar1) {
        iVar2 = (int)(*(int *)(iVar3 + -4));
        uVar1 = (uint)(uVar1 + 0x23);
        if (0x1f < (iVar3 - iVar2) - 4U) {
                    
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1148a50e(iVar2,uVar1);
      *param_1 = (int)(0);
      param_1[1] = 0;
      param_1[2] = 0;
    }
    iVar3 = (int)(thunk_FUN_10207b10(uVar5));
    *param_1 = (int)(iVar3);
    uVar1 = (uint)(0);
    param_1[1] = iVar3;
    param_1[2] = iVar3 + uVar5 * 4;
  }
  iVar2 = (int)(param_2 + uVar1 * 4);
  thunk_FUN_101fd960(param_2,iVar2,iVar3);
  iVar3 = (int)(thunk_FUN_101fdfe0(iVar2,param_3,param_1[1],param_1));
  param_1[1] = iVar3;
  return;
}


// Reference entry 101fd960; body size 135 bytes.
#line 1 "ENTRY_101fd960"

int * FUN_101fd960(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (int *)(param_2)) {
    return (int *)(param_3);
  }
  do {
    if (param_1 != (int *)(param_3)) {
      iVar1 = (int)(*param_3);
      if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
         (iVar2 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)), iVar2 == 0)) {
        *(undefined4 *)(iVar1 + -8) = 0;
        *(undefined4 *)(iVar1 + -0xc) = 0;
        thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
        free((void *)(iVar1 + -0x10));
      }
      iVar1 = (int)(*param_1);
      *param_3 = (int)(iVar1);
      if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
        thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
      }
    }
    param_1 = (int *)(param_1 + 1);
    param_3 = (int *)(param_3 + 1);
  } while (param_1 != (int *)(param_2));
  return (int *)(param_3);
}


// Reference entry 101fda20; body size 143 bytes.
#line 1 "ENTRY_101fda20"

void FUN_101fda20(int *param_1,int *param_2)

{
 try {
  int iVar1;
  void **ppvVar2;
  uint uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);
  ppvVar2 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar2, param_1 != (int *)(param_2)); param_1 = param_1 + 1) {
    iVar1 = (int)(*param_1);

    if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
       (iVar4 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar3), iVar4 == 0)) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }

  }

  return;

 } catch (...) { }
}


// Reference entry 101fdb50; body size 184 bytes.
#line 1 "ENTRY_101fdb50"

undefined4 __thiscall Recovered_Bulk::FUN_101fdb50(undefined4 param_2,int *param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  char cVar1;
  int *piVar2;
  int iVar3;
  void **ppvVar4;
  uint uVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar5 = (uint)(DAT_12126b84);
  cVar1 = (char)(*(char *)((int)param_3 + 0xd));
  ppvVar4 = (void **)(&local_10);

  while (ExceptionList = ppvVar4, cVar1 == '\0') {
    thunk_FUN_101fdb50(param_2,param_3[2]);
    piVar2 = (int *)((int *)*param_3);
    iVar3 = (int)(param_3[4]);

    if (((iVar3 != 0) && (*(int *)(iVar3 + -0x10) < 0xffff)) &&
       (iVar6 = thunk_FUN_1123fcd0((void *)(iVar3 + -0x10),uVar5), iVar6 == 0)) {
      *(undefined4 *)(iVar3 + -8) = 0;
      *(undefined4 *)(iVar3 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar3,*(undefined4 *)(iVar3 + -4));
      free((void *)(iVar3 + -0x10));
    }

    thunk_FUN_1148a50e(param_3,0x18);

    param_3 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 101fdc90; body size 83 bytes.
#line 1 "ENTRY_101fdc90"

int * __thiscall Recovered_Bulk::FUN_101fdc90(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  
  iVar1 = (int)(*param_1);
  puVar3 = (undefined4 *)(*(undefined4 **)(iVar1 + 4));
  *param_2 = (int)((int)puVar3);
  cVar2 = (char)(*(char *)((int)puVar3 + 0xd));
  param_2[1] = 0;
  param_2[2] = iVar1;
  while (cVar2 == '\0') {
    *param_2 = (int)((int)puVar3);
    cVar2 = (char)(thunk_FUN_111a0940(param_3));
    if (cVar2 == '\0') {
      param_2[2] = (int)puVar3;
      puVar3 = (undefined4 *)((undefined4 *)*puVar3);
    }
    else {
      puVar3 = (undefined4 *)((undefined4 *)puVar3[2]);
    }
    param_2[1] = (uint)(cVar2 == '\0');
    cVar2 = (char)(*(char *)((int)puVar3 + 0xd));
  }
  return (int *)(param_2);
}


// Reference entry 101fdd20; body size 132 bytes.
#line 1 "ENTRY_101fdd20"

void FUN_101fdd20(undefined4 param_1,int param_2)

{
 try {
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  iVar1 = (int)(*(int *)(param_2 + 0x10));

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),DAT_12126b84 ));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  thunk_FUN_1148a50e(param_2,0x18);

  return;

 } catch (...) { }
}


// Reference entry 101fde60; body size 268 bytes.
#line 1 "ENTRY_101fde60"

int * __thiscall Recovered_Bulk::FUN_101fde60(int *param_2,int *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  thunk_FUN_101fdc90(&local_24,param_3);
  if (*(char *)(local_1c + 0xd) == '\0') {
    cVar2 = (char)(thunk_FUN_111a0940(local_1c + 0x10));
    if (cVar2 == '\0') {
      *param_2 = (int)(local_1c);
      *(undefined1 *)(param_2 + 1) = 0;

      return (int *)(param_2);
    }
  }
  if (param_1[1] != 0xaaaaaaa) {
    uVar1 = (undefined4)(*param_1);

    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_18 = (undefined4 *)(param_1);
    puVar4 = (undefined4 *)(operator_new(0x18));
    iVar5 = (int)(*param_3);

    puVar4[4] = iVar5;
    local_14 = (undefined4 *)(puVar4);
    if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
    }
    puVar4[5] = 0;
    *puVar4 = (undefined4)(uVar1);
    puVar4[1] = uVar1;
    puVar4[2] = uVar1;
    *(undefined2 *)(puVar4 + 3) = 0;
    iVar5 = (int)(thunk_FUN_10206e60(local_24,local_20,puVar4));
    *param_2 = (int)(iVar5);
    *(undefined1 *)(param_2 + 1) = 1;

    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar3);

 } catch (...) { }
}


// Reference entry 101fdfe0; body size 147 bytes.
#line 1 "ENTRY_101fdfe0"

int * FUN_101fdfe0(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
 try {
  int iVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);

  ppvVar2 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar2, param_1 != (int *)(param_2)); param_1 = param_1 + 1) {
    iVar1 = (int)(*param_1);
    *param_3 = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar3);
    }
    param_3 = (int *)(param_3 + 1);

  }
  thunk_FUN_101fda20(param_3,param_3,param_4);

  return (int *)(param_3);

 } catch (...) { }
}


// Reference entry 101fe3a0; body size 118 bytes.
#line 1 "ENTRY_101fe3a0"

void FUN_101fe3a0(undefined4 param_1,int *param_2)

{
 try {
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  iVar1 = (int)(*param_2);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),DAT_12126b84 ));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 101fe440; body size 118 bytes.
#line 1 "ENTRY_101fe440"

void FUN_101fe440(undefined4 param_1,int *param_2)

{
 try {
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  iVar1 = (int)(*param_2);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),DAT_12126b84 ));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 101feed0; body size 70 bytes.
#line 1 "ENTRY_101feed0"

undefined4 * __thiscall Recovered_Bulk::FUN_101feed0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  void *pvVar2;
  
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  pvVar2 = (void *)(operator_new(0x18));
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
  return (undefined4 *)(param_1);
}


// Reference entry 101ff140; body size 148 bytes.
#line 1 "ENTRY_101ff140"

int * __thiscall Recovered_Bulk::FUN_101ff140(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (int)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  iVar4 = (int)(*param_2);
  iVar1 = (int)(param_2[1]);
  if (iVar4 != iVar1) {
    iVar5 = (int)(iVar1 - iVar4 >> 2);
    iVar3 = (int)(thunk_FUN_10207b10(iVar5));
    *param_1 = (int)(iVar3);
    param_1[1] = iVar3;
    param_1[2] = iVar3 + iVar5 * 4;

    iVar4 = (int)(thunk_FUN_101fdfe0(iVar4,iVar1,iVar3,param_1,uVar2));
    param_1[1] = iVar4;
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 101ff2f0; body size 229 bytes.
#line 1 "ENTRY_101ff2f0"

undefined4 * __thiscall Recovered_Bulk::FUN_101ff2f0(int param_2,int param_3,int *param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int iVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RFavoriteHelper);
  thunk_FUN_101ff410(param_2);

  iVar1 = (int)(*param_4);
  param_1[0x28] = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  if (((param_3 != 0) && (*(char **)(param_3 + 0xc) != (char *)0x0)) &&
     (**(char **)(param_3 + 0xc) != '\0')) {
    thunk_FUN_10204c50(param_3);
    thunk_FUN_101ba530(param_2 + 0x10);
    thunk_FUN_1106f6e0();
    thunk_FUN_101ba530(param_2 + 0x14);
  }
  if (((char *)param_1[6] != (char *)0x0) && (*(char *)param_1[6] != '\0')) {
    thunk_FUN_101ba530(param_1 + 6);
    thunk_FUN_1106f6e0();
    thunk_FUN_1106fb60();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101ff410; body size 937 bytes.
#line 1 "ENTRY_101ff410"

int * __thiscall Recovered_Bulk::FUN_101ff410(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  iVar5 = (int)(*param_2);
  *param_1 = (int)(iVar5);
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10),uVar3);
  }
  iVar5 = (int)(param_2[1]);

  param_1[1] = iVar5;
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10),uVar3);
  }
  iVar5 = (int)(param_2[2]);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  param_1[2] = iVar5;
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10),uVar3);
  }
  iVar5 = (int)(param_2[3]);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  param_1[3] = iVar5;
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10),uVar3);
  }
  iVar5 = (int)(param_2[4]);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  param_1[4] = iVar5;
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10),uVar3);
  }
  iVar5 = (int)(param_2[5]);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  param_1[5] = iVar5;
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
  }
  iVar5 = (int)(param_2[6]);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  param_1[6] = iVar5;
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
  }
  iVar5 = (int)(param_2[7]);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  param_1[7] = iVar5;
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
  }
  iVar5 = (int)(param_2[8]);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  param_1[8] = iVar5;
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
  }
  iVar5 = (int)(param_2[9]);
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  param_1[9] = iVar5;
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
  }
  iVar5 = (int)(param_2[10]);
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  param_1[10] = iVar5;
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
  }
  iVar5 = (int)(param_2[0xb]);
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  param_1[0xb] = iVar5;
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
  }
  iVar5 = (int)(param_2[0xc]);
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  param_1[0xc] = iVar5;
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
  }
  iVar5 = (int)(param_2[0xd]);
  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  param_1[0xd] = iVar5;
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
  }
  iVar5 = (int)(param_2[0xe]);
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  param_1[0xe] = iVar5;
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
  }
  iVar5 = (int)(param_2[0xf]);
  *(unsigned char *)((char *)&local_8 + 0) = 0xe;
  param_1[0xf] = iVar5;
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
  }
  iVar5 = (int)(param_2[0x10]);
  *(unsigned char *)((char *)&local_8 + 0) = 0xf;
  param_1[0x10] = iVar5;
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
  }
  iVar5 = (int)(param_2[0x11]);
  *(unsigned char *)((char *)&local_8 + 0) = 0x10;
  param_1[0x11] = iVar5;
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
  }
  iVar5 = (int)(param_2[0x12]);
  *(unsigned char *)((char *)&local_8 + 0) = 0x11;
  param_1[0x12] = iVar5;
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
  }
  iVar5 = (int)(param_2[0x13]);
  *(unsigned char *)((char *)&local_8 + 0) = 0x12;
  param_1[0x13] = iVar5;
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
  }
  iVar5 = (int)(param_2[0x14]);
  *(unsigned char *)((char *)&local_8 + 0) = 0x13;
  param_1[0x14] = iVar5;
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
  }
  *(char *)(param_1 + 0x15) = (char)param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  iVar5 = (int)(param_2[0x18]);
  iVar2 = (int)(param_2[0x19]);
  *(unsigned char *)((char *)&local_8 + 0) = 0x14;
  if (iVar5 != iVar2) {
    iVar6 = (int)(iVar2 - iVar5 >> 2);
    iVar4 = (int)(thunk_FUN_10207b10(iVar6));
    piVar1 = (int *)(param_1 + 0x18);
    *piVar1 = (int)(iVar4);
    param_1[0x19] = iVar4;
    param_1[0x1a] = iVar4 + iVar6 * 4;
    *(unsigned char *)((char *)&local_8 + 0) = 0x15;
    iVar5 = (int)(thunk_FUN_101fdfe0(iVar5,iVar2,*piVar1,piVar1));
    param_1[0x19] = iVar5;
  }
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  *(char *)(param_1 + 0x1d) = (char)param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x16)));
  thunk_FUN_1124d740(param_2 + 0x1f);

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 101ff8b0; body size 288 bytes.
#line 1 "ENTRY_101ff8b0"

undefined4 * __fastcall FUN_101ff8b0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)(0);
  param_1[1] = 0;
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
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;

  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  thunk_FUN_1124d770(uVar1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10201980; body size 76 bytes.
#line 1 "ENTRY_10201980"

void __fastcall FUN_10201980(undefined4 *param_1)

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


// Reference entry 102019f0; body size 76 bytes.
#line 1 "ENTRY_102019f0"

void __fastcall FUN_102019f0(undefined4 *param_1)

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


// Reference entry 10201a60; body size 76 bytes.
#line 1 "ENTRY_10201a60"

void __fastcall FUN_10201a60(undefined4 *param_1)

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


// Reference entry 10201ad0; body size 76 bytes.
#line 1 "ENTRY_10201ad0"

void __fastcall FUN_10201ad0(undefined4 *param_1)

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


// Reference entry 10201b40; body size 76 bytes.
#line 1 "ENTRY_10201b40"

void __fastcall FUN_10201b40(undefined4 *param_1)

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


// Reference entry 10201bb0; body size 76 bytes.
#line 1 "ENTRY_10201bb0"

void __fastcall FUN_10201bb0(undefined4 *param_1)

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


// Reference entry 10201c20; body size 76 bytes.
#line 1 "ENTRY_10201c20"

void __fastcall FUN_10201c20(undefined4 *param_1)

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


// Reference entry 10201c90; body size 76 bytes.
#line 1 "ENTRY_10201c90"

void __fastcall FUN_10201c90(undefined4 *param_1)

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


// Reference entry 10201d00; body size 76 bytes.
#line 1 "ENTRY_10201d00"

void __fastcall FUN_10201d00(undefined4 *param_1)

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


// Reference entry 10201d70; body size 76 bytes.
#line 1 "ENTRY_10201d70"

void __fastcall FUN_10201d70(undefined4 *param_1)

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


// Reference entry 10201de0; body size 76 bytes.
#line 1 "ENTRY_10201de0"

void __fastcall FUN_10201de0(undefined4 *param_1)

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


// Reference entry 10201e50; body size 76 bytes.
#line 1 "ENTRY_10201e50"

void __fastcall FUN_10201e50(undefined4 *param_1)

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


// Reference entry 10201ec0; body size 76 bytes.
#line 1 "ENTRY_10201ec0"

void __fastcall FUN_10201ec0(undefined4 *param_1)

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


// Reference entry 10201f30; body size 76 bytes.
#line 1 "ENTRY_10201f30"

void __fastcall FUN_10201f30(undefined4 *param_1)

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


// Reference entry 10201fa0; body size 76 bytes.
#line 1 "ENTRY_10201fa0"

void __fastcall FUN_10201fa0(undefined4 *param_1)

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


// Reference entry 10202010; body size 76 bytes.
#line 1 "ENTRY_10202010"

void __fastcall FUN_10202010(undefined4 *param_1)

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


// Reference entry 10202080; body size 76 bytes.
#line 1 "ENTRY_10202080"

void __fastcall FUN_10202080(undefined4 *param_1)

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


// Reference entry 102020f0; body size 76 bytes.
#line 1 "ENTRY_102020f0"

void __fastcall FUN_102020f0(undefined4 *param_1)

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


// Reference entry 10202160; body size 76 bytes.
#line 1 "ENTRY_10202160"

void __fastcall FUN_10202160(undefined4 *param_1)

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


// Reference entry 102021d0; body size 76 bytes.
#line 1 "ENTRY_102021d0"

void __fastcall FUN_102021d0(undefined4 *param_1)

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


// Reference entry 10202240; body size 76 bytes.
#line 1 "ENTRY_10202240"

void __fastcall FUN_10202240(undefined4 *param_1)

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


// Reference entry 102022b0; body size 76 bytes.
#line 1 "ENTRY_102022b0"

void __fastcall FUN_102022b0(undefined4 *param_1)

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


// Reference entry 10202320; body size 76 bytes.
#line 1 "ENTRY_10202320"

void __fastcall FUN_10202320(undefined4 *param_1)

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


// Reference entry 10202390; body size 76 bytes.
#line 1 "ENTRY_10202390"

void __fastcall FUN_10202390(undefined4 *param_1)

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


// Reference entry 10202400; body size 76 bytes.
#line 1 "ENTRY_10202400"

void __fastcall FUN_10202400(undefined4 *param_1)

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


// Reference entry 10202470; body size 76 bytes.
#line 1 "ENTRY_10202470"

void __fastcall FUN_10202470(undefined4 *param_1)

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


// Reference entry 102024e0; body size 76 bytes.
#line 1 "ENTRY_102024e0"

void __fastcall FUN_102024e0(undefined4 *param_1)

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


// Reference entry 10202550; body size 76 bytes.
#line 1 "ENTRY_10202550"

void __fastcall FUN_10202550(undefined4 *param_1)

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


// Reference entry 102025c0; body size 68 bytes.
#line 1 "ENTRY_102025c0"

void __fastcall FUN_102025c0(int *param_1)

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


// Reference entry 10202620; body size 68 bytes.
#line 1 "ENTRY_10202620"

void __fastcall FUN_10202620(int *param_1)

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


// Reference entry 10202aa0; body size 145 bytes.
#line 1 "ENTRY_10202aa0"

void __fastcall FUN_10202aa0(int param_1)

{
 try {
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = (int)(*(int *)(*(int *)(param_1 + 4) + 0x10));

    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),DAT_12126b84 ));
      if (iVar2 == 0) {
        *(undefined4 *)(iVar1 + -8) = 0;
        *(undefined4 *)(iVar1 + -0xc) = 0;
        thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
        free((void *)(iVar1 + -0x10));
      }
    }
  }
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }

  return;

 } catch (...) { }
}


// Reference entry 10202bd0; body size 115 bytes.
#line 1 "ENTRY_10202bd0"

void __fastcall FUN_10202bd0(int *param_1)

{
 try {
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  iVar1 = (int)(*param_1);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),DAT_12126b84 ));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10202ca0; body size 115 bytes.
#line 1 "ENTRY_10202ca0"

void __fastcall FUN_10202ca0(int *param_1)

{
 try {
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  iVar1 = (int)(*param_1);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),DAT_12126b84 ));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10202d40; body size 137 bytes.
#line 1 "ENTRY_10202d40"

void __fastcall FUN_10202d40(undefined4 *param_1)

{
 try {
  int iVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RFavoriteHelper);
  iVar1 = (int)(param_1[0x28]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  thunk_FUN_10202e00();

  return;

 } catch (...) { }
}


// Reference entry 10202e00; body size 1395 bytes.
#line 1 "ENTRY_10202e00"

void __fastcall FUN_10202e00(int *param_1)

{
 try {
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_1124d790(DAT_12126b84 );
  thunk_FUN_10207220();
  iVar1 = (int)(param_1[0x14]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[0x13]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[0x12]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[0x11]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[0x10]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[0xf]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[0xe]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[0xd]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[0xc]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[0xb]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[10]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[9]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[8]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[7]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[6]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[5]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[4]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[3]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[2]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[1]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(*param_1);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10203530; body size 255 bytes.
#line 1 "ENTRY_10203530"

void __fastcall FUN_10203530(undefined4 *param_1)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCActionOnGroupWrapperActionDescriptor);

  ((SCStr *)((SCStr *)(param_1 + 0xb)))->int_release();
  param_1[0xb] = 0;

  ((SCStr *)((SCStr *)(param_1 + 10)))->int_release();
  param_1[10] = 0;

  ((SCStr *)((SCStr *)(param_1 + 8)))->int_release();
  param_1[8] = 0;

  ((SCStr *)((SCStr *)(param_1 + 7)))->int_release();
  param_1[7] = 0;

  ((SCStr *)((SCStr *)(param_1 + 6)))->int_release();
  param_1[6] = 0;
  piVar1 = (int *)((int *)param_1[5]);

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
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


// Reference entry 102036c0; body size 195 bytes.
#line 1 "ENTRY_102036c0"

void __fastcall FUN_102036c0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAllNodeBrowseItemBase);
  param_1[6] = (uint)&ghidra_vftable_SCAllNodeBrowseItemBase;
  param_1[0xe] = (uint)&ghidra_vftable_SCAllNodeBrowseItemBase;
  thunk_FUN_10202e00(uVar1);

  ((SCStr *)((SCStr *)(param_1 + 0x12)))->int_release();
  param_1[0x12] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x11)))->int_release();
  param_1[0x11] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x10)))->int_release();
  param_1[0x10] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0xf)))->int_release();
  param_1[0xf] = 0;
  param_1[0xe] = (uint)&ghidra_vftable_SCIObj;
  thunk_FUN_103d60a0();
  thunk_FUN_104da760();

  return;

 } catch (...) { }
}


// Reference entry 102037c0; body size 338 bytes.
#line 1 "ENTRY_102037c0"

void __fastcall FUN_102037c0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[2] = (uint)&ghidra_vftable_SCAsyncBrowseDataSource;
  param_1[10] = (uint)&ghidra_vftable_SCAsyncBrowseDataSource;
  param_1[0x20] = (uint)&ghidra_vftable_SCAsyncBrowseDataSource;
  param_1[0x21] = (uint)&ghidra_vftable_SCAsyncBrowseDataSource;
  param_1[0x22] = (uint)&ghidra_vftable_SCAsyncBrowseDataSource;
  param_1[0x23] = (uint)&ghidra_vftable_SCAsyncBrowseDataSource;
  param_1[0x24] = (uint)&ghidra_vftable_SCAsyncBrowseDataSource;
  param_1[0x25] = (uint)&ghidra_vftable_SCAsyncBrowseDataSource;
  param_1[0x94] = (uint)&ghidra_vftable_SCAsyncBrowseDataSource;
  param_1[0x95] = (uint)&ghidra_vftable_SCAsyncBrowseDataSource;
  param_1[0x96] = (uint)&ghidra_vftable_SCAsyncBrowseDataSource;
  if ((int *)param_1[0x9a] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x9a] + 0x18))(param_1[0x97],uVar2);
  }

  ((SCStr *)((SCStr *)(param_1 + 0x9e)))->int_release();
  param_1[0x9e] = 0;
  piVar1 = (int *)((int *)param_1[0x9b]);

  if (piVar1 != (int *)0x0) {
    param_1[0x9a] = 0;
    param_1[0x9b] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0x96] = (uint)&ghidra_vftable_SCShareManagerEventSink;
  piVar1 = (int *)((int *)param_1[0x98]);

  if (piVar1 != (int *)0x0) {
    param_1[0x97] = 0;
    param_1[0x98] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0x95] = (uint)&ghidra_vftable_SCSwfObjBCListener;
  thunk_FUN_110a9ef0();
  thunk_FUN_10203970();

  return;

 } catch (...) { }
}


// Reference entry 10203970; body size 795 bytes.
#line 1 "ENTRY_10203970"

void __fastcall FUN_10203970(undefined4 *param_1)

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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSourceBase);
  param_1[2] = (uint)&ghidra_vftable_SCAsyncBrowseDataSourceBase;
  param_1[10] = (uint)&ghidra_vftable_SCAsyncBrowseDataSourceBase;
  param_1[0x20] = (uint)&ghidra_vftable_SCAsyncBrowseDataSourceBase;
  param_1[0x21] = (uint)&ghidra_vftable_SCAsyncBrowseDataSourceBase;
  param_1[0x22] = (uint)&ghidra_vftable_SCAsyncBrowseDataSourceBase;
  param_1[0x23] = (uint)&ghidra_vftable_SCAsyncBrowseDataSourceBase;
  param_1[0x24] = (uint)&ghidra_vftable_SCAsyncBrowseDataSourceBase;
  param_1[0x25] = (uint)&ghidra_vftable_SCAsyncBrowseDataSourceBase;
  if (param_1[0x5b] != 0) {
    thunk_FUN_104dce00(uVar3);
    piVar1 = (int *)((int *)param_1[0x5c]);
    if (piVar1 != (int *)0x0) {
      param_1[0x5b] = 0;
      param_1[0x5c] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
  }
  piVar1 = (int *)((int *)param_1[0x92]);

  if (piVar1 != (int *)0x0) {
    param_1[0x91] = 0;
    param_1[0x92] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_1124d790();
  piVar1 = (int *)((int *)param_1[0x87]);

  if (piVar1 != (int *)0x0) {
    param_1[0x86] = 0;
    param_1[0x87] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_10202e00();
  piVar1 = (int *)((int *)param_1[0x5c]);

  if (piVar1 != (int *)0x0) {
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0x3c] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  param_1[0x39] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();

  ((SCStr *)((SCStr *)(param_1 + 0x38)))->int_release();
  param_1[0x38] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x35)))->int_release();
  param_1[0x35] = 0;
  iVar2 = (int)(param_1[0x30]);

  if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
    iVar4 = (int)(thunk_FUN_1123fcd0((void *)(iVar2 + -0x10)));
    if (iVar4 == 0) {
      *(undefined4 *)(iVar2 + -8) = 0;
      *(undefined4 *)(iVar2 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar2,*(undefined4 *)(iVar2 + -4));
      free((void *)(iVar2 + -0x10));
    }
  }

  ((SCStr *)((SCStr *)(param_1 + 0x2f)))->int_release();
  param_1[0x2f] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x2e)))->int_release();
  param_1[0x2e] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x2d)))->int_release();
  param_1[0x2d] = 0;
  piVar1 = (int *)((int *)param_1[0x2c]);

  if (piVar1 != (int *)0x0) {
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x29]);

  if (piVar1 != (int *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0x25] = (uint)&ghidra_vftable_SCBrowseItemEventSink;
  piVar1 = (int *)((int *)param_1[0x27]);

  if (piVar1 != (int *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0x24] = (uint)&ghidra_vftable_SCSwfObjHHListener;
  param_1[0x23] = (uint)&ghidra_vftable_SCIObj;
  param_1[0x22] = (uint)&ghidra_vftable_RControlAIOOpCB;
  thunk_FUN_11240850();
  param_1[0x21] = (uint)&ghidra_vftable_SCIObj;
  param_1[0x20] = (uint)&ghidra_vftable_SCIObj;
  thunk_FUN_104d76e0();

  return;

 } catch (...) { }
}


// Reference entry 10203d60; body size 69 bytes.
#line 1 "ENTRY_10203d60"

void __fastcall FUN_10203d60(undefined4 *param_1)

{
  param_1[0x46] = (uint)&ghidra_vftable_SCAsyncBrowseItem;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseItem);
  param_1[6] = (uint)&ghidra_vftable_SCAsyncBrowseItem;
  param_1[0xe] = (uint)&ghidra_vftable_SCAsyncBrowseItem;
  param_1[0xf] = (uint)&ghidra_vftable_SCAsyncBrowseItem;
  param_1[0x10] = (uint)&ghidra_vftable_SCAsyncBrowseItem;
  param_1[0x11] = (uint)&ghidra_vftable_SCAsyncBrowseItem;
  thunk_FUN_110a9ef0();
  thunk_FUN_10203dc0();
  return;
}


// Reference entry 10203dc0; body size 318 bytes.
#line 1 "ENTRY_10203dc0"

void __fastcall FUN_10203dc0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseItemBase);
  param_1[6] = (uint)&ghidra_vftable_SCAsyncBrowseItemBase;
  param_1[0xe] = (uint)&ghidra_vftable_SCAsyncBrowseItemBase;
  param_1[0xf] = (uint)&ghidra_vftable_SCAsyncBrowseItemBase;
  param_1[0x10] = (uint)&ghidra_vftable_SCAsyncBrowseItemBase;
  param_1[0x11] = (uint)&ghidra_vftable_SCAsyncBrowseItemBase;
  piVar1 = (int *)((int *)param_1[0x44]);

  if (piVar1 != (int *)0x0) {
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  ((SCStr *)((SCStr *)(param_1 + 0x41)))->int_release();
  param_1[0x41] = 0;
  thunk_FUN_10202e00();
  piVar1 = (int *)((int *)param_1[0x17]);

  if (piVar1 != (int *)0x0) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    (**(code **)(*piVar1 + 8))();
  }

  ((SCStr *)((SCStr *)(param_1 + 0x14)))->int_release();
  param_1[0x14] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x13)))->int_release();
  param_1[0x13] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x12)))->int_release();
  param_1[0x12] = 0;
  param_1[0x11] = (uint)&ghidra_vftable_SCIObj;
  param_1[0x10] = (uint)&ghidra_vftable_SCIObj;
  param_1[0xf] = (uint)&ghidra_vftable_SCIObj;
  param_1[0xe] = (uint)&ghidra_vftable_SCIObj;
  thunk_FUN_103d60a0();
  thunk_FUN_104da760();

  return;

 } catch (...) { }
}


// Reference entry 10203f60; body size 90 bytes.
#line 1 "ENTRY_10203f60"

void __fastcall FUN_10203f60(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBrowseItemEventSink);
  piVar1 = (int *)((int *)param_1[2]);

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10204000; body size 157 bytes.
#line 1 "ENTRY_10204000"

void __fastcall FUN_10204000(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCompoundAction);
  param_1[2] = (uint)&ghidra_vftable_SCCompoundAction;
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (uint)&ghidra_vftable_SCIObj;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 102040d0; body size 176 bytes.
#line 1 "ENTRY_102040d0"

void __fastcall FUN_102040d0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDeferredEvtHelper);
  param_1[7] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0(uVar2);
  piVar1 = (int *)((int *)param_1[5]);

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[3]);

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))();
  }

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();

  return;

 } catch (...) { }
}


// Reference entry 102041c0; body size 134 bytes.
#line 1 "ENTRY_102041c0"

void __fastcall FUN_102041c0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDisplayCustomControlActionDescriptor);

  ((SCStr *)((SCStr *)(param_1 + 5)))->int_release();
  param_1[5] = 0;
  piVar1 = (int *)((int *)param_1[4]);

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10204300; body size 104 bytes.
#line 1 "ENTRY_10204300"

void __fastcall FUN_10204300(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

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


// Reference entry 10204390; body size 150 bytes.
#line 1 "ENTRY_10204390"

void __fastcall FUN_10204390(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 5)))->int_release();
  param_1[5] = 0;

  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  param_1[4] = 0;
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


// Reference entry 10204460; body size 134 bytes.
#line 1 "ENTRY_10204460"

void __fastcall FUN_10204460(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSelectedItemsAddToQueueAtIdxDescriptor);

  ((SCStr *)((SCStr *)(param_1 + 5)))->int_release();
  param_1[5] = 0;
  piVar1 = (int *)((int *)param_1[4]);

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10204510; body size 134 bytes.
#line 1 "ENTRY_10204510"

void __fastcall FUN_10204510(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSelectedItemsAddToQueueDescriptor);

  ((SCStr *)((SCStr *)(param_1 + 5)))->int_release();
  param_1[5] = 0;
  piVar1 = (int *)((int *)param_1[4]);

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 102045c0; body size 134 bytes.
#line 1 "ENTRY_102045c0"

void __fastcall FUN_102045c0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSelectedItemsPlayNextDescriptor);

  ((SCStr *)((SCStr *)(param_1 + 5)))->int_release();
  param_1[5] = 0;
  piVar1 = (int *)((int *)param_1[4]);

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10204670; body size 134 bytes.
#line 1 "ENTRY_10204670"

void __fastcall FUN_10204670(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSelectedItemsReplaceQueueDescriptor);

  ((SCStr *)((SCStr *)(param_1 + 5)))->int_release();
  param_1[5] = 0;
  piVar1 = (int *)((int *)param_1[4]);

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10204720; body size 90 bytes.
#line 1 "ENTRY_10204720"

void __fastcall FUN_10204720(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCShareManagerEventSink);
  piVar1 = (int *)((int *)param_1[2]);

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 102047e0; body size 81 bytes.
#line 1 "ENTRY_102047e0"

int * __thiscall Recovered_Bulk::FUN_102047e0(int *param_2)
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


// Reference entry 10204850; body size 81 bytes.
#line 1 "ENTRY_10204850"

int * __thiscall Recovered_Bulk::FUN_10204850(int *param_2)
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


// Reference entry 10204920; body size 81 bytes.
#line 1 "ENTRY_10204920"

int * __thiscall Recovered_Bulk::FUN_10204920(int *param_2)
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


// Reference entry 10204990; body size 81 bytes.
#line 1 "ENTRY_10204990"

int * __thiscall Recovered_Bulk::FUN_10204990(int *param_2)
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


// Reference entry 10204a00; body size 81 bytes.
#line 1 "ENTRY_10204a00"

int * __thiscall Recovered_Bulk::FUN_10204a00(int *param_2)
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


// Reference entry 10204a70; body size 81 bytes.
#line 1 "ENTRY_10204a70"

int * __thiscall Recovered_Bulk::FUN_10204a70(int *param_2)
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


// Reference entry 10204b40; body size 81 bytes.
#line 1 "ENTRY_10204b40"

int * __thiscall Recovered_Bulk::FUN_10204b40(int *param_2)
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


// Reference entry 10204bb0; body size 81 bytes.
#line 1 "ENTRY_10204bb0"

int * __thiscall Recovered_Bulk::FUN_10204bb0(int *param_2)
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


// Reference entry 10204c50; body size 339 bytes.
#line 1 "ENTRY_10204c50"

int __thiscall Recovered_Bulk::FUN_10204c50(int param_2)
{
  int param_1 = (int )this;
  thunk_FUN_101ba530(param_2);
  thunk_FUN_101ba530(param_2 + 4);
  thunk_FUN_101ba530(param_2 + 8);
  thunk_FUN_101ba530(param_2 + 0xc);
  thunk_FUN_101ba530(param_2 + 0x10);
  thunk_FUN_101ba530(param_2 + 0x14);
  thunk_FUN_101ba530(param_2 + 0x18);
  thunk_FUN_101ba530(param_2 + 0x1c);
  thunk_FUN_101ba530(param_2 + 0x20);
  thunk_FUN_101ba530(param_2 + 0x24);
  thunk_FUN_101ba530(param_2 + 0x28);
  thunk_FUN_101ba530(param_2 + 0x2c);
  thunk_FUN_101ba530(param_2 + 0x30);
  thunk_FUN_101ba530(param_2 + 0x34);
  thunk_FUN_101ba530(param_2 + 0x38);
  thunk_FUN_101ba530(param_2 + 0x3c);
  thunk_FUN_101ba530(param_2 + 0x40);
  thunk_FUN_101ba530(param_2 + 0x44);
  thunk_FUN_101ba530(param_2 + 0x48);
  thunk_FUN_101ba530(param_2 + 0x4c);
  thunk_FUN_101ba530(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  if ((undefined4 *)(param_1 + 0x60) != (undefined4 *)(param_2 + 0x60)) {
    thunk_FUN_101fd7b0(*(undefined4 *)(param_2 + 0x60),*(undefined4 *)(param_2 + 100),param_2);
  }
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x74) = *(undefined1 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  thunk_FUN_1124d7a0(param_2 + 0x7c);
  return (int)(param_1);
}


// Reference entry 10204e40; body size 233 bytes.
#line 1 "ENTRY_10204e40"

int __thiscall Recovered_Bulk::FUN_10204e40(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);

  thunk_FUN_101fdc90(&local_24,param_2);
  if (*(char *)(local_1c + 0xd) == '\0') {
    cVar3 = (char)(thunk_FUN_111a0940(local_1c + 0x10));
    if (cVar3 == '\0') goto LAB_10204f0d;
  }
  if (param_1[1] == 0xaaaaaaa) {
                    
    thunk_FUN_101d7220(uVar4);
  }
  uVar1 = (undefined4)(*param_1);

  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_18 = (undefined4 *)(param_1);
  puVar5 = (undefined4 *)(operator_new(0x18));
  iVar2 = (int)(*param_2);

  puVar5[4] = iVar2;
  local_14 = (undefined4 *)(puVar5);
  if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar2 + -0x10));
  }
  puVar5[5] = 0;
  *puVar5 = (undefined4)(uVar1);
  puVar5[1] = uVar1;
  puVar5[2] = uVar1;
  *(undefined2 *)(puVar5 + 3) = 0;
  local_1c = (int)(thunk_FUN_10206e60(local_24,local_20,puVar5));
LAB_10204f0d:

  return (int)(local_1c + 0x14);

 } catch (...) { }
}


// Reference entry 10205660; body size 140 bytes.
#line 1 "ENTRY_10205660"

int * __thiscall Recovered_Bulk::FUN_10205660(byte param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  iVar1 = (int)(*param_1);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),DAT_12126b84 ));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 102057b0; body size 161 bytes.
#line 1 "ENTRY_102057b0"

undefined4 * __thiscall Recovered_Bulk::FUN_102057b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int iVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RFavoriteHelper);
  iVar1 = (int)(param_1[0x28]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  thunk_FUN_10202e00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xa4);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10205910; body size 276 bytes.
#line 1 "ENTRY_10205910"

undefined4 * __thiscall Recovered_Bulk::FUN_10205910(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCActionOnGroupWrapperActionDescriptor);

  ((SCStr *)((SCStr *)(param_1 + 0xb)))->int_release();
  param_1[0xb] = 0;

  ((SCStr *)((SCStr *)(param_1 + 10)))->int_release();
  param_1[10] = 0;

  ((SCStr *)((SCStr *)(param_1 + 8)))->int_release();
  param_1[8] = 0;

  ((SCStr *)((SCStr *)(param_1 + 7)))->int_release();
  param_1[7] = 0;

  ((SCStr *)((SCStr *)(param_1 + 6)))->int_release();
  param_1[6] = 0;
  piVar1 = (int *)((int *)param_1[5]);

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
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
    thunk_FUN_1148a50e(param_1,0x34);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10205b80; body size 95 bytes.
#line 1 "ENTRY_10205b80"

undefined4 * __thiscall Recovered_Bulk::FUN_10205b80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[0x46] = (uint)&ghidra_vftable_SCAsyncBrowseItem;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseItem);
  param_1[6] = (uint)&ghidra_vftable_SCAsyncBrowseItem;
  param_1[0xe] = (uint)&ghidra_vftable_SCAsyncBrowseItem;
  param_1[0xf] = (uint)&ghidra_vftable_SCAsyncBrowseItem;
  param_1[0x10] = (uint)&ghidra_vftable_SCAsyncBrowseItem;
  param_1[0x11] = (uint)&ghidra_vftable_SCAsyncBrowseItem;
  thunk_FUN_110a9ef0();
  thunk_FUN_10203dc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x120);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10205c30; body size 113 bytes.
#line 1 "ENTRY_10205c30"

undefined4 * __thiscall Recovered_Bulk::FUN_10205c30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBrowseItemEventSink);
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


// Reference entry 10205d10; body size 178 bytes.
#line 1 "ENTRY_10205d10"

undefined4 * __thiscall Recovered_Bulk::FUN_10205d10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCompoundAction);
  param_1[2] = (uint)&ghidra_vftable_SCCompoundAction;
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (uint)&ghidra_vftable_SCIObj;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10205e00; body size 197 bytes.
#line 1 "ENTRY_10205e00"

undefined4 * __thiscall Recovered_Bulk::FUN_10205e00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDeferredEvtHelper);
  param_1[7] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0(uVar2);
  piVar1 = (int *)((int *)param_1[5]);

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[3]);

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))();
  }

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x28);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10205f00; body size 155 bytes.
#line 1 "ENTRY_10205f00"

undefined4 * __thiscall Recovered_Bulk::FUN_10205f00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDisplayCustomControlActionDescriptor);

  ((SCStr *)((SCStr *)(param_1 + 5)))->int_release();
  param_1[5] = 0;
  piVar1 = (int *)((int *)param_1[4]);

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10206180; body size 125 bytes.
#line 1 "ENTRY_10206180"

undefined4 * __thiscall Recovered_Bulk::FUN_10206180(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

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


// Reference entry 10206230; body size 171 bytes.
#line 1 "ENTRY_10206230"

undefined4 * __thiscall Recovered_Bulk::FUN_10206230(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 5)))->int_release();
  param_1[5] = 0;

  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  param_1[4] = 0;
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
    thunk_FUN_1148a50e(param_1,0x1c);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10206310; body size 155 bytes.
#line 1 "ENTRY_10206310"

undefined4 * __thiscall Recovered_Bulk::FUN_10206310(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSelectedItemsAddToQueueAtIdxDescriptor);

  ((SCStr *)((SCStr *)(param_1 + 5)))->int_release();
  param_1[5] = 0;
  piVar1 = (int *)((int *)param_1[4]);

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102063e0; body size 155 bytes.
#line 1 "ENTRY_102063e0"

undefined4 * __thiscall Recovered_Bulk::FUN_102063e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSelectedItemsAddToQueueDescriptor);

  ((SCStr *)((SCStr *)(param_1 + 5)))->int_release();
  param_1[5] = 0;
  piVar1 = (int *)((int *)param_1[4]);

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102064b0; body size 155 bytes.
#line 1 "ENTRY_102064b0"

undefined4 * __thiscall Recovered_Bulk::FUN_102064b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSelectedItemsPlayNextDescriptor);

  ((SCStr *)((SCStr *)(param_1 + 5)))->int_release();
  param_1[5] = 0;
  piVar1 = (int *)((int *)param_1[4]);

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10206580; body size 155 bytes.
#line 1 "ENTRY_10206580"

undefined4 * __thiscall Recovered_Bulk::FUN_10206580(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSelectedItemsReplaceQueueDescriptor);

  ((SCStr *)((SCStr *)(param_1 + 5)))->int_release();
  param_1[5] = 0;
  piVar1 = (int *)((int *)param_1[4]);

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10206650; body size 113 bytes.
#line 1 "ENTRY_10206650"

undefined4 * __thiscall Recovered_Bulk::FUN_10206650(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCShareManagerEventSink);
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


// Reference entry 10206790; body size 140 bytes.
#line 1 "ENTRY_10206790"

int * __thiscall Recovered_Bulk::FUN_10206790(byte param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  iVar1 = (int)(*param_1);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),DAT_12126b84 ));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 10206850; body size 340 bytes.
#line 1 "ENTRY_10206850"

int * __thiscall Recovered_Bulk::FUN_10206850(int *param_2,uint param_3)
{
  int param_1 = (int )this;
 try {
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  if (param_3 < (uint)(*(int *)(param_1 + 100) - *(int *)(param_1 + 0x60) >> 2)) {
    iVar5 = (int)(*(int *)(*(int *)(param_1 + 0x60) + param_3 * 4));
    if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0(iVar5 + -0x10,uVar3);
    }
    bVar2 = (bool)(true);
    bVar1 = (bool)(false);

  }
  else {
    iVar5 = (int)(0);
    bVar2 = (bool)(false);
    bVar1 = (bool)(true);

  }
  *param_2 = (int)(iVar5);
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10),uVar3);
  }
  if (bVar1) {

    if ((iVar5 != 0) && (piVar6 = (int *)(iVar5 + -0x10), *piVar6 < 0xffff)) {
      iVar4 = (int)(thunk_FUN_1123fcd0(piVar6));
      if (iVar4 == 0) {
        *(undefined4 *)(iVar5 + -8) = 0;
        *(undefined4 *)(iVar5 + -0xc) = 0;
        thunk_FUN_113cfb70(iVar5,*(undefined4 *)(iVar5 + -4));
        free(piVar6);
      }
    }
  }
  if (((bVar2) && (local_8 = 3, iVar5 != 0)) && (piVar6 = (int *)(iVar5 + -0x10), *piVar6 < 0xffff))
  {
    iVar4 = (int)(thunk_FUN_1123fcd0(piVar6));
    if (iVar4 == 0) {
      *(undefined4 *)(iVar5 + -8) = 0;
      *(undefined4 *)(iVar5 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar5,*(undefined4 *)(iVar5 + -4));
      free(piVar6);
    }
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 10207220; body size 96 bytes.
#line 1 "ENTRY_10207220"

void __fastcall FUN_10207220(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_101fda20(*param_1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
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


// Reference entry 10207b10; body size 87 bytes.
#line 1 "ENTRY_10207b10"

void * FUN_10207b10(uint param_1)

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


// Reference entry 10207ce0; body size 596 bytes.
#line 1 "ENTRY_10207ce0"

void __thiscall Recovered_Bulk::FUN_10207ce0(undefined4 param_2,char *param_3,int *param_4,undefined4 param_5,
            undefined4 param_6)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined4 *puVar5;
  SCStr *this_;
  char *extraout_ECX;
  char *extraout_ECX_00;
  char *pcVar6;
  int iVar7;
  char *pcStack_2c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar2 = (undefined4)(param_6);


  pcStack_2c = (char *)(param_3);
  local_14 = (int)(param_1);
  thunk_FUN_112af4e0("SCAsyncBrowseDataSource",1,
                     "browseFailed! UDN: [%s] ContainerID: [%s] res: [%d]",param_2);


  ((SCStr *)(this_))->format((char *)&local_14);
  piVar1 = (int *)(param_4);
  pcVar6 = (char *)(extraout_ECX);
  if (*(char *)(param_1 + 0x14) != '\0') {
    *(undefined1 *)(param_1 + 0x14) = 0;
    pcStack_2c = (char *)((char *)0x10207d6d);
    cVar3 = (char)((**(code **)(*(int *)(param_1 + -0x250) + 0x19c))());
    pcVar6 = (char *)(extraout_ECX_00);
    if (cVar3 != '\0') {
      pcStack_2c = (char *)("SCAsyncBrowseDataSource");
      thunk_FUN_112af4e0();
      thunk_FUN_110b0460(1);
      iVar7 = (int)(param_1);
      if (param_1 == 0x250) {
        iVar7 = (int)(0);
      }
      thunk_FUN_110adac0();
      pcStack_2c = (char *)("");
      if (*(char **)(param_1 + -0x198) != (char *)0x0) {
        pcStack_2c = (char *)(*(char **)(param_1 + -0x198));
      }
      thunk_FUN_110b2900(iVar7);
      goto LAB_10207f11;
    }
  }
  if ((short)uVar2 == 0x3ec) {
    pcStack_2c = (char *)(pcVar6);
    ((SCStr *)((SCStr *)&pcStack_2c))->int_allocRep("SCIBrowseDataSource:onInvalidation");
    thunk_FUN_103d63d0();
    *(undefined1 *)(param_1 + -0x20f) = 0;
  }
  else if ((short)uVar2 == 0x40c) {
    (**(code **)(*(int *)(param_1 + -0x250) + 0x16c))();
  }
  else if (piVar1 == (int *)0xffffffff) {
    (**(code **)(*(int *)(param_1 + -0x250) + 0x170))();
  }
  else {
    pcVar6 = (char *)(param_3);
    do {
      cVar3 = (char)(*pcVar6);
      pcVar6 = (char *)(pcVar6 + 1);
    } while (cVar3 != '\0');
    pcStack_2c = (char *)("j");
    ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_3,(int)pcVar6 - (int)(param_3 + 1));
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    pcStack_2c = (char *)((char *)0x10207e76);
    bVar4 = (bool)(((SCStr *)((SCStr *)&param_2))->contains((SCStr *)(param_1 + 0x28),false));
    if (bVar4) {
      ((SCStr *)((SCStr *)&param_6))->int_allocRep("");
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      ((SCStr *)((SCStr *)&param_3))->int_allocRep("favoritesHidden");
      *(unsigned char *)((char *)&local_8 + 0) = 5;
      pcStack_2c = (char *)((char *)&param_3);
      puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_102d5720(&param_4));
      *(unsigned char *)((char *)&local_8 + 0) = 6;
      (**(code **)(*(int *)*puVar5 + 0x24))();
      *(unsigned char *)((char *)&local_8 + 0) = 7;
      if (param_4 != (int *)0x0) {
        (**(code **)(*param_4 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 8;
      ((SCStr *)((SCStr *)&param_3))->int_release();
      param_3 = (char *)((char *)0x0);
      *(unsigned char *)((char *)&local_8 + 0) = 9;
      ((SCStr *)((SCStr *)&param_6))->int_release();
      *(unsigned char *)((char *)&local_8 + 0) = 3;
    }
    (**(code **)(*(int *)(param_1 + -0x250) + 0x16c))();
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
    ((SCStr *)((SCStr *)&param_2))->int_release();
  }
LAB_10207f11:

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10208940; body size 134 bytes.
#line 1 "ENTRY_10208940"

uint __fastcall FUN_10208940(int param_1)

{
  char cVar1;
  SCLibrary *pSVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_8;
  undefined4 local_4;
  
  pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  if (*(int *)(*(int *)(pSVar2 + 0x4c) + 0x6c) == 3) {
    iVar3 = (int)(thunk_FUN_110828b0());
    if (iVar3 != 0) {
      local_4 = (undefined4)(0);
      local_8 = (undefined4)(0);
      cVar1 = (char)(thunk_FUN_1106e690(&local_4,&local_8));
      if (cVar1 != '\0') {
        iVar3 = (int)(thunk_FUN_11093a20(local_8));
        if (iVar3 != 0) {
          cVar1 = (char)(thunk_FUN_1021adf0());
          if (cVar1 != '\0') {
            uVar4 = (uint)(thunk_FUN_104f7a90(param_1 + 100));
            if ((char)uVar4 != '\0') {
              return (uint)(uVar4 & 0xffffff00);
            }
          }
        }
      }
    }
  }
  uVar4 = (uint)(thunk_FUN_102089f0());
  return (uint)(uVar4);
}


// Reference entry 10209230; body size 137 bytes.
#line 1 "ENTRY_10209230"

undefined4 * __thiscall Recovered_Bulk::FUN_10209230(undefined4 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0x120));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_10200aa0(param_1 + 0xb8,param_1 + 0xb4,param_3,param_1));
  }

  *param_2 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar1);
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 1020a450; body size 78 bytes.
#line 1 "ENTRY_1020a450"

void __thiscall Recovered_Bulk::FUN_1020a450(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_101fdc90(local_c,param_3);
  if (*(char *)(local_4 + 0xd) == '\0') {
    cVar1 = (char)(thunk_FUN_111a0940(local_4 + 0x10));
    if (cVar1 == '\0') {
      *param_2 = (int)(local_4);
      return;
    }
  }
  *param_2 = (int)(*param_1);
  return;
}


// Reference entry 1020a4c0; body size 110 bytes.
#line 1 "ENTRY_1020a4c0"

void __fastcall FUN_1020a4c0(undefined4 param_1)

{
 try {
  void *pvVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  pvVar1 = (void *)(operator_new(0x6c));

  if (pvVar1 == (void *)0x0) {
    uVar2 = (undefined4)(0);
  }
  else {
    uVar2 = (undefined4)(thunk_FUN_111c06e0(0));
  }

  thunk_FUN_102207b0(uVar2,param_1,0);

  return;

 } catch (...) { }
}


// Reference entry 1020a760; body size 100 bytes.
#line 1 "ENTRY_1020a760"

undefined4 * __thiscall Recovered_Bulk::FUN_1020a760(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int *)(param_1);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x174))(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_2 = (undefined4)(uVar1);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 1020b9d0; body size 65 bytes.
#line 1 "ENTRY_1020b9d0"

undefined4 __thiscall Recovered_Bulk::FUN_1020b9d0(undefined4 param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)((**(code **)(*param_1 + 0x8c))());
  if ((iVar1 != 0) && (iVar1 != 1)) {
    (**(code **)(*param_1 + 0x5c))(param_2);
    return (undefined4)(param_2);
  }
  (**(code **)(*param_1 + 0x54))(param_2,param_3,0);
  return (undefined4)(param_2);
}


// Reference entry 1020d260; body size 93 bytes.
#line 1 "ENTRY_1020d260"

int __thiscall Recovered_Bulk::FUN_1020d260(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  
  if (*(int *)(param_1 + 0x5c) != 0) {
    pcVar7 = (char *)("");
    if ((char *)*param_2 != (char *)0x0) {
      pcVar7 = (char *)((char *)*param_2);
    }
    cVar2 = (char)(*pcVar7);
    uVar4 = (uint)(0);
    uVar5 = (uint)(0);
    if (cVar2 != '#') {
      do {
        uVar5 = (uint)(uVar4);
        if (0x1a < uVar4) break;
        uVar5 = (uint)(uVar4 + 1);
        iVar6 = (int)(uVar4 + 1);
        uVar4 = (uint)(uVar5);
      } while ("#ABCDEFGHIJKLMNOPQRSTUVWXYZ"[iVar6] != cVar2);
    }
    if ("#ABCDEFGHIJKLMNOPQRSTUVWXYZ"[uVar5] == cVar2) {
      iVar3 = (int)(*(int *)(param_1 + 0x7c + uVar5 * 4));
      iVar6 = (int)(param_1 + 0x7c + uVar5 * 4);
      if (iVar3 != -1) {
        do {
          piVar1 = (int *)((int *)(iVar6 + 4));
          iVar6 = (int)(iVar6 + 4);
        } while (*piVar1 == -1);
        return (int)(*piVar1 - iVar3);
      }
    }
  }
  return (int)(0);
}


// Reference entry 1020d830; body size 355 bytes.
#line 1 "ENTRY_1020d830"

undefined4 * __thiscall Recovered_Bulk::FUN_1020d830(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (undefined4)((**(code **)(*param_1 + 0x1c))(&local_18,DAT_12126b84 ));


  cVar2 = (char)(thunk_FUN_103b91f0(uVar3));
  if ((cVar2 == '\0') || (cVar2 = (**(code **)(*param_1 + 0x5c))(), cVar2 == '\0')) {
    bVar1 = (bool)(false);
  }
  else {
    bVar1 = (bool)(true);
  }

  ((SCStr *)((SCStr *)&local_18))->int_release();

  if (!bVar1) {
    *param_2 = (undefined4)(0);

    return (undefined4 *)(param_2);
  }
  piVar4 = (int *)(operator_new(0x18));
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    *piVar4 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar4[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar4 = (int)((int)(uint)&ghidra_vftable_SCDisplayCustomControlActionDescriptor);
    piVar4[2] = 0xd;
    piVar4[3] = 0;
    piVar4[4] = 0;
    piVar4[5] = 0;
  }
  piVar5 = (int *)((int *)0x0);

  local_18 = (int *)((int *)0x0);
  if (piVar4 != (int *)0x0) {
    piVar5 = (int *)(piVar4);
    if (*(code **)(*piVar4 + 0xc) != thunk_FUN_101da390) {
      piVar5 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
    }
    local_18 = (int *)(piVar5);
    (**(code **)(*piVar5 + 4))();
  }

  *param_2 = (undefined4)(piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))();
  }

  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 1020d9f0; body size 202 bytes.
#line 1 "ENTRY_1020d9f0"

undefined4 __thiscall Recovered_Bulk::FUN_1020d9f0(undefined4 param_2,undefined4 param_3)
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


// Reference entry 1020f4f0; body size 217 bytes.
#line 1 "ENTRY_1020f4f0"

int * __thiscall Recovered_Bulk::FUN_1020f4f0(int *param_2,uint param_3)
{
  int *param_1 = (int *)this;
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uStack_18;
  int *piStack_14;
  uint uStack_10;
  
  if (*(char *)((int)param_1 + 0xc5) != '\0') {
    uStack_10 = (uint)(0x1020f506);
    (**(code **)(*param_1 + 0x94))();
    uStack_10 = (uint)(0);
    piStack_14 = (int *)(param_1);
    ((SCStr *)((SCStr *)&uStack_18))->int_allocRep("SCIBrowseDataSource:onInvalidation");
    thunk_FUN_103d63d0();
    *(undefined1 *)((int)param_1 + 0x41) = 0;
  }
  uStack_10 = (uint)(0x1020f52e);
  cVar2 = (char)((**(code **)(*param_1 + 0x13c))());
  if (cVar2 != '\0') {
    uStack_10 = (uint)(0x1020f53c);
    uVar3 = (uint)((**(code **)(*param_1 + 0xbc))());
    if (param_3 < uVar3) {
      param_1[0x85] = param_3;
      if (param_3 != 0) {
        piVar1 = (int *)((int *)param_1[0x2b]);
        *param_2 = (int)((int)piVar1);
        if (piVar1 == (int *)0x0) {
          return (int *)(param_2);
        }
        uStack_10 = (uint)(0x1020f579);
        (**(code **)(*piVar1 + 4))();
        return (int *)(param_2);
      }
      piVar1 = (int *)((int *)param_1[0x1a]);
      *param_2 = (int)((int)piVar1);
      if (piVar1 == (int *)0x0) {
        return (int *)(param_2);
      }
      uStack_10 = (uint)(0x1020f560);
      (**(code **)(*piVar1 + 4))();
      return (int *)(param_2);
    }
    uStack_10 = (uint)(0x1020f58b);
    iVar4 = (int)((**(code **)(*param_1 + 0xbc))());
    param_3 = (uint)(param_3 - iVar4);
  }
  param_1[0x85] = param_3;
  if (param_3 <= (uint)param_1[0x32]) {
    piStack_14 = (int *)(param_2);
    uStack_18 = (undefined4)(0x1020f5c1);
    uStack_10 = (uint)(param_3);
    (**(code **)(*param_1 + 0x194))();
    return (int *)(param_2);
  }
  *param_2 = (int)(0);
  return (int *)(param_2);
}


// Reference entry 1020f890; body size 135 bytes.
#line 1 "ENTRY_1020f890"

void __thiscall Recovered_Bulk::FUN_1020f890(SCStr *param_2)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  SCStr *local_3f0;
  char local_3ec [1000];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_3f0);
  local_3f0 = (SCStr *)(param_2);
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0xb4) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0xb4));
  }
  uVar3 = (uint)((uint)*(ushort *)(param_1 + 0xcc));
  uVar5 = (undefined4)(1000);
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0xb8) != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 0xb8));
  }
  pcVar4 = (char *)(local_3ec);
  thunk_FUN_1109f7f0(uVar3,puVar2,puVar1,pcVar4,1000);
  thunk_FUN_110a48f0(uVar3,puVar2,puVar1,pcVar4,uVar5);
  ((SCStr *)(param_2))->int_allocRep(local_3ec);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1020fc00; body size 427 bytes.
#line 1 "ENTRY_1020fc00"

void __thiscall Recovered_Bulk::FUN_1020fc00(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  SCLibrary *pSVar4;
  int *piVar5;
  int *local_29c;
  int *local_298;
  undefined4 local_294;
  undefined4 local_290;
  void *local_28c;
  undefined1 *puStack_288;
  undefined4 local_284;
  undefined1 local_280 [476];
  undefined1 local_a4 [156];
  uint local_8;


  local_8 = (uint)(DAT_12126b84 ^ (uint)local_280);

  piVar5 = (int *)(param_1 + 0x43);
  local_298 = (int *)(piVar5);
  if (param_1[0x43] == 0) {
    (**(code **)(*param_1 + 0xf0))(local_a4,local_8);

    cVar2 = (char)(thunk_FUN_10509ca0(local_a4,0));
    if (cVar2 != '\0') {
      uVar3 = (undefined4)(thunk_FUN_101ff8b0());
      *(unsigned char *)((char *)&local_284 + 0) = 1;
      thunk_FUN_1050f680(local_a4,uVar3);
      *(unsigned char *)((char *)&local_284 + 0) = 3;
      thunk_FUN_10202e00();
      thunk_FUN_105142d0(&local_294);
      *(unsigned char *)((char *)&local_284 + 0) = 4;
      ((SCStr *)((SCStr *)&local_290))->int_allocRep("");
      *(unsigned char *)((char *)&local_284 + 0) = 5;
      pSVar4 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
      uVar3 = (undefined4)((**(code **)(*(int *)pSVar4 + 0xcc))(&local_29c,&local_294,&local_290));
      *(unsigned char *)((char *)&local_284 + 0) = 6;
      thunk_FUN_101fd3a0(uVar3);
      *(unsigned char *)((char *)&local_284 + 0) = 7;
      if (local_29c != (int *)0x0) {
        (**(code **)(*local_29c + 8))();
      }
      *(unsigned char *)((char *)&local_284 + 0) = 8;
      ((SCStr *)((SCStr *)&local_290))->int_release();

      *(unsigned char *)((char *)&local_284 + 0) = 4;
      if ((int *)*piVar5 != (int *)0x0) {
        iVar1 = (int)(*(int *)*piVar5);
        uVar3 = (undefined4)((**(code **)(*param_1 + 0xd8))());
        (**(code **)(iVar1 + 0x14c))(uVar3);
        piVar5 = (int *)(local_298);
      }
      local_284 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_284 + 1)) << 8 | (uint)(9)));
      ((SCStr *)((SCStr *)&local_294))->int_release();

      thunk_FUN_105106c0();
    }

    thunk_FUN_10202e00();
  }
  piVar5 = (int *)((int *)*piVar5);
  *param_2 = (int)((int)piVar5);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))();
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10210410; body size 148 bytes.
#line 1 "ENTRY_10210410"

SCStr * __thiscall Recovered_Bulk::FUN_10210410(SCStr *param_2,uint param_3)
{
  int param_1 = (int )this;
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  cVar1 = (char)((**(code **)(*(int *)(param_1 + -0x80) + 0x13c))());
  uVar4 = (uint)(param_3);
  if (cVar1 != '\0') {
    iVar2 = (int)((**(code **)(*(int *)(param_1 + -0x80) + 0xbc))());
    uVar4 = (uint)(param_3 - iVar2);
  }
  if ((*(int *)(param_1 + 0x5c) != 0) && (uVar4 < *(uint *)(param_1 + 0x48))) {
    iVar2 = (int)(0x1a);
    piVar3 = (int *)((int *)(param_1 + 0xe4));
    do {
      if ((*piVar3 != -1) && (*piVar3 <= (int)uVar4)) {
        *(unsigned short *)((char *)&param_3 + 0) = (ushort)(byte)"#ABCDEFGHIJKLMNOPQRSTUVWXYZ"[iVar2];
        ((SCStr *)(param_2))->int_allocRep((char *)&param_3);
        return (SCStr *)(param_2);
      }
      piVar3 = (int *)(piVar3 + -1);
      iVar2 = (int)(iVar2 + -1);
    } while (-1 < iVar2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 102104d0; body size 167 bytes.
#line 1 "ENTRY_102104d0"

char __fastcall FUN_102104d0(int *param_1)

{
 try {
  char cVar1;
  bool bVar2;
  SCLibrary *pSVar3;
  SCStr *pSVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int *)(param_1);
  cVar1 = (char)((**(code **)(*param_1 + 0x13c))(DAT_12126b84 ));
  if (cVar1 != '\0') {
    ((SCStr *)((SCStr *)&local_14))->int_allocRep("PlayModel");
    pSVar4 = (SCStr *)((SCStr *)&local_14);

    pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    bVar2 = (bool)(((SCLibParameters *)(*(SCLibParameters **)(pSVar3 + 0x4c)))->hasDeveloperOption(pSVar4));

    ((SCStr *)((SCStr *)&local_14))->int_release();

    return (char)(bVar2 + '\x01');
  }

  return (char)(*(char *)((int)param_1 + 0xd1) != '\0');

 } catch (...) { }
}


// Reference entry 102161d0; body size 223 bytes.
#line 1 "ENTRY_102161d0"

int * __thiscall Recovered_Bulk::FUN_102161d0(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  if (*(int *)(param_1 + 0x16c) == 0) {
    pvVar3 = (void *)(operator_new(0x40));

    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar4 = (int *)((int *)thunk_FUN_104dbeb0(param_1));
    }

    if (piVar4 != *(int **)(param_1 + 0x16c)) {
      piVar1 = (int *)(*(int **)(param_1 + 0x170));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x16c) = 0;
        *(undefined4 *)(param_1 + 0x170) = 0;
        (**(code **)(*piVar1 + 8))();
      }
      *(int **)(param_1 + 0x16c) = piVar4;
      if (piVar4 == (int *)0x0) {
        *(undefined4 *)(param_1 + 0x170) = 0;
      }
      else {
        piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
        *(int **)(param_1 + 0x170) = piVar4;
        (**(code **)(*piVar4 + 4))();
      }
    }
  }
  piVar4 = (int *)(*(int **)(param_1 + 0x16c));
  *param_2 = (int)((int)piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(uVar2);
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 102162f0; body size 608 bytes.
#line 1 "ENTRY_102162f0"

undefined4 __thiscall Recovered_Bulk::FUN_102162f0(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  char cVar1;
  SCStr *pSVar2;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *(unsigned char *)((char *)&local_8 + 0) = 0;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  if (*(int **)(param_1 + 0x50) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x50) + 0x20))
                      (0,DAT_12126b84 ));
    if (cVar1 != '\0') {
      pSVar2 = (SCStr *)((SCStr *)(**(code **)(**(int **)(param_1 + 0x50) + 0x24))(&local_3c,0));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pSVar2 != (SCStr *)&local_14) {
        ((SCStr *)((SCStr *)&local_14))->int_release();
        local_14 = (undefined4)(*(undefined4 *)pSVar2);
        ((SCStr *)((SCStr *)&local_14))->int_addref();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      ((SCStr *)((SCStr *)&local_3c))->int_release();
      *(unsigned char *)((char *)&local_8 + 0) = 0;
    }
  }
  ((SCStr *)((SCStr *)&local_3c))->int_allocRep("");
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_38))->int_allocRep("");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  ((SCStr *)((SCStr *)&local_34))->int_allocRep("");
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)((SCStr *)&local_30))->int_allocRep("");
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_2c))->int_allocRep("");
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)((SCStr *)&local_28))->int_allocRep("");
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((SCStr *)((SCStr *)&local_24))->int_allocRep("");
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)((SCStr *)&local_20))->int_allocRep("");
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  ((SCStr *)((SCStr *)&local_1c))->int_allocRep("");
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  ((SCStr *)((SCStr *)&local_18))->int_allocRep("asyncbrowse");
  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  thunk_FUN_103aca40(param_2,&local_18,param_1 + 0x40,param_1 + 0x3c,param_1 + 0x48,param_1 + 0x44,
                     &local_1c,&local_20,&local_24,&local_28,&local_2c,&local_30,&local_34,&local_38
                     ,&local_14,0,&local_3c);
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  ((SCStr *)((SCStr *)&local_18))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 0xe;
  ((SCStr *)((SCStr *)&local_1c))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 0xf;
  ((SCStr *)((SCStr *)&local_20))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 0x10;
  ((SCStr *)((SCStr *)&local_24))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 0x11;
  ((SCStr *)((SCStr *)&local_28))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 0x12;
  ((SCStr *)((SCStr *)&local_2c))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 0x13;
  ((SCStr *)((SCStr *)&local_30))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 0x14;
  ((SCStr *)((SCStr *)&local_34))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 0x15;
  ((SCStr *)((SCStr *)&local_38))->int_release();

  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x16)));
  ((SCStr *)((SCStr *)&local_3c))->int_release();


  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(param_2);

 } catch (...) { }
}


// Reference entry 10216ee0; body size 100 bytes.
#line 1 "ENTRY_10216ee0"

undefined4 * __thiscall Recovered_Bulk::FUN_10216ee0(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int *)(param_1);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x138))(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_2 = (undefined4)(uVar1);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10217340; body size 185 bytes.
#line 1 "ENTRY_10217340"

int __thiscall Recovered_Bulk::FUN_10217340(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  
  if (*(int *)(param_1 + 0x5c) == 0) {
    return (int)(-1);
  }
  pcVar7 = (char *)("");
  if ((char *)*param_2 != (char *)0x0) {
    pcVar7 = (char *)((char *)*param_2);
  }
  cVar2 = (char)(*pcVar7);
  if (cVar2 == '#') {
    cVar2 = (char)((**(code **)(*(int *)(param_1 + -0x80) + 0x13c))());
    if ((cVar2 == '\0') && (*(char *)(param_1 + 0x51) == '\0')) {
      return (int)(0);
    }
    iVar3 = (int)((**(code **)(*(int *)(param_1 + -0x80) + 0xbc))());
    return (int)(iVar3);
  }
  uVar4 = (uint)(1);
  uVar5 = (uint)(1);
  if (cVar2 != 'A') {
    do {
      uVar5 = (uint)(uVar4);
      if (0x1a < uVar4) break;
      uVar5 = (uint)(uVar4 + 1);
      iVar3 = (int)(uVar4 + 1);
      uVar4 = (uint)(uVar5);
    } while ("#ABCDEFGHIJKLMNOPQRSTUVWXYZ"[iVar3] != cVar2);
  }
  piVar1 = (int *)((int *)(param_1 + 0x7c + uVar5 * 4));
  iVar3 = (int)(*(int *)(param_1 + 0x7c + uVar5 * 4));
  while (iVar3 == -1) {
    piVar1 = (int *)(piVar1 + 1);
    uVar5 = (uint)(uVar5 + 1);
    iVar3 = (int)(*piVar1);
  }
  iVar3 = (int)(param_1 + uVar5 * 4);
  cVar2 = (char)((**(code **)(*(int *)(param_1 + -0x80) + 0x13c))());
  if (cVar2 != '\0') {
    iVar6 = (int)((**(code **)(*(int *)(param_1 + -0x80) + 0xbc))());
    return (int)(iVar6 + *(int *)(iVar3 + 0x7c));
  }
  return (int)(*(int *)(iVar3 + 0x7c));
}


// Reference entry 10217430; body size 166 bytes.
#line 1 "ENTRY_10217430"

int * __stdcall FUN_10217430(int *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *local_14;
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
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  *param_1 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 10217670; body size 159 bytes.
#line 1 "ENTRY_10217670"

uint __fastcall FUN_10217670(int *param_1)

{
 try {
  bool bVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  uint extraout_EAX;
  SCStr *pSVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  local_14 = (int *)(param_1);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("PlayModelHeroView");
  pSVar4 = (SCStr *)((SCStr *)&local_14);

  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  bVar1 = (bool)(((SCLibParameters *)(*(SCLibParameters **)(pSVar3 + 0x4c)))->hasDeveloperOption(pSVar4));

  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (int *)((int *)0x0);

  if (bVar1) {

    return (uint)(extraout_EAX & 0xffffff00);
  }
  uVar2 = (uint)((**(code **)(*param_1 + 0x17c))(uVar2));

  return (uint)(uVar2);

 } catch (...) { }
}


// Reference entry 10217740; body size 124 bytes.
#line 1 "ENTRY_10217740"

void __fastcall FUN_10217740(int *param_1)

{
 try {
  undefined1 local_b0 [156];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (uint)(DAT_12126b84);

  (**(code **)(*param_1 + 0xf0))(local_b0,local_14);

  thunk_FUN_10509ca0(local_b0,0);
  thunk_FUN_10202e00();

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 102177e0; body size 160 bytes.
#line 1 "ENTRY_102177e0"

undefined1 __fastcall FUN_102177e0(int param_1)

{
 try {
  void *_Memory;
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int)(param_1);
  uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x58) + 0x134))
                    (&local_14,DAT_12126b84 ));

  uVar2 = (undefined1)(thunk_FUN_110a5ba0(uVar3,"object.container.album.musicAlbum"));
  iVar1 = (int)(local_14);

  if ((local_14 != 0) && (_Memory = (void *)(local_14 + -0x10), *(int *)(local_14 + -0x10) < 0xffff)
     ) {
    iVar4 = (int)(thunk_FUN_1123fcd0(_Memory));
    if (iVar4 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free(_Memory);
    }
  }

  return (undefined1)(uVar2);

 } catch (...) { }
}


// Reference entry 10217af0; body size 256 bytes.
#line 1 "ENTRY_10217af0"

void __fastcall FUN_10217af0(int *param_1)

{
 try {
  char cVar1;
  undefined1 local_14c [156];
  void *local_b0;
  undefined1 *puStack_ac;
  undefined4 local_a8;
  undefined1 local_a4 [8];
  undefined1 local_9c [20];
  char *local_88;
  uint local_8;


  local_8 = (uint)(DAT_12126b84 ^ (uint)local_a4);

  cVar1 = (char)((**(code **)(*param_1 + 0xdc))(local_8));
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0xec))(local_a4);

    cVar1 = (char)(thunk_FUN_110a5ba0(local_9c,"object.item.event"));
    if ((cVar1 == '\0') &&
       ((((char)param_1[0x40] == '\0' || (local_88 == (char *)0x0)) || (*local_88 == '\0')))) {
      (**(code **)(*param_1 + 0xf0))(local_14c);
      local_a8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_a8 + 1)) << 8 | (uint)(1)));
      thunk_FUN_10509ca0(local_14c,0);
      thunk_FUN_10202e00();
    }
    thunk_FUN_10202e00();
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10217cd0; body size 252 bytes.
#line 1 "ENTRY_10217cd0"

void __fastcall FUN_10217cd0(int param_1)

{
 try {
  int *piVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (*(int *)(param_1 + 0x10c) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x110));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10c) = 0;
      *(undefined4 *)(param_1 + 0x110) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
  }

  pvVar2 = (void *)(operator_new(0x28));

  if (pvVar2 == (void *)0x0) {
    uVar3 = (undefined4)(0);
  }
  else {
    iStack_34 = (int)(param_1 + 0x18);

    iStack_30 = (int)(param_1);
    ((SCStr *)((SCStr *)&iStack_34))->int_allocRep("SCIBrowseItem:onItemChanged");
    uVar3 = (undefined4)(thunk_FUN_10201010());
  }


  pvVar2 = (void *)(operator_new(0x6c));

  if (pvVar2 == (void *)0x0) {
    iStack_30 = (int)(0);
  }
  else {

    iStack_30 = (int)(thunk_FUN_111c06e0());
  }

  iStack_34 = (int)(0x10217dbb);
  uStack_2c = (undefined4)(uVar3);
  thunk_FUN_102207b0();

  return;

 } catch (...) { }
}


// Reference entry 10218810; body size 205 bytes.
#line 1 "ENTRY_10218810"

undefined1 __thiscall Recovered_Bulk::FUN_10218810(char *param_2)
{
  int param_1 = (int )this;
 try {
  char *_Memory;
  undefined4 uVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined1 uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);

  uVar6 = (undefined1)(7);
  if (param_2 < (char *)(*(int *)(param_1 + 0x1dc) - *(int *)(param_1 + 0x1d8) >> 2)) {
    thunk_FUN_10206850(&param_2,param_2);

    if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
      cVar3 = (char)(thunk_FUN_111a0e70("/getaa"));
      uVar6 = (undefined1)(cVar3 != '\0');
    }
    pcVar2 = (char *)(param_2);

    if ((param_2 != (char *)0x0) && (_Memory = param_2 + -0x10, *(int *)(param_2 + -0x10) < 0xffff))
    {
      iVar5 = (int)(thunk_FUN_1123fcd0(_Memory,uVar4));
      if (iVar5 == 0) {
        uVar1 = (undefined4)(*(undefined4 *)(pcVar2 + -4));
        pcVar2[-0xffffffff00000008] = '\0';
        pcVar2[-0xffffffff00000007] = '\0';
        pcVar2[-0xffffffff00000006] = '\0';
        pcVar2[-0xffffffff00000005] = '\0';
        pcVar2[-0xffffffff0000000c] = '\0';
        pcVar2[-0xffffffff0000000b] = '\0';
        pcVar2[-0xffffffff0000000a] = '\0';
        pcVar2[-0xffffffff00000009] = '\0';
        thunk_FUN_113cfb70(pcVar2,uVar1);
        free(_Memory);
      }
    }
  }

  return (undefined1)(uVar6);

 } catch (...) { }
}


// Reference entry 10218f20; body size 207 bytes.
#line 1 "ENTRY_10218f20"

undefined4 *** FUN_10218f20(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  undefined4 ***pppuVar5;
  undefined1 *puVar6;
  undefined4 **local_4;
  
  local_4 = (undefined4 **)((undefined4 ***)0x0);
  thunk_FUN_110828b0();
  puVar6 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)((undefined1 *)*param_2);
  }
  piVar2 = (int *)((int *)thunk_FUN_110935f0(puVar6,0));
  if (((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 0x54))(), iVar3 == 1)) &&
     (iVar3 = (**(code **)(*piVar2 + 0x5c))(),
     ((*(ushort *)(iVar3 + 4) & 0x7f) - 1 & 0xfffffffe) == 6)) {
    cVar1 = (char)(thunk_FUN_110db5f0());
    if (cVar1 == '\0') {
      iVar3 = (int)((**(code **)(*piVar2 + 0x24))());
      if (iVar3 == 0) {
        return (undefined4 ***)((undefined4 ***)local_4);
      }
      iVar3 = (int)(*(int *)(iVar3 + 0x1994));
      uVar4 = (undefined4)(extraout_ECX_00);
    }
    else {
      iVar3 = (int)((**(code **)(*piVar2 + 0x24))());
      if (iVar3 == 0) {
        return (undefined4 ***)((undefined4 ***)local_4);
      }
      iVar3 = (int)(thunk_FUN_110ecc20());
      uVar4 = (undefined4)(extraout_ECX);
    }
    if (iVar3 != 0) {
      pppuVar5 = (undefined4 ***)(&local_4);
      thunk_FUN_101a2b90(param_1);
      cVar1 = (char)(thunk_FUN_110b59c0(uVar4,pppuVar5));
      if (cVar1 == '\0') {
        pppuVar5 = (undefined4 ***)(&local_4);
        cVar1 = (char)(thunk_FUN_110b5aa0(param_3));
        if (cVar1 == '\0') {
          pppuVar5 = (undefined4 ***)((undefined4 ***)0x0);
        }
        return (undefined4 ***)(pppuVar5);
      }
    }
  }
  return (undefined4 ***)((undefined4 ***)local_4);
}


// Reference entry 102194a0; body size 143 bytes.
#line 1 "ENTRY_102194a0"

undefined1 FUN_102194a0(int param_1)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  uVar1 = thunk_FUN_111a0720("{releaseDate}");

  if ((param_1 != 0) && (*(int *)(param_1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(param_1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + -8) = 0;
      *(undefined4 *)(param_1 + -0xc) = 0;
      thunk_FUN_113cfb70(param_1,*(undefined4 *)(param_1 + -4));
      free((void *)(param_1 + -0x10));
    }
  }

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10219650; body size 75 bytes.
#line 1 "ENTRY_10219650"

void __fastcall FUN_10219650(int *param_1)

{
  SCStr aSStack_18 [4];
  int *piStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  *(undefined2 *)(param_1 + 0x33) = 0;
  *(undefined1 *)(param_1 + 0x31) = 1;
  *(undefined1 *)(param_1 + 0x10) = 1;
  param_1[0x32] = 0;
  uStack_10 = (undefined4)(0x1021967c);
  (**(code **)(*param_1 + 0x114))();
  uStack_10 = (undefined4)(0);
  piStack_14 = (int *)(param_1);
  ((SCStr *)(aSStack_18))->int_allocRep("SCIBrowseDataSource:onInvalidation");
  thunk_FUN_103d63d0();
  *(undefined1 *)((int)param_1 + 0x41) = 0;
  return;
}


// Reference entry 10219ac0; body size 179 bytes.
#line 1 "ENTRY_10219ac0"

bool __thiscall Recovered_Bulk::FUN_10219ac0(int param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  
  switch(param_2) {
  case 0:
  case 1:
    return (bool)(true);
  case 2:
    break;
  case 3:
    if ((char *)param_1[0x26] == (char *)0x0) {
      return (bool)(false);
    }
    if (*(char *)param_1[0x26] == '\0') {
      return (bool)(false);
    }
    return (bool)(true);
  case 4:
  case 5:
  case 6:
    iVar3 = (int)(thunk_FUN_1020d760());
    if ((iVar3 != 0) && (uVar4 = *(int *)(iVar3 + 0x24) - *(int *)(iVar3 + 0x20) >> 3, uVar4 != 0))
    {
      return (bool)(param_2 - 4U < uVar4);
    }
    uVar2 = (undefined1)((**(code **)(*param_1 + 0x4c))(*(undefined4 *)(&DAT_11887338 + (param_2 - 4U) * 4)));
    return (bool)((bool)uVar2);
  case 7:
    uVar2 = (undefined1)((**(code **)(*param_1 + 0x78))());
    return (bool)((bool)uVar2);
  default:
    return (bool)(false);
  }
  cVar1 = (char)(thunk_FUN_10220d70());
  if (cVar1 != '\0') {
    return (bool)(true);
  }
  cVar1 = (char)(thunk_FUN_10220fc0());
  if (cVar1 != '\0') {
    return (bool)(true);
  }
  cVar1 = (char)(thunk_FUN_110a5ba0(param_1 + 0x1b,"object.container.podcast"));
  if (cVar1 != '\0') {
    return (bool)(true);
  }
  cVar1 = (char)(thunk_FUN_110a5ba0(param_1 + 0x1b,"object.item.audioItem.podcast"));
  if (cVar1 != '\0') {
    return (bool)(true);
  }
  return (bool)(false);
}


// Reference entry 10219ef0; body size 84 bytes.
#line 1 "ENTRY_10219ef0"

undefined4 __fastcall FUN_10219ef0(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined1 *puVar3;
  
  thunk_FUN_110828b0();
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0xb8) != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)(*(undefined1 **)(param_1 + 0xb8));
  }
  piVar2 = (int *)((int *)thunk_FUN_11093530(puVar3,0));
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0xb4) != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(*(undefined1 **)(param_1 + 0xb4));
    }
    cVar1 = (char)((**(code **)(*piVar2 + 0xa8))(puVar3));
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 1021acc0; body size 217 bytes.
#line 1 "ENTRY_1021acc0"

undefined1 __fastcall FUN_1021acc0(int *param_1)

{
 try {
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  cVar1 = (char)((**(code **)(*param_1 + 0x14))(DAT_12126b84 ));
  if (cVar1 == '\0') {

    return (undefined1)(0);
  }
  uVar3 = (undefined4)((**(code **)(*(int *)param_1[7] + 0x138))(&local_14));

  thunk_FUN_101fcfa0(uVar3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  cVar1 = (char)((**(code **)(*(int *)param_1[7] + 0x13c))());
  if (cVar1 == '\0') {
    iVar4 = (int)(param_1[6]);
  }
  else {
    iVar4 = (int)((**(code **)(*(int *)param_1[7] + 0xbc))());
    iVar4 = (int)(param_1[6] + iVar4);
  }
  if (local_1c == 0) {
    uVar2 = (undefined1)(0);
  }
  else {
    uVar2 = (undefined1)(thunk_FUN_104dd4a0(iVar4));
  }

  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }

  return (undefined1)(uVar2);

 } catch (...) { }
}


// Reference entry 1021ae30; body size 293 bytes.
#line 1 "ENTRY_1021ae30"

void __fastcall FUN_1021ae30(int param_1)

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
  if (*(undefined1 **)(param_1 + 0xb8) != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 0xb8));
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


// Reference entry 1021b310; body size 185 bytes.
#line 1 "ENTRY_1021b310"

void FUN_1021b310(undefined4 param_1,int param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 local_54 [32];
  undefined1 local_34 [32];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;


  local_14 = (uint)(DAT_12126b84);

  if (param_2 == 0) {
    uVar1 = (undefined4)(thunk_FUN_1124d7e0(local_34,local_14));
    uVar2 = (uint)(2);
  }
  else {
    uVar1 = (undefined4)(thunk_FUN_1124d980(local_54,param_2));
    uVar2 = (uint)(1);
  }
  local_8 = (uint)((uint)(param_2 == 0));
  uVar3 = (uint)(uVar2);
  thunk_FUN_1124d740(uVar1);
  if ((uVar2 & 2) != 0) {
    uVar2 = (uint)(uVar2 & 0xfffffffd);
    thunk_FUN_1124d790();
  }
  if ((uVar2 & 1) != 0) {
    thunk_FUN_1124d790();
  }

  thunk_FUN_1148ac28(param_1,uVar3);
  return;

 } catch (...) { }
}


// Reference entry 1021bf80; body size 1735 bytes.
#line 1 "ENTRY_1021bf80"

void __thiscall Recovered_Bulk::FUN_1021bf80(int *param_2,int *param_3)
{
  int *param_1 = (int *)this;
 try {
  char cVar1;
  bool bVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  int *piVar7;
  int iVar8;
  SCLibrary *pSVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 *puVar14;
  char *pcVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  SCStr *pSVar19;
  undefined4 uVar20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);

  *(undefined1 *)(param_1 + 0x31) = 1;
  *(undefined2 *)(param_1 + 0x33) = 0;
  param_1[0x32] = (int)param_3;
  iVar5 = (int)(thunk_FUN_110828b0(uVar4));
  puVar14 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)param_1[0x2e] != (undefined1 *)0x0) {
    puVar14 = (undefined1 *)((undefined1 *)param_1[0x2e]);
  }
  param_3 = (int *)((int *)thunk_FUN_11093530(puVar14,0));
  if (param_1[0x1a] != 0) {
    piVar10 = (int *)((int *)param_1[0x1b]);
    if (piVar10 != (int *)0x0) {
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      (**(code **)(*piVar10 + 8))();
    }
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  if (param_1[0x2b] != 0) {
    piVar10 = (int *)((int *)param_1[0x2c]);
    if (piVar10 != (int *)0x0) {
      param_1[0x2b] = 0;
      param_1[0x2c] = 0;
      (**(code **)(*piVar10 + 8))();
    }
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
  }
  *(undefined2 *)((int)param_1 + 0xcf) = 0;
  pcVar15 = (char *)("");
  if ((char *)param_2[0xf] != (char *)0x0) {
    pcVar15 = (char *)((char *)param_2[0xf]);
  }
  uVar6 = (ulong)(strtoul(pcVar15,(char **)0x0,10));
  if ((uVar6 & 1) != 0) {
    *(undefined1 *)((int)param_1 + 0xd2) = 1;
  }
  if (((char *)param_1[0x2f] == (char *)0x0) || (*(char *)param_1[0x2f] == '\0')) goto LAB_1021c23a;
  piVar10 = (int *)(param_1 + 0x30);
  cVar1 = (char)(thunk_FUN_110a5ba0(piVar10,"object.container.album.musicAlbum"));
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_110a5ba0(piVar10,"object.item.audioItem.audioBroadcast"));
    if (cVar1 != '\0') {
      cVar1 = (char)((**(code **)(*param_1 + 0x78))());
      if (cVar1 != '\0') {
        *(undefined2 *)((int)param_1 + 0xcf) = 1;
        goto LAB_1021c243;
      }
    }
    bVar2 = (bool)(((SCStr *)((SCStr *)(param_1 + 0x2d)))->beginsWith("S://"));
    if (bVar2) {
      *(bool *)((int)param_1 + 0xcf) = param_1[0x32] != 0;
      *(bool *)(param_1 + 0x34) = 1 < (uint)param_1[0x32];
    }
    else {
      cVar1 = (char)(thunk_FUN_110a5ba0(piVar10,"object.container.playlistContainer"));
      if (cVar1 == '\0') {
        pcVar15 = (char *)("");
        if ((char *)*piVar10 != (char *)0x0) {
          pcVar15 = (char *)((char *)*piVar10);
        }
        iVar8 = (int)(strncmp(pcVar15,"object.container.radioShow",0x1a));
        if ((iVar8 != 0) ||
           (((cVar1 = pcVar15[0x1a], cVar1 != '.' && (cVar1 != '#')) && (cVar1 != '\0')))) {
          pcVar15 = (char *)("");
          if ((char *)*piVar10 != (char *)0x0) {
            pcVar15 = (char *)((char *)*piVar10);
          }
          iVar8 = (int)(strncmp(pcVar15,"object.container.podcast",0x18));
          if ((iVar8 != 0) ||
             (((cVar1 = pcVar15[0x18], cVar1 != '.' && (cVar1 != '#')) && (cVar1 != '\0')))) {
            cVar1 = (char)(thunk_FUN_110a5ba0(param_2 + 2,"object.item.audioItem.musicTrack"));
            if ((cVar1 != '\0') && (param_3 != (int *)0x0)) {
              puVar14 = (undefined1 *)(&DAT_1186d2ee);
              if ((undefined1 *)param_1[0x2d] != (undefined1 *)0x0) {
                puVar14 = (undefined1 *)((undefined1 *)param_1[0x2d]);
              }
              cVar1 = (char)((**(code **)(*param_3 + 0xa8))(puVar14));
              if (cVar1 != '\0') {
                *(bool *)((int)param_1 + 0xcf) = param_1[0x32] != 0;
                *(bool *)(param_1 + 0x34) = 1 < (uint)param_1[0x32];
              }
            }
            goto LAB_1021c243;
          }
        }
LAB_1021c23a:
        *(undefined2 *)((int)param_1 + 0xcf) = 0;
      }
      else {
        *(bool *)((int)param_1 + 0xcf) = param_1[0x32] != 0;
        *(bool *)(param_1 + 0x34) = 1 < (uint)param_1[0x32];
      }
    }
  }
  else {
    *(bool *)((int)param_1 + 0xcf) = param_1[0x32] != 0;
    *(bool *)(param_1 + 0x34) = 1 < (uint)param_1[0x32];
  }
LAB_1021c243:
  if (*(char *)((int)param_1 + 0xcf) != '\0') {
    piVar7 = (int *)((int *)(**(code **)(*param_1 + 0x198))(&param_2,0));
    piVar10 = (int *)((int *)*piVar7);
    *piVar7 = (int)(0);
    piVar7 = (int *)((int *)param_1[0x1b]);

    if (piVar7 != (int *)0x0) {
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      (**(code **)(*piVar7 + 8))();
    }
    param_1[0x1a] = (int)piVar10;
    if (piVar10 == (int *)0x0) {
      iVar8 = (int)(0);
    }
    else {
      iVar8 = (int)((**(code **)(*piVar10 + 0xc))());
    }
    param_1[0x1b] = iVar8;

    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 8))();
    }

    pcVar15 = (char *)("");
    if ((char *)param_1[0x30] != (char *)0x0) {
      pcVar15 = (char *)((char *)param_1[0x30]);
    }
    iVar8 = (int)(strncmp(pcVar15,"object.container.podcast",0x18));
    if ((iVar8 != 0) ||
       (((cVar1 = pcVar15[0x18], cVar1 != '.' && (cVar1 != '#')) && (cVar1 != '\0')))) {
      cVar1 = (char)(thunk_FUN_110a5ba0(param_1 + 0x30,"object.item.audioItem.audioBroadcast"));
      if (cVar1 != '\0') {
        cVar1 = (char)((**(code **)(*param_1 + 0x78))());
        if (cVar1 != '\0') goto LAB_1021c391;
      }
      piVar7 = (int *)((int *)(**(code **)(*param_1 + 0x198))(&param_2,1));
      piVar10 = (int *)((int *)*piVar7);
      *piVar7 = (int)(0);
      piVar7 = (int *)((int *)param_1[0x2c]);

      if (piVar7 != (int *)0x0) {
        param_1[0x2b] = 0;
        param_1[0x2c] = 0;
        (**(code **)(*piVar7 + 8))();
      }
      param_1[0x2b] = (int)piVar10;
      if (piVar10 == (int *)0x0) {
        iVar8 = (int)(0);
      }
      else {
        iVar8 = (int)((**(code **)(*piVar10 + 0xc))());
      }
      param_1[0x2c] = iVar8;

      if (param_2 != (int *)0x0) {
        (**(code **)(*param_2 + 8))();
      }

    }
LAB_1021c391:
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("PlayModelHeroView");
    pSVar19 = (SCStr *)((SCStr *)&param_2);

    pSVar9 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    bVar2 = (bool)(((SCLibParameters *)(*(SCLibParameters **)(pSVar9 + 0x4c)))->hasDeveloperOption(pSVar19));

    ((SCStr *)((SCStr *)&param_2))->int_release();

    if (bVar2) {
      if ((int *)param_1[0x1a] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0x1a] + 0x14))(param_1[0x26],1);
      }
      if ((int *)param_1[0x2b] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0x2b] + 0x14))(param_1[0x26],1);
      }
    }
  }
  piVar10 = (int *)(param_3);
  *(undefined1 *)(param_1 + 0x36) = 1;
  if ((0x13 < (uint)param_1[0x32]) && (param_3 != (int *)0x0)) {
    puVar14 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)param_1[0x2d] != (undefined1 *)0x0) {
      puVar14 = (undefined1 *)((undefined1 *)param_1[0x2d]);
    }
    cVar1 = (char)((**(code **)(*param_3 + 0xa4))(puVar14));
    if (cVar1 != '\0') {
      puVar14 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)param_1[0x2e] != (undefined1 *)0x0) {
        puVar14 = (undefined1 *)((undefined1 *)param_1[0x2e]);
      }
      iVar8 = (int)(thunk_FUN_110935f0(puVar14,0));
      if (iVar8 == 0) {
        iVar5 = (int)((*(code *)**(undefined4 **)(iVar5 + 0x1c))());
        if (iVar5 == 0) goto LAB_1021c629;
        param_2 = (int *)((int *)thunk_FUN_110cb9c0());
        if (param_2 == (int *)0x0) goto LAB_1021c629;
        piVar10 = (int *)(operator_new(0xdbd8));

        param_3 = (int *)(piVar10);
        if (piVar10 == (int *)0x0) {
          piVar10 = (int *)((int *)0x0);
        }
        else {
          iVar5 = (int)(param_2[0xb]);
          uVar11 = (undefined4)((**(code **)(*(int *)(iVar5 + 4 + *(int *)(*(int *)(iVar5 + 4) + 4)) + 0x48))());
          uVar20 = (undefined4)(0);
          uVar18 = (undefined4)(0);
          iVar8 = (int)(*(int *)(*(int *)(iVar5 + 4) + 4));
          uVar17 = (undefined4)(2000);
          uVar16 = (undefined4)(2000);
          uVar12 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar5 + 4) + 4) + 4 + iVar5) + 0x50))
                             (2000,2000,0,0));
          pcVar15 = (char *)("GetAllPrefixLocations");
          uVar13 = (undefined4)((**(code **)(*(int *)(iVar5 + iVar8 + 4) + 0x68))("GetAllPrefixLocations",uVar12));
          thunk_FUN_111c0760(uVar11,uVar13,pcVar15,uVar12,uVar16,uVar17,uVar18,uVar20);
          *piVar10 = (int)((int)(uint)&ghidra_vftable_RUpnpCDGetAllPrefixLocationsAIOOp);
          piVar10[0x18] = (int)(uint)&ghidra_vftable_RUpnpCDGetAllPrefixLocationsAIOOp;
          piVar10[0x11b] = (int)(uint)&ghidra_vftable_RUpnpCDGetAllPrefixLocationsAIOOp;
          piVar10[0x35f4] = 0;
          piVar10[0x36f5] = 0;
          *(undefined1 *)(piVar10 + 0x35f5) = 0;
        }

        puVar14 = (undefined1 *)(&DAT_1186d2ee);
        if ((undefined1 *)param_1[0x2d] != (undefined1 *)0x0) {
          puVar14 = (undefined1 *)((undefined1 *)param_1[0x2d]);
        }
        piVar7 = (int *)((int *)thunk_FUN_1124ffa0("ObjectID",0));
        (**(code **)(*piVar7 + 0xc))(puVar14);
        piVar7 = (int *)(piVar10 + 0x35f4);
        thunk_FUN_1124ff50("TotalPrefixes");
        thunk_FUN_112504b0(piVar7);
        uVar11 = (undefined4)(0x400);
        piVar7 = (int *)(piVar10 + 0x35f5);
        thunk_FUN_1124ff50("PrefixAndIndexCSV");
        thunk_FUN_112503c0(piVar7,uVar11);
        piVar7 = (int *)(piVar10 + 0x36f5);
        thunk_FUN_1124ff50("UpdateID");
        thunk_FUN_112504b0(piVar7);
        *(undefined1 *)(param_1 + 0x36) = 0;
      }
      else {
        piVar10 = (int *)((int *)(**(code **)(*piVar10 + 0x28))());
        puVar14 = (undefined1 *)(&DAT_1186d2ee);
        if ((undefined1 *)param_1[0x2d] != (undefined1 *)0x0) {
          puVar14 = (undefined1 *)((undefined1 *)param_1[0x2d]);
        }
        sVar3 = (short)((**(code **)(*piVar10 + 0x10))(puVar14,&param_3));
        if (sVar3 != 0) goto LAB_1021c629;
        *(undefined1 *)(param_1 + 0x36) = 0;
        piVar10 = (int *)((int *)(-(uint)(param_3 != (int *)0x0) & (uint)(param_3 + 1)));
      }
      thunk_FUN_102207b0(piVar10,param_1 + 0x22,0);
    }
  }
LAB_1021c629:
  (**(code **)(*param_1 + 0x18c))();

  return;

 } catch (...) { }
}


// Reference entry 1021d0d0; body size 335 bytes.
#line 1 "ENTRY_1021d0d0"

void __fastcall FUN_1021d0d0(int *param_1)

{
 try {
  char cVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  int *piVar5;
  undefined4 uStack_34;
  int *piStack_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piStack_30 = (int *)((int *)0x1021d102);
  thunk_FUN_104d9900();
  thunk_FUN_110828b0();
  piStack_30 = (int *)((int *)0x1021d110);
  pvVar2 = (void *)(operator_new(0x20));

  if (pvVar2 == (void *)0x0) {
    iVar3 = (int)(0);
  }
  else {
    piStack_30 = (int *)((int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x24)));

    iVar3 = (int)(thunk_FUN_104ddfd0());
  }

  param_1[0x90] = iVar3;
  thunk_FUN_104deb40();
  piVar4 = (int *)((int *)thunk_FUN_104ea590());
  piVar5 = (int *)((int *)0x0);
  if (piVar4 != (int *)0x0) {
    piVar5 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
    (**(code **)(*piVar5 + 4))();
  }

  if (piVar4 != (int *)0x0) {
    piStack_30 = (int *)(param_1 + 0x23);

    thunk_FUN_104e7580();
  }
  piVar4 = (int *)((int *)param_1[0x92]);
  if (piVar4 != (int *)0x0) {
    param_1[0x91] = 0;
    param_1[0x92] = 0;
    (**(code **)(*piVar4 + 8))();
  }
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  cVar1 = (char)((**(code **)(*param_1 + 0x90))());
  if (cVar1 != '\0') {
    uStack_34 = (undefined4)(extraout_ECX);
    piStack_30 = (int *)(param_1);
    ((SCStr *)((SCStr *)&uStack_34))->int_allocRep("SCIBrowseDataSource:onInvalidation");
    thunk_FUN_103d65f0();
    *(undefined1 *)((int)param_1 + 0x41) = 0;
  }

  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 1021d2a0; body size 225 bytes.
#line 1 "ENTRY_1021d2a0"

void __fastcall FUN_1021d2a0(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  
  thunk_FUN_1021d3c0();
  thunk_FUN_110b0460(1);
  thunk_FUN_110adac0(-(uint)(param_1 != 0) & param_1 + 0x250U);
  thunk_FUN_110828b0();
  if (*(char *)(param_1 + 0x274) != '\0') {
    *(undefined1 *)(param_1 + 0x274) = 0;
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0xb8) != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 0xb8));
    }
    piVar1 = (int *)((int *)thunk_FUN_110935f0(puVar2,0));
    if (piVar1 != (int *)0x0) {
      piVar1 = (int *)((int *)(**(code **)(*piVar1 + 0x24))());
      (**(code **)(*piVar1 + 0x34))();
    }
  }
  thunk_FUN_104ddf90();
  if (*(undefined4 **)(param_1 + 0x270) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x270))(1);
  }
  if (*(int **)(param_1 + 0x268) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x268) + 0x18))(*(undefined4 *)(param_1 + 0x25c));
    if (*(int *)(param_1 + 0x268) != 0) {
      piVar1 = (int *)(*(int **)(param_1 + 0x26c));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x268) = 0;
        *(undefined4 *)(param_1 + 0x26c) = 0;
        (**(code **)(*piVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 0x268) = 0;
      *(undefined4 *)(param_1 + 0x26c) = 0;
    }
  }
  return;
}


// Reference entry 1021d3c0; body size 547 bytes.
#line 1 "ENTRY_1021d3c0"

void __fastcall FUN_1021d3c0(int param_1)

{
 try {
  bool bVar1;
  int iVar2;
  int *piVar3;
  SCLibrary *pSVar4;
  int *piVar5;
  SCStr *pSVar6;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;


  thunk_FUN_104d9cc0(DAT_12126b84 );
  piVar3 = (int *)(*(int **)(param_1 + 0xf4));
  if (piVar3 != (int *)0x0) {
    if (*(int *)(param_1 + 0xf8) != 0) {
      (**(code **)(*piVar3 + 0x10))();
      piVar3 = (int *)(*(int **)(param_1 + 0xf4));
    }
    if (piVar3 != (int *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(piVar3 + 1));
      if ((iVar2 == 0) && (piVar3 != (int *)0x0)) {
        (**(code **)*piVar3)(1);
      }
    }
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
  }
  piVar3 = (int *)(*(int **)(param_1 + 0xe8));
  if (piVar3 != (int *)0x0) {
    if (*(int *)(param_1 + 0xec) != 0) {
      (**(code **)(*piVar3 + 0x10))();
      piVar3 = (int *)(*(int **)(param_1 + 0xe8));
    }
    if (piVar3 != (int *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(piVar3 + 1));
      if ((iVar2 == 0) && (piVar3 != (int *)0x0)) {
        (**(code **)*piVar3)(1);
      }
    }
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  *(undefined2 *)(param_1 + 0xc4) = 0;
  piVar3 = (int *)(*(int **)(param_1 + 0x248));
  if (piVar3 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x244) = 0;
    *(undefined4 *)(param_1 + 0x248) = 0;
    (**(code **)(*piVar3 + 8))();
  }
  *(undefined4 *)(param_1 + 0x244) = 0;
  *(undefined4 *)(param_1 + 0x248) = 0;
  thunk_FUN_104dec20();
  if (*(undefined4 **)(param_1 + 0x240) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x240))(1);
  }
  piVar3 = (int *)((int *)thunk_FUN_104ea590());
  piVar5 = (int *)((int *)0x0);
  if (piVar3 != (int *)0x0) {
    piVar5 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
    (**(code **)(*piVar5 + 4))();
  }

  if (piVar3 != (int *)0x0) {
    thunk_FUN_104ed040(param_1 + 0x8c,param_1 + 0xb4);
  }
  ((SCStr *)(local_14))->int_allocRep("PlayModelHeroView");
  pSVar6 = (SCStr *)(local_14);
  local_8 = (uint)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  pSVar4 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  bVar1 = (bool)(((SCLibParameters *)(*(SCLibParameters **)(pSVar4 + 0x4c)))->hasDeveloperOption(pSVar6));
  if (((bVar1) && (*(int *)(param_1 + 0x68) != 0)) && (*(int *)(param_1 + 0xac) != 0)) {
    bVar1 = (bool)(true);
  }
  else {
    bVar1 = (bool)(false);
  }

  ((SCStr *)(local_14))->int_release();
  local_8 = (uint)(local_8 & 0xffffff00);
  if (bVar1) {
    if (*(int **)(param_1 + 0x68) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x68) + 0x18))(*(undefined4 *)(param_1 + 0x98));
    }
    if (*(int **)(param_1 + 0xac) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xac) + 0x18))(*(undefined4 *)(param_1 + 0x98));
    }
  }

  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 1021db00; body size 118 bytes.
#line 1 "ENTRY_1021db00"

void __stdcall FUN_1021db00(int param_1)

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


// Reference entry 1021dcd0; body size 118 bytes.
#line 1 "ENTRY_1021dcd0"

void __stdcall FUN_1021dcd0(int param_1)

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


// Reference entry 1021ddb0; body size 89 bytes.
#line 1 "ENTRY_1021ddb0"

void __fastcall FUN_1021ddb0(int param_1)

{
  char cVar1;
  SCStr aSStack_14 [4];
  int *piStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0x1021ddbe);
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x10) + 0x20))());
  if (cVar1 == '\0') {
    uStack_c = (undefined4)(0x1021ddd8);
    cVar1 = (char)((**(code **)(*(int *)(param_1 + -600) + 0x90))());
    if (cVar1 != '\0') {
      uStack_c = (undefined4)(0);
      piStack_10 = (int *)((int *)(param_1 + -600));
      ((SCStr *)(aSStack_14))->int_allocRep("SCIBrowseDataSource:onInvalidation");
      thunk_FUN_103d65f0();
      *(undefined1 *)(param_1 + -0x217) = 0;
      uStack_c = (undefined4)(0);
      piStack_10 = (int *)((int *)0x1021de04);
      (**(code **)(*(int *)(param_1 + -600) + 0x110))();
    }
  }
  return;
}


// Reference entry 1021e2d0; body size 118 bytes.
#line 1 "ENTRY_1021e2d0"

void FUN_1021e2d0(int param_1)

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


// Reference entry 1021e370; body size 118 bytes.
#line 1 "ENTRY_1021e370"

void __stdcall FUN_1021e370(int param_1)

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


// Reference entry 1021f010; body size 119 bytes.
#line 1 "ENTRY_1021f010"

undefined4 * __thiscall Recovered_Bulk::FUN_1021f010(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIActionOnGroupDescriptor"));
  if ((bVar1) || (bVar1 = ((SCStr *)(param_3))->op_eq("SCIActionDescriptor"), bVar1)) {
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


// Reference entry 1021f0b0; body size 150 bytes.
#line 1 "ENTRY_1021f0b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1021f0b0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIBrowseItem"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIBrowseMetadata"));
    if (bVar1) {
      piVar2 = (int *)((int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0xe)));
      *param_2 = (undefined4)(piVar2);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
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
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1021f180; body size 157 bytes.
#line 1 "ENTRY_1021f180"

undefined4 * __thiscall Recovered_Bulk::FUN_1021f180(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIBrowseDataSource"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIBrowseGroupsInfo"));
    if (bVar1) {
      piVar2 = (int *)(param_1 + 0x21);
    }
    else {
      bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIPowerscrollDataSource"));
      if (!bVar1) {
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
      piVar2 = (int *)(param_1 + 0x20);
    }
    param_1 = (int *)((int *)(-(uint)(param_1 != (int *)0x0) & (uint)piVar2));
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 == (int *)0x0) {
    return (undefined4 *)(param_2);
  }
  (**(code **)(*param_1 + 4))();
  return (undefined4 *)(param_2);
}


// Reference entry 1021f270; body size 201 bytes.
#line 1 "ENTRY_1021f270"

int * __thiscall Recovered_Bulk::FUN_1021f270(int *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIBrowseItem"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCITooltip"));
    if (bVar1) {
      piVar2 = (int *)(param_1 + 0x10);
    }
    else {
      bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIBrowseMetadata"));
      if (!bVar1) {
        bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCISelectableItem"));
        if ((bVar1) && ((char)param_1[0x42] != '\0')) {
          param_1 = (int *)(param_1 + 0xf);
          *param_2 = (int)((int)param_1);
          if (param_1 == (int *)0x0) {
            return (int *)(param_2);
          }
          (**(code **)(*param_1 + 4))();
          return (int *)(param_2);
        }
        bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
        if (!bVar1) {
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
      piVar2 = (int *)(param_1 + 0xe);
    }
    param_1 = (int *)((int *)(-(uint)(param_1 != (int *)0x0) & (uint)piVar2));
  }
  *param_2 = (int)((int)param_1);
  if (param_1 == (int *)0x0) {
    return (int *)(param_2);
  }
  (**(code **)(*param_1 + 4))();
  return (int *)(param_2);
}


// Reference entry 1021f3a0; body size 103 bytes.
#line 1 "ENTRY_1021f3a0"

undefined4 * __thiscall Recovered_Bulk::FUN_1021f3a0(undefined4 *param_2,SCStr *param_3)
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


// Reference entry 1021f420; body size 150 bytes.
#line 1 "ENTRY_1021f420"

undefined4 * __thiscall Recovered_Bulk::FUN_1021f420(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIAction"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIActionDelegate"));
    if (bVar1) {
      piVar2 = (int *)((int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 2)));
      *param_2 = (undefined4)(piVar2);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
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
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1021f4f0; body size 103 bytes.
#line 1 "ENTRY_1021f4f0"

undefined4 * __thiscall Recovered_Bulk::FUN_1021f4f0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIInnerActionFactory"));
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


// Reference entry 1021f570; body size 119 bytes.
#line 1 "ENTRY_1021f570"

undefined4 * __thiscall Recovered_Bulk::FUN_1021f570(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIAddToQueueAtNumberDescriptor"));
  if ((bVar1) || (bVar1 = ((SCStr *)(param_3))->op_eq("SCIActionDescriptor"), bVar1)) {
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


// Reference entry 1021f610; body size 103 bytes.
#line 1 "ENTRY_1021f610"

undefined4 * __thiscall Recovered_Bulk::FUN_1021f610(undefined4 *param_2,SCStr *param_3)
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


// Reference entry 1021f6a0; body size 85 bytes.
#line 1 "ENTRY_1021f6a0"

undefined4 __fastcall FUN_1021f6a0(int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  thunk_FUN_110b0460(1);
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x44) != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 0x44));
  }
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x40) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x40));
  }
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x3c) != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)(*(undefined1 **)(param_1 + 0x3c));
  }
  thunk_FUN_110b3620(-(uint)(param_1 != 0) & param_1 + 0x100U,puVar3,puVar1,puVar2,0);
  return (undefined4)(1);
}


// Reference entry 1021f710; body size 88 bytes.
#line 1 "ENTRY_1021f710"

undefined4 __fastcall FUN_1021f710(int *param_1)

{
  int *piVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  if (param_1[0x86] != 0) {
    piVar1 = (int *)((int *)param_1[0x87]);
    if (piVar1 != (int *)0x0) {
      param_1[0x86] = 0;
      param_1[0x87] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    param_1[0x86] = 0;
    param_1[0x87] = 0;
  }
  cVar2 = (char)((**(code **)(*param_1 + 0x90))());
  if (cVar2 != '\0') {
    return (undefined4)(0);
  }
  *(undefined1 *)((int)param_1 + 0xc5) = 0;
  thunk_FUN_110b0460(1);
  param_1[0x37] = 0;
  *(undefined1 *)(param_1 + 0x99) = 1;
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)param_1[0x2d] != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)((undefined1 *)param_1[0x2d]);
  }
  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)param_1[0x2e] != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)((undefined1 *)param_1[0x2e]);
  }
  thunk_FUN_110b2900(param_1 + 0x94,puVar4,puVar3,param_1[0x85]);
  return (undefined4)(1);
}


// Reference entry 1021f768; body size 97 bytes.
#line 1 "ENTRY_1021f768"

undefined4 FUN_1021f768(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  undefined1 *puVar2;
  
  *(undefined1 *)(unaff_EBP + 0xc5) = 0;
  thunk_FUN_110b0460(1);
  *(undefined4 *)(unaff_EBP + 0xdc) = 0;
  *(undefined1 *)(unaff_EBP + 0x264) = 1;
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(unaff_EBP + 0xb4) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(unaff_EBP + 0xb4));
  }
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(unaff_EBP + 0xb8) != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)(*(undefined1 **)(unaff_EBP + 0xb8));
  }
  thunk_FUN_110b2900(unaff_EBP + 0x250,puVar2,puVar1,*(undefined4 *)(unaff_EBP + 0x214));
  return (undefined4)(1);
}


// Reference entry 10220510; body size 193 bytes.
#line 1 "ENTRY_10220510"

undefined4 __stdcall FUN_10220510(undefined4 param_1,undefined4 param_2,char *param_3)

{
 try {
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);

  if (param_3 == (char *)0x0) {
    iVar6 = (int)(0);
  }
  else {
    iVar6 = (int)(*(int *)(param_3 + -0xc));
    if (iVar6 == 0) {
      pcVar5 = (char *)(param_3);
      do {
        cVar1 = (char)(*pcVar5);
        pcVar5 = (char *)(pcVar5 + 1);
      } while (cVar1 != '\0');
      iVar6 = (int)((int)pcVar5 - (int)(param_3 + 1));
      *(int *)(param_3 + -0xc) = iVar6;
    }
  }
  pcVar5 = (char *)("");
  if (param_3 != (char *)0x0) {
    pcVar5 = (char *)(param_3);
  }
  uVar4 = (undefined4)(thunk_FUN_111a1540(param_1,param_2,pcVar5,iVar6));

  if ((param_3 != (char *)0x0) && (*(int *)(param_3 + -0x10) < 0xffff)) {
    iVar6 = (int)(thunk_FUN_1123fcd0(param_3 + -0x10,uVar3));
    if (iVar6 == 0) {
      uVar2 = (undefined4)(*(undefined4 *)(param_3 + -4));
      param_3[-0xffffffff00000008] = '\0';
      param_3[-0xffffffff00000007] = '\0';
      param_3[-0xffffffff00000006] = '\0';
      param_3[-0xffffffff00000005] = '\0';
      param_3[-0xffffffff0000000c] = '\0';
      param_3[-0xffffffff0000000b] = '\0';
      param_3[-0xffffffff0000000a] = '\0';
      param_3[-0xffffffff00000009] = '\0';
      thunk_FUN_113cfb70(param_3,uVar2);
      free(param_3 + -0x10);
    }
  }

  return (undefined4)(uVar4);

 } catch (...) { }
}


// Reference entry 102207b0; body size 132 bytes.
#line 1 "ENTRY_102207b0"

undefined4 __thiscall Recovered_Bulk::FUN_102207b0(int param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
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
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 4) + 4))(param_3,param_4));
      *(undefined4 *)(param_1 + 8) = uVar3;
      return (undefined4)(*(undefined4 *)(param_1 + 4));
    }
  }
  return (undefined4)(0);
}


// Reference entry 10220860; body size 135 bytes.
#line 1 "ENTRY_10220860"

int __thiscall Recovered_Bulk::FUN_10220860(undefined4 param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("ObjectID",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  iVar2 = (int)(param_1 + 0xd7d0);
  thunk_FUN_1124ff50("TotalPrefixes");
  thunk_FUN_112504b0(iVar2);
  uVar3 = (undefined4)(0x400);
  iVar2 = (int)(param_1 + 0xd7d4);
  thunk_FUN_1124ff50("PrefixAndIndexCSV");
  thunk_FUN_112503c0(iVar2,uVar3);
  iVar2 = (int)(param_1 + 0xdbd4);
  thunk_FUN_1124ff50("UpdateID");
  thunk_FUN_112504b0(iVar2);
  return (int)(param_1);
}


// Reference entry 10220920; body size 80 bytes.
#line 1 "ENTRY_10220920"

void __thiscall Recovered_Bulk::FUN_10220920(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if (param_2 != *(int **)(param_1 + 8)) {
    piVar1 = (int *)(*(int **)(param_1 + 0xc));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 8) = param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0xc) = piVar1;
      (**(code **)(*piVar1 + 4))();
      return;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


// Reference entry 102209a0; body size 212 bytes.
#line 1 "ENTRY_102209a0"

void __stdcall FUN_102209a0(int param_1)

{
 try {
  undefined4 uVar1;
  bool bVar2;
  undefined1 local_74 [32];
  undefined1 local_54 [32];
  undefined1 local_34 [32];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;


  local_14 = (uint)(DAT_12126b84);

  bVar2 = (bool)(param_1 == 0);
  if (bVar2) {
    uVar1 = (undefined4)(thunk_FUN_1124d7e0(local_54,local_14));
  }
  else {
    uVar1 = (undefined4)(thunk_FUN_1124d980(local_74,param_1));
  }
  local_8 = (uint)((uint)bVar2);
  thunk_FUN_1124d740(uVar1);
  if (bVar2) {
    thunk_FUN_1124d790();
  }
  else {
    thunk_FUN_1124d790();
  }

  thunk_FUN_1124d7a0(local_34);
  thunk_FUN_1124d790();

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10220b00; body size 331 bytes.
#line 1 "ENTRY_10220b00"

void __thiscall Recovered_Bulk::FUN_10220b00(char param_2)
{
  int *param_1 = (int *)this;
 try {
  int *piVar1;
  char cVar2;
  int *piVar3;
  void *pvVar4;
  int *piStack_44;
  int *piStack_40;
  int iStack_3c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if ((param_2 != '\0') && (cVar2 = (**(code **)(*param_1 + 0x14))(), cVar2 == '\0')) {

    return;
  }
  cVar2 = (char)((**(code **)(*(int *)param_1[7] + 0x13c))());
  if (cVar2 == '\0') {
    local_14 = (int)(param_1[6]);
  }
  else {
    local_14 = (int)((**(code **)(*(int *)param_1[7] + 0xbc))());
    local_14 = (int)(param_1[6] + local_14);
  }
  piVar3 = (int *)((int *)(**(code **)(*(int *)param_1[7] + 0x138))());
  piVar1 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (piVar1 != (int *)0x0) {
    iStack_3c = (int)(0x10220bc2);
    cVar2 = (char)(thunk_FUN_104dd4a0());
    if (cVar2 != param_2) {
      iStack_3c = (int)(local_14);
      if (param_2 == '\0') {
        piStack_40 = (int *)((int *)0x10220bde);
        (**(code **)(*piVar1 + 0x20))();
      }
      else {
        piStack_40 = (int *)((int *)0x10220bd9);
        (**(code **)(*piVar1 + 0x1c))();
      }
      iStack_3c = (int)(0x10220be5);
      pvVar4 = (void *)(operator_new(0x28));
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      if (pvVar4 != (void *)0x0) {
        piStack_44 = (int *)(param_1 + -9);
        if (param_1 == (int *)0x3c) {
          piStack_44 = (int *)((int *)0x0);
        }
        iStack_3c = (int)(0);
        piStack_40 = (int *)(param_1 + -0xf);
        ((SCStr *)((SCStr *)&piStack_44))->int_allocRep("SCIBrowseItem:onItemChanged");
        thunk_FUN_10201010();
      }
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
      thunk_FUN_1020a4c0();
    }
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10220d70; body size 467 bytes.
#line 1 "ENTRY_10220d70"

undefined1 __fastcall FUN_10220d70(int param_1)

{
 try {
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar1 = (int)(*(int *)(param_1 + 0x80));
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0();
  }
  iVar4 = (int)(*(int *)(param_1 + 0x6c));

  if ((iVar4 != 0) && (*(int *)(iVar4 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  (**(code **)(**(int **)(param_1 + 0x58) + 0x134))();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if ((local_18 != 0) && (*(int *)(local_18 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(local_18 + -0x10));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if ((iVar4 != 0) && (*(int *)(iVar4 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0(iVar4 + -0x10,iVar4);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  uVar2 = (undefined1)(thunk_FUN_110a54e0());
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  if (((local_18 != 0) && (*(int *)(local_18 + -0x10) < 0xffff)) &&
     (iVar3 = thunk_FUN_1123fcd0(), iVar3 == 0)) {
    *(undefined4 *)(local_18 + -8) = 0;
    *(undefined4 *)(local_18 + -0xc) = 0;
    thunk_FUN_113cfb70();
    free((void *)(local_18 + -0x10));
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  if (((iVar4 != 0) && (*(int *)(iVar4 + -0x10) < 0xffff)) &&
     (iVar3 = thunk_FUN_1123fcd0(), iVar3 == 0)) {
    *(undefined4 *)(iVar4 + -8) = 0;
    *(undefined4 *)(iVar4 + -0xc) = 0;
    thunk_FUN_113cfb70();
    free((int *)(iVar4 + -0x10));
  }

  if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
     (iVar4 = thunk_FUN_1123fcd0(), iVar4 == 0)) {
    *(undefined4 *)(iVar1 + -8) = 0;
    *(undefined4 *)(iVar1 + -0xc) = 0;
    thunk_FUN_113cfb70();
    free((int *)(iVar1 + -0x10));
  }

  return (undefined1)(uVar2);

 } catch (...) { }
}


// Reference entry 10220fc0; body size 673 bytes.
#line 1 "ENTRY_10220fc0"

undefined1 __fastcall FUN_10220fc0(int param_1)

{
 try {
  int iVar1;
  int *piVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  cVar3 = (char)(thunk_FUN_104f6770());
  if (cVar3 != '\0') {

    return (undefined1)(1);
  }
  iVar1 = (int)(*(int *)(param_1 + 0x80));
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0();
  }
  iVar7 = (int)(*(int *)(param_1 + 0x6c));

  if ((iVar7 != 0) && (*(int *)(iVar7 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  (**(code **)(**(int **)(param_1 + 0x58) + 0x134))();
  iVar6 = (int)(*(int *)(param_1 + 0x68));
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if ((iVar6 != 0) && (*(int *)(iVar6 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  piVar2 = (int *)(*(int **)(param_1 + 0x58));
  (**(code **)(*piVar2 + 0x74))();
  (**(code **)(*piVar2 + 0x70))();
  if ((iVar6 != 0) && (*(int *)(iVar6 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  if ((local_20 != 0) && (*(int *)(local_20 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(local_20 + -0x10));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  if ((iVar7 != 0) && (*(int *)(iVar7 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0(iVar7 + -0x10,iVar7);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  uVar4 = (undefined1)(thunk_FUN_110a5700());
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  if ((iVar6 != 0) && (*(int *)(iVar6 + -0x10) < 0xffff)) {
    iVar5 = (int)(thunk_FUN_1123fcd0());
    if (iVar5 == 0) {
      *(undefined4 *)(iVar6 + -8) = 0;
      *(undefined4 *)(iVar6 + -0xc) = 0;
      thunk_FUN_113cfb70();
      free((void *)(iVar6 + -0x10));
    }
  }
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  if ((local_20 != 0) && (*(int *)(local_20 + -0x10) < 0xffff)) {
    iVar6 = (int)(thunk_FUN_1123fcd0());
    if (iVar6 == 0) {
      *(undefined4 *)(local_20 + -8) = 0;
      *(undefined4 *)(local_20 + -0xc) = 0;
      thunk_FUN_113cfb70();
      free((void *)(local_20 + -0x10));
    }
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(9)));
  if ((iVar7 != 0) && (*(int *)(iVar7 + -0x10) < 0xffff)) {
    iVar6 = (int)(thunk_FUN_1123fcd0());
    if (iVar6 == 0) {
      *(undefined4 *)(iVar7 + -8) = 0;
      *(undefined4 *)(iVar7 + -0xc) = 0;
      thunk_FUN_113cfb70();
      free((int *)(iVar7 + -0x10));
    }
  }

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar7 = (int)(thunk_FUN_1123fcd0());
    if (iVar7 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70();
      free((int *)(iVar1 + -0x10));
    }
  }

  return (undefined1)(uVar4);

 } catch (...) { }
}


// Reference entry 102213d0; body size 324 bytes.
#line 1 "ENTRY_102213d0"

void __thiscall Recovered_Bulk::FUN_102213d0(undefined4 param_2,byte param_3)
{
  int param_1 = (int )this;
 try {
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puStack_2c = (undefined1 *)((undefined1 *)param_2);
  puStack_30 = (undefined1 *)((undefined1 *)0x1022140a);
  cVar1 = (char)(thunk_FUN_103d61d0());
  if (cVar1 != '\0') {
    if (*(char *)(param_1 + 0x54) == '\0') {
      puStack_2c = (undefined1 *)((undefined1 *)0x1022141f);
      thunk_FUN_110b0460();
      *(byte *)(param_1 + 0xf4) = param_3 ^ 1;
      puStack_2c = (undefined1 *)(&DAT_1186d2ee);
      if (*(undefined1 **)(param_1 + 0x44) != (undefined1 *)0x0) {
        puStack_2c = (undefined1 *)(*(undefined1 **)(param_1 + 0x44));
      }
      puStack_30 = (undefined1 *)(&DAT_1186d2ee);
      if (*(undefined1 **)(param_1 + 0x40) != (undefined1 *)0x0) {
        puStack_30 = (undefined1 *)(*(undefined1 **)(param_1 + 0x40));
      }
      puStack_34 = (undefined1 *)(&DAT_1186d2ee);
      if (*(undefined1 **)(param_1 + 0x3c) != (undefined1 *)0x0) {
        puStack_34 = (undefined1 *)(*(undefined1 **)(param_1 + 0x3c));
      }
      thunk_FUN_110b3620(param_1 + 0x100);
      *(undefined1 *)(param_1 + 0xf4) = 0;

      return;
    }
    puStack_2c = (undefined1 *)((undefined1 *)0x1022148f);
    pvVar2 = (void *)(operator_new(0x28));

    if (pvVar2 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      puStack_2c = (undefined1 *)((undefined1 *)param_2);
      puStack_30 = (undefined1 *)((undefined1 *)param_1);
      ((SCStr *)((SCStr *)&puStack_34))->int_allocRep("SCIBrowseItem:onItemChanged");
      uVar3 = (undefined4)(thunk_FUN_10201010());
    }

    puStack_2c = (undefined1 *)((undefined1 *)0x102214cf);
    pvVar2 = (void *)(operator_new(0x6c));

    if (pvVar2 == (void *)0x0) {
      puStack_30 = (undefined1 *)((undefined1 *)0x0);
    }
    else {
      puStack_2c = (undefined1 *)((undefined1 *)0x102214e9);
      puStack_30 = (undefined1 *)((undefined1 *)thunk_FUN_111c06e0());
    }

    puStack_34 = (undefined1 *)((undefined1 *)0x10221500);
    puStack_2c = (undefined1 *)((undefined1 *)uVar3);
    thunk_FUN_102207b0();
  }

  return;

 } catch (...) { }
}


// Reference entry 10221570; body size 156 bytes.
#line 1 "ENTRY_10221570"

void __thiscall Recovered_Bulk::FUN_10221570(int param_2,byte param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  if (param_2 != 0) {
    thunk_FUN_103d61d0(param_2,0);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    thunk_FUN_110828b0();
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x48) != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 0x48));
    }
    iVar1 = (int)(thunk_FUN_11093530(puVar2,0));
    if (iVar1 == 0) {
      (**(code **)(**(int **)(param_1 + 0x58) + 0x128))(1000);
      return;
    }
    thunk_FUN_110b0460(1);
    *(byte *)(param_1 + 0x60) = param_3 ^ 1;
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x4c) != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 0x4c));
    }
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x48) != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(*(undefined1 **)(param_1 + 0x48));
    }
    thunk_FUN_110b2900(param_1 + 0x118,puVar3,puVar2,*(undefined4 *)(param_1 + 0x54));
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  return;
}


// Reference entry 10221700; body size 156 bytes.
#line 1 "ENTRY_10221700"

void __fastcall FUN_10221700(int param_1)

{
 try {
  char cVar1;
  uint uVar2;
  int *piVar3;
  uint local_44;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  thunk_FUN_101ff410(param_1 + 100);

  cVar1 = (char)(thunk_FUN_1106f2b0(uVar2));
  if (((cVar1 == '\0') && ((local_44 >> 0x10 & 1) != 0)) &&
     (piVar3 = (int *)thunk_FUN_110828b0(), piVar3 != (int *)0x0)) {
    (**(code **)(*piVar3 + 0x24))();
  }
  thunk_FUN_10202e00();

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10221850; body size 225 bytes.
#line 1 "ENTRY_10221850"

void __thiscall Recovered_Bulk::FUN_10221850(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  int *piVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  if (param_2 != 0) {
    thunk_FUN_103d6930(param_2);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    piVar2 = (int *)((int *)thunk_FUN_104ea590(uVar1));
    piVar3 = (int *)((int *)0x0);
    if (piVar2 != (int *)0x0) {
      piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
      (**(code **)(*piVar3 + 4))();
    }

    if (piVar2 != (int *)0x0) {
      if ((*(char **)(param_1 + 0x50) != (char *)0x0) && (**(char **)(param_1 + 0x50) != '\0')) {
        thunk_FUN_104ed040(param_1 + 0x44,param_1 + 0x50);
      }
    }

    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }

    if (*(int *)(param_1 + 0x20) == 0) {
      thunk_FUN_110b0460(1);
      thunk_FUN_110adac0(param_1 + 0x118);
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10221970; body size 178 bytes.
#line 1 "ENTRY_10221970"

void __thiscall Recovered_Bulk::FUN_10221970(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  int *piVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  if (param_2 != 0) {
    thunk_FUN_103d6930(param_2);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    piVar2 = (int *)((int *)thunk_FUN_104ea590(uVar1));
    piVar3 = (int *)((int *)0x0);
    if (piVar2 != (int *)0x0) {
      piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
      (**(code **)(*piVar3 + 4))();
    }

    if (piVar2 != (int *)0x0) {
      if ((*(char **)(param_1 + 0x50) != (char *)0x0) && (**(char **)(param_1 + 0x50) != '\0')) {
        thunk_FUN_104ed040(param_1 + 0x44,param_1 + 0x50);
      }
    }

    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10221af0; body size 71 bytes.
#line 1 "ENTRY_10221af0"

void __thiscall Recovered_Bulk::FUN_10221af0(int *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  char *_Str;
  
  _Str = (char *)((char *)*param_2);
  if (_Str == (char *)0x0) {
    _Str = (char *)("");
  }
  uVar1 = (uint)(0);
  if (*_Str != '\0') {
    uVar1 = (uint)(strtoul(_Str,(char **)0x0,10));
  }
  if ((byte *)(param_1 + 0x61) != (byte *)0x0) {
    *(byte *)(param_1 + 0x61) = (byte)uVar1 & 1;
  }
  if ((byte *)(param_1 + 0x109) != (byte *)0x0) {
    *(byte *)(param_1 + 0x109) = (byte)(uVar1 >> 1) & 1;
  }
  return;
}


// Reference entry 10221be0; body size 121 bytes.
#line 1 "ENTRY_10221be0"

undefined4 * __thiscall Recovered_Bulk::FUN_10221be0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCData);
  param_1[2] = 0;
  param_1[3] = 0;

  thunk_FUN_10222610(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10221c80; body size 118 bytes.
#line 1 "ENTRY_10221c80"

undefined4 * __thiscall Recovered_Bulk::FUN_10221c80(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCData);
  param_1[2] = 0;
  param_1[3] = 0;
  thunk_FUN_10222610(param_2,param_3);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10221ff0; body size 68 bytes.
#line 1 "ENTRY_10221ff0"

undefined4 * __thiscall Recovered_Bulk::FUN_10221ff0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFileBackedData);
  if ((FILE *)param_1[2] != (FILE *)0x0) {
    fclose((FILE *)param_1[2]);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10222090; body size 89 bytes.
#line 1 "ENTRY_10222090"

undefined4 * FUN_10222090(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(operator_new(0x10));
  if (piVar1 == (int *)0x0) {
    *param_1 = (undefined4)(0);
  }
  else {
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar1[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCData);
    piVar1[2] = 0;
    piVar1[3] = 0;
    *param_1 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      return (undefined4 *)(param_1);
    }
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10222280; body size 99 bytes.
#line 1 "ENTRY_10222280"

size_t __thiscall Recovered_Bulk::FUN_10222280(uint param_2,void *param_3,size_t param_4)
{
  int param_1 = (int )this;
  uint uVar1;
  
  if (((param_3 != (void *)0x0) && (*(int *)(param_1 + 8) != 0)) &&
     (uVar1 = *(uint *)(param_1 + 0xc), uVar1 != 0)) {
    if (param_2 <= uVar1) {
      if (uVar1 < param_2 + param_4) {
        param_4 = (size_t)(uVar1 - param_2);
      }
      memcpy(param_3,(void *)(*(int *)(param_1 + 8) + param_2),param_4);
      return (size_t)(param_4);
    }
    thunk_FUN_112af4e0("SCData",1,"getBytes: Error while reading bytes. %zu > %zu",param_2,uVar1);
  }
  return (size_t)(0xffffffff);
}


// Reference entry 10222350; body size 65 bytes.
#line 1 "ENTRY_10222350"

size_t __thiscall Recovered_Bulk::FUN_10222350(long param_2,void *param_3,size_t param_4)
{
  int param_1 = (int )this;
  int iVar1;
  size_t sVar2;
  
  if (param_3 != (void *)0x0) {
    iVar1 = (int)(fseek(*(FILE **)(param_1 + 8),param_2,0));
    if (iVar1 == 0) {
      sVar2 = (size_t)(fread(param_3,1,param_4,*(FILE **)(param_1 + 8)));
      return (size_t)(sVar2);
    }
  }
  return (size_t)(0xffffffff);
}


// Reference entry 10222470; body size 103 bytes.
#line 1 "ENTRY_10222470"

undefined4 * __thiscall Recovered_Bulk::FUN_10222470(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIData"));
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


// Reference entry 102224f0; body size 103 bytes.
#line 1 "ENTRY_102224f0"

undefined4 * __thiscall Recovered_Bulk::FUN_102224f0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIData"));
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


// Reference entry 10222610; body size 92 bytes.
#line 1 "ENTRY_10222610"

size_t __thiscall Recovered_Bulk::FUN_10222610(void *param_2,size_t param_3)
{
  int param_1 = (int )this;
  void *_Dst;
  
  free(*(void **)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_3 == 0) {
    return (size_t)(0);
  }
  _Dst = (void *)((void *)thunk_FUN_1148b586(param_3));
  *(void **)(param_1 + 8) = _Dst;
  if (_Dst == (void *)0x0) {
    return (size_t)(0xffffffff);
  }
  memcpy(_Dst,param_2,param_3);
  *(size_t *)(param_1 + 0xc) = param_3;
  return (size_t)(param_3);
}


// Reference entry 102226d0; body size 91 bytes.
#line 1 "ENTRY_102226d0"

int * __thiscall Recovered_Bulk::FUN_102226d0(int *param_2)
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


// Reference entry 10222eb0; body size 76 bytes.
#line 1 "ENTRY_10222eb0"

void __fastcall FUN_10222eb0(undefined4 *param_1)

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


// Reference entry 102232b0; body size 229 bytes.
#line 1 "ENTRY_102232b0"

int * FUN_102232b0(int *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *local_18;
  undefined4 local_14;
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
  uVar2 = (uint)(0);
  do {
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    ((SCStr *)((SCStr *)&local_14))->int_allocRep(*(char **)((int)&PTR_DAT_119c0d94 + uVar2));
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    (**(code **)(*piVar1 + 0x24))(&local_14);
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    ((SCStr *)((SCStr *)&local_14))->int_release();
    uVar2 = (uint)(uVar2 + 0x14);

    *(unsigned char *)((char *)&local_8 + 0) = 2;
  } while (uVar2 < 0x1b8);
  *param_1 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 10223470; body size 308 bytes.
#line 1 "ENTRY_10223470"

void __thiscall Recovered_Bulk::FUN_10223470(char *param_2)
{
  SCLibParameters *param_1 = (SCLibParameters *)this;
 try {
  int *piVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  int *local_24;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar3 = (int *)((int *)thunk_FUN_101bf1f0(&local_14,param_2,0x2c,DAT_12126b84 ));
  piVar1 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    local_24 = (int *)((int *)0x0);
  }
  else {
    local_24 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  uVar4 = (uint)((**(code **)(*piVar1 + 0x14))());
  uVar7 = (uint)(0);
  if (uVar4 != 0) {
    do {
      (**(code **)(*piVar1 + 0x1c))(&param_2,uVar7);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
      bVar2 = (bool)(((SCLibParameters *)(param_1))->hasDeveloperOption((SCStr *)&param_2));
      if (!bVar2) {
        if ((*(char **)(param_1 + 0x4c) != (char *)0x0) && (**(char **)(param_1 + 0x4c) != '\0')) {
          ((SCStr *)((SCStr *)(param_1 + 0x4c)))->append(",",1);
        }
        pcVar6 = (char *)("");
        if (param_2 != (char *)0x0) {
          pcVar6 = (char *)(param_2);
        }
        uVar5 = (uint)(((SCStr *)((SCStr *)&param_2))->length());
        ((SCStr *)((SCStr *)(param_1 + 0x4c)))->append(pcVar6,uVar5);
      }
      *(unsigned char *)((char *)&local_8 + 0) = 5;
      ((SCStr *)((SCStr *)&param_2))->int_release();
      uVar7 = (uint)(uVar7 + 1);
      param_2 = (char *)((char *)0x0);
      *(unsigned char *)((char *)&local_8 + 0) = 2;
    } while (uVar7 < uVar4);
  }

  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10223710; body size 504 bytes.
#line 1 "ENTRY_10223710"

undefined1 __thiscall Recovered_Bulk::FUN_10223710(SCStr *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  int *piVar5;
  SCLibrary *pSVar6;
  int *piVar7;
  char *_SubStr;
  int *local_1c;
  int *local_18;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  pcVar4 = (char *)(*(char **)(param_1 + 0x4c));
  if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
    _SubStr = (char *)("");
    if (*(char **)param_2 != (char *)0x0) {
      _SubStr = (char *)(*(char **)param_2);
    }
    pcVar4 = (char *)(strstr(pcVar4,_SubStr));
    if (pcVar4 != (char *)0x0) {

      return (undefined1)(1);
    }
  }
  piVar5 = (int *)((int *)thunk_FUN_102518f0(&local_18,uVar3));
  piVar1 = (int *)((int *)*piVar5);

  *piVar5 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    piVar5 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  pSVar6 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar7 = (int *)((int *)(**(code **)(*(int *)pSVar6 + 0x88))(&local_1c));
  local_18 = (int *)((int *)*piVar7);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  *piVar7 = (int)(0);
  if (local_18 == (int *)0x0) {
    piVar7 = (int *)((int *)0x0);
  }
  else {
    piVar7 = (int *)((int *)(**(code **)(*local_18 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  bVar2 = (bool)(((SCStr *)(param_2))->op_eq("ConnectedPartners"));
  if (bVar2) {
    ((SCStr *)(local_14))->int_allocRep("connected_partners_settings");
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    *(uint *)((char *)&param_2 + 3) = (**(code **)(*piVar1 + 0x18))(local_14);
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    ((SCStr *)(local_14))->int_release();
  }
  else {
    bVar2 = (bool)(((SCStr *)(param_2))->op_eq("ExperimentsMenu"));
    if (bVar2) {
      ((SCStr *)(local_14))->int_allocRep("Feature-ExperimentsMenu");
      *(unsigned char *)((char *)&local_8 + 0) = 0xc;
      *(uint *)((char *)&param_2 + 3) = (**(code **)(*local_18 + 0x14))(local_14);
      *(unsigned char *)((char *)&local_8 + 0) = 0xd;
      ((SCStr *)(local_14))->int_release();
    }
    else {
      bVar2 = (bool)(((SCStr *)(param_2))->op_eq("Starboy"));
      if (bVar2) {
        ((SCStr *)(local_14))->int_allocRep("starboy");
        *(unsigned char *)((char *)&local_8 + 0) = 0x10;
        *(uint *)((char *)&param_2 + 3) = (**(code **)(*piVar1 + 0x18))(local_14);
        *(unsigned char *)((char *)&local_8 + 0) = 0x11;
        ((SCStr *)(local_14))->int_release();
      }
      else {
        *(uint *)((char *)&param_2 + 3) = 0;
      }
    }
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x14)));
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 8))();
  }

  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }

  return (undefined1)(*(uint *)((char *)&param_2 + 3));

 } catch (...) { }
}


// Reference entry 10223d70; body size 110 bytes.
#line 1 "ENTRY_10223d70"

undefined4 * __thiscall Recovered_Bulk::FUN_10223d70(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[0xb] = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = uVar2;
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10223e00; body size 110 bytes.
#line 1 "ENTRY_10223e00"

undefined4 * __thiscall Recovered_Bulk::FUN_10223e00(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[0xb] = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = uVar2;
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10224010; body size 119 bytes.
#line 1 "ENTRY_10224010"

undefined4 * __thiscall Recovered_Bulk::FUN_10224010(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[2] = *param_2;
  param_1[0xd] = 0;

  if ((undefined4 *)param_2[0xb] != (undefined4 *)0x0) {
    uVar2 = (undefined4)((*(code *)**(undefined4 **)param_2[0xb])(param_1 + 4,uVar1));
    param_1[0xd] = uVar2;
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10224250; body size 107 bytes.
#line 1 "ENTRY_10224250"

undefined4 * __thiscall Recovered_Bulk::FUN_10224250(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[0xb] = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = uVar2;
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10224f30; body size 91 bytes.
#line 1 "ENTRY_10224f30"

int * __thiscall Recovered_Bulk::FUN_10224f30(int *param_2)
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


// Reference entry 10224fb0; body size 91 bytes.
#line 1 "ENTRY_10224fb0"

int * __thiscall Recovered_Bulk::FUN_10224fb0(int *param_2)
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


// Reference entry 10225030; body size 248 bytes.
#line 1 "ENTRY_10225030"

int * __thiscall Recovered_Bulk::FUN_10225030(int *param_2)
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
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIWifiDelegate");
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


// Reference entry 10225170; body size 91 bytes.
#line 1 "ENTRY_10225170"

int * __thiscall Recovered_Bulk::FUN_10225170(int *param_2)
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


// Reference entry 10225230; body size 171 bytes.
#line 1 "ENTRY_10225230"

int * __thiscall Recovered_Bulk::FUN_10225230(int *param_2)
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
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCISystem");

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


// Reference entry 10225310; body size 169 bytes.
#line 1 "ENTRY_10225310"

int * __thiscall Recovered_Bulk::FUN_10225310(undefined4 *param_2)
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
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCISystem");

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


// Reference entry 102253f0; body size 91 bytes.
#line 1 "ENTRY_102253f0"

int * __thiscall Recovered_Bulk::FUN_102253f0(int *param_2)
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


// Reference entry 10225670; body size 242 bytes.
#line 1 "ENTRY_10225670"

int * __thiscall Recovered_Bulk::FUN_10225670(int *param_2)
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
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIWifiDelegate");
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


// Reference entry 102257a0; body size 188 bytes.
#line 1 "ENTRY_102257a0"

int * __thiscall Recovered_Bulk::FUN_102257a0(undefined4 *param_2)
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
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIWifiDelegate");

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


// Reference entry 10225900; body size 188 bytes.
#line 1 "ENTRY_10225900"

int * __thiscall Recovered_Bulk::FUN_10225900(undefined4 *param_2)
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
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCISystem");

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


// Reference entry 10225d70; body size 111 bytes.
#line 1 "ENTRY_10225d70"

void FUN_10225d70(undefined4 *param_1,undefined4 *param_2)

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


// Reference entry 102260c0; body size 85 bytes.
#line 1 "ENTRY_102260c0"

void FUN_102260c0(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  *(undefined4 *)param_2[1] = 0;
  puVar4 = (undefined4 *)((undefined4 *)*param_2);
  while (puVar4 != (undefined4 *)0x0) {
    piVar1 = (int *)((int *)puVar4[4]);
    puVar2 = (undefined4 *)((undefined4 *)*puVar4);
    if (piVar1 != (int *)0x0) {
      LOCK();
      iVar3 = (int)(piVar1[1] + -1);
      piVar1[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        (**(code **)*piVar1)();
        LOCK();
        iVar3 = (int)(piVar1[2] + -1);
        piVar1[2] = iVar3;
        UNLOCK();
        if (iVar3 == 0) {
          (**(code **)(*piVar1 + 4))();
        }
      }
    }
    thunk_FUN_1148a50e(puVar4,0x14);
    puVar4 = (undefined4 *)(puVar2);
  }
  return;
}


// Reference entry 10226130; body size 130 bytes.
#line 1 "ENTRY_10226130"

void FUN_10226130(undefined4 param_1,undefined4 *param_2)

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

    ((SCStr *)((SCStr *)(puVar2 + 3)))->int_release();
    puVar2[3] = 0;

    thunk_FUN_1148a50e(puVar2,0x10,uVar3);
    puVar2 = (undefined4 *)(puVar1);
  }

  return;

 } catch (...) { }
}


// Reference entry 102262d0; body size 89 bytes.
#line 1 "ENTRY_102262d0"

void FUN_102262d0(undefined4 param_1,int param_2)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_2 + 0xc)))->int_release();
  *(undefined4 *)(param_2 + 0xc) = 0;
  thunk_FUN_1148a50e(param_2,0x10,uVar1);

  return;

 } catch (...) { }
}


// Reference entry 102263b0; body size 124 bytes.
#line 1 "ENTRY_102263b0"

undefined4 * FUN_102263b0(int param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;

  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 102264d0; body size 124 bytes.
#line 1 "ENTRY_102264d0"

undefined4 * FUN_102264d0(int param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;

  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 102265f0; body size 131 bytes.
#line 1 "ENTRY_102265f0"

undefined4 * FUN_102265f0(undefined4 *param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x38));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[2] = *param_1;
  puVar2[0xd] = 0;

  if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
    uVar3 = (undefined4)((*(code *)**(undefined4 **)param_1[0xb])(puVar2 + 4,uVar1));
    puVar2[0xd] = uVar3;
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 10226730; body size 121 bytes.
#line 1 "ENTRY_10226730"

undefined4 * FUN_10226730(int param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;

  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 10227510; body size 76 bytes.
#line 1 "ENTRY_10227510"

void FUN_10227510(undefined4 param_1,int param_2)

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


// Reference entry 10227590; body size 84 bytes.
#line 1 "ENTRY_10227590"

void FUN_10227590(undefined4 param_1,undefined4 *param_2)

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


// Reference entry 10227930; body size 95 bytes.
#line 1 "ENTRY_10227930"

void FUN_10227930(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 102279b0; body size 95 bytes.
#line 1 "ENTRY_102279b0"

void FUN_102279b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10227a30; body size 95 bytes.
#line 1 "ENTRY_10227a30"

void FUN_10227a30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10227ab0; body size 99 bytes.
#line 1 "ENTRY_10227ab0"

void __thiscall Recovered_Bulk::FUN_10227ab0(int *param_2,byte *param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_10225ef0(local_8,param_3,
                             ((((*param_3 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_3[1]) * 0x1000193
                              ^ (uint)param_3[2]) * 0x1000193 ^ (uint)param_3[3]) * 0x1000193));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  *param_2 = (int)(iVar1);
  return;
}


// Reference entry 10227b30; body size 99 bytes.
#line 1 "ENTRY_10227b30"

void __thiscall Recovered_Bulk::FUN_10227b30(int *param_2,byte *param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_10225ff0(local_8,param_3,
                             ((((*param_3 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_3[1]) * 0x1000193
                              ^ (uint)param_3[2]) * 0x1000193 ^ (uint)param_3[3]) * 0x1000193));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  *param_2 = (int)(iVar1);
  return;
}


// Reference entry 102286c0; body size 105 bytes.
#line 1 "ENTRY_102286c0"

undefined4 * __thiscall Recovered_Bulk::FUN_102286c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)(*param_2);
  param_1[0xb] = 0;

  if ((undefined4 *)param_2[0xb] != (undefined4 *)0x0) {
    uVar2 = (undefined4)((*(code *)**(undefined4 **)param_2[0xb])(param_1 + 2,uVar1));
    param_1[0xb] = uVar2;
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10228750; body size 108 bytes.
#line 1 "ENTRY_10228750"

undefined4 * __thiscall Recovered_Bulk::FUN_10228750(undefined4 *param_2,int param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)(*param_2);
  param_1[0xb] = 0;

  if (*(undefined4 **)(param_3 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_3 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = uVar2;
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10228810; body size 126 bytes.
#line 1 "ENTRY_10228810"

undefined4 * __thiscall Recovered_Bulk::FUN_10228810(undefined4 param_2,undefined4 param_3,int param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_1059dd40(param_2,param_3,0xd,0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCreateAndSummonNewWizActionDescriptorFor);
  param_1[0xf] = 0;

  if (*(undefined4 **)(param_4 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_4 + 0x24))(param_1 + 6,uVar1));
    param_1[0xf] = uVar2;
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102288b0; body size 126 bytes.
#line 1 "ENTRY_102288b0"

undefined4 * __thiscall Recovered_Bulk::FUN_102288b0(undefined4 param_2,undefined4 param_3,int param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_1059dd40(param_2,param_3,0xd,0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCreateAndSummonNewWizActionDescriptorFor);
  param_1[0xf] = 0;

  if (*(undefined4 **)(param_4 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_4 + 0x24))(param_1 + 6,uVar1));
    param_1[0xf] = uVar2;
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10228950; body size 126 bytes.
#line 1 "ENTRY_10228950"

undefined4 * __thiscall Recovered_Bulk::FUN_10228950(undefined4 param_2,undefined4 param_3,int param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_1059dd40(param_2,param_3,0xd,0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCreateAndSummonNewWizActionDescriptorFor);
  param_1[0xf] = 0;

  if (*(undefined4 **)(param_4 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_4 + 0x24))(param_1 + 6,uVar1));
    param_1[0xf] = uVar2;
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102289f0; body size 126 bytes.
#line 1 "ENTRY_102289f0"

undefined4 * __thiscall Recovered_Bulk::FUN_102289f0(undefined4 param_2,undefined4 param_3,int param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_1059dd40(param_2,param_3,0xd,0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCreateAndSummonNewWizActionDescriptorFor);
  param_1[0xf] = 0;

  if (*(undefined4 **)(param_4 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_4 + 0x24))(param_1 + 6,uVar1));
    param_1[0xf] = uVar2;
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10228d60; body size 95 bytes.
#line 1 "ENTRY_10228d60"

undefined4 * __thiscall Recovered_Bulk::FUN_10228d60(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_10649300());
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0xc))(param_2,param_3,param_4));
  thunk_FUN_105a7950(uVar2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[6] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[7] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0xe] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x11] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x14] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  return (undefined4 *)(param_1);
}


// Reference entry 10229c30; body size 93 bytes.
#line 1 "ENTRY_10229c30"

int __thiscall Recovered_Bulk::FUN_10229c30(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10229cb0; body size 93 bytes.
#line 1 "ENTRY_10229cb0"

int __thiscall Recovered_Bulk::FUN_10229cb0(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10229d30; body size 93 bytes.
#line 1 "ENTRY_10229d30"

int __thiscall Recovered_Bulk::FUN_10229d30(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10229db0; body size 93 bytes.
#line 1 "ENTRY_10229db0"

int __thiscall Recovered_Bulk::FUN_10229db0(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10229e30; body size 93 bytes.
#line 1 "ENTRY_10229e30"

int __thiscall Recovered_Bulk::FUN_10229e30(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10229eb0; body size 87 bytes.
#line 1 "ENTRY_10229eb0"

int __thiscall Recovered_Bulk::FUN_10229eb0(int *param_2)
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


// Reference entry 10229f20; body size 93 bytes.
#line 1 "ENTRY_10229f20"

int __thiscall Recovered_Bulk::FUN_10229f20(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10229fa0; body size 87 bytes.
#line 1 "ENTRY_10229fa0"

int __thiscall Recovered_Bulk::FUN_10229fa0(int *param_2)
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


// Reference entry 1022a010; body size 93 bytes.
#line 1 "ENTRY_1022a010"

int __thiscall Recovered_Bulk::FUN_1022a010(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 1022a090; body size 87 bytes.
#line 1 "ENTRY_1022a090"

int __thiscall Recovered_Bulk::FUN_1022a090(int *param_2)
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


// Reference entry 1022a100; body size 93 bytes.
#line 1 "ENTRY_1022a100"

int __thiscall Recovered_Bulk::FUN_1022a100(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 1022a660; body size 125 bytes.
#line 1 "ENTRY_1022a660"

undefined4 * __fastcall FUN_1022a660(undefined4 *param_1)

{
 try {
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059bd30(param_1);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCController_LimitedAccessStateData);
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = (undefined4)(thunk_FUN_1059d5a0(500));
  param_1[8] = uVar1;
  *param_1 = (undefined4)((uint)&ghidra_vftable_BatteryWeakChargerData);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1022a740; body size 125 bytes.
#line 1 "ENTRY_1022a740"

undefined4 * __fastcall FUN_1022a740(undefined4 *param_1)

{
 try {
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059bd30(param_1);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCController_LimitedAccessStateData);
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = (undefined4)(thunk_FUN_1059d5a0(500));
  param_1[8] = uVar1;
  *param_1 = (undefined4)((uint)&ghidra_vftable_FactoryResetData);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1022a7e0; body size 125 bytes.
#line 1 "ENTRY_1022a7e0"

undefined4 * __fastcall FUN_1022a7e0(undefined4 *param_1)

{
 try {
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059bd30(param_1);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCController_LimitedAccessStateData);
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = (undefined4)(thunk_FUN_1059d5a0(500));
  param_1[8] = uVar1;
  *param_1 = (undefined4)((uint)&ghidra_vftable_ForgotHouseholdData);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1022a880; body size 125 bytes.
#line 1 "ENTRY_1022a880"

undefined4 * __fastcall FUN_1022a880(undefined4 *param_1)

{
 try {
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059bd30(param_1);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCController_LimitedAccessStateData);
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = (undefined4)(thunk_FUN_1059d5a0(500));
  param_1[8] = uVar1;
  *param_1 = (undefined4)((uint)&ghidra_vftable_InvalidOptimo2OrientationData);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1022a920; body size 133 bytes.
#line 1 "ENTRY_1022a920"

undefined4 * __thiscall Recovered_Bulk::FUN_1022a920(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059bd30(param_1);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCController_LimitedAccessStateData);
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = (undefined4)(thunk_FUN_1059d5a0(500));
  param_1[8] = uVar1;
  param_1[9] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_LaunchWifiConfig);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1022a9d0; body size 125 bytes.
#line 1 "ENTRY_1022a9d0"

undefined4 * __fastcall FUN_1022a9d0(undefined4 *param_1)

{
 try {
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059bd30(param_1);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCController_LimitedAccessStateData);
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = (undefined4)(thunk_FUN_1059d5a0(500));
  param_1[8] = uVar1;
  *param_1 = (undefined4)((uint)&ghidra_vftable_LegacyCRModernHHData);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1022aa70; body size 119 bytes.
#line 1 "ENTRY_1022aa70"

undefined4 * __fastcall FUN_1022aa70(undefined4 *param_1)

{
 try {
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059bd30(param_1);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCController_LimitedAccessStateData);
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = (undefined4)(thunk_FUN_1059d5a0(500));
  param_1[8] = uVar1;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1022abf0; body size 129 bytes.
#line 1 "ENTRY_1022abf0"

undefined4 * __fastcall FUN_1022abf0(undefined4 *param_1)

{
 try {
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059bd30(param_1);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCController_LimitedAccessStateData);
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = (undefined4)(thunk_FUN_1059d5a0(500));
  param_1[8] = uVar1;
  *param_1 = (undefined4)((uint)&ghidra_vftable_NoNetworkFoundData);
  *(undefined1 *)(param_1 + 9) = 1;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1022aca0; body size 125 bytes.
#line 1 "ENTRY_1022aca0"

undefined4 * __fastcall FUN_1022aca0(undefined4 *param_1)

{
 try {
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059bd30(param_1);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCController_LimitedAccessStateData);
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = (undefined4)(thunk_FUN_1059d5a0(500));
  param_1[8] = uVar1;
  *param_1 = (undefined4)((uint)&ghidra_vftable_OutdatedControllerData);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1022ad60; body size 125 bytes.
#line 1 "ENTRY_1022ad60"

undefined4 * __fastcall FUN_1022ad60(undefined4 *param_1)

{
 try {
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059bd30(param_1);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCController_LimitedAccessStateData);
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = (undefined4)(thunk_FUN_1059d5a0(500));
  param_1[8] = uVar1;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RetailDemoData);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1022c0c0; body size 87 bytes.
#line 1 "ENTRY_1022c0c0"

int __thiscall Recovered_Bulk::FUN_1022c0c0(int *param_2)
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


// Reference entry 1022c130; body size 96 bytes.
#line 1 "ENTRY_1022c130"

int __thiscall Recovered_Bulk::FUN_1022c130(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 1022c450; body size 87 bytes.
#line 1 "ENTRY_1022c450"

int __thiscall Recovered_Bulk::FUN_1022c450(int *param_2)
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


// Reference entry 1022c4c0; body size 96 bytes.
#line 1 "ENTRY_1022c4c0"

int __thiscall Recovered_Bulk::FUN_1022c4c0(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 1022c540; body size 125 bytes.
#line 1 "ENTRY_1022c540"

undefined4 * __fastcall FUN_1022c540(undefined4 *param_1)

{
 try {
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059bd30(param_1);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCController_LimitedAccessStateData);
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = (undefined4)(thunk_FUN_1059d5a0(500));
  param_1[8] = uVar1;
  *param_1 = (undefined4)((uint)&ghidra_vftable_UnsupportedData);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1022c5e0; body size 125 bytes.
#line 1 "ENTRY_1022c5e0"

undefined4 * __fastcall FUN_1022c5e0(undefined4 *param_1)

{
 try {
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059bd30(param_1);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCController_LimitedAccessStateData);
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = (undefined4)(thunk_FUN_1059d5a0(500));
  param_1[8] = uVar1;
  *param_1 = (undefined4)((uint)&ghidra_vftable_ZonePlayerUpdateData);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1022c740; body size 132 bytes.
#line 1 "ENTRY_1022c740"

void __fastcall FUN_1022c740(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCreateAndSummonNewWizActionDescriptorFor);
  piVar1 = (int *)((int *)param_1[0xf]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1) + 6,uVar2);
    param_1[0xf] = 0;
  }

  ((SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 1022c7f0; body size 132 bytes.
#line 1 "ENTRY_1022c7f0"

void __fastcall FUN_1022c7f0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCreateAndSummonNewWizActionDescriptorFor);
  piVar1 = (int *)((int *)param_1[0xf]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1) + 6,uVar2);
    param_1[0xf] = 0;
  }

  ((SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 1022c8a0; body size 132 bytes.
#line 1 "ENTRY_1022c8a0"

void __fastcall FUN_1022c8a0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCreateAndSummonNewWizActionDescriptorFor);
  piVar1 = (int *)((int *)param_1[0xf]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1) + 6,uVar2);
    param_1[0xf] = 0;
  }

  ((SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 1022c950; body size 132 bytes.
#line 1 "ENTRY_1022c950"

void __fastcall FUN_1022c950(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCreateAndSummonNewWizActionDescriptorFor);
  piVar1 = (int *)((int *)param_1[0xf]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1) + 6,uVar2);
    param_1[0xf] = 0;
  }

  ((SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 1022ca00; body size 236 bytes.
#line 1 "ENTRY_1022ca00"

int __fastcall FUN_1022ca00(undefined4 *param_1)

{
 try {
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


  uVar4 = (uint)(DAT_12126b84);

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

  if (piVar3 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    iVar5 = (int)((**(code **)(*piVar3 + 8))());
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return (int)(iVar5);

 } catch (...) { }
}


// Reference entry 1022cc90; body size 76 bytes.
#line 1 "ENTRY_1022cc90"

void __fastcall FUN_1022cc90(undefined4 *param_1)

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


// Reference entry 1022cd00; body size 76 bytes.
#line 1 "ENTRY_1022cd00"

void __fastcall FUN_1022cd00(undefined4 *param_1)

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


// Reference entry 1022cd70; body size 76 bytes.
#line 1 "ENTRY_1022cd70"

void __fastcall FUN_1022cd70(undefined4 *param_1)

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


// Reference entry 1022cde0; body size 76 bytes.
#line 1 "ENTRY_1022cde0"

void __fastcall FUN_1022cde0(undefined4 *param_1)

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


// Reference entry 1022ce50; body size 76 bytes.
#line 1 "ENTRY_1022ce50"

void __fastcall FUN_1022ce50(undefined4 *param_1)

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


// Reference entry 1022cec0; body size 76 bytes.
#line 1 "ENTRY_1022cec0"

void __fastcall FUN_1022cec0(undefined4 *param_1)

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


// Reference entry 1022cf30; body size 76 bytes.
#line 1 "ENTRY_1022cf30"

void __fastcall FUN_1022cf30(undefined4 *param_1)

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


// Reference entry 1022cfa0; body size 76 bytes.
#line 1 "ENTRY_1022cfa0"

void __fastcall FUN_1022cfa0(undefined4 *param_1)

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


// Reference entry 1022d010; body size 76 bytes.
#line 1 "ENTRY_1022d010"

void __fastcall FUN_1022d010(undefined4 *param_1)

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


// Reference entry 1022d080; body size 76 bytes.
#line 1 "ENTRY_1022d080"

void __fastcall FUN_1022d080(undefined4 *param_1)

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


// Reference entry 1022d0f0; body size 76 bytes.
#line 1 "ENTRY_1022d0f0"

void __fastcall FUN_1022d0f0(undefined4 *param_1)

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


// Reference entry 1022d160; body size 76 bytes.
#line 1 "ENTRY_1022d160"

void __fastcall FUN_1022d160(undefined4 *param_1)

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


// Reference entry 1022d1d0; body size 76 bytes.
#line 1 "ENTRY_1022d1d0"

void __fastcall FUN_1022d1d0(undefined4 *param_1)

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


// Reference entry 1022d240; body size 76 bytes.
#line 1 "ENTRY_1022d240"

void __fastcall FUN_1022d240(undefined4 *param_1)

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


// Reference entry 1022d2b0; body size 76 bytes.
#line 1 "ENTRY_1022d2b0"

void __fastcall FUN_1022d2b0(undefined4 *param_1)

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


// Reference entry 1022d320; body size 76 bytes.
#line 1 "ENTRY_1022d320"

void __fastcall FUN_1022d320(undefined4 *param_1)

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


// Reference entry 1022d390; body size 68 bytes.
#line 1 "ENTRY_1022d390"

void __fastcall FUN_1022d390(int *param_1)

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


// Reference entry 1022d6c0; body size 99 bytes.
#line 1 "ENTRY_1022d6c0"

void __fastcall FUN_1022d6c0(int param_1)

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
  thunk_FUN_102260c0(puVar4,*puVar4);
  thunk_FUN_1148a50e(*puVar4,0x14);
  return;
}


// Reference entry 1022d740; body size 99 bytes.
#line 1 "ENTRY_1022d740"

void __fastcall FUN_1022d740(int param_1)

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
  thunk_FUN_10226130(puVar4,*puVar4);
  thunk_FUN_1148a50e(*puVar4,0x10);
  return;
}


// Reference entry 1022d7c0; body size 137 bytes.
#line 1 "ENTRY_1022d7c0"

void __fastcall FUN_1022d7c0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = (int)(*(int *)(param_1 + 0xc));
  uVar5 = (uint)(*(int *)(param_1 + 0x10) - iVar1 & 0xfffffffc);
  iVar4 = (int)(iVar1);
  if (0xfff < uVar5) {
    iVar4 = (int)(*(int *)(iVar1 + -4));
    uVar5 = (uint)(uVar5 + 0x23);
    if (0x1f < (iVar1 - iVar4) - 4U) {
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1148a50e(iVar4,uVar5);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  *(undefined4 *)puVar2[1] = 0;
  puVar2 = (undefined4 *)((undefined4 *)*puVar2);
  while (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)((undefined4 *)*puVar2);
    thunk_FUN_1148a50e(puVar2,0x10);
    puVar2 = (undefined4 *)(puVar3);
  }
  thunk_FUN_1148a50e(*(undefined4 *)(param_1 + 4),0x10);
  return;
}


// Reference entry 1022d870; body size 77 bytes.
#line 1 "ENTRY_1022d870"

void __fastcall FUN_1022d870(int *param_1)

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


// Reference entry 1022d8e0; body size 77 bytes.
#line 1 "ENTRY_1022d8e0"

void __fastcall FUN_1022d8e0(int *param_1)

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


// Reference entry 1022d950; body size 77 bytes.
#line 1 "ENTRY_1022d950"

void __fastcall FUN_1022d950(int *param_1)

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


// Reference entry 1022d9c0; body size 74 bytes.
#line 1 "ENTRY_1022d9c0"

void __fastcall FUN_1022d9c0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 4) != 0) &&
     (piVar2 = *(int **)(*(int *)(param_1 + 4) + 0x10), piVar2 != (int *)0x0)) {
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
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 1022dd80; body size 74 bytes.
#line 1 "ENTRY_1022dd80"

void __fastcall FUN_1022dd80(int param_1)

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


// Reference entry 1022df10; body size 227 bytes.
#line 1 "ENTRY_1022df10"

void __fastcall FUN_1022df10(int *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (int)((int)(uint)&ghidra_vftable_SCController_LimitedAccessStateData);
  local_14 = (int *)(param_1);
  if (param_1[8] != 0) {
    thunk_FUN_1059d940(param_1[8]);
    param_1[8] = 0;
  }
  piVar3 = (int *)((int *)thunk_FUN_10292c70(&local_14,uVar2));
  piVar1 = (int *)((int *)*piVar3);
  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  if ((piVar1 != (int *)0x0) && (param_1[7] != 0)) {
    (**(code **)(*piVar1 + 0x3c))(param_1[7],0,1);
    param_1[7] = 0;
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  *param_1 = (int)((int)(uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();

  return;

 } catch (...) { }
}


// Reference entry 1022e040; body size 90 bytes.
#line 1 "ENTRY_1022e040"

void __fastcall FUN_1022e040(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_ModernCRLegacyZPsAndHHSWGenData);

  ((SCStr *)((SCStr *)(param_1 + 9)))->int_release();
  param_1[9] = 0;
  thunk_FUN_1022df10(uVar1);

  return;

 } catch (...) { }
}


// Reference entry 1022e0e0; body size 182 bytes.
#line 1 "ENTRY_1022e0e0"

void __fastcall FUN_1022e0e0(int *param_1)

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


// Reference entry 1022e200; body size 255 bytes.
#line 1 "ENTRY_1022e200"

void __fastcall FUN_1022e200(undefined4 *param_1)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCActionWrapperActionDescriptor);

  ((SCStr *)((SCStr *)(param_1 + 0xb)))->int_release();
  param_1[0xb] = 0;

  ((SCStr *)((SCStr *)(param_1 + 10)))->int_release();
  param_1[10] = 0;

  ((SCStr *)((SCStr *)(param_1 + 8)))->int_release();
  param_1[8] = 0;

  ((SCStr *)((SCStr *)(param_1 + 7)))->int_release();
  param_1[7] = 0;

  ((SCStr *)((SCStr *)(param_1 + 6)))->int_release();
  param_1[6] = 0;
  piVar1 = (int *)((int *)param_1[5]);

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
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


// Reference entry 1022e350; body size 99 bytes.
#line 1 "ENTRY_1022e350"

void __fastcall FUN_1022e350(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAppUrlAction);
  piVar1 = (int *)((int *)param_1[0xd]);

  if (piVar1 != (int *)0x0) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_104ed870();

  return;

 } catch (...) { }
}


// Reference entry 1022e3e0; body size 110 bytes.
#line 1 "ENTRY_1022e3e0"

void __fastcall FUN_1022e3e0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAppUrlActionDescriptor);
  piVar1 = (int *)((int *)param_1[4]);

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 1022e470; body size 90 bytes.
#line 1 "ENTRY_1022e470"

void __fastcall FUN_1022e470(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBTClassicConnectionManagerEventSink);
  piVar1 = (int *)((int *)param_1[2]);

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 1022e510; body size 739 bytes.
#line 1 "ENTRY_1022e510"

void __fastcall FUN_1022e510(undefined4 *param_1)

{
 try {
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  SCLibrary *pSVar5;
  undefined4 uVar6;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCController);
  param_1[2] = (uint)&ghidra_vftable_SCController;
  param_1[9] = (uint)&ghidra_vftable_SCController;
  param_1[10] = (uint)&ghidra_vftable_SCController;
  param_1[0xd] = (uint)&ghidra_vftable_SCController;
  param_1[0x10] = (uint)&ghidra_vftable_SCController;
  param_1[0x13] = (uint)&ghidra_vftable_SCController;
  param_1[0x14] = (uint)&ghidra_vftable_SCController;
  param_1[0x17] = (uint)&ghidra_vftable_SCController;
  if ((*(char *)(param_1 + 0x1a) != '\0') && (*(char *)(param_1 + 0x3e) != '\0')) {
    thunk_FUN_103434a0(param_1 + 9);
    pSVar5 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    uVar6 = (undefined4)((**(code **)(*(int *)pSVar5 + 0x98))(&local_14));
    thunk_FUN_10224f30(uVar6);
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 0x28))(param_1[0x15]);
    }

    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }

    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }

    pSVar5 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    thunk_FUN_10225310(pSVar5);
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 0x28))(param_1[0x18]);
    }

    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
  }
  piVar2 = (int *)((int *)param_1[0x44]);

  if (piVar2 != (int *)0x0) {
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    (**(code **)(*piVar2 + 8))(uVar4);
  }
  piVar2 = (int *)((int *)param_1[0x42]);

  if (piVar2 != (int *)0x0) {
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  thunk_FUN_1022d6c0();
  thunk_FUN_1022d7c0();
  thunk_FUN_102341a0();
  piVar2 = (int *)((int *)param_1[0x23]);
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

  ((SCStr *)((SCStr *)(param_1 + 0x20)))->int_release();
  param_1[0x20] = 0;
  param_1[0x17] = (uint)&ghidra_vftable_SCSystemEventSink;
  piVar2 = (int *)((int *)param_1[0x19]);

  if (piVar2 != (int *)0x0) {
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  param_1[0x14] = (uint)&ghidra_vftable_SCBTClassicConnectionManagerEventSink;
  piVar2 = (int *)((int *)param_1[0x16]);

  if (piVar2 != (int *)0x0) {
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  param_1[0x13] = (uint)&ghidra_vftable_RITQHandler;
  param_1[0x10] = (uint)&ghidra_vftable_SCHouseholdManagerEventSink;
  piVar2 = (int *)((int *)param_1[0x12]);

  if (piVar2 != (int *)0x0) {
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  param_1[0xd] = (uint)&ghidra_vftable_SCUserAccountEventSink;
  piVar2 = (int *)((int *)param_1[0xf]);

  if (piVar2 != (int *)0x0) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  param_1[10] = (uint)&ghidra_vftable_SCAccountManagerEventSink;
  piVar2 = (int *)((int *)param_1[0xc]);

  if (piVar2 != (int *)0x0) {
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    (**(code **)(*piVar2 + 8))();
  }

  param_1[2] = (uint)&ghidra_vftable_SCTimerUser;
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 1022e8c0; body size 110 bytes.
#line 1 "ENTRY_1022e8c0"

void __fastcall FUN_1022e8c0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDisplayWizardActionDescriptorBase);
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


// Reference entry 1022e970; body size 90 bytes.
#line 1 "ENTRY_1022e970"

void __fastcall FUN_1022e970(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCHouseholdManagerEventSink);
  piVar1 = (int *)((int *)param_1[2]);

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 1022ea60; body size 110 bytes.
#line 1 "ENTRY_1022ea60"

void __fastcall FUN_1022ea60(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDisplayWizardActionDescriptorBase);
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


// Reference entry 1022eb00; body size 110 bytes.
#line 1 "ENTRY_1022eb00"

void __fastcall FUN_1022eb00(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDisplayWizardActionDescriptorBase);
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


// Reference entry 1022eb90; body size 211 bytes.
#line 1 "ENTRY_1022eb90"

void __fastcall FUN_1022eb90(undefined4 *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpenURIActionDescriptor);

  ((SCStr *)((SCStr *)(param_1 + 8)))->int_release();
  param_1[8] = 0;

  ((SCStr *)((SCStr *)(param_1 + 7)))->int_release();
  param_1[7] = 0;

  ((SCStr *)((SCStr *)(param_1 + 5)))->int_release();
  param_1[5] = 0;

  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  param_1[4] = 0;

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


// Reference entry 1022eca0; body size 123 bytes.
#line 1 "ENTRY_1022eca0"

void __fastcall FUN_1022eca0(undefined4 *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpenUrlActionDescriptor);

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


// Reference entry 1022eda0; body size 95 bytes.
#line 1 "ENTRY_1022eda0"

void __fastcall FUN_1022eda0(undefined4 *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  ((SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 1022ee20; body size 74 bytes.
#line 1 "ENTRY_1022ee20"

void __fastcall FUN_1022ee20(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059d800(uVar1);
  thunk_FUN_1059c050();

  return;

 } catch (...) { }
}


// Reference entry 1022eed0; body size 90 bytes.
#line 1 "ENTRY_1022eed0"

void __fastcall FUN_1022eed0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SWGenMismatchModernControllerMixedLegacyHHData);

  ((SCStr *)((SCStr *)(param_1 + 9)))->int_release();
  param_1[9] = 0;
  thunk_FUN_1022df10(uVar1);

  return;

 } catch (...) { }
}


// Reference entry 1022f2b0; body size 81 bytes.
#line 1 "ENTRY_1022f2b0"

int * __thiscall Recovered_Bulk::FUN_1022f2b0(int *param_2)
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


// Reference entry 1022f320; body size 81 bytes.
#line 1 "ENTRY_1022f320"

int * __thiscall Recovered_Bulk::FUN_1022f320(int *param_2)
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


// Reference entry 1022f390; body size 81 bytes.
#line 1 "ENTRY_1022f390"

int * __thiscall Recovered_Bulk::FUN_1022f390(int *param_2)
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


// Reference entry 1022f400; body size 81 bytes.
#line 1 "ENTRY_1022f400"

int * __thiscall Recovered_Bulk::FUN_1022f400(int *param_2)
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


// Reference entry 1022ff90; body size 153 bytes.
#line 1 "ENTRY_1022ff90"

undefined4 * __thiscall Recovered_Bulk::FUN_1022ff90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCreateAndSummonNewWizActionDescriptorFor);
  piVar1 = (int *)((int *)param_1[0xf]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1) + 6,uVar2);
    param_1[0xf] = 0;
  }

  ((SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x40);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10230060; body size 153 bytes.
#line 1 "ENTRY_10230060"

undefined4 * __thiscall Recovered_Bulk::FUN_10230060(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCreateAndSummonNewWizActionDescriptorFor);
  piVar1 = (int *)((int *)param_1[0xf]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1) + 6,uVar2);
    param_1[0xf] = 0;
  }

  ((SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x40);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10230130; body size 153 bytes.
#line 1 "ENTRY_10230130"

undefined4 * __thiscall Recovered_Bulk::FUN_10230130(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCreateAndSummonNewWizActionDescriptorFor);
  piVar1 = (int *)((int *)param_1[0xf]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1) + 6,uVar2);
    param_1[0xf] = 0;
  }

  ((SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x40);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10230200; body size 153 bytes.
#line 1 "ENTRY_10230200"

undefined4 * __thiscall Recovered_Bulk::FUN_10230200(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCreateAndSummonNewWizActionDescriptorFor);
  piVar1 = (int *)((int *)param_1[0xf]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1) + 6,uVar2);
    param_1[0xf] = 0;
  }

  ((SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x40);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102302d0; body size 261 bytes.
#line 1 "ENTRY_102302d0"

undefined4 * __thiscall Recovered_Bulk::FUN_102302d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar4 = (uint)(DAT_12126b84);

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

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10230460; body size 83 bytes.
#line 1 "ENTRY_10230460"

undefined4 * __thiscall Recovered_Bulk::FUN_10230460(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[6] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[7] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0xe] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x11] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x14] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  thunk_FUN_105a85f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xdc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 102304d0; body size 83 bytes.
#line 1 "ENTRY_102304d0"

undefined4 * __thiscall Recovered_Bulk::FUN_102304d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[6] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[7] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0xe] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x11] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x14] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  thunk_FUN_105a85f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xdc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10230540; body size 83 bytes.
#line 1 "ENTRY_10230540"

undefined4 * __thiscall Recovered_Bulk::FUN_10230540(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[6] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[7] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0xe] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x11] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x14] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  thunk_FUN_105a85f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xdc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 102305b0; body size 83 bytes.
#line 1 "ENTRY_102305b0"

undefined4 * __thiscall Recovered_Bulk::FUN_102305b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[6] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[7] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0xe] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x11] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x14] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  thunk_FUN_105a85f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xdc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10230620; body size 106 bytes.
#line 1 "ENTRY_10230620"

undefined4 * __thiscall Recovered_Bulk::FUN_10230620(byte param_2)
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


// Reference entry 102307f0; body size 71 bytes.
#line 1 "ENTRY_102307f0"

int __thiscall Recovered_Bulk::FUN_102307f0(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(*(int **)(param_1 + 8));
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
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (int)(param_1);
}


// Reference entry 10230850; body size 98 bytes.
#line 1 "ENTRY_10230850"

int __thiscall Recovered_Bulk::FUN_10230850(byte param_2)
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


// Reference entry 10230a60; body size 111 bytes.
#line 1 "ENTRY_10230a60"

undefined4 * __thiscall Recovered_Bulk::FUN_10230a60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_ModernCRLegacyZPsAndHHSWGenData);

  ((SCStr *)((SCStr *)(param_1 + 9)))->int_release();
  param_1[9] = 0;
  thunk_FUN_1022df10(uVar1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x28);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10230bd0; body size 276 bytes.
#line 1 "ENTRY_10230bd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10230bd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCActionWrapperActionDescriptor);

  ((SCStr *)((SCStr *)(param_1 + 0xb)))->int_release();
  param_1[0xb] = 0;

  ((SCStr *)((SCStr *)(param_1 + 10)))->int_release();
  param_1[10] = 0;

  ((SCStr *)((SCStr *)(param_1 + 8)))->int_release();
  param_1[8] = 0;

  ((SCStr *)((SCStr *)(param_1 + 7)))->int_release();
  param_1[7] = 0;

  ((SCStr *)((SCStr *)(param_1 + 6)))->int_release();
  param_1[6] = 0;
  piVar1 = (int *)((int *)param_1[5]);

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
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
    thunk_FUN_1148a50e(param_1,0x30);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10230d30; body size 120 bytes.
#line 1 "ENTRY_10230d30"

undefined4 * __thiscall Recovered_Bulk::FUN_10230d30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAppUrlAction);
  piVar1 = (int *)((int *)param_1[0xd]);

  if (piVar1 != (int *)0x0) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_104ed870();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x38);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10230dd0; body size 131 bytes.
#line 1 "ENTRY_10230dd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10230dd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAppUrlActionDescriptor);
  piVar1 = (int *)((int *)param_1[4]);

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10230e80; body size 113 bytes.
#line 1 "ENTRY_10230e80"

undefined4 * __thiscall Recovered_Bulk::FUN_10230e80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBTClassicConnectionManagerEventSink);
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


// Reference entry 10230f90; body size 131 bytes.
#line 1 "ENTRY_10230f90"

undefined4 * __thiscall Recovered_Bulk::FUN_10230f90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDisplayWizardActionDescriptorBase);
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
    thunk_FUN_1148a50e(param_1,0x14);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10231080; body size 113 bytes.
#line 1 "ENTRY_10231080"

undefined4 * __thiscall Recovered_Bulk::FUN_10231080(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCHouseholdManagerEventSink);
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


// Reference entry 10231210; body size 131 bytes.
#line 1 "ENTRY_10231210"

undefined4 * __thiscall Recovered_Bulk::FUN_10231210(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDisplayWizardActionDescriptorBase);
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
    thunk_FUN_1148a50e(param_1,0x14);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102312f0; body size 131 bytes.
#line 1 "ENTRY_102312f0"

undefined4 * __thiscall Recovered_Bulk::FUN_102312f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDisplayWizardActionDescriptorBase);
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
    thunk_FUN_1148a50e(param_1,0x18);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102313d0; body size 144 bytes.
#line 1 "ENTRY_102313d0"

undefined4 * __thiscall Recovered_Bulk::FUN_102313d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpenUrlActionDescriptor);

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


// Reference entry 10231490; body size 105 bytes.
#line 1 "ENTRY_10231490"

undefined4 * __thiscall Recovered_Bulk::FUN_10231490(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059d800(uVar1);
  thunk_FUN_1059c050();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102315a0; body size 111 bytes.
#line 1 "ENTRY_102315a0"

undefined4 * __thiscall Recovered_Bulk::FUN_102315a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SWGenMismatchModernControllerMixedLegacyHHData);

  ((SCStr *)((SCStr *)(param_1 + 9)))->int_release();
  param_1[9] = 0;
  thunk_FUN_1022df10(uVar1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x28);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10231c70; body size 76 bytes.
#line 1 "ENTRY_10231c70"

void __fastcall FUN_10231c70(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar2 = (int *)((int *)param_1[2]);
  param_1[2] = *piVar2;
  piVar3 = (int *)((int *)piVar2[4]);
  if (piVar3 != (int *)0x0) {
    LOCK();
    iVar4 = (int)(piVar3[1] + -1);
    piVar3[1] = iVar4;
    UNLOCK();
    if (iVar4 == 0) {
      (**(code **)*piVar3)();
      LOCK();
      piVar1 = (int *)(piVar3 + 2);
      iVar4 = (int)(*piVar1);
      *piVar1 = (int)(*piVar1 + -1);
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*piVar3 + 4))();
      }
    }
  }
  thunk_FUN_1148a50e(piVar2,0x14);
  *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
  return;
}


// Reference entry 10231cd0; body size 103 bytes.
#line 1 "ENTRY_10231cd0"

void __fastcall FUN_10231cd0(int *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[2]);
  param_1[2] = *piVar1;

  ((SCStr *)((SCStr *)(piVar1 + 3)))->int_release();
  piVar1[3] = 0;
  thunk_FUN_1148a50e(piVar1,0x10,uVar2);
  *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;

  return;

 } catch (...) { }
}


// Reference entry 10231f10; body size 127 bytes.
#line 1 "ENTRY_10231f10"

undefined4 * __fastcall FUN_10231f10(int param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;

  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x2c))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 10231fb0; body size 127 bytes.
#line 1 "ENTRY_10231fb0"

undefined4 * __fastcall FUN_10231fb0(int param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;

  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x2c))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 102320a0; body size 135 bytes.
#line 1 "ENTRY_102320a0"

undefined4 * __fastcall FUN_102320a0(int param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x38));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[2] = *(undefined4 *)(param_1 + 8);
  puVar2[0xd] = 0;

  if (*(undefined4 **)(param_1 + 0x34) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x34))(puVar2 + 4,uVar1));
    puVar2[0xd] = uVar3;
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 102321d0; body size 124 bytes.
#line 1 "ENTRY_102321d0"

undefined4 * __fastcall FUN_102321d0(int param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;

  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x2c))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 102324b0; body size 136 bytes.
#line 1 "ENTRY_102324b0"

float __thiscall Recovered_Bulk::FUN_102324b0(int param_2)
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


// Reference entry 10232560; body size 136 bytes.
#line 1 "ENTRY_10232560"

float __thiscall Recovered_Bulk::FUN_10232560(int param_2)
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


// Reference entry 10232610; body size 136 bytes.
#line 1 "ENTRY_10232610"

float __thiscall Recovered_Bulk::FUN_10232610(int param_2)
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


// Reference entry 102326c0; body size 113 bytes.
#line 1 "ENTRY_102326c0"

void __stdcall FUN_102326c0(undefined4 *param_1,undefined4 *param_2)

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


// Reference entry 102334e0; body size 87 bytes.
#line 1 "ENTRY_102334e0"

void __thiscall Recovered_Bulk::FUN_102334e0(int param_2)
{
  float *param_1 = (float *)this;
  double dVar1;
  
  dVar1 = (double)(ceil((double)((float)((double)param_2 + (double)(&DAT_11880fb0)[-(param_2 >> 0x1f)]) /
                       *param_1)));
  thunk_FUN_1148ac80(dVar1);
  return;
}


// Reference entry 10233550; body size 87 bytes.
#line 1 "ENTRY_10233550"

void __thiscall Recovered_Bulk::FUN_10233550(int param_2)
{
  float *param_1 = (float *)this;
  double dVar1;
  
  dVar1 = (double)(ceil((double)((float)((double)param_2 + (double)(&DAT_11880fb0)[-(param_2 >> 0x1f)]) /
                       *param_1)));
  thunk_FUN_1148ac80(dVar1);
  return;
}


// Reference entry 102335c0; body size 87 bytes.
#line 1 "ENTRY_102335c0"

void __thiscall Recovered_Bulk::FUN_102335c0(int param_2)
{
  float *param_1 = (float *)this;
  double dVar1;
  
  dVar1 = (double)(ceil((double)((float)((double)param_2 + (double)(&DAT_11880fb0)[-(param_2 >> 0x1f)]) /
                       *param_1)));
  thunk_FUN_1148ac80(dVar1);
  return;
}


// Reference entry 102337c0; body size 133 bytes.
#line 1 "ENTRY_102337c0"

void __fastcall FUN_102337c0(float *param_1)

{
  ceil((double)((float)((double)((int)param_1[2] + 1) +
                       (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) / *param_1));
  thunk_FUN_1148ac80();
  thunk_FUN_10232a30();
  return;
}


// Reference entry 10233870; body size 133 bytes.
#line 1 "ENTRY_10233870"

void __fastcall FUN_10233870(float *param_1)

{
  ceil((double)((float)((double)((int)param_1[2] + 1) +
                       (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) / *param_1));
  thunk_FUN_1148ac80();
  thunk_FUN_10232bf0();
  return;
}


// Reference entry 10233920; body size 133 bytes.
#line 1 "ENTRY_10233920"

void __fastcall FUN_10233920(float *param_1)

{
  ceil((double)((float)((double)((int)param_1[2] + 1) +
                       (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) / *param_1));
  thunk_FUN_1148ac80();
  thunk_FUN_10232db0();
  return;
}


// Reference entry 10233fc0; body size 77 bytes.
#line 1 "ENTRY_10233fc0"

void __fastcall FUN_10233fc0(int *param_1)

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


// Reference entry 10234030; body size 77 bytes.
#line 1 "ENTRY_10234030"

void __fastcall FUN_10234030(int *param_1)

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


// Reference entry 102340a0; body size 77 bytes.
#line 1 "ENTRY_102340a0"

void __fastcall FUN_102340a0(int *param_1)

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


// Reference entry 102341a0; body size 187 bytes.
#line 1 "ENTRY_102341a0"

void __fastcall FUN_102341a0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)((undefined4 *)param_1[1]);
    if (puVar3 != (undefined4 *)(puVar4)) {
      do {
        piVar1 = (int *)((int *)puVar3[1]);

        if (piVar1 != (int *)0x0) {
          *puVar3 = (undefined4)(0);
          puVar3[1] = 0;
          (**(code **)(*piVar1 + 8))(uVar2);
        }
        puVar3 = (undefined4 *)(puVar3 + 2);
      } while (puVar3 != (undefined4 *)(puVar4));
      puVar3 = (undefined4 *)((undefined4 *)*param_1);
    }

    uVar2 = (uint)(param_1[2] - (int)puVar3 & 0xfffffff8);
    puVar4 = (undefined4 *)(puVar3);
    if (0xfff < uVar2) {
      puVar4 = (undefined4 *)((undefined4 *)puVar3[-1]);
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (uint)((int)puVar3 + (-4 - (int)puVar4))) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(puVar4,uVar2);
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    param_1[2] = 0;
  }

  return;

 } catch (...) { }
}


// Reference entry 10234b50; body size 159 bytes.
#line 1 "ENTRY_10234b50"

void __thiscall Recovered_Bulk::FUN_10234b50(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = (int *)(param_2);


  uVar2 = (uint)(DAT_12126b84);

  if ((param_2 != (int *)0x0) && (*(int *)(param_1 + 0x84) != 0)) {
    local_14 = (int)(param_1);
    ((SCStr *)((SCStr *)&local_14))->int_allocRep("topologyState");

    uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x84) + 8))(&param_2,uVar2));
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    (**(code **)(*piVar1 + 0x1c))(&local_14,uVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    ((SCStr *)((SCStr *)&param_2))->int_release();
    param_2 = (int *)((int *)0x0);

    ((SCStr *)((SCStr *)&local_14))->int_release();
  }

  return;

 } catch (...) { }
}


// Reference entry 102354e0; body size 259 bytes.
#line 1 "ENTRY_102354e0"

void __fastcall FUN_102354e0(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_18))->int_allocRep("");

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("hasCompletedWelcomeFlow");
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  piVar3 = (int *)((int *)thunk_FUN_102d5690(&local_1c,&local_14,2,&local_18,uVar2));
  piVar1 = (int *)((int *)*piVar3);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)((SCStr *)&local_18))->int_release();

  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(1);
    thunk_FUN_1106b190(param_1 + 0x4c,0,0);
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 102360e0; body size 71 bytes.
#line 1 "ENTRY_102360e0"

void __fastcall FUN_102360e0(int *param_1)

{
  char cVar1;
  
  if (param_1[0x3f] == 0) {
    thunk_FUN_112af4e0("SCController",1,
                       "one extra call to disable suppression when it\'s already disabled");
    return;
  }
  param_1[0x3f] = param_1[0x3f] + -1;
  cVar1 = (char)((**(code **)(*param_1 + 0x68))());
  if (cVar1 == '\0') {
    thunk_FUN_1106b190(param_1 + 0x13,0,0);
  }
  return;
}


// Reference entry 102361a0; body size 123 bytes.
#line 1 "ENTRY_102361a0"

void __thiscall Recovered_Bulk::FUN_102361a0(undefined4 param_2,SCStr *param_3)
{
  int param_1 = (int )this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->beginsWith("SCIAccountManager"));
  if (bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIAccountManager:onInitialized"));
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 4))(param_2);
      return;
    }
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIAccountManager:onCurrentAccountChanged"));
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 8))(param_2);
      return;
    }
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIAccountManager:onUserAccountListChanged"));
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 0xc))(param_2);
    }
  }
  return;
}


// Reference entry 10236240; body size 156 bytes.
#line 1 "ENTRY_10236240"

void __thiscall Recovered_Bulk::FUN_10236240(undefined4 param_2,SCStr *param_3)
{
  int param_1 = (int )this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->beginsWith("SCIBTClassicConnectionManager"));
  if (bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIBTClassicConnectionManager:onSonosDeviceConnected"));
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 4))(param_2);
      return;
    }
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIBTClassicConnectionManager:onSonosDeviceInfoChanged"));
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 8))(param_2);
      return;
    }
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIBTClassicConnectionManager:onSonosDeviceDisconnected"));
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 0xc))(param_2);
      return;
    }
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIBTClassicConnectionManager:onBatteryInfoRetrieved"));
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 0x10))(param_2);
    }
  }
  return;
}


// Reference entry 10236310; body size 123 bytes.
#line 1 "ENTRY_10236310"

void __thiscall Recovered_Bulk::FUN_10236310(undefined4 param_2,SCStr *param_3)
{
  int param_1 = (int )this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->beginsWith("SCIHouseholdManager"));
  if (bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIHouseholdManager:onCurrentHouseholdChanged"));
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 4))(param_2);
      return;
    }
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIHouseholdManager:onUpdatingZPs"));
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 8))(param_2);
      return;
    }
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIHouseholdManager:onZPUpdateComplete"));
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 0xc))(param_2);
    }
  }
  return;
}


// Reference entry 102363b0; body size 259 bytes.
#line 1 "ENTRY_102363b0"

void __thiscall Recovered_Bulk::FUN_102363b0(undefined4 param_2,SCStr *param_3)
{
  int param_1 = (int )this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->beginsWith("SCIUserAccount"));
  if (bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIUserAccount:onEmailChanged"));
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 4))(param_2);
      return;
    }
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIUserAccount:onUserUpdateFailed"));
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 8))(param_2);
      return;
    }
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIUserAccount:onUserRefreshCompleted"));
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 0xc))(param_2);
      return;
    }
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIUserAccount:onReleaseProgramChanged"));
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 0x10))(param_2);
      return;
    }
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIUserAccount:onPasswordChanged"));
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 0x14))(param_2);
      return;
    }
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIUserAccount:onAccountTokenReady"));
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 0x18))(param_2);
      return;
    }
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIUserAccount:onAccountTokenFetchFailed"));
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 0x1c))(param_2);
    }
  }
  return;
}


// Reference entry 10236630; body size 184 bytes.
#line 1 "ENTRY_10236630"

undefined4 * __thiscall Recovered_Bulk::FUN_10236630(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  piVar4 = (int *)(operator_new(0x38));

  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar5 = (int *)(*(int **)(param_1 + 0xc));
    uVar1 = (undefined1)(*(undefined1 *)(param_1 + 9));
    uVar2 = (undefined1)(*(undefined1 *)(param_1 + 8));
    thunk_FUN_104ed740(uVar3);
    *piVar4 = (int)((int)(uint)&ghidra_vftable_SCAppUrlAction);
    *(undefined1 *)(piVar4 + 0xb) = uVar2;
    *(undefined1 *)((int)piVar4 + 0x2d) = uVar1;
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    piVar4[0xc] = (int)piVar5;
    piVar4[0xd] = 0;
    if (piVar5 != (int *)0x0) {
      piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0xc))());
      piVar4[0xd] = (int)piVar5;
      (**(code **)(*piVar5 + 4))();
    }
  }

  *param_2 = (undefined4)(piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10236720; body size 97 bytes.
#line 1 "ENTRY_10236720"

undefined4 * __thiscall Recovered_Bulk::FUN_10236720(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int *)(param_1);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x38))(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_2 = (undefined4)(uVar1);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 102367a0; body size 97 bytes.
#line 1 "ENTRY_102367a0"

undefined4 * __thiscall Recovered_Bulk::FUN_102367a0(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int *)(param_1);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x38))(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_2 = (undefined4)(uVar1);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10236af0; body size 174 bytes.
#line 1 "ENTRY_10236af0"

void __thiscall Recovered_Bulk::FUN_10236af0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *_Dst;
  char *_Src;
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  size_t _Size;
  
  cVar1 = (char)(thunk_FUN_111a0720("Unknown"));
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_111a0720(&DAT_11887910));
    if (cVar1 == '\0') {
      cVar1 = (char)(thunk_FUN_111a0720(&DAT_11887928));
      if (((cVar1 == '\0') && (_Src = *(char **)(param_1 + 0x2d434), _Src != (char *)0x0)) &&
         (*_Src != '\0')) {
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
    }
  }
  *param_2 = (undefined4)(0);
  return;
}


// Reference entry 10236d70; body size 138 bytes.
#line 1 "ENTRY_10236d70"

SCStr * __stdcall FUN_10236d70(SCStr *param_1)

{
 try {
  char cVar1;
  char *pcVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_10436cd0(&local_14,DAT_12126b84 );

  cVar1 = (char)(thunk_FUN_10437b20());
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x276d - (uint)(cVar1 != '\0'),&DAT_11882ff0));
  ((SCStr *)(param_1))->int_allocRep(pcVar2);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  return (SCStr *)(param_1);

 } catch (...) { }
}


// Reference entry 10236ef0; body size 151 bytes.
#line 1 "ENTRY_10236ef0"

SCStr * __stdcall FUN_10236ef0(SCStr *param_1)

{
 try {
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_10436cd0(&local_14,DAT_12126b84 );

  cVar1 = (char)(thunk_FUN_10437a40());

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  if (cVar1 == '\0') {
    uVar3 = (undefined4)(0x2773);
  }
  else {
    uVar3 = (undefined4)(0x2774);
  }
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(uVar3,&DAT_11882ff0));
  ((SCStr *)(param_1))->int_allocRep(pcVar2);

  return (SCStr *)(param_1);

 } catch (...) { }
}


// Reference entry 102370d0; body size 138 bytes.
#line 1 "ENTRY_102370d0"

SCStr * __stdcall FUN_102370d0(SCStr *param_1)

{
 try {
  char cVar1;
  char *pcVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_10436cd0(&local_14,DAT_12126b84 );

  cVar1 = (char)(thunk_FUN_10437b20());
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x276d - (uint)(cVar1 != '\0'),&DAT_11882ff0));
  ((SCStr *)(param_1))->int_allocRep(pcVar2);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  return (SCStr *)(param_1);

 } catch (...) { }
}


// Reference entry 10237250; body size 151 bytes.
#line 1 "ENTRY_10237250"

SCStr * __stdcall FUN_10237250(SCStr *param_1)

{
 try {
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_10436cd0(&local_14,DAT_12126b84 );

  cVar1 = (char)(thunk_FUN_10437a40());

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  if (cVar1 == '\0') {
    uVar3 = (undefined4)(0x2773);
  }
  else {
    uVar3 = (undefined4)(0x2774);
  }
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(uVar3,&DAT_11882ff0));
  ((SCStr *)(param_1))->int_allocRep(pcVar2);

  return (SCStr *)(param_1);

 } catch (...) { }
}


// Reference entry 10237370; body size 192 bytes.
#line 1 "ENTRY_10237370"

undefined4 * __stdcall FUN_10237370(undefined4 *param_1)

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


// Reference entry 10237460; body size 192 bytes.
#line 1 "ENTRY_10237460"

undefined4 * __stdcall FUN_10237460(undefined4 *param_1)

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


// Reference entry 10237550; body size 192 bytes.
#line 1 "ENTRY_10237550"

undefined4 * __stdcall FUN_10237550(undefined4 *param_1)

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


// Reference entry 10237640; body size 192 bytes.
#line 1 "ENTRY_10237640"

undefined4 * __stdcall FUN_10237640(undefined4 *param_1)

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


// Reference entry 10237730; body size 192 bytes.
#line 1 "ENTRY_10237730"

undefined4 * __stdcall FUN_10237730(undefined4 *param_1)

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


// Reference entry 10237820; body size 610 bytes.
#line 1 "ENTRY_10237820"

undefined4 * __stdcall FUN_10237820(undefined4 *param_1)

{
 try {
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  undefined2 uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  int *local_30;
  int *local_2c;
  int *local_24;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar5 = (uint)(DAT_12126b84);

  local_1c = (int *)(operator_new(0x14));

  if (local_1c == (int *)0x0) {
    piVar6 = (int *)((int *)0x0);
  }
  else {
    piVar6 = (int *)((int *)thunk_FUN_103be5e0(uVar5));
  }

  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
  }

  local_1c = (int *)((int *)0x0);
  if (piVar6 == (int *)0x0) {
    local_24 = (int *)((int *)0x0);
  }
  else {
    local_24 = (int *)((int *)(**(code **)(*piVar6 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  thunk_FUN_10436cd0(&local_14);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  cVar3 = (char)(thunk_FUN_10437b20());
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  uVar2 = (undefined1)((undefined1)local_8);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (cVar3 == '\0') {
    *(unsigned char *)((char *)&local_8 + 0) = uVar2;
    local_1c = (int *)(operator_new(0x14));
    if (local_1c == (int *)0x0) {
      piVar8 = (int *)((int *)0x0);
    }
    else {
      *local_1c = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      local_1c[1] = 0;
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      *local_1c = (int)((int)(uint)&ghidra_vftable_SCAppUrlActionDescriptor);
      *(undefined2 *)(local_1c + 2) = 1;
      local_1c[3] = 0;
      local_1c[4] = 0;
      piVar8 = (int *)(local_1c);
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
    thunk_FUN_103be9e0(piVar8,0xffffffff);
  }
  else {
    uVar7 = (undefined4)(createPropertyBag());
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    thunk_FUN_101aa9f0(uVar7);
    *(unsigned char *)((char *)&local_8 + 0) = 10;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    ((SCStr *)((SCStr *)&local_14))->int_allocRep("sonosSWGen");
    *(unsigned char *)((char *)&local_8 + 0) = 0xb;
    thunk_FUN_10436cd0(&local_1c);
    *(unsigned char *)((char *)&local_8 + 0) = 0xc;
    iVar1 = (int)(*local_30);
    uVar4 = (undefined2)(thunk_FUN_10436ca0());
    (**(code **)(iVar1 + 0x28))(&local_14,uVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 0xd;
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0xe;
    ((SCStr *)((SCStr *)&local_14))->int_release();
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    local_1c = (int *)(operator_new(0x18));
    *(unsigned char *)((char *)&local_8 + 0) = 0xf;
    if (local_1c == (int *)0x0) {
      piVar8 = (int *)((int *)0x0);
    }
    else {
      uVar7 = (undefined4)(thunk_FUN_1109aba0(0x276f,&DAT_11882ff0));
      piVar8 = (int *)((int *)thunk_FUN_10201120(0x16,local_30,uVar7));
    }
    piVar9 = (int *)((int *)0x0);
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    local_1c = (int *)((int *)0x0);
    if (piVar8 != (int *)0x0) {
      piVar9 = (int *)((int *)(**(code **)(*piVar8 + 0xc))());
      local_1c = (int *)(piVar9);
      (**(code **)(*piVar9 + 4))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x10;
    thunk_FUN_103be9e0(piVar8,0xffffffff);
    *(unsigned char *)((char *)&local_8 + 0) = 0x11;
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x12;
    if (local_2c != (int *)0x0) {
      (**(code **)(*local_2c + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  }
  *param_1 = (undefined4)(piVar6);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
  }

  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10237b20; body size 248 bytes.
#line 1 "ENTRY_10237b20"

undefined4 * __stdcall FUN_10237b20(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
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
  puVar5 = (undefined4 *)(operator_new(8));
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    *puVar5 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
    puVar5[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *puVar5 = (undefined4)((uint)&ghidra_vftable_SCIncrementHHSwgenAndOnlineUpdateWizardActionDescriptor);
  }
  thunk_FUN_103be9e0(puVar5,0xffffffff);
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


// Reference entry 10237ea0; body size 350 bytes.
#line 1 "ENTRY_10237ea0"

undefined4 * __stdcall FUN_10237ea0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *local_1c;
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
    local_1c = (int *)((int *)0x0);
  }
  else {
    local_1c = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  piVar4 = (int *)(operator_new(0x18));
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    *piVar4 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar4[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar4[2] = 0;
    piVar4[3] = 0;
    *(undefined2 *)(piVar4 + 4) = 0;
    *piVar4 = (int)((int)(uint)&ghidra_vftable_SCOnlineUpdateWizardActionDescriptor);
    piVar4[5] = 0;
  }
  piVar5 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (piVar4 != (int *)0x0) {
    piVar5 = (int *)(piVar4);
    if (*(code **)(*piVar4 + 0xc) != thunk_FUN_101da390) {
      piVar5 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
    }
    (**(code **)(*piVar5 + 4))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
  thunk_FUN_103be9e0(piVar4,0xffffffff);
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(9)));
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }

  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10238060; body size 351 bytes.
#line 1 "ENTRY_10238060"

undefined4 * __stdcall FUN_10238060(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *local_1c;
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
    local_1c = (int *)((int *)0x0);
  }
  else {
    local_1c = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  piVar4 = (int *)(operator_new(0x18));
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    *piVar4 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar4[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar4 = (int)((int)(uint)&ghidra_vftable_SCDisplayCustomControlActionDescriptor);
    piVar4[2] = 0;
    piVar4[3] = 0;
    piVar4[4] = 0;
    piVar4[5] = 0;
  }
  piVar5 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (piVar4 != (int *)0x0) {
    piVar5 = (int *)(piVar4);
    if (*(code **)(*piVar4 + 0xc) != thunk_FUN_101da390) {
      piVar5 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
    }
    (**(code **)(*piVar5 + 4))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xb)));
  thunk_FUN_103be9e0(piVar4,0xffffffff);
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xc)));
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }

  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10238220; body size 669 bytes.
#line 1 "ENTRY_10238220"

undefined4 * FUN_10238220(undefined4 *param_1)

{
 try {
  int iVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  int *local_2c;
  int *local_28;
  int *local_20;
  int *local_1c;
  int *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);

  local_20 = (int *)(operator_new(0x14));

  if (local_20 == (int *)0x0) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    piVar5 = (int *)((int *)thunk_FUN_103be5e0(uVar4));
  }

  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))();
  }

  local_20 = (int *)((int *)0x0);
  if (piVar5 == (int *)0x0) {
    piVar6 = (int *)((int *)0x0);
  }
  else {
    piVar6 = (int *)((int *)(**(code **)(*piVar5 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  thunk_FUN_10436cd0(&local_18);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  local_11 = (char)(thunk_FUN_10437a40());
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  uVar2 = (undefined1)((undefined1)local_8);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_11 != '\0') {
    uVar7 = (undefined4)(createPropertyBag());
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    thunk_FUN_101aa9f0(uVar7);
    *(unsigned char *)((char *)&local_8 + 0) = 10;
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    ((SCStr *)((SCStr *)&local_18))->int_allocRep("sonosSWGen");
    *(unsigned char *)((char *)&local_8 + 0) = 0xb;
    thunk_FUN_10436cd0(&local_20);
    *(unsigned char *)((char *)&local_8 + 0) = 0xc;
    iVar1 = (int)(*local_2c);
    uVar3 = (undefined2)(thunk_FUN_10436b10());
    (**(code **)(iVar1 + 0x28))(&local_18,uVar3);
    *(unsigned char *)((char *)&local_8 + 0) = 0xd;
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0xe;
    ((SCStr *)((SCStr *)&local_18))->int_release();
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    local_20 = (int *)(operator_new(0x18));
    *(unsigned char *)((char *)&local_8 + 0) = 0xf;
    if (local_20 == (int *)0x0) {
      local_18 = (int *)((int *)0x0);
    }
    else {
      uVar7 = (undefined4)(thunk_FUN_1109aba0(0x2775,&DAT_11882ff0));
      local_18 = (int *)((int *)thunk_FUN_10201120(0x16,local_2c,uVar7));
    }
    piVar8 = (int *)((int *)0x0);
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    local_20 = (int *)((int *)0x0);
    if (local_18 != (int *)0x0) {
      piVar8 = (int *)((int *)(**(code **)(*local_18 + 0xc))());
      local_20 = (int *)(piVar8);
      (**(code **)(*piVar8 + 4))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x10)));
    thunk_FUN_103be9e0(local_18,0xffffffff);
    *param_1 = (undefined4)(piVar5);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x11;
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x12)));
    if (local_28 != (int *)0x0) {
      (**(code **)(*local_28 + 8))();
    }

    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))();
    }

    return (undefined4 *)(param_1);
  }
  *(unsigned char *)((char *)&local_8 + 0) = uVar2;
  local_20 = (int *)(operator_new(0x14));
  if (local_20 == (int *)0x0) {
    piVar8 = (int *)((int *)0x0);
  }
  else {
    *local_20 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    local_20[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *local_20 = (int)((int)(uint)&ghidra_vftable_SCAppUrlActionDescriptor);
    *(undefined2 *)(local_20 + 2) = 0;
    local_20[3] = 0;
    local_20[4] = 0;
    piVar8 = (int *)(local_20);
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  thunk_FUN_103be9e0(piVar8,0xffffffff);
  *param_1 = (undefined4)(piVar5);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))();
  }

  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102387b0; body size 192 bytes.
#line 1 "ENTRY_102387b0"

undefined4 * __stdcall FUN_102387b0(undefined4 *param_1)

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


// Reference entry 102388a0; body size 192 bytes.
#line 1 "ENTRY_102388a0"

undefined4 * __stdcall FUN_102388a0(undefined4 *param_1)

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


// Reference entry 10238990; body size 192 bytes.
#line 1 "ENTRY_10238990"

undefined4 * __stdcall FUN_10238990(undefined4 *param_1)

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


// Reference entry 10238a80; body size 192 bytes.
#line 1 "ENTRY_10238a80"

undefined4 * __stdcall FUN_10238a80(undefined4 *param_1)

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


// Reference entry 10238b70; body size 192 bytes.
#line 1 "ENTRY_10238b70"

undefined4 * __stdcall FUN_10238b70(undefined4 *param_1)

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


// Reference entry 10238c60; body size 192 bytes.
#line 1 "ENTRY_10238c60"

undefined4 * __stdcall FUN_10238c60(undefined4 *param_1)

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


// Reference entry 10238f70; body size 192 bytes.
#line 1 "ENTRY_10238f70"

undefined4 * __stdcall FUN_10238f70(undefined4 *param_1)

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


// Reference entry 10239060; body size 192 bytes.
#line 1 "ENTRY_10239060"

undefined4 * __stdcall FUN_10239060(undefined4 *param_1)

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


// Reference entry 10239370; body size 192 bytes.
#line 1 "ENTRY_10239370"

undefined4 * __stdcall FUN_10239370(undefined4 *param_1)

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


// Reference entry 10239460; body size 192 bytes.
#line 1 "ENTRY_10239460"

undefined4 * __stdcall FUN_10239460(undefined4 *param_1)

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


// Reference entry 10239620; body size 192 bytes.
#line 1 "ENTRY_10239620"

undefined4 * __stdcall FUN_10239620(undefined4 *param_1)

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


// Reference entry 10239710; body size 192 bytes.
#line 1 "ENTRY_10239710"

undefined4 * __stdcall FUN_10239710(undefined4 *param_1)

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


// Reference entry 10239800; body size 192 bytes.
#line 1 "ENTRY_10239800"

undefined4 * __stdcall FUN_10239800(undefined4 *param_1)

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


// Reference entry 102398f0; body size 192 bytes.
#line 1 "ENTRY_102398f0"

undefined4 * __stdcall FUN_102398f0(undefined4 *param_1)

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


// Reference entry 102399e0; body size 192 bytes.
#line 1 "ENTRY_102399e0"

undefined4 * __stdcall FUN_102399e0(undefined4 *param_1)

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


// Reference entry 10239d70; body size 192 bytes.
#line 1 "ENTRY_10239d70"

undefined4 * __stdcall FUN_10239d70(undefined4 *param_1)

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


// Reference entry 10239e60; body size 192 bytes.
#line 1 "ENTRY_10239e60"

undefined4 * __stdcall FUN_10239e60(undefined4 *param_1)

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


// Reference entry 10239f50; body size 192 bytes.
#line 1 "ENTRY_10239f50"

undefined4 * __stdcall FUN_10239f50(undefined4 *param_1)

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


// Reference entry 1023a040; body size 192 bytes.
#line 1 "ENTRY_1023a040"

undefined4 * __stdcall FUN_1023a040(undefined4 *param_1)

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


// Reference entry 1023a130; body size 192 bytes.
#line 1 "ENTRY_1023a130"

undefined4 * __stdcall FUN_1023a130(undefined4 *param_1)

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


// Reference entry 1023a220; body size 192 bytes.
#line 1 "ENTRY_1023a220"

undefined4 * __stdcall FUN_1023a220(undefined4 *param_1)

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


// Reference entry 1023a310; body size 192 bytes.
#line 1 "ENTRY_1023a310"

undefined4 * __stdcall FUN_1023a310(undefined4 *param_1)

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


// Reference entry 1023a4c0; body size 151 bytes.
#line 1 "ENTRY_1023a4c0"

SCStr * __stdcall FUN_1023a4c0(SCStr *param_1)

{
 try {
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_10436cd0(&local_14,DAT_12126b84 );

  cVar1 = (char)(thunk_FUN_10437b20());

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  if (cVar1 == '\0') {
    uVar3 = (undefined4)(0x276b);
  }
  else {
    uVar3 = (undefined4)(0x276a);
  }
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(uVar3,&DAT_11882ff0));
  ((SCStr *)(param_1))->int_allocRep(pcVar2);

  return (SCStr *)(param_1);

 } catch (...) { }
}


// Reference entry 1023a580; body size 88 bytes.
#line 1 "ENTRY_1023a580"

SCStr * __thiscall Recovered_Bulk::FUN_1023a580(SCStr *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(*(char **)(param_1 + 0x24));
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    uVar1 = (undefined4)(thunk_FUN_1109aba0(0x272e,&DAT_1188465c,pcVar2));
    ((SCStr *)((char *)param_2))->stringWithFormat(uVar1);
    return (SCStr *)(param_2);
  }
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x272f,&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 1023a680; body size 88 bytes.
#line 1 "ENTRY_1023a680"

SCStr * __thiscall Recovered_Bulk::FUN_1023a680(SCStr *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(*(char **)(param_1 + 0x24));
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    uVar1 = (undefined4)(thunk_FUN_1109aba0(0x2771,&DAT_1188465c,pcVar2));
    ((SCStr *)((char *)param_2))->stringWithFormat(uVar1);
    return (SCStr *)(param_2);
  }
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x2772,&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 1023a7d0; body size 129 bytes.
#line 1 "ENTRY_1023a7d0"

SCStr * __thiscall Recovered_Bulk::FUN_1023a7d0(SCStr *param_2)
{
  int param_1 = (int )this;
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 2:
    ((SCStr *)(param_2))->int_allocRep("SystemNotFound");
    return (SCStr *)(param_2);
  case 3:
    ((SCStr *)(param_2))->int_allocRep("OnlyZoneBridgesFound");
    return (SCStr *)(param_2);
  case 4:
    ((SCStr *)(param_2))->int_allocRep("OfflineNonZoneBridgesFound");
    return (SCStr *)(param_2);
  case 5:
    ((SCStr *)(param_2))->int_allocRep("WrongAP");
    return (SCStr *)(param_2);
  default:
    ((SCStr *)(param_2))->int_allocRep("");
    return (SCStr *)(param_2);
  }
}


// Reference entry 1023ab60; body size 135 bytes.
#line 1 "ENTRY_1023ab60"

undefined4 __thiscall Recovered_Bulk::FUN_1023ab60(uint param_2)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_10225ff0(local_8,&param_2,
                             ((((param_2 & 0xff ^ 0x811c9dc5) * 0x1000193 ^
                               (int)param_2 >> 8 & 0xffU) * 0x1000193 ^ (int)param_2 >> 0x10 & 0xffU
                              ) * 0x1000193 ^ (int)param_2 >> 0x18 & 0xffU) * 0x1000193));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 0xa0));
  }
  if (iVar1 != *(int *)(param_1 + 0xa0)) {
    return (undefined4)(*(undefined4 *)(iVar1 + 0xc));
  }
  return (undefined4)(0);
}


// Reference entry 1023b2b0; body size 223 bytes.
#line 1 "ENTRY_1023b2b0"

undefined1 FUN_1023b2b0(int *param_1,undefined4 *param_2)

{
 try {
  bool bVar1;
  uint uVar2;
  SCLibrary *this_;
  undefined4 uVar3;
  undefined1 uVar4;
  int **ppiVar5;
  int local_28;
  int local_24;
  int local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  bVar1 = (bool)(((SCLibrary *)(0))->isShuttingDown());
  if (bVar1) {

    return (undefined1)(0);
  }
  ppiVar5 = (int **)(&local_14);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  uVar3 = (undefined4)(((SCLibrary *)(this_))->getSCHousehold());

  thunk_FUN_101bf370(uVar3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(ppiVar5,uVar2);
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if ((local_1c != 0) && (*param_1 == 0)) {
    thunk_FUN_1037c680(&local_28);
    if (local_24 - local_28 >> 3 != 0) {
      *param_2 = (undefined4)(0x10);
      thunk_FUN_101f4a30();
      uVar4 = (undefined1)(1);
      goto LAB_1023b368;
    }
    thunk_FUN_101f4a30();
  }
  uVar4 = (undefined1)(0);
LAB_1023b368:

  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }

  return (undefined1)(uVar4);

 } catch (...) { }
}


// Reference entry 1023b3d0; body size 360 bytes.
#line 1 "ENTRY_1023b3d0"

undefined1 FUN_1023b3d0(int *param_1,undefined4 *param_2)

{
 try {
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  SCLibrary *this_;
  undefined4 uVar6;
  undefined1 uVar7;
  int *piVar8;
  int **ppiVar9;
  int *local_2c;
  int *local_28;
  int local_20;
  int *local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar5 = (uint)(DAT_12126b84);

  bVar3 = (bool)(((SCLibrary *)(0))->isShuttingDown());
  if (bVar3) {

    return (undefined1)(0);
  }
  ppiVar9 = (int **)(&local_14);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  uVar6 = (undefined4)(((SCLibrary *)(this_))->getSCHousehold());

  thunk_FUN_101bf370(uVar6);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(ppiVar9,uVar5);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if ((local_20 != 0) && (*param_1 == 0)) {
    thunk_FUN_1037f130(&local_2c,9);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
    piVar8 = (int *)(local_2c);
    if (local_2c != (int *)(local_28)) {
      do {
        piVar1 = (int *)((int *)piVar8[1]);
        iVar2 = (int)(*piVar8);
        local_18 = (int)(iVar2);
        local_14 = (int *)(piVar1);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))();
        }
        *(unsigned char *)((char *)&local_8 + 0) = 5;
        if (iVar2 != 0) {
          cVar4 = (char)(thunk_FUN_10328780());
          if (cVar4 != '\0') {
            cVar4 = (char)((**(code **)(*(int *)(iVar2 + 0xc) + 0x1c))());
            if (cVar4 != '\0') {
              *param_2 = (undefined4)(0xf);
              local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
              if (piVar1 != (int *)0x0) {
                (**(code **)(*piVar1 + 8))();
              }
              thunk_FUN_101f4a30();
              uVar7 = (undefined1)(1);
              goto LAB_1023b4eb;
            }
          }
        }
        *(unsigned char *)((char *)&local_8 + 0) = 7;
        if (piVar1 != (int *)0x0) {

          local_14 = (int *)((int *)0x0);
          (**(code **)(*piVar1 + 8))();
        }
        piVar8 = (int *)(piVar8 + 2);
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
      } while (piVar8 != (int *)(local_28));
    }
    thunk_FUN_101f4a30();
  }
  uVar7 = (undefined1)(0);
LAB_1023b4eb:

  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }

  return (undefined1)(uVar7);

 } catch (...) { }
}


// Reference entry 1023b5a0; body size 235 bytes.
#line 1 "ENTRY_1023b5a0"

undefined1 __thiscall Recovered_Bulk::FUN_1023b5a0(undefined4 *param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  char cVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  int *piVar6;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar6 = (int *)((int *)0x0);
  local_18 = (int *)((int *)0x0);
  if (pSVar3 != (SCLibrary *)0x0) {
    ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCISystem");

    puVar4 = (undefined4 *)((undefined4 *)(*(code *)**(undefined4 **)pSVar3)(&local_1c,&local_14,uVar2));
    piVar6 = (int *)((int *)*puVar4);
    *puVar4 = (undefined4)(0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    local_18 = (int *)(piVar6);
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }

    ((SCStr *)((SCStr *)&local_14))->int_release();

  }

  if (piVar6 != (int *)0x0) {
    cVar1 = (char)((**(code **)(*piVar6 + 0x18))());
    if (cVar1 != '\0') {
      *param_2 = (undefined4)(2);
      uVar5 = (undefined1)(1);
      *param_3 = (int)((*(char *)(param_1 + 0xf9) == '\0') + 0xc);
      goto LAB_1023b663;
    }
  }
  uVar5 = (undefined1)(0);
LAB_1023b663:

  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))();
  }

  return (undefined1)(uVar5);

 } catch (...) { }
}


// Reference entry 1023bb70; body size 349 bytes.
#line 1 "ENTRY_1023bb70"

undefined1 FUN_1023bb70(int *param_1,undefined4 *param_2)

{
 try {
  bool bVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  SCLibrary *this_;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;
  int **ppiVar9;
  int local_28;
  int *local_24;
  int *local_20 [2];
  int *local_18;
  char local_12;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);

  bVar1 = (bool)(((SCLibrary *)(0))->isShuttingDown());
  if (!bVar1) {
    ppiVar9 = (int **)(&local_18);

    this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    uVar5 = (undefined4)(((SCLibrary *)(this_))->getSCHousehold());

    thunk_FUN_101bf370(uVar5);
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))(ppiVar9,uVar4);
    }
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    uVar5 = (undefined4)(thunk_FUN_10436cd0(local_20));
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    thunk_FUN_102253f0(uVar5);
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    if (local_20[0] != (int *)0x0) {
      (**(code **)(*local_20[0] + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    uVar8 = (undefined1)(local_11);
    if (((*param_1 == 0) && (local_28 != 0)) &&
       (cVar2 = thunk_FUN_1038d6e0(), uVar8 = local_11, cVar2 == '\0')) {
      uVar3 = (undefined2)(thunk_FUN_11272de0());
      iVar6 = (int)(thunk_FUN_1037aad0(uVar3));
      iVar7 = (int)(thunk_FUN_1037cba0());
      local_12 = (char)(iVar7 == 2);
      cVar2 = (char)(thunk_FUN_10437b40());
      uVar8 = (undefined1)(local_11);
      if (((cVar2 != '\0') && (iVar6 == 4)) &&
         ((local_12 != '\0' && (cVar2 = thunk_FUN_1038dd80(), uVar8 = local_11, cVar2 != '\0')))) {
        *param_1 = (int)(2);
        *param_2 = (undefined4)(8);
        uVar8 = (undefined1)(1);
      }
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }

    if (local_24 != (int *)0x0) {
      (**(code **)(*local_24 + 8))();
    }

    return (undefined1)(uVar8);
  }

  return (undefined1)(0);

 } catch (...) { }
}


// Reference entry 1023bd30; body size 539 bytes.
#line 1 "ENTRY_1023bd30"

undefined1 FUN_1023bd30(int *param_1,undefined4 *param_2)

{
 try {
  int *piVar1;
  bool bVar2;
  char cVar3;
  ushort uVar4;
  SCLibrary *this_;
  ushort *puVar5;
  int iVar6;
  undefined1 uVar7;
  int *piVar8;
  int **ppiStack_5c;
  int **ppiStack_58;
  uint uStack_54;
  int *local_44;
  int *local_40;
  undefined1 local_38 [8];
  int local_30;
  int *local_2c;
  int *local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uStack_54 = (uint)(DAT_12126b84);

  ppiStack_58 = (int **)((int **)0x1023bd5d);
  bVar2 = (bool)(((SCLibrary *)(0))->isShuttingDown());
  if (bVar2) {

    return (undefined1)(0);
  }
  ppiStack_58 = (int **)(&local_18);
  ppiStack_5c = (int **)((int **)0x1023bd80);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  ppiStack_5c = (int **)((int **)0x1023bd87);
  ppiStack_5c = (int **)((int **)((SCLibrary *)(this_))->getSCHousehold());

  thunk_FUN_101bf370();
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    ppiStack_5c = (int **)((int **)0x1023bda7);
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;

  uVar7 = (undefined1)(0);
  if ((*param_1 == 0) && (local_30 != 0)) {
    ppiStack_5c = (int **)(&local_1c);
    ppiStack_5c = (int **)((int **)thunk_FUN_10436cd0());
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    thunk_FUN_102253f0();
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    if (local_1c != (int *)0x0) {
      ppiStack_5c = (int **)((int **)0x1023bdf0);
      (**(code **)(*local_1c + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    ppiStack_5c = (int **)((int **)0x1023bdfe);
    cVar3 = (char)(thunk_FUN_10437b40());
    if (cVar3 != '\0') {
      ppiStack_5c = (int **)((int **)0x1023be0d);
      cVar3 = (char)(thunk_FUN_1038d6e0());
      if (cVar3 == '\0') {
        ppiStack_5c = (int **)((int **)0x1023be1c);
        uVar4 = (ushort)(thunk_FUN_11272de0());
        local_18 = (int *)((int *)(uint)uVar4);
        ppiStack_5c = (int **)((int **)local_38);
        puVar5 = (ushort *)((ushort *)thunk_FUN_1037cbb0());
        if (uVar4 == *puVar5) {
          ppiStack_5c = (int **)((int **)0x1023be3a);
          thunk_FUN_1022d2b0();
          uVar7 = (undefined1)(0);
          goto LAB_1023bf22;
        }
        ppiStack_5c = (int **)((int **)0x9);
        thunk_FUN_1037f130(&local_44);
        *(unsigned char *)((char *)&local_8 + 0) = 8;
        piVar8 = (int *)(local_44);
        if (local_44 != (int *)(local_40)) {
          do {
            *(unsigned char *)((char *)&local_8 + 0) = 8;
            piVar1 = (int *)((int *)piVar8[1]);
            iVar6 = (int)(*piVar8);
            local_20 = (int)(iVar6);
            local_1c = (int *)(piVar1);
            if (piVar1 != (int *)0x0) {
              ppiStack_5c = (int **)((int **)0x1023be76);
              (**(code **)(*piVar1 + 4))();
            }
            *(unsigned char *)((char *)&local_8 + 0) = 9;
            if (iVar6 != 0) {
              ppiStack_5c = (int **)((int **)0x1023be85);
              uVar4 = (ushort)(thunk_FUN_103238a0());
              if (uVar4 < (ushort)local_18) {
                *(unsigned char *)((char *)&local_8 + 0) = 8;
                ppiStack_5c = (int **)((int **)0x1023bec2);
                thunk_FUN_101b9d60();
                *param_1 = (int)(2);
                *param_2 = (undefined4)(7);
                ppiStack_5c = (int **)((int **)0x1023bede);
                cVar3 = (char)(thunk_FUN_10437a40());
                if (cVar3 == '\0') {
                  ppiStack_5c = (int **)((int **)0x1023bee9);
                  iVar6 = (int)(thunk_FUN_10436b00());
                  if (*(char *)(iVar6 + 0xd0c) == '\0') {
                    ((SCStr *)((SCStr *)&ppiStack_5c))->int_allocRep((char *)0x0);
                    thunk_FUN_10435c80();
                  }
                }

                break;
              }
            }
            *(unsigned char *)((char *)&local_8 + 0) = 10;
            if (piVar1 != (int *)0x0) {

              local_1c = (int *)((int *)0x0);
              ppiStack_5c = (int **)((int **)0x1023bea8);
              (**(code **)(*piVar1 + 8))();
            }
            piVar8 = (int *)(piVar8 + 2);
            *(unsigned char *)((char *)&local_8 + 0) = 8;
          } while (piVar8 != (int *)(local_40));
        }
        ppiStack_5c = (int **)((int **)0x1023bf0f);
        thunk_FUN_101f4a30();
      }
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xb)));
    uVar7 = (undefined1)(local_11);
    if (local_24 != (int *)0x0) {
      ppiStack_5c = (int **)((int **)0x1023bf1f);
      (**(code **)(*local_24 + 8))();
      uVar7 = (undefined1)(local_11);
    }
  }
LAB_1023bf22:

  if (local_2c != (int *)0x0) {
    ppiStack_5c = (int **)((int **)0x1023bf35);
    (**(code **)(*local_2c + 8))();
  }

  return (undefined1)(uVar7);

 } catch (...) { }
}


// Reference entry 1023bfe0; body size 219 bytes.
#line 1 "ENTRY_1023bfe0"

undefined1 FUN_1023bfe0(int *param_1,undefined4 *param_2)

{
 try {
  bool bVar1;
  uint uVar2;
  int iVar3;
  SCLibrary *this_;
  undefined4 uVar4;
  undefined1 uVar5;
  int **ppiVar6;
  int local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  bVar1 = (bool)(((SCLibrary *)(0))->isShuttingDown());
  if (bVar1) {

    return (undefined1)(0);
  }
  uVar5 = (undefined1)(0);
  iVar3 = (int)(thunk_FUN_110828b0(uVar2));
  ppiVar6 = (int **)(&local_14);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  uVar4 = (undefined4)(((SCLibrary *)(this_))->getSCHousehold());

  thunk_FUN_101bf370(uVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(ppiVar6);
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (((iVar3 != 0) && (*param_1 == 0)) && (*(char *)(iVar3 + 0x6ca) != '\0')) {
    iVar3 = (int)((**(code **)(*(int *)(local_1c + 0xc) + 0x14))(0xb));
    if (iVar3 == 0) {
      uVar5 = (undefined1)(1);
      *param_2 = (undefined4)(0xe);
    }
  }

  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }

  return (undefined1)(uVar5);

 } catch (...) { }
}


// Reference entry 1023c100; body size 70 bytes.
#line 1 "ENTRY_1023c100"

undefined4 FUN_1023c100(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  SCLibrary *pSVar2;
  int iVar3;
  
  pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  iVar3 = (int)((**(code **)(*(int *)pSVar2 + 0xf4))());
  cVar1 = (char)(thunk_FUN_10240d50(*param_1));
  if ((cVar1 == '\0') && (iVar3 == 1)) {
    *param_2 = (undefined4)(10);
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 1023d290; body size 144 bytes.
#line 1 "ENTRY_1023d290"

undefined4 FUN_1023d290(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  cVar1 = (char)(thunk_FUN_10240a30());
  if (cVar1 != '\0') {
    pcVar3 = (char *)("Substate(KnownNetwork): Connected to known network");
LAB_1023d2a1:
    thunk_FUN_112af4e0("SCController",1,pcVar3);
    return (undefined4)(2);
  }
  cVar1 = (char)(thunk_FUN_10240ec0());
  if (cVar1 != '\0') {
    cVar1 = (char)(thunk_FUN_10240fb0());
    if (cVar1 != '\0') {
      iVar2 = (int)(thunk_FUN_101b5540());
      if (iVar2 != 0) {
        cVar1 = (char)(thunk_FUN_101b5de0(3));
        if (cVar1 != '\0') {
          thunk_FUN_112af4e0("SCController",1,
                             "Substate(UnknownNetwork): Connected to unknown network");
          return (undefined4)(5);
        }
      }
      pcVar3 = (char *)("Substate(LANPermissionsDenied): Controller does not have local network permissions enabled");
      goto LAB_1023d2a1;
    }
  }
  thunk_FUN_112af4e0("SCController",1,"Substate(OutOfRange): WiFi is on but no connected to AP");
  return (undefined4)(1);
}


// Reference entry 1023d350; body size 178 bytes.
#line 1 "ENTRY_1023d350"

void __fastcall FUN_1023d350(int param_1)

{
 try {
  int *piVar1;
  int *piVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar2 = (int *)((int *)thunk_FUN_10292c70(&local_14,DAT_12126b84 ));
  piVar1 = (int *)((int *)*piVar2);

  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if ((piVar1 != (int *)0x0) && (*(int *)(param_1 + 0x1c) != 0)) {
    (**(code **)(*piVar1 + 0x3c))(*(int *)(param_1 + 0x1c),0,1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 1023d600; body size 433 bytes.
#line 1 "ENTRY_1023d600"

void __thiscall Recovered_Bulk::FUN_1023d600(int *param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  piVar2 = (int *)(operator_new(8));
  local_20 = (int *)(piVar2);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
    piVar3 = (int *)((int *)0x0);
  }
  else {
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCWeakChargerLearnMoreActionDescriptor);
    piVar3 = (int *)((int *)0x0);
    if (piVar2 != (int *)0x0) {
      if (*(code **)(*piVar2 + 0xc) == thunk_FUN_101da390) {
        (**(code **)(*piVar2 + 4))();
        piVar3 = (int *)(piVar2);
      }
      else {
        piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))(uVar1));
        (**(code **)(*piVar3 + 4))();
      }
    }
  }
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  if (param_2 != (int *)0x0) {
    ((SCStr *)((SCStr *)&local_20))->int_allocRep("");
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep((char *)0x0);
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    ((SCStr *)((SCStr *)&local_18))->int_allocRep("");
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    pcVar4 = (char *)((char *)thunk_FUN_1109aba0(0x26fd,&DAT_11882ff0));
    ((SCStr *)((SCStr *)&local_14))->int_allocRep(pcVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    uVar5 = (undefined4)((**(code **)(*param_2 + 0x38))
                      (&local_14,1,piVar2,0,0,&local_18,&local_1c,1,1,0,0,0,&local_20));
    *(undefined4 *)(param_1 + 0x1c) = uVar5;
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    ((SCStr *)((SCStr *)&local_14))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 7;
    ((SCStr *)((SCStr *)&local_18))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 8;
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 9;
    ((SCStr *)((SCStr *)&local_20))->int_release();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 1023ea50; body size 84 bytes.
#line 1 "ENTRY_1023ea50"

void __stdcall FUN_1023ea50(undefined4 param_1,int *param_2)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  if (param_2 != (int *)0x0) {
    param_1 = (undefined4)(0);
    (**(code **)(*param_2 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 10240090; body size 119 bytes.
#line 1 "ENTRY_10240090"

undefined4 FUN_10240090(void)

{
 try {
  uint uVar1;
  SCLibrary *pSVar2;
  int *piVar3;
  undefined4 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar3 = (int *)((int *)0x0);
  if (pSVar2 != (SCLibrary *)0x0) {
    piVar3 = (int *)((int *)(**(code **)(*(int *)pSVar2 + 0xc))(uVar1));
    (**(code **)(*piVar3 + 4))();
    if (*(int *)(pSVar2 + 0x4c) != 0) {
      uVar4 = (undefined4)(*(undefined4 *)(*(int *)(pSVar2 + 0x4c) + 0xe8));
      goto LAB_102400e2;
    }
  }
  uVar4 = (undefined4)(0);
LAB_102400e2:

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined4)(uVar4);

 } catch (...) { }
}


// Reference entry 10240130; body size 603 bytes.
#line 1 "ENTRY_10240130"

void __stdcall FUN_10240130(int *param_1)

{
 try {
  int *piVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  SCLibrary *pSVar5;
  int *piVar6;
  int aiStack_104 [8];
  undefined4 uStack_e4;
  SCStr local_bc [4];
  int *local_b8;
  void *local_b4;
  undefined1 *puStack_b0;
  undefined4 local_ac;
  undefined1 local_a8 [36];
  int *local_84;
  int *local_5c;
  int *local_34;
  undefined1 local_30 [36];
  int *local_c;
  uint local_8;


  local_8 = (uint)(DAT_12126b84 ^ (uint)local_a8);

  local_b8 = (int *)(param_1);
  bVar3 = (bool)(false);
  pSVar5 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar6 = (int *)((int *)(**(code **)(*(int *)pSVar5 + 0x88))());
  piVar1 = (int *)((int *)*piVar6);

  *piVar6 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar6 = (int *)((int *)0x0);
  }
  else {
    piVar6 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_ac + 0) = 3;
  if (local_b8 != (int *)0x0) {
    (**(code **)(*local_b8 + 8))();
  }
  *(unsigned char *)((char *)&local_ac + 0) = 2;
  if (piVar1 != (int *)0x0) {

    ((SCStr *)(local_bc))->int_allocRep("Feature-SetupHousehold");
    bVar3 = (bool)(true);
    local_ac = (undefined4)(((uint)(*(unsigned short *)((char *)&local_ac + 1)) << 8 | (uint)(4)));

    cVar4 = (char)((**(code **)(*piVar1 + 0x14))());
    if (cVar4 != '\0') {
      bVar2 = (bool)(true);
      goto LAB_102401f9;
    }
  }
  bVar2 = (bool)(false);
LAB_102401f9:
  *(unsigned short *)((char *)&local_ac + 1) = 0;
  if (bVar3) {
    *(unsigned char *)((char *)&local_ac + 0) = 5;
    *(unsigned short *)((char *)&local_ac + 1) = 0;
    ((SCStr *)(local_bc))->int_release();
  }
  *(unsigned char *)((char *)&local_ac + 0) = 2;
  if (bVar2) {
    thunk_FUN_105ee3e0(0x17,60000);
    thunk_FUN_10224630();
    *(unsigned char *)((char *)&local_ac + 0) = 6;
    thunk_FUN_105ed9c0();
    *(unsigned char *)((char *)&local_ac + 0) = 7;

    thunk_FUN_105ef470();
    local_ac = (undefined4)(((uint)(*(unsigned short *)((char *)&local_ac + 1)) << 8 | (uint)(8)));
    thunk_FUN_105f0080(aiStack_104,local_30);
    thunk_FUN_102244a0();
    if (local_5c != (int *)0x0) {

      (**(code **)(*local_5c + 0x10))();
      local_5c = (int *)((int *)0x0);
    }
    if (local_84 != (int *)0x0) {

      (**(code **)(*local_84 + 0x10))();
      local_84 = (int *)((int *)0x0);
    }
    if (local_c != (int *)0x0) {

      (**(code **)(*local_c + 0x10))();
      local_c = (int *)((int *)0x0);
    }
    local_b8 = (int *)(aiStack_104);
    *(unsigned char *)((char *)&local_ac + 0) = 0xd;
    piVar1 = (int *)(aiStack_104);
    if (local_34 != (int *)0x0) {
      (**(code **)*local_34)(aiStack_104);
      piVar1 = (int *)(local_b8);
    }
    local_b8 = (int *)(piVar1);
    local_ac = (undefined4)(((uint)(*(unsigned short *)((char *)&local_ac + 1)) << 8 | (uint)(0xc)));
    thunk_FUN_1033d2d0(param_1);
    if (local_34 != (int *)0x0) {

      (**(code **)(*local_34 + 0x10))();
      local_34 = (int *)((int *)0x0);
    }

    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))();
    }
  }
  else {
    *param_1 = (int)(0);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[0xd] = 0;

    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))();
    }
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10240a30; body size 639 bytes.
#line 1 "ENTRY_10240a30"

void FUN_10240a30(void)

{
 try {
  void *pvVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *_Memory;
  int local_508;
  char *local_504;
  int local_500;
  int local_4fc;
  void *local_4f8;
  undefined1 *puStack_4f4;
  undefined4 local_4f0;
  undefined1 local_4ec [1252];
  uint local_8;


  uVar2 = (uint)(DAT_12126b84 ^ (uint)local_4ec);

  local_8 = (uint)(uVar2);
  thunk_FUN_1023fb30(&local_504);

  if ((local_504 == (char *)0x0) || (*local_504 == '\0')) {
    thunk_FUN_112af4e0("SCController",0,"Failed to retrieve Network Bssid info",uVar2);
  }
  else {


    *(unsigned char *)((char *)&local_4f0 + 0) = 1;
    *(unsigned short *)((char *)&local_4f0 + 1) = 0;
    thunk_FUN_101a2b90(&local_504);
    iVar4 = (int)(local_4fc);
    local_4f0 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_4f0 + 1)) << 8 | (uint)(2)));
    if (((local_4fc != 0) && (_Memory = (int *)(local_4fc + -0x10), *_Memory < 0xffff)) &&
       (iVar3 = thunk_FUN_1123fcd0(_Memory), iVar3 == 0)) {
      *(undefined4 *)(iVar4 + -8) = 0;
      *(undefined4 *)(iVar4 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar4,*(undefined4 *)(iVar4 + -4));
      free(_Memory);
    }
    local_4fc = (int)(local_508);
    if ((local_508 != 0) && (*(int *)(local_508 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0(local_508 + -0x10);
    }
    *(unsigned char *)((char *)&local_4f0 + 0) = 3;
    if (((local_508 != 0) && (*(int *)(local_508 + -0x10) < 0xffff)) &&
       (iVar4 = thunk_FUN_1123fcd0((void *)(local_508 + -0x10)), iVar4 == 0)) {
      *(undefined4 *)(local_508 + -8) = 0;
      *(undefined4 *)(local_508 + -0xc) = 0;
      thunk_FUN_113cfb70(local_508,*(undefined4 *)(local_508 + -4));
      free((void *)(local_508 + -0x10));
    }
    *(unsigned char *)((char *)&local_4f0 + 0) = 1;
    iVar4 = (int)(thunk_FUN_110f2980());
    if ((iVar4 == 0) || (iVar4 = thunk_FUN_110f4420(&local_500,2,local_4ec,1), iVar4 == 0)) {
      *(unsigned char *)((char *)&local_4f0 + 0) = 7;
      if (((local_4fc != 0) && (*(int *)(local_4fc + -0x10) < 0xffff)) &&
         (iVar4 = thunk_FUN_1123fcd0((void *)(local_4fc + -0x10)), iVar4 == 0)) {
        *(undefined4 *)(local_4fc + -8) = 0;
        *(undefined4 *)(local_4fc + -0xc) = 0;
        thunk_FUN_113cfb70(local_4fc,*(undefined4 *)(local_4fc + -4));
        free((void *)(local_4fc + -0x10));
      }
      iVar4 = (int)(local_500);
      local_4f0 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_4f0 + 1)) << 8 | (uint)(8)));
      if (((local_500 != 0) &&
          (pvVar1 = (void *)(local_500 + -0x10), *(int *)(local_500 + -0x10) < 0xffff)) &&
         (iVar3 = thunk_FUN_1123fcd0(pvVar1), iVar3 == 0)) {
        *(undefined4 *)(iVar4 + -8) = 0;
        *(undefined4 *)(iVar4 + -0xc) = 0;
        thunk_FUN_113cfb70(iVar4,*(undefined4 *)(iVar4 + -4));
        free(pvVar1);
      }
    }
    else {
      *(unsigned char *)((char *)&local_4f0 + 0) = 4;
      if ((local_4fc != 0) &&
         ((*(int *)(local_4fc + -0x10) < 0xffff &&
          (iVar4 = thunk_FUN_1123fcd0((void *)(local_4fc + -0x10)), iVar4 == 0)))) {
        *(undefined4 *)(local_4fc + -8) = 0;
        *(undefined4 *)(local_4fc + -0xc) = 0;
        thunk_FUN_113cfb70(local_4fc,*(undefined4 *)(local_4fc + -4));
        free((void *)(local_4fc + -0x10));
      }
      iVar4 = (int)(local_500);
      local_4f0 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_4f0 + 1)) << 8 | (uint)(5)));
      if (((local_500 != 0) &&
          (pvVar1 = (void *)(local_500 + -0x10), *(int *)(local_500 + -0x10) < 0xffff)) &&
         (iVar3 = thunk_FUN_1123fcd0(pvVar1), iVar3 == 0)) {
        *(undefined4 *)(iVar4 + -8) = 0;
        *(undefined4 *)(iVar4 + -0xc) = 0;
        thunk_FUN_113cfb70(iVar4,*(undefined4 *)(iVar4 + -4));
        free(pvVar1);
      }
    }
  }

  ((SCStr *)((SCStr *)&local_504))->int_release();

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10240ec0; body size 182 bytes.
#line 1 "ENTRY_10240ec0"

undefined1 FUN_10240ec0(void)

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
  piVar4 = (int *)((int *)(**(code **)(*(int *)pSVar3 + 0xd8))(&local_14,uVar2));
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
    iVar5 = (int)((**(code **)(*piVar1 + 0x14))());
    if ((iVar5 == 1) || (iVar5 == 3)) {
      uVar6 = (undefined1)(0);
      goto LAB_10240f50;
    }
  }
  uVar6 = (undefined1)(1);
LAB_10240f50:

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined1)(uVar6);

 } catch (...) { }
}


// Reference entry 10241a10; body size 572 bytes.
#line 1 "ENTRY_10241a10"

void FUN_10241a10(void)

{
 try {
  uint uVar1;
  int *piVar2;
  SCLibrary *this_;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int **ppiVar6;
  undefined4 local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  piVar2 = (int *)((int *)createPropertyBag());
  piVar5 = (int *)((int *)*piVar2);

  *piVar2 = (int)(0);
  local_2c = (int *)(piVar5);
  if (piVar5 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar5 + 0xc))(uVar1));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)((SCStr *)&local_18))->int_allocRep("StateChanged");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("eventType");
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  (**(code **)(*piVar5 + 0x1c))(&local_14,&local_18);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)((SCStr *)&local_18))->int_release();
  ppiVar6 = (int **)(&local_28);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar3 = (int *)((int *)((SCLibrary *)(this_))->getSCHousehold());
  piVar5 = (int *)((int *)*piVar3);
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  *piVar3 = (int)(0);
  local_1c = (int *)(piVar5);
  if (piVar5 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar5 + 0xc))(ppiVar6));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  local_18 = (int *)(piVar3);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)((int *)0x0);
    local_24 = (int *)((int *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCIZoneGroupMgr");
    *(unsigned char *)((char *)&local_8 + 0) = 10;
    puVar4 = (undefined4 *)((undefined4 *)(**(code **)*piVar5)(&local_20,&local_14));
    piVar5 = (int *)((int *)*puVar4);
    *puVar4 = (undefined4)(0);
    *(unsigned char *)((char *)&local_8 + 0) = 0xc;
    local_24 = (int *)(piVar5);
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0xd;
    ((SCStr *)((SCStr *)&local_14))->int_release();

  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xe;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0x11;
  if (local_28 != (int *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  piVar3 = (int *)(local_2c);
  *(unsigned char *)((char *)&local_8 + 0) = 0x10;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0x58))(local_2c);
    ((SCStr *)((SCStr *)&local_18))->int_allocRep("household");
    *(unsigned char *)((char *)&local_8 + 0) = 0x12;
    ((SCStr *)((SCStr *)&local_14))->int_allocRep("household");
    *(unsigned char *)((char *)&local_8 + 0) = 0x13;
    puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_101f6530(&local_30));
    *(unsigned char *)((char *)&local_8 + 0) = 0x14;
    (**(code **)(*(int *)*puVar4 + 0x18))(&local_14,&local_18,piVar3);
    piVar3 = (int *)(local_2c);
    *(unsigned char *)((char *)&local_8 + 0) = 0x15;
    if (local_2c != (int *)0x0) {

      local_2c = (int *)((int *)0x0);
      (**(code **)(*piVar3 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x16;
    ((SCStr *)((SCStr *)&local_14))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x17;
    ((SCStr *)((SCStr *)&local_18))->int_release();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x18)));
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10241ce0; body size 149 bytes.
#line 1 "ENTRY_10241ce0"

void __fastcall FUN_10241ce0(int param_1)

{
  thunk_FUN_112af4e0("SCController",1,"Resetting controller state");
  *(undefined1 *)(param_1 + 0xe0) = 0;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  if (*(undefined4 **)(param_1 + 0x84) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x84))(1);
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  thunk_FUN_10242250();
  *(undefined4 *)(param_1 + 0xec) = 0;
  if (*(int *)(param_1 + 0xf0) != 0) {
    thunk_FUN_1059d940(*(int *)(param_1 + 0xf0));
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  if (*(int *)(param_1 + 0xf4) != 0) {
    thunk_FUN_1059d940(*(int *)(param_1 + 0xf4));
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  return;
}


// Reference entry 10241da0; body size 75 bytes.
#line 1 "ENTRY_10241da0"

void __fastcall FUN_10241da0(int param_1)

{
  *(undefined4 *)(param_1 + 0xec) = 0;
  if (*(int *)(param_1 + 0xf0) != 0) {
    thunk_FUN_1059d940(*(int *)(param_1 + 0xf0));
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  if (*(int *)(param_1 + 0xf4) != 0) {
    thunk_FUN_1059d940(*(int *)(param_1 + 0xf4));
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  return;
}


// Reference entry 10241ed0; body size 364 bytes.
#line 1 "ENTRY_10241ed0"

undefined1 FUN_10241ed0(void)

{
 try {
  int *piVar1;
  char cVar2;
  uint uVar3;
  SCLibrary *pSVar4;
  int *piVar5;
  int *piVar6;
  int local_20;
  int *local_1c;
  uint local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  pSVar4 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar5 = (int *)((int *)0x0);
  if (pSVar4 == (SCLibrary *)0x0) {

  }
  else {
    piVar5 = (int *)((int *)(**(code **)(*(int *)pSVar4 + 0xc))(uVar3));
    (**(code **)(*piVar5 + 4))();
    local_20 = (int)(*(int *)(pSVar4 + 0x4c));
  }
  piVar6 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  if (pSVar4 != (SCLibrary *)0x0) {
    piVar6 = (int *)((int *)(**(code **)(*(int *)pSVar4 + 0x88))(&local_1c));
    piVar1 = (int *)((int *)*piVar6);
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    *piVar6 = (int)(0);
    if (piVar1 == (int *)0x0) {
      piVar6 = (int *)((int *)0x0);
    }
    else {
      piVar6 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    if (piVar1 != (int *)0x0) {
      ((SCStr *)((SCStr *)&local_1c))->int_allocRep("Feature-Settings");

      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
      cVar2 = (char)((**(code **)(*piVar1 + 0x14))(&local_1c));
      local_11 = (char)('\x01');
      if (cVar2 != '\0') goto LAB_10241fc9;
    }
  }
  local_11 = (char)('\0');
LAB_10241fc9:

  if ((local_18 & 1) != 0) {

    ((SCStr *)((SCStr *)&local_1c))->int_release();
  }
  if (((local_11 == '\0') || (local_20 == 0)) ||
     ((*(int *)(local_20 + 0x6c) != 2 && (*(int *)(local_20 + 0x6c) != 4)))) {

  }
  else {

  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))();
  }

  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }

  return (undefined1)(local_11);

 } catch (...) { }
}


// Reference entry 102420a0; body size 345 bytes.
#line 1 "ENTRY_102420a0"

void __thiscall Recovered_Bulk::FUN_102420a0(int *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  char *pcVar2;
  undefined4 uVar3;
  SCLibrary *this_;
  undefined4 *puVar4;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pcVar2 = (char *)("Only Bridges");
  if (*(int *)(param_1 + 0xdc) == 0) {
    if ((char)param_2 == '\0') {
      pcVar2 = (char *)("No players");
    }
    thunk_FUN_112af4e0("SCController",1,"State(Searching): %s, let\'s start searching.",pcVar2,uVar1
                      );
    uVar3 = (undefined4)(thunk_FUN_1059d5a0(15000));
    *(undefined4 *)(param_1 + 0xdc) = uVar3;
    uVar3 = (undefined4)(thunk_FUN_1059d5a0(10000));
    *(undefined4 *)(param_1 + 0xe4) = uVar3;

    return;
  }
  if (*(char *)(param_1 + 0xe8) == '\0') {
    if ((char)param_2 == '\0') {
      pcVar2 = (char *)("No players");
    }
    thunk_FUN_112af4e0("SCController",1,"State(Searching): %s, Still searching",pcVar2,uVar1);
  }
  else {
    if ((char)param_2 == '\0') {
      pcVar2 = (char *)("No players");
    }
    thunk_FUN_112af4e0("SCController",1,
                       "State(Searching): %s, Still searching, beginning cloud-assisted discovery",
                       pcVar2,uVar1);
    *(undefined1 *)(param_1 + 0xe8) = 0;
    puVar4 = (undefined4 *)(&param_2);
    this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    uVar3 = (undefined4)(((SCLibrary *)(this_))->getSCHousehold());

    thunk_FUN_101bf370(uVar3);
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 8))(puVar4);
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 0x178))();
    }

    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();

      return;
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10242250; body size 105 bytes.
#line 1 "ENTRY_10242250"

void __fastcall FUN_10242250(int param_1)

{
  if (*(int *)(param_1 + 0xdc) != 0) {
    thunk_FUN_1059d940(*(int *)(param_1 + 0xdc));
    *(undefined4 *)(param_1 + 0xdc) = 0;
    thunk_FUN_112af4e0("SCController",1,"Resetting search timer");
  }
  if (*(int *)(param_1 + 0xe4) != 0) {
    thunk_FUN_1059d940(*(int *)(param_1 + 0xe4));
    *(undefined4 *)(param_1 + 0xe4) = 0;
    thunk_FUN_112af4e0("SCController",1,"Resetting cloud timer");
  }
  return;
}


// Reference entry 102423a0; body size 755 bytes.
#line 1 "ENTRY_102423a0"

void FUN_102423a0(void)

{
 try {
  int *piVar1;
  char *pcVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_e6c [28];
  undefined4 uStack_e50;
  char *pcStack_e4c;
  uint local_e2c;
  undefined4 local_e28;
  int *local_e24;
  void *local_e20;
  undefined1 *puStack_e1c;
  undefined4 local_e18;
  undefined1 local_e14 [36];
  int *local_df0;
  int *local_dc8;
  undefined1 local_dc4 [36];
  int *local_da0;
  undefined1 local_d9c [52];
  int *local_d68;
  int *local_d40;
  undefined1 local_d3c [36];
  int *local_d18;
  int *local_cf0;
  char local_cec [3300];
  uint local_8;


  local_8 = (uint)(DAT_12126b84 ^ (uint)local_e14);

  pcStack_e4c = (char *)((char *)0x102423e2);
  piVar1 = (int *)((int *)createSCStringArray());
  piVar4 = (int *)((int *)*piVar1);

  *piVar1 = (int)(0);
  if (piVar4 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
  }
  *(unsigned char *)((char *)&local_e18 + 0) = 3;
  if (local_e24 != (int *)0x0) {
    (**(code **)(*local_e24 + 8))();
  }
  *(unsigned char *)((char *)&local_e18 + 0) = 2;
  thunk_FUN_1109f7f0();
  pcStack_e4c = (char *)(local_cec);

  thunk_FUN_1109f140();
  if (local_e2c != 0) {
    pcVar2 = (char *)(local_cec);
    uVar3 = (uint)(0);
    do {
      pcStack_e4c = (char *)((char *)0x1024244d);
      ((SCStr *)((SCStr *)&local_e28))->int_allocRep(pcVar2);
      *(unsigned char *)((char *)&local_e18 + 0) = 4;
      pcStack_e4c = (char *)((char *)0x1024245c);
      (**(code **)(*piVar4 + 0x24))();
      *(unsigned char *)((char *)&local_e18 + 0) = 5;
      ((SCStr *)((SCStr *)&local_e28))->int_release();
      uVar3 = (uint)(uVar3 + 1);

      pcVar2 = (char *)(pcVar2 + 0x21);
      *(unsigned char *)((char *)&local_e18 + 0) = 2;
    } while (uVar3 < local_e2c);
  }
  thunk_FUN_105ee3e0(0x14,60000);
  thunk_FUN_10224630();
  puVar6 = (undefined1 *)(auStack_e6c);
  *(unsigned char *)((char *)&local_e18 + 0) = 6;
  piVar5 = (int *)(piVar1);
  puVar7 = (undefined1 *)(auStack_e6c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar4,piVar1,auStack_e6c);
    puVar7 = (undefined1 *)(puVar6);
  }
  thunk_FUN_105ed770(piVar4,piVar5);
  *(unsigned char *)((char *)&local_e18 + 0) = 7;
  thunk_FUN_105ef470(puVar7);
  thunk_FUN_102244a0();
  *(unsigned char *)((char *)&local_e18 + 0) = 8;
  thunk_FUN_105ed9c0();
  *(unsigned char *)((char *)&local_e18 + 0) = 9;
  pcStack_e4c = (char *)(local_dc4);

  thunk_FUN_105f0080();
  local_e18 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_e18 + 1)) << 8 | (uint)(10)));
  thunk_FUN_105f0080(auStack_e6c,local_d3c);
  thunk_FUN_102244a0();
  if (local_da0 != (int *)0x0) {
    pcStack_e4c = (char *)((undefined1 *)0x10242533);
    (**(code **)(*local_da0 + 0x10))();
    local_da0 = (int *)((int *)0x0);
  }
  if (local_dc8 != (int *)0x0) {
    pcStack_e4c = (char *)((undefined1 *)0x10242552);
    (**(code **)(*local_dc8 + 0x10))();
    local_dc8 = (int *)((int *)0x0);
  }
  if (local_cf0 != (int *)0x0) {
    pcStack_e4c = (char *)((undefined1 *)0x10242577);
    (**(code **)(*local_cf0 + 0x10))();
    local_cf0 = (int *)((int *)0x0);
  }
  if (local_df0 != (int *)0x0) {
    pcStack_e4c = (char *)((undefined1 *)0x10242599);
    (**(code **)(*local_df0 + 0x10))();
    local_df0 = (int *)((int *)0x0);
  }
  if (local_d18 != (int *)0x0) {
    pcStack_e4c = (char *)((undefined1 *)0x102425be);
    (**(code **)(*local_d18 + 0x10))();
    local_d18 = (int *)((int *)0x0);
  }
  local_e24 = (int *)((int *)auStack_e6c);
  *(unsigned char *)((char *)&local_e18 + 0) = 0x11;
  piVar4 = (int *)((int *)auStack_e6c);
  if (local_d40 != (int *)0x0) {
    (**(code **)*local_d40)(auStack_e6c);
    piVar4 = (int *)(local_e24);
  }
  local_e24 = (int *)(piVar4);
  local_e18 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_e18 + 1)) << 8 | (uint)(0x10)));
  thunk_FUN_1033d2d0(local_d9c);
  if (local_d68 != (int *)0x0) {
    pcStack_e4c = (char *)((undefined1 *)0x1024262a);
    (**(code **)(*local_d68 + 0x10))();
    local_d68 = (int *)((int *)0x0);
  }
  if (local_d40 != (int *)0x0) {
    pcStack_e4c = (char *)((undefined1 *)0x10242652);
    (**(code **)(*local_d40 + 0x10))();
    local_d40 = (int *)((int *)0x0);
  }

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10242750; body size 208 bytes.
#line 1 "ENTRY_10242750"

undefined1 FUN_10242750(void)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  undefined4 uVar4;
  int *piVar5;
  int *local_24;
  int *local_20;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  uVar1 = (undefined1)(0);
  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar5 = (int *)((int *)0x0);
  if (pSVar3 != (SCLibrary *)0x0) {
    piVar5 = (int *)((int *)(**(code **)(*(int *)pSVar3 + 0xc))(uVar2));
    (**(code **)(*piVar5 + 4))();
  }

  if (pSVar3 != (SCLibrary *)0x0) {
    uVar4 = (undefined4)((**(code **)(*(int *)pSVar3 + 0x88))(&local_14));
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    thunk_FUN_101e7e50(uVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    uVar1 = (undefined1)(0);
    if (local_24 != (int *)0x0) {
      uVar1 = (undefined1)((**(code **)(*local_24 + 0x3c))());
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 8))();
    }
  }

  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10242870; body size 425 bytes.
#line 1 "ENTRY_10242870"

undefined1 __fastcall FUN_10242870(int *param_1)

{
 try {
  uint uVar1;
  SCLibrary *pSVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 uVar6;
  int *piVar7;
  int *piVar8;
  int *local_24;
  int *local_20;
  int *local_1c;
  undefined4 local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  local_24 = (int *)((int *)0x0);
  if (pSVar2 != (SCLibrary *)0x0) {
    local_24 = (int *)((int *)(**(code **)(*(int *)pSVar2 + 0xc))(uVar1));
    (**(code **)(*local_24 + 4))();
  }

  if (*(int *)(*(int *)(pSVar2 + 0x4c) + 0x6c) == 3) {
    piVar3 = (int *)((int *)(**(code **)(*(int *)pSVar2 + 0x18))(&local_1c));
    piVar7 = (int *)((int *)*piVar3);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    *piVar3 = (int)(0);
    if (piVar7 == (int *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      piVar3 = (int *)((int *)(**(code **)(*piVar7 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (piVar7 == (int *)0x0) {
      local_1c = (int *)((int *)0x0);
      piVar7 = (int *)((int *)0x0);
    }
    else {
      ((SCStr *)((SCStr *)&local_18))->int_allocRep("SCIZoneGroupMgr");
      *(unsigned char *)((char *)&local_8 + 0) = 5;
      puVar4 = (undefined4 *)((undefined4 *)(**(code **)*piVar7)(&local_20,&local_18));
      piVar7 = (int *)((int *)*puVar4);
      *puVar4 = (undefined4)(0);
      *(unsigned char *)((char *)&local_8 + 0) = 7;
      local_1c = (int *)(piVar7);
      if (local_20 != (int *)0x0) {
        (**(code **)(*local_20 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 8;
      ((SCStr *)((SCStr *)&local_18))->int_release();

    }
    piVar8 = (int *)((int *)0x0);
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    if (piVar7 != (int *)0x0) {
      piVar8 = (int *)((int *)(**(code **)(*piVar7 + 0xc))());
      (**(code **)(*piVar8 + 4))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0xc;
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0xb;
    if (piVar7 == (int *)0x0) {
      local_11 = (undefined1)(false);
    }
    else {
      iVar5 = (int)((**(code **)(*piVar7 + 0x20))());
      local_11 = (undefined1)(iVar5 == 0);
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0xd;
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xe)));
    uVar6 = (undefined1)(local_11);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
      uVar6 = (undefined1)(local_11);
    }
  }
  else {
    iVar5 = (int)((**(code **)(*param_1 + 0x14))());
    uVar6 = (undefined1)(iVar5 == 0);
  }

  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 8))();
  }

  return (undefined1)(uVar6);

 } catch (...) { }
}


// Reference entry 10243300; body size 179 bytes.
#line 1 "ENTRY_10243300"

void __thiscall Recovered_Bulk::FUN_10243300(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  uint uVar1;
  undefined4 uVar2;
  int local_1c;
  int *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  if (param_2 == (int *)param_1[8]) {
    param_1[8] = 0;
    uVar2 = (undefined4)(thunk_FUN_10292c70(&param_2,uVar1));

    thunk_FUN_101cd010(uVar2);
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    if (local_1c != 0) {
      if (local_18 != (int *)0x0) {
        (**(code **)(*local_18 + 4))(local_1c,local_18);
      }
      (**(code **)(*param_1 + 0x30))();
    }

    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 102433e0; body size 247 bytes.
#line 1 "ENTRY_102433e0"

void __thiscall Recovered_Bulk::FUN_102433e0(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  if (param_2 == *(int *)(param_1 + 0xd4)) {
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined1 *)(param_1 + 0xd8) = 1;
    *(undefined1 *)(param_1 + 0xf8) = 0;
    thunk_FUN_1106b190(param_1 + 0x44,0,0);
    return;
  }
  iVar1 = (int)(*(int *)(param_1 + 0xe8));
  if (param_2 == iVar1) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    if (*(int *)(param_1 + 0xe4) == 1) {
      *(undefined4 *)(param_1 + 0xe4) = 2;
      thunk_FUN_1106b190(param_1 + 0x44,0,0);
      return;
    }
  }
  else {
    if (param_2 == *(int *)(param_1 + 0xec)) {
      *(undefined4 *)(param_1 + 0xec) = 0;
      if (*(int *)(param_1 + 0xe4) != 1) {
        return;
      }
      *(undefined4 *)(param_1 + 0xe4) = 2;
      if (iVar1 != 0) {
        thunk_FUN_1059d940(iVar1);
        *(undefined4 *)(param_1 + 0xe8) = 0;
        thunk_FUN_1106b190(param_1 + 0x44,0,0);
        return;
      }
    }
    else {
      if (param_2 != *(int *)(param_1 + 0xdc)) {
        return;
      }
      *(undefined1 *)(param_1 + 0xe0) = 1;
      *(undefined4 *)(param_1 + 0xdc) = 0;
    }
    thunk_FUN_1106b190(param_1 + 0x44,0,0);
  }
  return;
}


// Reference entry 10243520; body size 124 bytes.
#line 1 "ENTRY_10243520"

void __fastcall FUN_10243520(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0xac));
  *(undefined4 *)(param_1 + 0xac) = 1;
  if (*(int *)(param_1 + 0xb0) != 0) {
    thunk_FUN_1059d940(*(int *)(param_1 + 0xb0));
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  uVar2 = (undefined4)(thunk_FUN_1059d5a0(600000));
  *(undefined4 *)(param_1 + 0xb0) = uVar2;
  if (*(int *)(param_1 + 0xb4) == 0) {
    uVar2 = (undefined4)(thunk_FUN_1059d5a0(600000));
    *(undefined4 *)(param_1 + 0xb4) = uVar2;
  }
  if (iVar1 != 1) {
    thunk_FUN_1106b190(param_1 + 0xc,0,0);
  }
  return;
}


// Reference entry 102435c0; body size 79 bytes.
#line 1 "ENTRY_102435c0"

void __fastcall FUN_102435c0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0xac));
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xac) = 2;
    if (*(int *)(param_1 + 0xb0) != 0) {
      thunk_FUN_1059d940(*(int *)(param_1 + 0xb0));
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
    if (iVar1 == 1) {
      thunk_FUN_1106b190(param_1 + 0xc,0,0);
    }
  }
  return;
}


// Reference entry 102437a0; body size 103 bytes.
#line 1 "ENTRY_102437a0"

undefined4 * __thiscall Recovered_Bulk::FUN_102437a0(undefined4 *param_2,SCStr *param_3)
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


// Reference entry 10243820; body size 103 bytes.
#line 1 "ENTRY_10243820"

undefined4 * __thiscall Recovered_Bulk::FUN_10243820(undefined4 *param_2,SCStr *param_3)
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


// Reference entry 102438a0; body size 103 bytes.
#line 1 "ENTRY_102438a0"

undefined4 * __thiscall Recovered_Bulk::FUN_102438a0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIActionContext"));
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


// Reference entry 10243920; body size 103 bytes.
#line 1 "ENTRY_10243920"

undefined4 * __thiscall Recovered_Bulk::FUN_10243920(undefined4 *param_2,SCStr *param_3)
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


// Reference entry 102439a0; body size 103 bytes.
#line 1 "ENTRY_102439a0"

undefined4 * __thiscall Recovered_Bulk::FUN_102439a0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIController"));
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


// Reference entry 10243a20; body size 103 bytes.
#line 1 "ENTRY_10243a20"

undefined4 * __thiscall Recovered_Bulk::FUN_10243a20(undefined4 *param_2,SCStr *param_3)
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


// Reference entry 10243aa0; body size 103 bytes.
#line 1 "ENTRY_10243aa0"

undefined4 * __thiscall Recovered_Bulk::FUN_10243aa0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCINewWizController"));
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


// Reference entry 10243b20; body size 103 bytes.
#line 1 "ENTRY_10243b20"

undefined4 * __thiscall Recovered_Bulk::FUN_10243b20(undefined4 *param_2,SCStr *param_3)
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


// Reference entry 10245190; body size 162 bytes.
#line 1 "ENTRY_10245190"

void __fastcall FUN_10245190(int param_1)

{
 try {
  int *piVar1;
  int *piVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar2 = (int *)((int *)thunk_FUN_101da4a0(&local_14,DAT_12126b84 ));
  piVar1 = (int *)((int *)*piVar2);

  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x34))(*(undefined4 *)(param_1 + 4));
  }

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10245260; body size 108 bytes.
#line 1 "ENTRY_10245260"

void __thiscall Recovered_Bulk::FUN_10245260(int *param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0x24))
              (*(undefined4 *)(param_1 + 4),DAT_12126b84 );
  }

  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 102452f0; body size 348 bytes.
#line 1 "ENTRY_102452f0"

void __fastcall FUN_102452f0(int param_1)

{
 try {
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int *local_20;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_18))->int_allocRep("");

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("global.enableContentAccess.value");
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  piVar1 = (int *)((int *)thunk_FUN_102d5720());
  piVar2 = (int *)((int *)*piVar1);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *piVar1 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)((SCStr *)&local_18))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 8;
  piVar3 = (int *)((int *)thunk_FUN_102d85d0(&local_20));
  piVar1 = (int *)((int *)*piVar3);
  *piVar3 = (int)(0);
  piVar3 = (int *)(*(int **)(param_1 + 0x108));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
  if (piVar3 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
    (**(code **)(*piVar3 + 8))();
  }
  *(int **)(param_1 + 0x104) = piVar1;
  if (piVar1 == (int *)0x0) {
    uVar4 = (undefined4)(0);
  }
  else {
    uVar4 = (undefined4)((**(code **)(*piVar1 + 0xc))());
  }
  *(undefined4 *)(param_1 + 0x108) = uVar4;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xb)));
  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))();
  }

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 102454b0; body size 142 bytes.
#line 1 "ENTRY_102454b0"

void __thiscall Recovered_Bulk::FUN_102454b0(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)thunk_FUN_1023a9f0(DAT_12126b84 ));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
    (**(code **)(*piVar2 + 4))();
  }

  if (piVar1 != (int *)0x0) {
    thunk_FUN_105b5ef0(*(undefined4 *)(param_1 + 4),param_2);
  }

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10245960; body size 108 bytes.
#line 1 "ENTRY_10245960"

void __thiscall Recovered_Bulk::FUN_10245960(int *param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0x28))
              (*(undefined4 *)(param_1 + 4),DAT_12126b84 );
  }

  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10245b70; body size 91 bytes.
#line 1 "ENTRY_10245b70"

int * __thiscall Recovered_Bulk::FUN_10245b70(int *param_2)
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


// Reference entry 10245cd0; body size 242 bytes.
#line 1 "ENTRY_10245cd0"

int * __thiscall Recovered_Bulk::FUN_10245cd0(int *param_2)
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
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIAutomationDelegate");
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


// Reference entry 10245e00; body size 188 bytes.
#line 1 "ENTRY_10245e00"

int * __thiscall Recovered_Bulk::FUN_10245e00(undefined4 *param_2)
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
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIAutomationDelegate");

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


// Reference entry 102460b0; body size 138 bytes.
#line 1 "ENTRY_102460b0"

undefined4 __thiscall Recovered_Bulk::FUN_102460b0(undefined4 param_2,int *param_3)
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
    thunk_FUN_102460b0(param_2,param_3[2]);
    piVar2 = (int *)((int *)*param_3);

    ((SCStr *)((SCStr *)(param_3 + 4)))->int_release();
    param_3[4] = 0;

    thunk_FUN_1148a50e(param_3,0x18,uVar4);

    param_3 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10246170; body size 218 bytes.
#line 1 "ENTRY_10246170"

undefined4 __thiscall Recovered_Bulk::FUN_10246170(undefined4 param_2,int *param_3)
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
    thunk_FUN_10246170(param_2,param_3[2]);
    piVar2 = (int *)((int *)*param_3);

    ((SCStr *)((SCStr *)(param_3 + 9)))->int_release();
    param_3[9] = 0;
    thunk_FUN_10247e10(uVar4);

    ((SCStr *)((SCStr *)(param_3 + 5)))->int_release();
    param_3[5] = 0;

    ((SCStr *)((SCStr *)(param_3 + 4)))->int_release();
    *(undefined4 *)(param_3 + 4) = 0;

    thunk_FUN_1148a50e(param_3,0x28);

    param_3 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10246290; body size 166 bytes.
#line 1 "ENTRY_10246290"

undefined4 __thiscall Recovered_Bulk::FUN_10246290(undefined4 param_2,int *param_3)
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
    thunk_FUN_10246290(param_2,param_3[2]);
    piVar2 = (int *)((int *)*param_3);

    ((SCStr *)((SCStr *)(param_3 + 5)))->int_release();
    param_3[5] = 0;

    ((SCStr *)((SCStr *)(param_3 + 4)))->int_release();
    *(undefined4 *)(param_3 + 4) = 0;

    thunk_FUN_1148a50e(param_3,0x18,uVar4);

    param_3 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 102463d0; body size 89 bytes.
#line 1 "ENTRY_102463d0"

void FUN_102463d0(undefined4 param_1,int param_2)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_2 + 0x10)))->int_release();
  *(undefined4 *)(param_2 + 0x10) = 0;
  thunk_FUN_1148a50e(param_2,0x18,uVar1);

  return;

 } catch (...) { }
}


// Reference entry 10246450; body size 143 bytes.
#line 1 "ENTRY_10246450"

void FUN_10246450(undefined4 param_1,int param_2)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_2 + 0x24)))->int_release();
  *(undefined4 *)(param_2 + 0x24) = 0;
  thunk_FUN_10247e10(uVar1);

  ((SCStr *)((SCStr *)(param_2 + 0x14)))->int_release();
  *(undefined4 *)(param_2 + 0x14) = 0;

  ((SCStr *)((SCStr *)(param_2 + 0x10)))->int_release();
  *(undefined4 *)(param_2 + 0x10) = 0;
  thunk_FUN_1148a50e(param_2,0x28);

  return;

 } catch (...) { }
}


// Reference entry 10246510; body size 113 bytes.
#line 1 "ENTRY_10246510"

void FUN_10246510(undefined4 param_1,int param_2)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_2 + 0x14)))->int_release();
  *(undefined4 *)(param_2 + 0x14) = 0;

  ((SCStr *)((SCStr *)(param_2 + 0x10)))->int_release();
  *(undefined4 *)(param_2 + 0x10) = 0;
  thunk_FUN_1148a50e(param_2,0x18,uVar1);

  return;

 } catch (...) { }
}


// Reference entry 10246b90; body size 257 bytes.
#line 1 "ENTRY_10246b90"

undefined4 * __fastcall FUN_10246b90(undefined4 *param_1)

{
 try {
  void *pvVar1;
  undefined4 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_18 = (undefined4 *)(param_1);
  ((SCStr *)((SCStr *)&local_18))->int_allocRep("Initializes Flutter and gets it ready for automation.");

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("initializeFlutterAutomation");
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  pvVar1 = (void *)(operator_new(0x28));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  thunk_FUN_103d0050(&local_14,&local_18,1);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&local_18))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCControllerTest_InitializeFlutterAutomation);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10246fc0; body size 76 bytes.
#line 1 "ENTRY_10246fc0"

void __fastcall FUN_10246fc0(undefined4 *param_1)

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


// Reference entry 10247030; body size 68 bytes.
#line 1 "ENTRY_10247030"

void __fastcall FUN_10247030(int *param_1)

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


// Reference entry 102473e0; body size 263 bytes.
#line 1 "ENTRY_102473e0"

void __fastcall FUN_102473e0(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  thunk_FUN_10246290((undefined4 *)(param_1 + 0x38),*(undefined4 *)(*(int *)(param_1 + 0x38) + 4));
  thunk_FUN_1148a50e(*(undefined4 *)(param_1 + 0x38),0x18,uVar2);
  thunk_FUN_10246290((undefined4 *)(param_1 + 0x30),*(undefined4 *)(*(int *)(param_1 + 0x30) + 4));
  thunk_FUN_1148a50e(*(undefined4 *)(param_1 + 0x30),0x18);
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_102460b0((undefined4 *)(param_1 + 0x20),*(undefined4 *)(*(int *)(param_1 + 0x20) + 4));
  thunk_FUN_1148a50e(*(undefined4 *)(param_1 + 0x20),0x18);

  ((SCStr *)((SCStr *)(param_1 + 0x18)))->int_release();
  *(undefined4 *)(param_1 + 0x18) = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x14)))->int_release();
  *(undefined4 *)(param_1 + 0x14) = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x10)))->int_release();
  *(undefined4 *)(param_1 + 0x10) = 0;

  ((SCStr *)((SCStr *)(param_1 + 0xc)))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;

  return;

 } catch (...) { }
}


// Reference entry 10247530; body size 453 bytes.
#line 1 "ENTRY_10247530"

void __fastcall FUN_10247530(undefined4 *param_1)

{
 try {
  uint uVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCControllerTest);
  param_1[2] = (uint)&ghidra_vftable_SCControllerTest;
  param_1[0x1e] = (uint)&ghidra_vftable_SCControllerTest;
  param_1[0x1f] = (uint)&ghidra_vftable_SCControllerTest;
  thunk_FUN_1059d800(uVar1);
  if (param_1[0x2a] != 0) {
    thunk_FUN_104dec20();
    if ((undefined4 *)param_1[0x2a] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x2a])(1);
    }
    param_1[0x2a] = 0;
  }
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  if (param_1[0x2f] != 0) {
    piVar2 = (int *)((int *)param_1[0x30]);
    if (piVar2 != (int *)0x0) {
      param_1[0x2f] = 0;
      param_1[0x30] = 0;
      (**(code **)(*piVar2 + 8))();
    }
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
  }
  piVar2 = (int *)((int *)param_1[0x32]);
  if (param_1[0x31] != 0) {
    if (piVar2 != (int *)0x0) {
      param_1[0x31] = 0;
      param_1[0x32] = 0;
      (**(code **)(*piVar2 + 8))();
    }
    param_1[0x31] = 0;
    piVar2 = (int *)((int *)0x0);
    param_1[0x32] = 0;
  }

  if (piVar2 != (int *)0x0) {
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  piVar2 = (int *)((int *)param_1[0x30]);

  if (piVar2 != (int *)0x0) {
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    (**(code **)(*piVar2 + 8))();
  }

  param_1[0x1f] = (uint)&ghidra_vftable_SCTimerUser;
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[0x1e] = (uint)&ghidra_vftable_SCSwfObjHHListener;
  thunk_FUN_103d0880();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10247810; body size 81 bytes.
#line 1 "ENTRY_10247810"

int * __thiscall Recovered_Bulk::FUN_10247810(int *param_2)
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


// Reference entry 10247880; body size 81 bytes.
#line 1 "ENTRY_10247880"

int * __thiscall Recovered_Bulk::FUN_10247880(int *param_2)
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


// Reference entry 10247e10; body size 96 bytes.
#line 1 "ENTRY_10247e10"

void __fastcall FUN_10247e10(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10245f80(*param_1,param_1[1],param_1);
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


// Reference entry 10247e90; body size 621 bytes.
#line 1 "ENTRY_10247e90"

void __stdcall FUN_10247e90(undefined1 *param_1)

{
 try {
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int *local_30;
  int *local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  puVar5 = (undefined1 *)(&DAT_1186d2ee);
  if (param_1 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)(param_1);
  }
  thunk_FUN_112af4e0("SCControllerTest",1,"Setting HHID: %s",puVar5,
                     DAT_12126b84 );
  puVar5 = (undefined1 *)(&DAT_1186d2ee);
  if (param_1 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)(param_1);
  }
  thunk_FUN_110a3340(puVar5,&DAT_1186d2ee);
  ((SCStr *)((SCStr *)&local_18))->int_allocRep("");
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("eulaAccepted");
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  piVar2 = (int *)((int *)thunk_FUN_102d5690(&local_2c,&local_14,2,&local_18));
  piVar1 = (int *)((int *)*piVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  if (local_2c != (int *)0x0) {
    (**(code **)(*local_2c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 10;
  ((SCStr *)((SCStr *)&local_18))->int_release();
  local_18 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  (**(code **)(*piVar1 + 0x24))(1);
  ((SCStr *)((SCStr *)&local_24))->int_allocRep("");
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  ((SCStr *)((SCStr *)&local_20))->int_allocRep("hasCompletedWelcomeFlow");
  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  piVar3 = (int *)((int *)thunk_FUN_102d5690(&local_30,&local_20,2,&local_24));
  piVar1 = (int *)((int *)*piVar3);
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  *piVar3 = (int)(0);
  local_1c = (int *)(piVar1);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0x10;
  local_18 = (int *)(piVar3);
  if (local_30 != (int *)0x0) {
    (**(code **)(*local_30 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0x12;
  ((SCStr *)((SCStr *)&local_20))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 0x14;
  ((SCStr *)((SCStr *)&local_24))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 0x13;
  (**(code **)(*piVar1 + 0x24))(1);
  thunk_FUN_1059d800();
  uVar4 = (undefined4)(thunk_FUN_1059d5a0(10000));
  *(undefined4 *)(local_28 + 0x98) = uVar4;
  if ((*(int *)(local_28 + 0xb4) != 0) && (*(int *)(local_28 + 0xa8) == 0)) {
    local_2c = (int *)(operator_new(0x20));
    *(unsigned char *)((char *)&local_8 + 0) = 0x15;
    if (local_2c == (int *)0x0) {
      uVar4 = (undefined4)(0);
    }
    else {
      uVar4 = (undefined4)(thunk_FUN_104ddfd0(local_28 + 0x78,*(undefined4 *)(local_28 + 0xb4)));
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x13;
    *(undefined4 *)(local_28 + 0xa8) = uVar4;
    thunk_FUN_104deb40();
  }
  uVar4 = (undefined4)(0);
  thunk_FUN_1023a9f0(0);
  thunk_FUN_105b5360(uVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 0x16;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x17)));
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10248280; body size 90 bytes.
#line 1 "ENTRY_10248280"

void * FUN_10248280(uint param_1)

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


// Reference entry 10248300; body size 90 bytes.
#line 1 "ENTRY_10248300"

void * FUN_10248300(uint param_1)

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


// Reference entry 10248380; body size 193 bytes.
#line 1 "ENTRY_10248380"

undefined4 * FUN_10248380(undefined4 *param_1)

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

  pvVar2 = (void *)(operator_new(0xcc));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_10246ce0(uVar1));
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


// Reference entry 10248480; body size 115 bytes.
#line 1 "ENTRY_10248480"

undefined4 * FUN_10248480(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0xcc));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_10246ce0(uVar1));
  }

  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10248680; body size 159 bytes.
#line 1 "ENTRY_10248680"

void __fastcall FUN_10248680(int *param_1)

{
 try {
  bool bVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int *)(param_1);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x18))(&local_14,DAT_12126b84 ));
  if (((char *)*puVar2 == (char *)0x0) || (*(char *)*puVar2 == '\0')) {
    bVar1 = (bool)(false);
  }
  else {
    bVar1 = (bool)(true);
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (int *)((int *)0x0);

  if (bVar1) {
    thunk_FUN_112af4e0("SCControllerTest",1,"Factory resetting controller");
    thunk_FUN_1109e3f0();
    thunk_FUN_11080e90();
  }

  return;

 } catch (...) { }
}


// Reference entry 10248790; body size 168 bytes.
#line 1 "ENTRY_10248790"

undefined4 * __thiscall Recovered_Bulk::FUN_10248790(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  undefined1 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  (**(code **)(*param_1 + 0x18))(param_2,DAT_12126b84 );

  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)((undefined1 *)*param_2);
  }
  thunk_FUN_112af4e0("SCControllerTest",1,"Forgetting hhid: %s",puVar1);
  thunk_FUN_1109e4d0(0);
  thunk_FUN_11080e90();
  uVar2 = (undefined4)(0);
  thunk_FUN_1023a9f0(0);
  thunk_FUN_105b5360(uVar2);

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10248870; body size 133 bytes.
#line 1 "ENTRY_10248870"

SCStr * __thiscall Recovered_Bulk::FUN_10248870(SCStr *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0xbc) + 0x14))());
  switch(uVar1) {
  case 0:
    ((SCStr *)(param_2))->int_allocRep("CONNECTIVITY_STATE_NORMAL");
    return (SCStr *)(param_2);
  case 1:
    ((SCStr *)(param_2))->int_allocRep("CONNECTIVITY_STATE_SEARCHING");
    return (SCStr *)(param_2);
  case 2:
    ((SCStr *)(param_2))->int_allocRep("CONNECTIVITY_STATE_LIMITED_ACCESS");
    return (SCStr *)(param_2);
  case 3:
    ((SCStr *)(param_2))->int_allocRep("CONNECTIVITY_STATE_WELCOME");
    return (SCStr *)(param_2);
  default:
    ((SCStr *)(param_2))->int_allocRep("");
    return (SCStr *)(param_2);
  }
}


// Reference entry 10248930; body size 78 bytes.
#line 1 "ENTRY_10248930"

void __stdcall FUN_10248930(SCStr *param_1)

{
  SCStr *local_2c;
  char local_28 [36];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_2c);
  local_2c = (SCStr *)(param_1);
  local_28[0] = '\0';
  thunk_FUN_1109f100(local_28,0x21);
  ((SCStr *)(param_1))->int_allocRep(local_28);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 102489a0; body size 348 bytes.
#line 1 "ENTRY_102489a0"

undefined4 * __thiscall Recovered_Bulk::FUN_102489a0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int *local_30;
  int *local_28;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar3 = (int *)((int *)(**(code **)(**(int **)(param_1 + 0xc4) + 0x2c))
                            (&local_18,DAT_12126b84 ));
  piVar7 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  local_14 = (int *)(piVar7);
  if (piVar7 == (int *)0x0) {
    local_30 = (int *)((int *)0x0);
  }
  else {
    local_30 = (int *)((int *)(**(code **)(*piVar7 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  uVar4 = (uint)((**(code **)(*piVar7 + 0x14))());
  piVar3 = (int *)((int *)createSCStringArray());
  piVar7 = (int *)((int *)*piVar3);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  *piVar3 = (int)(0);
  local_18 = (int *)(piVar7);
  if (piVar7 == (int *)0x0) {
    local_28 = (int *)((int *)0x0);
  }
  else {
    local_28 = (int *)((int *)(**(code **)(*piVar7 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  uVar6 = (uint)(0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  if (uVar4 != 0) {
    do {
      iVar1 = (int)(**(int **)(param_1 + 0xc4));
      uVar5 = (undefined4)((**(code **)(*local_14 + 0x3c))(uVar6));
      cVar2 = (char)((**(code **)(iVar1 + 0x18))(uVar5));
      piVar7 = (int *)(local_18);
      if (cVar2 != '\0') {
        iVar1 = (int)(*local_18);
        uVar5 = (undefined4)((**(code **)(*local_14 + 0x3c))(uVar6));
        (**(code **)(iVar1 + 0x24))(uVar5);
      }
      uVar6 = (uint)(uVar6 + 1);
    } while (uVar6 < uVar4);
  }
  *param_2 = (undefined4)(piVar7);
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 4))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
  if (local_28 != (int *)0x0) {
    (**(code **)(*local_28 + 8))();
  }

  if (local_30 != (int *)0x0) {
    (**(code **)(*local_30 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10248b60; body size 249 bytes.
#line 1 "ENTRY_10248b60"

char * __thiscall Recovered_Bulk::FUN_10248b60(char *param_2,int *param_3,int *param_4)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined1 *puVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar2 = (int *)(param_4);
  piVar1 = (int *)(param_3);


  puVar6 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)((undefined1 *)*param_4);
  }
  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)((undefined1 *)*param_3);
  }
  thunk_FUN_112af4e0("SCControllerTest",1,
                     "Getting variable integer value for feature %s and variable %s",puVar4,puVar6,
                     DAT_12126b84 );
  pcVar5 = (char *)("");
  if ((char *)*piVar2 != (char *)0x0) {
    pcVar5 = (char *)((char *)*piVar2);
  }
  ((SCStr *)((SCStr *)&param_3))->int_allocRep(pcVar5);

  pcVar5 = (char *)("");
  if ((char *)*piVar1 != (char *)0x0) {
    pcVar5 = (char *)((char *)*piVar1);
  }
  ((SCStr *)((SCStr *)&param_4))->int_allocRep(pcVar5);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0xc4) + 0x20))(&param_4,&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCStr *)((SCStr *)&param_4))->int_release();
  param_4 = (int *)((int *)0x0);

  ((SCStr *)((SCStr *)&param_3))->int_release();
  param_3 = (int *)((int *)0x0);

  ((SCStr *)(param_2))->stringWithFormat(&DAT_11889c5c,uVar3);

  return (char *)(param_2);

 } catch (...) { }
}


// Reference entry 10248ca0; body size 219 bytes.
#line 1 "ENTRY_10248ca0"

undefined4 __thiscall Recovered_Bulk::FUN_10248ca0(undefined4 param_2,int *param_3,int *param_4)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined1 *puVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar2 = (int *)(param_4);
  piVar1 = (int *)(param_3);


  puVar5 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)((undefined1 *)*param_4);
  }
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)((undefined1 *)*param_3);
  }
  thunk_FUN_112af4e0("SCControllerTest",1,
                     "Getting variable string value for feature %s and variable %s",puVar3,puVar5,
                     DAT_12126b84 );
  pcVar4 = (char *)("");
  if ((char *)*piVar2 != (char *)0x0) {
    pcVar4 = (char *)((char *)*piVar2);
  }
  ((SCStr *)((SCStr *)&param_3))->int_allocRep(pcVar4);

  pcVar4 = (char *)("");
  if ((char *)*piVar1 != (char *)0x0) {
    pcVar4 = (char *)((char *)*piVar1);
  }
  ((SCStr *)((SCStr *)&param_4))->int_allocRep(pcVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x1c))(param_2,&param_4,&param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCStr *)((SCStr *)&param_4))->int_release();
  param_4 = (int *)((int *)0x0);

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4)(param_2);

 } catch (...) { }
}


// Reference entry 10248dc0; body size 308 bytes.
#line 1 "ENTRY_10248dc0"

void __stdcall FUN_10248dc0(int *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  char *pcVar4;
  uint local_d00;
  undefined4 local_cfc;
  void *local_cf8;
  undefined1 *puStack_cf4;
  undefined4 local_cf0;
  char local_cec [3300];
  uint local_8;
  
  pcVar4 = (char *)(local_cec);


  uVar2 = (uint)(DAT_12126b84 ^ (uint)pcVar4);

  local_8 = (uint)(uVar2);
  thunk_FUN_1109f140(pcVar4,&local_d00);
  piVar3 = (int *)((int *)createSCStringArray());
  piVar1 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(uVar2));
  }
  *(unsigned char *)((char *)&local_cf0 + 0) = 3;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  uVar2 = (uint)(0);
  if (local_d00 != 0) {
    do {
      *(unsigned char *)((char *)&local_cf0 + 0) = 2;
      ((SCStr *)((SCStr *)&local_cfc))->int_allocRep(pcVar4);
      *(unsigned char *)((char *)&local_cf0 + 0) = 4;
      (**(code **)(*piVar1 + 0x24))(&local_cfc);
      *(unsigned char *)((char *)&local_cf0 + 0) = 5;
      ((SCStr *)((SCStr *)&local_cfc))->int_release();
      uVar2 = (uint)(uVar2 + 1);

      pcVar4 = (char *)(pcVar4 + 0x21);
    } while (uVar2 < local_d00);
  }
  *(unsigned char *)((char *)&local_cf0 + 0) = 2;
  *param_1 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 102492f0; body size 137 bytes.
#line 1 "ENTRY_102492f0"

void __fastcall FUN_102492f0(int param_1)

{
 try {
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  if ((*(int *)(param_1 + 0xb4) != 0) && (*(int *)(param_1 + 0xa8) == 0)) {
    pvVar2 = (void *)(operator_new(0x20));

    if (pvVar2 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(thunk_FUN_104ddfd0(param_1 + 0x78,*(undefined4 *)(param_1 + 0xb4)));
    }

    *(undefined4 *)(param_1 + 0xa8) = uVar3;
    thunk_FUN_104deb40(uVar1);
  }

  return;

 } catch (...) { }
}


// Reference entry 102494d0; body size 118 bytes.
#line 1 "ENTRY_102494d0"

void __stdcall FUN_102494d0(int param_1)

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


// Reference entry 10249580; body size 326 bytes.
#line 1 "ENTRY_10249580"

void __thiscall Recovered_Bulk::FUN_10249580(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  SCLibrary *pSVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int *)(param_1);
  if (param_2 == (int *)param_1[7]) {
    if (param_1[0xb] != 0) {
      thunk_FUN_104dec20(DAT_12126b84 );
      if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[0xb])(1);
      }
      param_1[0xb] = 0;
    }
    puVar5 = (undefined4 *)(&param_2);
    param_1[7] = 0;
    pSVar1 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    ((SCLibrary *)(pSVar1))->getSCHousehold();

    thunk_FUN_1038c3f0(puVar5);

    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 8))();
    }

    thunk_FUN_1059d800();
    iVar2 = (int)(thunk_FUN_1059d5a0(1000));
    param_1[8] = iVar2;

    return;
  }
  if (param_2 == (int *)param_1[8]) {
    piVar4 = (int *)((int *)0x0);
    param_2 = (int *)((int *)0x0);

    pSVar1 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    if (*(int **)(*(int *)(pSVar1 + 0x4c) + 0xe8) != (int *)0x0) {
      uVar3 = (undefined4)((**(code **)(**(int **)(*(int *)(pSVar1 + 0x4c) + 0xe8) + 4))(&local_14,1));
      *(unsigned char *)((char *)&local_8 + 0) = 3;
      thunk_FUN_10245cd0(uVar3);
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 8))();
      }
      piVar4 = (int *)(param_2);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
      if (param_2 != (int *)0x0) {
        (**(code **)(*param_2 + 0x18))();
      }
    }
    param_1[8] = 0;

    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))();
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10249720; body size 100 bytes.
#line 1 "ENTRY_10249720"

void __fastcall FUN_10249720(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)(thunk_FUN_11081b20(2));
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x20) != 0) {
      thunk_FUN_1059d940(*(int *)(param_1 + 0x20));
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (*(int *)(param_1 + 0x30) != 0) {
      thunk_FUN_104dec20();
      if (*(undefined4 **)(param_1 + 0x30) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x30))(1);
      }
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    thunk_FUN_1059d800();
    uVar2 = (undefined4)(thunk_FUN_1059d5a0(1000));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  return;
}


// Reference entry 102497a0; body size 355 bytes.
#line 1 "ENTRY_102497a0"

undefined4 __stdcall FUN_102497a0(undefined4 param_1)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 local_5c [64];
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  local_1c = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar5 = (int *)((int *)0x0);
  uVar1 = (undefined1)((undefined1)local_8);
  if (*(int **)(*(int *)(pSVar3 + 0x4c) + 0xe8) != (int *)0x0) {
    uVar4 = (undefined4)((**(code **)(**(int **)(*(int *)(pSVar3 + 0x4c) + 0xe8) + 4))(&local_18,1,uVar2));
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    thunk_FUN_10245cd0(uVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
    piVar5 = (int *)(local_1c);
    *(unsigned char *)((char *)&local_8 + 0) = 0;
    uVar1 = (undefined1)((undefined1)local_8);
    *(unsigned char *)((char *)&local_8 + 0) = 0;
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 0x14))();
      ((SCStr *)((SCStr *)&local_18))->int_allocRep("Flutter initialized");
      *(unsigned char *)((char *)&local_8 + 0) = 3;
      uVar4 = (undefined4)(thunk_FUN_103d53c0(local_5c,param_1,&local_18));
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      uVar4 = (undefined4)(thunk_FUN_103d4f80(uVar4));
      thunk_FUN_102473e0();
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
      ((SCStr *)((SCStr *)&local_18))->int_release();
      goto LAB_102498dc;
    }
  }
  *(unsigned char *)((char *)&local_8 + 0) = uVar1;
  ((SCStr *)((SCStr *)&local_18))->int_allocRep("");
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("Automation delegate does not exist for this_ platform");
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  uVar4 = (undefined4)(thunk_FUN_103d3580(local_5c,param_1,&local_14,&local_18));
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  uVar4 = (undefined4)(thunk_FUN_103d4f80(uVar4));
  thunk_FUN_102473e0();
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xb)));
  ((SCStr *)((SCStr *)&local_18))->int_release();
  local_18 = (int *)((int *)0x0);
LAB_102498dc:

  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }

  return (undefined4)(uVar4);

 } catch (...) { }
}


// Reference entry 10249970; body size 103 bytes.
#line 1 "ENTRY_10249970"

undefined4 * __thiscall Recovered_Bulk::FUN_10249970(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIControllerTest"));
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


// Reference entry 1024a1c0; body size 127 bytes.
#line 1 "ENTRY_1024a1c0"

undefined4 * __thiscall Recovered_Bulk::FUN_1024a1c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined1 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCVersion);
  param_1[6] = 0;

  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)((undefined1 *)*param_2);
  }
  thunk_FUN_101b87f0(puVar1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1024a280; body size 76 bytes.
#line 1 "ENTRY_1024a280"

void __fastcall FUN_1024a280(undefined4 *param_1)

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


// Reference entry 1024a2f0; body size 76 bytes.
#line 1 "ENTRY_1024a2f0"

void __fastcall FUN_1024a2f0(undefined4 *param_1)

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


// Reference entry 1024a360; body size 76 bytes.
#line 1 "ENTRY_1024a360"

void __fastcall FUN_1024a360(undefined4 *param_1)

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


// Reference entry 1024a590; body size 81 bytes.
#line 1 "ENTRY_1024a590"

int * __thiscall Recovered_Bulk::FUN_1024a590(int *param_2)
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


// Reference entry 1024a600; body size 81 bytes.
#line 1 "ENTRY_1024a600"

int * __thiscall Recovered_Bulk::FUN_1024a600(int *param_2)
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


// Reference entry 1024aa40; body size 349 bytes.
#line 1 "ENTRY_1024aa40"

void __fastcall FUN_1024aa40(int param_1)

{
 try {
  int *piVar1;
  SCLibrary *pSVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *local_24;
  int *local_20;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if ((*(char *)(param_1 + 0x2c) != '\0') && (*(char *)(param_1 + 0x2d) == '\0')) {
    piVar1 = (int *)((int *)thunk_FUN_1023a9f0(DAT_12126b84 ));
    piVar4 = (int *)((int *)0x0);
    if (piVar1 != (int *)0x0) {
      piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
      (**(code **)(*piVar4 + 4))();
    }

    if (piVar1 != (int *)0x0) {
      thunk_FUN_105b5ef0(*(undefined4 *)(param_1 + 0x10),0);
    }

    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))();
    }
    iVar5 = (int)(param_1 + 8);

    thunk_FUN_10288040(iVar5);
    thunk_FUN_1028a700(iVar5);
    pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    piVar1 = (int *)((int *)0x0);
    if (pSVar2 != (SCLibrary *)0x0) {
      piVar1 = (int *)((int *)(**(code **)(*(int *)pSVar2 + 0xc))());
      (**(code **)(*piVar1 + 4))();
    }

    if (pSVar2 != (SCLibrary *)0x0) {
      uVar3 = (undefined4)((**(code **)(*(int *)pSVar2 + 0x18))(&local_14));
      *(unsigned char *)((char *)&local_8 + 0) = 3;
      thunk_FUN_101ccbf0(uVar3);
      *(unsigned char *)((char *)&local_8 + 0) = 6;
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 5;
      if (local_24 != (int *)0x0) {
        (**(code **)(*local_24 + 0xc4))(*(undefined4 *)(param_1 + 0x1c));
      }
      *(unsigned char *)((char *)&local_8 + 0) = 7;
      if (local_20 != (int *)0x0) {
        (**(code **)(*local_20 + 8))();
      }
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    }
    *(undefined1 *)(param_1 + 0x2d) = 1;
    thunk_FUN_1024bf80();
    thunk_FUN_1024be70();

    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 1024aca0; body size 143 bytes.
#line 1 "ENTRY_1024aca0"

void __fastcall FUN_1024aca0(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  SCStr local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)(local_18))->int_allocRep("app.wizard.name");
  piVar1 = (int *)(*(int **)(param_1 + 0x1c));

  uVar3 = (undefined4)(thunk_FUN_105ad850(&local_14));
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  (**(code **)(*piVar1 + 0x1c))(local_18,uVar3,uVar2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)(local_18))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1024ad60; body size 143 bytes.
#line 1 "ENTRY_1024ad60"

void __fastcall FUN_1024ad60(int param_1)

{
 try {
  uint uVar1;
  SCStr local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)(local_18))->int_allocRep("true");

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("app.wizard.active");
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x1c))(&local_14,local_18,uVar1);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)(local_18))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1024ae20; body size 143 bytes.
#line 1 "ENTRY_1024ae20"

void __fastcall FUN_1024ae20(int param_1)

{
 try {
  uint uVar1;
  SCStr local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)(local_18))->int_allocRep("false");

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("app.wizard.active");
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x1c))(&local_14,local_18,uVar1);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)(local_18))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1024aee0; body size 145 bytes.
#line 1 "ENTRY_1024aee0"

void __fastcall FUN_1024aee0(int param_1)

{
 try {
  uint uVar1;
  SCStr local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)(local_18))->int_allocRep("none");

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("app.wizard.name");
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x1c))(&local_14,local_18,uVar1);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)(local_18))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1024afd0; body size 103 bytes.
#line 1 "ENTRY_1024afd0"

undefined4 * __thiscall Recovered_Bulk::FUN_1024afd0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCICrashReportManager"));
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


// Reference entry 1024b180; body size 114 bytes.
#line 1 "ENTRY_1024b180"

void __thiscall Recovered_Bulk::FUN_1024b180(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  if (*(char *)(param_1 + 0x2c) != '\0') {
    (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))
              (&param_2,&stack0x00000008,DAT_12126b84 );
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (undefined4)(0);

  ((SCStr *)((SCStr *)&stack0x00000008))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1024b210; body size 338 bytes.
#line 1 "ENTRY_1024b210"

void __fastcall FUN_1024b210(int param_1)

{
 try {
  int iVar1;
  int *piVar2;
  SCLibrary *pSVar3;
  undefined4 uVar4;
  int *piVar5;
  int *local_24;
  int *local_20;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if ((*(char *)(param_1 + 0x2c) != '\0') && (*(char *)(param_1 + 0x2d) != '\0')) {
    iVar1 = (int)(thunk_FUN_10288040(DAT_12126b84 ));
    if (iVar1 != 0) {
      iVar1 = (int)(param_1 + 8);
      thunk_FUN_10288040(iVar1);
      thunk_FUN_1028b250(iVar1);
    }
    piVar2 = (int *)((int *)thunk_FUN_1023a9f0());
    piVar5 = (int *)((int *)0x0);
    if (piVar2 != (int *)0x0) {
      piVar5 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
      (**(code **)(*piVar5 + 4))();
    }

    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x18))(*(undefined4 *)(param_1 + 0x10));
    }

    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))();
    }

    pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    piVar2 = (int *)((int *)0x0);
    if (pSVar3 != (SCLibrary *)0x0) {
      piVar2 = (int *)((int *)(**(code **)(*(int *)pSVar3 + 0xc))());
      (**(code **)(*piVar2 + 4))();
    }

    if (pSVar3 != (SCLibrary *)0x0) {
      uVar4 = (undefined4)((**(code **)(*(int *)pSVar3 + 0x18))(&local_14));
      *(unsigned char *)((char *)&local_8 + 0) = 3;
      thunk_FUN_101ccbf0(uVar4);
      *(unsigned char *)((char *)&local_8 + 0) = 6;
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 5;
      if (local_24 != (int *)0x0) {
        (**(code **)(*local_24 + 0xcc))(*(undefined4 *)(param_1 + 0x1c));
      }
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));
      if (local_20 != (int *)0x0) {
        (**(code **)(*local_20 + 8))();
      }
    }
    *(undefined1 *)(param_1 + 0x2d) = 0;

    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))();
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 1024b3c0; body size 2043 bytes.
#line 1 "ENTRY_1024b3c0"

void __thiscall Recovered_Bulk::FUN_1024b3c0(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  char cVar2;
  int *piVar3;
  SCStr local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar3 = (int *)(param_2);


  if (param_2 != (int *)0x0) {
    cVar2 = (char)((**(code **)(**(int **)(param_1 + 0x38) + 0x2c))(DAT_12126b84 ));
    if ((cVar2 == '\0') && (*(char *)(param_1 + 0x2c) == '\0')) {
      if (piVar3 != *(int **)(param_1 + 0x24)) {
        piVar1 = (int *)(*(int **)(param_1 + 0x28));
        if (piVar1 != (int *)0x0) {
          *(undefined4 *)(param_1 + 0x24) = 0;
          *(undefined4 *)(param_1 + 0x28) = 0;
          (**(code **)(*piVar1 + 8))();
        }
        *(int **)(param_1 + 0x24) = piVar3;
        piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
        *(int **)(param_1 + 0x28) = piVar3;
        (**(code **)(*piVar3 + 4))();
      }
      ((SCStr *)((SCStr *)&local_18))->int_allocRep("false");

      ((SCStr *)((SCStr *)&local_1c))->int_allocRep("false");
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      ((SCStr *)((SCStr *)&local_20))->int_allocRep("true");
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      ((SCStr *)((SCStr *)&local_18))->int_release();
      local_18 = (undefined4)(local_20);
      ((SCStr *)((SCStr *)&local_18))->int_addref();
      *(unsigned char *)((char *)&local_8 + 0) = 3;
      ((SCStr *)((SCStr *)&local_20))->int_release();

      *(unsigned char *)((char *)&local_8 + 0) = 4;
      ((SCStr *)((SCStr *)&local_24))->int_allocRep("release");
      *(unsigned char *)((char *)&local_8 + 0) = 9;
      ((SCStr *)((SCStr *)&local_14))->int_release();
      local_14 = (undefined4)(local_24);
      ((SCStr *)((SCStr *)&local_14))->int_addref();
      *(unsigned char *)((char *)&local_8 + 0) = 10;
      ((SCStr *)((SCStr *)&local_24))->int_release();
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      (**(code **)(**(int **)(param_1 + 0x24) + 0x14))(2);
      *(undefined1 *)(param_1 + 0x2c) = 1;
      ((SCStr *)((SCStr *)&param_2))->int_allocRep("app.build.category");
      *(unsigned char *)((char *)&local_8 + 0) = 0xb;
      (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))(&param_2,&local_14);
      *(unsigned char *)((char *)&local_8 + 0) = 0xc;
      ((SCStr *)((SCStr *)&param_2))->int_release();
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      ((SCStr *)((SCStr *)&param_2))->int_allocRep("app.locked");
      *(unsigned char *)((char *)&local_8 + 0) = 0xd;
      (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))(&param_2,&local_18);
      *(unsigned char *)((char *)&local_8 + 0) = 0xe;
      ((SCStr *)((SCStr *)&param_2))->int_release();
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      ((SCStr *)((SCStr *)&param_2))->int_allocRep("app.debug");
      *(unsigned char *)((char *)&local_8 + 0) = 0xf;
      (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))(&param_2,&local_1c);
      *(unsigned char *)((char *)&local_8 + 0) = 0x10;
      ((SCStr *)((SCStr *)&param_2))->int_release();
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      ((SCStr *)(local_28))->int_allocRep("90.0-77070");
      *(unsigned char *)((char *)&local_8 + 0) = 0x11;
      ((SCStr *)((SCStr *)&param_2))->int_allocRep("app.version");
      *(unsigned char *)((char *)&local_8 + 0) = 0x12;
      (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))(&param_2,local_28);
      *(unsigned char *)((char *)&local_8 + 0) = 0x13;
      ((SCStr *)((SCStr *)&param_2))->int_release();
      param_2 = (int *)((int *)0x0);
      *(unsigned char *)((char *)&local_8 + 0) = 0x14;
      ((SCStr *)(local_28))->int_release();
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      ((SCStr *)(local_28))->int_allocRep("release_controllers");
      *(unsigned char *)((char *)&local_8 + 0) = 0x15;
      ((SCStr *)((SCStr *)&param_2))->int_allocRep("app.branch");
      *(unsigned char *)((char *)&local_8 + 0) = 0x16;
      (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))(&param_2,local_28);
      *(unsigned char *)((char *)&local_8 + 0) = 0x17;
      ((SCStr *)((SCStr *)&param_2))->int_release();
      param_2 = (int *)((int *)0x0);
      *(unsigned char *)((char *)&local_8 + 0) = 0x18;
      ((SCStr *)(local_28))->int_release();
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      ((SCStr *)(local_28))->int_allocRep("boot");
      *(unsigned char *)((char *)&local_8 + 0) = 0x19;
      ((SCStr *)((SCStr *)&param_2))->int_allocRep("app.state");
      *(unsigned char *)((char *)&local_8 + 0) = 0x1a;
      (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))(&param_2,local_28);
      *(unsigned char *)((char *)&local_8 + 0) = 0x1b;
      ((SCStr *)((SCStr *)&param_2))->int_release();
      param_2 = (int *)((int *)0x0);
      *(unsigned char *)((char *)&local_8 + 0) = 0x1c;
      ((SCStr *)(local_28))->int_release();
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      ((SCStr *)(local_28))->int_allocRep("RELEASE");
      *(unsigned char *)((char *)&local_8 + 0) = 0x1d;
      ((SCStr *)((SCStr *)&param_2))->int_allocRep("app.buildtype");
      *(unsigned char *)((char *)&local_8 + 0) = 0x1e;
      (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))(&param_2,local_28);
      *(unsigned char *)((char *)&local_8 + 0) = 0x1f;
      ((SCStr *)((SCStr *)&param_2))->int_release();
      param_2 = (int *)((int *)0x0);
      *(unsigned char *)((char *)&local_8 + 0) = 0x20;
      ((SCStr *)(local_28))->int_release();
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      ((SCStr *)(local_28))->int_allocRep("17.2.3");
      *(unsigned char *)((char *)&local_8 + 0) = 0x21;
      ((SCStr *)((SCStr *)&param_2))->int_allocRep("app.verMarketing");
      *(unsigned char *)((char *)&local_8 + 0) = 0x22;
      (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))(&param_2,local_28);
      *(unsigned char *)((char *)&local_8 + 0) = 0x23;
      ((SCStr *)((SCStr *)&param_2))->int_release();
      param_2 = (int *)((int *)0x0);
      *(unsigned char *)((char *)&local_8 + 0) = 0x24;
      ((SCStr *)(local_28))->int_release();
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      ((SCStr *)(local_28))->int_allocRep("90.0-77070");
      *(unsigned char *)((char *)&local_8 + 0) = 0x25;
      ((SCStr *)((SCStr *)&param_2))->int_allocRep("app.build");
      *(unsigned char *)((char *)&local_8 + 0) = 0x26;
      (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))(&param_2,local_28);
      *(unsigned char *)((char *)&local_8 + 0) = 0x27;
      ((SCStr *)((SCStr *)&param_2))->int_release();
      param_2 = (int *)((int *)0x0);
      *(unsigned char *)((char *)&local_8 + 0) = 0x28;
      ((SCStr *)(local_28))->int_release();
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      ((SCStr *)(local_28))->int_allocRep("native");
      *(unsigned char *)((char *)&local_8 + 0) = 0x29;
      ((SCStr *)((SCStr *)&param_2))->int_allocRep("app.environment");
      *(unsigned char *)((char *)&local_8 + 0) = 0x2a;
      (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))(&param_2,local_28);
      *(unsigned char *)((char *)&local_8 + 0) = 0x2b;
      ((SCStr *)((SCStr *)&param_2))->int_release();
      param_2 = (int *)((int *)0x0);
      *(unsigned char *)((char *)&local_8 + 0) = 0x2c;
      ((SCStr *)(local_28))->int_release();
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      ((SCStr *)(local_28))->int_allocRep("unknown");
      *(unsigned char *)((char *)&local_8 + 0) = 0x2d;
      ((SCStr *)((SCStr *)&param_2))->int_allocRep("app.tab");
      *(unsigned char *)((char *)&local_8 + 0) = 0x2e;
      (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))(&param_2,local_28);
      *(unsigned char *)((char *)&local_8 + 0) = 0x2f;
      ((SCStr *)((SCStr *)&param_2))->int_release();
      param_2 = (int *)((int *)0x0);
      *(unsigned char *)((char *)&local_8 + 0) = 0x30;
      ((SCStr *)(local_28))->int_release();
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      ((SCStr *)(local_28))->int_allocRep("resumed");
      *(unsigned char *)((char *)&local_8 + 0) = 0x31;
      ((SCStr *)((SCStr *)&param_2))->int_allocRep("app.networking");
      *(unsigned char *)((char *)&local_8 + 0) = 0x32;
      (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))(&param_2,local_28);
      *(unsigned char *)((char *)&local_8 + 0) = 0x33;
      ((SCStr *)((SCStr *)&param_2))->int_release();
      param_2 = (int *)((int *)0x0);
      *(unsigned char *)((char *)&local_8 + 0) = 0x34;
      ((SCStr *)(local_28))->int_release();
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      ((SCStr *)(local_28))->int_allocRep("unknown");
      *(unsigned char *)((char *)&local_8 + 0) = 0x35;
      ((SCStr *)((SCStr *)&param_2))->int_allocRep("app.sclib.networking");
      *(unsigned char *)((char *)&local_8 + 0) = 0x36;
      (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))(&param_2,local_28);
      *(unsigned char *)((char *)&local_8 + 0) = 0x37;
      ((SCStr *)((SCStr *)&param_2))->int_release();
      param_2 = (int *)((int *)0x0);
      *(unsigned char *)((char *)&local_8 + 0) = 0x38;
      ((SCStr *)(local_28))->int_release();
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      ((SCStr *)(local_28))->int_allocRep("unknown");
      *(unsigned char *)((char *)&local_8 + 0) = 0x39;
      ((SCStr *)((SCStr *)&param_2))->int_allocRep("app.sclib.networkState");
      *(unsigned char *)((char *)&local_8 + 0) = 0x3a;
      (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))(&param_2,local_28);
      *(unsigned char *)((char *)&local_8 + 0) = 0x3b;
      ((SCStr *)((SCStr *)&param_2))->int_release();
      param_2 = (int *)((int *)0x0);
      *(unsigned char *)((char *)&local_8 + 0) = 0x3c;
      ((SCStr *)(local_28))->int_release();
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      ((SCStr *)(local_28))->int_allocRep("unknown");
      *(unsigned char *)((char *)&local_8 + 0) = 0x3d;
      ((SCStr *)((SCStr *)&param_2))->int_allocRep("app.sclib.networkType");
      *(unsigned char *)((char *)&local_8 + 0) = 0x3e;
      (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))(&param_2,local_28);
      *(unsigned char *)((char *)&local_8 + 0) = 0x3f;
      ((SCStr *)((SCStr *)&param_2))->int_release();
      param_2 = (int *)((int *)0x0);
      *(unsigned char *)((char *)&local_8 + 0) = 0x40;
      ((SCStr *)(local_28))->int_release();
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      ((SCStr *)(local_28))->int_allocRep("unknown");
      *(unsigned char *)((char *)&local_8 + 0) = 0x41;
      ((SCStr *)((SCStr *)&param_2))->int_allocRep("app.connectivity.state");
      *(unsigned char *)((char *)&local_8 + 0) = 0x42;
      (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))(&param_2,local_28);
      *(unsigned char *)((char *)&local_8 + 0) = 0x43;
      ((SCStr *)((SCStr *)&param_2))->int_release();
      param_2 = (int *)((int *)0x0);
      *(unsigned char *)((char *)&local_8 + 0) = 0x44;
      ((SCStr *)(local_28))->int_release();
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      ((SCStr *)(local_28))->int_allocRep("unknown");
      *(unsigned char *)((char *)&local_8 + 0) = 0x45;
      ((SCStr *)((SCStr *)&param_2))->int_allocRep("app.connectivity.subState");
      *(unsigned char *)((char *)&local_8 + 0) = 0x46;
      (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))(&param_2,local_28);
      *(unsigned char *)((char *)&local_8 + 0) = 0x47;
      ((SCStr *)((SCStr *)&param_2))->int_release();
      param_2 = (int *)((int *)0x0);
      *(unsigned char *)((char *)&local_8 + 0) = 0x48;
      ((SCStr *)(local_28))->int_release();
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      ((SCStr *)(local_28))->int_allocRep("unknown");
      *(unsigned char *)((char *)&local_8 + 0) = 0x49;
      ((SCStr *)((SCStr *)&param_2))->int_allocRep("app.sclib.lifecycle");
      *(unsigned char *)((char *)&local_8 + 0) = 0x4a;
      (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))(&param_2,local_28);
      *(unsigned char *)((char *)&local_8 + 0) = 0x4b;
      ((SCStr *)((SCStr *)&param_2))->int_release();
      param_2 = (int *)((int *)0x0);
      *(unsigned char *)((char *)&local_8 + 0) = 0x4c;
      ((SCStr *)(local_28))->int_release();
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      ((SCStr *)(local_28))->int_allocRep("initialize");
      *(unsigned char *)((char *)&local_8 + 0) = 0x4d;
      ((SCStr *)((SCStr *)&param_2))->int_allocRep("app.lifecycle");
      *(unsigned char *)((char *)&local_8 + 0) = 0x4e;
      (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))(&param_2,local_28);
      *(unsigned char *)((char *)&local_8 + 0) = 0x4f;
      ((SCStr *)((SCStr *)&param_2))->int_release();
      param_2 = (int *)((int *)0x0);
      *(unsigned char *)((char *)&local_8 + 0) = 0x50;
      ((SCStr *)(local_28))->int_release();
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      ((SCStr *)(local_28))->int_allocRep("false");
      *(unsigned char *)((char *)&local_8 + 0) = 0x51;
      ((SCStr *)((SCStr *)&param_2))->int_allocRep("app.wizard.active");
      *(unsigned char *)((char *)&local_8 + 0) = 0x52;
      (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))(&param_2,local_28);
      *(unsigned char *)((char *)&local_8 + 0) = 0x53;
      ((SCStr *)((SCStr *)&param_2))->int_release();
      param_2 = (int *)((int *)0x0);
      *(unsigned char *)((char *)&local_8 + 0) = 0x54;
      ((SCStr *)(local_28))->int_release();
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      ((SCStr *)(local_28))->int_allocRep("none");
      *(unsigned char *)((char *)&local_8 + 0) = 0x55;
      ((SCStr *)((SCStr *)&param_2))->int_allocRep("app.wizard.name");
      *(unsigned char *)((char *)&local_8 + 0) = 0x56;
      (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))(&param_2,local_28);
      *(unsigned char *)((char *)&local_8 + 0) = 0x57;
      ((SCStr *)((SCStr *)&param_2))->int_release();
      param_2 = (int *)((int *)0x0);
      *(unsigned char *)((char *)&local_8 + 0) = 0x58;
      ((SCStr *)(local_28))->int_release();
      *(unsigned char *)((char *)&local_8 + 0) = 0x59;
      ((SCStr *)((SCStr *)&local_14))->int_release();

      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x5a)));
      ((SCStr *)((SCStr *)&local_1c))->int_release();


      ((SCStr *)((SCStr *)&local_18))->int_release();
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 1024bdc0; body size 137 bytes.
#line 1 "ENTRY_1024bdc0"

void __fastcall FUN_1024bdc0(int param_1)

{
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)thunk_FUN_1023a9f0(DAT_12126b84 ));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
    (**(code **)(*piVar2 + 4))();
  }

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x18))(*(undefined4 *)(param_1 + 4));
  }

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 1024be70; body size 218 bytes.
#line 1 "ENTRY_1024be70"

void __fastcall FUN_1024be70(int param_1)

{
 try {
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  SCLibrary *pSVar4;
  undefined4 uVar5;
  int *piVar6;
  int *local_24;
  int *local_20;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  pSVar4 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar6 = (int *)((int *)0x0);
  if (pSVar4 != (SCLibrary *)0x0) {
    piVar6 = (int *)((int *)(**(code **)(*(int *)pSVar4 + 0xc))(uVar3));
    (**(code **)(*piVar6 + 4))();
  }

  if (pSVar4 != (SCLibrary *)0x0) {
    uVar5 = (undefined4)((**(code **)(*(int *)pSVar4 + 0x18))(&local_14));
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    thunk_FUN_101ccbf0(uVar5);
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (local_24 != (int *)0x0) {
      iVar1 = (int)(**(int **)(param_1 + 0x24));
      uVar2 = (undefined1)((**(code **)(*local_24 + 0xa8))());
      (**(code **)(iVar1 + 0x20))(uVar2);
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 8))();
    }
  }

  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 1024bf80; body size 432 bytes.
#line 1 "ENTRY_1024bf80"

void FUN_1024bf80(void)

{
 try {
  uint uVar1;
  int *piVar2;
  SCLibrary *pSVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *local_3c;
  int *local_38;
  int *local_24;
  int local_20;
  SCStr local_1c [4];
  int *local_18;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  piVar2 = (int *)((int *)createPropertyBag());
  local_18 = (int *)((int *)*piVar2);

  *piVar2 = (int)(0);
  if (local_18 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*local_18 + 0xc))(uVar1));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar6 = (int *)((int *)0x0);
  if (pSVar3 != (SCLibrary *)0x0) {
    piVar6 = (int *)((int *)(**(code **)(*(int *)pSVar3 + 0xc))());
    (**(code **)(*piVar6 + 4))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  piVar5 = (int *)(local_18);
  if (pSVar3 != (SCLibrary *)0x0) {
    uVar4 = (undefined4)((**(code **)(*(int *)pSVar3 + 0x18))(&local_24));
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    thunk_FUN_101ccbf0(uVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    if (local_24 != (int *)0x0) {
      (**(code **)(*local_24 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    piVar5 = (int *)(local_18);
    if (local_3c != (int *)0x0) {
      (**(code **)(*local_3c + 0x14))(local_14);
      *(unsigned char *)((char *)&local_8 + 0) = 9;
      ((SCStr *)(local_1c))->int_allocRep("hhid");
      *(unsigned char *)((char *)&local_8 + 0) = 10;
      (**(code **)(**(int **)(local_20 + 0x24) + 0x1c))(local_1c,local_14);
      *(unsigned char *)((char *)&local_8 + 0) = 0xb;
      ((SCStr *)(local_1c))->int_release();
      *(unsigned char *)((char *)&local_8 + 0) = 9;
      ((SCStr *)(local_1c))->int_allocRep("hhid");
      piVar5 = (int *)(local_18);
      *(unsigned char *)((char *)&local_8 + 0) = 0xc;
      (**(code **)(*local_18 + 0x1c))(local_1c,local_14);
      *(unsigned char *)((char *)&local_8 + 0) = 0xd;
      ((SCStr *)(local_1c))->int_release();
      *(unsigned char *)((char *)&local_8 + 0) = 0xe;
      ((SCStr *)(local_14))->int_release();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0xf;
    if (local_38 != (int *)0x0) {
      (**(code **)(*local_38 + 8))();
    }
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(**(int **)(local_20 + 0x24) + 0x18))(piVar5);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x10)));
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))();
  }

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 1024c2f0; body size 76 bytes.
#line 1 "ENTRY_1024c2f0"

void __fastcall FUN_1024c2f0(undefined4 *param_1)

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


// Reference entry 1024c3c0; body size 189 bytes.
#line 1 "ENTRY_1024c3c0"

void __fastcall FUN_1024c3c0(undefined4 *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEulaManager);

  ((SCStr *)((SCStr *)(param_1 + 7)))->int_release();
  param_1[7] = 0;

  ((SCStr *)((SCStr *)(param_1 + 6)))->int_release();
  param_1[6] = 0;

  ((SCStr *)((SCStr *)(param_1 + 5)))->int_release();
  param_1[5] = 0;

  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  param_1[4] = 0;

  ((SCStr *)((SCStr *)(param_1 + 3)))->int_release();
  param_1[3] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 1024c520; body size 210 bytes.
#line 1 "ENTRY_1024c520"

undefined4 * __thiscall Recovered_Bulk::FUN_1024c520(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEulaManager);

  ((SCStr *)((SCStr *)(param_1 + 7)))->int_release();
  param_1[7] = 0;

  ((SCStr *)((SCStr *)(param_1 + 6)))->int_release();
  param_1[6] = 0;

  ((SCStr *)((SCStr *)(param_1 + 5)))->int_release();
  param_1[5] = 0;

  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  param_1[4] = 0;

  ((SCStr *)((SCStr *)(param_1 + 3)))->int_release();
  param_1[3] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1024cfc0; body size 699 bytes.
#line 1 "ENTRY_1024cfc0"

SCStr * FUN_1024cfc0(SCStr *param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    ((SCStr *)(param_1))->int_allocRep("en-AU");
    return (SCStr *)(param_1);
  case 1:
    ((SCStr *)(param_1))->int_allocRep("nl-BE");
    return (SCStr *)(param_1);
  case 2:
    ((SCStr *)(param_1))->int_allocRep("fr-BE");
    return (SCStr *)(param_1);
  case 3:
    ((SCStr *)(param_1))->int_allocRep("en-CA");
    return (SCStr *)(param_1);
  case 4:
    ((SCStr *)(param_1))->int_allocRep("fr-CA");
    return (SCStr *)(param_1);
  case 5:
    ((SCStr *)(param_1))->int_allocRep("zh-CN");
    return (SCStr *)(param_1);
  case 6:
    ((SCStr *)(param_1))->int_allocRep("da-DK");
    return (SCStr *)(param_1);
  case 7:
    ((SCStr *)(param_1))->int_allocRep("de-DE");
    return (SCStr *)(param_1);
  case 8:
    ((SCStr *)(param_1))->int_allocRep("es-ES");
    return (SCStr *)(param_1);
  case 9:
    ((SCStr *)(param_1))->int_allocRep("fr-FR");
    return (SCStr *)(param_1);
  case 10:
    ((SCStr *)(param_1))->int_allocRep("en-IE");
    return (SCStr *)(param_1);
  case 0xb:
    ((SCStr *)(param_1))->int_allocRep("it-IT");
    return (SCStr *)(param_1);
  case 0xc:
    ((SCStr *)(param_1))->int_allocRep("ja-JP");
    return (SCStr *)(param_1);
  case 0xd:
    ((SCStr *)(param_1))->int_allocRep("es-MX");
    return (SCStr *)(param_1);
  case 0xe:
    ((SCStr *)(param_1))->int_allocRep("nl-NL");
    return (SCStr *)(param_1);
  case 0xf:
    ((SCStr *)(param_1))->int_allocRep("en-NZ");
    return (SCStr *)(param_1);
  case 0x10:
    ((SCStr *)(param_1))->int_allocRep("nb-NO");
    return (SCStr *)(param_1);
  case 0x11:
    ((SCStr *)(param_1))->int_allocRep("de-AT");
    return (SCStr *)(param_1);
  case 0x12:
    ((SCStr *)(param_1))->int_allocRep("pl-PL");
    return (SCStr *)(param_1);
  case 0x13:
    ((SCStr *)(param_1))->int_allocRep("de-CH");
    return (SCStr *)(param_1);
  case 0x14:
    ((SCStr *)(param_1))->int_allocRep("it-CH");
    return (SCStr *)(param_1);
  case 0x15:
    ((SCStr *)(param_1))->int_allocRep("fr-CH");
    return (SCStr *)(param_1);
  case 0x16:
    ((SCStr *)(param_1))->int_allocRep("en-FI");
    return (SCStr *)(param_1);
  case 0x17:
    ((SCStr *)(param_1))->int_allocRep("sv-SE");
    return (SCStr *)(param_1);
  case 0x18:
    ((SCStr *)(param_1))->int_allocRep("en-GB");
    return (SCStr *)(param_1);
  case 0x19:
    ((SCStr *)(param_1))->int_allocRep("en-US");
    return (SCStr *)(param_1);
  case 0x1a:
    ((SCStr *)(param_1))->int_allocRep("es-US");
    return (SCStr *)(param_1);
  case 0x1b:
    ((SCStr *)(param_1))->int_allocRep("en-emea");
    return (SCStr *)(param_1);
  case 0x1c:
    ((SCStr *)(param_1))->int_allocRep("en-other");
    return (SCStr *)(param_1);
  default:
    thunk_FUN_112af4e0("SCEulaManager",1,"Failed to get locale string: %d",param_2);
    ((SCStr *)(param_1))->int_allocRep((char *)0x0);
    return (SCStr *)(param_1);
  }
}


// Reference entry 1024d830; body size 398 bytes.
#line 1 "ENTRY_1024d830"

SCStr * FUN_1024d830(SCStr *param_1,undefined4 param_2)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  int *local_1c;
  SCStr local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  thunk_FUN_1024cfc0(local_18,param_2);

  piVar3 = (int *)((int *)thunk_FUN_102a0500(uVar2));
  (**(code **)(*piVar3 + 0x34))(&local_14,&DAT_121a0a64,local_18);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  piVar4 = (int *)((int *)thunk_FUN_1040bfa0(&local_1c,&local_14));
  piVar3 = (int *)((int *)*piVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *piVar4 = (int)(0);
  if (piVar3 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  uVar1 = (undefined1)((undefined1)local_8);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x18))(param_1,&DAT_121a0a34);
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));
    ((SCStr *)((SCStr *)&local_14))->int_release();


    ((SCStr *)(local_18))->int_release();

    return (SCStr *)(param_1);
  }
  *(unsigned char *)((char *)&local_8 + 0) = uVar1;
  puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_1024cfc0(&param_2,param_2));
  puVar6 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*puVar5 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)((undefined1 *)*puVar5);
  }
  thunk_FUN_112af4e0("SCEulaManager",1,"Failed to load Eula resources for locale: %s",puVar6);
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  ((SCStr *)(param_1))->int_allocRep((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xb)));
  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)(local_18))->int_release();

  return (SCStr *)(param_1);

 } catch (...) { }
}


// Reference entry 1024df10; body size 238 bytes.
#line 1 "ENTRY_1024df10"

void FUN_1024df10(void)

{
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_18))->int_allocRep("");

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("lastAcceptedEULA");
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  piVar3 = (int *)((int *)thunk_FUN_102d5690(&local_1c,&local_14,2,&local_18,uVar2));
  piVar1 = (int *)((int *)*piVar3);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)((SCStr *)&local_18))->int_release();

  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
  (**(code **)(*piVar1 + 0x48))(&DAT_121a0a28);

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 1024e050; body size 103 bytes.
#line 1 "ENTRY_1024e050"

undefined4 * __thiscall Recovered_Bulk::FUN_1024e050(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIEulaManager"));
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


// Reference entry 1024e520; body size 107 bytes.
#line 1 "ENTRY_1024e520"

undefined4 * __thiscall Recovered_Bulk::FUN_1024e520(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[0xb] = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = uVar2;
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1024e7e0; body size 121 bytes.
#line 1 "ENTRY_1024e7e0"

undefined4 * FUN_1024e7e0(int param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;

  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 1024ee50; body size 93 bytes.
#line 1 "ENTRY_1024ee50"

int __thiscall Recovered_Bulk::FUN_1024ee50(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 1024eed0; body size 87 bytes.
#line 1 "ENTRY_1024eed0"

int __thiscall Recovered_Bulk::FUN_1024eed0(int *param_2)
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


// Reference entry 1024ef40; body size 93 bytes.
#line 1 "ENTRY_1024ef40"

int __thiscall Recovered_Bulk::FUN_1024ef40(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 1024f2e0; body size 236 bytes.
#line 1 "ENTRY_1024f2e0"

int __fastcall FUN_1024f2e0(undefined4 *param_1)

{
 try {
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


  uVar4 = (uint)(DAT_12126b84);

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

  if (piVar3 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    iVar5 = (int)((**(code **)(*piVar3 + 8))());
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return (int)(iVar5);

 } catch (...) { }
}


// Reference entry 1024f430; body size 76 bytes.
#line 1 "ENTRY_1024f430"

void __fastcall FUN_1024f430(undefined4 *param_1)

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


// Reference entry 1024f4a0; body size 76 bytes.
#line 1 "ENTRY_1024f4a0"

void __fastcall FUN_1024f4a0(undefined4 *param_1)

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


// Reference entry 1024f510; body size 76 bytes.
#line 1 "ENTRY_1024f510"

void __fastcall FUN_1024f510(undefined4 *param_1)

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


// Reference entry 1024f650; body size 275 bytes.
#line 1 "ENTRY_1024f650"

void __fastcall FUN_1024f650(undefined4 *param_1)

{
 try {
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar4 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCExperimentManager);
  piVar2 = (int *)((int *)param_1[0xc]);

  if (piVar2 != (int *)0x0) {
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    (**(code **)(*piVar2 + 8))(uVar4);
  }
  piVar2 = (int *)((int *)param_1[10]);

  if (piVar2 != (int *)0x0) {
    param_1[9] = 0;
    param_1[10] = 0;
    (**(code **)(*piVar2 + 8))();
  }

  ((SCStr *)((SCStr *)(param_1 + 8)))->int_release();
  param_1[8] = 0;
  piVar2 = (int *)((int *)param_1[7]);

  if (piVar2 != (int *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  piVar2 = (int *)((int *)param_1[5]);

  if (piVar2 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar2 + 8))();
  }
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

 } catch (...) { }
}


// Reference entry 1024f800; body size 81 bytes.
#line 1 "ENTRY_1024f800"

int * __thiscall Recovered_Bulk::FUN_1024f800(int *param_2)
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


// Reference entry 1024f870; body size 81 bytes.
#line 1 "ENTRY_1024f870"

int * __thiscall Recovered_Bulk::FUN_1024f870(int *param_2)
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


// Reference entry 1024f9e0; body size 261 bytes.
#line 1 "ENTRY_1024f9e0"

undefined4 * __thiscall Recovered_Bulk::FUN_1024f9e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar4 = (uint)(DAT_12126b84);

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

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1024fca0; body size 124 bytes.
#line 1 "ENTRY_1024fca0"

undefined4 * __fastcall FUN_1024fca0(int param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;

  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x2c))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 1024ff20; body size 190 bytes.
#line 1 "ENTRY_1024ff20"

void __thiscall Recovered_Bulk::FUN_1024ff20(SCStr *param_2)
{
  int *param_1 = (int *)this;
 try {
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  local_14 = (int *)(param_1);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("REDACTED");

  bVar1 = (bool)(((SCStr *)(param_2))->op_eq("okta_identity_test"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_2))->op_eq("lan_discovery_test"));
    if (!bVar1) {
      iVar3 = (int)((**(code **)(*param_1 + 0x14))());
      bVar1 = (bool)(iVar3 == 2);
      goto LAB_1024ff97;
    }
  }
  iVar3 = (int)((**(code **)(*param_1 + 0x14))(uVar2));
  bVar1 = (bool)(iVar3 != 0);
LAB_1024ff97:
  if (!bVar1) {
    piVar4 = (int *)((int *)&DAT_1186d2ee);
    if (local_14 != (int *)0x0) {
      piVar4 = (int *)(local_14);
    }
    thunk_FUN_112af4e0("SCExperimentManager",3,
                       "Attempting to query experiment (%s) when experiment manager is not ready!",
                       piVar4);
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10250010; body size 209 bytes.
#line 1 "ENTRY_10250010"

void __thiscall Recovered_Bulk::FUN_10250010(SCStr *param_2)
{
  int *param_1 = (int *)this;
 try {
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  local_14 = (int *)(param_1);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("REDACTED");

  bVar1 = (bool)(((SCStr *)(param_2))->op_eq("lan_discovery"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_2))->op_eq("time_to_settle_report"));
    if (!bVar1) {
      bVar1 = (bool)(((SCStr *)(param_2))->op_eq("upnp_tunnels"));
      if (!bVar1) {
        iVar3 = (int)((**(code **)(*param_1 + 0x14))());
        bVar1 = (bool)(iVar3 == 2);
        goto LAB_10250099;
      }
    }
  }
  iVar3 = (int)((**(code **)(*param_1 + 0x14))(uVar2));
  bVar1 = (bool)(iVar3 != 0);
LAB_10250099:
  if (!bVar1) {
    piVar4 = (int *)((int *)&DAT_1186d2ee);
    if (local_14 != (int *)0x0) {
      piVar4 = (int *)(local_14);
    }
    thunk_FUN_112af4e0("SCExperimentManager",3,
                       "Attempting to query feature (%s) when experiment manager is not ready!",
                       piVar4);
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 102518f0; body size 98 bytes.
#line 1 "ENTRY_102518f0"

undefined4 * FUN_102518f0(undefined4 *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_102517b0(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10252c00; body size 103 bytes.
#line 1 "ENTRY_10252c00"

undefined4 * __thiscall Recovered_Bulk::FUN_10252c00(undefined4 *param_2,SCStr *param_3)
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


// Reference entry 10252c80; body size 103 bytes.
#line 1 "ENTRY_10252c80"

undefined4 * __thiscall Recovered_Bulk::FUN_10252c80(undefined4 *param_2,SCStr *param_3)
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


// Reference entry 10252d00; body size 103 bytes.
#line 1 "ENTRY_10252d00"

undefined4 * __thiscall Recovered_Bulk::FUN_10252d00(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIExperimentManager"));
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


// Reference entry 102535a0; body size 72 bytes.
#line 1 "ENTRY_102535a0"

void __fastcall FUN_102535a0(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    piVar1 = (int *)((int *)thunk_FUN_1023a9f0());
    (**(code **)(*piVar1 + 0x18))(*(undefined4 *)(param_1 + 0x2c));
    if (*(int *)(param_1 + 0x2c) != 0) {
      piVar1 = (int *)(*(int **)(param_1 + 0x30));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(undefined4 *)(param_1 + 0x30) = 0;
        (**(code **)(*piVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
  }
  return;
}


// Reference entry 10253a90; body size 110 bytes.
#line 1 "ENTRY_10253a90"

undefined4 * __thiscall Recovered_Bulk::FUN_10253a90(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[0xb] = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = uVar2;
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10253b20; body size 110 bytes.
#line 1 "ENTRY_10253b20"

undefined4 * __thiscall Recovered_Bulk::FUN_10253b20(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[0xb] = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = uVar2;
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10253bb0; body size 110 bytes.
#line 1 "ENTRY_10253bb0"

undefined4 * __thiscall Recovered_Bulk::FUN_10253bb0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[0xb] = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = uVar2;
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10253d10; body size 110 bytes.
#line 1 "ENTRY_10253d10"

undefined4 * __thiscall Recovered_Bulk::FUN_10253d10(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[0xb] = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = uVar2;
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10254af0; body size 111 bytes.
#line 1 "ENTRY_10254af0"

void FUN_10254af0(undefined4 *param_1,undefined4 *param_2)

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


// Reference entry 10254f10; body size 199 bytes.
#line 1 "ENTRY_10254f10"

undefined4 __thiscall Recovered_Bulk::FUN_10254f10(undefined4 param_2,int *param_3)
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
    thunk_FUN_10254f10(param_2,param_3[2]);
    piVar2 = (int *)((int *)*param_3);
    piVar3 = (int *)((int *)param_3[7]);

    if (piVar3 != (int *)0x0) {
      param_3[6] = 0;
      param_3[7] = 0;
      (**(code **)(*piVar3 + 8))(uVar5);
    }

    ((SCStr *)((SCStr *)(param_3 + 5)))->int_release();
    param_3[5] = 0;

    ((SCStr *)((SCStr *)(param_3 + 4)))->int_release();
    *(undefined4 *)(param_3 + 4) = 0;

    thunk_FUN_1148a50e(param_3,0x20);

    param_3 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 102550f0; body size 146 bytes.
#line 1 "ENTRY_102550f0"

void FUN_102550f0(undefined4 param_1,int param_2)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_2 + 0x1c));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined4 *)(param_2 + 0x1c) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  ((SCStr *)((SCStr *)(param_2 + 0x14)))->int_release();
  *(undefined4 *)(param_2 + 0x14) = 0;

  ((SCStr *)((SCStr *)(param_2 + 0x10)))->int_release();
  *(undefined4 *)(param_2 + 0x10) = 0;
  thunk_FUN_1148a50e(param_2,0x20);

  return;

 } catch (...) { }
}


// Reference entry 102551e0; body size 124 bytes.
#line 1 "ENTRY_102551e0"

undefined4 * FUN_102551e0(int param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;

  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 10255300; body size 124 bytes.
#line 1 "ENTRY_10255300"

undefined4 * FUN_10255300(int param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;

  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 10255420; body size 124 bytes.
#line 1 "ENTRY_10255420"

undefined4 * FUN_10255420(int param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;

  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 10255730; body size 124 bytes.
#line 1 "ENTRY_10255730"

undefined4 * FUN_10255730(int param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;

  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


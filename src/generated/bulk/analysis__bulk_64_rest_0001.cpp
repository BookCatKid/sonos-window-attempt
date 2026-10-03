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
extern __declspec(dllimport) int ceil(...);
extern int createActionContextForAction(...);
extern int createSCActionFilterer(...);
extern int createSCStringArray(...);
extern __declspec(dllimport) int fclose(...);
extern __declspec(dllimport) int fseek(...);
extern int getSCHousehold(...);
extern int getSingleton(...);
extern int isShuttingDown(...);
extern int operator_new(...);
extern __declspec(dllimport) int strtoul(...);
extern int thunk_FUN_10120220(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_1012d130(...);
extern int thunk_FUN_101a2b90(...);
extern int thunk_FUN_101a2bf0(...);
extern int thunk_FUN_101b5540(...);
extern int thunk_FUN_101b5de0(...);
extern int thunk_FUN_101b87f0(...);
extern int thunk_FUN_101b9a40(...);
extern int thunk_FUN_101ba530(...);
extern int thunk_FUN_101be460(...);
extern int thunk_FUN_101be780(...);
extern int thunk_FUN_101bf370(...);
extern int thunk_FUN_101c42f0(...);
extern int thunk_FUN_101c4810(...);
extern int thunk_FUN_101c5190(...);
extern int thunk_FUN_101c6ae0(...);
extern int thunk_FUN_101c8410(...);
extern int thunk_FUN_101c8790(...);
extern int thunk_FUN_101caf60(...);
extern int thunk_FUN_101ccbf0(...);
extern int thunk_FUN_101cd010(...);
extern int thunk_FUN_101cde00(...);
extern int thunk_FUN_101cdee0(...);
extern int thunk_FUN_101cdf90(...);
extern int thunk_FUN_101d4290(...);
extern int thunk_FUN_101d6b80(...);
extern int thunk_FUN_101d7220(...);
extern int thunk_FUN_101da380(...);
extern int thunk_FUN_101da390(...);
extern int thunk_FUN_101da3a0(...);
extern int thunk_FUN_101da4a0(...);
extern int thunk_FUN_101dad50(...);
extern int thunk_FUN_101dbeb0(...);
extern int thunk_FUN_101e2d80(...);
extern int thunk_FUN_101e6900(...);
extern int thunk_FUN_101e69d0(...);
extern int thunk_FUN_101e76a0(...);
extern int thunk_FUN_101e7e50(...);
extern int thunk_FUN_101e85f0(...);
extern int thunk_FUN_101e8670(...);
extern int thunk_FUN_101e8710(...);
extern int thunk_FUN_101e90e0(...);
extern int thunk_FUN_101e9180(...);
extern int thunk_FUN_101ec4a0(...);
extern int thunk_FUN_101ec790(...);
extern int thunk_FUN_101ec940(...);
extern int thunk_FUN_101ec9b0(...);
extern int thunk_FUN_101ee670(...);
extern int thunk_FUN_101f13e0(...);
extern int thunk_FUN_101f3880(...);
extern int thunk_FUN_101f4a30(...);
extern int thunk_FUN_101f6530(...);
extern int thunk_FUN_101fcfa0(...);
extern int thunk_FUN_101fd7b0(...);
extern int thunk_FUN_101fd960(...);
extern int thunk_FUN_101fda20(...);
extern int thunk_FUN_101fdb50(...);
extern int thunk_FUN_101fdc90(...);
extern int thunk_FUN_101fdfe0(...);
extern int thunk_FUN_101ff410(...);
extern int thunk_FUN_10200aa0(...);
extern int thunk_FUN_10202e00(...);
extern int thunk_FUN_10203dc0(...);
extern int thunk_FUN_10204c50(...);
extern int thunk_FUN_10206850(...);
extern int thunk_FUN_10206e60(...);
extern int thunk_FUN_10207220(...);
extern int thunk_FUN_102072a0(...);
extern int thunk_FUN_10207b10(...);
extern int thunk_FUN_102089f0(...);
extern int thunk_FUN_1020d760(...);
extern int thunk_FUN_1021adf0(...);
extern int thunk_FUN_1021d3c0(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_10220d70(...);
extern int thunk_FUN_10220fc0(...);
extern int thunk_FUN_10222610(...);
extern int thunk_FUN_102253f0(...);
extern int thunk_FUN_10225ef0(...);
extern int thunk_FUN_10225ff0(...);
extern int thunk_FUN_102260c0(...);
extern int thunk_FUN_10226130(...);
extern int thunk_FUN_10227930(...);
extern int thunk_FUN_102279b0(...);
extern int thunk_FUN_10227a30(...);
extern int thunk_FUN_10227fb0(...);
extern int thunk_FUN_10231910(...);
extern int thunk_FUN_10231a30(...);
extern int thunk_FUN_10231b50(...);
extern int thunk_FUN_10232a30(...);
extern int thunk_FUN_10232bf0(...);
extern int thunk_FUN_10232db0(...);
extern int thunk_FUN_1023a9f0(...);
extern int thunk_FUN_10240a30(...);
extern int thunk_FUN_10240d50(...);
extern int thunk_FUN_10240ec0(...);
extern int thunk_FUN_10240fb0(...);
extern int thunk_FUN_10242250(...);
extern int thunk_FUN_10245cd0(...);
extern int thunk_FUN_10245f80(...);
extern int thunk_FUN_10246ce0(...);
extern int thunk_FUN_1024be70(...);
extern int thunk_FUN_1024bf80(...);
extern int thunk_FUN_102517b0(...);
extern int thunk_FUN_102878a0(...);
extern int thunk_FUN_10288040(...);
extern int thunk_FUN_1028a700(...);
extern int thunk_FUN_1028b250(...);
extern int thunk_FUN_10292c70(...);
extern int thunk_FUN_10292cf0(...);
extern int thunk_FUN_10308fd0(...);
extern int thunk_FUN_10309500(...);
extern int thunk_FUN_1030a0d0(...);
extern int thunk_FUN_10328780(...);
extern int thunk_FUN_1037aad0(...);
extern int thunk_FUN_1037c680(...);
extern int thunk_FUN_1037cba0(...);
extern int thunk_FUN_1037f130(...);
extern int thunk_FUN_1038c3f0(...);
extern int thunk_FUN_1038d6e0(...);
extern int thunk_FUN_1038dd80(...);
extern int thunk_FUN_103be5e0(...);
extern int thunk_FUN_103be9e0(...);
extern int thunk_FUN_103d61d0(...);
extern int thunk_FUN_103d63b0(...);
extern int thunk_FUN_103d6930(...);
extern int thunk_FUN_103d6a60(...);
extern int thunk_FUN_103d6e00(...);
extern int thunk_FUN_103eb600(...);
extern int thunk_FUN_10436cd0(...);
extern int thunk_FUN_10437b40(...);
extern int thunk_FUN_104dbeb0(...);
extern int thunk_FUN_104dd4a0(...);
extern int thunk_FUN_104ddf90(...);
extern int thunk_FUN_104ddfd0(...);
extern int thunk_FUN_104deb40(...);
extern int thunk_FUN_104dec20(...);
extern int thunk_FUN_104ea590(...);
extern int thunk_FUN_104ed040(...);
extern int thunk_FUN_104ed740(...);
extern int thunk_FUN_104f6770(...);
extern int thunk_FUN_104f7a90(...);
extern int thunk_FUN_10509ca0(...);
extern int thunk_FUN_1059bd30(...);
extern int thunk_FUN_1059c050(...);
extern int thunk_FUN_1059d5a0(...);
extern int thunk_FUN_1059d800(...);
extern int thunk_FUN_1059d940(...);
extern int thunk_FUN_1059dd40(...);
extern int thunk_FUN_105a7950(...);
extern int thunk_FUN_105a85f0(...);
extern int thunk_FUN_105b5360(...);
extern int thunk_FUN_105b5ef0(...);
extern int thunk_FUN_10649300(...);
extern int thunk_FUN_1106b190(...);
extern int thunk_FUN_1106e690(...);
extern int thunk_FUN_1106f2b0(...);
extern int thunk_FUN_1106f6e0(...);
extern int thunk_FUN_1106fb60(...);
extern int thunk_FUN_11080e90(...);
extern int thunk_FUN_11081b20(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_11093530(...);
extern int thunk_FUN_110935f0(...);
extern int thunk_FUN_11093a20(...);
extern int thunk_FUN_1109e4d0(...);
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
extern int thunk_FUN_110db5f0(...);
extern int thunk_FUN_110ecc20(...);
extern int thunk_FUN_111a0720(...);
extern int thunk_FUN_111a0940(...);
extern int thunk_FUN_111a0e70(...);
extern int thunk_FUN_111a1540(...);
extern int thunk_FUN_111c06e0(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11242b10(...);
extern int thunk_FUN_11242ca0(...);
extern int thunk_FUN_11242d90(...);
extern int thunk_FUN_11242f30(...);
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
extern int DAT_11880fb0;
extern int DAT_11884810;
extern int DAT_11887338;
extern int DAT_11887910;
extern int DAT_11887928;
extern int DAT_12126b84;
extern int g_lSCObjCount;
extern int ghidra_vftable_BatteryWeakChargerData;
extern int ghidra_vftable_FactoryResetData;
extern int ghidra_vftable_ForgotHouseholdData;
extern int ghidra_vftable_InvalidOptimo2OrientationData;
extern int ghidra_vftable_LaunchWifiConfig;
extern int ghidra_vftable_LegacyCRModernHHData;
extern int ghidra_vftable_NoNetworkFoundData;
extern int ghidra_vftable_OutdatedControllerData;
extern int ghidra_vftable_RFavoriteHelper;
extern int ghidra_vftable_RetailDemoData;
extern int ghidra_vftable_SCActionDelegateProxy;
extern int ghidra_vftable_SCActionFilterer;
extern int ghidra_vftable_SCAppSessionManager;
extern int ghidra_vftable_SCAppUrlAction;
extern int ghidra_vftable_SCAppUrlActionDescriptor;
extern int ghidra_vftable_SCAsyncBrowseItem;
extern int ghidra_vftable_SCCompoundAction;
extern int ghidra_vftable_SCController_LimitedAccessStateData;
extern int ghidra_vftable_SCCreateAndSummonNewWizActionDescriptorFor;
extern int ghidra_vftable_SCData;
extern int ghidra_vftable_SCDisplayCustomControlActionDescriptor;
extern int ghidra_vftable_SCFetchTokenOpActionWrapper;
extern int ghidra_vftable_SCFileBackedData;
extern int ghidra_vftable_SCIActionDelegate;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCIncrementHHSwgenAndOnlineUpdateWizardActionDescriptor;
extern int ghidra_vftable_SCNewWizControllerFor;
extern int ghidra_vftable_SCOnlineUpdateWizardActionDescriptor;
extern int ghidra_vftable_SCOpCBProxy;
extern int ghidra_vftable_SCRequireTokenActionDescriptor;
extern int ghidra_vftable_SCStringArray;
extern int ghidra_vftable_SCTimerUser;
extern int ghidra_vftable_SCUrl;
extern int ghidra_vftable_SCVersion;
extern int ghidra_vftable_ScopedRWLock;
extern int ghidra_vftable_UnsupportedData;
extern int ghidra_vftable_ZonePlayerUpdateData;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int in_EAX;
extern int in_stack_00000028;
extern int in_stack_00000030;
extern int unaff_EBP;
extern undefined1 LAB_101c84d4[];
extern undefined1 LAB_101c84ef[];
extern undefined1 LAB_101cc7d1[];
extern undefined1 LAB_101f38fa[];
extern undefined1 LAB_101f99c1[];
extern undefined1 LAB_10204f0d[];
extern undefined1 LAB_1022453b[];
extern undefined1 LAB_102246cb[];
extern undefined1 LAB_10224931[];
extern undefined1 LAB_10224d21[];
extern undefined1 LAB_102319d4[];
extern undefined1 LAB_102319ef[];
extern undefined1 LAB_10231af4[];
extern undefined1 LAB_10231b0f[];
extern undefined1 LAB_10231c14[];
extern undefined1 LAB_10231c2f[];
extern undefined1 LAB_1023b368[];
extern undefined1 LAB_1023b4eb[];
extern undefined1 LAB_1023d2a1[];
extern undefined1 LAB_102400e2[];
extern undefined1 LAB_10240f50[];
extern undefined1 LAB_1024e6e1[];
extern undefined1 LAB_10253f3b[];
extern undefined1 LAB_102540cb[];
extern undefined1 LAB_1025425b[];
extern undefined1 LAB_1025462b[];
extern undefined1 LAB_114f62b7[];
extern undefined1 LAB_114f62fd[];
extern undefined1 LAB_114f633d[];
extern undefined1 LAB_114f637d[];
extern undefined1 LAB_114f6980[];
extern undefined1 LAB_114f772d[];
extern undefined1 LAB_114f7910[];
extern undefined1 LAB_114f7940[];
extern undefined1 LAB_114f79bd[];
extern undefined1 LAB_114f79fd[];
extern undefined1 LAB_114f7a30[];
extern undefined1 LAB_114f7aab[];
extern undefined1 LAB_114f7afb[];
extern undefined1 LAB_114f7b4b[];
extern undefined1 LAB_114f7fd0[];
extern undefined1 LAB_114f8030[];
extern undefined1 LAB_114f8060[];
extern undefined1 LAB_114f8300[];
extern undefined1 LAB_114f866d[];
extern undefined1 LAB_114f86ad[];
extern undefined1 LAB_114f86ed[];
extern undefined1 LAB_114f8b50[];
extern undefined1 LAB_114f8c3d[];
extern undefined1 LAB_114f8c84[];
extern undefined1 LAB_114f9125[];
extern undefined1 LAB_114f915d[];
extern undefined1 LAB_114f919d[];
extern undefined1 LAB_114f91e5[];
extern undefined1 LAB_114f94d0[];
extern undefined1 LAB_114f9545[];
extern undefined1 LAB_114f9585[];
extern undefined1 LAB_114f97fd[];
extern undefined1 LAB_114f983d[];
extern undefined1 LAB_114f987d[];
extern undefined1 LAB_114f98bd[];
extern undefined1 LAB_114f98fd[];
extern undefined1 LAB_114fa270[];
extern undefined1 LAB_114fa2a0[];
extern undefined1 LAB_114fa2d0[];
extern undefined1 LAB_114fa480[];
extern undefined1 LAB_114fa660[];
extern undefined1 LAB_114fa6d5[];
extern undefined1 LAB_114faa90[];
extern undefined1 LAB_114fada5[];
extern undefined1 LAB_114fb0ad[];
extern undefined1 LAB_114fb1d0[];
extern undefined1 LAB_114fb200[];
extern undefined1 LAB_114fb545[];
extern undefined1 LAB_114fb5dd[];
extern undefined1 LAB_114fbbbd[];
extern undefined1 LAB_114fbd1d[];
extern undefined1 LAB_114fbd5d[];
extern undefined1 LAB_114fc34d[];
extern undefined1 LAB_114fc38d[];
extern undefined1 LAB_114fc455[];
extern undefined1 LAB_114fc48d[];
extern undefined1 LAB_114fc68d[];
extern undefined1 LAB_114fc6c0[];
extern undefined1 LAB_114fc6f0[];
extern undefined1 LAB_114fc8b0[];
extern undefined1 LAB_114fcaa0[];
extern undefined1 LAB_114fce56[];
extern undefined1 LAB_114fd3fd[];
extern undefined1 LAB_114fdb92[];
extern undefined1 LAB_114fe0cd[];
extern undefined1 LAB_114fe10d[];
extern undefined1 LAB_114fe14d[];
extern undefined1 LAB_114fe18d[];
extern undefined1 LAB_114fe2ed[];
extern undefined1 LAB_114fe780[];
extern undefined1 LAB_114fe7b0[];
extern undefined1 LAB_114feaed[];
extern undefined1 LAB_114feb2d[];
extern undefined1 LAB_114fefe0[];
extern undefined1 LAB_114ff87d[];
extern undefined1 LAB_114ff96d[];
extern undefined1 LAB_115000b0[];
extern undefined1 LAB_115000e0[];
extern undefined1 LAB_115001a5[];
extern undefined1 LAB_115004a0[];
extern undefined1 LAB_11500b8d[];
extern undefined1 LAB_115015ed[];
extern undefined1 LAB_11501635[];
extern undefined1 LAB_11501675[];
extern undefined1 LAB_1150173d[];
extern undefined1 LAB_1150177d[];
extern undefined1 LAB_11501975[];
extern undefined1 LAB_11501a65[];
extern undefined1 LAB_11501cc5[];
extern undefined1 LAB_11501e50[];
extern undefined1 LAB_11501e80[];
extern undefined1 LAB_11501eb0[];
extern undefined1 LAB_11501ef5[];
extern undefined1 LAB_11501f2d[];
extern undefined1 LAB_11501f60[];
extern undefined1 LAB_11501f90[];
extern undefined1 LAB_11501fcd[];
extern undefined1 LAB_1150200d[];
extern undefined1 LAB_1150205e[];
extern undefined1 LAB_1150218c[];
extern undefined1 LAB_115022e4[];
extern undefined1 LAB_11502ad3[];
extern undefined1 LAB_115032c0[];
extern undefined1 LAB_115032f0[];
extern undefined1 LAB_11503500[];
extern undefined1 LAB_11503530[];
extern undefined1 LAB_11503560[];
extern undefined1 LAB_11503590[];
extern undefined1 LAB_115035c0[];
extern undefined1 LAB_11503905[];
extern undefined1 LAB_11503930[];
extern undefined1 LAB_11503960[];
extern undefined1 LAB_11503bd0[];
extern undefined1 LAB_11503e77[];
extern undefined1 LAB_11504297[];
extern undefined1 LAB_11504414[];
extern undefined1 LAB_11504440[];
extern undefined1 LAB_11504e8d[];
extern undefined1 LAB_11506704[];
extern undefined1 LAB_11506940[];
extern undefined1 LAB_11506a35[];
extern undefined1 LAB_11506b20[];
extern undefined1 LAB_11506b6d[];
extern undefined1 LAB_11506c18[];
extern undefined1 LAB_11506e4d[];
extern undefined1 LAB_1150700d[];
extern undefined1 LAB_115072c5[];
extern undefined1 LAB_11507447[];
extern undefined1 LAB_11507950[];
extern undefined1 LAB_11507980[];
extern undefined1 LAB_11507a10[];
extern undefined1 LAB_11507a40[];
extern undefined1 LAB_11507ebd[];
extern undefined1 LAB_11507f2f[];
extern undefined1 LAB_11507ffd[];
extern undefined1 LAB_1150806d[];
extern undefined1 LAB_11508100[];
extern undefined1 LAB_1150814d[];
extern undefined1 LAB_1150818d[];
extern undefined1 LAB_115081cd[];
extern undefined1 LAB_1150820d[];
extern undefined1 LAB_1150878d[];
extern undefined1 LAB_115087cd[];
extern undefined1 LAB_1150880d[];
extern undefined1 LAB_1150884d[];
extern undefined1 LAB_1150888d[];
extern undefined1 LAB_115088cd[];
extern undefined1 LAB_11508915[];
extern undefined1 LAB_11508955[];
extern undefined1 LAB_11508995[];
extern undefined1 LAB_115089d5[];
extern undefined1 LAB_11508c45[];
extern undefined1 LAB_11508c85[];
extern undefined1 LAB_11508cc5[];
extern undefined1 LAB_11508d05[];
extern undefined1 LAB_11508e9d[];
extern undefined1 LAB_11508edd[];
extern undefined1 LAB_11508f25[];
extern undefined1 LAB_11508f65[];
extern undefined1 LAB_11508fa5[];
extern undefined1 LAB_11508fe5[];
extern undefined1 LAB_115090bb[];
extern undefined1 LAB_1150910b[];
extern undefined1 LAB_1150915b[];
extern undefined1 LAB_115091ed[];
extern undefined1 LAB_1150922d[];
extern undefined1 LAB_1150926d[];
extern undefined1 LAB_115092ad[];
extern undefined1 LAB_115092ed[];
extern undefined1 LAB_1150932d[];
extern undefined1 LAB_1150936d[];
extern undefined1 LAB_115093ad[];
extern undefined1 LAB_115093fb[];
extern undefined1 LAB_11509453[];
extern undefined1 LAB_1150949b[];
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
extern undefined1 LAB_115098dd[];
extern undefined1 LAB_1150991d[];
extern undefined1 LAB_11509d2d[];
extern undefined1 LAB_11509dfd[];
extern undefined1 LAB_11509e3d[];
extern undefined1 LAB_11509e7d[];
extern undefined1 LAB_1150a2a0[];
extern undefined1 LAB_1150a330[];
extern undefined1 LAB_1150a390[];
extern undefined1 LAB_1150a600[];
extern undefined1 LAB_1150a990[];
extern undefined1 LAB_1150ae55[];
extern undefined1 LAB_1150ae95[];
extern undefined1 LAB_1150aed5[];
extern undefined1 LAB_1150af15[];
extern undefined1 LAB_1150b29c[];
extern undefined1 LAB_1150b2d0[];
extern undefined1 LAB_1150b300[];
extern undefined1 LAB_1150b454[];
extern undefined1 LAB_1150b4b4[];
extern undefined1 LAB_1150b514[];
extern undefined1 LAB_1150b574[];
extern undefined1 LAB_1150b5d4[];
extern undefined1 LAB_1150b6f4[];
extern undefined1 LAB_1150b81e[];
extern undefined1 LAB_1150b8b9[];
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
extern undefined1 LAB_1150c6b5[];
extern undefined1 LAB_1150c705[];
extern undefined1 LAB_1150c8a5[];
extern undefined1 LAB_1150c965[];
extern undefined1 LAB_1150cb05[];
extern undefined1 LAB_1150cfc0[];
extern undefined1 LAB_1150d590[];
extern undefined1 LAB_1150d875[];
extern undefined1 LAB_1150dc35[];
extern undefined1 LAB_1150dd6d[];
extern undefined1 LAB_1150de95[];
extern undefined1 LAB_1150e385[];
extern undefined1 LAB_1150e3bd[];
extern undefined1 LAB_1150e45d[];
extern undefined1 LAB_1150e52d[];
extern undefined1 LAB_1150e920[];
extern undefined1 LAB_1150ee67[];
extern undefined1 LAB_1150eeb7[];
extern undefined1 LAB_1150ef3e[];
extern undefined1 LAB_1150ef95[];
extern undefined1 LAB_1150f174[];
extern undefined1 LAB_1150f1a0[];
extern undefined1 LAB_1150f1ed[];
extern undefined1 LAB_1150f408[];
extern undefined1 LAB_1150f635[];
extern undefined1 LAB_1150f815[];
extern undefined1 LAB_1150fa4d[];
extern undefined1 LAB_1150fa9d[];
extern undefined1 LAB_1151038d[];
extern undefined1 LAB_115103d5[];
extern undefined1 LAB_11510415[];
extern undefined1 LAB_115104dd[];
extern undefined1 LAB_1151051d[];
extern undefined1 LAB_115109c5[];
extern undefined1 LAB_11510f60[];
extern undefined1 LAB_1151157d[];
extern undefined1 LAB_115115bd[];
extern undefined1 LAB_115115fd[];
extern undefined1 LAB_1151168d[];
extern undefined1 LAB_115116d5[];
extern undefined1 LAB_11511715[];
extern undefined1 LAB_11511755[];
extern undefined1 LAB_11511855[];
extern undefined1 LAB_115119e5[];
extern undefined1 LAB_11511a25[];
extern undefined1 LAB_11511a65[];
extern undefined1 LAB_11511b55[];
extern int *stack0x00000004;
extern int *stack0x0000000c;
extern int *stack0xfffffffc;
extern void *ExceptionList;
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int createActionContextForAction(A...); template<class... A> int getSCHousehold(A...); template<class... A> int getSingleton(A...); template<class... A> int isShuttingDown(A...); };
typedef void *A;
typedef void *ABCDEFGHIJKLMNOPQRSTUVWXYZ;
typedef void *AP;
typedef void *LOCK;
typedef void *UNLOCK;
typedef void *WARNING;
struct Bridges { char _pad; Bridges(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Connected { char _pad; Connected(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Controller { char _pad; Controller(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Error { char _pad; Error(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Forgetting { char _pad; Forgetting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct KnownNetwork { char _pad; KnownNetwork(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct LANPermissionsDenied { char _pad; LANPermissionsDenied(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct No { char _pad; No(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ObjectID { char _pad; ObjectID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Only { char _pad; Only(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct OutOfRange { char _pad; OutOfRange(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct PrefixAndIndexCSV { char _pad; PrefixAndIndexCSV(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Resetting { char _pad; Resetting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCAccountManager { char _pad; SCAccountManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCController { char _pad; SCController(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCControllerTest { char _pad; SCControllerTest(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCData { char _pad; SCData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIAction { char _pad; SCIAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Searching { char _pad; Searching(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct State { char _pad; State(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Still { char _pad; Still(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Substate { char _pad; Substate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct TotalPrefixes { char _pad; TotalPrefixes(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Unknown { char _pad; Unknown(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct UnknownNetwork { char _pad; UnknownNetwork(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct UpdateID { char _pad; UpdateID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WiFi { char _pad; WiFi(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered_Bulk { char _pad; void __thiscall FUN_101bbc60(undefined4 param_2,undefined4 param_3); void __thiscall FUN_101bbd90(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_101be320(byte param_2); undefined4 * __thiscall FUN_101c3740(undefined4 param_2,undefined4 param_3,undefined4 *param_4); undefined4 * __thiscall FUN_101c56c0(undefined4 *param_2); int * __thiscall FUN_101c7910(byte param_2); void __thiscall FUN_101c8410(uint param_2,undefined4 param_3); void __thiscall FUN_101c8570(int param_2,int param_3,int param_4); float __thiscall FUN_101c8680(int param_2); void __thiscall FUN_101c8bc0(int param_2); undefined4 * __thiscall FUN_101ca290(undefined4 *param_2,undefined4 param_3,int *param_4); SCIAction * __thiscall FUN_101caf70(SCIAction *param_2); undefined4 * __thiscall FUN_101cc3c0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5); undefined4 * __thiscall FUN_101cc4c0(undefined4 param_2,undefined4 *param_3); undefined4 * __thiscall FUN_101cc560(int param_2); int __thiscall FUN_101cc730(void); uint __thiscall FUN_101cda80(undefined4 *param_2); void __thiscall FUN_101cdda0(undefined4 param_2); undefined4 * __thiscall FUN_101ce690(undefined4 *param_2,uint *param_3); undefined4 * __thiscall FUN_101d00c0(undefined4 param_2); int __thiscall FUN_101d01f0(int param_2); int __thiscall FUN_101d0270(int param_2); int __thiscall FUN_101d0370(int param_2); int __thiscall FUN_101d0400(int param_2); undefined4 * __thiscall FUN_101d4290(uint *param_2); int * __thiscall FUN_101d4810(int *param_2); undefined4 * __thiscall FUN_101d5ee0(byte param_2); void __thiscall FUN_101d6e80(int param_2); void __thiscall FUN_101d7620(int param_2,undefined2 param_3); undefined4 __thiscall FUN_101d9170(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_101d9560(undefined4 *param_2); int * __thiscall FUN_101d95e0(int *param_2); undefined4 * __thiscall FUN_101d9710(undefined4 *param_2); int * __thiscall FUN_101da240(int *param_2); undefined4 * __thiscall FUN_101dcfc0(undefined4 *param_2); void __thiscall FUN_101dfd70(int param_2); undefined4 * __thiscall FUN_101e10f0(undefined4 param_2); void __thiscall FUN_101e2250(int param_2); bool __thiscall FUN_101e2c90(int *param_2); int * __thiscall FUN_101e3a80(int *param_2); void __thiscall FUN_101e8480(int param_2,int param_3); int * __thiscall FUN_101ea090(int *param_2); void __thiscall FUN_101ec0c0(int param_2,int param_3,int param_4); void __thiscall FUN_101ec150(int param_2,int param_3,int param_4); undefined4 * __thiscall FUN_101ee590(undefined4 *param_2,int *param_3); void __thiscall FUN_101f31c0(int param_2,int param_3,undefined1 param_4); void __thiscall FUN_101f3520(int *param_2); void __thiscall FUN_101f3630(int *param_2); void __thiscall FUN_101f8630(undefined4 *param_2,undefined4 *param_3,undefined4 param_4); void __thiscall FUN_101f9190(int *param_2); undefined4 * __thiscall FUN_101f9800(int param_2); int __thiscall FUN_101f9920(void); int __thiscall FUN_101fa0a0(int param_2); int __thiscall FUN_101fa190(int param_2); undefined4 * __thiscall FUN_101fab70(byte param_2); undefined4 * __thiscall FUN_101fc490(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5); void __thiscall FUN_101fd7b0(int param_2,int param_3); undefined4 __thiscall FUN_101fdb50(undefined4 param_2,int *param_3); int * __thiscall FUN_101fdc90(int *param_2,undefined4 param_3); int * __thiscall FUN_101fde60(int *param_2,int *param_3); undefined4 * __thiscall FUN_101fef80(undefined4 param_2); int * __thiscall FUN_101ff140(int *param_2); undefined4 * __thiscall FUN_101ff2f0(int param_2,int param_3,int *param_4); int * __thiscall FUN_101ff410(int *param_2); undefined4 * __thiscall FUN_10200f40(int *param_2); int __thiscall FUN_10204c50(int param_2); int __thiscall FUN_10204e40(int *param_2); int * __thiscall FUN_10205660(byte param_2); undefined4 * __thiscall FUN_102057b0(byte param_2); undefined4 * __thiscall FUN_10205b80(byte param_2); int * __thiscall FUN_10206790(byte param_2); int * __thiscall FUN_10206850(int *param_2,uint param_3); undefined4 * __thiscall FUN_10209230(undefined4 *param_2,undefined4 param_3); void __thiscall FUN_1020a450(int *param_2,undefined4 param_3); undefined4 * __thiscall FUN_1020a760(undefined4 *param_2); undefined4 __thiscall FUN_1020b9d0(undefined4 param_2,undefined4 param_3); int __thiscall FUN_1020d260(undefined4 *param_2); undefined4 __thiscall FUN_1020d9f0(undefined4 param_2,undefined4 param_3); int * __thiscall FUN_102161d0(int *param_2); undefined4 * __thiscall FUN_10216ee0(undefined4 *param_2); int __thiscall FUN_10217340(undefined4 *param_2); undefined1 __thiscall FUN_10218810(char *param_2); bool __thiscall FUN_10219ac0(int param_2); undefined4 __thiscall FUN_102207b0(int param_2,undefined4 param_3,undefined4 param_4); int __thiscall FUN_10220860(undefined4 param_2); void __thiscall FUN_10220920(int *param_2); void __thiscall FUN_10221570(int param_2,byte param_3); void __thiscall FUN_10221850(int param_2); void __thiscall FUN_10221970(int param_2); void __thiscall FUN_10221af0(int *param_2); undefined4 * __thiscall FUN_10221be0(int param_2); undefined4 * __thiscall FUN_10221c80(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10221ff0(byte param_2); size_t __thiscall FUN_10222280(uint param_2,void *param_3,size_t param_4); size_t __thiscall FUN_10222350(long param_2,void *param_3,size_t param_4); size_t __thiscall FUN_10222610(void *param_2,size_t param_3); undefined4 * __thiscall FUN_10223d70(int param_2); undefined4 * __thiscall FUN_10223e00(int param_2); undefined4 * __thiscall FUN_10223e90(undefined4 param_2,undefined4 param_3,undefined4 *param_4); undefined4 * __thiscall FUN_10223f30(undefined4 param_2,undefined4 param_3,undefined4 *param_4); undefined4 * __thiscall FUN_10224010(undefined4 *param_2); undefined4 * __thiscall FUN_10224250(int param_2); int __thiscall FUN_102244a0(void); int __thiscall FUN_10224630(void); int __thiscall FUN_10224890(undefined4 param_2); int __thiscall FUN_10224c80(void); void __thiscall FUN_10227ab0(int *param_2,byte *param_3); void __thiscall FUN_10227b30(int *param_2,byte *param_3); undefined4 * __thiscall FUN_102286c0(undefined4 *param_2); undefined4 * __thiscall FUN_10228750(undefined4 *param_2,int param_3); undefined4 * __thiscall FUN_10228810(undefined4 param_2,undefined4 param_3,int param_4); undefined4 * __thiscall FUN_102288b0(undefined4 param_2,undefined4 param_3,int param_4); undefined4 * __thiscall FUN_10228950(undefined4 param_2,undefined4 param_3,int param_4); undefined4 * __thiscall FUN_102289f0(undefined4 param_2,undefined4 param_3,int param_4); undefined4 * __thiscall FUN_10228d60(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_10229600(undefined4 *param_2); undefined4 * __thiscall FUN_102296d0(undefined4 *param_2); undefined4 * __thiscall FUN_102297a0(undefined4 *param_2); int __thiscall FUN_10229c30(int param_2); int __thiscall FUN_10229cb0(int param_2); int __thiscall FUN_10229d30(int param_2); int __thiscall FUN_10229db0(int param_2); int __thiscall FUN_10229e30(int param_2); int __thiscall FUN_10229f20(int param_2); int __thiscall FUN_1022a010(int param_2); int __thiscall FUN_1022a100(int param_2); undefined4 * __thiscall FUN_1022a350(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1022a920(undefined4 param_2); undefined4 * __thiscall FUN_1022b0a0(undefined1 param_2,undefined1 param_3,int *param_4); undefined4 * __thiscall FUN_1022b140(undefined1 param_2,undefined1 param_3,int *param_4); int __thiscall FUN_1022c130(int param_2); int __thiscall FUN_1022c4c0(int param_2); undefined4 * __thiscall FUN_10230460(byte param_2); undefined4 * __thiscall FUN_102304d0(byte param_2); undefined4 * __thiscall FUN_10230540(byte param_2); undefined4 * __thiscall FUN_102305b0(byte param_2); int __thiscall FUN_102307f0(byte param_2); undefined4 * __thiscall FUN_10231490(byte param_2); void __thiscall FUN_10231910(uint param_2,undefined4 param_3); void __thiscall FUN_10231a30(uint param_2,undefined4 param_3); void __thiscall FUN_10231b50(uint param_2,undefined4 param_3); float __thiscall FUN_102324b0(int param_2); float __thiscall FUN_10232560(int param_2); float __thiscall FUN_10232610(int param_2); void __thiscall FUN_102334e0(int param_2); void __thiscall FUN_10233550(int param_2); void __thiscall FUN_102335c0(int param_2); undefined4 * __thiscall FUN_10236630(undefined4 *param_2); undefined4 * __thiscall FUN_10236720(undefined4 *param_2); undefined4 * __thiscall FUN_102367a0(undefined4 *param_2); void __thiscall FUN_10236af0(undefined4 *param_2); undefined4 __thiscall FUN_1023ab60(uint param_2); void __thiscall FUN_102420a0(int *param_2); void __thiscall FUN_10243300(int *param_2); void __thiscall FUN_102433e0(int param_2); void __thiscall FUN_10245260(int *param_2,int *param_3); void __thiscall FUN_102454b0(undefined4 param_2); void __thiscall FUN_10245960(int *param_2,int *param_3); undefined4 * __thiscall FUN_10248790(undefined4 *param_2); undefined4 * __thiscall FUN_102489a0(undefined4 *param_2); void __thiscall FUN_10249580(int *param_2); undefined4 * __thiscall FUN_1024a1c0(undefined4 *param_2); undefined4 * __thiscall FUN_1024e520(int param_2); int __thiscall FUN_1024e640(void); int __thiscall FUN_1024ee50(int param_2); int __thiscall FUN_1024ef40(int param_2); undefined4 * __thiscall FUN_10253a90(int param_2); undefined4 * __thiscall FUN_10253b20(int param_2); undefined4 * __thiscall FUN_10253bb0(int param_2); undefined4 * __thiscall FUN_10253d10(int param_2); int __thiscall FUN_10253ea0(void); int __thiscall FUN_10254030(void); int __thiscall FUN_102541c0(void); int __thiscall FUN_10254590(void); };
using namespace std;
undefined1 * __fastcall FUN_101bb8c0(int param_1);
void __fastcall FUN_101bba70(int param_1);
void __fastcall FUN_101bbb40(int param_1);
undefined4 * FUN_101be780(undefined4 *param_1);
undefined4 * FUN_101be800(undefined4 *param_1);
void __stdcall FUN_101c3fc0(undefined4 *param_1);
void FUN_101c4810(undefined4 param_1,undefined4 *param_2);
void FUN_101c4920(undefined4 param_1,int param_2);
undefined4 * FUN_101c4d30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * FUN_101c4dd0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_101c5000(undefined4 param_1,int *param_2);
void FUN_101c5190(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __fastcall FUN_101c53d0(undefined4 *param_1);
undefined4 * __fastcall FUN_101c5900(undefined4 *param_1);
void __fastcall FUN_101c6730(int *param_1);
void __fastcall FUN_101c6810(int param_1);
void __fastcall FUN_101c6890(int *param_1);
void __fastcall FUN_101c6900(int param_1);
void __fastcall FUN_101c6a20(int *param_1);
void __fastcall FUN_101c6ae0(int *param_1);
void __fastcall FUN_101c72f0(int *param_1);
void __stdcall FUN_101c75f0(undefined4 *param_1);
void FUN_101c82e0(char *param_1);
void __fastcall FUN_101c8c50(float *param_1);
void __fastcall FUN_101c8d30(int *param_1);
void __fastcall FUN_101c8dc0(int *param_1);
undefined4 * __stdcall FUN_101c8e40(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_101c8ee0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __stdcall FUN_101c8f80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * FUN_101ca620(undefined4 *param_1);
undefined4 * FUN_101ca730(undefined4 *param_1);
void FUN_101ce0b0(undefined4 param_1,int param_2);
undefined4 * FUN_101ce290(int param_1);
void __fastcall FUN_101d2510(int *param_1);
void __fastcall FUN_101d2570(int *param_1);
void __fastcall FUN_101d25d0(int *param_1);
void __fastcall FUN_101d2af0(int param_1);
void __fastcall FUN_101d39b0(undefined4 *param_1);
undefined4 * __fastcall FUN_101d60a0(int param_1);
void __fastcall FUN_101d8430(int *param_1);
int * FUN_101da5c0(int *param_1);
undefined4 * FUN_101da860(undefined4 *param_1);
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
undefined4 * FUN_101e90e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * FUN_101e9180(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * FUN_101e9220(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * FUN_101e92c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __fastcall FUN_101eb010(int param_1);
void __fastcall FUN_101eb080(int param_1);
void __fastcall FUN_101eb1b0(int *param_1);
void __fastcall FUN_101ec4a0(int *param_1);
void __fastcall FUN_101ec520(int *param_1);
undefined4 * __stdcall FUN_101ec5a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __stdcall FUN_101ec640(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void * FUN_101ec940(uint param_1);
void * FUN_101ec9b0(uint param_1);
undefined4 FUN_101f0850(undefined4 param_1,undefined4 param_2);
undefined4 FUN_101f0dc0(undefined4 param_1);
int __fastcall FUN_101f34a0(int param_1);
void __fastcall FUN_101f3880(int param_1);
void __fastcall FUN_101f47e0(int *param_1);
int * FUN_101f6450(int *param_1);
undefined4 * FUN_101f9a80(int param_1);
void __fastcall FUN_101fa7e0(undefined4 *param_1);
undefined4 * __fastcall FUN_101fae20(int param_1);
int * FUN_101fb480(int *param_1);
int * FUN_101fd960(int *param_1,int *param_2,int *param_3);
void FUN_101fda20(int *param_1,int *param_2);
void FUN_101fdd20(undefined4 param_1,int param_2);
int * FUN_101fdfe0(int *param_1,int *param_2,int *param_3,undefined4 param_4);
void FUN_101fe3a0(undefined4 param_1,int *param_2);
void FUN_101fe440(undefined4 param_1,int *param_2);
undefined4 * __fastcall FUN_101ff8b0(undefined4 *param_1);
void __fastcall FUN_102025c0(int *param_1);
void __fastcall FUN_10202620(int *param_1);
void __fastcall FUN_10202aa0(int param_1);
void __fastcall FUN_10202bd0(int *param_1);
void __fastcall FUN_10202ca0(int *param_1);
void __fastcall FUN_10202d40(undefined4 *param_1);
void __fastcall FUN_10202e00(int *param_1);
void __fastcall FUN_10203d60(undefined4 *param_1);
void __fastcall FUN_10207220(int *param_1);
void * FUN_10207b10(uint param_1);
uint __fastcall FUN_10208940(int param_1);
void __fastcall FUN_1020a4c0(undefined4 param_1);
int * __stdcall FUN_10217430(int *param_1);
void __fastcall FUN_10217740(int *param_1);
undefined1 __fastcall FUN_102177e0(int param_1);
void __fastcall FUN_10217af0(int *param_1);
undefined4 *** FUN_10218f20(undefined4 param_1,undefined4 *param_2,undefined4 param_3);
undefined1 FUN_102194a0(int param_1);
undefined4 __fastcall FUN_10219ef0(int param_1);
undefined1 __fastcall FUN_1021acc0(int *param_1);
void FUN_1021b310(undefined4 param_1,int param_2);
void __fastcall FUN_1021d2a0(int param_1);
void __stdcall FUN_1021db00(int param_1);
void __stdcall FUN_1021dcd0(int param_1);
void FUN_1021e2d0(int param_1);
void __stdcall FUN_1021e370(int param_1);
undefined4 __fastcall FUN_1021f6a0(int param_1);
undefined4 FUN_1021f768(void);
undefined4 __stdcall FUN_10220510(undefined4 param_1,undefined4 param_2,char *param_3);
void __stdcall FUN_102209a0(int param_1);
undefined1 __fastcall FUN_10220d70(int param_1);
undefined1 __fastcall FUN_10220fc0(int param_1);
void __fastcall FUN_10221700(int param_1);
undefined4 * FUN_10222090(undefined4 *param_1);
void FUN_102260c0(undefined4 param_1,undefined4 *param_2);
undefined4 * FUN_102263b0(int param_1);
undefined4 * FUN_102264d0(int param_1);
undefined4 * FUN_102265f0(undefined4 *param_1);
undefined4 * FUN_10226730(int param_1);
void FUN_10227930(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_102279b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_10227a30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __fastcall FUN_1022a280(undefined4 *param_1);
undefined4 * __fastcall FUN_1022a440(undefined4 *param_1);
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
void __fastcall FUN_1022d390(int *param_1);
void __fastcall FUN_1022d6c0(int param_1);
void __fastcall FUN_1022d740(int param_1);
void __fastcall FUN_1022d7c0(int param_1);
void __fastcall FUN_1022d870(int *param_1);
void __fastcall FUN_1022d8e0(int *param_1);
void __fastcall FUN_1022d950(int *param_1);
void __fastcall FUN_1022d9c0(int param_1);
void __fastcall FUN_1022df10(int *param_1);
void __fastcall FUN_1022e0e0(int *param_1);
void __fastcall FUN_1022ee20(undefined4 *param_1);
undefined4 * __fastcall FUN_10231f10(int param_1);
undefined4 * __fastcall FUN_10231fb0(int param_1);
undefined4 * __fastcall FUN_102320a0(int param_1);
undefined4 * __fastcall FUN_102321d0(int param_1);
void __fastcall FUN_102337c0(float *param_1);
void __fastcall FUN_10233870(float *param_1);
void __fastcall FUN_10233920(float *param_1);
void __fastcall FUN_10233fc0(int *param_1);
void __fastcall FUN_10234030(int *param_1);
void __fastcall FUN_102340a0(int *param_1);
void __fastcall FUN_102360e0(int *param_1);
undefined4 * __stdcall FUN_10237370(undefined4 *param_1);
undefined4 * __stdcall FUN_10237460(undefined4 *param_1);
undefined4 * __stdcall FUN_10237550(undefined4 *param_1);
undefined4 * __stdcall FUN_10237640(undefined4 *param_1);
undefined4 * __stdcall FUN_10237730(undefined4 *param_1);
undefined4 * __stdcall FUN_10237b20(undefined4 *param_1);
undefined4 * __stdcall FUN_10237ea0(undefined4 *param_1);
undefined4 * __stdcall FUN_10238060(undefined4 *param_1);
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
undefined1 FUN_1023bfe0(int *param_1,undefined4 *param_2);
undefined4 FUN_1023c100(undefined4 *param_1,undefined4 *param_2);
undefined4 FUN_1023d290(void);
void __fastcall FUN_1023d350(int param_1);
void __stdcall FUN_1023ea50(undefined4 param_1,int *param_2);
undefined4 FUN_10240090(void);
undefined1 FUN_10240ec0(void);
void __fastcall FUN_10241ce0(int param_1);
void __fastcall FUN_10241da0(int param_1);
void __fastcall FUN_10242250(int param_1);
undefined1 FUN_10242750(void);
void __fastcall FUN_10243520(int param_1);
void __fastcall FUN_102435c0(int param_1);
void __fastcall FUN_10245190(int param_1);
void __fastcall FUN_10247030(int *param_1);
void __fastcall FUN_10247e10(int *param_1);
void * FUN_10248280(uint param_1);
void * FUN_10248300(uint param_1);
undefined4 * FUN_10248380(undefined4 *param_1);
undefined4 * FUN_10248480(undefined4 *param_1);
void __fastcall FUN_102492f0(int param_1);
void __stdcall FUN_102494d0(int param_1);
void __fastcall FUN_10249720(int param_1);
void __fastcall FUN_1024aa40(int param_1);
void __fastcall FUN_1024b210(int param_1);
void __fastcall FUN_1024bdc0(int param_1);
void __fastcall FUN_1024be70(int param_1);
undefined4 * FUN_1024e7e0(int param_1);
undefined4 * __fastcall FUN_1024fca0(int param_1);
undefined4 * FUN_102518f0(undefined4 *param_1);
void __fastcall FUN_102535a0(int param_1);
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
    piVar1[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCStringArray);
    piVar1[2] = (int)(0);
    piVar1[3] = (int)(0);
    piVar1[4] = (int)(0);
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


// Reference entry 101c3740; body size 152 bytes.
#line 1 "ENTRY_101c3740"

undefined4 * __thiscall Recovered_Bulk::FUN_101c3740(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int iVar1;
  uint uVar2;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)(param_2);

  param_1[1] = (undefined4)(0);
  pvVar3 = (void *)(operator_new(0x18));
  param_1[1] = (undefined4)(pvVar3);
  iVar1 = (int)(*(int *)*param_4);
  *(int *)((int)pvVar3 + 8) = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }
  *(undefined4 *)((int)pvVar3 + 0xc) = 0;
  *(undefined4 *)((int)pvVar3 + 0x10) = 0;
  *(undefined4 *)((int)pvVar3 + 0x14) = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
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
  local_1c[0] = (uint)(local_1c[0] & 0xffffff00);
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

  *(undefined4 *)param_2[1] = (undefined4)(0);
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


// Reference entry 101c4d30; body size 124 bytes.
#line 1 "ENTRY_101c4d30"

undefined4 * FUN_101c4d30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 101c4dd0; body size 124 bytes.
#line 1 "ENTRY_101c4dd0"

undefined4 * FUN_101c4dd0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 101c53d0; body size 161 bytes.
#line 1 "ENTRY_101c53d0"

undefined4 * __fastcall FUN_101c53d0(undefined4 *param_1)

{
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[1] = (undefined4)(pvVar1);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);

  param_1[6] = (undefined4)(7);
  param_1[7] = (undefined4)(8);
  *param_1 = (undefined4)(0x3f800000);
  thunk_FUN_101c8410(0x10,param_1[1]);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101c56c0; body size 164 bytes.
#line 1 "ENTRY_101c56c0"

undefined4 * __thiscall Recovered_Bulk::FUN_101c56c0(undefined4 *param_2)
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
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[1] = (undefined4)(pvVar1);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);

  param_1[6] = (undefined4)(7);
  param_1[7] = (undefined4)(8);
  *param_1 = (undefined4)(0x3f800000);
  thunk_FUN_101c8410(0x10,param_1[1]);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101c5900; body size 161 bytes.
#line 1 "ENTRY_101c5900"

undefined4 * __fastcall FUN_101c5900(undefined4 *param_1)

{
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[1] = (undefined4)(pvVar1);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);

  param_1[6] = (undefined4)(7);
  param_1[7] = (undefined4)(8);
  *param_1 = (undefined4)(0x3f800000);
  thunk_FUN_101c8410(0x10,param_1[1]);

  return (undefined4 *)(param_1);

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
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
  }
  return;
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
  local_1c[0] = (uint)(local_1c[0] & 0xffffff00);
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
  local_1c[0] = (uint)(local_1c[0] & 0xffffff00);
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


// Reference entry 101c8410; body size 228 bytes.
#line 1 "ENTRY_101c8410"

void __thiscall Recovered_Bulk::FUN_101c8410(uint param_2,undefined4 param_3)
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
    thunk_FUN_101c5190(*param_1,param_1[1],&param_3);
    return;
  }
  if (0x3fffffff < param_2) {
LAB_101c84ef:
                    
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
    if (uVar7 + 0x23 <= uVar7) goto LAB_101c84ef;
    pvVar3 = (void *)(operator_new(uVar7 + 0x23));
    if (pvVar3 == (void *)0x0) goto LAB_101c84d4;
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
LAB_101c84d4:
                    
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
  param_1[1] = (int)(param_2 + param_3 * 8);
  param_1[2] = (int)(param_2 + param_4 * 8);
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
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
  }
  return;
}


// Reference entry 101c8e40; body size 123 bytes.
#line 1 "ENTRY_101c8e40"

undefined4 * __stdcall FUN_101c8e40(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 101c8ee0; body size 121 bytes.
#line 1 "ENTRY_101c8ee0"

void FUN_101c8ee0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 101c8f80; body size 121 bytes.
#line 1 "ENTRY_101c8f80"

void __stdcall FUN_101c8f80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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
    piVar2[1] = (int)(0);
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
    puVar3[1] = (undefined4)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    puVar3[2] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
    puVar3[3] = (undefined4)(0);
    puVar3[4] = (undefined4)(0);
    *puVar3 = (undefined4)((uint)&ghidra_vftable_SCFetchTokenOpActionWrapper);
    puVar3[2] = (undefined4)((uint)&ghidra_vftable_SCFetchTokenOpActionWrapper);
    puVar3[5] = (undefined4)(0);
    puVar3[6] = (undefined4)(0);
    puVar3[7] = (undefined4)(0);
    puVar3[8] = (undefined4)(0);
    puVar3[9] = (undefined4)(uVar2);
    puVar3[10] = (undefined4)(uVar1);
    *(undefined1 *)(puVar3 + 0xb) = 0;
  }
  pSVar4 = (SCIAction *)(param_2);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  ((SCLibrary *)(this_))->createActionContextForAction(pSVar4);
  return (SCIAction *)(param_2);
}


// Reference entry 101cc3c0; body size 154 bytes.
#line 1 "ENTRY_101cc3c0"

undefined4 * __thiscall Recovered_Bulk::FUN_101cc3c0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
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


// Reference entry 101cc4c0; body size 116 bytes.
#line 1 "ENTRY_101cc4c0"

undefined4 * __thiscall Recovered_Bulk::FUN_101cc4c0(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)(param_2);

  param_1[1] = (undefined4)(0);
  pvVar3 = (void *)(operator_new(0x10));
  param_1[1] = (undefined4)(pvVar3);
  *(undefined4 *)((int)pvVar3 + 8) = *param_3;
  piVar1 = (int *)((int *)param_3[1]);
  *(int **)((int)pvVar3 + 0xc) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
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
  param_1[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = (undefined4)(uVar2);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101cc730; body size 209 bytes.
#line 1 "ENTRY_101cc730"

int __thiscall Recovered_Bulk::FUN_101cc730(void)
{
  int param_1 = (int )this;
 try {
  void *pvVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *in_stack_00000028;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (in_stack_00000028 == (int *)0x0) {

    return (int)(param_1);
  }
  puVar3 = (undefined4 *)(operator_new(0x30));
  *puVar3 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar3[0xb] = (undefined4)(0);
  if (in_stack_00000028 != (int *)0x0) {
    if (in_stack_00000028 == (int *)&stack0x00000004) {
      uVar4 = (undefined4)((**(code **)(*in_stack_00000028 + 4))(puVar3 + 2,uVar2));
      puVar3[0xb] = (undefined4)(uVar4);
      if (in_stack_00000028 == (int *)0x0) goto LAB_101cc7d1;
      (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004);
    }
    else {
      puVar3[0xb] = (undefined4)(in_stack_00000028);
    }
    in_stack_00000028 = (int *)((int *)0x0);
  }
LAB_101cc7d1:
  *(undefined4 **)(param_1 + 0x24) = puVar3;
  if (in_stack_00000028 != (int *)0x0) {
    (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004);
  }

  return (int)(param_1);

 } catch (...) { }
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
        param_1[1] = (undefined4)(uVar2);
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
  puVar2[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = (undefined4)(uVar3);
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

  piVar3[4] = (int)(*param_3);
  thunk_FUN_103d6a60(0);
  *piVar3 = (int)((int)puVar1);
  piVar3[1] = (int)((int)puVar1);
  piVar3[2] = (int)((int)puVar1);
  *(undefined2 *)(piVar3 + 3) = 0;
  uVar4 = (undefined4)(thunk_FUN_101d6b80(puVar6,bVar7,piVar3));
  *param_2 = (undefined4)(uVar4);
  *(undefined1 *)(param_2 + 1) = 1;

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 101d00c0; body size 93 bytes.
#line 1 "ENTRY_101d00c0"

undefined4 * __thiscall Recovered_Bulk::FUN_101d00c0(undefined4 param_2)
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

    piVar3[4] = (int)(*param_2);
    thunk_FUN_103d6a60(0);
    *piVar3 = (int)((int)puVar1);
    piVar3[1] = (int)((int)puVar1);
    piVar3[2] = (int)((int)puVar1);
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
  puVar2[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x2c))(puVar2 + 2,uVar1));
    puVar2[0xb] = (undefined4)(uVar3);
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
  param_1[1] = (int)(0);
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
      piVar2[1] = (int)(0);
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      *piVar2 = (int)((int)(uint)&ghidra_vftable_SCActionDelegateProxy);
      piVar2[2] = (int)(param_1);
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
  param_2[1] = (int)(0);
  if (piVar2 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
    param_2[1] = (int)((int)piVar2);
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
      piVar2[1] = (int)(0);
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      *piVar2 = (int)((int)(uint)&ghidra_vftable_SCOpCBProxy);
      piVar2[2] = (int)(param_1);
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
  param_2[1] = (int)(0);
  if (piVar2 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
    param_2[1] = (int)((int)piVar2);
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


// Reference entry 101da860; body size 123 bytes.
#line 1 "ENTRY_101da860"

undefined4 * FUN_101da860(undefined4 *param_1)

{
 try {
  int iVar1;
  int *piVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar2 = (int *)((int *)thunk_FUN_101da4a0(&local_14,DAT_12126b84 ));
  iVar1 = (int)(*piVar2);

  *param_1 = (undefined4)(*(undefined4 *)(iVar1 + 0xdc));
  piVar2 = (int *)(*(int **)(iVar1 + 0xe0));
  param_1[1] = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  return (undefined4 *)(param_1);

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
  param_2[1] = (undefined4)(0);
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
      param_2[1] = (undefined4)(param_1[1]);
    }
  }
  return (undefined4 *)(param_2);
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


// Reference entry 101e10f0; body size 93 bytes.
#line 1 "ENTRY_101e10f0"

undefined4 * __thiscall Recovered_Bulk::FUN_101e10f0(undefined4 param_2)
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
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);

  thunk_FUN_101e76a0(&DAT_1186d2ee);

  return (undefined4 *)(param_1);

 } catch (...) { }
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
    param_1[1] = (int)(iVar2);
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
      param_1[1] = (int)(0);
      param_1[2] = (int)(0);
    }
    iVar3 = (int)(thunk_FUN_101ec9b0(uVar5));
    *param_1 = (int)(iVar3);
    uVar1 = (uint)(0);
    param_1[1] = (int)(iVar3);
    param_1[2] = (int)(iVar3 + uVar5 * 8);
  }
  iVar2 = (int)(param_2 + uVar1 * 8);
  thunk_FUN_101e85f0(param_2,iVar2,iVar3);
  iVar3 = (int)(thunk_FUN_101e9180(iVar2,param_3,param_1[1],param_1));
  param_1[1] = (int)(iVar3);
  return;
}


// Reference entry 101e90e0; body size 124 bytes.
#line 1 "ENTRY_101e90e0"

undefined4 * FUN_101e90e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 101e9180; body size 124 bytes.
#line 1 "ENTRY_101e9180"

undefined4 * FUN_101e9180(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 101e9220; body size 124 bytes.
#line 1 "ENTRY_101e9220"

undefined4 * FUN_101e9220(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 101e92c0; body size 124 bytes.
#line 1 "ENTRY_101e92c0"

undefined4 * FUN_101e92c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  iVar4 = (int)(*param_2);
  iVar1 = (int)(param_2[1]);
  if (iVar4 != iVar1) {
    iVar5 = (int)(iVar1 - iVar4 >> 3);
    iVar3 = (int)(thunk_FUN_101ec940(iVar5));
    *param_1 = (int)(iVar3);
    param_1[1] = (int)(iVar3);
    param_1[2] = (int)(iVar3 + iVar5 * 8);

    iVar4 = (int)(thunk_FUN_101e90e0(iVar4,iVar1,iVar3,param_1,uVar2));
    param_1[1] = (int)(iVar4);
  }

  return (int *)(param_1);

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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
  }
  return;
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
  param_1[1] = (int)(param_2 + param_3 * 8);
  param_1[2] = (int)(param_2 + param_4 * 8);
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
  param_1[1] = (int)(param_2 + param_3 * 8);
  param_1[2] = (int)(param_2 + param_4 * 8);
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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
  }
  return;
}


// Reference entry 101ec5a0; body size 123 bytes.
#line 1 "ENTRY_101ec5a0"

undefined4 * __stdcall FUN_101ec5a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 101ec640; body size 123 bytes.
#line 1 "ENTRY_101ec640"

undefined4 * __stdcall FUN_101ec640(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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
    piVar2[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar2[2] = (int)(param_2);
    piVar2[3] = (int)(param_3);
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
  param_1[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = (undefined4)(uVar2);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101f9920; body size 209 bytes.
#line 1 "ENTRY_101f9920"

int __thiscall Recovered_Bulk::FUN_101f9920(void)
{
  int param_1 = (int )this;
 try {
  void *pvVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *in_stack_00000028;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (in_stack_00000028 == (int *)0x0) {

    return (int)(param_1);
  }
  puVar3 = (undefined4 *)(operator_new(0x30));
  *puVar3 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar3[0xb] = (undefined4)(0);
  if (in_stack_00000028 != (int *)0x0) {
    if (in_stack_00000028 == (int *)&stack0x00000004) {
      uVar4 = (undefined4)((**(code **)(*in_stack_00000028 + 4))(puVar3 + 2,uVar2));
      puVar3[0xb] = (undefined4)(uVar4);
      if (in_stack_00000028 == (int *)0x0) goto LAB_101f99c1;
      (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004);
    }
    else {
      puVar3[0xb] = (undefined4)(in_stack_00000028);
    }
    in_stack_00000028 = (int *)((int *)0x0);
  }
LAB_101f99c1:
  *(undefined4 **)(param_1 + 0x24) = puVar3;
  if (in_stack_00000028 != (int *)0x0) {
    (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004);
  }

  return (int)(param_1);

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
  puVar2[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = (undefined4)(uVar3);
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
      }
    }
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
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
  puVar2[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x2c))(puVar2 + 2,uVar1));
    puVar2[0xb] = (undefined4)(uVar3);
  }

  return (undefined4 *)(puVar2);

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


// Reference entry 101fc490; body size 179 bytes.
#line 1 "ENTRY_101fc490"

undefined4 * __thiscall Recovered_Bulk::FUN_101fc490(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int iVar1;
  uint uVar2;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)(param_2);

  param_1[1] = (undefined4)(0);
  pvVar3 = (void *)(operator_new(0x18));
  param_1[1] = (undefined4)(pvVar3);

  iVar1 = (int)(*(int *)*param_5);
  *(int *)((int)pvVar3 + 0x10) = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }
  *(undefined4 *)((int)pvVar3 + 0x14) = 0;
  *(undefined4 *)param_1[1] = (undefined4)(param_3);
  *(undefined4 *)(param_1[1] + 4) = param_3;
  *(undefined4 *)(param_1[1] + 8) = param_3;
  *(undefined1 *)(param_1[1] + 0xc) = 0;
  *(undefined1 *)(param_1[1] + 0xd) = 0;

  return (undefined4 *)(param_1);

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
    param_1[1] = (int)(iVar2);
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
      param_1[1] = (int)(0);
      param_1[2] = (int)(0);
    }
    iVar3 = (int)(thunk_FUN_10207b10(uVar5));
    *param_1 = (int)(iVar3);
    uVar1 = (uint)(0);
    param_1[1] = (int)(iVar3);
    param_1[2] = (int)(iVar3 + uVar5 * 4);
  }
  iVar2 = (int)(param_2 + uVar1 * 4);
  thunk_FUN_101fd960(param_2,iVar2,iVar3);
  iVar3 = (int)(thunk_FUN_101fdfe0(iVar2,param_3,param_1[1],param_1));
  param_1[1] = (int)(iVar3);
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
  param_2[1] = (int)(0);
  param_2[2] = (int)(iVar1);
  while (cVar2 == '\0') {
    *param_2 = (int)((int)puVar3);
    cVar2 = (char)(thunk_FUN_111a0940(param_3));
    if (cVar2 == '\0') {
      param_2[2] = (int)((int)puVar3);
      puVar3 = (undefined4 *)((undefined4 *)*puVar3);
    }
    else {
      puVar3 = (undefined4 *)((undefined4 *)puVar3[2]);
    }
    param_2[1] = (int)((uint)(cVar2 == '\0'));
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

    puVar4[4] = (undefined4)(iVar5);
    local_14 = (undefined4 *)(puVar4);
    if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
    }
    puVar4[5] = (undefined4)(0);
    *puVar4 = (undefined4)(uVar1);
    puVar4[1] = (undefined4)(uVar1);
    puVar4[2] = (undefined4)(uVar1);
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


// Reference entry 101fef80; body size 93 bytes.
#line 1 "ENTRY_101fef80"

undefined4 * __thiscall Recovered_Bulk::FUN_101fef80(undefined4 param_2)
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
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  iVar4 = (int)(*param_2);
  iVar1 = (int)(param_2[1]);
  if (iVar4 != iVar1) {
    iVar5 = (int)(iVar1 - iVar4 >> 2);
    iVar3 = (int)(thunk_FUN_10207b10(iVar5));
    *param_1 = (int)(iVar3);
    param_1[1] = (int)(iVar3);
    param_1[2] = (int)(iVar3 + iVar5 * 4);

    iVar4 = (int)(thunk_FUN_101fdfe0(iVar4,iVar1,iVar3,param_1,uVar2));
    param_1[1] = (int)(iVar4);
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
  param_1[0x28] = (undefined4)(iVar1);
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

  param_1[1] = (int)(iVar5);
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10),uVar3);
  }
  iVar5 = (int)(param_2[2]);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  param_1[2] = (int)(iVar5);
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10),uVar3);
  }
  iVar5 = (int)(param_2[3]);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  param_1[3] = (int)(iVar5);
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10),uVar3);
  }
  iVar5 = (int)(param_2[4]);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  param_1[4] = (int)(iVar5);
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10),uVar3);
  }
  iVar5 = (int)(param_2[5]);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  param_1[5] = (int)(iVar5);
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
  }
  iVar5 = (int)(param_2[6]);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  param_1[6] = (int)(iVar5);
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
  }
  iVar5 = (int)(param_2[7]);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  param_1[7] = (int)(iVar5);
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
  }
  iVar5 = (int)(param_2[8]);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  param_1[8] = (int)(iVar5);
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
  }
  iVar5 = (int)(param_2[9]);
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  param_1[9] = (int)(iVar5);
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
  }
  iVar5 = (int)(param_2[10]);
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  param_1[10] = (int)(iVar5);
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
  }
  iVar5 = (int)(param_2[0xb]);
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  param_1[0xb] = (int)(iVar5);
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
  }
  iVar5 = (int)(param_2[0xc]);
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  param_1[0xc] = (int)(iVar5);
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
  }
  iVar5 = (int)(param_2[0xd]);
  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  param_1[0xd] = (int)(iVar5);
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
  }
  iVar5 = (int)(param_2[0xe]);
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  param_1[0xe] = (int)(iVar5);
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
  }
  iVar5 = (int)(param_2[0xf]);
  *(unsigned char *)((char *)&local_8 + 0) = 0xe;
  param_1[0xf] = (int)(iVar5);
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
  }
  iVar5 = (int)(param_2[0x10]);
  *(unsigned char *)((char *)&local_8 + 0) = 0xf;
  param_1[0x10] = (int)(iVar5);
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
  }
  iVar5 = (int)(param_2[0x11]);
  *(unsigned char *)((char *)&local_8 + 0) = 0x10;
  param_1[0x11] = (int)(iVar5);
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
  }
  iVar5 = (int)(param_2[0x12]);
  *(unsigned char *)((char *)&local_8 + 0) = 0x11;
  param_1[0x12] = (int)(iVar5);
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
  }
  iVar5 = (int)(param_2[0x13]);
  *(unsigned char *)((char *)&local_8 + 0) = 0x12;
  param_1[0x13] = (int)(iVar5);
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
  }
  iVar5 = (int)(param_2[0x14]);
  *(unsigned char *)((char *)&local_8 + 0) = 0x13;
  param_1[0x14] = (int)(iVar5);
  if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
  }
  *(char *)(param_1 + 0x15) = (char)param_2[0x15];
  param_1[0x16] = (int)(param_2[0x16]);
  param_1[0x17] = (int)(param_2[0x17]);
  param_1[0x18] = (int)(0);
  param_1[0x19] = (int)(0);
  param_1[0x1a] = (int)(0);
  iVar5 = (int)(param_2[0x18]);
  iVar2 = (int)(param_2[0x19]);
  *(unsigned char *)((char *)&local_8 + 0) = 0x14;
  if (iVar5 != iVar2) {
    iVar6 = (int)(iVar2 - iVar5 >> 2);
    iVar4 = (int)(thunk_FUN_10207b10(iVar6));
    piVar1 = (int *)(param_1 + 0x18);
    *piVar1 = (int)(iVar4);
    param_1[0x19] = (int)(iVar4);
    param_1[0x1a] = (int)(iVar4 + iVar6 * 4);
    *(unsigned char *)((char *)&local_8 + 0) = 0x15;
    iVar5 = (int)(thunk_FUN_101fdfe0(iVar5,iVar2,*piVar1,piVar1));
    param_1[0x19] = (int)(iVar5);
  }
  param_1[0x1b] = (int)(param_2[0x1b]);
  param_1[0x1c] = (int)(param_2[0x1c]);
  *(char *)(param_1 + 0x1d) = (char)param_2[0x1d];
  param_1[0x1e] = (int)(param_2[0x1e]);
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
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[9] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[0xc] = (undefined4)(0);
  param_1[0xd] = (undefined4)(0);
  param_1[0xe] = (undefined4)(0);
  param_1[0xf] = (undefined4)(0);
  param_1[0x10] = (undefined4)(0);
  param_1[0x11] = (undefined4)(0);
  param_1[0x12] = (undefined4)(0);
  param_1[0x13] = (undefined4)(0);
  param_1[0x14] = (undefined4)(0);
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x16] = (undefined4)(0);
  param_1[0x17] = (undefined4)(0);
  param_1[0x18] = (undefined4)(0);
  param_1[0x19] = (undefined4)(0);
  param_1[0x1a] = (undefined4)(0);

  param_1[0x1b] = (undefined4)(0);
  param_1[0x1c] = (undefined4)(0);
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = (undefined4)(0);
  thunk_FUN_1124d770(uVar1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10200f40; body size 161 bytes.
#line 1 "ENTRY_10200f40"

undefined4 * __thiscall Recovered_Bulk::FUN_10200f40(int *param_2)
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCompoundAction);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCCompoundAction);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);

  param_1[5] = (undefined4)(param_2);
  param_1[6] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))(uVar1));
    param_1[6] = (undefined4)(piVar2);
    (**(code **)(*piVar2 + 4))();
  }
  *(undefined1 *)(param_1 + 7) = 0;

  return (undefined4 *)(param_1);

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


// Reference entry 10203d60; body size 69 bytes.
#line 1 "ENTRY_10203d60"

void __fastcall FUN_10203d60(undefined4 *param_1)

{
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

  puVar5[4] = (undefined4)(iVar2);
  local_14 = (undefined4 *)(puVar5);
  if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar2 + -0x10));
  }
  puVar5[5] = (undefined4)(0);
  *puVar5 = (undefined4)(uVar1);
  puVar5[1] = (undefined4)(uVar1);
  puVar5[2] = (undefined4)(uVar1);
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


// Reference entry 10205b80; body size 95 bytes.
#line 1 "ENTRY_10205b80"

undefined4 * __thiscall Recovered_Bulk::FUN_10205b80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[0x46] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseItem);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseItem);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseItem);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseItem);
  param_1[0xf] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseItem);
  param_1[0x10] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseItem);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseItem);
  thunk_FUN_110a9ef0();
  thunk_FUN_10203dc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x120);
  }
  return (undefined4 *)(param_1);
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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
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
        pcVar2[-0xffffffff00000008] = (char)('\0');
        pcVar2[-0xffffffff00000007] = (char)('\0');
        pcVar2[-0xffffffff00000006] = (char)('\0');
        pcVar2[-0xffffffff00000005] = (char)('\0');
        pcVar2[-0xffffffff0000000c] = (char)('\0');
        pcVar2[-0xffffffff0000000b] = (char)('\0');
        pcVar2[-0xffffffff0000000a] = (char)('\0');
        pcVar2[-0xffffffff00000009] = (char)('\0');
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
      param_3[-0xffffffff00000008] = (char)('\0');
      param_3[-0xffffffff00000007] = (char)('\0');
      param_3[-0xffffffff00000006] = (char)('\0');
      param_3[-0xffffffff00000005] = (char)('\0');
      param_3[-0xffffffff0000000c] = (char)('\0');
      param_3[-0xffffffff0000000b] = (char)('\0');
      param_3[-0xffffffff0000000a] = (char)('\0');
      param_3[-0xffffffff00000009] = (char)('\0');
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
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCData);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);

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
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCData);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
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
    piVar1[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCData);
    piVar1[2] = (int)(0);
    piVar1[3] = (int)(0);
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
  param_1[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = (undefined4)(uVar2);
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
  param_1[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = (undefined4)(uVar2);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10223e90; body size 118 bytes.
#line 1 "ENTRY_10223e90"

undefined4 * __thiscall Recovered_Bulk::FUN_10223e90(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)(param_2);

  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14));
  param_1[1] = (undefined4)(pvVar1);
  *(undefined4 *)((int)pvVar1 + 8) = *(undefined4 *)*param_4;
  *(undefined8 *)((int)pvVar1 + 0xc) = 0;
  *(undefined4 *)((int)pvVar1 + 0x10) = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10223f30; body size 110 bytes.
#line 1 "ENTRY_10223f30"

undefined4 * __thiscall Recovered_Bulk::FUN_10223f30(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)(param_2);

  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x10));
  param_1[1] = (undefined4)(pvVar1);
  *(undefined4 *)((int)pvVar1 + 8) = *(undefined4 *)*param_4;
  *(undefined4 *)((int)pvVar1 + 0xc) = 0;

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
  param_1[2] = (undefined4)(*param_2);
  param_1[0xd] = (undefined4)(0);

  if ((undefined4 *)param_2[0xb] != (undefined4 *)0x0) {
    uVar2 = (undefined4)((*(code *)**(undefined4 **)param_2[0xb])(param_1 + 4,uVar1));
    param_1[0xd] = (undefined4)(uVar2);
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
  param_1[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = (undefined4)(uVar2);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102244a0; body size 203 bytes.
#line 1 "ENTRY_102244a0"

int __thiscall Recovered_Bulk::FUN_102244a0(void)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *in_stack_00000028;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = (undefined4)(0);
  if (in_stack_00000028 != (int *)0x0) {
    if (in_stack_00000028 == (int *)&stack0x00000004) {
      uVar3 = (undefined4)((**(code **)(*in_stack_00000028 + 4))(puVar2 + 2,uVar1));
      puVar2[0xb] = (undefined4)(uVar3);
      if (in_stack_00000028 == (int *)0x0) goto LAB_1022453b;
      (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004);
    }
    else {
      puVar2[0xb] = (undefined4)(in_stack_00000028);
    }
    in_stack_00000028 = (int *)((int *)0x0);
  }
LAB_1022453b:
  *(undefined4 **)(param_1 + 0x24) = puVar2;
  if (in_stack_00000028 != (int *)0x0) {
    (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10224630; body size 203 bytes.
#line 1 "ENTRY_10224630"

int __thiscall Recovered_Bulk::FUN_10224630(void)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *in_stack_00000028;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = (undefined4)(0);
  if (in_stack_00000028 != (int *)0x0) {
    if (in_stack_00000028 == (int *)&stack0x00000004) {
      uVar3 = (undefined4)((**(code **)(*in_stack_00000028 + 4))(puVar2 + 2,uVar1));
      puVar2[0xb] = (undefined4)(uVar3);
      if (in_stack_00000028 == (int *)0x0) goto LAB_102246cb;
      (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004);
    }
    else {
      puVar2[0xb] = (undefined4)(in_stack_00000028);
    }
    in_stack_00000028 = (int *)((int *)0x0);
  }
LAB_102246cb:
  *(undefined4 **)(param_1 + 0x24) = puVar2;
  if (in_stack_00000028 != (int *)0x0) {
    (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10224890; body size 209 bytes.
#line 1 "ENTRY_10224890"

int __thiscall Recovered_Bulk::FUN_10224890(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *in_stack_00000030;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  puVar2 = (undefined4 *)(operator_new(0x38));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[2] = (undefined4)(param_2);
  puVar2[0xd] = (undefined4)(0);
  if (in_stack_00000030 != (int *)0x0) {
    if (in_stack_00000030 == (int *)&stack0x0000000c) {
      uVar3 = (undefined4)((**(code **)(*in_stack_00000030 + 4))(puVar2 + 4,uVar1));
      puVar2[0xd] = (undefined4)(uVar3);
      if (in_stack_00000030 == (int *)0x0) goto LAB_10224931;
      (**(code **)(*in_stack_00000030 + 0x10))(in_stack_00000030 != (int *)&stack0x0000000c);
    }
    else {
      puVar2[0xd] = (undefined4)(in_stack_00000030);
    }
    in_stack_00000030 = (int *)((int *)0x0);
  }
LAB_10224931:
  *(undefined4 **)(param_1 + 0x24) = puVar2;
  if (in_stack_00000030 != (int *)0x0) {
    (**(code **)(*in_stack_00000030 + 0x10))(in_stack_00000030 != (int *)&stack0x0000000c);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10224c80; body size 209 bytes.
#line 1 "ENTRY_10224c80"

int __thiscall Recovered_Bulk::FUN_10224c80(void)
{
  int param_1 = (int )this;
 try {
  void *pvVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *in_stack_00000028;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (in_stack_00000028 == (int *)0x0) {

    return (int)(param_1);
  }
  puVar3 = (undefined4 *)(operator_new(0x30));
  *puVar3 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar3[0xb] = (undefined4)(0);
  if (in_stack_00000028 != (int *)0x0) {
    if (in_stack_00000028 == (int *)&stack0x00000004) {
      uVar4 = (undefined4)((**(code **)(*in_stack_00000028 + 4))(puVar3 + 2,uVar2));
      puVar3[0xb] = (undefined4)(uVar4);
      if (in_stack_00000028 == (int *)0x0) goto LAB_10224d21;
      (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004);
    }
    else {
      puVar3[0xb] = (undefined4)(in_stack_00000028);
    }
    in_stack_00000028 = (int *)((int *)0x0);
  }
LAB_10224d21:
  *(undefined4 **)(param_1 + 0x24) = puVar3;
  if (in_stack_00000028 != (int *)0x0) {
    (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004);
  }

  return (int)(param_1);

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
  
  *(undefined4 *)param_2[1] = (undefined4)(0);
  puVar4 = (undefined4 *)((undefined4 *)*param_2);
  while (puVar4 != (undefined4 *)0x0) {
    piVar1 = (int *)((int *)puVar4[4]);
    puVar2 = (undefined4 *)((undefined4 *)*puVar4);
    if (piVar1 != (int *)0x0) {
      LOCK();
      iVar3 = (int)(piVar1[1] + -1);
      piVar1[1] = (int)(iVar3);
      UNLOCK();
      if (iVar3 == 0) {
        (**(code **)*piVar1)();
        LOCK();
        iVar3 = (int)(piVar1[2] + -1);
        piVar1[2] = (int)(iVar3);
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
  puVar2[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = (undefined4)(uVar3);
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
  puVar2[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = (undefined4)(uVar3);
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
  puVar2[2] = (undefined4)(*param_1);
  puVar2[0xd] = (undefined4)(0);

  if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
    uVar3 = (undefined4)((*(code *)**(undefined4 **)param_1[0xb])(puVar2 + 4,uVar1));
    puVar2[0xd] = (undefined4)(uVar3);
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
  puVar2[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = (undefined4)(uVar3);
  }

  return (undefined4 *)(puVar2);

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
  param_1[0xb] = (undefined4)(0);

  if ((undefined4 *)param_2[0xb] != (undefined4 *)0x0) {
    uVar2 = (undefined4)((*(code *)**(undefined4 **)param_2[0xb])(param_1 + 2,uVar1));
    param_1[0xb] = (undefined4)(uVar2);
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
  param_1[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_3 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_3 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = (undefined4)(uVar2);
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
  param_1[0xf] = (undefined4)(0);

  if (*(undefined4 **)(param_4 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_4 + 0x24))(param_1 + 6,uVar1));
    param_1[0xf] = (undefined4)(uVar2);
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
  param_1[0xf] = (undefined4)(0);

  if (*(undefined4 **)(param_4 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_4 + 0x24))(param_1 + 6,uVar1));
    param_1[0xf] = (undefined4)(uVar2);
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
  param_1[0xf] = (undefined4)(0);

  if (*(undefined4 **)(param_4 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_4 + 0x24))(param_1 + 6,uVar1));
    param_1[0xf] = (undefined4)(uVar2);
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
  param_1[0xf] = (undefined4)(0);

  if (*(undefined4 **)(param_4 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_4 + 0x24))(param_1 + 6,uVar1));
    param_1[0xf] = (undefined4)(uVar2);
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
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10229600; body size 164 bytes.
#line 1 "ENTRY_10229600"

undefined4 * __thiscall Recovered_Bulk::FUN_10229600(undefined4 *param_2)
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
  pvVar1 = (void *)(operator_new(0x14));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[1] = (undefined4)(pvVar1);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);

  param_1[6] = (undefined4)(7);
  param_1[7] = (undefined4)(8);
  *param_1 = (undefined4)(0x3f800000);
  thunk_FUN_10231910(0x10,param_1[1]);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102296d0; body size 164 bytes.
#line 1 "ENTRY_102296d0"

undefined4 * __thiscall Recovered_Bulk::FUN_102296d0(undefined4 *param_2)
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
  thunk_FUN_10231a30(0x10,param_1[1]);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102297a0; body size 164 bytes.
#line 1 "ENTRY_102297a0"

undefined4 * __thiscall Recovered_Bulk::FUN_102297a0(undefined4 *param_2)
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
  thunk_FUN_10231b50(0x10,param_1[1]);

  return (undefined4 *)(param_1);

 } catch (...) { }
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


// Reference entry 1022a280; body size 161 bytes.
#line 1 "ENTRY_1022a280"

undefined4 * __fastcall FUN_1022a280(undefined4 *param_1)

{
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[1] = (undefined4)(pvVar1);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);

  param_1[6] = (undefined4)(7);
  param_1[7] = (undefined4)(8);
  *param_1 = (undefined4)(0x3f800000);
  thunk_FUN_10231910(0x10,param_1[1]);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1022a350; body size 183 bytes.
#line 1 "ENTRY_1022a350"

undefined4 * __thiscall Recovered_Bulk::FUN_1022a350(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
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
  thunk_FUN_10231a30(0x10,param_1[1]);

  thunk_FUN_10227fb0(param_2,param_3);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1022a440; body size 161 bytes.
#line 1 "ENTRY_1022a440"

undefined4 * __fastcall FUN_1022a440(undefined4 *param_1)

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
  thunk_FUN_10231b50(0x10,param_1[1]);

  return (undefined4 *)(param_1);

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
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  uVar1 = (undefined4)(thunk_FUN_1059d5a0(500));
  param_1[8] = (undefined4)(uVar1);
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
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  uVar1 = (undefined4)(thunk_FUN_1059d5a0(500));
  param_1[8] = (undefined4)(uVar1);
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
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  uVar1 = (undefined4)(thunk_FUN_1059d5a0(500));
  param_1[8] = (undefined4)(uVar1);
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
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  uVar1 = (undefined4)(thunk_FUN_1059d5a0(500));
  param_1[8] = (undefined4)(uVar1);
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
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  uVar1 = (undefined4)(thunk_FUN_1059d5a0(500));
  param_1[8] = (undefined4)(uVar1);
  param_1[9] = (undefined4)(param_2);
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
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  uVar1 = (undefined4)(thunk_FUN_1059d5a0(500));
  param_1[8] = (undefined4)(uVar1);
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
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  uVar1 = (undefined4)(thunk_FUN_1059d5a0(500));
  param_1[8] = (undefined4)(uVar1);

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
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  uVar1 = (undefined4)(thunk_FUN_1059d5a0(500));
  param_1[8] = (undefined4)(uVar1);
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
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  uVar1 = (undefined4)(thunk_FUN_1059d5a0(500));
  param_1[8] = (undefined4)(uVar1);
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
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  uVar1 = (undefined4)(thunk_FUN_1059d5a0(500));
  param_1[8] = (undefined4)(uVar1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RetailDemoData);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1022b0a0; body size 123 bytes.
#line 1 "ENTRY_1022b0a0"

undefined4 * __thiscall Recovered_Bulk::FUN_1022b0a0(undefined1 param_2,undefined1 param_3,int *param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_104ed740(DAT_12126b84 );
  *(undefined1 *)(param_1 + 0xb) = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAppUrlAction);
  *(undefined1 *)((int)param_1 + 0x2d) = param_3;

  param_1[0xc] = (undefined4)(param_4);
  param_1[0xd] = (undefined4)(0);
  if (param_4 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_4 + 0xc))());
    param_1[0xd] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1022b140; body size 137 bytes.
#line 1 "ENTRY_1022b140"

undefined4 * __thiscall Recovered_Bulk::FUN_1022b140(undefined1 param_2,undefined1 param_3,int *param_4)
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
  *(undefined1 *)(param_1 + 2) = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAppUrlActionDescriptor);
  *(undefined1 *)((int)param_1 + 9) = param_3;

  param_1[3] = (undefined4)(param_4);
  param_1[4] = (undefined4)(0);
  if (param_4 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*param_4 + 0xc))(uVar1));
    param_1[4] = (undefined4)(piVar2);
    (**(code **)(*piVar2 + 4))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
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
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  uVar1 = (undefined4)(thunk_FUN_1059d5a0(500));
  param_1[8] = (undefined4)(uVar1);
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
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  uVar1 = (undefined4)(thunk_FUN_1059d5a0(500));
  param_1[8] = (undefined4)(uVar1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_ZonePlayerUpdateData);

  return (undefined4 *)(param_1);

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
  *(undefined4 *)puVar2[1] = (undefined4)(0);
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
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
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
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
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
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
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
      }
    }
  }
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
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
    param_1[8] = (int)(0);
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
    param_1[7] = (int)(0);
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


// Reference entry 10230460; body size 83 bytes.
#line 1 "ENTRY_10230460"

undefined4 * __thiscall Recovered_Bulk::FUN_10230460(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
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
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
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
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
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
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  thunk_FUN_105a85f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xdc);
  }
  return (undefined4 *)(param_1);
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
      }
    }
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (int)(param_1);
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


// Reference entry 10231910; body size 228 bytes.
#line 1 "ENTRY_10231910"

void __thiscall Recovered_Bulk::FUN_10231910(uint param_2,undefined4 param_3)
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
    thunk_FUN_10227930(*param_1,param_1[1],&param_3);
    return;
  }
  if (0x3fffffff < param_2) {
LAB_102319ef:
                    
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
    if (uVar7 + 0x23 <= uVar7) goto LAB_102319ef;
    pvVar3 = (void *)(operator_new(uVar7 + 0x23));
    if (pvVar3 == (void *)0x0) goto LAB_102319d4;
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
LAB_102319d4:
                    
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


// Reference entry 10231a30; body size 228 bytes.
#line 1 "ENTRY_10231a30"

void __thiscall Recovered_Bulk::FUN_10231a30(uint param_2,undefined4 param_3)
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
    thunk_FUN_102279b0(*param_1,param_1[1],&param_3);
    return;
  }
  if (0x3fffffff < param_2) {
LAB_10231b0f:
                    
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
    if (uVar7 + 0x23 <= uVar7) goto LAB_10231b0f;
    pvVar3 = (void *)(operator_new(uVar7 + 0x23));
    if (pvVar3 == (void *)0x0) goto LAB_10231af4;
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
LAB_10231af4:
                    
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


// Reference entry 10231b50; body size 228 bytes.
#line 1 "ENTRY_10231b50"

void __thiscall Recovered_Bulk::FUN_10231b50(uint param_2,undefined4 param_3)
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
    thunk_FUN_10227a30(*param_1,param_1[1],&param_3);
    return;
  }
  if (0x3fffffff < param_2) {
LAB_10231c2f:
                    
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
    if (uVar7 + 0x23 <= uVar7) goto LAB_10231c2f;
    pvVar3 = (void *)(operator_new(uVar7 + 0x23));
    if (pvVar3 == (void *)0x0) goto LAB_10231c14;
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
LAB_10231c14:
                    
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
  puVar2[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x2c))(puVar2 + 2,uVar1));
    puVar2[0xb] = (undefined4)(uVar3);
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
  puVar2[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x2c))(puVar2 + 2,uVar1));
    puVar2[0xb] = (undefined4)(uVar3);
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
  puVar2[2] = (undefined4)(*(undefined4 *)(param_1 + 8));
  puVar2[0xd] = (undefined4)(0);

  if (*(undefined4 **)(param_1 + 0x34) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x34))(puVar2 + 4,uVar1));
    puVar2[0xd] = (undefined4)(uVar3);
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
  puVar2[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x2c))(puVar2 + 2,uVar1));
    puVar2[0xb] = (undefined4)(uVar3);
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
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
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
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
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
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  return;
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
  param_1[0x3f] = (int)(param_1[0x3f] + -1);
  cVar1 = (char)((**(code **)(*param_1 + 0x68))());
  if (cVar1 == '\0') {
    thunk_FUN_1106b190(param_1 + 0x13,0,0);
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
    piVar4[0xc] = (int)((int)piVar5);
    piVar4[0xd] = (int)(0);
    if (piVar5 != (int *)0x0) {
      piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0xc))());
      piVar4[0xd] = (int)((int)piVar5);
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
        puVar2[3] = (undefined4)(_Size);
        puVar2[2] = (undefined4)(0);
        puVar2[1] = (undefined4)(0);
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
    puVar5[1] = (undefined4)(0);
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
    piVar4[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar4[2] = (int)(0);
    piVar4[3] = (int)(0);
    *(undefined2 *)(piVar4 + 4) = 0;
    *piVar4 = (int)((int)(uint)&ghidra_vftable_SCOnlineUpdateWizardActionDescriptor);
    piVar4[5] = (int)(0);
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
    piVar4[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar4 = (int)((int)(uint)&ghidra_vftable_SCDisplayCustomControlActionDescriptor);
    piVar4[2] = (int)(0);
    piVar4[3] = (int)(0);
    piVar4[4] = (int)(0);
    piVar4[5] = (int)(0);
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
    param_1[8] = (int)(0);
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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
  }
  return;
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
      param_1[0xb] = (int)(0);
    }
    puVar5 = (undefined4 *)(&param_2);
    param_1[7] = (int)(0);
    pSVar1 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    ((SCLibrary *)(pSVar1))->getSCHousehold();

    thunk_FUN_1038c3f0(puVar5);

    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 8))();
    }

    thunk_FUN_1059d800();
    iVar2 = (int)(thunk_FUN_1059d5a0(1000));
    param_1[8] = (int)(iVar2);

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
    param_1[8] = (int)(0);

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
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCVersion);
  param_1[6] = (undefined4)(0);

  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)((undefined1 *)*param_2);
  }
  thunk_FUN_101b87f0(puVar1);

  return (undefined4 *)(param_1);

 } catch (...) { }
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
  param_1[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = (undefined4)(uVar2);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1024e640; body size 209 bytes.
#line 1 "ENTRY_1024e640"

int __thiscall Recovered_Bulk::FUN_1024e640(void)
{
  int param_1 = (int )this;
 try {
  void *pvVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *in_stack_00000028;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (in_stack_00000028 == (int *)0x0) {

    return (int)(param_1);
  }
  puVar3 = (undefined4 *)(operator_new(0x30));
  *puVar3 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar3[0xb] = (undefined4)(0);
  if (in_stack_00000028 != (int *)0x0) {
    if (in_stack_00000028 == (int *)&stack0x00000004) {
      uVar4 = (undefined4)((**(code **)(*in_stack_00000028 + 4))(puVar3 + 2,uVar2));
      puVar3[0xb] = (undefined4)(uVar4);
      if (in_stack_00000028 == (int *)0x0) goto LAB_1024e6e1;
      (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004);
    }
    else {
      puVar3[0xb] = (undefined4)(in_stack_00000028);
    }
    in_stack_00000028 = (int *)((int *)0x0);
  }
LAB_1024e6e1:
  *(undefined4 **)(param_1 + 0x24) = puVar3;
  if (in_stack_00000028 != (int *)0x0) {
    (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004);
  }

  return (int)(param_1);

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
  puVar2[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = (undefined4)(uVar3);
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
  puVar2[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x2c))(puVar2 + 2,uVar1));
    puVar2[0xb] = (undefined4)(uVar3);
  }

  return (undefined4 *)(puVar2);

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
  param_1[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = (undefined4)(uVar2);
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
  param_1[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = (undefined4)(uVar2);
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
  param_1[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = (undefined4)(uVar2);
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
  param_1[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = (undefined4)(uVar2);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10253ea0; body size 203 bytes.
#line 1 "ENTRY_10253ea0"

int __thiscall Recovered_Bulk::FUN_10253ea0(void)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *in_stack_00000028;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = (undefined4)(0);
  if (in_stack_00000028 != (int *)0x0) {
    if (in_stack_00000028 == (int *)&stack0x00000004) {
      uVar3 = (undefined4)((**(code **)(*in_stack_00000028 + 4))(puVar2 + 2,uVar1));
      puVar2[0xb] = (undefined4)(uVar3);
      if (in_stack_00000028 == (int *)0x0) goto LAB_10253f3b;
      (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004);
    }
    else {
      puVar2[0xb] = (undefined4)(in_stack_00000028);
    }
    in_stack_00000028 = (int *)((int *)0x0);
  }
LAB_10253f3b:
  *(undefined4 **)(param_1 + 0x24) = puVar2;
  if (in_stack_00000028 != (int *)0x0) {
    (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10254030; body size 203 bytes.
#line 1 "ENTRY_10254030"

int __thiscall Recovered_Bulk::FUN_10254030(void)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *in_stack_00000028;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = (undefined4)(0);
  if (in_stack_00000028 != (int *)0x0) {
    if (in_stack_00000028 == (int *)&stack0x00000004) {
      uVar3 = (undefined4)((**(code **)(*in_stack_00000028 + 4))(puVar2 + 2,uVar1));
      puVar2[0xb] = (undefined4)(uVar3);
      if (in_stack_00000028 == (int *)0x0) goto LAB_102540cb;
      (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004);
    }
    else {
      puVar2[0xb] = (undefined4)(in_stack_00000028);
    }
    in_stack_00000028 = (int *)((int *)0x0);
  }
LAB_102540cb:
  *(undefined4 **)(param_1 + 0x24) = puVar2;
  if (in_stack_00000028 != (int *)0x0) {
    (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 102541c0; body size 203 bytes.
#line 1 "ENTRY_102541c0"

int __thiscall Recovered_Bulk::FUN_102541c0(void)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *in_stack_00000028;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = (undefined4)(0);
  if (in_stack_00000028 != (int *)0x0) {
    if (in_stack_00000028 == (int *)&stack0x00000004) {
      uVar3 = (undefined4)((**(code **)(*in_stack_00000028 + 4))(puVar2 + 2,uVar1));
      puVar2[0xb] = (undefined4)(uVar3);
      if (in_stack_00000028 == (int *)0x0) goto LAB_1025425b;
      (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004);
    }
    else {
      puVar2[0xb] = (undefined4)(in_stack_00000028);
    }
    in_stack_00000028 = (int *)((int *)0x0);
  }
LAB_1025425b:
  *(undefined4 **)(param_1 + 0x24) = puVar2;
  if (in_stack_00000028 != (int *)0x0) {
    (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10254590; body size 203 bytes.
#line 1 "ENTRY_10254590"

int __thiscall Recovered_Bulk::FUN_10254590(void)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *in_stack_00000028;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = (undefined4)(0);
  if (in_stack_00000028 != (int *)0x0) {
    if (in_stack_00000028 == (int *)&stack0x00000004) {
      uVar3 = (undefined4)((**(code **)(*in_stack_00000028 + 4))(puVar2 + 2,uVar1));
      puVar2[0xb] = (undefined4)(uVar3);
      if (in_stack_00000028 == (int *)0x0) goto LAB_1025462b;
      (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004);
    }
    else {
      puVar2[0xb] = (undefined4)(in_stack_00000028);
    }
    in_stack_00000028 = (int *)((int *)0x0);
  }
LAB_1025462b:
  *(undefined4 **)(param_1 + 0x24) = puVar2;
  if (in_stack_00000028 != (int *)0x0) {
    (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004);
  }

  return (int)(param_1);

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
  puVar2[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = (undefined4)(uVar3);
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
  puVar2[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = (undefined4)(uVar3);
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
  puVar2[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = (undefined4)(uVar3);
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
  puVar2[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = (undefined4)(uVar3);
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


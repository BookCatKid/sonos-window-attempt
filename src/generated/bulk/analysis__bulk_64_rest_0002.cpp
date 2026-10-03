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
extern int _eh_vector_destructor_iterator_(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int ceil(...);
extern int createSCStringArray(...);
extern int doWork(...);
extern int getSCHousehold(...);
extern int getSingleton(...);
extern int isShuttingDown(...);
extern __declspec(dllimport) int memmove(...);
extern int operator_new(...);
extern int rebind(...);
extern __declspec(dllimport) int strcspn(...);
extern __declspec(dllimport) int strtol(...);
extern int thunk_FUN_10118c40(...);
extern int thunk_FUN_1011f5e0(...);
extern int thunk_FUN_10129760(...);
extern int thunk_FUN_10129a20(...);
extern int thunk_FUN_10129af0(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101bf370(...);
extern int thunk_FUN_101bf3f0(...);
extern int thunk_FUN_101c6ae0(...);
extern int thunk_FUN_101cf1e0(...);
extern int thunk_FUN_101d7220(...);
extern int thunk_FUN_101f6530(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_1023a9c0(...);
extern int thunk_FUN_10246290(...);
extern int thunk_FUN_10247180(...);
extern int thunk_FUN_10254af0(...);
extern int thunk_FUN_10254c20(...);
extern int thunk_FUN_10254f10(...);
extern int thunk_FUN_102560a0(...);
extern int thunk_FUN_102589b0(...);
extern int thunk_FUN_1025c140(...);
extern int thunk_FUN_1025c5c0(...);
extern int thunk_FUN_10263a50(...);
extern int thunk_FUN_10263af0(...);
extern int thunk_FUN_10263dd0(...);
extern int thunk_FUN_10264090(...);
extern int thunk_FUN_1026edf0(...);
extern int thunk_FUN_10272300(...);
extern int thunk_FUN_10272d20(...);
extern int thunk_FUN_10272ea0(...);
extern int thunk_FUN_10272fd0(...);
extern int thunk_FUN_10273980(...);
extern int thunk_FUN_10274780(...);
extern int thunk_FUN_102782e0(...);
extern int thunk_FUN_102782f0(...);
extern int thunk_FUN_10278390(...);
extern int thunk_FUN_10278470(...);
extern int thunk_FUN_10278ee0(...);
extern int thunk_FUN_1027ddb0(...);
extern int thunk_FUN_1027e130(...);
extern int thunk_FUN_1027e1c0(...);
extern int thunk_FUN_1027e470(...);
extern int thunk_FUN_1027ee20(...);
extern int thunk_FUN_10283f20(...);
extern int thunk_FUN_102840e0(...);
extern int thunk_FUN_10284520(...);
extern int thunk_FUN_10284760(...);
extern int thunk_FUN_102847c0(...);
extern int thunk_FUN_10284aa0(...);
extern int thunk_FUN_10285570(...);
extern int thunk_FUN_10286ac0(...);
extern int thunk_FUN_102871c0(...);
extern int thunk_FUN_102878c0(...);
extern int thunk_FUN_1028bbd0(...);
extern int thunk_FUN_1028c030(...);
extern int thunk_FUN_1028c0f0(...);
extern int thunk_FUN_1028e330(...);
extern int thunk_FUN_1028eea0(...);
extern int thunk_FUN_1028f450(...);
extern int thunk_FUN_102909a0(...);
extern int thunk_FUN_10291820(...);
extern int thunk_FUN_10292500(...);
extern int thunk_FUN_10292cf0(...);
extern int thunk_FUN_102967e0(...);
extern int thunk_FUN_102988f0(...);
extern int thunk_FUN_1029d770(...);
extern int thunk_FUN_102a23b0(...);
extern int thunk_FUN_102a2f00(...);
extern int thunk_FUN_102a30a0(...);
extern int thunk_FUN_102a3140(...);
extern int thunk_FUN_102a3d90(...);
extern int thunk_FUN_102a3ea0(...);
extern int thunk_FUN_102a4110(...);
extern int thunk_FUN_102a5240(...);
extern int thunk_FUN_102a71f0(...);
extern int thunk_FUN_102a9b00(...);
extern int thunk_FUN_102accd0(...);
extern int thunk_FUN_102ad4d0(...);
extern int thunk_FUN_102adcd0(...);
extern int thunk_FUN_102ae180(...);
extern int thunk_FUN_102ae270(...);
extern int thunk_FUN_102b5010(...);
extern int thunk_FUN_102b50c0(...);
extern int thunk_FUN_102b7ed0(...);
extern int thunk_FUN_102bc730(...);
extern int thunk_FUN_102bce30(...);
extern int thunk_FUN_102bd750(...);
extern int thunk_FUN_102c2040(...);
extern int thunk_FUN_102c3f10(...);
extern int thunk_FUN_102c7a50(...);
extern int thunk_FUN_102cb090(...);
extern int thunk_FUN_102cb2c0(...);
extern int thunk_FUN_102cddc0(...);
extern int thunk_FUN_102cf840(...);
extern int thunk_FUN_102d09d0(...);
extern int thunk_FUN_102d29a0(...);
extern int thunk_FUN_102d2c80(...);
extern int thunk_FUN_102d3d50(...);
extern int thunk_FUN_102d3db0(...);
extern int thunk_FUN_102d4700(...);
extern int thunk_FUN_102d4a40(...);
extern int thunk_FUN_102d5720(...);
extern int thunk_FUN_102daa60(...);
extern int thunk_FUN_102daa80(...);
extern int thunk_FUN_102dc8c0(...);
extern int thunk_FUN_102df5d0(...);
extern int thunk_FUN_102e23b0(...);
extern int thunk_FUN_102e2560(...);
extern int thunk_FUN_102e2f40(...);
extern int thunk_FUN_102e3440(...);
extern int thunk_FUN_102e3ed0(...);
extern int thunk_FUN_102e49e0(...);
extern int thunk_FUN_10302280(...);
extern int thunk_FUN_103798e0(...);
extern int thunk_FUN_1037a2b0(...);
extern int thunk_FUN_103a3ed0(...);
extern int thunk_FUN_103be530(...);
extern int thunk_FUN_103be5e0(...);
extern int thunk_FUN_103be9e0(...);
extern int thunk_FUN_103beae0(...);
extern int thunk_FUN_103d0880(...);
extern int thunk_FUN_103d56e0(...);
extern int thunk_FUN_103d5ff0(...);
extern int thunk_FUN_103d60a0(...);
extern int thunk_FUN_104ddfd0(...);
extern int thunk_FUN_104deb40(...);
extern int thunk_FUN_104dec20(...);
extern int thunk_FUN_104fd9b0(...);
extern int thunk_FUN_104fed90(...);
extern int thunk_FUN_105f5740(...);
extern int thunk_FUN_105fd2c0(...);
extern int thunk_FUN_1061e370(...);
extern int thunk_FUN_1061edc0(...);
extern int thunk_FUN_106243b0(...);
extern int thunk_FUN_1062a650(...);
extern int thunk_FUN_10649300(...);
extern int thunk_FUN_10651f80(...);
extern int thunk_FUN_10693350(...);
extern int thunk_FUN_106967c0(...);
extern int thunk_FUN_10696830(...);
extern int thunk_FUN_1069e990(...);
extern int thunk_FUN_1069fd10(...);
extern int thunk_FUN_106a1a50(...);
extern int thunk_FUN_106a23c0(...);
extern int thunk_FUN_106a2a80(...);
extern int thunk_FUN_106e1380(...);
extern int thunk_FUN_106e3f50(...);
extern int thunk_FUN_106f7150(...);
extern int thunk_FUN_106f8000(...);
extern int thunk_FUN_106fd7f0(...);
extern int thunk_FUN_106fe200(...);
extern int thunk_FUN_10702ba0(...);
extern int thunk_FUN_10703430(...);
extern int thunk_FUN_10708df0(...);
extern int thunk_FUN_10709bf0(...);
extern int thunk_FUN_107123b0(...);
extern int thunk_FUN_10712c10(...);
extern int thunk_FUN_107183d0(...);
extern int thunk_FUN_107190f0(...);
extern int thunk_FUN_10724930(...);
extern int thunk_FUN_107293d0(...);
extern int thunk_FUN_1074b0e0(...);
extern int thunk_FUN_1074b450(...);
extern int thunk_FUN_1074ca20(...);
extern int thunk_FUN_1074cd90(...);
extern int thunk_FUN_1074ed30(...);
extern int thunk_FUN_10750170(...);
extern int thunk_FUN_10758340(...);
extern int thunk_FUN_107594d0(...);
extern int thunk_FUN_107626d0(...);
extern int thunk_FUN_10762f40(...);
extern int thunk_FUN_10767860(...);
extern int thunk_FUN_10767e60(...);
extern int thunk_FUN_1076bff0(...);
extern int thunk_FUN_1076ce20(...);
extern int thunk_FUN_10772f70(...);
extern int thunk_FUN_10773a50(...);
extern int thunk_FUN_1077bcd0(...);
extern int thunk_FUN_1077c060(...);
extern int thunk_FUN_1077e3d0(...);
extern int thunk_FUN_1077eba0(...);
extern int thunk_FUN_10783320(...);
extern int thunk_FUN_10783670(...);
extern int thunk_FUN_10786100(...);
extern int thunk_FUN_1078c010(...);
extern int thunk_FUN_107cce20(...);
extern int thunk_FUN_107ce880(...);
extern int thunk_FUN_107e6130(...);
extern int thunk_FUN_107e6860(...);
extern int thunk_FUN_107e8f30(...);
extern int thunk_FUN_107eade0(...);
extern int thunk_FUN_10801190(...);
extern int thunk_FUN_108024f0(...);
extern int thunk_FUN_10811c10(...);
extern int thunk_FUN_10812860(...);
extern int thunk_FUN_10818140(...);
extern int thunk_FUN_10819bd0(...);
extern int thunk_FUN_108294f0(...);
extern int thunk_FUN_1082ad30(...);
extern int thunk_FUN_10837820(...);
extern int thunk_FUN_10838110(...);
extern int thunk_FUN_1083fac0(...);
extern int thunk_FUN_108442b0(...);
extern int thunk_FUN_1085d720(...);
extern int thunk_FUN_1085da90(...);
extern int thunk_FUN_1085f4e0(...);
extern int thunk_FUN_10860e70(...);
extern int thunk_FUN_10873290(...);
extern int thunk_FUN_10874c40(...);
extern int thunk_FUN_1087e430(...);
extern int thunk_FUN_1087e530(...);
extern int thunk_FUN_1087eff0(...);
extern int thunk_FUN_10880f80(...);
extern int thunk_FUN_10891c20(...);
extern int thunk_FUN_10892d60(...);
extern int thunk_FUN_1089e580(...);
extern int thunk_FUN_108a0aa0(...);
extern int thunk_FUN_108b47a0(...);
extern int thunk_FUN_108b5220(...);
extern int thunk_FUN_108bcac0(...);
extern int thunk_FUN_108be050(...);
extern int thunk_FUN_108c7880(...);
extern int thunk_FUN_108c96c0(...);
extern int thunk_FUN_108dfd20(...);
extern int thunk_FUN_108e2540(...);
extern int thunk_FUN_108f8850(...);
extern int thunk_FUN_108f8bc0(...);
extern int thunk_FUN_108fb850(...);
extern int thunk_FUN_108fc510(...);
extern int thunk_FUN_10905580(...);
extern int thunk_FUN_109073a0(...);
extern int thunk_FUN_10916c20(...);
extern int thunk_FUN_10919c70(...);
extern int thunk_FUN_1092b810(...);
extern int thunk_FUN_1092dd80(...);
extern int thunk_FUN_10948f60(...);
extern int thunk_FUN_10949eb0(...);
extern int thunk_FUN_109543e0(...);
extern int thunk_FUN_10954990(...);
extern int thunk_FUN_10957cf0(...);
extern int thunk_FUN_10958450(...);
extern int thunk_FUN_1095b3c0(...);
extern int thunk_FUN_1095beb0(...);
extern int thunk_FUN_10961ad0(...);
extern int thunk_FUN_109622d0(...);
extern int thunk_FUN_10970540(...);
extern int thunk_FUN_10970ab0(...);
extern int thunk_FUN_10973080(...);
extern int thunk_FUN_10974ed0(...);
extern int thunk_FUN_109809c0(...);
extern int thunk_FUN_10982060(...);
extern int thunk_FUN_10988b60(...);
extern int thunk_FUN_109893a0(...);
extern int thunk_FUN_1098e810(...);
extern int thunk_FUN_1098fbc0(...);
extern int thunk_FUN_10999150(...);
extern int thunk_FUN_109998c0(...);
extern int thunk_FUN_1099d9d0(...);
extern int thunk_FUN_1099e6c0(...);
extern int thunk_FUN_109a6790(...);
extern int thunk_FUN_109a8720(...);
extern int thunk_FUN_109b6e80(...);
extern int thunk_FUN_109b7970(...);
extern int thunk_FUN_109bf2c0(...);
extern int thunk_FUN_109c0090(...);
extern int thunk_FUN_109c3ac0(...);
extern int thunk_FUN_109c4720(...);
extern int thunk_FUN_109cb7a0(...);
extern int thunk_FUN_109cc050(...);
extern int thunk_FUN_109d8930(...);
extern int thunk_FUN_109d9800(...);
extern int thunk_FUN_109e1620(...);
extern int thunk_FUN_109e2f40(...);
extern int thunk_FUN_109edf50(...);
extern int thunk_FUN_109eec10(...);
extern int thunk_FUN_109f3c80(...);
extern int thunk_FUN_109f6cb0(...);
extern int thunk_FUN_10a08d00(...);
extern int thunk_FUN_10a09850(...);
extern int thunk_FUN_10a0cd20(...);
extern int thunk_FUN_10a0d550(...);
extern int thunk_FUN_10a12ef0(...);
extern int thunk_FUN_10a13f20(...);
extern int thunk_FUN_10a1e9e0(...);
extern int thunk_FUN_10a20e10(...);
extern int thunk_FUN_10a40dc0(...);
extern int thunk_FUN_10a41440(...);
extern int thunk_FUN_10a44600(...);
extern int thunk_FUN_10a44bd0(...);
extern int thunk_FUN_10a48d70(...);
extern int thunk_FUN_10a49340(...);
extern int thunk_FUN_10a4dc00(...);
extern int thunk_FUN_10a505e0(...);
extern int thunk_FUN_10a64980(...);
extern int thunk_FUN_10a66530(...);
extern int thunk_FUN_10a711f0(...);
extern int thunk_FUN_10a71960(...);
extern int thunk_FUN_10a752c0(...);
extern int thunk_FUN_10a761e0(...);
extern int thunk_FUN_10a7cf20(...);
extern int thunk_FUN_10a7d690(...);
extern int thunk_FUN_10a803f0(...);
extern int thunk_FUN_10a80a00(...);
extern int thunk_FUN_10a83b90(...);
extern int thunk_FUN_10a84300(...);
extern int thunk_FUN_10a88c80(...);
extern int thunk_FUN_10a896e0(...);
extern int thunk_FUN_10a90fb0(...);
extern int thunk_FUN_10a920d0(...);
extern int thunk_FUN_10a9a260(...);
extern int thunk_FUN_10a9b180(...);
extern int thunk_FUN_10aa2a60(...);
extern int thunk_FUN_10aa4f70(...);
extern int thunk_FUN_10ab2ee0(...);
extern int thunk_FUN_10ab31d0(...);
extern int thunk_FUN_10ab3f60(...);
extern int thunk_FUN_10ab44a0(...);
extern int thunk_FUN_10ab6080(...);
extern int thunk_FUN_10ab60e0(...);
extern int thunk_FUN_10ab65f0(...);
extern int thunk_FUN_10abba40(...);
extern int thunk_FUN_10ae5fd0(...);
extern int thunk_FUN_10ae6740(...);
extern int thunk_FUN_10ae9000(...);
extern int thunk_FUN_10aea2b0(...);
extern int thunk_FUN_10af4f30(...);
extern int thunk_FUN_10af6380(...);
extern int thunk_FUN_10aff240(...);
extern int thunk_FUN_10affa30(...);
extern int thunk_FUN_10b03bb0(...);
extern int thunk_FUN_10b049a0(...);
extern int thunk_FUN_10b09dc0(...);
extern int thunk_FUN_10b0c920(...);
extern int thunk_FUN_10b1a790(...);
extern int thunk_FUN_10b1b570(...);
extern int thunk_FUN_10b22400(...);
extern int thunk_FUN_10b23f00(...);
extern int thunk_FUN_10b2e4f0(...);
extern int thunk_FUN_10b2ec80(...);
extern int thunk_FUN_10b31d30(...);
extern int thunk_FUN_10b33fb0(...);
extern int thunk_FUN_10b488f0(...);
extern int thunk_FUN_10b49bb0(...);
extern int thunk_FUN_10b4fd80(...);
extern int thunk_FUN_10b51060(...);
extern int thunk_FUN_10b54cd0(...);
extern int thunk_FUN_10b55440(...);
extern int thunk_FUN_10b585d0(...);
extern int thunk_FUN_10b58a40(...);
extern int thunk_FUN_10b5a460(...);
extern int thunk_FUN_10b5cb50(...);
extern int thunk_FUN_10b6e370(...);
extern int thunk_FUN_10b7b430(...);
extern int thunk_FUN_10b7b650(...);
extern int thunk_FUN_10b7b6a0(...);
extern int thunk_FUN_10b7c8e0(...);
extern int thunk_FUN_10b8e970(...);
extern int thunk_FUN_10b97990(...);
extern int thunk_FUN_10bb5460(...);
extern int thunk_FUN_11069420(...);
extern int thunk_FUN_1106b190(...);
extern int thunk_FUN_110816c0(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_11093530(...);
extern int thunk_FUN_110935f0(...);
extern int thunk_FUN_11094310(...);
extern int thunk_FUN_1109f100(...);
extern int thunk_FUN_1109f140(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_110a3100(...);
extern int thunk_FUN_110c2c60(...);
extern int thunk_FUN_110db240(...);
extern int thunk_FUN_110db7b0(...);
extern int thunk_FUN_110f1e00(...);
extern int thunk_FUN_110f2980(...);
extern int thunk_FUN_110fc270(...);
extern int thunk_FUN_11102510(...);
extern int thunk_FUN_11102770(...);
extern int thunk_FUN_111046c0(...);
extern int thunk_FUN_111046e0(...);
extern int thunk_FUN_11107600(...);
extern int thunk_FUN_11107bf0(...);
extern int thunk_FUN_111a0720(...);
extern int thunk_FUN_111a0cc0(...);
extern int thunk_FUN_111a0d50(...);
extern int thunk_FUN_111c05a0(...);
extern int thunk_FUN_111c06e0(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11240650(...);
extern int thunk_FUN_1125bcf0(...);
extern int thunk_FUN_1125bd80(...);
extern int thunk_FUN_1125e4e0(...);
extern int thunk_FUN_11261f10(...);
extern int thunk_FUN_11262460(...);
extern int thunk_FUN_11262fc0(...);
extern int thunk_FUN_11263050(...);
extern int thunk_FUN_112632c0(...);
extern int thunk_FUN_11264ad0(...);
extern int thunk_FUN_112a5390(...);
extern int thunk_FUN_112a7c30(...);
extern int thunk_FUN_112a7da0(...);
extern int thunk_FUN_112a7f20(...);
extern int thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_112a82d0(...);
extern int thunk_FUN_112a9da0(...);
extern int thunk_FUN_112aa790(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_1138fd50(...);
extern int thunk_FUN_11391170(...);
extern int thunk_FUN_11391670(...);
extern int thunk_FUN_113948f0(...);
extern int thunk_FUN_11395ef0(...);
extern int thunk_FUN_11397670(...);
extern int thunk_FUN_113cf9c0(...);
extern int thunk_FUN_113cfa30(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1145ad70(...);
extern int thunk_FUN_1145c250(...);
extern int thunk_FUN_1145c930(...);
extern int thunk_FUN_1145de60(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148ac80(...);
extern int thunk_FUN_1148b586(...);
extern int DAT_1186d2ee;
extern int DAT_11880fb0;
extern int DAT_1188d210;
extern int DAT_1188d218;
extern int DAT_121190f4;
extern int DAT_121194d0;
extern int DAT_121194d4;
extern int DAT_121194d8;
extern int DAT_121194dc;
extern int DAT_121194e0;
extern int DAT_12126b84;
extern int DAT_121a0c1c;
extern int g_lSCObjCount;
extern int ghidra_vftable_AnacapaLauncher;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_RHttpGetNoRedirectAIOOp;
extern int ghidra_vftable_RITQHandler;
extern int ghidra_vftable_RLookupV1CertInfoAIOOp;
extern int ghidra_vftable_RNSGetAliveOp;
extern int ghidra_vftable_RNSGetCurrentChannelOp;
extern int ghidra_vftable_RNetstartScanListOp;
extern int ghidra_vftable_SCArray;
extern int ghidra_vftable_SCCertificateChain;
extern int ghidra_vftable_SCElapsedTimeMeasurement;
extern int ghidra_vftable_SCIEventSourceImpl;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCInAppMessaging;
extern int ghidra_vftable_SCInAppPurchaseCallback;
extern int ghidra_vftable_SCInAppPurchaseManager;
extern int ghidra_vftable_SCLoggingHelper;
extern int ghidra_vftable_SCMusicServiceMenu;
extern int ghidra_vftable_SCNewWizManager;
extern int ghidra_vftable_SCOpImpl;
extern int ghidra_vftable_SCRecurrence;
extern int ghidra_vftable_SCResourceHelper;
extern int ghidra_vftable_SCSearchQuery;
extern int ghidra_vftable_SCServiceAccountFilter;
extern int ghidra_vftable_SCServiceDescriptorFilter;
extern int ghidra_vftable_SCShareNameInput;
extern int ghidra_vftable_SCSonarCalibrationManager;
extern int ghidra_vftable_SCStream;
extern int ghidra_vftable_SCSystemStatusManager;
extern int ghidra_vftable_SCSystemTime;
extern int ghidra_vftable_SCTime;
extern int ghidra_vftable_TestPointHandlerSCLIB;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int in_stack_00000028;
extern int in_stack_0000002c;
extern int in_stack_00000030;
extern undefined1 LAB_10073cae[];
extern undefined1 LAB_1025bbf9[];
extern undefined1 LAB_102770d9[];
extern undefined1 LAB_1027cbdc[];
extern undefined1 LAB_1029bd76[];
extern undefined1 LAB_102bb776[];
extern undefined1 LAB_102bb78d[];
extern undefined1 LAB_102d47c4[];
extern undefined1 LAB_102d47df[];
extern undefined1 LAB_11511c1d[];
extern undefined1 LAB_11511c5d[];
extern undefined1 LAB_11511d7d[];
extern undefined1 LAB_11511dbd[];
extern undefined1 LAB_11511dfd[];
extern undefined1 LAB_11511e3d[];
extern undefined1 LAB_11511e7d[];
extern undefined1 LAB_11511ebd[];
extern undefined1 LAB_11511fed[];
extern undefined1 LAB_1151202d[];
extern undefined1 LAB_1151206d[];
extern undefined1 LAB_115120ad[];
extern undefined1 LAB_115120ed[];
extern undefined1 LAB_1151212d[];
extern undefined1 LAB_1151216d[];
extern undefined1 LAB_115121ad[];
extern undefined1 LAB_115122bd[];
extern undefined1 LAB_115122fd[];
extern undefined1 LAB_115125b0[];
extern undefined1 LAB_11512965[];
extern undefined1 LAB_115129a5[];
extern undefined1 LAB_115129e5[];
extern undefined1 LAB_11512a85[];
extern undefined1 LAB_11512b3d[];
extern undefined1 LAB_11512b7d[];
extern undefined1 LAB_11512bbd[];
extern undefined1 LAB_11512bfd[];
extern undefined1 LAB_11512cdd[];
extern undefined1 LAB_11512f10[];
extern undefined1 LAB_1151353d[];
extern undefined1 LAB_115140dd[];
extern undefined1 LAB_1151429d[];
extern undefined1 LAB_115142dd[];
extern undefined1 LAB_1151431d[];
extern undefined1 LAB_1151435d[];
extern undefined1 LAB_1151439d[];
extern undefined1 LAB_115143dd[];
extern undefined1 LAB_1151441d[];
extern undefined1 LAB_1151452d[];
extern undefined1 LAB_11514890[];
extern undefined1 LAB_115149b0[];
extern undefined1 LAB_11514c70[];
extern undefined1 LAB_11514efd[];
extern undefined1 LAB_11514f30[];
extern undefined1 LAB_11514f6d[];
extern undefined1 LAB_11514fad[];
extern undefined1 LAB_11514fed[];
extern undefined1 LAB_1151502d[];
extern undefined1 LAB_1151506d[];
extern undefined1 LAB_115150ad[];
extern undefined1 LAB_115151ad[];
extern undefined1 LAB_115151ed[];
extern undefined1 LAB_115160ad[];
extern undefined1 LAB_11516450[];
extern undefined1 LAB_115167f4[];
extern undefined1 LAB_11516a2d[];
extern undefined1 LAB_11516a86[];
extern undefined1 LAB_11516acd[];
extern undefined1 LAB_11516e8d[];
extern undefined1 LAB_11516f0d[];
extern undefined1 LAB_1151702d[];
extern undefined1 LAB_1151706d[];
extern undefined1 LAB_115170c6[];
extern undefined1 LAB_1151710d[];
extern undefined1 LAB_1151725d[];
extern undefined1 LAB_115172f5[];
extern undefined1 LAB_115173a5[];
extern undefined1 LAB_1151740b[];
extern undefined1 LAB_115176dd[];
extern undefined1 LAB_1151771d[];
extern undefined1 LAB_1151779d[];
extern undefined1 LAB_1151781d[];
extern undefined1 LAB_11517865[];
extern undefined1 LAB_11517936[];
extern undefined1 LAB_11517b4d[];
extern undefined1 LAB_11517c1d[];
extern undefined1 LAB_11517c76[];
extern undefined1 LAB_11517cbd[];
extern undefined1 LAB_11517dad[];
extern undefined1 LAB_11517f84[];
extern undefined1 LAB_11518030[];
extern undefined1 LAB_115181d4[];
extern undefined1 LAB_1151821d[];
extern undefined1 LAB_1151865d[];
extern undefined1 LAB_11518780[];
extern undefined1 LAB_115187bd[];
extern undefined1 LAB_115188b0[];
extern undefined1 LAB_115188e0[];
extern undefined1 LAB_11518910[];
extern undefined1 LAB_11518970[];
extern undefined1 LAB_11518a90[];
extern undefined1 LAB_1151955e[];
extern undefined1 LAB_11519757[];
extern undefined1 LAB_115199c0[];
extern undefined1 LAB_11519bcd[];
extern undefined1 LAB_11519c0d[];
extern undefined1 LAB_11519c4d[];
extern undefined1 LAB_11519c8d[];
extern undefined1 LAB_11519ccd[];
extern undefined1 LAB_11519d0d[];
extern undefined1 LAB_11519d7d[];
extern undefined1 LAB_11519e1d[];
extern undefined1 LAB_11519e5d[];
extern undefined1 LAB_11519ecd[];
extern undefined1 LAB_11519f0d[];
extern undefined1 LAB_11519f4d[];
extern undefined1 LAB_11519f8d[];
extern undefined1 LAB_11519fee[];
extern undefined1 LAB_1151a2dd[];
extern undefined1 LAB_1151a3ad[];
extern undefined1 LAB_1151a4b4[];
extern undefined1 LAB_1151ab9a[];
extern undefined1 LAB_1151aeb5[];
extern undefined1 LAB_1151aeed[];
extern undefined1 LAB_1151af2d[];
extern undefined1 LAB_1151b05d[];
extern undefined1 LAB_1151b125[];
extern undefined1 LAB_1151b15d[];
extern undefined1 LAB_1151b19d[];
extern undefined1 LAB_1151b1dd[];
extern undefined1 LAB_1151b21d[];
extern undefined1 LAB_1151b25d[];
extern undefined1 LAB_1151b2a5[];
extern undefined1 LAB_1151b390[];
extern undefined1 LAB_1151b46d[];
extern undefined1 LAB_1151b4ad[];
extern undefined1 LAB_1151b4ed[];
extern undefined1 LAB_1151b52d[];
extern undefined1 LAB_1151b613[];
extern undefined1 LAB_1151b790[];
extern undefined1 LAB_1151bdfd[];
extern undefined1 LAB_1151bfe5[];
extern undefined1 LAB_1151c16d[];
extern undefined1 LAB_1151c28d[];
extern undefined1 LAB_1151c4d5[];
extern undefined1 LAB_1151c500[];
extern undefined1 LAB_1151c53d[];
extern undefined1 LAB_1151c760[];
extern undefined1 LAB_1151c865[];
extern undefined1 LAB_1151c965[];
extern undefined1 LAB_1151cd0d[];
extern undefined1 LAB_1151cd6b[];
extern undefined1 LAB_1151cdad[];
extern undefined1 LAB_1151d310[];
extern undefined1 LAB_1151d540[];
extern undefined1 LAB_1151d947[];
extern undefined1 LAB_1151d994[];
extern undefined1 LAB_1151dd9d[];
extern undefined1 LAB_1151dddd[];
extern undefined1 LAB_1151de1d[];
extern undefined1 LAB_1151de5d[];
extern undefined1 LAB_1151de9d[];
extern undefined1 LAB_1151deed[];
extern undefined1 LAB_1151df2d[];
extern undefined1 LAB_1151e0b7[];
extern undefined1 LAB_1151e1ad[];
extern undefined1 LAB_1151e21d[];
extern undefined1 LAB_1151e48d[];
extern undefined1 LAB_1151e5b0[];
extern undefined1 LAB_1151e660[];
extern undefined1 LAB_1151eadd[];
extern undefined1 LAB_1151eb1d[];
extern undefined1 LAB_1151ed90[];
extern undefined1 LAB_1151ee78[];
extern undefined1 LAB_1151f1cd[];
extern undefined1 LAB_1151f29d[];
extern undefined1 LAB_1151f31d[];
extern undefined1 LAB_1151f35d[];
extern undefined1 LAB_1151f39d[];
extern undefined1 LAB_1151f3dd[];
extern undefined1 LAB_1151f430[];
extern undefined1 LAB_1151f46d[];
extern undefined1 LAB_1151f4ad[];
extern undefined1 LAB_1151f4f8[];
extern undefined1 LAB_1151f560[];
extern undefined1 LAB_1151f63d[];
extern undefined1 LAB_1151f67d[];
extern undefined1 LAB_1151f6c5[];
extern undefined1 LAB_1151f6fd[];
extern undefined1 LAB_1151f748[];
extern undefined1 LAB_1151f798[];
extern undefined1 LAB_1151f7e8[];
extern undefined1 LAB_11520300[];
extern undefined1 LAB_11520330[];
extern undefined1 LAB_11520420[];
extern undefined1 LAB_11520450[];
extern undefined1 LAB_1152057d[];
extern undefined1 LAB_115205bd[];
extern undefined1 LAB_11520880[];
extern undefined1 LAB_11520b60[];
extern undefined1 LAB_11520be0[];
extern undefined1 LAB_11520c1d[];
extern undefined1 LAB_11520c5d[];
extern undefined1 LAB_11520c9d[];
extern undefined1 LAB_11520cdd[];
extern undefined1 LAB_11520d1d[];
extern undefined1 LAB_11520d5d[];
extern undefined1 LAB_11520da4[];
extern undefined1 LAB_11520e0e[];
extern undefined1 LAB_1152172d[];
extern undefined1 LAB_1152176d[];
extern undefined1 LAB_115225a4[];
extern undefined1 LAB_11522693[];
extern undefined1 LAB_11522705[];
extern undefined1 LAB_11522780[];
extern undefined1 LAB_11522ce5[];
extern undefined1 LAB_11522ded[];
extern undefined1 LAB_11522f55[];
extern undefined1 LAB_11523015[];
extern undefined1 LAB_1152320d[];
extern undefined1 LAB_1152328d[];
extern undefined1 LAB_115232cd[];
extern undefined1 LAB_1152330d[];
extern undefined1 LAB_1152334d[];
extern undefined1 LAB_115233cd[];
extern undefined1 LAB_1152340d[];
extern undefined1 LAB_11523724[];
extern undefined1 LAB_11523efd[];
extern undefined1 LAB_11523f45[];
extern undefined1 LAB_11523f8c[];
extern undefined1 LAB_11524040[];
extern undefined1 LAB_1152416d[];
extern undefined1 LAB_11524233[];
extern undefined1 LAB_115246ad[];
extern undefined1 LAB_115246ed[];
extern undefined1 LAB_1152472d[];
extern undefined1 LAB_11524b10[];
extern undefined1 LAB_11524b40[];
extern undefined1 LAB_11525754[];
extern undefined1 LAB_1152591d[];
extern undefined1 LAB_11525950[];
extern undefined1 LAB_115259f5[];
extern undefined1 LAB_11525e3d[];
extern undefined1 LAB_11525fb0[];
extern undefined1 LAB_1152602d[];
extern undefined1 LAB_1152606d[];
extern undefined1 LAB_115260a0[];
extern undefined1 LAB_1152610d[];
extern undefined1 LAB_1152614d[];
extern undefined1 LAB_1152618d[];
extern undefined1 LAB_115261cd[];
extern undefined1 LAB_11526340[];
extern undefined1 LAB_11526490[];
extern undefined1 LAB_115264c0[];
extern undefined1 LAB_1152652d[];
extern undefined1 LAB_11526610[];
extern undefined1 LAB_1152688d[];
extern undefined1 LAB_115268cd[];
extern undefined1 LAB_11526bc4[];
extern undefined1 LAB_11526c17[];
extern undefined1 LAB_11526fc5[];
extern undefined1 LAB_11527080[];
extern undefined1 LAB_115272ad[];
extern undefined1 LAB_1152733b[];
extern undefined1 LAB_1152741b[];
extern undefined1 LAB_1152745d[];
extern undefined1 LAB_115274ab[];
extern undefined1 LAB_11527a50[];
extern undefined1 LAB_11528444[];
extern undefined1 LAB_11529060[];
extern undefined1 LAB_115293df[];
extern undefined1 LAB_11529424[];
extern undefined1 LAB_115294e0[];
extern undefined1 LAB_11529624[];
extern undefined1 LAB_11529af5[];
extern undefined1 LAB_11529b35[];
extern undefined1 LAB_11529c5d[];
extern undefined1 LAB_11529d05[];
extern undefined1 LAB_11529f3d[];
extern undefined1 LAB_1152a2b5[];
extern undefined1 LAB_1152a5a5[];
extern undefined1 LAB_1152ad44[];
extern undefined1 LAB_1152ad84[];
extern int *PTR_DAT_12119128;
extern int *stack0x00000004;
extern int *stack0x0000000c;
extern int *stack0xfffffffc;
extern void *ExceptionList;
namespace std {}
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int getSCHousehold(A...); template<class... A> int getSingleton(A...); template<class... A> int isShuttingDown(A...); };
struct SCSystemStatus { char _pad; SCSystemStatus(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int onTimerExpired; };
namespace std { template<class...> struct _Parallelism_allocator { char _pad; _Parallelism_allocator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct allocator { char _pad; allocator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct greater { char _pad; greater(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct priority_queue { char _pad; priority_queue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct vector { char _pad; vector(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
typedef void *AND;
typedef void *CHN;
typedef void *FROM;
typedef void *LOCK;
typedef void *SELECT;
typedef void *UNLOCK;
typedef void *US;
typedef void *WARNING;
typedef void *WHERE;
struct AnacapaLauncher { char _pad; AnacapaLauncher(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Base { char _pad; Base(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Certificate { char _pad; Certificate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Command { char _pad; Command(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Couldn { char _pad; Couldn(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Different { char _pad; Different(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct FID_conflict__Tidy { char _pad; FID_conflict__Tidy(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Function { char _pad; Function(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Invalid { char _pad; Invalid(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Library { char _pad; Library(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Matches { char _pad; Matches(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Multiple { char _pad; Multiple(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct NFWPwd { char _pad; NFWPwd(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Names { char _pad; Names(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RINCON_AssociatedZPUDN { char _pad; RINCON_AssociatedZPUDN(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RNetstartScanListOp { char _pad; RNetstartScanListOp(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Release { char _pad; Release(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCNetstartOps { char _pad; SCNetstartOps(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCOpNetstartSendQuery { char _pad; SCOpNetstartSendQuery(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCSecurityContext { char _pad; SCSecurityContext(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCSystemTime { char _pad; SCSystemTime(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SsidMap { char _pad; SsidMap(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Studio { char _pad; Studio(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Timer { char _pad; Timer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Visual { char _pad; Visual(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct We { char _pad; We(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct With { char _pad; With(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered_Bulk { char _pad; int __thiscall FUN_10256790(int param_2); int __thiscall FUN_10256810(int param_2); int __thiscall FUN_10256900(int param_2); int __thiscall FUN_10256980(int param_2); int __thiscall FUN_10256a70(int param_2); int __thiscall FUN_10256af0(int param_2); int __thiscall FUN_10256e50(int param_2); int __thiscall FUN_10256ed0(int param_2); undefined4 * __thiscall FUN_10257360(undefined4 param_2); int __thiscall FUN_10257470(int param_2); int __thiscall FUN_10257560(int param_2); int __thiscall FUN_10257650(int param_2); int __thiscall FUN_10257740(int param_2); int __thiscall FUN_10257830(int param_2); undefined4 * __thiscall FUN_10257ba0(void); undefined4 * __thiscall FUN_10259860(byte param_2); undefined4 * __thiscall FUN_10259fe0(byte param_2); void __thiscall FUN_1025a0e0(int param_2,int param_3,int param_4); void __thiscall FUN_1025b5b0(int *param_2); void __thiscall FUN_1025dff0(int *param_2); undefined4 * __thiscall FUN_1025e410(undefined4 *param_2); undefined4 __thiscall FUN_1025e5f0(undefined4 *param_2); undefined4 * __thiscall FUN_1025f190(undefined4 param_2); void __thiscall FUN_102607c0(int param_2); void __thiscall FUN_102627b0(undefined4 param_2); int __thiscall FUN_10263510(undefined4 param_2,undefined4 param_3,int *param_4); void __thiscall FUN_10264a60(undefined4 *param_2); undefined4 * __thiscall FUN_10265ab0(undefined4 param_2); int __thiscall FUN_102680d0(byte param_2); void __thiscall FUN_10268400(int param_2,int param_3,int param_4); void __thiscall FUN_10268490(int param_2,int param_3,int param_4); void __thiscall FUN_10268640(char param_2); void __thiscall FUN_10269990(int *param_2); void __thiscall FUN_10269a60(int *param_2); void __thiscall FUN_1026e0e0(int *param_2); int __thiscall FUN_1026f220(int param_2); undefined4 * __thiscall FUN_10271ae0(undefined4 *param_2); void __thiscall FUN_102725d0(int param_2,int param_3); int __thiscall FUN_10274ce0(int param_2); undefined4 * __thiscall FUN_10274e30(int *param_2); undefined4 * __thiscall FUN_10274f70(int *param_2,undefined1 param_3); undefined4 * __thiscall FUN_10275dd0(undefined4 *param_2); undefined4 * __thiscall FUN_10275e60(undefined4 *param_2); undefined4 * __thiscall FUN_10276160(undefined4 *param_2); undefined1 __thiscall FUN_102766c0(int param_2,int *param_3); void __thiscall FUN_10276f50(int param_2,int param_3,int param_4); void __thiscall FUN_10276fe0(uint param_2); void __thiscall FUN_102773f0(undefined4 *param_2); undefined1 __thiscall FUN_102777a0(int *param_2); void __thiscall FUN_10278e60(int *param_2,int param_3); undefined4 * __thiscall FUN_10279b60(undefined4 *param_2); undefined4 * __thiscall FUN_1027d5a0(undefined4 param_2); void __thiscall FUN_1027e130(int *param_2,undefined4 param_3); undefined4 * __thiscall FUN_1027ed00(undefined4 param_2); undefined4 * __thiscall FUN_1027f240(int param_2); undefined4 * __thiscall FUN_1027f330(int *param_2); int __thiscall FUN_1027fc80(int param_2); undefined4 * __thiscall FUN_10280140(byte param_2); void __thiscall FUN_10280c80(uint param_2); undefined4 * __thiscall FUN_102839e0(undefined4 param_2,undefined4 param_3,undefined4 *param_4); int * __thiscall FUN_10283b30(int *param_2); void __thiscall FUN_10283d50(undefined4 *param_2); int * __thiscall FUN_10283f20(undefined4 *param_2,int param_3,undefined4 param_4); void __thiscall FUN_10284040(undefined4 *param_2); undefined4 * __thiscall FUN_10284180(undefined4 *param_2,uint *param_3); void __thiscall FUN_10284760(undefined4 param_2); void __thiscall FUN_10285050(undefined4 *param_2,uint *param_3); undefined4 * __thiscall FUN_102853c0(undefined4 param_2); int * __thiscall FUN_10285570(int *param_2); int * __thiscall FUN_10285760(int *param_2); void __thiscall FUN_102864b0(int param_2,int param_3,int param_4); void __thiscall FUN_10286d60(int param_2); int * __thiscall FUN_102877e0(int *param_2); void __thiscall FUN_10289c60(int *param_2); void __thiscall FUN_1028a700(uint param_2); undefined4 * __thiscall FUN_1028b400(undefined4 param_2,undefined4 param_3,undefined4 *param_4); int * __thiscall FUN_1028b5a0(int *param_2); undefined4 * __thiscall FUN_1028b9a0(undefined4 *param_2); int * __thiscall FUN_1028bbd0(undefined4 *param_2,int param_3,undefined4 param_4); undefined4 * __thiscall FUN_1028bd10(undefined4 *param_2); undefined4 * __thiscall FUN_1028bde0(undefined4 *param_2,int *param_3); undefined4 * __thiscall FUN_1028ce80(undefined4 param_2); undefined4 * __thiscall FUN_1028cf00(undefined4 param_2); int * __thiscall FUN_1028d0c0(int *param_2); int * __thiscall FUN_1028d290(int *param_2); void __thiscall FUN_1028f140(int param_2); void __thiscall FUN_1028f1b0(int param_2); int * __thiscall FUN_102915e0(int *param_2); void __thiscall FUN_102934d0(int *param_2); undefined4 * __thiscall FUN_10294e70(int param_2); undefined4 * __thiscall FUN_10294f90(int param_2); undefined4 * __thiscall FUN_10295240(undefined4 param_2); undefined4 * __thiscall FUN_102953d0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8); undefined4 * __thiscall FUN_10297580(byte param_2); void __thiscall FUN_102986f0(int param_2); void __thiscall FUN_10298b90(int *param_2,undefined4 param_3); undefined4 __thiscall FUN_10298c70(int *param_2); undefined4 __thiscall FUN_10298dd0(int *param_2); undefined4 __thiscall FUN_10298f30(int *param_2); void __thiscall FUN_102990d0(int *param_2); undefined4 __thiscall FUN_10299350(int *param_2); undefined4 __thiscall FUN_1029b790(int param_2); undefined4 __thiscall FUN_1029b8b0(int param_2); undefined4 __thiscall FUN_1029b9d0(int *param_2); void __thiscall FUN_1029baf0(int param_2); undefined4 __thiscall FUN_1029be60(int param_2); void __thiscall FUN_1029bf70(undefined4 param_2,undefined4 param_3); void __thiscall FUN_1029c980(undefined4 param_2); undefined4 * __thiscall FUN_1029ce90(int param_2); undefined4 * __thiscall FUN_1029cf80(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1029d2d0(undefined4 *param_2); undefined4 __thiscall FUN_1029d970(int param_2); undefined4 * __thiscall FUN_1029df20(undefined1 *param_2); undefined4 * __thiscall FUN_1029e250(undefined4 *param_2); undefined4 * __thiscall FUN_1029f170(undefined4 param_2); undefined4 * __thiscall FUN_1029f930(byte param_2); void __thiscall FUN_1029fe10(int param_2); undefined4 __thiscall FUN_102a0ef0(undefined4 *param_2); undefined4 * __thiscall FUN_102a1a10(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5); undefined4 * __thiscall FUN_102a1ad0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5); void __thiscall FUN_102a2ce0(int param_2,int param_3); void __thiscall FUN_102a33c0(int *param_2); void __thiscall FUN_102a3cd0(undefined4 param_2); int * __thiscall FUN_102a4110(int *param_2,uint *param_3); int * __thiscall FUN_102a4940(int *param_2,uint *param_3); int * __thiscall FUN_102a4d60(int *param_2,uint *param_3); undefined4 * __thiscall FUN_102a6950(undefined4 param_2); undefined4 * __thiscall FUN_102a69d0(undefined4 param_2); int * __thiscall FUN_102a6e60(int *param_2); int * __thiscall FUN_102a6fe0(int *param_2); int * __thiscall FUN_102a7120(int *param_2); int * __thiscall FUN_102a71f0(int *param_2); undefined4 * __thiscall FUN_102a72c0(char *param_2,char *param_3,char *param_4); int __thiscall FUN_102aab80(uint *param_2); int __thiscall FUN_102aac70(uint *param_2); undefined4 * __thiscall FUN_102abb70(byte param_2); int __thiscall FUN_102abef0(byte param_2); void __thiscall FUN_102ac6a0(int param_2,int param_3,int param_4); void __thiscall FUN_102ac730(int param_2,int param_3,int param_4); void __thiscall FUN_102bac70(int param_2,int *param_3); int * __thiscall FUN_102bc2e0(int *param_2); undefined4 * __thiscall FUN_102bc540(undefined4 param_2); int * __thiscall FUN_102bc730(undefined4 *param_2,int param_3,undefined4 param_4); undefined4 * __thiscall FUN_102bc860(undefined4 param_2); int * __thiscall FUN_102bcc90(int *param_2,undefined4 *param_3); undefined4 * __thiscall FUN_102bd240(undefined4 param_2); int * __thiscall FUN_102bd350(int *param_2); void __thiscall FUN_102be420(int param_2); void __thiscall FUN_102c0be0(int *param_2); int __thiscall FUN_102c12f0(int param_2); int __thiscall FUN_102c1370(void); void __thiscall FUN_102c1c40(int *param_2); int __thiscall FUN_102c3d00(int param_2); int __thiscall FUN_102c3d90(int param_2); int __thiscall FUN_102c8100(undefined4 param_2); bool __thiscall FUN_102c8b90(undefined4 *param_2); undefined4 __thiscall FUN_102ca630(undefined4 param_2); void __thiscall FUN_102ca690(int *param_2); undefined4 * __thiscall FUN_102ca920(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5); int * __thiscall FUN_102cb2c0(int *param_2,uint *param_3); int * __thiscall FUN_102cb730(int *param_2,uint *param_3); int * __thiscall FUN_102cbd20(int param_2); undefined4 * __thiscall FUN_102cc0f0(undefined4 param_2); int __thiscall FUN_102cc240(int param_2); int __thiscall FUN_102cc2d0(int param_2); int __thiscall FUN_102cd3f0(uint *param_2); int __thiscall FUN_102cd9f0(byte param_2); void __thiscall FUN_102cdbe0(int param_2,int param_3,int param_4); void __thiscall FUN_102cf600(int *param_2,uint *param_3); undefined4 * __thiscall FUN_102cf660(undefined4 *param_2,int *param_3); undefined4 * __thiscall FUN_102cf840(undefined4 *param_2); undefined4 * __thiscall FUN_102d1eb0(undefined4 param_2,undefined4 param_3,undefined4 *param_4); undefined4 * __thiscall FUN_102d3080(undefined4 *param_2); int __thiscall FUN_102d3210(int param_2); void __thiscall FUN_102d4700(uint param_2,undefined4 param_3); float __thiscall FUN_102d48e0(int param_2); void __thiscall FUN_102d4e30(int param_2); undefined4 * __thiscall FUN_102d85d0(undefined4 *param_2); undefined4 * __thiscall FUN_102d8b30(void *param_2,undefined4 *param_3); int __thiscall FUN_102d9d60(int param_2); void __thiscall FUN_102da6b0(int param_2,int param_3,int param_4); undefined4 * __thiscall FUN_102dddd0(undefined4 *param_2); int * __thiscall FUN_102de330(int *param_2); void __thiscall FUN_102de6a0(byte param_2,int param_3); };
using namespace std;
undefined4 * FUN_10255de0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * FUN_10255e80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __fastcall FUN_10257c70(undefined4 *param_1);
void __fastcall FUN_102586f0(undefined4 *param_1);
void __fastcall FUN_102589b0(int *param_1);
undefined4 * __fastcall FUN_1025a190(int param_1);
undefined4 * __fastcall FUN_1025a230(int param_1);
undefined4 * __fastcall FUN_1025a2d0(int param_1);
undefined4 * __fastcall FUN_1025a450(int param_1);
void __fastcall FUN_1025b340(int *param_1);
undefined4 * __stdcall FUN_1025b3c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_1025b460(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __stdcall FUN_1025b500(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 FUN_1025bae0(undefined4 param_1,undefined4 param_2);
undefined4 * FUN_1025c790(undefined4 *param_1);
undefined4 * __fastcall FUN_1025d6c0(undefined4 *param_1);
undefined4 * FUN_1025e490(undefined4 *param_1);
undefined4 * FUN_10260b00(undefined4 *param_1);
undefined4 * FUN_102648c0(undefined4 *param_1);
undefined4 * FUN_10264960(undefined4 *param_1);
undefined4 * FUN_10264b70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * FUN_10264c10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * FUN_10264cb0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * FUN_10264d50(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __fastcall FUN_10266ab0(int param_1);
void __fastcall FUN_10266dd0(int param_1);
void __fastcall FUN_10266ff0(int *param_1);
void __fastcall FUN_10267070(int *param_1);
int * __fastcall FUN_10267820(int *param_1);
undefined4 * __fastcall FUN_10268560(int param_1);
void __fastcall FUN_10268e30(int *param_1);
void __fastcall FUN_10268eb0(int *param_1);
undefined4 * __stdcall FUN_10268f30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __stdcall FUN_10268fd0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_10269070(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_10269110(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __stdcall FUN_102691b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __stdcall FUN_10269250(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __fastcall FUN_1026fc90(int param_1);
void FUN_10272960(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
undefined1 FUN_10272a10(int param_1,int *param_2);
undefined1 FUN_10272af0(undefined4 param_1,int param_2);
undefined4 * FUN_10273980(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * FUN_10273ae0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 FUN_10273f70(int *param_1,int *param_2,int *param_3);
void FUN_102742c0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
undefined1 FUN_10274370(int param_1,int *param_2);
undefined1 FUN_10274450(undefined4 param_1,int param_2);
undefined4 * __fastcall FUN_102750f0(undefined4 *param_1);
void __fastcall FUN_10275910(int *param_1);
void __fastcall FUN_102759c0(int *param_1);
undefined1 __stdcall FUN_102763b0(undefined4 param_1,int *param_2);
undefined1 __stdcall FUN_10276450(int param_1,int *param_2,int param_3,int *param_4);
void __stdcall FUN_102776f0(undefined4 *param_1,int param_2);
undefined1 __stdcall FUN_10277880(int param_1);
void __fastcall FUN_10277ea0(int *param_1);
void __fastcall FUN_10278040(int *param_1);
undefined4 * __stdcall FUN_102780c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void * FUN_10278390(uint param_1);
undefined4 * FUN_102788f0(undefined4 *param_1);
void FUN_1027cb60(int param_1);
int FUN_1027d2f0(undefined4 param_1);
void __fastcall FUN_1027f660(int *param_1);
void __fastcall FUN_1027f6c0(int *param_1);
void __fastcall FUN_1027f720(int *param_1);
void __fastcall FUN_1027f8b0(undefined4 *param_1);
void __fastcall FUN_10281490(int *param_1);
undefined4 * FUN_10282a40(undefined4 *param_1,char *param_2);
void __fastcall FUN_10282c40(int param_1);
void __fastcall FUN_10282f10(int param_1);
void __fastcall FUN_10283480(int param_1);
int __fastcall FUN_10283860(int param_1);
void FUN_10283de0(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
undefined4 * FUN_10284aa0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * FUN_10284b40(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __fastcall FUN_10285850(undefined4 *param_1);
void __fastcall FUN_10286f30(int *param_1);
undefined4 * __stdcall FUN_10286fb0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void * FUN_102871c0(uint param_1);
void __fastcall FUN_10287250(int *param_1);
undefined4 * __stdcall FUN_10287c30(undefined4 *param_1);
void FUN_10288050(void);
void __fastcall FUN_10289de0(int param_1);
void __fastcall FUN_10289f00(int param_1);
void FUN_1028a950(void);
undefined4 * FUN_1028ba50(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
void FUN_1028c4d0(undefined4 param_1,int param_2);
undefined4 * __fastcall FUN_1028d5b0(undefined4 *param_1);
void __fastcall FUN_1028daf0(int param_1);
void __fastcall FUN_1028de00(undefined4 *param_1);
bool FUN_1028e330(undefined4 *param_1,undefined4 *param_2);
undefined4
__stdcall FUN_1028f950(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13);
void * FUN_10290090(uint param_1);
undefined4 * FUN_102907c0(undefined4 *param_1,int *param_2);
undefined4 * __stdcall FUN_10291060(undefined4 *param_1,int *param_2);
undefined4 __fastcall FUN_10291e90(int *param_1);
void __stdcall FUN_10291fa0(undefined4 *param_1);
undefined4 __stdcall FUN_10292010(undefined4 param_1);
undefined4 * FUN_10292c70(undefined4 *param_1);
undefined4 __stdcall FUN_10293020(undefined4 param_1,undefined4 param_2);
void __fastcall FUN_10296750(undefined4 *param_1);
void __fastcall FUN_10298890(int param_1);
void __fastcall FUN_102988f0(int param_1);
void __fastcall FUN_10298960(int param_1);
void __fastcall FUN_102989c0(int param_1);
void __fastcall FUN_10298a20(int param_1);
void __fastcall FUN_10298a80(int param_1);
void __fastcall FUN_10298b30(int param_1);
void * FUN_10299500(uint param_1);
void __fastcall FUN_10299b60(int param_1);
void __fastcall FUN_1029b6d0(int param_1);
undefined4 * FUN_1029d380(undefined4 *param_1,undefined4 *param_2);
undefined4 * FUN_1029d610(undefined4 *param_1);
void __fastcall FUN_1029d8a0(int *param_1);
int __fastcall FUN_1029dab0(int param_1);
void FUN_1029dd80(int *param_1,int param_2);
undefined4 * FUN_1029e4b0(undefined4 *param_1);
void FUN_1029e960(int *param_1,char *param_2);
void __fastcall FUN_1029f5a0(undefined4 *param_1);
uint FUN_102a14a0(int *param_1);
void __fastcall FUN_102a1790(int param_1);
void FUN_102a2fd0(int *param_1,int *param_2);
int __stdcall FUN_102a5020(int param_1,int param_2,int param_3);
int FUN_102a5110(int param_1,int param_2,int param_3);
undefined4 * FUN_102a51a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * FUN_102a5240(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
int * FUN_102a52e0(int *param_1,int *param_2,int *param_3);
undefined4 * FUN_102a53f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * FUN_102a5490(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_102a5810(undefined4 param_1,int *param_2,int *param_3);
void FUN_102a5ab0(undefined4 param_1,int param_2);
void __fastcall FUN_102a94c0(int *param_1);
void __fastcall FUN_102a9520(int *param_1);
void __fastcall FUN_102a9b00(int *param_1);
void __fastcall FUN_102a9bb0(int *param_1);
void __fastcall FUN_102a9cf0(int param_1);
void __stdcall FUN_102ac980(int *param_1,int *param_2);
void __fastcall FUN_102ad6c0(int *param_1);
void __fastcall FUN_102ad740(int *param_1);
int * __stdcall FUN_102ad7c0(int *param_1,int *param_2,int *param_3);
undefined4 * __stdcall FUN_102ad8d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __stdcall FUN_102ad970(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_102ada10(int param_1,int param_2);
void FUN_102adaa0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_102adb60(int param_1,int param_2);
void __stdcall FUN_102adbf0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void * FUN_102ae180(uint param_1);
void * FUN_102ae200(uint param_1);
void * FUN_102ae270(uint param_1);
undefined4 * FUN_102ae440(undefined4 *param_1,undefined4 param_2);
undefined4 * FUN_102ae4d0(undefined4 *param_1);
void FUN_102b1f60(undefined4 param_1);
void FUN_102b2000(undefined4 param_1);
void __fastcall FUN_102b4fb0(int param_1);
void __fastcall FUN_102b5010(int param_1);
void __fastcall FUN_102b7800(int param_1);
void __fastcall FUN_102b7c50(int param_1);
void __fastcall FUN_102b7ed0(int param_1);
void __stdcall FUN_102b8490(int param_1);
void __fastcall FUN_102b8590(int param_1);
undefined4 * FUN_102ba4d0(undefined4 *param_1);
undefined1 FUN_102bb280(int *param_1);
undefined1 __fastcall FUN_102bb6b0(int param_1);
void __fastcall FUN_102bba10(int param_1);
undefined4 * FUN_102bc5e0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_102bcd50(undefined4 param_1,int param_2);
undefined4 * FUN_102beb10(undefined4 *param_1);
undefined4 * FUN_102c0620(undefined4 *param_1);
undefined4 * __fastcall FUN_102c1410(undefined4 *param_1);
void __fastcall FUN_102c1660(int *param_1);
undefined4 * FUN_102c1e60(undefined4 *param_1);
void __stdcall FUN_102c20b0(int *param_1);
undefined4 * __fastcall FUN_102c3e30(undefined4 *param_1);
void __fastcall FUN_102c4a30(int *param_1);
void __fastcall FUN_102c4a90(int *param_1);
void __fastcall FUN_102c6b80(int param_1);
undefined4 * FUN_102c6bf0(undefined4 *param_1,int param_2);
void __fastcall FUN_102c8500(int param_1);
void __fastcall FUN_102c85b0(int param_1);
int * FUN_102c8c20(int *param_1,int *param_2);
void __stdcall FUN_102c8e30(int param_1);
bool __fastcall FUN_102c8fa0(int param_1);
void FUN_102cb340(undefined4 param_1,int param_2);
undefined4 * FUN_102cb860(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_102cbb70(undefined4 param_1,int param_2);
void __fastcall FUN_102cc7b0(int *param_1);
void __fastcall FUN_102cccd0(int param_1);
void __fastcall FUN_102cce40(int param_1);
void __fastcall FUN_102cceb0(int *param_1);
void __fastcall FUN_102ce270(int *param_1);
void FUN_102ce330(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __stdcall FUN_102ce3d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * FUN_102cf370(undefined4 *param_1,int param_2);
void __fastcall FUN_102cf520(int param_1);
void __fastcall FUN_102cffa0(int param_1);
void __fastcall FUN_102d0050(int param_1);
int * __stdcall FUN_102d0e60(int *param_1,int *param_2);
void __stdcall FUN_102d11b0(int param_1);
void FUN_102d29a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __fastcall FUN_102d2bb0(undefined4 *param_1);
undefined4 * __fastcall FUN_102d32c0(undefined4 *param_1);
void __fastcall FUN_102d3c00(int param_1);
void __fastcall FUN_102d3c70(int *param_1);
void __fastcall FUN_102d3d50(int *param_1);
void __fastcall FUN_102d4ed0(float *param_1);
void __fastcall FUN_102d5010(int *param_1);
void __fastcall FUN_102d5080(int *param_1);
void __fastcall FUN_102d5420(int param_1);
void __fastcall FUN_102d54b0(int *param_1);
undefined4 *
FUN_102d5690(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_102d9690(int *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_102da960(int *param_1);
void * FUN_102daa80(uint param_1);
void __fastcall FUN_102dcd40(int *param_1);
void FUN_102dd810(void);
undefined4 * __stdcall FUN_102dd8c0(undefined4 *param_1);
undefined4 * FUN_102dd9b0(undefined4 *param_1,undefined4 param_2);
int * __stdcall FUN_102dfb30(int *param_1,undefined4 param_2,int *param_3);
int * __stdcall FUN_102dfc20(int *param_1,undefined4 param_2,int *param_3);
undefined4 * __stdcall FUN_102e0090(undefined4 *param_1,int *param_2,int *param_3);
int * __stdcall FUN_102e0270(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4);
int * __stdcall FUN_102e09c0(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
int * __stdcall FUN_102e1690(int *param_1,int *param_2);
int * __stdcall FUN_102e2140(int *param_1,undefined4 param_2,int *param_3);
undefined4 * FUN_102e3db0(undefined4 *param_1);
undefined4 * FUN_102e3e40(undefined4 *param_1);
// Reference entry 10255de0; body size 124 bytes.
#line 1 "ENTRY_10255de0"

undefined4 * FUN_10255de0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10255e80; body size 124 bytes.
#line 1 "ENTRY_10255e80"

undefined4 * FUN_10255e80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10256790; body size 96 bytes.
#line 1 "ENTRY_10256790"

int __thiscall Recovered_Bulk::FUN_10256790(int param_2)
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


// Reference entry 10256810; body size 96 bytes.
#line 1 "ENTRY_10256810"

int __thiscall Recovered_Bulk::FUN_10256810(int param_2)
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


// Reference entry 10256900; body size 96 bytes.
#line 1 "ENTRY_10256900"

int __thiscall Recovered_Bulk::FUN_10256900(int param_2)
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


// Reference entry 10256980; body size 96 bytes.
#line 1 "ENTRY_10256980"

int __thiscall Recovered_Bulk::FUN_10256980(int param_2)
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


// Reference entry 10256a70; body size 96 bytes.
#line 1 "ENTRY_10256a70"

int __thiscall Recovered_Bulk::FUN_10256a70(int param_2)
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


// Reference entry 10256af0; body size 96 bytes.
#line 1 "ENTRY_10256af0"

int __thiscall Recovered_Bulk::FUN_10256af0(int param_2)
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


// Reference entry 10256e50; body size 96 bytes.
#line 1 "ENTRY_10256e50"

int __thiscall Recovered_Bulk::FUN_10256e50(int param_2)
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


// Reference entry 10256ed0; body size 96 bytes.
#line 1 "ENTRY_10256ed0"

int __thiscall Recovered_Bulk::FUN_10256ed0(int param_2)
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


// Reference entry 10257360; body size 93 bytes.
#line 1 "ENTRY_10257360"

undefined4 * __thiscall Recovered_Bulk::FUN_10257360(undefined4 param_2)
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


// Reference entry 10257470; body size 93 bytes.
#line 1 "ENTRY_10257470"

int __thiscall Recovered_Bulk::FUN_10257470(int param_2)
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


// Reference entry 10257560; body size 93 bytes.
#line 1 "ENTRY_10257560"

int __thiscall Recovered_Bulk::FUN_10257560(int param_2)
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


// Reference entry 10257650; body size 93 bytes.
#line 1 "ENTRY_10257650"

int __thiscall Recovered_Bulk::FUN_10257650(int param_2)
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


// Reference entry 10257740; body size 93 bytes.
#line 1 "ENTRY_10257740"

int __thiscall Recovered_Bulk::FUN_10257740(int param_2)
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


// Reference entry 10257830; body size 93 bytes.
#line 1 "ENTRY_10257830"

int __thiscall Recovered_Bulk::FUN_10257830(int param_2)
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


// Reference entry 10257ba0; body size 156 bytes.
#line 1 "ENTRY_10257ba0"

undefined4 * __thiscall Recovered_Bulk::FUN_10257ba0(void)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  undefined4 uVar2;
  int *in_stack_00000028;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInAppPurchaseCallback);
  param_1[0xb] = (undefined4)(0);

  if (in_stack_00000028 != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)*in_stack_00000028)(param_1 + 2,uVar1));
    param_1[0xb] = (undefined4)(uVar2);
    if (in_stack_00000028 != (int *)0x0) {
      (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004);
    }
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10257c70; body size 140 bytes.
#line 1 "ENTRY_10257c70"

undefined4 * __fastcall FUN_10257c70(undefined4 *param_1)

{
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInAppPurchaseManager);

  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x20));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  param_1[2] = (undefined4)(pvVar1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102586f0; body size 92 bytes.
#line 1 "ENTRY_102586f0"

void __fastcall FUN_102586f0(undefined4 *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if (param_1[1] != 0) {
    thunk_FUN_102560a0(*param_1,param_1[1] + 0x10,DAT_12126b84 );
    if (param_1[1] != 0) {
      thunk_FUN_1148a50e(param_1[1],0x20);
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 102589b0; body size 96 bytes.
#line 1 "ENTRY_102589b0"

void __fastcall FUN_102589b0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10254af0(*param_1,param_1[1],param_1);
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


// Reference entry 10259860; body size 82 bytes.
#line 1 "ENTRY_10259860"

undefined4 * __thiscall Recovered_Bulk::FUN_10259860(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCArray);
  thunk_FUN_10254af0(*puVar1,param_1[3],puVar1);
  param_1[3] = (undefined4)(*puVar1);
  thunk_FUN_102589b0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10259fe0; body size 81 bytes.
#line 1 "ENTRY_10259fe0"

undefined4 * __thiscall Recovered_Bulk::FUN_10259fe0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInAppPurchaseManager);
  thunk_FUN_10254f10(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1025a0e0; body size 104 bytes.
#line 1 "ENTRY_1025a0e0"

void __thiscall Recovered_Bulk::FUN_1025a0e0(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10254af0(*param_1,param_1[1],param_1);
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


// Reference entry 1025a190; body size 127 bytes.
#line 1 "ENTRY_1025a190"

undefined4 * __fastcall FUN_1025a190(int param_1)

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


// Reference entry 1025a230; body size 127 bytes.
#line 1 "ENTRY_1025a230"

undefined4 * __fastcall FUN_1025a230(int param_1)

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


// Reference entry 1025a2d0; body size 127 bytes.
#line 1 "ENTRY_1025a2d0"

undefined4 * __fastcall FUN_1025a2d0(int param_1)

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


// Reference entry 1025a450; body size 127 bytes.
#line 1 "ENTRY_1025a450"

undefined4 * __fastcall FUN_1025a450(int param_1)

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


// Reference entry 1025b340; body size 96 bytes.
#line 1 "ENTRY_1025b340"

void __fastcall FUN_1025b340(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10254af0(*param_1,param_1[1],param_1);
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


// Reference entry 1025b3c0; body size 123 bytes.
#line 1 "ENTRY_1025b3c0"

undefined4 * __stdcall FUN_1025b3c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 1025b460; body size 121 bytes.
#line 1 "ENTRY_1025b460"

void FUN_1025b460(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 1025b500; body size 121 bytes.
#line 1 "ENTRY_1025b500"

void __stdcall FUN_1025b500(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 1025b5b0; body size 167 bytes.
#line 1 "ENTRY_1025b5b0"

void __thiscall Recovered_Bulk::FUN_1025b5b0(int *param_2)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar3 = (int *)((int *)0x0);
  local_18 = (int *)(param_2);
  local_14 = (int *)((int *)0x0);
  if (param_2 != (int *)0x0) {
    piVar3 = (int *)((int *)(**(code **)(*param_2 + 0xc))(DAT_12126b84 ));
    local_14 = (int *)(piVar3);
    (**(code **)(*piVar3 + 4))();
  }
  iVar1 = (int)(*(int *)(param_1 + 0x30));

  puVar2 = (undefined4 *)(*(undefined4 **)(iVar1 + 0xc));
  if (puVar2 == *(undefined4 **)(iVar1 + 0x10)) {
    thunk_FUN_10254c20(puVar2,&local_18);
  }
  else {
    *puVar2 = (undefined4)(param_2);
    puVar2[1] = (undefined4)(piVar3);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 8;
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 1025bae0; body size 420 bytes.
#line 1 "ENTRY_1025bae0"

undefined4 FUN_1025bae0(undefined4 param_1,undefined4 param_2)

{
 try {
  undefined1 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *in_stack_00000030;
  int *piVar5;
  int *piVar6;
  undefined1 auStack_94 [32];
  undefined4 uStack_74;
  uint uStack_70;
  int **ppiStack_6c;
  uint uStack_68;
  int local_54 [9];
  int *local_30;
  int *local_2c;
  int *local_28;
  undefined4 local_20;
  int *local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uStack_68 = (uint)(DAT_12126b84);

  local_20 = (undefined4)(param_1);
  local_14 = (undefined1 *)((undefined1 *)param_1);
  ppiStack_6c = (int **)(&local_1c);


  piVar2 = (int *)((int *)createSCStringArray());
  piVar5 = (int *)((int *)*piVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar2 = (int)(0);
  local_2c = (int *)(piVar5);
  if (piVar5 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    ppiStack_6c = (int **)((int **)0x1025bb44);
    piVar2 = (int *)((int *)(**(code **)(*piVar5 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  local_28 = (int *)(piVar2);
  if (local_1c != (int *)0x0) {
    ppiStack_6c = (int **)((int **)0x1025bb5d);
    (**(code **)(*local_1c + 8))();
  }
  ppiStack_6c = (int **)((int **)param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;

  (**(code **)(*piVar5 + 0x24))();
  local_14 = (undefined1 *)(auStack_94);
  local_30 = (int *)((int *)0x0);
  local_18 = (int *)(local_54);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  puVar1 = (undefined1 *)(auStack_94);
  if (in_stack_00000030 != (int *)0x0) {
    local_30 = (int *)((int *)(**(code **)*in_stack_00000030)(local_54));
    puVar1 = (undefined1 *)(local_14);
  }
  local_14 = (undefined1 *)(puVar1);

  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));
  puVar3 = (undefined4 *)(operator_new(0x30));
  *puVar3 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar3[0xb] = (undefined4)(0);
  if (local_30 != (int *)0x0) {
    if (local_30 == (int *)(local_54)) {
      uVar4 = (undefined4)((**(code **)(*local_30 + 4))(puVar3 + 2));
      puVar3[0xb] = (undefined4)(uVar4);
      if (local_30 == (int *)0x0) goto LAB_1025bbf9;
      (**(code **)(*local_30 + 0x10))(local_30 != (int *)(local_54));
    }
    else {
      puVar3[0xb] = (undefined4)(local_30);
    }
    local_30 = (int *)((int *)0x0);
  }
LAB_1025bbf9:
  *(undefined4 **)(local_14 + 0x24) = puVar3;
  if (local_30 != (int *)0x0) {
    (**(code **)(*local_30 + 0x10))(local_30 != (int *)(local_54));
    local_30 = (int *)((int *)0x0);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  piVar6 = (int *)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar5,piVar2);
  }
  uVar4 = (undefined4)(local_20);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  thunk_FUN_1025c140(local_20,piVar5,piVar6);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(9)));
  if (piVar2 != (int *)0x0) {

    (**(code **)(*piVar2 + 8))();
  }
  if (in_stack_00000030 != (int *)0x0) {
    uStack_70 = (uint)((uint)(in_stack_00000030 != (int *)&stack0x0000000c));

    (**(code **)(*in_stack_00000030 + 0x10))();
  }

  return (undefined4)(uVar4);

 } catch (...) { }
}


// Reference entry 1025c790; body size 98 bytes.
#line 1 "ENTRY_1025c790"

undefined4 * FUN_1025c790(undefined4 *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_1025c5c0(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1025d6c0; body size 94 bytes.
#line 1 "ENTRY_1025d6c0"

undefined4 * __fastcall FUN_1025d6c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInAppMessaging);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1025dff0; body size 80 bytes.
#line 1 "ENTRY_1025dff0"

void __thiscall Recovered_Bulk::FUN_1025dff0(int *param_2)
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


// Reference entry 1025e410; body size 102 bytes.
#line 1 "ENTRY_1025e410"

undefined4 * __thiscall Recovered_Bulk::FUN_1025e410(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(operator_new(0x14));
  if (piVar1 == (int *)0x0) {
    *param_2 = (undefined4)(0);
  }
  else {
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar1[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCTime);
    piVar1[2] = (int)(*(int *)(param_1 + 8));
    piVar1[3] = (int)(*(int *)(param_1 + 0xc));
    piVar1[4] = (int)(*(int *)(param_1 + 0x10));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1025e490; body size 96 bytes.
#line 1 "ENTRY_1025e490"

undefined4 * FUN_1025e490(undefined4 *param_1)

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
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCTime);
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


// Reference entry 1025e5f0; body size 93 bytes.
#line 1 "ENTRY_1025e5f0"

undefined4 __thiscall Recovered_Bulk::FUN_1025e5f0(undefined4 *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = (int)(*(int *)(param_1 + 8));
  iVar2 = (int)(*(int *)(param_1 + 0xc));
  iVar3 = (int)(*(int *)(param_1 + 8));
  iVar4 = (int)(*(int *)(param_1 + 0x10));
  piVar5 = (int *)((int *)*param_2);
  iVar6 = (int)((**(code **)(*piVar5 + 0x1c))());
  iVar7 = (int)((**(code **)(*piVar5 + 0x30))());
  iVar8 = (int)((**(code **)(*piVar5 + 0x38))());
  iVar8 = (int)(iVar8 + (iVar7 + iVar6 * 0x3c) * 0x3c);
  return (undefined4)(((uint)((int3)((uint)iVar8 >> 8)) << 8 | (uint)(iVar4 + (iVar2 + (iVar1 * 0x10 - iVar3) * 4) * 0x3c < iVar8)));
}


// Reference entry 1025f190; body size 93 bytes.
#line 1 "ENTRY_1025f190"

undefined4 * __thiscall Recovered_Bulk::FUN_1025f190(undefined4 param_2)
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

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102607c0; body size 79 bytes.
#line 1 "ENTRY_102607c0"

void __thiscall Recovered_Bulk::FUN_102607c0(int param_2)
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


// Reference entry 10260b00; body size 82 bytes.
#line 1 "ENTRY_10260b00"

undefined4 * FUN_10260b00(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(operator_new(0xc));
  if (piVar1 == (int *)0x0) {
    *param_1 = (undefined4)(0);
  }
  else {
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar1[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar1[2] = (int)(0);
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCShareNameInput);
    *param_1 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      return (undefined4 *)(param_1);
    }
  }
  return (undefined4 *)(param_1);
}


// Reference entry 102627b0; body size 72 bytes.
#line 1 "ENTRY_102627b0"

void __thiscall Recovered_Bulk::FUN_102627b0(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 uVar2;
  
  (**(code **)(**(int **)(param_1 + 0x14) + 0xd4))(param_1 + 0xc,param_2);
  iVar1 = (int)(**(int **)(param_1 + 0x14));
  uVar2 = (undefined1)((**(code **)(**(int **)(param_1 + 0x18) + 0x30))());
  (**(code **)(iVar1 + 0xe4))(param_1 + 0x10,uVar2);
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 4))();
  }
  return;
}


// Reference entry 10263510; body size 179 bytes.
#line 1 "ENTRY_10263510"

int __thiscall Recovered_Bulk::FUN_10263510(undefined4 param_2,undefined4 param_3,int *param_4)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  puVar2 = (undefined4 *)(operator_new(0x10));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[1] = (undefined4)(param_2);
  puVar2[2] = (undefined4)(param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  puVar2[3] = (undefined4)(param_4);
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 4))(uVar1);
  }
  *(undefined4 **)(param_1 + 0x24) = puVar2;

  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 8))();
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 102648c0; body size 118 bytes.
#line 1 "ENTRY_102648c0"

undefined4 * FUN_102648c0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)(operator_new(0x10));
  *puVar3 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);

  puVar3[1] = (undefined4)(*param_1);
  puVar3[2] = (undefined4)(param_1[1]);
  piVar1 = (int *)((int *)param_1[2]);
  puVar3[3] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }

  return (undefined4 *)(puVar3);

 } catch (...) { }
}


// Reference entry 10264960; body size 118 bytes.
#line 1 "ENTRY_10264960"

undefined4 * FUN_10264960(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)(operator_new(0x10));
  *puVar3 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);

  puVar3[1] = (undefined4)(*param_1);
  puVar3[2] = (undefined4)(param_1[1]);
  piVar1 = (int *)((int *)param_1[2]);
  puVar3[3] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }

  return (undefined4 *)(puVar3);

 } catch (...) { }
}


// Reference entry 10264a60; body size 125 bytes.
#line 1 "ENTRY_10264a60"

void __thiscall Recovered_Bulk::FUN_10264a60(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)(operator_new(0x10));
  *puVar3 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);

  puVar3[1] = (undefined4)(*param_2);
  puVar3[2] = (undefined4)(param_2[1]);
  piVar1 = (int *)((int *)param_2[2]);
  puVar3[3] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }
  *(undefined4 **)(param_1 + 0x24) = puVar3;

  return;

 } catch (...) { }
}


// Reference entry 10264b70; body size 124 bytes.
#line 1 "ENTRY_10264b70"

undefined4 * FUN_10264b70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10264c10; body size 124 bytes.
#line 1 "ENTRY_10264c10"

undefined4 * FUN_10264c10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10264cb0; body size 124 bytes.
#line 1 "ENTRY_10264cb0"

undefined4 * FUN_10264cb0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10264d50; body size 124 bytes.
#line 1 "ENTRY_10264d50"

undefined4 * FUN_10264d50(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10265ab0; body size 93 bytes.
#line 1 "ENTRY_10265ab0"

undefined4 * __thiscall Recovered_Bulk::FUN_10265ab0(undefined4 param_2)
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


// Reference entry 10266ab0; body size 84 bytes.
#line 1 "ENTRY_10266ab0"

void __fastcall FUN_10266ab0(int param_1)

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


// Reference entry 10266dd0; body size 84 bytes.
#line 1 "ENTRY_10266dd0"

void __fastcall FUN_10266dd0(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 0xc));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10266ff0; body size 96 bytes.
#line 1 "ENTRY_10266ff0"

void __fastcall FUN_10266ff0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10263a50(*param_1,param_1[1],param_1);
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


// Reference entry 10267070; body size 96 bytes.
#line 1 "ENTRY_10267070"

void __fastcall FUN_10267070(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10263af0(*param_1,param_1[1],param_1);
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


// Reference entry 10267820; body size 116 bytes.
#line 1 "ENTRY_10267820"

int * __fastcall FUN_10267820(int *param_1)

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


// Reference entry 102680d0; body size 107 bytes.
#line 1 "ENTRY_102680d0"

int __thiscall Recovered_Bulk::FUN_102680d0(byte param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 0xc));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10268400; body size 104 bytes.
#line 1 "ENTRY_10268400"

void __thiscall Recovered_Bulk::FUN_10268400(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10263a50(*param_1,param_1[1],param_1);
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


// Reference entry 10268490; body size 104 bytes.
#line 1 "ENTRY_10268490"

void __thiscall Recovered_Bulk::FUN_10268490(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10263af0(*param_1,param_1[1],param_1);
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


// Reference entry 10268560; body size 122 bytes.
#line 1 "ENTRY_10268560"

undefined4 * __fastcall FUN_10268560(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)(operator_new(0x10));
  *puVar3 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar3[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  puVar3[2] = (undefined4)(*(undefined4 *)(param_1 + 8));
  piVar1 = (int *)(*(int **)(param_1 + 0xc));

  puVar3[3] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }

  return (undefined4 *)(puVar3);

 } catch (...) { }
}


// Reference entry 10268640; body size 105 bytes.
#line 1 "ENTRY_10268640"

void __thiscall Recovered_Bulk::FUN_10268640(char param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 0xc));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,0x10);
  }

  return;

 } catch (...) { }
}


// Reference entry 10268e30; body size 96 bytes.
#line 1 "ENTRY_10268e30"

void __fastcall FUN_10268e30(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10263a50(*param_1,param_1[1],param_1);
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


// Reference entry 10268eb0; body size 96 bytes.
#line 1 "ENTRY_10268eb0"

void __fastcall FUN_10268eb0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10263af0(*param_1,param_1[1],param_1);
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


// Reference entry 10268f30; body size 123 bytes.
#line 1 "ENTRY_10268f30"

undefined4 * __stdcall FUN_10268f30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10268fd0; body size 123 bytes.
#line 1 "ENTRY_10268fd0"

undefined4 * __stdcall FUN_10268fd0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10269070; body size 121 bytes.
#line 1 "ENTRY_10269070"

void FUN_10269070(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10269110; body size 121 bytes.
#line 1 "ENTRY_10269110"

void FUN_10269110(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 102691b0; body size 121 bytes.
#line 1 "ENTRY_102691b0"

void __stdcall FUN_102691b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10269250; body size 121 bytes.
#line 1 "ENTRY_10269250"

void __stdcall FUN_10269250(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10269990; body size 164 bytes.
#line 1 "ENTRY_10269990"

void __thiscall Recovered_Bulk::FUN_10269990(int *param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  int *piVar2;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar2 = (int *)((int *)0x0);
  local_18 = (int *)(param_2);
  local_14 = (int *)((int *)0x0);
  if (param_2 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))(DAT_12126b84 ));
    local_14 = (int *)(piVar2);
    (**(code **)(*piVar2 + 4))();
  }
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x3c));

  if (puVar1 == *(undefined4 **)(param_1 + 0x40)) {
    thunk_FUN_10263dd0(puVar1,&local_18);
  }
  else {
    *puVar1 = (undefined4)(param_2);
    puVar1[1] = (undefined4)(piVar2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 8;
  }

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10269a60; body size 164 bytes.
#line 1 "ENTRY_10269a60"

void __thiscall Recovered_Bulk::FUN_10269a60(int *param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  int *piVar2;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar2 = (int *)((int *)0x0);
  local_18 = (int *)(param_2);
  local_14 = (int *)((int *)0x0);
  if (param_2 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))(DAT_12126b84 ));
    local_14 = (int *)(piVar2);
    (**(code **)(*piVar2 + 4))();
  }
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x20));

  if (puVar1 == *(undefined4 **)(param_1 + 0x24)) {
    thunk_FUN_10264090(puVar1,&local_18);
  }
  else {
    *puVar1 = (undefined4)(param_2);
    puVar1[1] = (undefined4)(piVar2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 8;
  }

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 1026e0e0; body size 80 bytes.
#line 1 "ENTRY_1026e0e0"

void __thiscall Recovered_Bulk::FUN_1026e0e0(int *param_2)
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


// Reference entry 1026f220; body size 93 bytes.
#line 1 "ENTRY_1026f220"

int __thiscall Recovered_Bulk::FUN_1026f220(int param_2)
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


// Reference entry 1026fc90; body size 84 bytes.
#line 1 "ENTRY_1026fc90"

void __fastcall FUN_1026fc90(int param_1)

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


// Reference entry 10271ae0; body size 303 bytes.
#line 1 "ENTRY_10271ae0"

undefined4 * __thiscall Recovered_Bulk::FUN_10271ae0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  void *pvVar1;
  int *piVar2;
  int *piVar3;
  int *in_stack_0000002c;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined4 local_3c;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;


  pvVar1 = (void *)(operator_new(0x40));
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {


    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (in_stack_0000002c != (int *)0x0) {
      local_64 = (undefined4)((**(code **)*in_stack_0000002c)(auStack_88));
    }
    if (*(int *)(param_1 + 0x40) != 0) {
      LOCK();
      piVar2 = (int *)((int *)(*(int *)(param_1 + 0x40) + 4));
      *piVar2 = (int)(*piVar2 + 1);
      UNLOCK();
    }
    local_8 = (uint)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    piVar2 = (int *)((int *)thunk_FUN_1026edf0(*(undefined4 *)(param_1 + 0x3c),
                                       *(undefined4 *)(param_1 + 0x40)));
  }
  piVar3 = (int *)((int *)0x0);
  local_8 = (uint)(local_8 & 0xffffff00);
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
    (**(code **)(*piVar3 + 4))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  *param_2 = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  local_8 = (uint)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  if (in_stack_0000002c != (int *)0x0) {

    (**(code **)(*in_stack_0000002c + 0x10))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 102725d0; body size 286 bytes.
#line 1 "ENTRY_102725d0"

void __thiscall Recovered_Bulk::FUN_102725d0(int param_2,int param_3)
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
    thunk_FUN_10272d20(param_2,param_3,iVar3);
    thunk_FUN_10272fd0(iVar2,param_1[1],param_1);
    param_1[1] = (int)(iVar2);
    return;
  }
  uVar5 = (uint)(param_1[2] - iVar3 >> 3);
  if (uVar5 < uVar4) {
    if (0x1fffffff < uVar4) {
                    
      thunk_FUN_102782f0();
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
      thunk_FUN_10272fd0(iVar3,param_1[1],param_1);
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
    iVar3 = (int)(thunk_FUN_10278390(uVar5));
    *param_1 = (int)(iVar3);
    uVar1 = (uint)(0);
    param_1[1] = (int)(iVar3);
    param_1[2] = (int)(iVar3 + uVar5 * 8);
  }
  iVar2 = (int)(param_2 + uVar1 * 8);
  thunk_FUN_10272d20(param_2,iVar2,iVar3);
  iVar3 = (int)(thunk_FUN_10273980(iVar2,param_3,param_1[1],param_1));
  param_1[1] = (int)(iVar3);
  return;
}


// Reference entry 10272960; body size 129 bytes.
#line 1 "ENTRY_10272960"

void FUN_10272960(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
 try {
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_20;
  int *local_1c;
  uint uStack_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uStack_18 = (uint)(DAT_12126b84);

  local_14 = (undefined1 *)((undefined1 *)&local_20);
  local_20 = (undefined4)(*param_3);
  local_1c = (int *)((int *)param_3[1]);
  puVar1 = (undefined4 *)(&local_20);
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 4))();
    puVar1 = (undefined4 *)((undefined4 *)local_14);
  }
  local_14 = (undefined1 *)((undefined1 *)puVar1);

  uVar2 = (undefined4)(*param_2);
  piVar3 = (int *)((int *)param_2[1]);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar2,piVar3);
  }

  thunk_FUN_10693350(uVar2,piVar3);

  return;

 } catch (...) { }
}


// Reference entry 10272a10; body size 177 bytes.
#line 1 "ENTRY_10272a10"

undefined1 FUN_10272a10(int param_1,int *param_2)

{
 try {
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 local_3c [32];
  int local_1c;
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)param_2[1]);
  iVar2 = (int)(*param_2);
  local_1c = (int)(iVar2);
  local_18 = (int *)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(DAT_12126b84 );
  }

  if (iVar2 == 0) {
    uVar3 = (undefined1)(0);
  }
  else {
    thunk_FUN_106967c0(local_3c);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));

    uVar3 = (undefined1)(thunk_FUN_106a2a80(param_1 + 4));
  }
  if ((local_14 & 1) != 0) {
    thunk_FUN_1011f5e0();
  }

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }

  return (undefined1)(uVar3);

 } catch (...) { }
}


// Reference entry 10272af0; body size 119 bytes.
#line 1 "ENTRY_10272af0"

undefined1 FUN_10272af0(undefined4 param_1,int param_2)

{
 try {
  int *piVar1;
  undefined1 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)(*(int **)(param_2 + 4));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(DAT_12126b84 );
  }

  uVar2 = (undefined1)(thunk_FUN_10696830());

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }

  return (undefined1)(uVar2);

 } catch (...) { }
}


// Reference entry 10273980; body size 124 bytes.
#line 1 "ENTRY_10273980"

undefined4 * FUN_10273980(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10273ae0; body size 124 bytes.
#line 1 "ENTRY_10273ae0"

undefined4 * FUN_10273ae0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10273f70; body size 406 bytes.
#line 1 "ENTRY_10273f70"

undefined4 FUN_10273f70(int *param_1,int *param_2,int *param_3)

{
 try {
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  void **ppvVar5;
  char cVar6;
  uint uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar7 = (uint)(DAT_12126b84);
  ppvVar5 = (void **)(&local_10);

  while( true ) {

    if (param_1 == (int *)(param_2)) {

      return (undefined4)(1);
    }

    piVar1 = (int *)((int *)param_3[1]);
    iVar2 = (int)(*param_3);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(uVar7);
    }
    piVar3 = (int *)((int *)param_1[1]);
    iVar4 = (int)(*param_1);

    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }

    if ((iVar4 == 0) != (iVar2 == 0)) break;
    if (iVar4 == iVar2) {

      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))();
      }

      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))();
      }
    }
    else {
      cVar6 = (char)(thunk_FUN_106a1a50(iVar2));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))();
      }

      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))();
      }
      if (cVar6 == '\0') {

        return (undefined4)(0);
      }
    }
    param_1 = (int *)(param_1 + 2);
    param_3 = (int *)(param_3 + 2);

  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 102742c0; body size 129 bytes.
#line 1 "ENTRY_102742c0"

void FUN_102742c0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
 try {
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_20;
  int *local_1c;
  uint uStack_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uStack_18 = (uint)(DAT_12126b84);

  local_14 = (undefined1 *)((undefined1 *)&local_20);
  local_20 = (undefined4)(*param_3);
  local_1c = (int *)((int *)param_3[1]);
  puVar1 = (undefined4 *)(&local_20);
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 4))();
    puVar1 = (undefined4 *)((undefined4 *)local_14);
  }
  local_14 = (undefined1 *)((undefined1 *)puVar1);

  uVar2 = (undefined4)(*param_2);
  piVar3 = (int *)((int *)param_2[1]);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar2,piVar3);
  }

  thunk_FUN_10693350(uVar2,piVar3);

  return;

 } catch (...) { }
}


// Reference entry 10274370; body size 177 bytes.
#line 1 "ENTRY_10274370"

undefined1 FUN_10274370(int param_1,int *param_2)

{
 try {
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 local_3c [32];
  int local_1c;
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)param_2[1]);
  iVar2 = (int)(*param_2);
  local_1c = (int)(iVar2);
  local_18 = (int *)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(DAT_12126b84 );
  }

  if (iVar2 == 0) {
    uVar3 = (undefined1)(0);
  }
  else {
    thunk_FUN_106967c0(local_3c);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));

    uVar3 = (undefined1)(thunk_FUN_106a2a80(param_1 + 4));
  }
  if ((local_14 & 1) != 0) {
    thunk_FUN_1011f5e0();
  }

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }

  return (undefined1)(uVar3);

 } catch (...) { }
}


// Reference entry 10274450; body size 119 bytes.
#line 1 "ENTRY_10274450"

undefined1 FUN_10274450(undefined4 param_1,int param_2)

{
 try {
  int *piVar1;
  undefined1 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)(*(int **)(param_2 + 4));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(DAT_12126b84 );
  }

  uVar2 = (undefined1)(thunk_FUN_10696830());

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }

  return (undefined1)(uVar2);

 } catch (...) { }
}


// Reference entry 10274ce0; body size 93 bytes.
#line 1 "ENTRY_10274ce0"

int __thiscall Recovered_Bulk::FUN_10274ce0(int param_2)
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


// Reference entry 10274e30; body size 255 bytes.
#line 1 "ENTRY_10274e30"

undefined4 * __thiscall Recovered_Bulk::FUN_10274e30(int *param_2)
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceMenu);

  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))(uVar1));
    param_1[3] = (undefined4)(piVar2);
    (**(code **)(*piVar2 + 4))();
  }
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[9] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  thunk_FUN_101cf1e0(param_1 + 0xb);
  param_1[0xd] = (undefined4)(0);
  *(undefined1 *)(param_1 + 0xe) = 1;
  param_1[0xf] = (undefined4)(0);
  param_1[0x10] = (undefined4)(0);
  param_1[0x11] = (undefined4)(0);
  param_1[0x12] = (undefined4)(DAT_121190f4);
  param_1[0x13] = (undefined4)(0);
  param_1[0x14] = (undefined4)(0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
  thunk_FUN_10278470();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10274f70; body size 257 bytes.
#line 1 "ENTRY_10274f70"

undefined4 * __thiscall Recovered_Bulk::FUN_10274f70(int *param_2,undefined1 param_3)
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceMenu);

  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))(uVar1));
    param_1[3] = (undefined4)(piVar2);
    (**(code **)(*piVar2 + 4))();
  }
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[9] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  thunk_FUN_101cf1e0(param_1 + 0xb);
  param_1[0xd] = (undefined4)(0);
  *(undefined1 *)(param_1 + 0xe) = param_3;
  param_1[0xf] = (undefined4)(0);
  param_1[0x10] = (undefined4)(0);
  param_1[0x11] = (undefined4)(0);
  param_1[0x12] = (undefined4)(DAT_121190f4);
  param_1[0x13] = (undefined4)(0);
  param_1[0x14] = (undefined4)(0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
  thunk_FUN_10278470();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102750f0; body size 161 bytes.
#line 1 "ENTRY_102750f0"

undefined4 * __fastcall FUN_102750f0(undefined4 *param_1)

{
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0xc));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[1] = (undefined4)(pvVar1);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);

  param_1[6] = (undefined4)(7);
  param_1[7] = (undefined4)(8);
  *param_1 = (undefined4)(0x3f800000);
  thunk_FUN_10129760(0x10,param_1[1]);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10275910; body size 118 bytes.
#line 1 "ENTRY_10275910"

void __fastcall FUN_10275910(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10272ea0(*param_1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
    uVar2 = (uint)(((param_1[2] - iVar1) / 0x24) * 0x24);
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


// Reference entry 102759c0; body size 96 bytes.
#line 1 "ENTRY_102759c0"

void __fastcall FUN_102759c0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10272fd0(*param_1,param_1[1],param_1);
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


// Reference entry 10275dd0; body size 110 bytes.
#line 1 "ENTRY_10275dd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10275dd0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  if (param_1 != (undefined4 *)(param_2)) {
    *param_1 = (undefined4)(*param_2);

    thunk_FUN_10272300(*(undefined4 *)param_2[1],(undefined4 *)param_2[1]);
    uVar1 = (undefined4)(thunk_FUN_10129a20(param_1[2]));
    thunk_FUN_10129af0(uVar1);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10275e60; body size 110 bytes.
#line 1 "ENTRY_10275e60"

undefined4 * __thiscall Recovered_Bulk::FUN_10275e60(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  if (param_1 != (undefined4 *)(param_2)) {
    *param_1 = (undefined4)(*param_2);

    thunk_FUN_10272300(*(undefined4 *)param_2[1],(undefined4 *)param_2[1]);
    uVar1 = (undefined4)(thunk_FUN_10129a20(param_1[2]));
    thunk_FUN_10129af0(uVar1);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10276160; body size 110 bytes.
#line 1 "ENTRY_10276160"

undefined4 * __thiscall Recovered_Bulk::FUN_10276160(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  if (param_1 != (undefined4 *)(param_2)) {
    *param_1 = (undefined4)(*param_2);

    thunk_FUN_10272300(*(undefined4 *)param_2[1],(undefined4 *)param_2[1]);
    uVar1 = (undefined4)(thunk_FUN_10129a20(param_1[2]));
    thunk_FUN_10129af0(uVar1);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102763b0; body size 105 bytes.
#line 1 "ENTRY_102763b0"

undefined1 __stdcall FUN_102763b0(undefined4 param_1,int *param_2)

{
 try {
  undefined1 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (undefined1)(thunk_FUN_10696830(DAT_12126b84 ));

  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10276450; body size 169 bytes.
#line 1 "ENTRY_10276450"

undefined1 __stdcall FUN_10276450(int param_1,int *param_2,int param_3,int *param_4)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  if ((param_1 == 0) == (param_3 == 0)) {
    if (param_1 == param_3) {
      uVar1 = (undefined1)(1);
    }
    else {
      uVar1 = (undefined1)(thunk_FUN_106a1a50(param_3));
    }
  }
  else {
    uVar1 = (undefined1)(0);
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))(uVar2);
  }

  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 8))();
  }

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 102766c0; body size 165 bytes.
#line 1 "ENTRY_102766c0"

undefined1 __thiscall Recovered_Bulk::FUN_102766c0(int param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined1 local_38 [32];
  undefined4 local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);


  if (param_2 == 0) {

  }
  else {
    thunk_FUN_106967c0(local_38);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));

    local_11 = (undefined1)(thunk_FUN_106a2a80(param_1 + 4));
    thunk_FUN_1011f5e0();
  }

  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))(uVar1);
  }

  return (undefined1)(local_11);

 } catch (...) { }
}


// Reference entry 10276f50; body size 104 bytes.
#line 1 "ENTRY_10276f50"

void __thiscall Recovered_Bulk::FUN_10276f50(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10272fd0(*param_1,param_1[1],param_1);
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


// Reference entry 10276fe0; body size 314 bytes.
#line 1 "ENTRY_10276fe0"

void __thiscall Recovered_Bulk::FUN_10276fe0(uint param_2)
{
  uint *param_1 = (uint *)this;
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (0x71c71c7 < param_2) {
                    
    thunk_FUN_102782e0();
  }
  uVar2 = (uint)(*param_1);
  uVar5 = (uint)((int)(param_1[2] - uVar2) / 0x24);
  if (0x71c71c7 - (uVar5 >> 1) < uVar5) {
    uVar5 = (uint)(0x71c71c7);
  }
  else {
    uVar5 = (uint)((uVar5 >> 1) + uVar5);
    if (uVar5 < param_2) {
      uVar5 = (uint)(param_2);
    }
  }
  if (uVar2 != 0) {
    thunk_FUN_10272ea0(uVar2,param_1[1],param_1);
    uVar2 = (uint)(*param_1);
    uVar3 = (uint)(((int)(param_1[2] - uVar2) / 0x24) * 0x24);
    uVar4 = (uint)(uVar2);
    if (0xfff < uVar3) {
      uVar4 = (uint)(*(uint *)(uVar2 - 4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (uVar2 - uVar4) - 4) goto LAB_102770d9;
    }
    thunk_FUN_1148a50e(uVar4,uVar3);
    *param_1 = (uint)(0);
    param_1[1] = (uint)(0);
    param_1[2] = (uint)(0);
  }
  if (uVar5 < 0x71c71c8) {
    uVar5 = (uint)(uVar5 * 0x24);
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
LAB_102770d9:
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 102773f0; body size 105 bytes.
#line 1 "ENTRY_102773f0"

void __thiscall Recovered_Bulk::FUN_102773f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)(*param_2);
  thunk_FUN_10272300(*(undefined4 *)param_2[1],(undefined4 *)param_2[1]);
  uVar1 = (undefined4)(thunk_FUN_10129a20(param_1[2]));
  thunk_FUN_10129af0(uVar1);

  return;

 } catch (...) { }
}


// Reference entry 102776f0; body size 137 bytes.
#line 1 "ENTRY_102776f0"

void __stdcall FUN_102776f0(undefined4 *param_1,int param_2)

{
 try {
  undefined4 uVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (*(int **)(param_2 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_2 + 4) + 4))();
  }

  uVar1 = (undefined4)(*param_1);
  piVar2 = (int *)((int *)param_1[1]);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(uVar1,piVar2);
  }

  thunk_FUN_10693350(uVar1,piVar2);

  return;

 } catch (...) { }
}


// Reference entry 102777a0; body size 178 bytes.
#line 1 "ENTRY_102777a0"

undefined1 __thiscall Recovered_Bulk::FUN_102777a0(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 local_3c [32];
  int local_1c;
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)param_2[1]);
  iVar2 = (int)(*param_2);
  local_1c = (int)(iVar2);
  local_18 = (int *)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(DAT_12126b84 );
  }

  if (iVar2 == 0) {
    uVar3 = (undefined1)(0);
  }
  else {
    thunk_FUN_106967c0(local_3c);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));

    uVar3 = (undefined1)(thunk_FUN_106a2a80(param_1 + 8));
  }
  if ((local_14 & 1) != 0) {
    thunk_FUN_1011f5e0();
  }

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }

  return (undefined1)(uVar3);

 } catch (...) { }
}


// Reference entry 10277880; body size 121 bytes.
#line 1 "ENTRY_10277880"

undefined1 __stdcall FUN_10277880(int param_1)

{
 try {
  int *piVar1;
  undefined1 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)(*(int **)(param_1 + 4));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(DAT_12126b84 );
  }

  uVar2 = (undefined1)(thunk_FUN_10696830());

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }

  return (undefined1)(uVar2);

 } catch (...) { }
}


// Reference entry 10277ea0; body size 118 bytes.
#line 1 "ENTRY_10277ea0"

void __fastcall FUN_10277ea0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10272ea0(*param_1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
    uVar2 = (uint)(((param_1[2] - iVar1) / 0x24) * 0x24);
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


// Reference entry 10278040; body size 96 bytes.
#line 1 "ENTRY_10278040"

void __fastcall FUN_10278040(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10272fd0(*param_1,param_1[1],param_1);
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


// Reference entry 102780c0; body size 123 bytes.
#line 1 "ENTRY_102780c0"

undefined4 * __stdcall FUN_102780c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10278390; body size 87 bytes.
#line 1 "ENTRY_10278390"

void * FUN_10278390(uint param_1)

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


// Reference entry 102788f0; body size 490 bytes.
#line 1 "ENTRY_102788f0"

undefined4 * FUN_102788f0(undefined4 *param_1)

{
 try {
  undefined1 uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *local_2c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  piVar5 = (int *)((int *)0x0);

  thunk_FUN_1069fd10(&local_18,DAT_12126b84 );
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  piVar2 = (int *)((int *)thunk_FUN_1069e990(&local_14));
  piVar4 = (int *)((int *)*piVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *piVar2 = (int)(0);
  if (piVar4 == (int *)0x0) {
    local_2c = (int *)((int *)0x0);
  }
  else {
    local_2c = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  uVar1 = (undefined1)((undefined1)local_8);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  piVar2 = (int *)((int *)0x0);
  if (piVar4 != (int *)0x0) {
    piVar3 = (int *)(operator_new(0x54));
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      *piVar3 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      piVar3[1] = (int)(0);
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      *piVar3 = (int)((int)(uint)&ghidra_vftable_SCMusicServiceMenu);
      piVar3[2] = (int)((int)piVar4);
      piVar3[3] = (int)(0);
      *(unsigned char *)((char *)&local_8 + 0) = 9;
      piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
      piVar3[3] = (int)((int)piVar4);
      (**(code **)(*piVar4 + 4))();
      piVar3[4] = (int)(0);
      piVar3[5] = (int)(0);
      piVar3[6] = (int)(0);
      piVar3[7] = (int)(0);
      piVar3[8] = (int)(0);
      piVar3[9] = (int)(0);
      piVar3[10] = (int)(0);
      *(unsigned char *)((char *)&local_8 + 0) = 0xd;
      thunk_FUN_101cf1e0(piVar3 + 0xb);
      piVar3[0xd] = (int)(0);
      *(undefined1 *)(piVar3 + 0xe) = 1;
      piVar3[0xf] = (int)(0);
      piVar3[0x10] = (int)(0);
      piVar3[0x11] = (int)(0);
      piVar3[0x12] = (int)(DAT_121190f4);
      piVar3[0x13] = (int)(0);
      piVar3[0x14] = (int)(0);
      *(unsigned char *)((char *)&local_8 + 0) = 0x11;
      thunk_FUN_10278470();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    uVar1 = (undefined1)((undefined1)local_8);
    if (piVar3 != (int *)0x0) {
      piVar5 = (int *)(piVar3);
      if (*(code **)(*piVar3 + 0xc) != thunk_FUN_10278ee0) {
        piVar5 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
      }
      (**(code **)(*piVar5 + 4))();
      piVar2 = (int *)(piVar3);
      uVar1 = (undefined1)((undefined1)local_8);
    }
  }
  *(unsigned char *)((char *)&local_8 + 0) = uVar1;
  *param_1 = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x12)));
  if (local_2c != (int *)0x0) {
    (**(code **)(*local_2c + 8))();
  }

  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10278e60; body size 78 bytes.
#line 1 "ENTRY_10278e60"

void __thiscall Recovered_Bulk::FUN_10278e60(int *param_2,int param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0x20) + param_3 * 8));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(DAT_12126b84 );
  }
  *param_2 = (int)((int)piVar1);

  return;

 } catch (...) { }
}


// Reference entry 10279b60; body size 303 bytes.
#line 1 "ENTRY_10279b60"

undefined4 * __thiscall Recovered_Bulk::FUN_10279b60(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  void *pvVar1;
  int *piVar2;
  int *piVar3;
  int *in_stack_0000002c;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined4 local_3c;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;


  pvVar1 = (void *)(operator_new(0x40));
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {


    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (in_stack_0000002c != (int *)0x0) {
      local_64 = (undefined4)((**(code **)*in_stack_0000002c)(auStack_88));
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      LOCK();
      piVar2 = (int *)((int *)(*(int *)(param_1 + 0x30) + 4));
      *piVar2 = (int)(*piVar2 + 1);
      UNLOCK();
    }
    local_8 = (uint)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    piVar2 = (int *)((int *)thunk_FUN_10274780(*(undefined4 *)(param_1 + 0x2c),
                                       *(undefined4 *)(param_1 + 0x30)));
  }
  piVar3 = (int *)((int *)0x0);
  local_8 = (uint)(local_8 & 0xffffff00);
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
    (**(code **)(*piVar3 + 4))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  *param_2 = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  local_8 = (uint)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  if (in_stack_0000002c != (int *)0x0) {

    (**(code **)(*in_stack_0000002c + 0x10))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 1027cb60; body size 231 bytes.
#line 1 "ENTRY_1027cb60"

void FUN_1027cb60(int param_1)

{
 try {
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_110f2980(DAT_12126b84 );
  thunk_FUN_110f1e00(&local_14);
  thunk_FUN_112aa790(param_1,"<Command cmdline=\"SsidMap\">\n");
  if (local_14 == (char *)0x0) {
    iVar4 = (int)(0);
  }
  else {
    iVar4 = (int)(*(int *)(local_14 + -0xc));
    if (iVar4 == 0) {
      pcVar3 = (char *)(local_14);
      do {
        cVar1 = (char)(*pcVar3);
        pcVar3 = (char *)(pcVar3 + 1);
      } while (cVar1 != '\0');
      iVar4 = (int)((int)pcVar3 - (int)(local_14 + 1));
      *(int *)(local_14 + -0xc) = iVar4;
    }
    pcVar3 = (char *)(local_14);
    if (local_14 != (char *)0x0) goto LAB_1027cbdc;
  }
  pcVar3 = (char *)("");
LAB_1027cbdc:
  thunk_FUN_1145de60(*(undefined4 *)(param_1 + 4),pcVar3,iVar4);
  thunk_FUN_112aa790(param_1,"</Command>\n");

  if (((local_14 != (char *)0x0) && (*(int *)(local_14 + -0x10) < 0xffff)) &&
     (iVar4 = thunk_FUN_1123fcd0(local_14 + -0x10), iVar4 == 0)) {
    uVar2 = (undefined4)(*(undefined4 *)(local_14 + -4));
    local_14[-0xffffffff00000008] = (char)('\0');
    local_14[-0xffffffff00000007] = (char)('\0');
    local_14[-0xffffffff00000006] = (char)('\0');
    local_14[-0xffffffff00000005] = (char)('\0');
    local_14[-0xffffffff0000000c] = (char)('\0');
    local_14[-0xffffffff0000000b] = (char)('\0');
    local_14[-0xffffffff0000000a] = (char)('\0');
    local_14[-0xffffffff00000009] = (char)('\0');
    thunk_FUN_113cfb70(local_14,uVar2);
    free(local_14 + -0x10);
  }

  return;

 } catch (...) { }
}


// Reference entry 1027d2f0; body size 160 bytes.
#line 1 "ENTRY_1027d2f0"

int FUN_1027d2f0(undefined4 param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x2a50));

  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    thunk_FUN_1125bcf0(param_1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_TestPointHandlerSCLIB);
    memset(puVar2 + 0x248,0,0x2130);
  }

  iVar3 = (int)(thunk_FUN_1125bd80(uVar1));
  if ((iVar3 != 1) && (puVar2 != (undefined4 *)0x0)) {
    (**(code **)*puVar2)(1);
  }

  return (int)(iVar3);

 } catch (...) { }
}


// Reference entry 1027d5a0; body size 125 bytes.
#line 1 "ENTRY_1027d5a0"

undefined4 * __thiscall Recovered_Bulk::FUN_1027d5a0(undefined4 param_2)
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

  thunk_FUN_1027e130(param_2,param_2);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1027e130; body size 113 bytes.
#line 1 "ENTRY_1027e130"

void __thiscall Recovered_Bulk::FUN_1027e130(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)(thunk_FUN_1027e1c0(*(undefined4 *)(*param_2 + 4),*param_1,param_3));
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


// Reference entry 1027ed00; body size 128 bytes.
#line 1 "ENTRY_1027ed00"

undefined4 * __thiscall Recovered_Bulk::FUN_1027ed00(undefined4 param_2)
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

  thunk_FUN_1027e130(param_2,param_2);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1027f240; body size 180 bytes.
#line 1 "ENTRY_1027f240"

undefined4 * __thiscall Recovered_Bulk::FUN_1027f240(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 *puVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  puVar1 = (undefined4 *)(param_1 + 2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSonarCalibrationManager);

  *puVar1 = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  pvVar2 = (void *)(operator_new(0x20));
  *(void **)pvVar2 = (void *)(pvVar2);
  *(void **)((int)pvVar2 + 4) = pvVar2;
  *(void **)((int)pvVar2 + 8) = pvVar2;
  *(undefined2 *)((int)pvVar2 + 0xc) = 0x101;
  *puVar1 = (undefined4)(pvVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  thunk_FUN_1027e130(param_2 + 8,puVar1);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_1027ee20(param_2 + 0x10);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1027f330; body size 150 bytes.
#line 1 "ENTRY_1027f330"

undefined4 * __thiscall Recovered_Bulk::FUN_1027f330(int *param_2)
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStream);

  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))(uVar1));
    param_1[3] = (undefined4)(piVar2);
    (**(code **)(*piVar2 + 4))();
  }
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0xffffffff);
  *(undefined1 *)(param_1 + 7) = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1027f660; body size 68 bytes.
#line 1 "ENTRY_1027f660"

void __fastcall FUN_1027f660(int *param_1)

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


// Reference entry 1027f6c0; body size 68 bytes.
#line 1 "ENTRY_1027f6c0"

void __fastcall FUN_1027f6c0(int *param_1)

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


// Reference entry 1027f720; body size 68 bytes.
#line 1 "ENTRY_1027f720"

void __fastcall FUN_1027f720(int *param_1)

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


// Reference entry 1027f8b0; body size 101 bytes.
#line 1 "ENTRY_1027f8b0"

void __fastcall FUN_1027f8b0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_AnacapaLauncher);
  thunk_FUN_112a7c30(param_1 + 9,uVar1);
  thunk_FUN_112a7f20(param_1 + 7);
  PTR_DAT_12119128 = (int *)((undefined *)0x0);
  thunk_FUN_110fc270();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);

  return;

 } catch (...) { }
}


// Reference entry 1027fc80; body size 102 bytes.
#line 1 "ENTRY_1027fc80"

int __thiscall Recovered_Bulk::FUN_1027fc80(int param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  piVar1 = (int *)((int *)(param_1 + 8));
  if (piVar1 != (int *)(param_2 + 8)) {
    iVar2 = (int)(*piVar1);
    thunk_FUN_1027e470(piVar1,*(undefined4 *)(iVar2 + 4));
    *(int *)(iVar2 + 4) = iVar2;
    *(int *)iVar2 = (int)(iVar2);
    *(int *)(iVar2 + 8) = iVar2;
    *(undefined4 *)(param_1 + 0xc) = 0;
    thunk_FUN_1027e130(param_2 + 8,param_2);
  }
  if ((undefined4 *)(param_1 + 0x10) != (undefined4 *)(param_2 + 0x10)) {
    thunk_FUN_1027ddb0(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),param_2);
  }
  return (int)(param_1);
}


// Reference entry 10280140; body size 132 bytes.
#line 1 "ENTRY_10280140"

undefined4 * __thiscall Recovered_Bulk::FUN_10280140(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_AnacapaLauncher);
  thunk_FUN_112a7c30(param_1 + 9,uVar1);
  thunk_FUN_112a7f20(param_1 + 7);
  PTR_DAT_12119128 = (int *)((undefined *)0x0);
  thunk_FUN_110fc270();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x468);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10280c80; body size 129 bytes.
#line 1 "ENTRY_10280c80"

void __thiscall Recovered_Bulk::FUN_10280c80(uint param_2)
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
      if (pvVar1 != (void *)0x0) {
        uVar2 = (uint)((int)pvVar1 + 0x23U & 0xffffffe0);
        *(void **)(uVar2 - 4) = pvVar1;
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


// Reference entry 10281490; body size 79 bytes.
#line 1 "ENTRY_10281490"

void __fastcall FUN_10281490(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(*param_1);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + -0x10) < 0xffff) {
      iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
      if (iVar2 == 0) {
        *(undefined4 *)(iVar1 + -8) = 0;
        *(undefined4 *)(iVar1 + -0xc) = 0;
        thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
        free((void *)(iVar1 + -0x10));
      }
    }
    *param_1 = (int)(0);
    return;
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 10282a40; body size 228 bytes.
#line 1 "ENTRY_10282a40"

undefined4 * FUN_10282a40(undefined4 *param_1,char *param_2)

{
 try {
  size_t sVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)(0);

  do {
    sVar1 = (size_t)(strcspn(param_2,"\"\'&<>"));
    thunk_FUN_111a0d50(param_2,sVar1);
    switch(param_2[sVar1]) {
    case '\0':
      sVar1 = (size_t)(sVar1 - 1);
      break;
    case '\"':
      thunk_FUN_111a0cc0("&quot;");
      break;
    case '&':
      thunk_FUN_111a0cc0("&amp;");
      break;
    case '\'':
      thunk_FUN_111a0cc0("&apos;");
      break;
    case '<':
      thunk_FUN_111a0cc0(&DAT_1188d210);
      break;
    case '>':
      thunk_FUN_111a0cc0(&DAT_1188d218);
    }
    param_2 = (char *)(param_2 + sVar1 + 1);
  } while (*param_2 != '\0');

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10282c40; body size 120 bytes.
#line 1 "ENTRY_10282c40"

void __fastcall FUN_10282c40(int param_1)

{
  char cVar1;
  
  thunk_FUN_112af4e0("AnacapaLauncher",4,"kill entering");
  thunk_FUN_112a5390(*(undefined4 *)(param_1 + 0x50),1);
  thunk_FUN_112af4e0("AnacapaLauncher",1,"waiting for m_tthread.t_id = %llu...",
                     *(int *)(param_1 + 4),*(int *)(param_1 + 4) >> 0x1f);
  cVar1 = (char)(thunk_FUN_112a82d0(param_1 + 4));
  if (cVar1 == '\0') {
    thunk_FUN_112af4e0("AnacapaLauncher",1,"error: waiting for anacapa server thread to finish");
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  thunk_FUN_112af4e0("AnacapaLauncher",4,"kill leaving, cleanup should be done here");
  return;
}


// Reference entry 10282f10; body size 81 bytes.
#line 1 "ENTRY_10282f10"

void __fastcall FUN_10282f10(int param_1)

{
  thunk_FUN_112af4e0("AnacapaLauncher",4,"rebind() entering");
  thunk_FUN_112a5390(*(undefined4 *)(param_1 + 0x50),2);
  if ((*(undefined4 **)(param_1 + 0x458) != (undefined4 *)0x0) &&
     (*(int *)(*(int *)(param_1 + 0x50) + 0x124) == 0)) {
    (**(code **)**(undefined4 **)(param_1 + 0x458))();
  }
  thunk_FUN_112af4e0("AnacapaLauncher",4,"rebind() leaving");
  return;
}


// Reference entry 10283480; body size 133 bytes.
#line 1 "ENTRY_10283480"

void __fastcall FUN_10283480(int param_1)

{
  int iVar1;
  
  thunk_FUN_112af4e0("AnacapaLauncher",4,"start hit");
  thunk_FUN_112a9da0((int *)(param_1 + 4),"anacapalauncher",LAB_10073cae,param_1,0);
  iVar1 = (int)(*(int *)(param_1 + 4));
  thunk_FUN_112af4e0("AnacapaLauncher",1,"m_tthread.t_id = %llu",iVar1,iVar1 >> 0x1f);
  iVar1 = (int)(param_1 + 0x1c);
  thunk_FUN_112a7f50(iVar1);
  if (*(char *)(param_1 + 0x4c) == '\0') {
    do {
      thunk_FUN_112a7da0(param_1 + 0x24,iVar1);
    } while (*(char *)(param_1 + 0x4c) == '\0');
  }
  thunk_FUN_112a8010(iVar1);
  thunk_FUN_112af4e0("AnacapaLauncher",4,"start leaving");
  return;
}


// Reference entry 10283860; body size 68 bytes.
#line 1 "ENTRY_10283860"

int __fastcall FUN_10283860(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (int)(*(int *)(param_1 + 0x14));
  if (iVar2 == 0) {
    if (*(char *)(param_1 + 0x1c) == '\0') {
      if (*(int **)(param_1 + 8) == (int *)0x0) {
        *(undefined1 *)(param_1 + 0x1c) = 1;
      }
      else {
        cVar1 = (char)((**(code **)(**(int **)(param_1 + 8) + 0x14))());
        *(char *)(param_1 + 0x1c) = cVar1;
        if (cVar1 == '\0') {
          return (int)(0);
        }
      }
    }
    if (*(int **)(param_1 + 8) != (int *)0x0) {
      iVar2 = (int)((**(code **)(**(int **)(param_1 + 8) + 0x1c))());
      *(int *)(param_1 + 0x14) = iVar2;
      return (int)(iVar2);
    }
    iVar2 = (int)(0);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return (int)(iVar2);
}


// Reference entry 102839e0; body size 135 bytes.
#line 1 "ENTRY_102839e0"

undefined4 * __thiscall Recovered_Bulk::FUN_102839e0(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
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
  *(undefined4 *)((int)pvVar1 + 0x10) = *param_4;
  *(undefined4 *)param_1[1] = (undefined4)(param_3);
  *(undefined4 *)(param_1[1] + 4) = param_3;
  *(undefined4 *)(param_1[1] + 8) = param_3;
  *(undefined1 *)(param_1[1] + 0xc) = 0;
  *(undefined1 *)(param_1[1] + 0xd) = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10283b30; body size 220 bytes.
#line 1 "ENTRY_10283b30"

int * __thiscall Recovered_Bulk::FUN_10283b30(int *param_2)
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
  pvVar7 = (void *)(operator_new(0x14));
  *(void **)pvVar7 = (void *)(pvVar7);
  *(void **)((int)pvVar7 + 4) = pvVar7;
  *(void **)((int)pvVar7 + 8) = pvVar7;
  *(undefined2 *)((int)pvVar7 + 0xc) = 0x101;
  *param_1 = (int)((int)pvVar7);

  uVar8 = (undefined4)(thunk_FUN_10283f20(*(undefined4 *)(*param_2 + 4),pvVar7,param_2));
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


// Reference entry 10283d50; body size 107 bytes.
#line 1 "ENTRY_10283d50"

void __thiscall Recovered_Bulk::FUN_10283d50(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (undefined4)(*param_1);

  puVar2 = (undefined4 *)(operator_new(0x14));
  puVar2[4] = (undefined4)(*param_2);
  *puVar2 = (undefined4)(uVar1);
  puVar2[1] = (undefined4)(uVar1);
  puVar2[2] = (undefined4)(uVar1);
  *(undefined2 *)(puVar2 + 3) = 0;

  return;

 } catch (...) { }
}


// Reference entry 10283de0; body size 107 bytes.
#line 1 "ENTRY_10283de0"

void FUN_10283de0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
 try {
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  puVar1 = (undefined4 *)(operator_new(0x14));
  puVar1[4] = (undefined4)(*param_3);
  *puVar1 = (undefined4)(param_2);
  puVar1[1] = (undefined4)(param_2);
  puVar1[2] = (undefined4)(param_2);
  *(undefined2 *)(puVar1 + 3) = 0;

  return;

 } catch (...) { }
}


// Reference entry 10283f20; body size 194 bytes.
#line 1 "ENTRY_10283f20"

int * __thiscall Recovered_Bulk::FUN_10283f20(undefined4 *param_2,int param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  int iVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  piVar3 = (int *)((int *)*param_1);
  if (*(char *)((int)param_2 + 0xd) == '\0') {

    piVar1 = (int *)(operator_new(0x14));

    piVar1[4] = (int)(param_2[4]);
    *piVar1 = (int)((int)piVar3);
    piVar1[2] = (int)((int)piVar3);
    *(undefined2 *)(piVar1 + 3) = 0;
    piVar1[1] = (int)(param_3);
    *(undefined1 *)(piVar1 + 3) = *(undefined1 *)(param_2 + 3);
    if (*(char *)((int)piVar3 + 0xd) != '\0') {
      piVar3 = (int *)(piVar1);
    }
    iVar2 = (int)(thunk_FUN_10283f20(*param_2,piVar1,param_4));
    *piVar1 = (int)(iVar2);
    iVar2 = (int)(thunk_FUN_10283f20(param_2[2],piVar1,param_4));
    piVar1[2] = (int)(iVar2);
  }

  return (int *)(piVar3);

 } catch (...) { }
}


// Reference entry 10284040; body size 107 bytes.
#line 1 "ENTRY_10284040"

void __thiscall Recovered_Bulk::FUN_10284040(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (undefined4)(*param_1);

  puVar2 = (undefined4 *)(operator_new(0x14));
  puVar2[4] = (undefined4)(*param_2);
  *puVar2 = (undefined4)(uVar1);
  puVar2[1] = (undefined4)(uVar1);
  puVar2[2] = (undefined4)(uVar1);
  *(undefined2 *)(puVar2 + 3) = 0;

  return;

 } catch (...) { }
}


// Reference entry 10284180; body size 246 bytes.
#line 1 "ENTRY_10284180"

undefined4 * __thiscall Recovered_Bulk::FUN_10284180(undefined4 *param_2,uint *param_3)
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

  if (param_1[1] == 0xccccccc) {
                    
    thunk_FUN_101d7220(DAT_12126b84 );
  }

  piVar3 = (int *)(operator_new(0x14));
  piVar3[4] = (int)(*param_3);
  *piVar3 = (int)((int)puVar1);
  piVar3[1] = (int)((int)puVar1);
  piVar3[2] = (int)((int)puVar1);
  *(undefined2 *)(piVar3 + 3) = 0;
  uVar4 = (undefined4)(thunk_FUN_10286ac0(puVar6,bVar7,piVar3));
  *param_2 = (undefined4)(uVar4);
  *(undefined1 *)(param_2 + 1) = 1;

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10284760; body size 71 bytes.
#line 1 "ENTRY_10284760"

void __thiscall Recovered_Bulk::FUN_10284760(undefined4 param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (int)(*param_1);
  piVar3 = (int *)(*(int **)(iVar2 + 4));
  if (*(char *)((int)piVar3 + 0xd) == '\0') {
    do {
      thunk_FUN_102847c0(param_2,piVar3[2]);
      piVar1 = (int *)((int *)*piVar3);
      thunk_FUN_1148a50e(piVar3,0x14);
      piVar3 = (int *)(piVar1);
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    iVar2 = (int)(*param_1);
  }
  thunk_FUN_1148a50e(iVar2,0x14);
  return;
}


// Reference entry 10284aa0; body size 124 bytes.
#line 1 "ENTRY_10284aa0"

undefined4 * FUN_10284aa0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10284b40; body size 124 bytes.
#line 1 "ENTRY_10284b40"

undefined4 * FUN_10284b40(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10285050; body size 224 bytes.
#line 1 "ENTRY_10285050"

void __thiscall Recovered_Bulk::FUN_10285050(undefined4 *param_2,uint *param_3)
{
  int *param_1 = (int *)this;
 try {
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  bool bVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  bVar7 = (bool)(false);
  puVar6 = (undefined4 *)((undefined4 *)puVar1[1]);
  puVar4 = (undefined4 *)(puVar1);
  if (*(char *)((int)puVar6 + 0xd) == '\0') {
    puVar2 = (undefined4 *)(puVar6);
    do {
      puVar6 = (undefined4 *)(puVar2);
      bVar7 = (bool)(*param_3 <= (uint)puVar6[4]);
      if (bVar7) {
        puVar2 = (undefined4 *)((undefined4 *)*puVar6);
        puVar4 = (undefined4 *)(puVar6);
      }
      else {
        puVar2 = (undefined4 *)((undefined4 *)puVar6[2]);
      }
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
  }
  if ((*(char *)((int)puVar4 + 0xd) == '\0') && ((uint)puVar4[4] <= *param_3)) {
    uVar5 = (undefined1)(0);
  }
  else {
    if (param_1[1] == 0xccccccc) {
                    
      thunk_FUN_101d7220(DAT_12126b84 );
    }

    piVar3 = (int *)(operator_new(0x14));
    piVar3[4] = (int)(*param_3);
    *piVar3 = (int)((int)puVar1);
    piVar3[1] = (int)((int)puVar1);
    piVar3[2] = (int)((int)puVar1);
    *(undefined2 *)(piVar3 + 3) = 0;
    puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_10286ac0(puVar6,bVar7,piVar3));
    uVar5 = (undefined1)(1);
  }
  *param_2 = (undefined4)(puVar4);
  *(undefined1 *)(param_2 + 1) = uVar5;

  return;

 } catch (...) { }
}


// Reference entry 102853c0; body size 93 bytes.
#line 1 "ENTRY_102853c0"

undefined4 * __thiscall Recovered_Bulk::FUN_102853c0(undefined4 param_2)
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

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10285570; body size 220 bytes.
#line 1 "ENTRY_10285570"

int * __thiscall Recovered_Bulk::FUN_10285570(int *param_2)
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
  pvVar7 = (void *)(operator_new(0x14));
  *(void **)pvVar7 = (void *)(pvVar7);
  *(void **)((int)pvVar7 + 4) = pvVar7;
  *(void **)((int)pvVar7 + 8) = pvVar7;
  *(undefined2 *)((int)pvVar7 + 0xc) = 0x101;
  *param_1 = (int)((int)pvVar7);

  uVar8 = (undefined4)(thunk_FUN_10283f20(*(undefined4 *)(*param_2 + 4),pvVar7,param_2));
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


// Reference entry 10285760; body size 148 bytes.
#line 1 "ENTRY_10285760"

int * __thiscall Recovered_Bulk::FUN_10285760(int *param_2)
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
    iVar3 = (int)(thunk_FUN_102871c0(iVar5));
    *param_1 = (int)(iVar3);
    param_1[1] = (int)(iVar3);
    param_1[2] = (int)(iVar3 + iVar5 * 8);

    iVar4 = (int)(thunk_FUN_10284aa0(iVar4,iVar1,iVar3,param_1,uVar2));
    param_1[1] = (int)(iVar4);
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 10285850; body size 200 bytes.
#line 1 "ENTRY_10285850"

undefined4 * __fastcall FUN_10285850(undefined4 *param_1)

{
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCLoggingHelper);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizManager);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizManager);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);

  param_1[8] = (undefined4)(0);
  param_1[9] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  param_1[8] = (undefined4)(pvVar1);
  param_1[10] = (undefined4)(0);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102864b0; body size 104 bytes.
#line 1 "ENTRY_102864b0"

void __thiscall Recovered_Bulk::FUN_102864b0(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_102840e0(*param_1,param_1[1],param_1);
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


// Reference entry 10286d60; body size 79 bytes.
#line 1 "ENTRY_10286d60"

void __thiscall Recovered_Bulk::FUN_10286d60(int param_2)
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


// Reference entry 10286f30; body size 96 bytes.
#line 1 "ENTRY_10286f30"

void __fastcall FUN_10286f30(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_102840e0(*param_1,param_1[1],param_1);
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


// Reference entry 10286fb0; body size 123 bytes.
#line 1 "ENTRY_10286fb0"

undefined4 * __stdcall FUN_10286fb0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 102871c0; body size 87 bytes.
#line 1 "ENTRY_102871c0"

void * FUN_102871c0(uint param_1)

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


// Reference entry 10287250; body size 67 bytes.
#line 1 "ENTRY_10287250"

void __fastcall FUN_10287250(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = (int)(*param_1);
  cVar1 = (char)(*(char *)((int)*(int **)(iVar2 + 4) + 0xd));
  piVar4 = (int *)(*(int **)(iVar2 + 4));
  while (cVar1 == '\0') {
    thunk_FUN_102847c0(param_1,piVar4[2]);
    piVar3 = (int *)((int *)*piVar4);
    thunk_FUN_1148a50e(piVar4,0x14);
    piVar4 = (int *)(piVar3);
    cVar1 = (char)(*(char *)((int)piVar3 + 0xd));
  }
  *(int *)(iVar2 + 4) = iVar2;
  *(int *)iVar2 = (int)(iVar2);
  *(int *)(iVar2 + 8) = iVar2;
  param_1[1] = (int)(0);
  return;
}


// Reference entry 102877e0; body size 150 bytes.
#line 1 "ENTRY_102877e0"

int * __thiscall Recovered_Bulk::FUN_102877e0(int *param_2)
{
  int param_1 = (int )this;
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

  *param_2 = (int)(0);
  param_2[1] = (int)(0);
  param_2[2] = (int)(0);
  iVar4 = (int)(*(int *)(param_1 + 0x18));
  iVar1 = (int)(*(int *)(param_1 + 0x14));
  if (iVar1 != iVar4) {
    iVar5 = (int)(iVar4 - iVar1 >> 3);
    iVar3 = (int)(thunk_FUN_102871c0(iVar5));
    *param_2 = (int)(iVar3);
    param_2[1] = (int)(iVar3);
    param_2[2] = (int)(iVar3 + iVar5 * 8);

    iVar4 = (int)(thunk_FUN_10284aa0(iVar1,iVar4,*param_2,param_2,uVar2));
    param_2[1] = (int)(iVar4);
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 10287c30; body size 330 bytes.
#line 1 "ENTRY_10287c30"

undefined4 * __stdcall FUN_10287c30(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *local_34;
  undefined4 *local_30;
  int *local_28;
  int *local_24;
  undefined4 local_20;
  int *local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  local_18 = (undefined4 *)(operator_new(0x14));

  if (local_18 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_103be5e0(uVar2));
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }

  local_18 = (undefined4 *)((undefined4 *)0x0);
  local_28 = (int *)(piVar3);
  if (piVar3 == (int *)0x0) {
    local_24 = (int *)((int *)0x0);
  }
  else {
    local_24 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  thunk_FUN_102878c0(&local_34);
  local_18 = (undefined4 *)(local_30);
  puVar4 = (undefined4 *)(local_34);
  if (local_34 != (undefined4 *)(local_30)) {
    do {
      *(unsigned char *)((char *)&local_8 + 0) = 5;
      piVar1 = (int *)((int *)puVar4[1]);
      local_20 = (undefined4)(*puVar4);
      local_1c = (int *)(piVar1);
      local_14 = (undefined4)(local_20);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 6;
      thunk_FUN_103be9e0(local_14,0xffffffff);
      *(unsigned char *)((char *)&local_8 + 0) = 7;
      if (piVar1 != (int *)0x0) {

        local_1c = (int *)((int *)0x0);
        (**(code **)(*piVar1 + 8))();
      }
      puVar4 = (undefined4 *)(puVar4 + 2);
    } while (puVar4 != (undefined4 *)(local_18));
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  thunk_FUN_101c6ae0();
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }

  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10288050; body size 4109 bytes.
#line 1 "ENTRY_10288050"

void FUN_10288050(void)

{
 try {
  uint uVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_106e3f50(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_106f8000(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_106fe200(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10703430(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10709bf0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10712c10(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_107190f0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10651f80(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_107293d0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_1074b450(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_1074cd90(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10750170(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_107594d0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10762f40(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10767e60(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_1076ce20(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10773a50(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_1077c060(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_1077eba0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10783670(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_1078c010(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_107ce880(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_107e6860(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_107eade0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_108024f0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10812860(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10819bd0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_1062a650(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_1082ad30(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10838110(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_108442b0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_1085da90(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10860e70(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10874c40(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_1087e530(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10880f80(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10892d60(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_108a0aa0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_108b5220(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_108be050(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_108c96c0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_108e2540(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_108f8bc0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_108fc510(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_109073a0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10919c70(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_1092dd80(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10949eb0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10954990(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10958450(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_1095beb0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_109622d0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10970ab0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10974ed0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10982060(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_109893a0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_1098fbc0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_109998c0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_1099e6c0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_109a8720(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_109b7970(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_109c0090(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_109c4720(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_109cc050(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_109d9800(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_109e2f40(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_1061edc0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_109eec10(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_109f6cb0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10a09850(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10a0d550(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10a13f20(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10a20e10(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10a41440(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10a44bd0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_105fd2c0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10a49340(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10a505e0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10a66530(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10a71960(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10a761e0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10a7d690(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10a80a00(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10a84300(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10a896e0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10a920d0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10a9b180(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10aa4f70(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10ab31d0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10ab44a0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10ab60e0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10abba40(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10ae6740(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10aea2b0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10af6380(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10affa30(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10b049a0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10b0c920(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10b1b570(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10b23f00(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10b2ec80(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10b33fb0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10b49bb0(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10b51060(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10b55440(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10b58a40(uVar1,pvVar2);
  }

  pvVar2 = (void *)(operator_new(0x18));

  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10b5cb50(uVar1,pvVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10289c60; body size 305 bytes.
#line 1 "ENTRY_10289c60"

void __thiscall Recovered_Bulk::FUN_10289c60(int *param_2)
{
  int param_1 = (int )this;
 try {
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *local_24 [2];
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar5 = (int *)((int *)0x0);
  local_1c = (int *)(param_2);
  local_18 = (int *)((int *)0x0);
  local_14 = (int)(param_1);
  if (param_2 != (int *)0x0) {
    piVar5 = (int *)((int *)(**(code **)(*param_2 + 0xc))(DAT_12126b84 ));
    local_18 = (int *)(piVar5);
    (**(code **)(*piVar5 + 4))();
  }
  puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 0x18));

  if (puVar2 == *(undefined4 **)(param_1 + 0x1c)) {
    thunk_FUN_10284520(puVar2,&local_1c);
  }
  else {
    *puVar2 = (undefined4)(param_2);
    puVar2[1] = (undefined4)(piVar5);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))();
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 8;
  }

  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }

  thunk_FUN_10285570(local_14 + 0x20);

  piVar5 = (int *)((int *)*local_24[0]);
  cVar1 = (char)(*(char *)((int)piVar5 + 0xd));
  while (cVar1 == '\0') {
    (**(code **)(*(int *)piVar5[4] + 8))(param_2);
    piVar3 = (int *)((int *)piVar5[2]);
    if (*(char *)((int)piVar3 + 0xd) == '\0') {
      cVar1 = (char)(*(char *)(*piVar3 + 0xd));
      piVar5 = (int *)(piVar3);
      piVar3 = (int *)((int *)*piVar3);
      while (cVar1 == '\0') {
        cVar1 = (char)(*(char *)(*piVar3 + 0xd));
        piVar5 = (int *)(piVar3);
        piVar3 = (int *)((int *)*piVar3);
      }
    }
    else {
      cVar1 = (char)(*(char *)(piVar5[1] + 0xd));
      piVar4 = (int *)((int *)piVar5[1]);
      piVar3 = (int *)(piVar5);
      while ((piVar5 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar5[2]))) {
        cVar1 = (char)(*(char *)(piVar5[1] + 0xd));
        piVar4 = (int *)((int *)piVar5[1]);
        piVar3 = (int *)(piVar5);
      }
    }
    cVar1 = (char)(*(char *)((int)piVar5 + 0xd));
  }
  thunk_FUN_10284760(local_24);

  return;

 } catch (...) { }
}


// Reference entry 10289de0; body size 221 bytes.
#line 1 "ENTRY_10289de0"

void __fastcall FUN_10289de0(int param_1)

{
 try {
  char cVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int *local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);

  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
  thunk_FUN_10302280(param_1 + 8,"We are %d legacy wizards deep",*(undefined4 *)(param_1 + 0x28),
                     uVar4);
  if ((*(int *)(param_1 + 0x28) == 0) &&
     ((uint)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14)) < 8)) {
    thunk_FUN_10285570(param_1 + 0x20);

    local_18[0] = (int *)((int *)*local_18[0]);
    cVar1 = (char)(*(char *)((int)local_18[0] + 0xd));
    while (cVar1 == '\0') {
      (**(code **)(*(int *)local_18[0][4] + 4))();
      piVar2 = (int *)((int *)local_18[0][2]);
      if (*(char *)((int)piVar2 + 0xd) == '\0') {
        cVar1 = (char)(*(char *)(*piVar2 + 0xd));
        local_18[0] = (int *)(piVar2);
        piVar2 = (int *)((int *)*piVar2);
        while (cVar1 == '\0') {
          cVar1 = (char)(*(char *)(*piVar2 + 0xd));
          local_18[0] = (int *)(piVar2);
          piVar2 = (int *)((int *)*piVar2);
        }
      }
      else {
        cVar1 = (char)(*(char *)(local_18[0][1] + 0xd));
        piVar3 = (int *)((int *)local_18[0][1]);
        piVar2 = (int *)(local_18[0]);
        while ((local_18[0] = piVar3, cVar1 == '\0' && (piVar2 == (int *)local_18[0][2]))) {
          cVar1 = (char)(*(char *)(local_18[0][1] + 0xd));
          piVar3 = (int *)((int *)local_18[0][1]);
          piVar2 = (int *)(local_18[0]);
        }
      }
      cVar1 = (char)(*(char *)((int)local_18[0] + 0xd));
    }
    thunk_FUN_10284760(local_18);
  }

  return;

 } catch (...) { }
}


// Reference entry 10289f00; body size 205 bytes.
#line 1 "ENTRY_10289f00"

void __fastcall FUN_10289f00(int param_1)

{
 try {
  char cVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int *local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);

  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  thunk_FUN_10302280(param_1 + 8,"We are %d legacy wizards deep",*(undefined4 *)(param_1 + 0x28),
                     uVar4);
  if (*(int *)(param_1 + 0x28) == 1) {
    thunk_FUN_10285570(param_1 + 0x20);

    local_18[0] = (int *)((int *)*local_18[0]);
    cVar1 = (char)(*(char *)((int)local_18[0] + 0xd));
    while (cVar1 == '\0') {
      (*(code *)**(undefined4 **)local_18[0][4])();
      piVar2 = (int *)((int *)local_18[0][2]);
      if (*(char *)((int)piVar2 + 0xd) == '\0') {
        cVar1 = (char)(*(char *)(*piVar2 + 0xd));
        local_18[0] = (int *)(piVar2);
        piVar2 = (int *)((int *)*piVar2);
        while (cVar1 == '\0') {
          cVar1 = (char)(*(char *)(*piVar2 + 0xd));
          local_18[0] = (int *)(piVar2);
          piVar2 = (int *)((int *)*piVar2);
        }
      }
      else {
        cVar1 = (char)(*(char *)(local_18[0][1] + 0xd));
        piVar3 = (int *)((int *)local_18[0][1]);
        piVar2 = (int *)(local_18[0]);
        while ((local_18[0] = piVar3, cVar1 == '\0' && (piVar2 == (int *)local_18[0][2]))) {
          cVar1 = (char)(*(char *)(local_18[0][1] + 0xd));
          piVar3 = (int *)((int *)local_18[0][1]);
          piVar2 = (int *)(local_18[0]);
        }
      }
      cVar1 = (char)(*(char *)((int)local_18[0] + 0xd));
    }
    thunk_FUN_10284760(local_18);
  }

  return;

 } catch (...) { }
}


// Reference entry 1028a700; body size 200 bytes.
#line 1 "ENTRY_1028a700"

void __thiscall Recovered_Bulk::FUN_1028a700(uint param_2)
{
  int param_1 = (int )this;
 try {
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  bool bVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 0x20));
  bVar8 = (bool)(false);
  puVar5 = (undefined4 *)((undefined4 *)puVar2[1]);
  cVar1 = (char)(*(char *)((int)puVar5 + 0xd));
  puVar7 = (undefined4 *)(puVar2);
  puVar4 = (undefined4 *)(puVar5);
  while (puVar3 = puVar5, cVar1 == '\0') {
    bVar8 = (bool)(param_2 <= (uint)puVar3[4]);
    if (bVar8) {
      puVar5 = (undefined4 *)((undefined4 *)*puVar3);
      puVar7 = (undefined4 *)(puVar3);
    }
    else {
      puVar5 = (undefined4 *)((undefined4 *)puVar3[2]);
    }
    cVar1 = (char)(*(char *)((int)puVar5 + 0xd));
    puVar4 = (undefined4 *)(puVar3);
  }
  if ((*(char *)((int)puVar7 + 0xd) != '\0') || (param_2 < (uint)puVar7[4])) {
    if (*(int *)(param_1 + 0x24) == 0xccccccc) {
                    
      thunk_FUN_101d7220(DAT_12126b84 );
    }

    piVar6 = (int *)(operator_new(0x14));
    piVar6[4] = (int)(param_2);
    *piVar6 = (int)((int)puVar2);
    piVar6[1] = (int)((int)puVar2);
    piVar6[2] = (int)((int)puVar2);
    *(undefined2 *)(piVar6 + 3) = 0;
    thunk_FUN_10286ac0(puVar4,bVar8,piVar6);
  }

  return;

 } catch (...) { }
}


// Reference entry 1028a950; body size 1820 bytes.
#line 1 "ENTRY_1028a950"

void FUN_1028a950(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_106e1380());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_106f7150());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_106fd7f0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10702ba0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10708df0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_107123b0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_107183d0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10649300());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10724930());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1074b0e0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1074ca20());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1074ed30());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10758340());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_107626d0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10767860());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1076bff0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10772f70());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1077bcd0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1077e3d0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10783320());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10786100());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_107cce20());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_107e6130());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_107e8f30());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10801190());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10811c10());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10818140());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_106243b0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_108294f0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10837820());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1083fac0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1085d720());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1085f4e0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10873290());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1087e430());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1087eff0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10891c20());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1089e580());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_108b47a0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_108bcac0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_108c7880());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_108dfd20());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_108f8850());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_108fb850());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10905580());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10916c20());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1092b810());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10948f60());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_109543e0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10957cf0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1095b3c0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10961ad0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10970540());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10973080());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_109809c0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10988b60());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1098e810());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10999150());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1099d9d0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_109a6790());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_109b6e80());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_109bf2c0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_109c3ac0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_109cb7a0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_109d8930());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_109e1620());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1061e370());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_109edf50());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_109f3c80());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10a08d00());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10a0cd20());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10a12ef0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10a1e9e0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10a40dc0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10a44600());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_105f5740());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10a48d70());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10a4dc00());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10a64980());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10a711f0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10a752c0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10a7cf20());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10a803f0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10a83b90());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10a88c80());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10a90fb0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10a9a260());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10aa2a60());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10ab2ee0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10ab3f60());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10ab6080());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10ab65f0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10ae5fd0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10ae9000());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10af4f30());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10aff240());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10b03bb0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10b09dc0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10b1a790());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10b22400());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10b2e4f0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10b31d30());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10b488f0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10b4fd80());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10b54cd0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10b585d0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10b5a460());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  return;
}


// Reference entry 1028b400; body size 157 bytes.
#line 1 "ENTRY_1028b400"

undefined4 * __thiscall Recovered_Bulk::FUN_1028b400(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
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
  pvVar3 = (void *)(operator_new(0x18));
  param_1[1] = (undefined4)(pvVar3);

  *(undefined4 *)((int)pvVar3 + 0x10) = *param_4;
  piVar1 = (int *)((int *)param_4[1]);
  *(int **)((int)pvVar3 + 0x14) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }
  *(undefined4 *)param_1[1] = (undefined4)(param_3);
  *(undefined4 *)(param_1[1] + 4) = param_3;
  *(undefined4 *)(param_1[1] + 8) = param_3;
  *(undefined1 *)(param_1[1] + 0xc) = 0;
  *(undefined1 *)(param_1[1] + 0xd) = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1028b5a0; body size 220 bytes.
#line 1 "ENTRY_1028b5a0"

int * __thiscall Recovered_Bulk::FUN_1028b5a0(int *param_2)
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
  pvVar7 = (void *)(operator_new(0x18));
  *(void **)pvVar7 = (void *)(pvVar7);
  *(void **)((int)pvVar7 + 4) = pvVar7;
  *(void **)((int)pvVar7 + 8) = pvVar7;
  *(undefined2 *)((int)pvVar7 + 0xc) = 0x101;
  *param_1 = (int)((int)pvVar7);

  uVar8 = (undefined4)(thunk_FUN_1028bbd0(*(undefined4 *)(*param_2 + 4),pvVar7,param_2));
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


// Reference entry 1028b9a0; body size 131 bytes.
#line 1 "ENTRY_1028b9a0"

undefined4 * __thiscall Recovered_Bulk::FUN_1028b9a0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);

  uVar1 = (undefined4)(*param_1);

  puVar4 = (undefined4 *)(operator_new(0x18));
  puVar4[4] = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar4[5] = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(uVar3);
  }
  *puVar4 = (undefined4)(uVar1);
  puVar4[1] = (undefined4)(uVar1);
  puVar4[2] = (undefined4)(uVar1);
  *(undefined2 *)(puVar4 + 3) = 0;

  return (undefined4 *)(puVar4);

 } catch (...) { }
}


// Reference entry 1028ba50; body size 131 bytes.
#line 1 "ENTRY_1028ba50"

undefined4 * FUN_1028ba50(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
 try {
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)(operator_new(0x18));
  puVar3[4] = (undefined4)(*param_3);
  piVar1 = (int *)((int *)param_3[1]);
  puVar3[5] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }
  *puVar3 = (undefined4)(param_2);
  puVar3[1] = (undefined4)(param_2);
  puVar3[2] = (undefined4)(param_2);
  *(undefined2 *)(puVar3 + 3) = 0;

  return (undefined4 *)(puVar3);

 } catch (...) { }
}


// Reference entry 1028bbd0; body size 221 bytes.
#line 1 "ENTRY_1028bbd0"

int * __thiscall Recovered_Bulk::FUN_1028bbd0(undefined4 *param_2,int param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  piVar4 = (int *)((int *)*param_1);
  if (*(char *)((int)param_2 + 0xd) == '\0') {

    piVar2 = (int *)(operator_new(0x18));
    piVar2[4] = (int)(param_2[4]);
    piVar1 = (int *)((int *)param_2[5]);
    piVar2[5] = (int)((int)piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *piVar2 = (int)((int)piVar4);
    piVar2[2] = (int)((int)piVar4);
    *(undefined2 *)(piVar2 + 3) = 0;
    piVar2[1] = (int)(param_3);
    *(undefined1 *)(piVar2 + 3) = *(undefined1 *)(param_2 + 3);
    if (*(char *)((int)piVar4 + 0xd) != '\0') {
      piVar4 = (int *)(piVar2);
    }

    iVar3 = (int)(thunk_FUN_1028bbd0(*param_2,piVar2,param_4));
    *piVar2 = (int)(iVar3);
    iVar3 = (int)(thunk_FUN_1028bbd0(param_2[2],piVar2,param_4));
    piVar2[2] = (int)(iVar3);
  }

  return (int *)(piVar4);

 } catch (...) { }
}


// Reference entry 1028bd10; body size 131 bytes.
#line 1 "ENTRY_1028bd10"

undefined4 * __thiscall Recovered_Bulk::FUN_1028bd10(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);

  uVar1 = (undefined4)(*param_1);

  puVar4 = (undefined4 *)(operator_new(0x18));
  puVar4[4] = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar4[5] = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(uVar3);
  }
  *puVar4 = (undefined4)(uVar1);
  puVar4[1] = (undefined4)(uVar1);
  puVar4[2] = (undefined4)(uVar1);
  *(undefined2 *)(puVar4 + 3) = 0;

  return (undefined4 *)(puVar4);

 } catch (...) { }
}


// Reference entry 1028bde0; body size 389 bytes.
#line 1 "ENTRY_1028bde0"

undefined4 * __thiscall Recovered_Bulk::FUN_1028bde0(undefined4 *param_2,int *param_3)
{
  int *param_1 = (int *)this;
 try {
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void **ppvVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  bool bVar16;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar7 = (uint)(DAT_12126b84);
  puVar15 = (undefined4 *)((undefined4 *)*param_1);
  bVar16 = (bool)(false);
  puVar14 = (undefined4 *)((undefined4 *)puVar15[1]);
  cVar5 = (char)(*(char *)((int)puVar14 + 0xd));
  ppvVar4 = (void **)(&local_10);
  local_18 = (undefined4 *)(puVar15);
  puVar3 = (undefined4 *)(puVar14);

  while (puVar2 = puVar14, ExceptionList = ppvVar4, cVar5 == '\0') {
    cVar5 = (char)((**(code **)(*(int *)puVar2[4] + 0x34))(uVar7));
    cVar6 = (char)((**(code **)(*(int *)*param_3 + 0x34))());
    if (cVar5 == cVar6) {
      iVar8 = (int)((**(code **)(*(int *)puVar2[4] + 0x14))());
      iVar9 = (int)((**(code **)(*(int *)*param_3 + 0x14))());
      if (iVar8 == iVar9) {
        piVar1 = (int *)((int *)puVar2[4]);
        uVar10 = (uint)((**(code **)(*(int *)*param_3 + 0x2c))());
        uVar11 = (uint)((**(code **)(*piVar1 + 0x2c))());
        cVar5 = (char)(uVar10 < uVar11);
        puVar15 = (undefined4 *)(local_18);
      }
      else {
        cVar5 = (char)(iVar8 < iVar9);
      }
    }
    if (cVar5 == '\0') {
      puVar14 = (undefined4 *)((undefined4 *)*puVar2);
      puVar15 = (undefined4 *)(puVar2);
      local_18 = (undefined4 *)(puVar2);
    }
    else {
      puVar14 = (undefined4 *)((undefined4 *)puVar2[2]);
    }
    bVar16 = (bool)(cVar5 == '\0');
    cVar5 = (char)(*(char *)((int)puVar14 + 0xd));

    puVar3 = (undefined4 *)(puVar2);
  }
  if ((*(char *)((int)puVar15 + 0xd) == '\0') &&
     (cVar5 = thunk_FUN_1028e330(param_3,puVar15 + 4), cVar5 == '\0')) {
    *param_2 = (undefined4)(puVar15);
    *(undefined1 *)(param_2 + 1) = 0;

    return (undefined4 *)(param_2);
  }
  if (param_1[1] != 0xaaaaaaa) {
    iVar8 = (int)(*param_1);

    piVar12 = (int *)(operator_new(0x18));
    piVar12[4] = (int)(*param_3);
    piVar1 = (int *)((int *)param_3[1]);

    piVar12[5] = (int)((int)piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *piVar12 = (int)(iVar8);
    piVar12[1] = (int)(iVar8);
    piVar12[2] = (int)(iVar8);
    *(undefined2 *)(piVar12 + 3) = 0;
    uVar13 = (undefined4)(thunk_FUN_1028eea0(puVar3,bVar16,piVar12));
    *param_2 = (undefined4)(uVar13);
    *(undefined1 *)(param_2 + 1) = 1;

    return (undefined4 *)(param_2);
  }
                    
  thunk_FUN_101d7220();

 } catch (...) { }
}


// Reference entry 1028c4d0; body size 98 bytes.
#line 1 "ENTRY_1028c4d0"

void FUN_1028c4d0(undefined4 param_1,int param_2)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_2 + 0x14));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_1148a50e(param_2,0x18);

  return;

 } catch (...) { }
}


// Reference entry 1028ce80; body size 93 bytes.
#line 1 "ENTRY_1028ce80"

undefined4 * __thiscall Recovered_Bulk::FUN_1028ce80(undefined4 param_2)
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


// Reference entry 1028cf00; body size 93 bytes.
#line 1 "ENTRY_1028cf00"

undefined4 * __thiscall Recovered_Bulk::FUN_1028cf00(undefined4 param_2)
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


// Reference entry 1028d0c0; body size 220 bytes.
#line 1 "ENTRY_1028d0c0"

int * __thiscall Recovered_Bulk::FUN_1028d0c0(int *param_2)
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
  pvVar7 = (void *)(operator_new(0x18));
  *(void **)pvVar7 = (void *)(pvVar7);
  *(void **)((int)pvVar7 + 4) = pvVar7;
  *(void **)((int)pvVar7 + 8) = pvVar7;
  *(undefined2 *)((int)pvVar7 + 0xc) = 0x101;
  *param_1 = (int)((int)pvVar7);

  uVar8 = (undefined4)(thunk_FUN_1028bbd0(*(undefined4 *)(*param_2 + 4),pvVar7,param_2));
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


// Reference entry 1028d290; body size 220 bytes.
#line 1 "ENTRY_1028d290"

int * __thiscall Recovered_Bulk::FUN_1028d290(int *param_2)
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
  pvVar7 = (void *)(operator_new(0x18));
  *(void **)pvVar7 = (void *)(pvVar7);
  *(void **)((int)pvVar7 + 4) = pvVar7;
  *(void **)((int)pvVar7 + 8) = pvVar7;
  *(undefined2 *)((int)pvVar7 + 0xc) = 0x101;
  *param_1 = (int)((int)pvVar7);

  uVar8 = (undefined4)(thunk_FUN_1028bbd0(*(undefined4 *)(*param_2 + 4),pvVar7,param_2));
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


// Reference entry 1028d5b0; body size 226 bytes.
#line 1 "ENTRY_1028d5b0"

undefined4 * __fastcall FUN_1028d5b0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

  thunk_FUN_103d5ff0(uVar1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSystemStatusManager);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCSystemStatusManager);
  param_1[10] = (undefined4)(1);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  param_1[0xb] = (undefined4)(0);
  param_1[0xc] = (undefined4)(0);
  pvVar2 = (void *)(operator_new(0x18));
  *(void **)pvVar2 = (void *)(pvVar2);
  *(void **)((int)pvVar2 + 4) = pvVar2;
  *(void **)((int)pvVar2 + 8) = pvVar2;
  *(undefined2 *)((int)pvVar2 + 0xc) = 0x101;
  param_1[0xb] = (undefined4)(pvVar2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  param_1[0xd] = (undefined4)(0);
  param_1[0xe] = (undefined4)(0);
  pvVar2 = (void *)(operator_new(0x18));
  *(void **)pvVar2 = (void *)(pvVar2);
  *(void **)((int)pvVar2 + 4) = pvVar2;
  *(void **)((int)pvVar2 + 8) = pvVar2;
  *(undefined2 *)((int)pvVar2 + 0xc) = 0x101;
  param_1[0xd] = (undefined4)(pvVar2);
  param_1[0xf] = (undefined4)(0);
  param_1[0x10] = (undefined4)(0);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1028daf0; body size 111 bytes.
#line 1 "ENTRY_1028daf0"

void __fastcall FUN_1028daf0(int param_1)

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
    piVar1 = (int *)(*(int **)(iVar3 + 0x14));

    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(iVar3 + 0x10) = 0;
      *(undefined4 *)(iVar3 + 0x14) = 0;
      (**(code **)(*piVar1 + 8))(uVar2);
      iVar3 = (int)(*(int *)(param_1 + 4));
    }
    if (iVar3 != 0) {
      thunk_FUN_1148a50e(iVar3,0x18);
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 1028de00; body size 105 bytes.
#line 1 "ENTRY_1028de00"

void __fastcall FUN_1028de00(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0xd);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSystemStatusManager);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCSystemStatusManager);
  thunk_FUN_1028c030(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x18);
  thunk_FUN_1028c0f0(param_1 + 0xb,*(undefined4 *)(param_1[0xb] + 4));
  thunk_FUN_1148a50e(param_1[0xb],0x18);
  thunk_FUN_103d60a0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1028e330; body size 107 bytes.
#line 1 "ENTRY_1028e330"

bool FUN_1028e330(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  cVar2 = (char)((**(code **)(*(int *)*param_1 + 0x34))());
  cVar3 = (char)((**(code **)(*(int *)*param_2 + 0x34))());
  if (cVar2 != cVar3) {
    return (bool)((bool)cVar2);
  }
  iVar4 = (int)((**(code **)(*(int *)*param_1 + 0x14))());
  iVar5 = (int)((**(code **)(*(int *)*param_2 + 0x14))());
  if (iVar4 == iVar5) {
    piVar1 = (int *)((int *)*param_1);
    uVar6 = (uint)((**(code **)(*(int *)*param_2 + 0x2c))());
    uVar7 = (uint)((**(code **)(*piVar1 + 0x2c))());
    return (bool)(uVar6 < uVar7);
  }
  return (bool)(iVar4 < iVar5);
}


// Reference entry 1028f140; body size 79 bytes.
#line 1 "ENTRY_1028f140"

void __thiscall Recovered_Bulk::FUN_1028f140(int param_2)
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


// Reference entry 1028f1b0; body size 79 bytes.
#line 1 "ENTRY_1028f1b0"

void __thiscall Recovered_Bulk::FUN_1028f1b0(int param_2)
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


// Reference entry 1028f950; body size 132 bytes.
#line 1 "ENTRY_1028f950"

undefined4
__stdcall FUN_1028f950(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  uVar2 = (undefined4)(thunk_FUN_106a23c0(param_5));

  uVar2 = (undefined4)(thunk_FUN_1028f450(param_1,param_2,param_3,param_4,uVar2,param_6,param_7,param_8,param_9,
                             param_10,param_11,param_12,param_13));
  thunk_FUN_1011f5e0(uVar1);

  return (undefined4)(uVar2);

 } catch (...) { }
}


// Reference entry 10290090; body size 90 bytes.
#line 1 "ENTRY_10290090"

void * FUN_10290090(uint param_1)

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


// Reference entry 102907c0; body size 373 bytes.
#line 1 "ENTRY_102907c0"

undefined4 * FUN_102907c0(undefined4 *param_1,int *param_2)

{
 try {
  int *piVar1;
  uint uVar2;
  SCLibrary *this_;
  int *piVar3;
  int *piVar4;
  int **ppiVar5;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ppiVar5 = (int **)(&local_14);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar3 = (int *)((int *)((SCLibrary *)(this_))->getSCHousehold());
  piVar1 = (int *)((int *)*piVar3);

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
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar1 == (int *)0x0) {
    *param_1 = (undefined4)(0);

    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }

    return (undefined4 *)(param_1);
  }
  piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0x1b0))(&param_2,param_2));
  piVar1 = (int *)((int *)*piVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  local_14 = (int *)(piVar4);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  if (piVar1 == (int *)0x0) {
    *param_1 = (undefined4)(0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(9)));
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))();
    }

    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }

    return (undefined4 *)(param_1);
  }
  thunk_FUN_10b6e370(param_1);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xb)));
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10291060; body size 127 bytes.
#line 1 "ENTRY_10291060"

undefined4 * __stdcall FUN_10291060(undefined4 *param_1,int *param_2)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  uVar2 = (undefined4)(thunk_FUN_106a23c0(param_2));

  puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_102909a0(&param_2,uVar2));
  uVar2 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);
  *param_1 = (undefined4)(uVar2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))(uVar1);
  }
  thunk_FUN_1011f5e0();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102915e0; body size 220 bytes.
#line 1 "ENTRY_102915e0"

int * __thiscall Recovered_Bulk::FUN_102915e0(int *param_2)
{
  int param_1 = (int )this;
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


  *param_2 = (int)(0);
  param_2[1] = (int)(0);
  pvVar7 = (void *)(operator_new(0x18));
  *(void **)pvVar7 = (void *)(pvVar7);
  *(void **)((int)pvVar7 + 4) = pvVar7;
  *(void **)((int)pvVar7 + 8) = pvVar7;
  *(undefined2 *)((int)pvVar7 + 0xc) = 0x101;
  *param_2 = (int)((int)pvVar7);

  uVar8 = (undefined4)(thunk_FUN_1028bbd0(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 4),pvVar7,param_2));
  *(undefined4 *)(*param_2 + 4) = uVar8;
  piVar2 = (int *)((int *)*param_2);
  param_2[1] = (int)(*(int *)(param_1 + 0x30));
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

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 10291e90; body size 161 bytes.
#line 1 "ENTRY_10291e90"

undefined4 __fastcall FUN_10291e90(int *param_1)

{
 try {
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x14))(&local_14,DAT_12126b84 ));
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
  if (piVar1 == (int *)0x0) {
    uVar3 = (undefined4)(0xffffffff);
  }
  else {
    uVar3 = (undefined4)((**(code **)(*piVar1 + 0x2c))());
  }

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 10291fa0; body size 74 bytes.
#line 1 "ENTRY_10291fa0"

void __stdcall FUN_10291fa0(undefined4 *param_1)

{
 try {
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  thunk_FUN_102909a0(&local_14,&DAT_121a0c1c);
  *param_1 = (undefined4)(local_14);

  return;

 } catch (...) { }
}


// Reference entry 10292010; body size 119 bytes.
#line 1 "ENTRY_10292010"

undefined4 __stdcall FUN_10292010(undefined4 param_1)

{
 try {
  uint uVar1;
  int local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_10292500(local_18,&DAT_121a0c1c);

  thunk_FUN_10291820(param_1);
  thunk_FUN_1028c0f0(local_18,*(undefined4 *)(local_18[0] + 4));
  thunk_FUN_1148a50e(local_18[0],0x18,uVar1);

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10292c70; body size 98 bytes.
#line 1 "ENTRY_10292c70"

undefined4 * FUN_10292c70(undefined4 *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_10292cf0(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10293020; body size 143 bytes.
#line 1 "ENTRY_10293020"

undefined4 __stdcall FUN_10293020(undefined4 param_1,undefined4 param_2)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  int local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  uVar2 = (undefined4)(thunk_FUN_106a23c0(param_2));

  thunk_FUN_10292500(local_18,uVar2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  thunk_FUN_10291820(param_1);
  thunk_FUN_1028c0f0(local_18,*(undefined4 *)(local_18[0] + 4));
  thunk_FUN_1148a50e(local_18[0],0x18,uVar1);
  thunk_FUN_1011f5e0();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 102934d0; body size 184 bytes.
#line 1 "ENTRY_102934d0"

void __thiscall Recovered_Bulk::FUN_102934d0(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_112af4e0("SCSystemStatus::onTimerExpired",1,"Timer %d expired!",param_2,
                     DAT_12126b84 );
  piVar2 = (int *)((int *)thunk_FUN_10292cf0(&param_2));
  piVar1 = (int *)((int *)*piVar2);

  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  (**(code **)(*piVar1 + 0x3c))(*(undefined4 *)(param_1 + 0x1c),0,1);

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10294e70; body size 114 bytes.
#line 1 "ENTRY_10294e70"

undefined4 * __thiscall Recovered_Bulk::FUN_10294e70(int param_2)
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


// Reference entry 10294f90; body size 278 bytes.
#line 1 "ENTRY_10294f90"

undefined4 * __thiscall Recovered_Bulk::FUN_10294f90(int param_2)
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


// Reference entry 10295240; body size 93 bytes.
#line 1 "ENTRY_10295240"

undefined4 * __thiscall Recovered_Bulk::FUN_10295240(undefined4 param_2)
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


// Reference entry 102953d0; body size 68 bytes.
#line 1 "ENTRY_102953d0"

undefined4 * __thiscall Recovered_Bulk::FUN_102953d0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111c05a0(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp);
  *(undefined1 *)(param_1 + 0x1124) = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 10296750; body size 103 bytes.
#line 1 "ENTRY_10296750"

void __fastcall FUN_10296750(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RLookupV1CertInfoAIOOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RLookupV1CertInfoAIOOp);
  thunk_FUN_102988f0(uVar1);
  param_1[0x184e] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  thunk_FUN_102967e0();
  thunk_FUN_11261f10();

  return;

 } catch (...) { }
}


// Reference entry 10297580; body size 134 bytes.
#line 1 "ENTRY_10297580"

undefined4 * __thiscall Recovered_Bulk::FUN_10297580(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RLookupV1CertInfoAIOOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RLookupV1CertInfoAIOOp);
  thunk_FUN_102988f0(uVar1);
  param_1[0x184e] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  thunk_FUN_102967e0();
  thunk_FUN_11261f10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x616c);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102986f0; body size 79 bytes.
#line 1 "ENTRY_102986f0"

void __thiscall Recovered_Bulk::FUN_102986f0(int param_2)
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


// Reference entry 10298890; body size 76 bytes.
#line 1 "ENTRY_10298890"

void __fastcall FUN_10298890(int param_1)

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


// Reference entry 102988f0; body size 85 bytes.
#line 1 "ENTRY_102988f0"

void __fastcall FUN_102988f0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x6140) != 0) && (*(int **)(param_1 + 0x613c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x613c) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x613c));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x613c) = 0;
    *(undefined4 *)(param_1 + 0x6140) = 0;
  }
  return;
}


// Reference entry 10298960; body size 76 bytes.
#line 1 "ENTRY_10298960"

void __fastcall FUN_10298960(int param_1)

{
  int *piVar1;
  
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}


// Reference entry 102989c0; body size 76 bytes.
#line 1 "ENTRY_102989c0"

void __fastcall FUN_102989c0(int param_1)

{
  int *piVar1;
  
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}


// Reference entry 10298a20; body size 76 bytes.
#line 1 "ENTRY_10298a20"

void __fastcall FUN_10298a20(int param_1)

{
  int *piVar1;
  
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}


// Reference entry 10298a80; body size 137 bytes.
#line 1 "ENTRY_10298a80"

void __fastcall FUN_10298a80(int param_1)

{
  int *piVar1;
  
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  memset((void *)(param_1 + 0xa4),0,0x104);
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  memset((void *)(param_1 + 0x1ac),0,0x80);
  *(undefined4 *)(param_1 + 0x22c) = 0;
  return;
}


// Reference entry 10298b30; body size 76 bytes.
#line 1 "ENTRY_10298b30"

void __fastcall FUN_10298b30(int param_1)

{
  int *piVar1;
  
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}


// Reference entry 10298b90; body size 149 bytes.
#line 1 "ENTRY_10298b90"

void __thiscall Recovered_Bulk::FUN_10298b90(int *param_2,undefined4 param_3)
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


// Reference entry 10298c70; body size 272 bytes.
#line 1 "ENTRY_10298c70"

undefined4 __thiscall Recovered_Bulk::FUN_10298c70(int *param_2)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  int local_8;
  int iStack_4;
  
  *(int *)(param_1 + 0x1c) = DAT_121194dc;
  DAT_121194dc = (int)(DAT_121194dc + 1);
  *(undefined1 *)(param_1 + 0x18) = 1;
  thunk_FUN_1145c930(&local_8,0);
  thunk_FUN_1145ad70(&local_8,30000);
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
  piVar2 = (int *)(operator_new(0x38));
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x20));
    piVar2[1] = (int)(0);
    piVar2[2] = (int)(0);
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if (puVar1 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)(puVar1);
    }
    *piVar2 = (int)((int)(uint)&ghidra_vftable_RNSGetAliveOp);
    *(undefined2 *)(piVar2 + 3) = 0x3eb;
    piVar2[4] = (int)(local_8);
    piVar2[5] = (int)(iStack_4);
    piVar2[0xd] = (int)(0);
    thunk_FUN_1145c250(piVar2 + 6,puVar5,0x19);
  }
  *(int **)(param_1 + 0x14) = piVar2;
  uVar3 = (undefined4)((**(code **)(*piVar2 + 0xc))());
  iVar6 = (int)(param_1 + 8);
  thunk_FUN_111046c0(iVar6,uVar3);
  uVar4 = (undefined4)(thunk_FUN_111046e0());
  thunk_FUN_11107600(uVar4,iVar6,uVar3);
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10298dd0; body size 272 bytes.
#line 1 "ENTRY_10298dd0"

undefined4 __thiscall Recovered_Bulk::FUN_10298dd0(int *param_2)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  int local_8;
  int iStack_4;
  
  *(int *)(param_1 + 0x1c) = DAT_121194d8;
  DAT_121194d8 = (int)(DAT_121194d8 + 1);
  *(undefined1 *)(param_1 + 0x18) = 1;
  thunk_FUN_1145c930(&local_8,0);
  thunk_FUN_1145ad70(&local_8,10000);
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
  piVar2 = (int *)(operator_new(0x38));
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x20));
    piVar2[1] = (int)(0);
    piVar2[2] = (int)(0);
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if (puVar1 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)(puVar1);
    }
    *piVar2 = (int)((int)(uint)&ghidra_vftable_RNSGetCurrentChannelOp);
    *(undefined2 *)(piVar2 + 3) = 0x3eb;
    piVar2[4] = (int)(local_8);
    piVar2[5] = (int)(iStack_4);
    piVar2[0xd] = (int)(0);
    thunk_FUN_1145c250(piVar2 + 6,puVar5,0x19);
  }
  *(int **)(param_1 + 0x14) = piVar2;
  uVar3 = (undefined4)((**(code **)(*piVar2 + 0xc))());
  iVar6 = (int)(param_1 + 8);
  thunk_FUN_111046c0(iVar6,uVar3);
  uVar4 = (undefined4)(thunk_FUN_111046e0());
  thunk_FUN_11107600(uVar4,iVar6,uVar3);
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10298f30; body size 332 bytes.
#line 1 "ENTRY_10298f30"

undefined4 __thiscall Recovered_Bulk::FUN_10298f30(int *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int iVar7;
  int local_8;
  int iStack_4;
  
  *(int *)(param_1 + 0x1c) = DAT_121194e0;
  DAT_121194e0 = (int)(DAT_121194e0 + 1);
  cVar1 = (char)(*(char *)(param_1 + 0x20));
  *(undefined1 *)(param_1 + 0x18) = 1;
  thunk_FUN_1145c930(&local_8,0);
  uVar3 = (undefined4)(40000);
  if (cVar1 == '\0') {
    uVar3 = (undefined4)(10000);
  }
  thunk_FUN_1145ad70(&local_8,uVar3);
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar4 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar4 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar4 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar4 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0x10) = piVar4;
      (**(code **)(*piVar4 + 4))();
    }
  }
  piVar4 = (int *)(operator_new(0x340c));
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    uVar2 = (undefined1)(*(undefined1 *)(param_1 + 0x20));
    puVar6 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x24) != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)(*(undefined1 **)(param_1 + 0x24));
    }
    piVar4[1] = (int)(0);
    piVar4[2] = (int)(0);
    *(undefined2 *)(piVar4 + 3) = 0x3eb;
    *piVar4 = (int)((int)(uint)&ghidra_vftable_RNetstartScanListOp);
    piVar4[4] = (int)(local_8);
    piVar4[5] = (int)(iStack_4);
    piVar4[0xd] = (int)(2);
    piVar4[0xe] = (int)(0xff);
    *(undefined2 *)(piVar4 + 0xd02) = 0x3eb;
    *(undefined1 *)((int)piVar4 + 0x340a) = uVar2;
    thunk_FUN_1145c250(piVar4 + 6,puVar6,0x19);
    memset(piVar4 + 0xf,0,0x33cc);
  }
  *(int **)(param_1 + 0x14) = piVar4;
  uVar3 = (undefined4)((**(code **)(*piVar4 + 0xc))());
  iVar7 = (int)(param_1 + 8);
  thunk_FUN_111046c0(iVar7,uVar3);
  uVar5 = (undefined4)(thunk_FUN_111046e0());
  thunk_FUN_11107600(uVar5,iVar7,uVar3);
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 102990d0; body size 512 bytes.
#line 1 "ENTRY_102990d0"

void __thiscall Recovered_Bulk::FUN_102990d0(int *param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 local_44 [8];
  int *local_3c;
  undefined1 local_38 [36];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (uint)(DAT_12126b84);

  local_3c = (int *)((int *)(param_1 + 0x1c));
  *local_3c = (int)(DAT_121194d4);
  DAT_121194d4 = (int)(DAT_121194d4 + 1);
  *(undefined1 *)(param_1 + 0x18) = 1;
  thunk_FUN_1145c930(local_44,0,local_14);
  thunk_FUN_1145ad70(local_44,20000);
  *(undefined4 *)(param_1 + 0x1a8) = 0x104;
  puVar1 = (undefined4 *)((undefined4 *)(param_1 + 0x22c));
  cVar2 = (char)(thunk_FUN_113cf9c0(param_1 + 0xa4,(undefined4 *)(param_1 + 0x1a8)));
  if (cVar2 == '\0') {
    thunk_FUN_112af4e0("netstart_op",0,"%d: ns failed to get pub key",0x25a);
    *puVar1 = (undefined4)(0);
    *(undefined4 *)(param_1 + 0x1a8) = 0;
  }
  else {
    *puVar1 = (undefined4)(0x80);
    cVar2 = (char)(thunk_FUN_113cfa30(param_1 + 0x1ac,puVar1));
    if (cVar2 == '\0') {
      thunk_FUN_112af4e0("netstart_op",0,"%d: ns failed to get pub sig",0x256);
    }
  }
  local_38[0] = (undefined1)(0);
  if (*(char *)(param_1 + 0x25) != '\0') {
    thunk_FUN_1109f7f0();
    thunk_FUN_1109f100(local_38,0x21);
  }
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar3 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar3 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar3 + 8))();
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
  pvVar4 = (void *)(operator_new(0x608));

  if (pvVar4 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    puVar7 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x20) != (undefined1 *)0x0) {
      puVar7 = (undefined1 *)(*(undefined1 **)(param_1 + 0x20));
    }
    piVar3 = (int *)((int *)thunk_FUN_11102510(local_44,*(undefined1 *)(param_1 + 0x24),
                                       *(undefined1 *)(param_1 + 0x26),puVar7,local_38,
                                       param_1 + 0xa4,*(undefined4 *)(param_1 + 0x1a8),
                                       param_1 + 0x1ac,*(undefined4 *)(param_1 + 0x22c),
                                       param_1 + 0x28,*(undefined1 *)(param_1 + 0x301)));
  }

  *(int **)(param_1 + 0x14) = piVar3;
  uVar5 = (undefined4)((**(code **)(*piVar3 + 0xc))());
  uVar8 = (uint)(-(uint)(param_1 != 0) & param_1 + 8U);
  thunk_FUN_111046c0(uVar8,uVar5);
  uVar6 = (undefined4)(thunk_FUN_111046e0());
  thunk_FUN_11107600(uVar6,uVar8,uVar5);

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10299350; body size 297 bytes.
#line 1 "ENTRY_10299350"

undefined4 __thiscall Recovered_Bulk::FUN_10299350(int *param_2)
{
  int param_1 = (int )this;
 try {
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *(int *)(param_1 + 0x1c) = DAT_121194d0;
  DAT_121194d0 = (int)(DAT_121194d0 + 1);
  cVar1 = (char)(*(char *)(param_1 + 0x26));
  *(undefined1 *)(param_1 + 0x18) = 1;
  thunk_FUN_1145c930(local_18,0,uVar2);
  uVar3 = (undefined4)(20000);
  if (cVar1 == '\0') {
    uVar3 = (undefined4)(10000);
  }
  thunk_FUN_1145ad70(local_18,uVar3);
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar4 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar4 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar4 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar4 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0x10) = piVar4;
      (**(code **)(*piVar4 + 4))();
    }
  }
  pvVar5 = (void *)(operator_new(0x3c));

  if (pvVar5 == (void *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    puVar7 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x20) != (undefined1 *)0x0) {
      puVar7 = (undefined1 *)(*(undefined1 **)(param_1 + 0x20));
    }
    piVar4 = (int *)((int *)thunk_FUN_11102770(local_18,puVar7,0,*(undefined1 *)(param_1 + 0x26)));
  }
  *(int **)(param_1 + 0x14) = piVar4;

  uVar3 = (undefined4)((**(code **)(*piVar4 + 0xc))());
  iVar8 = (int)(param_1 + 8);
  thunk_FUN_111046c0(iVar8,uVar3);
  uVar6 = (undefined4)(thunk_FUN_111046e0());
  thunk_FUN_11107600(uVar6,iVar8,uVar3);

  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));

 } catch (...) { }
}


// Reference entry 10299500; body size 97 bytes.
#line 1 "ENTRY_10299500"

void * FUN_10299500(uint param_1)

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


// Reference entry 10299b60; body size 65 bytes.
#line 1 "ENTRY_10299b60"

void __fastcall FUN_10299b60(int param_1)

{
  undefined2 uVar1;
  
  thunk_FUN_112af4e0("joinhh",10,"RNetstartScanListOp: doWork()");
  uVar1 = (undefined2)(thunk_FUN_1125e4e0(param_1 + 0x10,param_1 + 0x18,param_1 + 0x34,param_1 + 0x3c,
                             param_1 + 0x38,*(undefined1 *)(param_1 + 0x340a)));
  *(undefined2 *)(param_1 + 0x3408) = uVar1;
  return;
}


// Reference entry 1029b6d0; body size 128 bytes.
#line 1 "ENTRY_1029b6d0"

void __fastcall FUN_1029b6d0(int param_1)

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


// Reference entry 1029b790; body size 221 bytes.
#line 1 "ENTRY_1029b790"

undefined4 __thiscall Recovered_Bulk::FUN_1029b790(int param_2)
{
  int param_1 = (int )this;
 try {
  short sVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar4 = (int *)((int *)0x0);
  if ((int *)(param_1 + -8) != (int *)0x0) {
    piVar4 = (int *)((int *)(**(code **)(*(int *)(param_1 + -8) + 0xc))
                              (DAT_12126b84 ));
    (**(code **)(*piVar4 + 4))();
  }
  iVar2 = (int)(*(int *)(param_1 + 0xc));

  if (param_2 == iVar2) {
    *(undefined1 *)(param_1 + 0x10) = 0;
    sVar1 = (short)(*(short *)(iVar2 + 0xc));
    *(short *)(param_1 + 0x20) = sVar1;
    if (sVar1 == 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar2 + 0x34);
    }
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x14))(*(undefined4 *)(param_1 + 0x14),sVar1);
      if (*(int *)(param_1 + 4) != 0) {
        piVar3 = (int *)(*(int **)(param_1 + 8));
        if (piVar3 != (int *)0x0) {
          *(undefined4 *)(param_1 + 4) = 0;
          *(undefined4 *)(param_1 + 8) = 0;
          (**(code **)(*piVar3 + 8))();
        }
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 1029b8b0; body size 221 bytes.
#line 1 "ENTRY_1029b8b0"

undefined4 __thiscall Recovered_Bulk::FUN_1029b8b0(int param_2)
{
  int param_1 = (int )this;
 try {
  short sVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar4 = (int *)((int *)0x0);
  if ((int *)(param_1 + -8) != (int *)0x0) {
    piVar4 = (int *)((int *)(**(code **)(*(int *)(param_1 + -8) + 0xc))
                              (DAT_12126b84 ));
    (**(code **)(*piVar4 + 4))();
  }
  iVar2 = (int)(*(int *)(param_1 + 0xc));

  if (param_2 == iVar2) {
    *(undefined1 *)(param_1 + 0x10) = 0;
    sVar1 = (short)(*(short *)(iVar2 + 0xc));
    *(short *)(param_1 + 0x20) = sVar1;
    if (sVar1 == 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar2 + 0x34);
    }
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x14))(*(undefined4 *)(param_1 + 0x14),sVar1);
      if (*(int *)(param_1 + 4) != 0) {
        piVar3 = (int *)(*(int **)(param_1 + 8));
        if (piVar3 != (int *)0x0) {
          *(undefined4 *)(param_1 + 4) = 0;
          *(undefined4 *)(param_1 + 8) = 0;
          (**(code **)(*piVar3 + 8))();
        }
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 1029b9d0; body size 229 bytes.
#line 1 "ENTRY_1029b9d0"

undefined4 __thiscall Recovered_Bulk::FUN_1029b9d0(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  short sVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar3 = (int *)((int *)0x0);
  if ((int *)(param_1 + -8) != (int *)0x0) {
    piVar3 = (int *)((int *)(**(code **)(*(int *)(param_1 + -8) + 0xc))
                              (DAT_12126b84 ));
    (**(code **)(*piVar3 + 4))();
  }

  if (param_2 == *(int **)(param_1 + 0xc)) {
    *(undefined1 *)(param_1 + 0x10) = 0;
    sVar2 = (short)((**(code **)(**(int **)(param_1 + 0xc) + 0x18))());
    *(short *)(param_1 + 0x20) = sVar2;
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      *(bool *)(param_1 + 0x11) = sVar2 == 0;
      (**(code **)(**(int **)(param_1 + 4) + 0x14))(*(undefined4 *)(param_1 + 0x14),sVar2);
      *(undefined1 *)(param_1 + 0x11) = 0;
      if (*(int *)(param_1 + 4) != 0) {
        piVar1 = (int *)(*(int **)(param_1 + 8));
        if (piVar1 != (int *)0x0) {
          *(undefined4 *)(param_1 + 4) = 0;
          *(undefined4 *)(param_1 + 8) = 0;
          (**(code **)(*piVar1 + 8))();
        }
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 1029baf0; body size 704 bytes.
#line 1 "ENTRY_1029baf0"

void __thiscall Recovered_Bulk::FUN_1029baf0(int param_2)
{
  int param_1 = (int )this;
 try {
  short sVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *local_3e4;
  undefined4 local_3e0;
  void *local_3dc;
  undefined1 *puStack_3d8;
  undefined4 local_3d4;
  undefined4 local_3d0 [159];
  undefined1 local_154 [36];
  int local_130;
  undefined1 local_12c [128];
  int local_ac;
  uint local_8;


  local_8 = (uint)(DAT_12126b84 ^ (uint)local_3d0);

  piVar8 = (int *)((int *)(param_1 + -8));
  local_3e4 = (int *)((int *)0x0);
  if (piVar8 != (int *)0x0) {
    local_3e4 = (int *)((int *)(**(code **)(*piVar8 + 0xc))(local_8));
    (**(code **)(*local_3e4 + 4))();
  }
  iVar5 = (int)(*(int *)(param_1 + 0xc));

  if (param_2 == iVar5) {
    *(undefined1 *)(param_1 + 0x10) = 0;
    sVar1 = (short)(*(short *)(iVar5 + 0xc));
    *(short *)(param_1 + 0x2f6) = sVar1;
    *(undefined1 *)(param_1 + 0x2f8) = *(undefined1 *)(iVar5 + 0x5fc);
    if (sVar1 == 0) {
      puVar6 = (undefined4 *)((undefined4 *)(iVar5 + 0x234));
      puVar7 = (undefined4 *)(local_3d0);
      for (iVar4 = (int)(0xf2); iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = (undefined4)(*puVar6);
        puVar6 = (undefined4 *)(puVar6 + 1);
        puVar7 = (undefined4 *)(puVar7 + 1);
      }
      puVar6 = (undefined4 *)(local_3d0);
      puVar7 = (undefined4 *)((undefined4 *)(param_1 + 0x2fc));
      for (iVar5 = (int)(0xf2); iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = (undefined4)(*puVar6);
        puVar6 = (undefined4 *)(puVar6 + 1);
        puVar7 = (undefined4 *)(puVar7 + 1);
      }
      memset((void *)(param_1 + 0x6cc),0,0x41);
      thunk_FUN_1145c250((void *)(param_1 + 0x6cc),*(int *)(param_1 + 0xc) + 0x1e8,0x41);
      *(undefined2 *)(param_1 + 0x70e) = *(undefined2 *)(*(int *)(param_1 + 0xc) + 0x22a);
      thunk_FUN_1145c250(param_1 + 0x2d4,local_3d0,0x21);
      *(undefined4 *)(param_1 + 0x6c4) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x1e0);
      *(undefined4 *)(param_1 + 0x6c8) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x1e4);
      if ((local_130 != 0) && (local_ac != 0)) {

        cVar3 = (char)(thunk_FUN_11107bf0(local_12c,local_ac,param_1 + 0x250,&local_3e0));
        if (cVar3 == '\0') {
          thunk_FUN_112af4e0("SCNetstartOps",1,"SCOpNetstartSendQuery: Couldn\'t get NFWPwd");
          if (*(int **)(param_1 + 4) != (int *)0x0) {
            (**(code **)(**(int **)(param_1 + 4) + 0x14))
                      (*(undefined4 *)(param_1 + 0x14),*(undefined2 *)(param_1 + 0x2f6));
            if (*(int *)(param_1 + 4) != 0) {
              piVar2 = (int *)(*(int **)(param_1 + 8));
              if (piVar2 != (int *)0x0) {
                *(undefined4 *)(param_1 + 4) = 0;
                *(undefined4 *)(param_1 + 8) = 0;
                (**(code **)(*piVar2 + 8))();
              }
              *(undefined4 *)(param_1 + 4) = 0;
              *(undefined4 *)(param_1 + 8) = 0;
            }
          }
          goto LAB_1029bd76;
        }
        thunk_FUN_1145c250(param_1 + 0x228,local_154,0x21);
        *(int *)(param_1 + 0x24c) = local_130;
        *(undefined4 *)(param_1 + 0x2d0) = local_3e0;
        *(undefined1 *)(param_1 + 0x228 + local_130) = 0;
        thunk_FUN_11069420(param_1 + 0x228,0);
      }
    }
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x14))
                (*(undefined4 *)(param_1 + 0x14),*(undefined2 *)(param_1 + 0x2f6));
      if (*(int *)(param_1 + 4) != 0) {
        piVar2 = (int *)(*(int **)(param_1 + 8));
        if (piVar2 != (int *)0x0) {
          *(undefined4 *)(param_1 + 4) = 0;
          *(undefined4 *)(param_1 + 8) = 0;
          (**(code **)(*piVar2 + 8))();
        }
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    memset((void *)(param_1 + 0x9c),0,0x104);
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    memset((void *)(param_1 + 0x1a4),0,0x80);
    *(undefined4 *)(param_1 + 0x224) = 0;
  }
LAB_1029bd76:

  if (local_3e4 != (int *)0x0) {
    (**(code **)(*local_3e4 + 8))();
  }

  thunk_FUN_1148ac28(piVar8);
  return;

 } catch (...) { }
}


// Reference entry 1029be60; body size 210 bytes.
#line 1 "ENTRY_1029be60"

undefined4 __thiscall Recovered_Bulk::FUN_1029be60(int param_2)
{
  int param_1 = (int )this;
 try {
  undefined2 uVar1;
  int *piVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar3 = (int *)((int *)0x0);
  if ((int *)(param_1 + -8) != (int *)0x0) {
    piVar3 = (int *)((int *)(**(code **)(*(int *)(param_1 + -8) + 0xc))
                              (DAT_12126b84 ));
    (**(code **)(*piVar3 + 4))();
  }

  if (param_2 == *(int *)(param_1 + 0xc)) {
    *(undefined1 *)(param_1 + 0x10) = 0;
    uVar1 = (undefined2)(*(undefined2 *)(*(int *)(param_1 + 0xc) + 0xc));
    *(undefined2 *)(param_1 + 0x1c) = uVar1;
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x14))(*(undefined4 *)(param_1 + 0x14),uVar1);
      if (*(int *)(param_1 + 4) != 0) {
        piVar2 = (int *)(*(int **)(param_1 + 8));
        if (piVar2 != (int *)0x0) {
          *(undefined4 *)(param_1 + 4) = 0;
          *(undefined4 *)(param_1 + 8) = 0;
          (**(code **)(*piVar2 + 8))();
        }
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 1029bf70; body size 232 bytes.
#line 1 "ENTRY_1029bf70"

void __thiscall Recovered_Bulk::FUN_1029bf70(undefined4 param_2,undefined4 param_3)
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


// Reference entry 1029c980; body size 203 bytes.
#line 1 "ENTRY_1029c980"

void __thiscall Recovered_Bulk::FUN_1029c980(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  undefined1 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *(undefined4 *)(param_1 + 0x6144) = param_2;
  puVar1 = (undefined4 *)(operator_new(0x4494));

  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x6134) != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6134));
    }
    thunk_FUN_111c05a0(-(uint)(param_1 + 0x1c != 0) & param_1 + 0x6128U,param_1 + 0x1c,puVar2,20000,
                       10000,0,0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp);
    puVar1[0x18] = (undefined4)((uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp);
    *(undefined1 *)(puVar1 + 0x1124) = 0;
  }

  thunk_FUN_102207b0(puVar1,param_1 + 8,0);

  return;

 } catch (...) { }
}


// Reference entry 1029ce90; body size 95 bytes.
#line 1 "ENTRY_1029ce90"

undefined4 * __thiscall Recovered_Bulk::FUN_1029ce90(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSystemTime);
  param_1[2] = (undefined4)((uint)*(ushort *)(param_2 + 4));
  param_1[3] = (undefined4)((uint)*(ushort *)(param_2 + 6));
  param_1[4] = (undefined4)((uint)*(ushort *)(param_2 + 8));
  param_1[5] = (undefined4)((uint)*(ushort *)(param_2 + 10));
  param_1[6] = (undefined4)((uint)*(ushort *)(param_2 + 0xc));
  param_1[7] = (undefined4)((uint)*(ushort *)(param_2 + 0xe));
  param_1[8] = (undefined4)((uint)*(ushort *)(param_2 + 0x10));
  param_1[9] = (undefined4)((uint)*(ushort *)(param_2 + 0x12));
  return (undefined4 *)(param_1);
}


// Reference entry 1029cf80; body size 165 bytes.
#line 1 "ENTRY_1029cf80"

undefined4 * __thiscall Recovered_Bulk::FUN_1029cf80(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  ushort local_28;
  ushort local_26;
  ushort local_24;
  ushort local_22;
  ushort local_20;
  ushort local_1e;
  ushort local_1c;
  ushort local_1a;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSystemTime);
  thunk_FUN_11262460(param_2,param_3);
  param_1[2] = (undefined4)((uint)local_28);
  param_1[3] = (undefined4)((uint)local_26);
  param_1[4] = (undefined4)((uint)local_24);
  param_1[5] = (undefined4)((uint)local_22);
  param_1[6] = (undefined4)((uint)local_20);
  param_1[7] = (undefined4)((uint)local_1e);
  param_1[8] = (undefined4)((uint)local_1c);
  param_1[9] = (undefined4)((uint)local_1a);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1029d2d0; body size 132 bytes.
#line 1 "ENTRY_1029d2d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1029d2d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(operator_new(0x28));
  if (piVar1 == (int *)0x0) {
    *param_2 = (undefined4)(0);
  }
  else {
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar1[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCSystemTime);
    piVar1[2] = (int)(*(int *)(param_1 + 8));
    piVar1[3] = (int)(*(int *)(param_1 + 0xc));
    piVar1[4] = (int)(*(int *)(param_1 + 0x10));
    piVar1[5] = (int)(*(int *)(param_1 + 0x14));
    piVar1[6] = (int)(*(int *)(param_1 + 0x18));
    piVar1[7] = (int)(*(int *)(param_1 + 0x1c));
    piVar1[8] = (int)(*(int *)(param_1 + 0x20));
    piVar1[9] = (int)(*(int *)(param_1 + 0x24));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1029d380; body size 517 bytes.
#line 1 "ENTRY_1029d380"

undefined4 * FUN_1029d380(undefined4 *param_1,undefined4 *param_2)

{
 try {
  char cVar1;
  uint uVar2;
  int *piVar3;
  undefined1 *puVar4;
  int *piVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar6 = (int *)((int *)0x0);
  piVar5 = (int *)((int *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)((undefined1 *)*param_2);
  }
  cVar1 = (char)(thunk_FUN_11263050(puVar4));
  if (cVar1 == '\0') {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_2);
    }
    cVar1 = (char)(thunk_FUN_11262fc0(puVar4));
    if (cVar1 == '\0') {
      puVar4 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
        puVar4 = (undefined1 *)((undefined1 *)*param_2);
      }
      thunk_FUN_112af4e0("SCSystemTime",1,"Invalid string representation: \"%s\"",puVar4,uVar2);
    }
    else {
      piVar3 = (int *)(operator_new(0x28));
      if (piVar3 != (int *)0x0) {
        *piVar3 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
        piVar3[1] = (int)(0);
        g_lSCObjCount = (int)(g_lSCObjCount + 1);
        *piVar3 = (int)((int)(uint)&ghidra_vftable_SCSystemTime);
        piVar3[2] = (int)(0);
        piVar3[3] = (int)(0);
        piVar3[4] = (int)(0);
        piVar3[5] = (int)(0);
        piVar3[6] = (int)(0);
        piVar3[7] = (int)(0);
        piVar3[8] = (int)(0);
        piVar3[9] = (int)(0);
        (**(code **)(*piVar3 + 4))();
        piVar5 = (int *)(piVar3);
        piVar6 = (int *)(piVar3);
      }
    }
  }
  else {
    piVar3 = (int *)(operator_new(0x28));
    if (piVar3 != (int *)0x0) {
      *piVar3 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      piVar3[1] = (int)(0);
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      *piVar3 = (int)((int)(uint)&ghidra_vftable_SCSystemTime);
      piVar3[2] = (int)(0);
      piVar3[3] = (int)(0);
      piVar3[4] = (int)(0);
      piVar3[5] = (int)(0);
      piVar3[6] = (int)(0);
      piVar3[7] = (int)(0);
      piVar3[8] = (int)(0);
      piVar3[9] = (int)(0);
      piVar6 = (int *)(piVar3);
      if (*(code **)(*piVar3 + 0xc) == thunk_FUN_1029d770) {
        (**(code **)(*piVar3 + 4))();
        piVar5 = (int *)(piVar3);
      }
      else {
        piVar5 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
        (**(code **)(*piVar5 + 4))();
      }
    }
  }
  *param_1 = (undefined4)(piVar6);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
  }

  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1029d610; body size 131 bytes.
#line 1 "ENTRY_1029d610"

undefined4 * FUN_1029d610(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(operator_new(0x28));
  if (piVar1 == (int *)0x0) {
    *param_1 = (undefined4)(0);
  }
  else {
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar1[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCSystemTime);
    piVar1[2] = (int)(0x7d1);
    piVar1[3] = (int)(1);
    piVar1[4] = (int)(0);
    piVar1[5] = (int)(1);
    piVar1[6] = (int)(0xc);
    piVar1[7] = (int)(0);
    piVar1[8] = (int)(0);
    piVar1[9] = (int)(0);
    *param_1 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      return (undefined4 *)(param_1);
    }
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1029d8a0; body size 147 bytes.
#line 1 "ENTRY_1029d8a0"

void __fastcall FUN_1029d8a0(int *param_1)

{
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x24))();
    (**(code **)(*param_1 + 0x2c))();
    (**(code **)(*param_1 + 0x34))();
    (**(code **)(*param_1 + 0x3c))();
    (**(code **)(*param_1 + 0x44))();
    (**(code **)(*param_1 + 0x4c))();
    (**(code **)(*param_1 + 0x54))();
    (**(code **)(*param_1 + 0x5c))();
  }
  thunk_FUN_112632c0();
  return;
}


// Reference entry 1029d970; body size 99 bytes.
#line 1 "ENTRY_1029d970"

undefined4 __thiscall Recovered_Bulk::FUN_1029d970(int param_2)
{
  int param_1 = (int )this;
  if (*(uint *)(param_2 + 8) < *(uint *)(param_1 + 8)) {
    return (undefined4)(1);
  }
  if (*(uint *)(param_2 + 8) <= *(uint *)(param_1 + 8)) {
    if (*(uint *)(param_2 + 0xc) < *(uint *)(param_1 + 0xc)) {
      return (undefined4)(1);
    }
    if (*(uint *)(param_2 + 0xc) <= *(uint *)(param_1 + 0xc)) {
      if (*(uint *)(param_2 + 0x14) < *(uint *)(param_1 + 0x14)) {
        return (undefined4)(1);
      }
      if (*(uint *)(param_2 + 0x14) <= *(uint *)(param_1 + 0x14)) {
        if (*(uint *)(param_2 + 0x18) < *(uint *)(param_1 + 0x18)) {
          return (undefined4)(1);
        }
        if (*(uint *)(param_2 + 0x18) <= *(uint *)(param_1 + 0x18)) {
          if (*(uint *)(param_2 + 0x1c) < *(uint *)(param_1 + 0x1c)) {
            return (undefined4)(1);
          }
          if (*(uint *)(param_2 + 0x1c) <= *(uint *)(param_1 + 0x1c)) {
            if (*(uint *)(param_2 + 0x20) < *(uint *)(param_1 + 0x20)) {
              return (undefined4)(1);
            }
            if (*(uint *)(param_2 + 0x20) <= *(uint *)(param_1 + 0x20)) {
              if (*(uint *)(param_2 + 0x24) < *(uint *)(param_1 + 0x24)) {
                return (undefined4)(1);
              }
              if (*(uint *)(param_2 + 0x24) <= *(uint *)(param_1 + 0x24)) {
                return (undefined4)(0);
              }
            }
          }
        }
      }
    }
  }
  return (undefined4)(0xffffffff);
}


// Reference entry 1029dab0; body size 66 bytes.
#line 1 "ENTRY_1029dab0"

int __fastcall FUN_1029dab0(int param_1)

{
  uint uVar1;
  uint3 uVar2;
  
  uVar1 = (uint)(*(int *)(param_1 + 8) - 0x641);
  uVar2 = (uint3)((uint3)(uVar1 >> 8));
  if (((((uVar1 < 0x722b) && (*(uint *)(param_1 + 0xc) < 0xd)) && (*(uint *)(param_1 + 0x10) < 7))
      && ((*(uint *)(param_1 + 0x14) < 0x20 && (*(uint *)(param_1 + 0x18) < 0x18)))) &&
     ((*(uint *)(param_1 + 0x1c) < 0x3c &&
      ((*(uint *)(param_1 + 0x20) < 0x3c && (*(uint *)(param_1 + 0x24) < 1000)))))) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 1029dd80; body size 109 bytes.
#line 1 "ENTRY_1029dd80"

void FUN_1029dd80(int *param_1,int param_2)

{
  undefined2 uVar1;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    uVar1 = (undefined2)((**(code **)(*param_1 + 0x24))());
    *(undefined2 *)(param_2 + 4) = uVar1;
    uVar1 = (undefined2)((**(code **)(*param_1 + 0x2c))());
    *(undefined2 *)(param_2 + 6) = uVar1;
    uVar1 = (undefined2)((**(code **)(*param_1 + 0x34))());
    *(undefined2 *)(param_2 + 8) = uVar1;
    uVar1 = (undefined2)((**(code **)(*param_1 + 0x3c))());
    *(undefined2 *)(param_2 + 10) = uVar1;
    uVar1 = (undefined2)((**(code **)(*param_1 + 0x44))());
    *(undefined2 *)(param_2 + 0xc) = uVar1;
    uVar1 = (undefined2)((**(code **)(*param_1 + 0x4c))());
    *(undefined2 *)(param_2 + 0xe) = uVar1;
    uVar1 = (undefined2)((**(code **)(*param_1 + 0x54))());
    *(undefined2 *)(param_2 + 0x10) = uVar1;
    uVar1 = (undefined2)((**(code **)(*param_1 + 0x5c))());
    *(undefined2 *)(param_2 + 0x12) = uVar1;
  }
  return;
}


// Reference entry 1029df20; body size 143 bytes.
#line 1 "ENTRY_1029df20"

undefined4 * __thiscall Recovered_Bulk::FUN_1029df20(undefined1 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRecurrence);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  switch(*param_2) {
  case 1:
    param_1[3] = (undefined4)(1);
    param_1[2] = (undefined4)(0x3e);
    return (undefined4 *)(param_1);
  case 2:
    param_1[3] = (undefined4)(1);
    param_1[2] = (undefined4)(0x41);
    return (undefined4 *)(param_1);
  case 3:
    param_1[3] = (undefined4)(1);
    param_1[2] = (undefined4)(0x7f);
    return (undefined4 *)(param_1);
  case 4:
    param_1[3] = (undefined4)(1);
    param_1[2] = (undefined4)((uint)(byte)param_2[1]);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1029e250; body size 96 bytes.
#line 1 "ENTRY_1029e250"

undefined4 * __thiscall Recovered_Bulk::FUN_1029e250(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(operator_new(0x10));
  if (piVar1 == (int *)0x0) {
    *param_2 = (undefined4)(0);
  }
  else {
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar1[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCRecurrence);
    piVar1[2] = (int)(*(int *)(param_1 + 8));
    piVar1[3] = (int)(*(int *)(param_1 + 0xc));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1029e4b0; body size 89 bytes.
#line 1 "ENTRY_1029e4b0"

undefined4 * FUN_1029e4b0(undefined4 *param_1)

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
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCRecurrence);
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


// Reference entry 1029e960; body size 142 bytes.
#line 1 "ENTRY_1029e960"

void FUN_1029e960(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 != (int *)0x0) && (param_2 != (char *)0x0)) {
    iVar2 = (int)((**(code **)(*param_1 + 0x1c))());
    if (iVar2 == 0) {
      param_2[0] = (char)('\0');
      param_2[1] = (char)('\x7f');
      return;
    }
    iVar2 = (int)((**(code **)(*param_1 + 0x1c))());
    if (iVar2 == 1) {
      uVar3 = (uint)(0);
      uVar4 = (uint)(0);
      uVar5 = (uint)(1);
      do {
        cVar1 = (char)((**(code **)(*param_1 + 0x24))(uVar4));
        if (cVar1 != '\0') {
          uVar3 = (uint)(uVar3 | uVar5);
        }
        uVar4 = (uint)(uVar4 + 1);
        uVar5 = (uint)(uVar5 * 2);
      } while (uVar4 < 7);
      param_2[1] = (char)((char)uVar3);
      if (uVar3 == 0x3e) {
        *param_2 = (char)('\x01');
        return;
      }
      if (uVar3 == 0x41) {
        *param_2 = (char)('\x02');
        return;
      }
      *param_2 = (char)((uVar3 != 0x7f) + '\x03');
    }
  }
  return;
}


// Reference entry 1029f170; body size 93 bytes.
#line 1 "ENTRY_1029f170"

undefined4 * __thiscall Recovered_Bulk::FUN_1029f170(undefined4 param_2)
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


// Reference entry 1029f5a0; body size 187 bytes.
#line 1 "ENTRY_1029f5a0"

void __fastcall FUN_1029f5a0(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar3 = (uint)(DAT_12126b84);

  puVar1 = (undefined4 *)(param_1 + 0xc240b);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCResourceHelper);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCResourceHelper);
  cVar2 = (char)(thunk_FUN_112a7f50(puVar1,uVar3));
  if (param_1[0x1e] != 0) {
    thunk_FUN_11391170(param_1[0x1e]);
    param_1[0x1e] = (undefined4)(0);
  }
  if (cVar2 != '\0') {
    thunk_FUN_112a8010(puVar1);
  }
  thunk_FUN_112a7f20(puVar1);
  _eh_vector_destructor_iterator_(param_1 + 0xc001f,8,0x11f6,thunk_FUN_10247180);
  thunk_FUN_103d0880();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 1029f930; body size 218 bytes.
#line 1 "ENTRY_1029f930"

undefined4 * __thiscall Recovered_Bulk::FUN_1029f930(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);

  puVar1 = (undefined4 *)(param_1 + 0xc240b);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCResourceHelper);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCResourceHelper);
  cVar2 = (char)(thunk_FUN_112a7f50(puVar1,uVar3));
  if (param_1[0x1e] != 0) {
    thunk_FUN_11391170(param_1[0x1e]);
    param_1[0x1e] = (undefined4)(0);
  }
  if (cVar2 != '\0') {
    thunk_FUN_112a8010(puVar1);
  }
  thunk_FUN_112a7f20(puVar1);
  _eh_vector_destructor_iterator_(param_1 + 0xc001f,8,0x11f6,thunk_FUN_10247180);
  thunk_FUN_103d0880();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x309034);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1029fe10; body size 79 bytes.
#line 1 "ENTRY_1029fe10"

void __thiscall Recovered_Bulk::FUN_1029fe10(int param_2)
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


// Reference entry 102a0ef0; body size 166 bytes.
#line 1 "ENTRY_102a0ef0"

undefined4 __thiscall Recovered_Bulk::FUN_102a0ef0(undefined4 *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 local_4;
  
  cVar1 = (char)(thunk_FUN_112a7f50(param_1 + 0x30902c));
  uVar4 = (undefined4)(0xffffffff);
  if (*(int *)(param_1 + 0x78) != 0) {
    iVar2 = (int)(thunk_FUN_11395ef0(*(int *)(param_1 + 0x78),
                               "SELECT string_index FROM strings WHERE string_name = ? AND string_language = \'en-US\' AND string_gender = \'\' AND string_plurality = \'\'"
                               ,0xffffffff,&local_4,0));
    if (iVar2 == 0) {
      puVar3 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
        puVar3 = (undefined1 *)((undefined1 *)*param_2);
      }
      thunk_FUN_1138fd50(local_4,1,puVar3,0xffffffff,0);
      iVar2 = (int)(thunk_FUN_11397670(local_4));
      if (iVar2 == 100) {
        uVar4 = (undefined4)(thunk_FUN_11391670(local_4,0));
      }
      thunk_FUN_113948f0(local_4);
    }
  }
  if (cVar1 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x30902c);
  }
  return (undefined4)(uVar4);
}


// Reference entry 102a14a0; body size 69 bytes.
#line 1 "ENTRY_102a14a0"

uint FUN_102a14a0(int *param_1)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  char *_Str;
  
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)((undefined1 *)*param_1);
  }
  cVar1 = (char)(thunk_FUN_11264ad0(puVar3,0));
  if (cVar1 != '\0') {
    _Str = (char *)("");
    if ((char *)*param_1 != (char *)0x0) {
      _Str = (char *)((char *)*param_1);
    }
    uVar2 = (uint)(strtol(_Str,(char **)0x0,10));
    if (uVar2 < 0x6e) {
      return (uint)(uVar2);
    }
  }
  return (uint)(0x6e);
}


// Reference entry 102a1790; body size 94 bytes.
#line 1 "ENTRY_102a1790"

void __fastcall FUN_102a1790(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  
  cVar2 = (char)(thunk_FUN_112a7f50(param_1 + 0x30902c));
  piVar4 = (int *)((int *)(param_1 + 0x30007c));
  iVar3 = (int)(0x11f6);
  do {
    iVar1 = (int)(*piVar4);
    thunk_FUN_10246290(piVar4,*(undefined4 *)(iVar1 + 4));
    *(int *)(iVar1 + 4) = iVar1;
    *(int *)iVar1 = (int)(iVar1);
    *(int *)(iVar1 + 8) = iVar1;
    piVar4[1] = (int)(0);
    piVar4 = (int *)(piVar4 + 2);
    iVar3 = (int)(iVar3 + -1);
  } while (iVar3 != 0);
  if (cVar2 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x30902c);
  }
  return;
}


// Reference entry 102a1a10; body size 144 bytes.
#line 1 "ENTRY_102a1a10"

undefined4 * __thiscall Recovered_Bulk::FUN_102a1a10(undefined4 param_2,undefined4 param_3,undefined4 param_4,
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


// Reference entry 102a1ad0; body size 144 bytes.
#line 1 "ENTRY_102a1ad0"

undefined4 * __thiscall Recovered_Bulk::FUN_102a1ad0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
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


// Reference entry 102a2ce0; body size 286 bytes.
#line 1 "ENTRY_102a2ce0"

void __thiscall Recovered_Bulk::FUN_102a2ce0(int param_2,int param_3)
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
    thunk_FUN_102a2f00(param_2,param_3,iVar3);
    thunk_FUN_102a3140(iVar2,param_1[1],param_1);
    param_1[1] = (int)(iVar2);
    return;
  }
  uVar5 = (uint)(param_1[2] - iVar3 >> 3);
  if (uVar5 < uVar4) {
    if (0x1fffffff < uVar4) {
                    
      thunk_FUN_102adcd0();
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
      thunk_FUN_102a3140(iVar3,param_1[1],param_1);
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
    iVar3 = (int)(thunk_FUN_102ae270(uVar5));
    *param_1 = (int)(iVar3);
    uVar1 = (uint)(0);
    param_1[1] = (int)(iVar3);
    param_1[2] = (int)(iVar3 + uVar5 * 8);
  }
  iVar2 = (int)(param_2 + uVar1 * 8);
  thunk_FUN_102a2f00(param_2,iVar2,iVar3);
  iVar3 = (int)(thunk_FUN_102a5240(iVar2,param_3,param_1[1],param_1));
  param_1[1] = (int)(iVar3);
  return;
}


// Reference entry 102a2fd0; body size 154 bytes.
#line 1 "ENTRY_102a2fd0"

void FUN_102a2fd0(int *param_1,int *param_2)

{
 try {
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);

  if (param_1 != (int *)(param_2)) {
    piVar5 = (int *)(param_1 + 1);
    do {

      thunk_FUN_102ad4d0(uVar3);
      iVar2 = (int)(*piVar5);

      if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
        iVar4 = (int)(thunk_FUN_1123fcd0((void *)(iVar2 + -0x10)));
        if (iVar4 == 0) {
          *(undefined4 *)(iVar2 + -8) = 0;
          *(undefined4 *)(iVar2 + -0xc) = 0;
          thunk_FUN_113cfb70(iVar2,*(undefined4 *)(iVar2 + -4));
          free((void *)(iVar2 + -0x10));
        }
      }
      piVar1 = (int *)(piVar5 + 4);
      piVar5 = (int *)(piVar5 + 5);
    } while (piVar1 != (int *)(param_2));
  }

  return;

 } catch (...) { }
}


// Reference entry 102a33c0; body size 172 bytes.
#line 1 "ENTRY_102a33c0"

void __thiscall Recovered_Bulk::FUN_102a33c0(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int iVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 4));
  iVar2 = (int)(*param_2);
  *piVar1 = (int)(iVar2);
  if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar2 + -0x10),uVar3);
  }
  iVar2 = (int)(param_2[1]);

  piVar1[1] = (int)(iVar2);
  if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar2 + -0x10),uVar3);
  }
  iVar2 = (int)(param_2[2]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  piVar1[2] = (int)(iVar2);
  if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar2 + -0x10),uVar3);
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0xc;

  return;

 } catch (...) { }
}


// Reference entry 102a3cd0; body size 71 bytes.
#line 1 "ENTRY_102a3cd0"

void __thiscall Recovered_Bulk::FUN_102a3cd0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (int)(*param_1);
  piVar3 = (int *)(*(int **)(iVar2 + 4));
  if (*(char *)((int)piVar3 + 0xd) == '\0') {
    do {
      thunk_FUN_102a3d90(param_2,piVar3[2]);
      piVar1 = (int *)((int *)*piVar3);
      thunk_FUN_1148a50e(piVar3,0x18);
      piVar3 = (int *)(piVar1);
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    iVar2 = (int)(*param_1);
  }
  thunk_FUN_1148a50e(iVar2,0x18);
  return;
}


// Reference entry 102a4110; body size 73 bytes.
#line 1 "ENTRY_102a4110"

int * __thiscall Recovered_Bulk::FUN_102a4110(int *param_2,uint *param_3)
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


// Reference entry 102a4940; body size 214 bytes.
#line 1 "ENTRY_102a4940"

int * __thiscall Recovered_Bulk::FUN_102a4940(int *param_2,uint *param_3)
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

  thunk_FUN_102a4110(&local_24,param_3);
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
    iVar4 = (int)(thunk_FUN_102accd0(local_24,local_20,puVar3));
    *param_2 = (int)(iVar4);
    *(undefined1 *)(param_2 + 1) = 1;

    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar2);

 } catch (...) { }
}


// Reference entry 102a4d60; body size 214 bytes.
#line 1 "ENTRY_102a4d60"

int * __thiscall Recovered_Bulk::FUN_102a4d60(int *param_2,uint *param_3)
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

  thunk_FUN_102a4110(&local_24,param_3);
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
    iVar4 = (int)(thunk_FUN_102accd0(local_24,local_20,puVar3));
    *param_2 = (int)(iVar4);
    *(undefined1 *)(param_2 + 1) = 1;

    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar2);

 } catch (...) { }
}


// Reference entry 102a5020; body size 112 bytes.
#line 1 "ENTRY_102a5020"

int __stdcall FUN_102a5020(int param_1,int param_2,int param_3)

{
 try {
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  ppvVar1 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar1, param_1 != param_2); param_1 = param_1 + 0xc) {
    thunk_FUN_102a71f0(param_1);
    param_3 = (int)(param_3 + 0xc);

  }

  return (int)(param_3);

 } catch (...) { }
}


// Reference entry 102a5110; body size 113 bytes.
#line 1 "ENTRY_102a5110"

int FUN_102a5110(int param_1,int param_2,int param_3)

{
 try {
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  ppvVar1 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar1, param_1 != param_2); param_1 = param_1 + 0xc) {
    thunk_FUN_102a71f0(param_1);
    param_3 = (int)(param_3 + 0xc);

  }

  return (int)(param_3);

 } catch (...) { }
}


// Reference entry 102a51a0; body size 124 bytes.
#line 1 "ENTRY_102a51a0"

undefined4 * FUN_102a51a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 102a5240; body size 124 bytes.
#line 1 "ENTRY_102a5240"

undefined4 * FUN_102a5240(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 102a52e0; body size 208 bytes.
#line 1 "ENTRY_102a52e0"

int * FUN_102a52e0(int *param_1,int *param_2,int *param_3)

{
 try {
  int iVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;

  uVar3 = (uint)(DAT_12126b84);

  ppvVar2 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar2, param_1 != (int *)(param_2)); param_1 = param_1 + 3) {
    iVar1 = (int)(*param_1);
    *param_3 = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar3);
    }
    iVar1 = (int)(param_1[1]);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    param_3[1] = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar3);
    }
    iVar1 = (int)(param_1[2]);
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    param_3[2] = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar3);
    }
    param_3 = (int *)(param_3 + 3);
    local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);

  }

  return (int *)(param_3);

 } catch (...) { }
}


// Reference entry 102a53f0; body size 124 bytes.
#line 1 "ENTRY_102a53f0"

undefined4 * FUN_102a53f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 102a5490; body size 124 bytes.
#line 1 "ENTRY_102a5490"

undefined4 * FUN_102a5490(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 102a5810; body size 161 bytes.
#line 1 "ENTRY_102a5810"

void FUN_102a5810(undefined4 param_1,int *param_2,int *param_3)

{
 try {
  int iVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  iVar1 = (int)(*param_3);
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }
  iVar1 = (int)(param_3[1]);

  param_2[1] = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }
  iVar1 = (int)(param_3[2]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  param_2[2] = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 102a5ab0; body size 127 bytes.
#line 1 "ENTRY_102a5ab0"

void FUN_102a5ab0(undefined4 param_1,int param_2)

{
 try {
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_102ad4d0(DAT_12126b84 );
  iVar1 = (int)(*(int *)(param_2 + 4));

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


// Reference entry 102a6950; body size 93 bytes.
#line 1 "ENTRY_102a6950"

undefined4 * __thiscall Recovered_Bulk::FUN_102a6950(undefined4 param_2)
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


// Reference entry 102a69d0; body size 93 bytes.
#line 1 "ENTRY_102a69d0"

undefined4 * __thiscall Recovered_Bulk::FUN_102a69d0(undefined4 param_2)
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


// Reference entry 102a6e60; body size 229 bytes.
#line 1 "ENTRY_102a6e60"

int * __thiscall Recovered_Bulk::FUN_102a6e60(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (int)(0);
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  iVar5 = (int)(*param_2);
  iVar1 = (int)(param_2[1]);
  if (iVar5 != iVar1) {
    iVar2 = (int)((iVar1 - iVar5) / 0xc);
    iVar4 = (int)(thunk_FUN_102ae180(iVar2));
    *param_1 = (int)(iVar4);
    param_1[1] = (int)(iVar4);
    param_1[2] = (int)(iVar4 + iVar2 * 0xc);

    do {
      thunk_FUN_102a71f0(iVar5);
      iVar4 = (int)(iVar4 + 0xc);
      iVar5 = (int)(iVar5 + 0xc);
    } while (iVar5 != iVar1);
    param_1[1] = (int)(iVar4);

    return (int *)(param_1);
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 102a6fe0; body size 148 bytes.
#line 1 "ENTRY_102a6fe0"

int * __thiscall Recovered_Bulk::FUN_102a6fe0(int *param_2)
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
    iVar3 = (int)(thunk_FUN_102ae270(iVar5));
    *param_1 = (int)(iVar3);
    param_1[1] = (int)(iVar3);
    param_1[2] = (int)(iVar3 + iVar5 * 8);

    iVar4 = (int)(thunk_FUN_102a5240(iVar4,iVar1,iVar3,param_1,uVar2));
    param_1[1] = (int)(iVar4);
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 102a7120; body size 165 bytes.
#line 1 "ENTRY_102a7120"

int * __thiscall Recovered_Bulk::FUN_102a7120(int *param_2)
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
  iVar1 = (int)(param_2[2]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  param_1[2] = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 102a71f0; body size 165 bytes.
#line 1 "ENTRY_102a71f0"

int * __thiscall Recovered_Bulk::FUN_102a71f0(int *param_2)
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
  iVar1 = (int)(param_2[2]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  param_1[2] = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 102a72c0; body size 351 bytes.
#line 1 "ENTRY_102a72c0"

undefined4 * __thiscall Recovered_Bulk::FUN_102a72c0(char *param_2,char *param_3,char *param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  size_t sVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    puVar3 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    pcVar5 = (char *)(param_2);
    do {
      cVar1 = (char)(*pcVar5);
      pcVar5 = (char *)(pcVar5 + 1);
    } while (cVar1 != '\0');
    sVar6 = (size_t)((int)pcVar5 - (int)(param_2 + 1));
    puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(sVar6 + 0x11,uVar2));
    *puVar3 = (undefined4)(1);
    puVar3[3] = (undefined4)(sVar6);
    puVar3[2] = (undefined4)(0);
    puVar3[1] = (undefined4)(0);
    puVar3 = (undefined4 *)(puVar3 + 4);
    memcpy(puVar3,param_2,sVar6);
    *(undefined1 *)((int)puVar3 + sVar6) = 0;
  }

  *param_1 = (undefined4)(puVar3);
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
    puVar3 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    pcVar5 = (char *)(param_3);
    do {
      cVar1 = (char)(*pcVar5);
      pcVar5 = (char *)(pcVar5 + 1);
    } while (cVar1 != '\0');
    sVar6 = (size_t)((int)pcVar5 - (int)(param_3 + 1));
    puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(sVar6 + 0x11,uVar2));
    *puVar3 = (undefined4)(1);
    puVar3[3] = (undefined4)(sVar6);
    puVar3[2] = (undefined4)(0);
    puVar3[1] = (undefined4)(0);
    puVar3 = (undefined4 *)(puVar3 + 4);
    memcpy(puVar3,param_3,sVar6);
    *(undefined1 *)((int)puVar3 + sVar6) = 0;
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  param_1[1] = (undefined4)(puVar3);
  if ((param_4 == (char *)0x0) || (*param_4 == '\0')) {
    param_1[2] = (undefined4)(0);
  }
  else {
    pcVar5 = (char *)(param_4);
    do {
      cVar1 = (char)(*pcVar5);
      pcVar5 = (char *)(pcVar5 + 1);
    } while (cVar1 != '\0');
    sVar6 = (size_t)((int)pcVar5 - (int)(param_4 + 1));
    puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(sVar6 + 0x11,uVar2));
    puVar3 = (undefined4 *)(puVar4 + 4);
    *puVar4 = (undefined4)(1);
    puVar4[3] = (undefined4)(sVar6);
    puVar4[2] = (undefined4)(0);
    puVar4[1] = (undefined4)(0);
    memcpy(puVar3,param_4,sVar6);
    *(undefined1 *)((int)puVar3 + sVar6) = 0;
    param_1[2] = (undefined4)(puVar3);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102a94c0; body size 68 bytes.
#line 1 "ENTRY_102a94c0"

void __fastcall FUN_102a94c0(int *param_1)

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


// Reference entry 102a9520; body size 68 bytes.
#line 1 "ENTRY_102a9520"

void __fastcall FUN_102a9520(int *param_1)

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


// Reference entry 102a9b00; body size 96 bytes.
#line 1 "ENTRY_102a9b00"

void __fastcall FUN_102a9b00(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_102a30a0(*param_1,param_1[1],param_1);
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


// Reference entry 102a9bb0; body size 245 bytes.
#line 1 "ENTRY_102a9bb0"

void __fastcall FUN_102a9bb0(int *param_1)

{
 try {
  int iVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  iVar1 = (int)(param_1[2]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
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


// Reference entry 102a9cf0; body size 126 bytes.
#line 1 "ENTRY_102a9cf0"

void __fastcall FUN_102a9cf0(int param_1)

{
 try {
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_102ad4d0(DAT_12126b84 );
  iVar1 = (int)(*(int *)(param_1 + 4));

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


// Reference entry 102aab80; body size 181 bytes.
#line 1 "ENTRY_102aab80"

int __thiscall Recovered_Bulk::FUN_102aab80(uint *param_2)
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

  thunk_FUN_102a4110(&local_24,param_2);
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
    local_1c = (int)(thunk_FUN_102accd0(local_24,local_20,puVar3));
  }

  return (int)(local_1c + 0x14);

 } catch (...) { }
}


// Reference entry 102aac70; body size 181 bytes.
#line 1 "ENTRY_102aac70"

int __thiscall Recovered_Bulk::FUN_102aac70(uint *param_2)
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

  thunk_FUN_102a4110(&local_24,param_2);
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
    local_1c = (int)(thunk_FUN_102accd0(local_24,local_20,puVar3));
  }

  return (int)(local_1c + 0x14);

 } catch (...) { }
}


// Reference entry 102abb70; body size 82 bytes.
#line 1 "ENTRY_102abb70"

undefined4 * __thiscall Recovered_Bulk::FUN_102abb70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCArray);
  thunk_FUN_102a30a0(*puVar1,param_1[3],puVar1);
  param_1[3] = (undefined4)(*puVar1);
  thunk_FUN_102a9b00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 102abef0; body size 149 bytes.
#line 1 "ENTRY_102abef0"

int __thiscall Recovered_Bulk::FUN_102abef0(byte param_2)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_102ad4d0(DAT_12126b84 );
  iVar1 = (int)(*(int *)(param_1 + 4));

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
    thunk_FUN_1148a50e(param_1,0x14);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 102ac6a0; body size 104 bytes.
#line 1 "ENTRY_102ac6a0"

void __thiscall Recovered_Bulk::FUN_102ac6a0(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_102a30a0(*param_1,param_1[1],param_1);
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


// Reference entry 102ac730; body size 104 bytes.
#line 1 "ENTRY_102ac730"

void __thiscall Recovered_Bulk::FUN_102ac730(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_102a3140(*param_1,param_1[1],param_1);
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


// Reference entry 102ac980; body size 156 bytes.
#line 1 "ENTRY_102ac980"

void __stdcall FUN_102ac980(int *param_1,int *param_2)

{
 try {
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);

  if (param_1 != (int *)(param_2)) {
    piVar5 = (int *)(param_1 + 1);
    do {

      thunk_FUN_102ad4d0(uVar3);
      iVar2 = (int)(*piVar5);

      if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
        iVar4 = (int)(thunk_FUN_1123fcd0((void *)(iVar2 + -0x10)));
        if (iVar4 == 0) {
          *(undefined4 *)(iVar2 + -8) = 0;
          *(undefined4 *)(iVar2 + -0xc) = 0;
          thunk_FUN_113cfb70(iVar2,*(undefined4 *)(iVar2 + -4));
          free((void *)(iVar2 + -0x10));
        }
      }
      piVar1 = (int *)(piVar5 + 4);
      piVar5 = (int *)(piVar5 + 5);
    } while (piVar1 != (int *)(param_2));
  }

  return;

 } catch (...) { }
}


// Reference entry 102ad6c0; body size 96 bytes.
#line 1 "ENTRY_102ad6c0"

void __fastcall FUN_102ad6c0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_102a30a0(*param_1,param_1[1],param_1);
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


// Reference entry 102ad740; body size 96 bytes.
#line 1 "ENTRY_102ad740"

void __fastcall FUN_102ad740(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_102a3140(*param_1,param_1[1],param_1);
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


// Reference entry 102ad7c0; body size 207 bytes.
#line 1 "ENTRY_102ad7c0"

int * __stdcall FUN_102ad7c0(int *param_1,int *param_2,int *param_3)

{
 try {
  int iVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;

  uVar3 = (uint)(DAT_12126b84);

  ppvVar2 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar2, param_1 != (int *)(param_2)); param_1 = param_1 + 3) {
    iVar1 = (int)(*param_1);
    *param_3 = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar3);
    }
    iVar1 = (int)(param_1[1]);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    param_3[1] = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar3);
    }
    iVar1 = (int)(param_1[2]);
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    param_3[2] = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar3);
    }
    param_3 = (int *)(param_3 + 3);
    local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);

  }

  return (int *)(param_3);

 } catch (...) { }
}


// Reference entry 102ad8d0; body size 123 bytes.
#line 1 "ENTRY_102ad8d0"

undefined4 * __stdcall FUN_102ad8d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 102ad970; body size 123 bytes.
#line 1 "ENTRY_102ad970"

undefined4 * __stdcall FUN_102ad970(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 102ada10; body size 110 bytes.
#line 1 "ENTRY_102ada10"

void FUN_102ada10(int param_1,int param_2)

{
 try {
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  ppvVar1 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar1, param_1 != param_2); param_1 = param_1 + 0xc) {
    thunk_FUN_102a71f0(param_1);

  }

  return;

 } catch (...) { }
}


// Reference entry 102adaa0; body size 121 bytes.
#line 1 "ENTRY_102adaa0"

void FUN_102adaa0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 102adb60; body size 110 bytes.
#line 1 "ENTRY_102adb60"

void FUN_102adb60(int param_1,int param_2)

{
 try {
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  ppvVar1 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar1, param_1 != param_2); param_1 = param_1 + 0xc) {
    thunk_FUN_102a71f0(param_1);

  }

  return;

 } catch (...) { }
}


// Reference entry 102adbf0; body size 121 bytes.
#line 1 "ENTRY_102adbf0"

void __stdcall FUN_102adbf0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 102ae180; body size 90 bytes.
#line 1 "ENTRY_102ae180"

void * FUN_102ae180(uint param_1)

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


// Reference entry 102ae200; body size 87 bytes.
#line 1 "ENTRY_102ae200"

void * FUN_102ae200(uint param_1)

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


// Reference entry 102ae270; body size 87 bytes.
#line 1 "ENTRY_102ae270"

void * FUN_102ae270(uint param_1)

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


// Reference entry 102ae440; body size 115 bytes.
#line 1 "ENTRY_102ae440"

undefined4 * FUN_102ae440(undefined4 *param_1,undefined4 param_2)

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
    piVar3 = (int *)((int *)thunk_FUN_103be530(param_2));
  }

  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar1);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102ae4d0; body size 678 bytes.
#line 1 "ENTRY_102ae4d0"

undefined4 * FUN_102ae4d0(undefined4 *param_1)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;

  uVar2 = (uint)(DAT_12126b84);


  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar3 = (void *)(operator_new(0x18));
  *(void **)pvVar3 = (void *)(pvVar3);
  *(void **)((int)pvVar3 + 4) = pvVar3;
  *(void **)((int)pvVar3 + 8) = pvVar3;
  *(undefined2 *)((int)pvVar3 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar3);



  thunk_FUN_102a4110(&local_2c,&local_14);
  if ((*(char *)(local_24 + 0xd) != '\0') || (iVar5 = local_24, 0xc < *(uint *)(local_24 + 0x10))) {
    if (param_1[1] == 0xaaaaaaa) {
                    
      thunk_FUN_101d7220(uVar2);
    }
    local_20 = (undefined4 *)(param_1);


    puVar4 = (undefined4 *)(operator_new(0x18));
    local_8 = (uint)(local_8 & 0xffffff00);
    puVar4[4] = (undefined4)(local_14);
    puVar4[5] = (undefined4)(0);
    *puVar4 = (undefined4)(pvVar3);
    puVar4[1] = (undefined4)(pvVar3);
    puVar4[2] = (undefined4)(pvVar3);
    *(undefined2 *)(puVar4 + 3) = 0;
    iVar5 = (int)(thunk_FUN_102accd0(local_2c,local_28,puVar4));
  }
  *(char **)(iVar5 + 0x14) = "spotify.connect.adapter";

  thunk_FUN_102a4110(&local_2c,&local_14);
  if ((*(char *)(local_24 + 0xd) != '\0') || (iVar5 = local_24, 9 < *(uint *)(local_24 + 0x10))) {
    if (param_1[1] == 0xaaaaaaa) {
                    
      thunk_FUN_101d7220(uVar2);
    }
    uVar1 = (undefined4)(*param_1);
    local_20 = (undefined4 *)(param_1);


    puVar4 = (undefined4 *)(operator_new(0x18));
    local_8 = (uint)(local_8 & 0xffffff00);
    puVar4[4] = (undefined4)(local_14);
    puVar4[5] = (undefined4)(0);
    *puVar4 = (undefined4)(uVar1);
    puVar4[1] = (undefined4)(uVar1);
    puVar4[2] = (undefined4)(uVar1);
    *(undefined2 *)(puVar4 + 3) = 0;
    iVar5 = (int)(thunk_FUN_102accd0(local_2c,local_28,puVar4));
  }
  *(char **)(iVar5 + 0x14) = "spotify.connect.adapter";

  thunk_FUN_102a4110(&local_2c,&local_14);
  if ((*(char *)(local_24 + 0xd) != '\0') || (iVar5 = local_24, 0xef < *(uint *)(local_24 + 0x10)))
  {
    if (param_1[1] == 0xaaaaaaa) {
                    
      thunk_FUN_101d7220();
    }
    uVar1 = (undefined4)(*param_1);
    local_20 = (undefined4 *)(param_1);


    puVar4 = (undefined4 *)(operator_new(0x18));
    local_8 = (uint)(local_8 & 0xffffff00);
    puVar4[4] = (undefined4)(local_14);
    puVar4[5] = (undefined4)(0);
    *puVar4 = (undefined4)(uVar1);
    puVar4[1] = (undefined4)(uVar1);
    puVar4[2] = (undefined4)(uVar1);
    *(undefined2 *)(puVar4 + 3) = 0;
    iVar5 = (int)(thunk_FUN_102accd0(local_2c,local_28,puVar4));
  }
  *(char **)(iVar5 + 0x14) = "com.audible.mobile.sonos";

  thunk_FUN_102a4110(&local_2c,&local_14);
  if ((*(char *)(local_24 + 0xd) != '\0') || (0xec < *(uint *)(local_24 + 0x10))) {
    if (param_1[1] == 0xaaaaaaa) {
                    
      thunk_FUN_101d7220();
    }
    uVar1 = (undefined4)(*param_1);
    local_20 = (undefined4 *)(param_1);


    puVar4 = (undefined4 *)(operator_new(0x18));
    puVar4[4] = (undefined4)(local_14);
    puVar4[5] = (undefined4)(0);
    *puVar4 = (undefined4)(uVar1);
    puVar4[1] = (undefined4)(uVar1);
    puVar4[2] = (undefined4)(uVar1);
    *(undefined2 *)(puVar4 + 3) = 0;
    local_24 = (int)(thunk_FUN_102accd0(local_2c,local_28,puVar4));
  }
  *(char **)(local_24 + 0x14) = "com.pandora.dc";

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102b1f60; body size 126 bytes.
#line 1 "ENTRY_102b1f60"

void FUN_102b1f60(undefined4 param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  int *piStack00000008;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  local_14 = (undefined4)(param_1);

  piStack00000008 = (int *)((int *)0x0);
  thunk_FUN_103beae0(&local_14,0xffffffff);
  piVar1 = (int *)(piStack00000008);

  if (piStack00000008 != (int *)0x0) {
    piStack00000008 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 102b2000; body size 126 bytes.
#line 1 "ENTRY_102b2000"

void FUN_102b2000(undefined4 param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  int *piStack00000008;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  local_14 = (undefined4)(param_1);

  piStack00000008 = (int *)((int *)0x0);
  thunk_FUN_103beae0(&local_14,0xffffffff);
  piVar1 = (int *)(piStack00000008);

  if (piStack00000008 != (int *)0x0) {
    piStack00000008 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 102b4fb0; body size 70 bytes.
#line 1 "ENTRY_102b4fb0"

void __fastcall FUN_102b4fb0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x74) != 0) && (*(int **)(param_1 + 0x70) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x70) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x70));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  return;
}


// Reference entry 102b5010; body size 131 bytes.
#line 1 "ENTRY_102b5010"

void __fastcall FUN_102b5010(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x3c));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x44));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  iVar2 = (int)(*(int *)(param_1 + 0x54));
  thunk_FUN_102a3ea0(param_1 + 0x54,*(undefined4 *)(iVar2 + 4));
  *(int *)(iVar2 + 4) = iVar2;
  *(int *)iVar2 = (int)(iVar2);
  *(int *)(iVar2 + 8) = iVar2;
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}


// Reference entry 102b7800; body size 267 bytes.
#line 1 "ENTRY_102b7800"

void __fastcall FUN_102b7800(int param_1)

{
 try {
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if ((*(int *)(param_1 + 0x74) != 0) && (*(int **)(param_1 + 0x70) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x70) + 0x10))(DAT_12126b84 );
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x70));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  pvVar3 = (void *)(operator_new(0x6c));

  if (pvVar3 == (void *)0x0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(thunk_FUN_111c06e0(0));
  }
  piVar6 = (int *)(*(int **)(param_1 + 0x70));

  if (piVar6 != (int *)0x0) {
    if (*(int *)(param_1 + 0x74) != 0) {
      (**(code **)(*piVar6 + 0x10))();
      piVar6 = (int *)(*(int **)(param_1 + 0x70));
    }
    if (piVar6 != (int *)0x0) {
      iVar4 = (int)(thunk_FUN_1123fcd0(piVar6 + 1));
      if (iVar4 == 0) {
        (**(code **)*piVar6)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  *(int *)(param_1 + 0x70) = iVar2;
  if (iVar2 != 0) {
    thunk_FUN_1123fce0(iVar2 + 4);
    if (*(int **)(param_1 + 0x70) != (int *)0x0) {
      uVar5 = (undefined4)((**(code **)(**(int **)(param_1 + 0x70) + 4))(param_1 + 0x28,0));
      *(undefined4 *)(param_1 + 0x74) = uVar5;
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 102b7c50; body size 501 bytes.
#line 1 "ENTRY_102b7c50"

void __fastcall FUN_102b7c50(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  SCLibrary *this_;
  int *piVar4;
  int *piVar5;
  int **ppiVar6;
  int *local_2c;
  int *local_28;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  local_18 = (int *)(operator_new(0x20));

  if (local_18 == (int *)0x0) {
    uVar3 = (undefined4)(0);
  }
  else {
    uVar3 = (undefined4)((**(code **)(**(int **)(*(int *)(param_1 + 0x34) + 200) + 100))(uVar2));
    uVar3 = (undefined4)(thunk_FUN_104ddfd0(-(uint)(param_1 != 0) & param_1 + 8U,uVar3));
  }

  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  thunk_FUN_104deb40();
  local_18 = (int *)(operator_new(0x20));

  if (local_18 == (int *)0x0) {
    uVar3 = (undefined4)(0);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_110c2c60());
    uVar3 = (undefined4)(thunk_FUN_10b7b430(param_1 + 0x18,uVar3));
  }

  *(undefined4 *)(param_1 + 0x30) = uVar3;
  thunk_FUN_10b7b650();
  ppiVar6 = (int **)(&local_14);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar4 = (int *)((int *)((SCLibrary *)(this_))->getSCHousehold());
  piVar1 = (int *)((int *)*piVar4);

  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(ppiVar6));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc4))(*(undefined4 *)(param_1 + 0x10));
    uVar3 = (undefined4)((**(code **)(*piVar1 + 0x150))(&local_18));
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    thunk_FUN_102a23b0(uVar3);
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    if (local_2c != (int *)0x0) {
      (**(code **)(*local_2c + 0x14))(*(undefined4 *)(param_1 + 0x20));
    }
    *(unsigned char *)((char *)&local_8 + 0) = 10;
    if (local_28 != (int *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  piVar5 = (int *)((int *)thunk_FUN_1023a9c0(&local_18));
  piVar1 = (int *)((int *)*piVar5);
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  *piVar5 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    piVar5 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xe;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(*(undefined4 *)(param_1 + 0x8c));
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xf)));
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 102b7ed0; body size 403 bytes.
#line 1 "ENTRY_102b7ed0"

void __fastcall FUN_102b7ed0(int param_1)

{
 try {
  int *piVar1;
  bool bVar2;
  SCLibrary *this_;
  undefined4 uVar3;
  int *piVar4;
  int **ppiVar5;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (*(int *)(param_1 + 0x30) != 0) {
    thunk_FUN_10b7b6a0(DAT_12126b84 );
    if (*(undefined4 **)(param_1 + 0x30) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x30))(1);
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x2c))(1);
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  bVar2 = (bool)(((SCLibrary *)(0))->isShuttingDown());
  if (!bVar2) {
    ppiVar5 = (int **)(&local_14);
    this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    uVar3 = (undefined4)(((SCLibrary *)(this_))->getSCHousehold());

    thunk_FUN_101bf370(uVar3);
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))(ppiVar5);
    }
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    if (local_24 != (int *)0x0) {
      uVar3 = (undefined4)((**(code **)(*local_24 + 0x150))(&local_1c));
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      thunk_FUN_102a23b0(uVar3);
      *(unsigned char *)((char *)&local_8 + 0) = 7;
      if (local_1c != (int *)0x0) {
        (**(code **)(*local_1c + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 6;
      if (local_18 != (int *)0x0) {
        (**(code **)(*local_18 + 0x18))(*(undefined4 *)(param_1 + 0x20));
      }
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 8))();
      }
    }

    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 8))();
    }

  }
  piVar4 = (int *)((int *)thunk_FUN_1023a9c0(&local_1c));
  piVar1 = (int *)((int *)*piVar4);

  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xc)));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x28))(*(undefined4 *)(param_1 + 0x8c));
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 102b8490; body size 118 bytes.
#line 1 "ENTRY_102b8490"

void __stdcall FUN_102b8490(int param_1)

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


// Reference entry 102b8590; body size 70 bytes.
#line 1 "ENTRY_102b8590"

void __fastcall FUN_102b8590(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x74) != 0) && (*(int **)(param_1 + 0x70) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x70) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x70));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  return;
}


// Reference entry 102ba4d0; body size 371 bytes.
#line 1 "ENTRY_102ba4d0"

undefined4 * FUN_102ba4d0(undefined4 *param_1)

{
 try {
  uint uVar1;
  SCLibrary *pSVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int *local_2c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar3 = (int *)((int *)(**(code **)(*(int *)pSVar2 + 0x34))(&local_14,uVar1));
  local_18 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  if (local_18 == (int *)0x0) {
    local_2c = (int *)((int *)0x0);
  }
  else {
    local_2c = (int *)((int *)(**(code **)(*local_18 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  piVar6 = (int *)((int *)0x0);
  piVar3 = (int *)((int *)0x0);
  piVar5 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  if (local_18 != (int *)0x0) {
    puVar4 = (undefined4 *)((undefined4 *)(**(code **)(*local_18 + 0x20))(&local_18));
    local_14 = (int *)((int *)*puVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    *puVar4 = (undefined4)(0);
    if (local_14 == (int *)0x0) {
      piVar6 = (int *)((int *)0x0);
    }
    else {
      piVar6 = (int *)((int *)(**(code **)(*local_14 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    if (local_14 != (int *)0x0) {
      piVar5 = (int *)((int *)(**(code **)(*local_14 + 0x28))(&local_18));
      piVar3 = (int *)((int *)*piVar5);
      *(unsigned char *)((char *)&local_8 + 0) = 8;
      *piVar5 = (int)(0);
      if (piVar3 == (int *)0x0) {
        piVar5 = (int *)((int *)0x0);
      }
      else {
        piVar5 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
      }
      *(unsigned char *)((char *)&local_8 + 0) = 9;
      if (local_18 != (int *)0x0) {
        (**(code **)(*local_18 + 8))();
      }
    }
  }
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xb)));
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))();
  }

  if (local_2c != (int *)0x0) {
    (**(code **)(*local_2c + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102bac70; body size 159 bytes.
#line 1 "ENTRY_102bac70"

void __thiscall Recovered_Bulk::FUN_102bac70(int param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  if (param_2 != *(int *)(param_1 + 0x48)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x4c));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      (**(code **)(*piVar1 + 8))(uVar2);
    }
    *(int *)(param_1 + 0x48) = param_2;
    *(int **)(param_1 + 0x4c) = param_3;
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))();
    }
  }
  thunk_FUN_102b50c0(0);

  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 102bb280; body size 366 bytes.
#line 1 "ENTRY_102bb280"

undefined1 FUN_102bb280(int *param_1)

{
 try {
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  SCLibrary *this_;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar3 = (int)(thunk_FUN_110828b0(DAT_12126b84 ));
  if (iVar3 == 0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)thunk_FUN_11093530("RINCON_AssociatedZPUDN",0));
  }
  if (param_1 != (int *)0x0) {
    *param_1 = (int)((int)piVar4);
  }
  if (piVar4 != (int *)0x0) {
    cVar1 = (char)((**(code **)(*piVar4 + 0x74))());
    if (cVar1 != '\0') {
      iVar5 = (int)((**(code **)(*piVar4 + 0x78))());
      if (iVar5 != 0) {
        puVar8 = (undefined4 *)(&param_1);
        this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
        uVar6 = (undefined4)(((SCLibrary *)(this_))->getSCHousehold());

        thunk_FUN_101bf370(uVar6);
        *(unsigned char *)((char *)&local_8 + 0) = 3;
        if (param_1 != (int *)0x0) {
          (**(code **)(*param_1 + 8))(puVar8);
        }
        *(unsigned char *)((char *)&local_8 + 0) = 2;
        if (iVar3 != 0) {
          piVar7 = (int *)((int *)(**(code **)(*local_1c + 0x1e0))(&local_14));
          piVar4 = (int *)((int *)*piVar7);
          *(unsigned char *)((char *)&local_8 + 0) = 4;
          *piVar7 = (int)(0);
          if (piVar4 == (int *)0x0) {
            piVar7 = (int *)((int *)0x0);
          }
          else {
            piVar7 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
          }
          *(unsigned char *)((char *)&local_8 + 0) = 7;
          if (local_14 != (int *)0x0) {
            (**(code **)(*local_14 + 8))();
          }
          *(unsigned char *)((char *)&local_8 + 0) = 6;
          if (piVar4 != (int *)0x0) {
            uVar2 = (undefined1)((**(code **)(*piVar4 + 0x20))());
            local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
            if (piVar7 != (int *)0x0) {
              (**(code **)(*piVar7 + 8))();
            }
            thunk_FUN_101bf3f0();

            return (undefined1)(uVar2);
          }
          local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(9)));
          if (piVar7 != (int *)0x0) {
            (**(code **)(*piVar7 + 8))();
          }
        }

        if (local_18 != (int *)0x0) {
          (**(code **)(*local_18 + 8))();
        }
      }
    }
  }

  return (undefined1)(0);

 } catch (...) { }
}


// Reference entry 102bb6b0; body size 259 bytes.
#line 1 "ENTRY_102bb6b0"

undefined1 __fastcall FUN_102bb6b0(int param_1)

{
 try {
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  int *piVar4;
  int *piVar5;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;

  piVar4 = (int *)((int *)0x0);
  piVar5 = (int *)((int *)0x0);

  if (*(int **)(param_1 + 0x34) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x34) + 0x1c))(DAT_12126b84 ));
    if (cVar1 != '\0') {
      iVar2 = (int)((**(code **)(**(int **)(*(int *)(param_1 + 0x34) + 200) + 100))());
      if (iVar2 != 0) {
        piVar5 = (int *)((int *)thunk_FUN_103798e0(&local_14));
        piVar4 = (int *)((int *)*piVar5);
        *(unsigned char *)((char *)&local_8 + 0) = 1;
        *piVar5 = (int)(0);
        if (piVar4 == (int *)0x0) {
          piVar5 = (int *)((int *)0x0);
        }
        else {
          piVar5 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
        }
        *(unsigned char *)((char *)&local_8 + 0) = 2;
        if (local_14 != (int *)0x0) {
          (**(code **)(*local_14 + 8))();
        }
        local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
      }
    }
  }
  if (*(int **)(param_1 + 0x34) == (int *)0x0) {
LAB_102bb776:
    if (piVar4 != (int *)0x0) {
      cVar1 = (char)((**(code **)(*piVar4 + 0x28))());
      if (cVar1 != '\0') {
        uVar3 = (undefined1)(0);
        goto LAB_102bb78d;
      }
    }
  }
  else {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x34) + 0x1c))());
    if (cVar1 == '\0') goto LAB_102bb776;
    (**(code **)(**(int **)(*(int *)(param_1 + 0x34) + 200) + 100))();
    iVar2 = (int)(thunk_FUN_110816c0());
    if (iVar2 == 1) goto LAB_102bb776;
  }
  uVar3 = (undefined1)(1);
LAB_102bb78d:

  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }

  return (undefined1)(uVar3);

 } catch (...) { }
}


// Reference entry 102bba10; body size 81 bytes.
#line 1 "ENTRY_102bba10"

void __fastcall FUN_102bba10(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  thunk_FUN_102b7ed0();
  if ((*(int *)(param_1 + 0x74) != 0) && (*(int **)(param_1 + 0x70) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x70) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x70));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  thunk_FUN_102b5010();
  return;
}


// Reference entry 102bc2e0; body size 220 bytes.
#line 1 "ENTRY_102bc2e0"

int * __thiscall Recovered_Bulk::FUN_102bc2e0(int *param_2)
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
  pvVar7 = (void *)(operator_new(0x28));
  *(void **)pvVar7 = (void *)(pvVar7);
  *(void **)((int)pvVar7 + 4) = pvVar7;
  *(void **)((int)pvVar7 + 8) = pvVar7;
  *(undefined2 *)((int)pvVar7 + 0xc) = 0x101;
  *param_1 = (int)((int)pvVar7);

  uVar8 = (undefined4)(thunk_FUN_102bc730(*(undefined4 *)(*param_2 + 4),pvVar7,param_2));
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


// Reference entry 102bc540; body size 119 bytes.
#line 1 "ENTRY_102bc540"

undefined4 * __thiscall Recovered_Bulk::FUN_102bc540(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (undefined4)(*param_1);

  puVar2 = (undefined4 *)(operator_new(0x28));
  thunk_FUN_10118c40(param_2);
  *puVar2 = (undefined4)(uVar1);
  puVar2[1] = (undefined4)(uVar1);
  puVar2[2] = (undefined4)(uVar1);
  *(undefined2 *)(puVar2 + 3) = 0;

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 102bc5e0; body size 119 bytes.
#line 1 "ENTRY_102bc5e0"

undefined4 * FUN_102bc5e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
 try {
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  puVar1 = (undefined4 *)(operator_new(0x28));
  thunk_FUN_10118c40(param_3);
  *puVar1 = (undefined4)(param_2);
  puVar1[1] = (undefined4)(param_2);
  puVar1[2] = (undefined4)(param_2);
  *(undefined2 *)(puVar1 + 3) = 0;

  return (undefined4 *)(puVar1);

 } catch (...) { }
}


// Reference entry 102bc730; body size 206 bytes.
#line 1 "ENTRY_102bc730"

int * __thiscall Recovered_Bulk::FUN_102bc730(undefined4 *param_2,int param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  int iVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  piVar3 = (int *)((int *)*param_1);
  if (*(char *)((int)param_2 + 0xd) == '\0') {

    piVar1 = (int *)(operator_new(0x28));
    thunk_FUN_10118c40(param_2 + 4);
    *piVar1 = (int)((int)piVar3);
    piVar1[2] = (int)((int)piVar3);
    *(undefined2 *)(piVar1 + 3) = 0;
    piVar1[1] = (int)(param_3);
    *(undefined1 *)(piVar1 + 3) = *(undefined1 *)(param_2 + 3);
    if (*(char *)((int)piVar3 + 0xd) != '\0') {
      piVar3 = (int *)(piVar1);
    }

    iVar2 = (int)(thunk_FUN_102bc730(*param_2,piVar1,param_4));
    *piVar1 = (int)(iVar2);
    iVar2 = (int)(thunk_FUN_102bc730(param_2[2],piVar1,param_4));
    piVar1[2] = (int)(iVar2);
  }

  return (int *)(piVar3);

 } catch (...) { }
}


// Reference entry 102bc860; body size 119 bytes.
#line 1 "ENTRY_102bc860"

undefined4 * __thiscall Recovered_Bulk::FUN_102bc860(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (undefined4)(*param_1);

  puVar2 = (undefined4 *)(operator_new(0x28));
  thunk_FUN_10118c40(param_2);
  *puVar2 = (undefined4)(uVar1);
  puVar2[1] = (undefined4)(uVar1);
  puVar2[2] = (undefined4)(uVar1);
  *(undefined2 *)(puVar2 + 3) = 0;

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 102bcc90; body size 127 bytes.
#line 1 "ENTRY_102bcc90"

int * __thiscall Recovered_Bulk::FUN_102bcc90(int *param_2,undefined4 *param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar4 = (int)(*param_1);
  puVar7 = (undefined4 *)(*(undefined4 **)(iVar4 + 4));
  *param_2 = (int)((int)puVar7);
  cVar1 = (char)(*(char *)((int)puVar7 + 0xd));
  param_2[1] = (int)(0);
  param_2[2] = (int)(iVar4);
  if (cVar1 == '\0') {
    uVar2 = (undefined4)(param_3[4]);
    uVar3 = (uint)(param_3[5]);
    do {
      *param_2 = (int)((int)puVar7);
      puVar6 = (undefined4 *)(param_3);
      if (0xf < uVar3) {
        puVar6 = (undefined4 *)((undefined4 *)*param_3);
      }
      puVar5 = (undefined4 *)(puVar7 + 4);
      if (0xf < (uint)puVar7[9]) {
        puVar5 = (undefined4 *)((undefined4 *)puVar7[4]);
      }
      iVar4 = (int)(thunk_FUN_102bce30(puVar5,puVar7[8],puVar6,uVar2));
      if (-1 < iVar4) {
        param_2[2] = (int)((int)puVar7);
        puVar7 = (undefined4 *)((undefined4 *)*puVar7);
      }
      else {
        puVar7 = (undefined4 *)((undefined4 *)puVar7[2]);
      }
      param_2[1] = (int)((uint)(-1 < iVar4));
    } while (*(char *)((int)puVar7 + 0xd) == '\0');
  }
  return (int *)(param_2);
}


// Reference entry 102bcd50; body size 90 bytes.
#line 1 "ENTRY_102bcd50"

void FUN_102bcd50(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = (uint)(*(uint *)(param_2 + 0x24));
  if (0xf < uVar1) {
    iVar2 = (int)(*(int *)(param_2 + 0x10));
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
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0xf;
  *(undefined1 *)(param_2 + 0x10) = 0;
  thunk_FUN_1148a50e(param_2,0x28);
  return;
}


// Reference entry 102bd240; body size 93 bytes.
#line 1 "ENTRY_102bd240"

undefined4 * __thiscall Recovered_Bulk::FUN_102bd240(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)(param_2);

  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x28));
  param_1[1] = (undefined4)(pvVar1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102bd350; body size 220 bytes.
#line 1 "ENTRY_102bd350"

int * __thiscall Recovered_Bulk::FUN_102bd350(int *param_2)
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
  pvVar7 = (void *)(operator_new(0x28));
  *(void **)pvVar7 = (void *)(pvVar7);
  *(void **)((int)pvVar7 + 4) = pvVar7;
  *(void **)((int)pvVar7 + 8) = pvVar7;
  *(undefined2 *)((int)pvVar7 + 0xc) = 0x101;
  *param_1 = (int)((int)pvVar7);

  uVar8 = (undefined4)(thunk_FUN_102bc730(*(undefined4 *)(*param_2 + 4),pvVar7,param_2));
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


// Reference entry 102be420; body size 79 bytes.
#line 1 "ENTRY_102be420"

void __thiscall Recovered_Bulk::FUN_102be420(int param_2)
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


// Reference entry 102beb10; body size 112 bytes.
#line 1 "ENTRY_102beb10"

undefined4 * FUN_102beb10(undefined4 *param_1)

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
    piVar3 = (int *)((int *)thunk_FUN_102bd750(uVar1));
  }

  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102c0620; body size 89 bytes.
#line 1 "ENTRY_102c0620"

undefined4 * FUN_102c0620(undefined4 *param_1)

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
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCSearchQuery);
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


// Reference entry 102c0be0; body size 80 bytes.
#line 1 "ENTRY_102c0be0"

void __thiscall Recovered_Bulk::FUN_102c0be0(int *param_2)
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


// Reference entry 102c12f0; body size 93 bytes.
#line 1 "ENTRY_102c12f0"

int __thiscall Recovered_Bulk::FUN_102c12f0(int param_2)
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


// Reference entry 102c1370; body size 126 bytes.
#line 1 "ENTRY_102c1370"

int __thiscall Recovered_Bulk::FUN_102c1370(void)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 uVar2;
  int *in_stack_00000028;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  if (in_stack_00000028 != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)*in_stack_00000028)(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
    if (in_stack_00000028 != (int *)0x0) {
      (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004);
    }
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 102c1410; body size 160 bytes.
#line 1 "ENTRY_102c1410"

undefined4 * __fastcall FUN_102c1410(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCertificateChain);
  pvVar2 = (void *)(operator_new(0x10));
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_103d56e0(uVar1));
  }
  local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
  param_1[2] = (undefined4)(piVar3);
  param_1[3] = (undefined4)(0);
  if (piVar3 != (int *)0x0) {
    piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
    param_1[3] = (undefined4)(piVar3);
    (**(code **)(*piVar3 + 4))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102c1660; body size 68 bytes.
#line 1 "ENTRY_102c1660"

void __fastcall FUN_102c1660(int *param_1)

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


// Reference entry 102c1c40; body size 130 bytes.
#line 1 "ENTRY_102c1c40"

void __thiscall Recovered_Bulk::FUN_102c1c40(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)0x0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(DAT_12126b84 ));
    (**(code **)(*piVar1 + 4))();
  }

  (**(code **)(**(int **)(param_1 + 8) + 0x20))(param_2);

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 102c1e60; body size 278 bytes.
#line 1 "ENTRY_102c1e60"

undefined4 * FUN_102c1e60(undefined4 *param_1)

{
 try {
  uint uVar1;
  int *piVar2;
  void *pvVar3;
  int *piVar4;
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
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCCertificateChain);
    pvVar3 = (void *)(operator_new(0x10));
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar4 = (int *)((int *)thunk_FUN_103d56e0(uVar1));
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    piVar2[2] = (int)((int)piVar4);
    piVar2[3] = (int)(0);
    if (piVar4 != (int *)0x0) {
      piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
      piVar2[3] = (int)((int)piVar4);
      (**(code **)(*piVar4 + 4))();
    }
  }
  piVar4 = (int *)((int *)0x0);

  if (piVar2 != (int *)0x0) {
    piVar4 = (int *)(piVar2);
    if (*(code **)(*piVar2 + 0xc) != thunk_FUN_102c2040) {
      piVar4 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
    }
    (**(code **)(*piVar4 + 4))();
  }

  *param_1 = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102c20b0; body size 81 bytes.
#line 1 "ENTRY_102c20b0"

void __stdcall FUN_102c20b0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *_Memory;
  
  (**(code **)(*param_1 + 0x14))();
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x1c))());
  _Memory = (void *)((void *)thunk_FUN_1148b586(uVar2));
  iVar1 = (int)(*param_1);
  uVar2 = (undefined4)((**(code **)(iVar1 + 0x1c))());
  (**(code **)(iVar1 + 0x20))(0,_Memory,uVar2);
  thunk_FUN_112af4e0("SCSecurityContext",4,"Certificate data dump: %s",_Memory);
  free(_Memory);
  return;
}


// Reference entry 102c3d00; body size 93 bytes.
#line 1 "ENTRY_102c3d00"

int __thiscall Recovered_Bulk::FUN_102c3d00(int param_2)
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


// Reference entry 102c3d90; body size 93 bytes.
#line 1 "ENTRY_102c3d90"

int __thiscall Recovered_Bulk::FUN_102c3d90(int param_2)
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


// Reference entry 102c3e30; body size 99 bytes.
#line 1 "ENTRY_102c3e30"

undefined4 * __fastcall FUN_102c3e30(undefined4 *param_1)

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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIEventSourceImpl);
  thunk_FUN_103d5ff0(uVar1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102c4a30; body size 68 bytes.
#line 1 "ENTRY_102c4a30"

void __fastcall FUN_102c4a30(int *param_1)

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


// Reference entry 102c4a90; body size 68 bytes.
#line 1 "ENTRY_102c4a90"

void __fastcall FUN_102c4a90(int *param_1)

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


// Reference entry 102c6b80; body size 88 bytes.
#line 1 "ENTRY_102c6b80"

void __fastcall FUN_102c6b80(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x28) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x28) + 0x18))();
      (**(code **)(*(int *)(param_1 + 0x24) + 4))();
    }
  }
  if (*(int **)(param_1 + 0x90) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x90) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x90) + 0x18))();
                    
                    
      (**(code **)(*(int *)(param_1 + 0x8c) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 102c6bf0; body size 94 bytes.
#line 1 "ENTRY_102c6bf0"

undefined4 * FUN_102c6bf0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 == 3) {
    *param_1 = (undefined4)(0);
  }
  else {
    piVar1 = (int *)(operator_new(0xc));
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)((int *)0x0);
    }
    else {
      *piVar1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      piVar1[1] = (int)(0);
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      *piVar1 = (int)((int)(uint)&ghidra_vftable_SCServiceAccountFilter);
      piVar1[2] = (int)(param_2);
    }
    *param_1 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      return (undefined4 *)(param_1);
    }
  }
  return (undefined4 *)(param_1);
}


// Reference entry 102c8100; body size 191 bytes.
#line 1 "ENTRY_102c8100"

int __thiscall Recovered_Bulk::FUN_102c8100(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar4 = (int)(*(int *)(param_1 + 4));
  if (iVar4 == 0) {
    pvVar2 = (void *)(operator_new(0x30));

    if (pvVar2 == (void *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      piVar3 = (int *)((int *)thunk_FUN_10b7c8e0(param_2));
    }
    piVar5 = (int *)(*(int **)(param_1 + 4));

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
    (**(code **)(*piVar5 + 0x7c))();
    iVar4 = (int)(*(int *)(param_1 + 4));
  }

  return (int)(iVar4);

 } catch (...) { }
}


// Reference entry 102c8500; body size 135 bytes.
#line 1 "ENTRY_102c8500"

void __fastcall FUN_102c8500(int param_1)

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


// Reference entry 102c85b0; body size 135 bytes.
#line 1 "ENTRY_102c85b0"

void __fastcall FUN_102c85b0(int param_1)

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


// Reference entry 102c8b90; body size 101 bytes.
#line 1 "ENTRY_102c8b90"

bool __thiscall Recovered_Bulk::FUN_102c8b90(undefined4 *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  
  iVar1 = (int)(thunk_FUN_110828b0());
  if (iVar1 != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    piVar2 = (int *)((int *)thunk_FUN_110935f0(puVar3,0));
    if (piVar2 != (int *)0x0) {
      iVar1 = (int)((**(code **)(*piVar2 + 0x54))());
      if (iVar1 == 1) {
        iVar1 = (int)((**(code **)(*piVar2 + 0x5c))());
        if ((*(byte *)(iVar1 + 500) & 1) != 0) {
          iVar1 = (int)((**(code **)(*param_1 + 0x44))(param_2));
          return (bool)(iVar1 == 0);
        }
      }
    }
  }
  return (bool)(false);
}


// Reference entry 102c8c20; body size 392 bytes.
#line 1 "ENTRY_102c8c20"

int * FUN_102c8c20(int *param_1,int *param_2)

{
 try {
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar3 = (int)(thunk_FUN_110db7b0(DAT_12126b84 ));
  while( true ) {
    if (iVar3 == 0) {
      *param_1 = (int)(0);

      return (int *)(param_1);
    }
    thunk_FUN_110db240(&local_14);

    puVar6 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)((undefined1 *)*param_2);
    }
    cVar2 = (char)(thunk_FUN_111a0720(puVar6));
    piVar1 = (int *)(local_14);

    if (((local_14 != (int *)0x0) && (piVar5 = local_14 + -4, local_14[-4] < 0xffff)) &&
       (iVar4 = thunk_FUN_1123fcd0(piVar5), iVar4 == 0)) {
      piVar1[-2] = (int)(0);
      piVar1[-3] = (int)(0);
      thunk_FUN_113cfb70(piVar1,piVar1[-1]);
      free(piVar5);
    }

    if (cVar2 != '\0') break;
    iVar3 = (int)(thunk_FUN_110db7b0());
  }
  local_14 = (int *)((int *)0x0);

  piVar5 = (int *)((int *)thunk_FUN_102c7a50(&param_2,iVar3));
  piVar1 = (int *)((int *)*piVar5);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  *piVar5 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    piVar5 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  local_14 = (int *)(piVar5);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  *param_1 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }

  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 102c8e30; body size 118 bytes.
#line 1 "ENTRY_102c8e30"

void __stdcall FUN_102c8e30(int param_1)

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


// Reference entry 102c8fa0; body size 432 bytes.
#line 1 "ENTRY_102c8fa0"

bool __fastcall FUN_102c8fa0(int param_1)

{
 try {
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  undefined1 *puVar7;
  int *local_38;
  int *local_34;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int)(param_1);
  thunk_FUN_110828b0(DAT_12126b84 );
  puVar7 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x34) != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)(*(undefined1 **)(param_1 + 0x34));
  }
  iVar3 = (int)(thunk_FUN_110935f0(puVar7,1));
  if (iVar3 == 0) {

    return (bool)(false);
  }
  uVar4 = (undefined4)(thunk_FUN_1037a2b0(&local_18));

  thunk_FUN_101bf370(uVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  piVar5 = (int *)((int *)(**(code **)(*local_38 + 0x1cc))(&local_20));
  local_1c = (int *)((int *)*piVar5);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  *piVar5 = (int)(0);
  if (local_1c == (int *)0x0) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    piVar5 = (int *)((int *)(**(code **)(*local_1c + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  local_18 = (int *)(piVar5);
  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  piVar6 = (int *)((int *)thunk_FUN_102cf840(&local_28));
  piVar1 = (int *)((int *)*piVar6);
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  *piVar6 = (int)(0);
  local_24 = (int *)(piVar1);
  if (piVar1 == (int *)0x0) {
    piVar6 = (int *)((int *)0x0);
  }
  else {
    piVar6 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  local_20 = (int *)(piVar6);
  if (local_28 != (int *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
  cVar2 = (char)((**(code **)(*piVar1 + 0x30))(param_1 + 0x34));
  iVar3 = (int)(local_14);
  if (cVar2 != '\0') {
    if (*(int **)(local_14 + 0x30) != (int *)0x0) {
      (**(code **)(**(int **)(local_14 + 0x30) + 0x188))(local_14 + 0x34);
      if (*(int *)(iVar3 + 0x40) != 0) {
        (**(code **)(**(int **)(iVar3 + 0x30) + 0x14))(iVar3 + 0x2c);
      }
    }
    thunk_FUN_11094310();
  }
  iVar3 = (int)(*(int *)(local_14 + 0x30));
  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xd)));
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }

  if (local_34 != (int *)0x0) {
    (**(code **)(*local_34 + 8))();
  }

  return (bool)(iVar3 != 0);

 } catch (...) { }
}


// Reference entry 102ca630; body size 66 bytes.
#line 1 "ENTRY_102ca630"

undefined4 __thiscall Recovered_Bulk::FUN_102ca630(undefined4 param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x34))(param_2));
  if (cVar1 != '\0') {
    return (undefined4)(1);
  }
  thunk_FUN_104fed90(param_2);
  thunk_FUN_104fd9b0(param_2);
  thunk_FUN_1109f7f0();
  uVar2 = (undefined4)(thunk_FUN_110a3100());
  return (undefined4)(uVar2);
}


// Reference entry 102ca690; body size 80 bytes.
#line 1 "ENTRY_102ca690"

void __thiscall Recovered_Bulk::FUN_102ca690(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if (param_2 != *(int **)(param_1 + 0x40)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x44));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0x40) = param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0x44) = piVar1;
      (**(code **)(*piVar1 + 4))();
      return;
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  return;
}


// Reference entry 102ca920; body size 151 bytes.
#line 1 "ENTRY_102ca920"

undefined4 * __thiscall Recovered_Bulk::FUN_102ca920(undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  pvVar1 = (void *)(operator_new(0x1c));
  param_1[1] = (undefined4)(pvVar1);
  *(undefined4 *)((int)pvVar1 + 0x10) = *(undefined4 *)*param_5;
  *(undefined4 *)((int)pvVar1 + 0x14) = 0;
  *(undefined4 *)((int)pvVar1 + 0x18) = 0;
  *(undefined4 *)param_1[1] = (undefined4)(param_3);
  *(undefined4 *)(param_1[1] + 4) = param_3;
  *(undefined4 *)(param_1[1] + 8) = param_3;
  *(undefined1 *)(param_1[1] + 0xc) = 0;
  *(undefined1 *)(param_1[1] + 0xd) = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102cb2c0; body size 73 bytes.
#line 1 "ENTRY_102cb2c0"

int * __thiscall Recovered_Bulk::FUN_102cb2c0(int *param_2,uint *param_3)
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


// Reference entry 102cb340; body size 98 bytes.
#line 1 "ENTRY_102cb340"

void FUN_102cb340(undefined4 param_1,int param_2)

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
  thunk_FUN_1148a50e(param_2,0x1c);

  return;

 } catch (...) { }
}


// Reference entry 102cb730; body size 221 bytes.
#line 1 "ENTRY_102cb730"

int * __thiscall Recovered_Bulk::FUN_102cb730(int *param_2,uint *param_3)
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

  thunk_FUN_102cb2c0(&local_24,param_3);
  if ((*(char *)(local_1c + 0xd) == '\0') && (*(uint *)(local_1c + 0x10) <= *param_3)) {
    *param_2 = (int)(local_1c);
    *(undefined1 *)(param_2 + 1) = 0;

    return (int *)(param_2);
  }
  if (param_1[1] != 0x9249249) {
    uVar1 = (undefined4)(*param_1);


    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x1c));
    puVar3[4] = (undefined4)(*param_3);
    puVar3[5] = (undefined4)(0);
    puVar3[6] = (undefined4)(0);
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = (undefined4)(uVar1);
    puVar3[2] = (undefined4)(uVar1);
    *(undefined2 *)(puVar3 + 3) = 0;
    iVar4 = (int)(thunk_FUN_102cddc0(local_24,local_20,puVar3));
    *param_2 = (int)(iVar4);
    *(undefined1 *)(param_2 + 1) = 1;

    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar2);

 } catch (...) { }
}


// Reference entry 102cb860; body size 124 bytes.
#line 1 "ENTRY_102cb860"

undefined4 * FUN_102cb860(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 102cbb70; body size 85 bytes.
#line 1 "ENTRY_102cbb70"

void FUN_102cbb70(undefined4 param_1,int param_2)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_2 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 102cbd20; body size 89 bytes.
#line 1 "ENTRY_102cbd20"

int * __thiscall Recovered_Bulk::FUN_102cbd20(int param_2)
{
  int *param_1 = (int *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (int)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 102cc0f0; body size 93 bytes.
#line 1 "ENTRY_102cc0f0"

undefined4 * __thiscall Recovered_Bulk::FUN_102cc0f0(undefined4 param_2)
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


// Reference entry 102cc240; body size 93 bytes.
#line 1 "ENTRY_102cc240"

int __thiscall Recovered_Bulk::FUN_102cc240(int param_2)
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


// Reference entry 102cc2d0; body size 93 bytes.
#line 1 "ENTRY_102cc2d0"

int __thiscall Recovered_Bulk::FUN_102cc2d0(int param_2)
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


// Reference entry 102cc7b0; body size 88 bytes.
#line 1 "ENTRY_102cc7b0"

void __fastcall FUN_102cc7b0(int *param_1)

{
 try {
  undefined4 *puVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  puVar1 = (undefined4 *)((undefined4 *)*param_1);

  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1,DAT_12126b84 ));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 102cccd0; body size 111 bytes.
#line 1 "ENTRY_102cccd0"

void __fastcall FUN_102cccd0(int param_1)

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
    piVar1 = (int *)(*(int **)(iVar3 + 0x18));

    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(iVar3 + 0x14) = 0;
      *(undefined4 *)(iVar3 + 0x18) = 0;
      (**(code **)(*piVar1 + 8))(uVar2);
      iVar3 = (int)(*(int *)(param_1 + 4));
    }
    if (iVar3 != 0) {
      thunk_FUN_1148a50e(iVar3,0x1c);
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 102cce40; body size 84 bytes.
#line 1 "ENTRY_102cce40"

void __fastcall FUN_102cce40(int param_1)

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


// Reference entry 102cceb0; body size 96 bytes.
#line 1 "ENTRY_102cceb0"

void __fastcall FUN_102cceb0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_102cb090(*param_1,param_1[1],param_1);
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


// Reference entry 102cd3f0; body size 188 bytes.
#line 1 "ENTRY_102cd3f0"

int __thiscall Recovered_Bulk::FUN_102cd3f0(uint *param_2)
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

  thunk_FUN_102cb2c0(&local_24,param_2);
  if ((*(char *)(local_1c + 0xd) != '\0') || (*param_2 < *(uint *)(local_1c + 0x10))) {
    if (param_1[1] == 0x9249249) {
                    
      thunk_FUN_101d7220(uVar2);
    }
    uVar1 = (undefined4)(*param_1);


    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x1c));
    puVar3[4] = (undefined4)(*param_2);
    puVar3[5] = (undefined4)(0);
    puVar3[6] = (undefined4)(0);
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = (undefined4)(uVar1);
    puVar3[2] = (undefined4)(uVar1);
    *(undefined2 *)(puVar3 + 3) = 0;
    local_1c = (int)(thunk_FUN_102cddc0(local_24,local_20,puVar3));
  }

  return (int)(local_1c + 0x14);

 } catch (...) { }
}


// Reference entry 102cd9f0; body size 107 bytes.
#line 1 "ENTRY_102cd9f0"

int __thiscall Recovered_Bulk::FUN_102cd9f0(byte param_2)
{
  int param_1 = (int )this;
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
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 102cdbe0; body size 104 bytes.
#line 1 "ENTRY_102cdbe0"

void __thiscall Recovered_Bulk::FUN_102cdbe0(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_102cb090(*param_1,param_1[1],param_1);
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


// Reference entry 102ce270; body size 96 bytes.
#line 1 "ENTRY_102ce270"

void __fastcall FUN_102ce270(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_102cb090(*param_1,param_1[1],param_1);
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


// Reference entry 102ce330; body size 121 bytes.
#line 1 "ENTRY_102ce330"

void FUN_102ce330(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 102ce3d0; body size 121 bytes.
#line 1 "ENTRY_102ce3d0"

void __stdcall FUN_102ce3d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 102cf370; body size 82 bytes.
#line 1 "ENTRY_102cf370"

undefined4 * FUN_102cf370(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(operator_new(0xc));
  if (piVar1 == (int *)0x0) {
    *param_1 = (undefined4)(0);
  }
  else {
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar1[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCServiceDescriptorFilter);
    piVar1[2] = (int)(param_2);
    *param_1 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      return (undefined4 *)(param_1);
    }
  }
  return (undefined4 *)(param_1);
}


// Reference entry 102cf520; body size 77 bytes.
#line 1 "ENTRY_102cf520"

void __fastcall FUN_102cf520(int param_1)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x2c))(1);
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    thunk_FUN_10b7b6a0();
    if (*(undefined4 **)(param_1 + 0x30) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x30))(1);
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
                    
                    
  (**(code **)(*(int *)(param_1 + 0x14) + 8))();
  return;
}


// Reference entry 102cf600; body size 69 bytes.
#line 1 "ENTRY_102cf600"

void __thiscall Recovered_Bulk::FUN_102cf600(int *param_2,uint *param_3)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_102cb2c0(local_c,param_3);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(uint *)(local_4 + 0x10) <= *param_3)) {
    *param_2 = (int)(local_4);
    return;
  }
  *param_2 = (int)(*param_1);
  return;
}


// Reference entry 102cf660; body size 311 bytes.
#line 1 "ENTRY_102cf660"

undefined4 * __thiscall Recovered_Bulk::FUN_102cf660(undefined4 *param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  pvVar4 = (void *)(operator_new(0x14));

  if (pvVar4 == (void *)0x0) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    piVar5 = (int *)((int *)thunk_FUN_103be5e0(uVar3));
  }

  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))();
  }

  if (piVar5 == (int *)0x0) {
    piVar6 = (int *)((int *)0x0);
  }
  else {
    piVar6 = (int *)((int *)(**(code **)(*piVar5 + 0xc))());
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  if ((*(char *)(param_1 + 0x40) == '\0') || (*(char *)(param_1 + 0x148) == '\0')) {
    *param_2 = (undefined4)(piVar5);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))();
    }

  }
  else {
    uVar7 = (uint)(0);
    uVar3 = (uint)(*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34) >> 3);
    if (uVar3 != 0) {
      do {
        uVar1 = (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x34) + uVar7 * 8));
        if ((param_3 == (int *)0x0) ||
           (cVar2 = (**(code **)(*param_3 + 0x14))(uVar1), cVar2 != '\0')) {
          thunk_FUN_103be9e0(uVar1,0xffffffff);
        }
        uVar7 = (uint)(uVar7 + 1);
      } while (uVar7 < uVar3);
    }
    *param_2 = (undefined4)(piVar5);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))();
    }

  }
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 102cf840; body size 225 bytes.
#line 1 "ENTRY_102cf840"

undefined4 * __thiscall Recovered_Bulk::FUN_102cf840(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  piVar3 = (int *)(*(int **)(param_1 + 0x54));
  if (piVar3 == (int *)0x0) {
    pvVar2 = (void *)(operator_new(0x100));

    if (pvVar2 == (void *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      piVar3 = (int *)((int *)thunk_FUN_102c3f10(param_1));
    }
    piVar4 = (int *)(*(int **)(param_1 + 0x54));

    if (piVar3 != (int *)(piVar4)) {
      piVar4 = (int *)(*(int **)(param_1 + 0x58));
      if (piVar4 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x54) = 0;
        *(undefined4 *)(param_1 + 0x58) = 0;
        (**(code **)(*piVar4 + 8))();
      }
      *(int **)(param_1 + 0x54) = piVar3;
      if (piVar3 == (int *)0x0) {
        *(undefined4 *)(param_1 + 0x58) = 0;
        piVar4 = (int *)((int *)0x0);
      }
      else {
        piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
        *(int **)(param_1 + 0x58) = piVar3;
        (**(code **)(*piVar3 + 4))();
        piVar4 = (int *)(*(int **)(param_1 + 0x54));
      }
    }
    thunk_FUN_10b8e970(-(uint)(piVar4 != (int *)0x0) & (uint)(piVar4 + 6));
    piVar3 = (int *)(*(int **)(param_1 + 0x54));
  }
  *param_2 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar1);
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 102cffa0; body size 135 bytes.
#line 1 "ENTRY_102cffa0"

void __fastcall FUN_102cffa0(int param_1)

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


// Reference entry 102d0050; body size 135 bytes.
#line 1 "ENTRY_102d0050"

void __fastcall FUN_102d0050(int param_1)

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


// Reference entry 102d0e60; body size 179 bytes.
#line 1 "ENTRY_102d0e60"

int * __stdcall FUN_102d0e60(int *param_1,int *param_2)

{
 try {
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (undefined4)(thunk_FUN_103a3ed0(param_2,DAT_12126b84 ));
  piVar3 = (int *)((int *)thunk_FUN_102d09d0(&param_2,uVar2));
  piVar1 = (int *)((int *)*piVar3);

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


// Reference entry 102d11b0; body size 118 bytes.
#line 1 "ENTRY_102d11b0"

void __stdcall FUN_102d11b0(int param_1)

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


// Reference entry 102d1eb0; body size 145 bytes.
#line 1 "ENTRY_102d1eb0"

undefined4 * __thiscall Recovered_Bulk::FUN_102d1eb0(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
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
  pvVar3 = (void *)(operator_new(0x14));
  param_1[1] = (undefined4)(pvVar3);
  iVar1 = (int)(*(int *)*param_4);
  *(int *)((int)pvVar3 + 8) = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }
  *(undefined4 *)((int)pvVar3 + 0xc) = 0;
  *(undefined4 *)((int)pvVar3 + 0x10) = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102d29a0; body size 95 bytes.
#line 1 "ENTRY_102d29a0"

void FUN_102d29a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 102d2bb0; body size 161 bytes.
#line 1 "ENTRY_102d2bb0"

undefined4 * __fastcall FUN_102d2bb0(undefined4 *param_1)

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
  thunk_FUN_102d4700(0x10,param_1[1]);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102d3080; body size 164 bytes.
#line 1 "ENTRY_102d3080"

undefined4 * __thiscall Recovered_Bulk::FUN_102d3080(undefined4 *param_2)
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
  thunk_FUN_102d4700(0x10,param_1[1]);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102d3210; body size 93 bytes.
#line 1 "ENTRY_102d3210"

int __thiscall Recovered_Bulk::FUN_102d3210(int param_2)
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


// Reference entry 102d32c0; body size 161 bytes.
#line 1 "ENTRY_102d32c0"

undefined4 * __fastcall FUN_102d32c0(undefined4 *param_1)

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
  thunk_FUN_102d4700(0x10,param_1[1]);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102d3c00; body size 86 bytes.
#line 1 "ENTRY_102d3c00"

void __fastcall FUN_102d3c00(int param_1)

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
  thunk_FUN_102d3d50();
  return;
}


// Reference entry 102d3c70; body size 77 bytes.
#line 1 "ENTRY_102d3c70"

void __fastcall FUN_102d3c70(int *param_1)

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


// Reference entry 102d3d50; body size 65 bytes.
#line 1 "ENTRY_102d3d50"

void __fastcall FUN_102d3d50(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4 *)puVar1[1] = (undefined4)(0);
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    thunk_FUN_102d3db0();
    thunk_FUN_1148a50e(puVar1,0x14);
    puVar1 = (undefined4 *)(puVar2);
  }
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 102d4700; body size 228 bytes.
#line 1 "ENTRY_102d4700"

void __thiscall Recovered_Bulk::FUN_102d4700(uint param_2,undefined4 param_3)
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
    thunk_FUN_102d29a0(*param_1,param_1[1],&param_3);
    return;
  }
  if (0x3fffffff < param_2) {
LAB_102d47df:
                    
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
    if (uVar7 + 0x23 <= uVar7) goto LAB_102d47df;
    pvVar3 = (void *)(operator_new(uVar7 + 0x23));
    if (pvVar3 == (void *)0x0) goto LAB_102d47c4;
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
LAB_102d47c4:
                    
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


// Reference entry 102d48e0; body size 136 bytes.
#line 1 "ENTRY_102d48e0"

float __thiscall Recovered_Bulk::FUN_102d48e0(int param_2)
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


// Reference entry 102d4e30; body size 87 bytes.
#line 1 "ENTRY_102d4e30"

void __thiscall Recovered_Bulk::FUN_102d4e30(int param_2)
{
  float *param_1 = (float *)this;
  double dVar1;
  
  dVar1 = (double)(ceil((double)((float)((double)param_2 + (double)(&DAT_11880fb0)[-(param_2 >> 0x1f)]) /
                       *param_1)));
  thunk_FUN_1148ac80(dVar1);
  return;
}


// Reference entry 102d4ed0; body size 133 bytes.
#line 1 "ENTRY_102d4ed0"

void __fastcall FUN_102d4ed0(float *param_1)

{
  ceil((double)((float)((double)((int)param_1[2] + 1) +
                       (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) / *param_1));
  thunk_FUN_1148ac80();
  thunk_FUN_102d4a40();
  return;
}


// Reference entry 102d5010; body size 77 bytes.
#line 1 "ENTRY_102d5010"

void __fastcall FUN_102d5010(int *param_1)

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


// Reference entry 102d5080; body size 65 bytes.
#line 1 "ENTRY_102d5080"

void __fastcall FUN_102d5080(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4 *)puVar1[1] = (undefined4)(0);
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    thunk_FUN_102d3db0();
    thunk_FUN_1148a50e(puVar1,0x14);
    puVar1 = (undefined4 *)(puVar2);
  }
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 102d5420; body size 108 bytes.
#line 1 "ENTRY_102d5420"

void __fastcall FUN_102d5420(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int local_4;
  
  if (*(int *)(param_1 + 8) != 0) {
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
    *(undefined4 *)puVar1[1] = (undefined4)(0);
    puVar1 = (undefined4 *)((undefined4 *)*puVar1);
    local_4 = (int)(param_1);
    while (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)((undefined4 *)*puVar1);
      thunk_FUN_102d3db0();
      thunk_FUN_1148a50e(puVar1,0x14);
      puVar1 = (undefined4 *)(puVar2);
    }
    *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
    *(undefined4 *)(param_1 + 8) = 0;
    local_4 = (int)(*(int *)(param_1 + 4));
    thunk_FUN_102d29a0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&local_4);
  }
  return;
}


// Reference entry 102d54b0; body size 69 bytes.
#line 1 "ENTRY_102d54b0"

void __fastcall FUN_102d54b0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4 *)puVar1[1] = (undefined4)(0);
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    thunk_FUN_102d3db0();
    thunk_FUN_1148a50e(puVar1,0x14);
    puVar1 = (undefined4 *)(puVar2);
  }
  *(int *)*param_1 = (int)(*param_1);
  *(int *)(*param_1 + 4) = *param_1;
  param_1[1] = (int)(0);
  return;
}


// Reference entry 102d5690; body size 107 bytes.
#line 1 "ENTRY_102d5690"

undefined4 *
FUN_102d5690(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           thunk_FUN_102d5720(&local_14,param_2,param_3,param_4,
                              DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102d85d0; body size 320 bytes.
#line 1 "ENTRY_102d85d0"

undefined4 * __thiscall Recovered_Bulk::FUN_102d85d0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  void *pvVar1;
  int *piVar2;
  int *piVar3;
  int *in_stack_0000002c;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined4 local_3c;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;


  pvVar1 = (void *)(operator_new(0x40));
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {


    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (in_stack_0000002c != (int *)0x0) {
      local_64 = (undefined4)((**(code **)*in_stack_0000002c)(auStack_88));
    }
    if (*(int *)(param_1 + 0x50) != 0) {
      LOCK();
      piVar2 = (int *)((int *)(*(int *)(param_1 + 0x50) + 4));
      *piVar2 = (int)(*piVar2 + 1);
      UNLOCK();
    }
    local_8 = (uint)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    piVar2 = (int *)((int *)thunk_FUN_102d2c80(*(undefined4 *)(param_1 + 0x4c),
                                       *(undefined4 *)(param_1 + 0x50)));
  }
  piVar3 = (int *)((int *)0x0);
  local_8 = (uint)(local_8 & 0xffffff00);
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
    (**(code **)(*piVar3 + 4))();
  }
  local_8 = (uint)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  if (*(int **)(param_1 + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x34) + 0x30))();
  }
  *param_2 = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  local_8 = (uint)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  if (in_stack_0000002c != (int *)0x0) {

    (**(code **)(*in_stack_0000002c + 0x10))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 102d8b30; body size 267 bytes.
#line 1 "ENTRY_102d8b30"

undefined4 * __thiscall Recovered_Bulk::FUN_102d8b30(void *param_2,undefined4 *param_3)
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
                    
    thunk_FUN_102daa60();
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
  _Dst = (void *)((void *)thunk_FUN_102daa80(uVar5));
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


// Reference entry 102d9690; body size 81 bytes.
#line 1 "ENTRY_102d9690"

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

void __fastcall FID_conflict__Tidy_102d9690(int *param_1)

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


// Reference entry 102d9d60; body size 250 bytes.
#line 1 "ENTRY_102d9d60"

int __thiscall Recovered_Bulk::FUN_102d9d60(int param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  void *_Src;
  void *_Dst;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  size_t _Size;
  uint uVar6;
  
  piVar1 = (int *)((int *)(param_1 + 8));
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  if (piVar1 != (int *)(param_2 + 8)) {
    _Src = (void *)(*(void **)(param_2 + 8));
    _Size = (size_t)(*(int *)(param_2 + 0xc) - (int)_Src);
    iVar3 = (int)(*piVar1);
    uVar6 = (uint)((int)_Size >> 2);
    uVar4 = (uint)(*(int *)(param_1 + 0x10) - iVar3 >> 2);
    if (uVar4 < uVar6) {
      if (0x3fffffff < uVar6) {
                    
        thunk_FUN_102daa60();
      }
      if (0x3fffffff - (uVar4 >> 1) < uVar4) {
        uVar2 = (uint)(0x3fffffff);
      }
      else {
        uVar2 = (uint)((uVar4 >> 1) + uVar4);
        if (uVar2 < uVar6) {
          uVar2 = (uint)(uVar6);
        }
      }
      if (iVar3 != 0) {
        uVar4 = (uint)(uVar4 * 4);
        iVar5 = (int)(iVar3);
        if (0xfff < uVar4) {
          iVar5 = (int)(*(int *)(iVar3 + -4));
          uVar4 = (uint)(uVar4 + 0x23);
          if (0x1f < (iVar3 - iVar5) - 4U) {
                    
            _invalid_parameter_noinfo_noreturn();
          }
        }
        thunk_FUN_1148a50e(iVar5,uVar4);
        *piVar1 = (int)(0);
        *(undefined4 *)(param_1 + 0xc) = 0;
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      iVar3 = (int)(thunk_FUN_102daa80(uVar2));
      *piVar1 = (int)(iVar3);
      *(int *)(param_1 + 0xc) = iVar3;
      *(uint *)(param_1 + 0x10) = iVar3 + uVar2 * 4;
    }
    _Dst = (void *)((void *)*piVar1);
    memmove(_Dst,_Src,_Size);
    *(size_t *)(param_1 + 0xc) = _Size + (int)_Dst;
  }
  return (int)(param_1);
}


// Reference entry 102da6b0; body size 89 bytes.
#line 1 "ENTRY_102da6b0"

void __thiscall Recovered_Bulk::FUN_102da6b0(int param_2,int param_3,int param_4)
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


// Reference entry 102da960; body size 81 bytes.
#line 1 "ENTRY_102da960"

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

void __fastcall FID_conflict__Tidy_102da960(int *param_1)

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


// Reference entry 102daa80; body size 87 bytes.
#line 1 "ENTRY_102daa80"

void * FUN_102daa80(uint param_1)

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


// Reference entry 102dcd40; body size 68 bytes.
#line 1 "ENTRY_102dcd40"

void __fastcall FUN_102dcd40(int *param_1)

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


// Reference entry 102dd810; body size 124 bytes.
#line 1 "ENTRY_102dd810"

void FUN_102dd810(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint local_d10;
  char local_d0c [36];
  undefined1 local_ce8 [3300];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_d10);
  pcVar1 = (char *)(local_d0c);
  local_d0c[0] = (char)('\0');
  uVar3 = (undefined4)(0x21);
  thunk_FUN_1109f7f0(pcVar1,0x21);
  thunk_FUN_1109f100(pcVar1,uVar3);
  puVar4 = (uint *)(&local_d10);
  if (local_d0c[0] != '\0') {
    puVar2 = (undefined1 *)(local_ce8);
    thunk_FUN_1109f7f0(puVar2,&local_d10);
    thunk_FUN_1109f140(puVar2,puVar4);
    if (1 < local_d10) {
      thunk_FUN_1148ac28();
      return;
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 102dd8c0; body size 183 bytes.
#line 1 "ENTRY_102dd8c0"

undefined4 * __stdcall FUN_102dd8c0(undefined4 *param_1)

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

  pvVar2 = (void *)(operator_new(0xd8));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_10bb5460(1));
  }
  piVar4 = (int *)((int *)0x0);

  if (piVar3 != (int *)0x0) {
    piVar4 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(uVar1));
    (**(code **)(*piVar4 + 4))();
  }

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


// Reference entry 102dd9b0; body size 115 bytes.
#line 1 "ENTRY_102dd9b0"

undefined4 * FUN_102dd9b0(undefined4 *param_1,undefined4 param_2)

{
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0x70));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_102dc8c0(param_2));
  }

  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar1);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102dddd0; body size 100 bytes.
#line 1 "ENTRY_102dddd0"

undefined4 * __thiscall Recovered_Bulk::FUN_102dddd0(undefined4 *param_2)
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
           (**(code **)(*param_1 + 0x84))(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_2 = (undefined4)(uVar1);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 102de330; body size 191 bytes.
#line 1 "ENTRY_102de330"

int * __thiscall Recovered_Bulk::FUN_102de330(int *param_2)
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

  if (*(int *)(param_1 + 0x4c) == 0) {
    pvVar3 = (void *)(operator_new(0x40));

    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar4 = (int *)((int *)thunk_FUN_10b97990());
    }

    if (piVar4 != *(int **)(param_1 + 0x4c)) {
      piVar1 = (int *)(*(int **)(param_1 + 0x50));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x4c) = 0;
        *(undefined4 *)(param_1 + 0x50) = 0;
        (**(code **)(*piVar1 + 8))();
      }
      *(int **)(param_1 + 0x4c) = piVar4;
      if (piVar4 == (int *)0x0) {
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
      else {
        piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
        *(int **)(param_1 + 0x50) = piVar4;
        (**(code **)(*piVar4 + 4))();
      }
    }
  }
  piVar4 = (int *)(*(int **)(param_1 + 0x4c));
  *param_2 = (int)((int)piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(uVar2);
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 102de6a0; body size 131 bytes.
#line 1 "ENTRY_102de6a0"

void __thiscall Recovered_Bulk::FUN_102de6a0(byte param_2,int param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  
  bVar2 = (bool)(false);
  uVar5 = (uint)(1 << (param_2 & 0x1f));
  cVar3 = (char)(thunk_FUN_112a7f50(param_1 + 0x4c));
  uVar1 = (uint)(*(uint *)(param_1 + 0x38));
  if (param_3 == 0) {
    uVar5 = (uint)(uVar1 & ~uVar5);
  }
  else {
    uVar5 = (uint)(uVar1 | uVar5);
  }
  *(uint *)(param_1 + 0x38) = uVar5;
  if (((uVar1 != 0) != (uVar5 != 0)) && (*(int *)(param_1 + 0x48) == 0)) {
    *(undefined4 *)(param_1 + 0x48) = 1;
    bVar2 = (bool)(true);
  }
  if (cVar3 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x4c);
  }
  if (bVar2) {
    iVar4 = (int)(param_1 + 0x24);
    if (param_1 == 0xc) {
      iVar4 = (int)(0);
    }
    thunk_FUN_1106b190(iVar4,0,0);
  }
  return;
}


// Reference entry 102dfb30; body size 185 bytes.
#line 1 "ENTRY_102dfb30"

int * __stdcall FUN_102dfb30(int *param_1,undefined4 param_2,int *param_3)

{
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar2 = (int *)((int *)thunk_FUN_102e2560(&param_3,param_2,param_3,DAT_12126b84 ));
  piVar1 = (int *)((int *)*piVar2);

  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_103be9e0(piVar1,0xffffffff);
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


// Reference entry 102dfc20; body size 185 bytes.
#line 1 "ENTRY_102dfc20"

int * __stdcall FUN_102dfc20(int *param_1,undefined4 param_2,int *param_3)

{
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar2 = (int *)((int *)thunk_FUN_102e23b0(&param_3,param_2,param_3,DAT_12126b84 ));
  piVar1 = (int *)((int *)*piVar2);

  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_103be9e0(piVar1,0xffffffff);
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


// Reference entry 102e0090; body size 125 bytes.
#line 1 "ENTRY_102e0090"

undefined4 * __stdcall FUN_102e0090(undefined4 *param_1,int *param_2,int *param_3)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_103be9e0(param_2,0xffffffff);
  *param_1 = (undefined4)(param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(uVar1);
  }

  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102e0270; body size 188 bytes.
#line 1 "ENTRY_102e0270"

int * __stdcall FUN_102e0270(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar2 = (int *)((int *)thunk_FUN_102e2f40(&param_3,param_2,param_4,param_3,
                                     DAT_12126b84 ));
  piVar1 = (int *)((int *)*piVar2);

  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_103be9e0(piVar1,0xffffffff);
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


// Reference entry 102e09c0; body size 241 bytes.
#line 1 "ENTRY_102e09c0"

int * __stdcall FUN_102e09c0(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
 try {
  int *piVar1;
  int *piVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 4))(param_3,param_4,DAT_12126b84 );
  }
  piVar2 = (int *)((int *)thunk_FUN_102e3440(&local_14,param_2));
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
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  thunk_FUN_103be9e0(piVar1,0xffffffff);
  *param_1 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 8))();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 102e1690; body size 182 bytes.
#line 1 "ENTRY_102e1690"

int * __stdcall FUN_102e1690(int *param_1,int *param_2)

{
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar2 = (int *)((int *)thunk_FUN_102e3ed0(&param_2,param_2,DAT_12126b84 ));
  piVar1 = (int *)((int *)*piVar2);

  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_103be9e0(piVar1,0xffffffff);
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


// Reference entry 102e2140; body size 185 bytes.
#line 1 "ENTRY_102e2140"

int * __stdcall FUN_102e2140(int *param_1,undefined4 param_2,int *param_3)

{
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar2 = (int *)((int *)thunk_FUN_102e49e0(&param_3,param_2,param_3,DAT_12126b84 ));
  piVar1 = (int *)((int *)*piVar2);

  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_103be9e0(piVar1,0xffffffff);
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


// Reference entry 102e3db0; body size 112 bytes.
#line 1 "ENTRY_102e3db0"

undefined4 * FUN_102e3db0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0x10));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_102df5d0(uVar1));
  }

  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 102e3e40; body size 112 bytes.
#line 1 "ENTRY_102e3e40"

undefined4 * FUN_102e3e40(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0x10));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_102df5d0(uVar1));
  }

  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


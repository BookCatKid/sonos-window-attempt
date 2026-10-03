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
extern int FUN_10065348(...);
extern int FUN_10070892(...);
extern int FUN_111adbe0(...);
extern int FUN_111af250(...);
extern int FUN_111af570(...);
extern int FUN_111d2f40(...);
extern int FUN_111d3040(...);
extern int FUN_11261ab0(...);
extern __declspec(dllimport) int _CxxThrowException(...);
extern __declspec(dllimport) int __std_exception_destroy(...);
extern __declspec(dllimport) int __stdio_common_vfprintf(...);
extern __declspec(dllimport) int __stdio_common_vsprintf(...);
extern __declspec(dllimport) int _close(...);
extern __declspec(dllimport) int _errno(...);
extern __declspec(dllimport) int _finite(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int _isnan(...);
extern __declspec(dllimport) int _open(...);
extern __declspec(dllimport) int _read(...);
extern __declspec(dllimport) int _strdup(...);
extern __declspec(dllimport) int _time64(...);
extern __declspec(dllimport) int atoi(...);
extern int find(...);
extern int func_0x10019baf(...);
extern int func_0x1001afaf(...);
extern int func_0x1001ba3b(...);
extern int func_0x100319ee(...);
extern int func_0x10041443(...);
extern int func_0x10045142(...);
extern int func_0x10047ea6(...);
extern int func_0x1004c857(...);
extern int func_0x100553bc(...);
extern int func_0x1005b4e7(...);
extern int func_0x1005edae(...);
extern int func_0x10060406(...);
extern int func_0x10061ec8(...);
extern int func_0x100630b6(...);
extern int func_0x1006774c(...);
extern int func_0x10070f4a(...);
extern int func_0x10087362(...);
extern int func_0x1008c65f(...);
extern int func_0x1008e90f(...);
extern int func_0x1009078c(...);
extern int func_0x100975aa(...);
extern int func_0x11199650(...);
extern __declspec(dllimport) int isdigit(...);
extern __declspec(dllimport) int isprint(...);
extern __declspec(dllimport) int isspace(...);
extern __declspec(dllimport) int memchr(...);
extern __declspec(dllimport) int memmove(...);
extern int operator_new(...);
extern int s(...);
extern __declspec(dllimport) int strchr(...);
extern __declspec(dllimport) int strncmp(...);
extern __declspec(dllimport) int strrchr(...);
extern __declspec(dllimport) int strtoul(...);
extern int thunk_FUN_10118c40(...);
extern int thunk_FUN_1011bdc0(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_1012d130(...);
extern int thunk_FUN_101a6c80(...);
extern int thunk_FUN_101b9160(...);
extern int thunk_FUN_101ba530(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_102a2fd0(...);
extern int thunk_FUN_102bce30(...);
extern int thunk_FUN_10405e20(...);
extern int thunk_FUN_104086f0(...);
extern int thunk_FUN_10c66110(...);
extern int thunk_FUN_11069bc0(...);
extern int thunk_FUN_1106a250(...);
extern int thunk_FUN_1106a270(...);
extern int thunk_FUN_1106a8d0(...);
extern int thunk_FUN_1109ac00(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_110a1280(...);
extern int thunk_FUN_110cb840(...);
extern int thunk_FUN_110e83d0(...);
extern int thunk_FUN_111401c0(...);
extern int thunk_FUN_11140420(...);
extern int thunk_FUN_1114a810(...);
extern int thunk_FUN_111780a0(...);
extern int thunk_FUN_11178a60(...);
extern int thunk_FUN_11178c10(...);
extern int thunk_FUN_11178dc0(...);
extern int thunk_FUN_1117c770(...);
extern int thunk_FUN_1117f820(...);
extern int thunk_FUN_11184c40(...);
extern int thunk_FUN_11184c70(...);
extern int thunk_FUN_111886c0(...);
extern int thunk_FUN_1119c480(...);
extern int thunk_FUN_1119d3b0(...);
extern int thunk_FUN_111a1220(...);
extern int thunk_FUN_111a2370(...);
extern int thunk_FUN_111a2df0(...);
extern int thunk_FUN_111a2ec0(...);
extern int thunk_FUN_111a32a0(...);
extern int thunk_FUN_111a3630(...);
extern int thunk_FUN_111a36f0(...);
extern int thunk_FUN_111a4bc0(...);
extern int thunk_FUN_111a4d30(...);
extern int thunk_FUN_111a4f00(...);
extern int thunk_FUN_111a5000(...);
extern int thunk_FUN_111a5a20(...);
extern int thunk_FUN_111a6f10(...);
extern int thunk_FUN_111a74d0(...);
extern int thunk_FUN_111a7d40(...);
extern int thunk_FUN_111a86c0(...);
extern int thunk_FUN_111a8920(...);
extern int thunk_FUN_111a8930(...);
extern int thunk_FUN_111a9a40(...);
extern int thunk_FUN_111aaf90(...);
extern int thunk_FUN_111ab150(...);
extern int thunk_FUN_111af650(...);
extern int thunk_FUN_111bd390(...);
extern int thunk_FUN_111bdc10(...);
extern int thunk_FUN_111bf100(...);
extern int thunk_FUN_111c0760(...);
extern int thunk_FUN_111c32e0(...);
extern int thunk_FUN_111c3d40(...);
extern int thunk_FUN_111c5fc0(...);
extern int thunk_FUN_111c6450(...);
extern int thunk_FUN_111c7b30(...);
extern int thunk_FUN_111c7e10(...);
extern int thunk_FUN_111c7eb0(...);
extern int thunk_FUN_111c7f50(...);
extern int thunk_FUN_111c9080(...);
extern int thunk_FUN_111c93e0(...);
extern int thunk_FUN_111c9460(...);
extern int thunk_FUN_111c94e0(...);
extern int thunk_FUN_111ca460(...);
extern int thunk_FUN_111d0010(...);
extern int thunk_FUN_111d2f40(...);
extern int thunk_FUN_111d3040(...);
extern int thunk_FUN_111d34c0(...);
extern int thunk_FUN_111d35e0(...);
extern int thunk_FUN_111d7620(...);
extern int thunk_FUN_111da060(...);
extern int thunk_FUN_111da770(...);
extern int thunk_FUN_111dc0c0(...);
extern int thunk_FUN_111e5150(...);
extern int thunk_FUN_111e7a30(...);
extern int thunk_FUN_111e7df0(...);
extern int thunk_FUN_111e86b0(...);
extern int thunk_FUN_111eb4e0(...);
extern int thunk_FUN_111f0050(...);
extern int thunk_FUN_111f6fe0(...);
extern int thunk_FUN_111f7a60(...);
extern int thunk_FUN_111fb430(...);
extern int thunk_FUN_111fb950(...);
extern int thunk_FUN_111fe400(...);
extern int thunk_FUN_111feb50(...);
extern int thunk_FUN_11202480(...);
extern int thunk_FUN_11202500(...);
extern int thunk_FUN_112029e0(...);
extern int thunk_FUN_11202ed0(...);
extern int thunk_FUN_11203e10(...);
extern int thunk_FUN_11207ab0(...);
extern int thunk_FUN_112084f0(...);
extern int thunk_FUN_1122af30(...);
extern int thunk_FUN_1122e2b0(...);
extern int thunk_FUN_11230ea0(...);
extern int thunk_FUN_11232e50(...);
extern int thunk_FUN_112332a0(...);
extern int thunk_FUN_11234290(...);
extern int thunk_FUN_112366e0(...);
extern int thunk_FUN_112372f0(...);
extern int thunk_FUN_112378c0(...);
extern int thunk_FUN_11237dd0(...);
extern int thunk_FUN_11238060(...);
extern int thunk_FUN_1123a890(...);
extern int thunk_FUN_1123bf80(...);
extern int thunk_FUN_1123ec00(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11240560(...);
extern int thunk_FUN_112407b0(...);
extern int thunk_FUN_112408cb(...);
extern int thunk_FUN_11240ae0(...);
extern int thunk_FUN_11240e60(...);
extern int thunk_FUN_11241fb0(...);
extern int thunk_FUN_112437d0(...);
extern int thunk_FUN_11243860(...);
extern int thunk_FUN_11244840(...);
extern int thunk_FUN_11247c50(...);
extern int thunk_FUN_11247d40(...);
extern int thunk_FUN_11247e90(...);
extern int thunk_FUN_11248b40(...);
extern int thunk_FUN_11249110(...);
extern int thunk_FUN_1124a3f0(...);
extern int thunk_FUN_1124ab00(...);
extern int thunk_FUN_1124c380(...);
extern int thunk_FUN_1124d790(...);
extern int thunk_FUN_1124dd60(...);
extern int thunk_FUN_1124dee0(...);
extern int thunk_FUN_1124e200(...);
extern int thunk_FUN_1124e950(...);
extern int thunk_FUN_1124eaa0(...);
extern int thunk_FUN_1124eb30(...);
extern int thunk_FUN_1124ecb0(...);
extern int thunk_FUN_1124eda0(...);
extern int thunk_FUN_1124ef40(...);
extern int thunk_FUN_1124f060(...);
extern int thunk_FUN_1124f0e0(...);
extern int thunk_FUN_1124f190(...);
extern int thunk_FUN_1124f230(...);
extern int thunk_FUN_1124f2a0(...);
extern int thunk_FUN_1124f2e0(...);
extern int thunk_FUN_1124f320(...);
extern int thunk_FUN_1124f350(...);
extern int thunk_FUN_1124f3c0(...);
extern int thunk_FUN_1124f4c0(...);
extern int thunk_FUN_1124fe20(...);
extern int thunk_FUN_1124fe70(...);
extern int thunk_FUN_1124fec0(...);
extern int thunk_FUN_1124ff50(...);
extern int thunk_FUN_11250000(...);
extern int thunk_FUN_11250060(...);
extern int thunk_FUN_112500b0(...);
extern int thunk_FUN_112503c0(...);
extern int thunk_FUN_112504b0(...);
extern int thunk_FUN_112504f0(...);
extern int thunk_FUN_112517c0(...);
extern int thunk_FUN_11251ae0(...);
extern int thunk_FUN_11253130(...);
extern int thunk_FUN_11253f10(...);
extern int thunk_FUN_11254de0(...);
extern int thunk_FUN_11255740(...);
extern int thunk_FUN_11255ba0(...);
extern int thunk_FUN_112588d0(...);
extern int thunk_FUN_112599f0(...);
extern int thunk_FUN_1125acd0(...);
extern int thunk_FUN_1125b4a0(...);
extern int thunk_FUN_1125b7a0(...);
extern int thunk_FUN_1125b810(...);
extern int thunk_FUN_1125b880(...);
extern int thunk_FUN_1125bbd0(...);
extern int thunk_FUN_1125bca0(...);
extern int thunk_FUN_11260290(...);
extern int thunk_FUN_11261e50(...);
extern int thunk_FUN_11262460(...);
extern int thunk_FUN_11262fc0(...);
extern int thunk_FUN_11263620(...);
extern int thunk_FUN_11265090(...);
extern int thunk_FUN_11265130(...);
extern int thunk_FUN_11265ef0(...);
extern int thunk_FUN_11266030(...);
extern int thunk_FUN_11266650(...);
extern int thunk_FUN_11267380(...);
extern int thunk_FUN_11268590(...);
extern int thunk_FUN_11269bc0(...);
extern int thunk_FUN_1126a130(...);
extern int thunk_FUN_1126b550(...);
extern int thunk_FUN_11270300(...);
extern int thunk_FUN_11272ad0(...);
extern int thunk_FUN_11273f80(...);
extern int thunk_FUN_112743a0(...);
extern int thunk_FUN_112747a0(...);
extern int thunk_FUN_11274880(...);
extern int thunk_FUN_11274a70(...);
extern int thunk_FUN_11274ac0(...);
extern int thunk_FUN_11274b50(...);
extern int thunk_FUN_11274fe0(...);
extern int thunk_FUN_112755e0(...);
extern int thunk_FUN_11277620(...);
extern int thunk_FUN_112781b0(...);
extern int thunk_FUN_11278e90(...);
extern int thunk_FUN_1127a020(...);
extern int thunk_FUN_1127a090(...);
extern int thunk_FUN_1127a270(...);
extern int thunk_FUN_1127a280(...);
extern int thunk_FUN_1127a2b0(...);
extern int thunk_FUN_1127a400(...);
extern int thunk_FUN_1127a510(...);
extern int thunk_FUN_1127ac70(...);
extern int thunk_FUN_1127b390(...);
extern int thunk_FUN_1127bac0(...);
extern int thunk_FUN_11281ab0(...);
extern int thunk_FUN_11283280(...);
extern int thunk_FUN_11285a10(...);
extern int thunk_FUN_11285a90(...);
extern int thunk_FUN_11285ab0(...);
extern int thunk_FUN_11285d80(...);
extern int thunk_FUN_11286490(...);
extern int thunk_FUN_11286980(...);
extern int thunk_FUN_11286990(...);
extern int thunk_FUN_112869a0(...);
extern int thunk_FUN_112869b0(...);
extern int thunk_FUN_11286a60(...);
extern int thunk_FUN_11287890(...);
extern int thunk_FUN_1128f080(...);
extern int thunk_FUN_1128f0f0(...);
extern int thunk_FUN_11292b90(...);
extern int thunk_FUN_11292d70(...);
extern int thunk_FUN_11294d60(...);
extern int thunk_FUN_112967e0(...);
extern int thunk_FUN_11298190(...);
extern int thunk_FUN_11298430(...);
extern int thunk_FUN_11299700(...);
extern int thunk_FUN_11299c80(...);
extern int thunk_FUN_112a0b40(...);
extern int thunk_FUN_112a1350(...);
extern int thunk_FUN_112a7b20(...);
extern int thunk_FUN_112a7b70(...);
extern int thunk_FUN_112a7d20(...);
extern int thunk_FUN_112a7da0(...);
extern int thunk_FUN_112a7ea0(...);
extern int thunk_FUN_112a7f20(...);
extern int thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_112a9cf0(...);
extern int thunk_FUN_112a9da0(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_112b0270(...);
extern int thunk_FUN_112b0310(...);
extern int thunk_FUN_112b07a0(...);
extern int thunk_FUN_112b5970(...);
extern int thunk_FUN_112c4a90(...);
extern int thunk_FUN_112c7f50(...);
extern int thunk_FUN_112c7fc0(...);
extern int thunk_FUN_112c8b80(...);
extern int thunk_FUN_112ea860(...);
extern int thunk_FUN_113b9ec0(...);
extern int thunk_FUN_113b9f60(...);
extern int thunk_FUN_113bf660(...);
extern int thunk_FUN_113c7f60(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_113d15c0(...);
extern int thunk_FUN_113d1a60(...);
extern int thunk_FUN_113d1ae0(...);
extern int thunk_FUN_113d1d90(...);
extern int thunk_FUN_113d43f0(...);
extern int thunk_FUN_113d47d0(...);
extern int thunk_FUN_113d49e0(...);
extern int thunk_FUN_113d5510(...);
extern int thunk_FUN_113d6b60(...);
extern int thunk_FUN_113d6f50(...);
extern int thunk_FUN_113daf30(...);
extern int thunk_FUN_113e30a0(...);
extern int thunk_FUN_113e6260(...);
extern int thunk_FUN_11455770(...);
extern int thunk_FUN_114561d0(...);
extern int thunk_FUN_1145a960(...);
extern int thunk_FUN_1145abd0(...);
extern int thunk_FUN_1145ad70(...);
extern int thunk_FUN_1145af90(...);
extern int thunk_FUN_1145c250(...);
extern int thunk_FUN_1145c720(...);
extern int thunk_FUN_1145c930(...);
extern int thunk_FUN_1145d640(...);
extern int thunk_FUN_1145f8f0(...);
extern int thunk_FUN_1145f900(...);
extern int thunk_FUN_1145f920(...);
extern int thunk_FUN_1145f930(...);
extern int thunk_FUN_1145fa40(...);
extern int thunk_FUN_114601a0(...);
extern int thunk_FUN_11460230(...);
extern int thunk_FUN_11460290(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148b586(...);
extern int timeout(...);
extern __declspec(dllimport) int tolower(...);
extern int DAT_1186d2ee;
extern int DAT_1187b440;
extern int DAT_1187b694;
extern int DAT_1187d7f4;
extern int DAT_1187d828;
extern int DAT_11880fb0;
extern int DAT_11881128;
extern int DAT_11881ac8;
extern int DAT_11882ff0;
extern int DAT_11884554;
extern int DAT_11884800;
extern int DAT_118850bc;
extern int DAT_118872c0;
extern int DAT_11889d24;
extern int DAT_1188a1d4;
extern int DAT_1188db18;
extern int DAT_1188e99c;
extern int DAT_1188f3d4;
extern int DAT_11895278;
extern int DAT_1189dabc;
extern int DAT_1189ea64;
extern int DAT_118bb268;
extern int DAT_118c9974;
extern int DAT_11921cf0;
extern int DAT_11993584;
extern int DAT_119bf4bc;
extern int DAT_119c36c8;
extern int DAT_119d25d0;
extern int DAT_119d5cb0;
extern int DAT_119dc7ec;
extern int DAT_119dc90c;
extern int DAT_119dced8;
extern int DAT_119df290;
extern int DAT_119df9ec;
extern int DAT_119e05c4;
extern int DAT_119e0b2c;
extern int DAT_119e3b30;
extern int DAT_119e4740;
extern int DAT_119e4814;
extern int DAT_119e4828;
extern int DAT_119e482c;
extern int DAT_119e4838;
extern int DAT_11d330dc;
extern int DAT_121205b0;
extern int DAT_12126b84;
extern int DAT_122e8b78;
extern int DAT_122e8cf8;
extern int DAT_122e8d34;
extern int DAT_122e8d38;
extern int DAT_122f5600;
extern int DAT_122f563c;
extern int DAT_122f563d;
extern int DAT_122f564c;
extern int DAT_122f5698;
extern int DAT_122f5840;
extern int DAT_122f5844;
extern int DAT_122f5c4c;
extern int DAT_122f5d24;
extern int DAT_122f5d98;
extern int DAT_122f5da0;
extern int DAT_122f5da8;
extern int DAT_122f5dcc;
extern int _DAT_119caf48;
extern int ghidra_vftable_KeyValueCB;
extern int ghidra_vftable_KeyValueTagBodyCB;
extern int ghidra_vftable_RAccountsVectorClock;
extern int ghidra_vftable_RAlarmClockListAlarms;
extern int ghidra_vftable_RAsyncGETIOOperation;
extern int ghidra_vftable_RAsyncSocketIOSessionCB;
extern int ghidra_vftable_RBrowseContentProviderWithCD;
extern int ghidra_vftable_RCDAlbumArtCallback;
extern int ghidra_vftable_RCDAlbumIdCallback;
extern int ghidra_vftable_RCDMimeTypeCallback;
extern int ghidra_vftable_RCDTitleCallback;
extern int ghidra_vftable_RCDUpdateProcessor;
extern int ghidra_vftable_RCPValidateOperation;
extern int ghidra_vftable_RCRInParam;
extern int ghidra_vftable_RCRInParamDeepCopy;
extern int ghidra_vftable_RCRInParamShallowCopy;
extern int ghidra_vftable_RCROutParam;
extern int ghidra_vftable_RCROutParamDeepCopy;
extern int ghidra_vftable_RCRStringEmitter;
extern int ghidra_vftable_RChunkedSocketWriter;
extern int ghidra_vftable_RClient;
extern int ghidra_vftable_RContentDirectory;
extern int ghidra_vftable_RContentKeyParam;
extern int ghidra_vftable_RContentKeysParam;
extern int ghidra_vftable_RContentProvider;
extern int ghidra_vftable_RControlAIOOp;
extern int ghidra_vftable_RControlAIOOpImpl;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RCountWritableStream;
extern int ghidra_vftable_RDateTime;
extern int ghidra_vftable_RDeviceProperties;
extern int ghidra_vftable_RHTTPChunkedClient;
extern int ghidra_vftable_RHTTPDataIO;
extern int ghidra_vftable_RHTTPHeadRequest;
extern int ghidra_vftable_RHTTPRequestHeadersBuilder;
extern int ghidra_vftable_RHouseholdListenerBase;
extern int ghidra_vftable_RHttpHeadersParam;
extern int ghidra_vftable_RIPNetStartListenerBase;
extern int ghidra_vftable_RIPNetStartListenerResponse;
extern int ghidra_vftable_RKVReport;
extern int ghidra_vftable_RKVReportDataAppenderCB;
extern int ghidra_vftable_RKeyValueEnumCB;
extern int ghidra_vftable_RKeyValuePairsQueryParams;
extern int ghidra_vftable_RKeyValueUrlPairs;
extern int ghidra_vftable_RLFMGetSessionCB;
extern int ghidra_vftable_RLastFMClient;
extern int ghidra_vftable_RLastFMContentProvider;
extern int ghidra_vftable_RLastFMResultCB;
extern int ghidra_vftable_RMSearchNotifyHandler;
extern int ghidra_vftable_RMediaReceiverRegistrar;
extern int ghidra_vftable_RPresentationMapLoader;
extern int ghidra_vftable_RPresentationMapParser;
extern int ghidra_vftable_RReportCategoryInfo;
extern int ghidra_vftable_RReportCategoryStore;
extern int ghidra_vftable_RReportEventInterface;
extern int ghidra_vftable_RReportFileLoaderCB;
extern int ghidra_vftable_RReportFileParser;
extern int ghidra_vftable_RReportFileParserCB;
extern int ghidra_vftable_RReportManager;
extern int ghidra_vftable_RReportUploaderInfo;
extern int ghidra_vftable_RRestoreOneAVTStateAIOOp;
extern int ghidra_vftable_RSCPBrowseContainerCallback;
extern int ghidra_vftable_RSCPPropNameTranslator;
extern int ghidra_vftable_RSCPSearchContainerCallback;
extern int ghidra_vftable_RSOAPFaultHandler;
extern int ghidra_vftable_RSOAPHeaderWriter;
extern int ghidra_vftable_RSOAPParametersWriter;
extern int ghidra_vftable_RSOAPWriter;
extern int ghidra_vftable_RSelectThreadUser;
extern int ghidra_vftable_RSocketTxn;
extern int ghidra_vftable_RSocketWriter;
extern int ghidra_vftable_RSonosCPFaultHandler;
extern int ghidra_vftable_RSonosContentProviderImpl;
extern int ghidra_vftable_RSonosContentProviderMediaSessions;
extern int ghidra_vftable_RSonosGetUserIdOp;
extern int ghidra_vftable_RSonosParamRX;
extern int ghidra_vftable_RSonosRelatedInfoParam;
extern int ghidra_vftable_RSonosRelatedPlayParam;
extern int ghidra_vftable_RSonosSegmentMetadataParam;
extern int ghidra_vftable_RSonosUserInfoParam;
extern int ghidra_vftable_RSubmitUsageMetrics;
extern int ghidra_vftable_RSubscriptionRenewal;
extern int ghidra_vftable_RSvcContentProvider;
extern int ghidra_vftable_RSystemProperties;
extern int ghidra_vftable_RSystemTime;
extern int ghidra_vftable_RTimedJobScheduler;
extern int ghidra_vftable_RTrackMetaDataObjCB;
extern int ghidra_vftable_RTrackPositionCallback;
extern int ghidra_vftable_RTrackRatingsModel;
extern int ghidra_vftable_RUpdateItemParser;
extern int ghidra_vftable_RUpdateItemParserCallback;
extern int ghidra_vftable_RUpdateItemXmlParserCB;
extern int ghidra_vftable_RUpdateItemsXmlParserCB;
extern int ghidra_vftable_RUpnpAVTGetCrossfadeModeAIOOp;
extern int ghidra_vftable_RUpnpAVTGetTransportInfoAIOOp;
extern int ghidra_vftable_RUpnpAVTGetTransportSettingsAIOOp;
extern int ghidra_vftable_RUpnpAsyncIOOperation;
extern int ghidra_vftable_RWritableStream;
extern int ghidra_vftable_RXMLParserBase;
extern int ghidra_vftable_RXMLRPCFaultResultCB;
extern int ghidra_vftable_RXMLRPCResultCB;
extern int ghidra_vftable_RXMLRPCResultParser;
extern int ghidra_vftable_RXmlChunkExtractor;
extern int ghidra_vftable_RXmlWriter;
extern int ghidra_vftable_SwfObjArrayIter;
extern int ghidra_vftable_SwfObjDP;
extern int ghidra_vftable_SwfObjHouseholdListenerProxy;
extern int ghidra_vftable_SwfObjIter;
extern int ghidra_vftable_SwfObjObjectIter;
extern int ghidra_vftable_SwfObjRC;
extern int ghidra_vftable_SwfObjString;
extern int ghidra_vftable_SwfObjSymbolTableIter;
extern int ghidra_vftable_SwfObjUpnpService;
extern int ghidra_vftable_SwfUpnpEventHandler;
extern int ghidra_vftable_nonstd_expected_lite_bad_expected_access;
extern int ghidra_vftable_nonstd_variants_bad_variant_access;
extern int ghidra_vftable_std_Ref_count_obj2;
extern int ghidra_vftable_std_exception;
extern int in_EAX;
extern undefined1 LAB_1000b0f5[];
extern undefined1 LAB_1001d089[];
extern undefined1 LAB_10032394[];
extern undefined1 LAB_10041673[];
extern undefined1 LAB_1005a3da[];
extern undefined1 LAB_1005a4d9[];
extern undefined1 LAB_100730c4[];
extern undefined1 LAB_10075388[];
extern undefined1 LAB_1007f71b[];
extern undefined1 LAB_10087e25[];
extern undefined1 LAB_1008bb79[];
extern undefined1 LAB_1009926a[];
extern undefined1 LAB_111ae8dc[];
extern undefined1 LAB_111ee419[];
extern undefined1 LAB_111ee4ba[];
extern undefined1 LAB_111eefbe[];
extern undefined1 LAB_111ef02f[];
extern undefined1 LAB_111ef50d[];
extern undefined1 LAB_111ef589[];
extern undefined1 LAB_111efa2f[];
extern undefined1 LAB_111efaa0[];
extern undefined1 LAB_111efebe[];
extern undefined1 LAB_111eff18[];
extern undefined1 LAB_111f0e07[];
extern undefined1 LAB_111f0e61[];
extern undefined1 LAB_1122e8ed[];
extern undefined1 LAB_1124887e[];
extern undefined1 LAB_1125bb6a[];
extern undefined1 LAB_1125bb78[];
extern undefined1 LAB_1126491f[];
extern undefined1 LAB_11264df1[];
extern undefined1 LAB_11279f9d[];
extern undefined1 LAB_117b7210[];
extern undefined1 LAB_117b7775[];
extern undefined1 LAB_117c10b0[];
extern undefined1 LAB_117c59e5[];
extern undefined1 LAB_117c5b34[];
extern undefined1 LAB_117c5bcf[];
extern undefined1 LAB_117c5c64[];
extern undefined1 LAB_117c5cf4[];
extern undefined1 LAB_117c5e54[];
extern undefined1 LAB_117c5efd[];
extern undefined1 LAB_117cc0cd[];
extern undefined1 LAB_117ccfe0[];
extern undefined1 LAB_117cdc8d[];
extern undefined1 LAB_117cdcdd[];
extern undefined1 LAB_117cf0cd[];
extern undefined1 LAB_117cf1dd[];
extern int *PTR_DAT_12120e30;
extern int *PTR_DAT_12126b6c;
extern int *stack0x00000000;
extern int *stack0xffffff78;
extern int *stack0xfffffffc;
extern int *stack0xffffffff;
extern void *ExceptionList;
struct s { char _pad; s(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int urn; };
typedef void *BLAHBLAHBLAH;
typedef void *DTLS;
typedef void *E9;
typedef void *ERROR;
typedef void *FACEDOWN;
typedef void *HORIZONTAL;
typedef void *HORIZONTAL_LEFT;
typedef void *HORIZONTAL_RIGHT;
typedef void *HORIZONTAL_WALL_MOUNTED;
typedef void *HTTP;
typedef void *HTTP_GONE;
typedef void *HWND;
typedef void *INVALID;
typedef void *INVERTED;
typedef void *LOCK;
typedef void *LPARAM;
typedef void *LPLONG;
typedef void *SONOSMULTIPARTBOUNDARY;
typedef void *SSL;
typedef void *SWF;
typedef void *UNDEFINED;
typedef void *UNLOCK;
typedef void *UNSUPPORTED;
typedef void *VERTICAL_ABOVE;
typedef void *VERTICAL_BELOW;
typedef void *VERTICAL_TAG_LEFT;
typedef void *VERTICAL_TAG_RIGHT;
typedef void *VERTICAL_WALL_LEFT;
typedef void *VERTICAL_WALL_MOUNTED;
typedef void *VERTICAL_WALL_RIGHT;
typedef void *WARNING;
typedef void *WD100;
typedef void *X;
typedef void *X_;
struct AVTransport { char _pad; AVTransport(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct After { char _pad; After(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Body { char _pad; Body(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct CachedState { char _pad; CachedState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Can { char _pad; Can(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct CloseHandle { char _pad; CloseHandle(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Content { char _pad; Content(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Corr { char _pad; Corr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DebugUndefinedVars { char _pad; DebugUndefinedVars(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Defaulting { char _pad; Defaulting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Do { char _pad; Do(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Envelope { char _pad; Envelope(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ErrorType { char _pad; ErrorType(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Function { char _pad; Function(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct GetCrossfadeMode { char _pad; GetCrossfadeMode(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct GetSessionId { char _pad; GetSessionId(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct GetTransportInfo { char _pad; GetTransportInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct GetTransportSettings { char _pad; GetTransportSettings(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Globals { char _pad; Globals(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Header { char _pad; Header(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Id { char _pad; Id(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Initializer { char _pad; Initializer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Length { char _pad; Length(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct List { char _pad; List(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Losing { char _pad; Losing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Master { char _pad; Master(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct MusicServices { char _pad; MusicServices(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Null { char _pad; Null(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Ordinal_111 { char _pad; Ordinal_111(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Ordinal_3 { char _pad; Ordinal_3(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Ordinal_7 { char _pad; Ordinal_7(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Ordinal_8 { char _pad; Ordinal_8(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct PostMessageA { char _pad; PostMessageA(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RadioList { char _pad; RadioList(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Received { char _pad; Received(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ReleaseSemaphore { char _pad; ReleaseSemaphore(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Retry { char _pad; Retry(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Scheduling { char _pad; Scheduling(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Services { char _pad; Services(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Sleep { char _pad; Sleep(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Software { char _pad; Software(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Sonos { char _pad; Sonos(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct String { char _pad; String(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Svc { char _pad; Svc(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SwfObjHouseholdListenerProxy { char _pad; SwfObjHouseholdListenerProxy(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Switch { char _pad; Switch(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ThrowInfo { char _pad; ThrowInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct UPnP { char _pad; UPnP(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Unexpected { char _pad; Unexpected(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WSAEventSelect { char _pad; WSAEventSelect(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ZonePlayer { char _pad; ZonePlayer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered_Bulk { char _pad; /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1117ec20(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1117ec90(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1117f970(undefined4 param_2,char *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11180d30(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11180d60(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11180d90(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11182580(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_111825b0(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_111825f0(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_11182630(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_11182680(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_111826c0(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11182a50(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111847f0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_11188820(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11189950(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1118b480(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_1118b4d0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1118c610(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1118c640(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1118c670(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1118c820(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1118cbb0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1118d1c0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1118d1d0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1118d2c0(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1118d430(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1118d550(int *param_2,uint *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1118d930(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1118d940(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1118d9d0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_1118fa90(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_1118fcb0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_1118fcf0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_1118fe20(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11190a20(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11190f90(undefined4 param_2,undefined4 param_3,undefined4 *param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11191050(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11192ed0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_11192f60(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11193af0(undefined4 param_2,undefined4 param_3,undefined4 *param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11194140(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11194f00(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111951f0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111952a0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11195360(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11197ca0(undefined4 param_2,char *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_111995e0(uint param_2,undefined1 *param_3,int param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1119be40(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1119be60(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1119ff50(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_111a1680(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_111a17f0(void *param_2,size_t param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111a1f90(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111a2000(char *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111a4320(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111a4dd0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111a65a0(undefined4 param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111a8190(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111a8300(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111a8310(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111a8320(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111a84f0(int *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111a8510(int *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_111a8680(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111a8750(int *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111a8e30(undefined4 *param_2,void *param_3,void *param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_111a9d50(undefined4 param_2,undefined4 param_3,undefined4 *param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_111a9dc0(undefined4 param_2,undefined4 param_3,undefined4 *param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111ab0a0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111ab0d0(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111ab1d0(int param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111bcf80(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111bcfa0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_111beaf0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111c0550(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall FUN_111c2130(char *param_2,undefined2 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111c3020(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111c30b0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_111c3110(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111c5670(char *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111c5ed0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_111c6d70(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111c6dd0(undefined4 *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_111c72b0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_111c72e0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_111c76a0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_111c76d0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111c7740(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_111c7d70(int *param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111c9560(int *param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111c9ed0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111c9ee0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111c9ef0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111c9f00(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111c9f10(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111c9f20(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111c9f30(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111c9f40(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111ca070(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111ca080(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_111ca2e0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111ca340(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111ca620(undefined1 *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111ca660(undefined1 *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111ca6a0(undefined1 *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111ca7d0(undefined1 *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111cacf0(undefined4 param_2,undefined4 *param_3,int param_4,
            undefined4 param_5); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111cad50(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111caeb0(undefined4 param_2,int param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __thiscall FUN_111caf50(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111cb750(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8,
            undefined4 param_9); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111cb7b0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6,undefined4 param_7); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111d10d0(undefined4 param_2,char *param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111d1120(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111d2320(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111d2a00(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111d2d30(undefined1 *param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111d50f0(char param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111d83e0(int *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_111da6e0(int param_2,int *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111dab00(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_111dab30(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_111dab40(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111dab50(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_111db270(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_111db2c0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_111db310(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_111dc3e0(char *param_2,int *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111edfc0(int *param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111eec40(char param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111eed20(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111ef160(undefined4 param_2,char *param_3,undefined4 *param_4,undefined4 *param_5); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111ef700(undefined4 param_2,char *param_3,undefined4 *param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111efc00(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111f0ab0(undefined4 param_2,char *param_3,undefined4 *param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111f3300(uint *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111f5100(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111f5120(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111f5320(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111f92c0(void *param_2,size_t param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111fbd30(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111fe3a0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111fe440(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111fe910(undefined4 param_2,undefined4 param_3,undefined1 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111fea90(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_11203ed0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11208e30(undefined2 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11208e40(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1121dcb0(short param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11227a50(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11227a70(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11227a80(undefined4 param_2,undefined4 param_3,undefined4 *param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11227a90(undefined4 param_2,undefined4 param_3,undefined4 *param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11227ab0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_1122a790(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_1122a7a0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall FUN_1122a900(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __thiscall FUN_1122a920(char *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1122a940(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_1122ae20(int param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1122af20(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1122b1f0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1122bd30(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1122bd40(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1122c2d0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1122df50(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1122e230(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1122e240(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1122eed0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1122f160(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1122f170(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1122f180(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1122fec0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11230b70(undefined1 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11230bc0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11230c30(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11230d20(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint * __thiscall FUN_112329b0(void *param_2,size_t param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_112333f0(undefined4 param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_11233860(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_11233870(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11235520(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11235be0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11236140(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11236170(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11236190(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112361b0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112361d0(char param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_11236550(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_11236720(int param_2,int param_3,int *param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_11236c80(int param_2,int param_3,int *param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11237fd0(char *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __thiscall FUN_112382a0(undefined4 param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_11239b70(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1123ad50(undefined4 *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1123b0c0(int *param_2,char param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_1123b200(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1123d4b0(undefined4 param_2,undefined2 param_3,undefined2 param_4,undefined4 param_5); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11240440(code *param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_112408d0(byte param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11240b70(undefined4 param_2,char param_3,char param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11241820(undefined4 *param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11241a90(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_11241c40(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11241e70(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11241ea0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11242d10(undefined4 param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11243c10(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11243eb0(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11244c00(char *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11244d40(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11244da0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112487f0(undefined1 *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11248fc0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11248fe0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_112490b0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1124a300(char *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1124b740(int param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_1124c530(char *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_1124c6b0(char *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1124cef0(undefined4 *param_2,undefined2 *param_3,undefined4 param_4,
            undefined4 param_5,undefined1 *param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1124d220(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_1124d650(int param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ size_t __thiscall FUN_1124d6c0(void *param_2,uint param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1124d8f0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1124e8d0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1124ea80(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1124f380(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1124f4a0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_1124ff00(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_11250100(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112502a0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112502c0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11250570(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11252890(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11252f30(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11253d90(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11253db0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11253dc0(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11253dd0(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11255a10(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11255ab0(uint *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11255cd0(uint *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11256980(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11256c00(uint *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint * __thiscall FUN_11257340(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_112575a0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11257940(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11257bd0(int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11257cb0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11257e40(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11257fd0(uint param_2,char *param_3,char *param_4,char *param_5); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11258240(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11258ac0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_11258f00(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11259370(undefined4 param_2,undefined4 param_3,int param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1125a240(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1125bef0(char *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1125c810(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1125cbe0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_1125cc00(uint *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_1125cc30(uint *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1125d830(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1125d8c0(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall FUN_11262350(ushort param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11262390(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11262900(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ ushort __thiscall FUN_112629e0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ short __thiscall FUN_11262b20(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ ushort __thiscall FUN_11264210(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11264640(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __thiscall FUN_11264860(char *param_2,char *param_3,uint param_4,undefined1 param_5); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11264c70(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11264cc0(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11264d70(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11264da0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11264e60(byte param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11265e80(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_112661b0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_112663b0(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined2 param_6,undefined2 param_7); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112673f0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_112674a0(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11267500(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11268070(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112691a0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112691c0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_11269420(ushort param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_112696e0(int param_2,int *param_3,int *param_4,int param_5,int param_6,char param_7); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1126b600(undefined *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1126b630(ushort param_2,char param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1126bad0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1126bae0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1126bb00(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1126bb20(char *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1126bbc0(undefined4 param_2,undefined1 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1126bbe0(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined2 param_6,undefined2 param_7); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1126bf00(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1126bf10(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1126ce20(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1126cf40(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1126cf60(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1126cfc0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1126cfd0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1126d0f0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1126d110(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1126d120(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1126dd70(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1126ddd0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1126dde0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1126de70(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1126de80(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1126df10(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_1126e420(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_1126e440(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1126f090(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1126f0a0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1126f5f0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1126f600(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1126f670(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1126f920(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1126f930(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_1126fb70(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11270280(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11270290(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11272170(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11272420(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11272500(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112726c0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_11272a70(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11272bd0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_11273d90(short *param_2,short param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11274090(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11274360(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112747c0(char param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112747f0(undefined8 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112752f0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11275860(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __thiscall FUN_11275870(char *param_2,undefined4 *param_3,uint param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112760c0(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11276130(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11276230(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11276240(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11276250(int param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11276510(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112767f0(int param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11276ea0(char *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112771b0(char *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __thiscall FUN_11278550(int param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11278610(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11278a60(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11278a70(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11278aa0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11278ad0(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11278ae0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11278af0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11278db0(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11278dc0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11278de0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11278df0(undefined4 param_2,undefined4 param_3,undefined4 *param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11278e50(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11278e70(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11279160(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11279240(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_11279680(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11279c10(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11279e40(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_11279f50(undefined4 *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_1127a350(undefined1 *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_1127a3e0(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_1127a420(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_1127a710(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_1127ae00(void *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_1127aff0(undefined4 *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1127b5f0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1127b750(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_1127b9b0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1127bba0(char *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __thiscall FUN_1127bf40(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_1127cc50(uint param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1127d010(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1127d090(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1127d0e0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1127d1f0(undefined4 *param_2); };
using namespace std;
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1117ea40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111823f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11182420(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11182450(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11182480(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111824b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11182b70(unsigned int recovered_unused_stack_0);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11182b80(unsigned int recovered_unused_stack_0);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11182b90(unsigned int recovered_unused_stack_0);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11182ba0(undefined4 *param_1, unsigned int recovered_unused_stack_0);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11182bc0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11182bd0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11183f50(unsigned int recovered_unused_stack_0);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11183f60(unsigned int recovered_unused_stack_0);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11183f70(unsigned int recovered_unused_stack_0);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11183f80(unsigned int recovered_unused_stack_0);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11183f90(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11183fa0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11183fb0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11183fc0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11183fd0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_11184470(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_111844a0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11184790(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111847c0(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111849d0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11184a00(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_11188360(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111883d0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_11188440(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111884c0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_11188540(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111885c0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_11188640(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_11188740(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111887b0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111894f0(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11189540(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11189590(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111895e0(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11189630(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11189680(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111896d0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11189720(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11189770(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111897c0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11189810(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11189860(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_1118c800(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1118d2a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1118d320(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1118d470(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_1118d600(int param_1,uint *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1118d820(undefined4 param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1118d8a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1118da10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1118da60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1118dd90(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1118e6f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1118eb10(unsigned int recovered_unused_stack_0);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1118eba0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1118ecf0(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1118ed40(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1118f260(int param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_1118f5c0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1118f5f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1118f690(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1118f7b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1118f870(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1118f8c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1118f8f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_11190180(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111903b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_111904a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11190570(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11190610(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11192e60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11192f30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11192fa0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_111937e0(undefined4 param_1, undefined4 *param_2, unsigned int recovered_unused_stack_0);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_11193be0(undefined4 param_1, undefined4 *param_2, unsigned int recovered_unused_stack_0);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11194120(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11194d10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11194d40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11194d70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11194da0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11194dd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11194e00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11194e30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11195680(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111956b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111956e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11197c60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_11198a20(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_11198a40(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_11198a60(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_11198a80(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_11198aa0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_11198ac0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_11198ae0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_11198b00(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_11198b20(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_11198b40(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4
FUN_11199390(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4
FUN_11199510(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_111995a0(int param_1,uint param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111996e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11199710(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11199900(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11199930(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1119ce40(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1119ff30(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111a0420(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111a0430(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111a0440(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111a05a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111a05b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111a1610(undefined4 *param_1,int *param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111a2820(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111a2850(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __fastcall FUN_111a3650(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111a4780(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111a47a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111a47c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111a4b70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111a56c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111a5720(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111a59b0(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111a5f00(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111a73b0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111a7ca0(void *param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_111a7cd0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111a7e80(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111a7ea0(void *param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_111a7ed0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_111a8050(int *param_1,int param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111a80c0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111a8490(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111a8770(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_111a8850(void *param_1, int param_2, unsigned int recovered_unused_stack_0);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_111a8880(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111a88b0(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111a88e0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111a8910(unsigned int recovered_unused_stack_0);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111a9320(int param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111a9a00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111a9c70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111a9cc0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_111a9d30(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_111a9d40(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_111a9e50(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_111a9e60(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_111a9e70(undefined4 *param_1, int param_2, unsigned int recovered_unused_stack_0);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_111aa2e0(undefined4 *param_1, undefined4 param_2, unsigned int recovered_unused_stack_0);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_111aa410(undefined4 param_1, undefined4 param_2, unsigned int recovered_unused_stack_0);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_111aa430(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_111aa440(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_111aa450(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_111aa460(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_111aa520(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_111aaeb0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_111aaec0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_111aaed0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_111aaee0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_111ab300(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111ab3c0(undefined4 *param_1,ushort *param_2,uint *param_3,uint *param_4,int param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111ab6d0(uint *param_1,uint *param_2,undefined4 *param_3,short *param_4,int param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111abeb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_111abee0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111ac5a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111ac7b0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111ac800(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111ae830(int *param_1,int param_2,uint param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111ae940(int *param_1,int param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111bb3f0(int param_1,int param_2,short *param_3,int param_4,int param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111bba30(int param_1,int param_2,short *param_3,int param_4,int param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111bd2f0(int param_1,undefined4 param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_111bd5c0(int param_1,void *param_2,uint param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111be890(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111bea80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_111c04c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111c20f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111c2100(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111c2190(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111c22a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111c2380(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c2420(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c2ab0(undefined4 param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111c2b40(int param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c2bd0(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111c3930(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111c3aa0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111c3d10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111c4330(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_111c4750(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111c49c0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c4ae0(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111c4b30(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111c4cf0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111c4d20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_111c5100(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111c6d10(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111c6e20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111c7190(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111c71b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111c71d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111c71f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111c7210(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111c7230(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111c7250(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111c7270(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111c7290(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111c73a0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111c73b0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111c7480(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111c7490(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111c74a0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111c74b0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c77a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c7ff0(undefined4 param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c8150(undefined4 param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c8190(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_111c81b0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_111c81d0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_111c8200(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111c8290(int param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c8d50(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c8d80(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c8dc0(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c9860(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c9890(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c98c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111c98f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111c9b60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111c9b90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111ca290(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111cacc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111cc510(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111cf8e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111cf9c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111d36e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111d3700(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111d3e10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111d3e70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111d46c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111d4e20(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111d4ea0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111d4eb0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111d50d0(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111d5200(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111d7a70(char *param_1,char *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111d7ad0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111d7b40(uint *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_111d80b0(float *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_111d8110(float *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_111d8170(float *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111d9730(unsigned int recovered_unused_stack_0);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111d9740(unsigned int recovered_unused_stack_0);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111da570(int param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111da5b0(int param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111da5f0(int param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111dadb0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111dae30(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111daea0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111daf20(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111dafa0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111db010(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111db080(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111db100(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111db1b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111dbe40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111dbf40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111dc170(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111decb0(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111ded00(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111ded50(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111deda0(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111dedf0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111dee40(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111dee90(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111deee0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111def30(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111def80(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111defd0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_111e40c0(undefined2 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ short __stdcall FUN_111e40e0(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111e6f70(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_111e7810(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111e78b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_111e85c0(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111f1870(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_111f18c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_111f1960(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111f44a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ short __stdcall FUN_111f45a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_111f64c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_111f6760(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_111f6770(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_111f6780(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_111f6790(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111f67b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111f6e20(char *param_1,char *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_111f7190(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_111f71c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111f7200(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111f7230(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111f92a0(unsigned int recovered_unused_stack_0);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111f92d0(int param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111f9550(int param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111fb6f0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111fb710(int param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111fbcc0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111fc980(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111fe160(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111fe8f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111feb10(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111fed50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11202360(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112023f0(char *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_112025a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11202d30(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11202d80(int param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11203650(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11203670(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112041c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112047a0(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11204a10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11205200(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11208210(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11208c70(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_112140a0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_112144d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_112144e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11214500(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11214530(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_112233b0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_112237f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11223800(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11223840(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_112278c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11227aa0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11227ad0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11227af0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11227b00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11227b10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11227b20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11227e80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11227ef0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11227f30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1122a780(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1122a8e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1122a8f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1122ae70(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1122ae80(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1122ae90(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1122aea0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1122aeb0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1122aec0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1122b190(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1122b1b0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1122b1d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1122b1e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_1122b210(undefined1 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1122b7e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1122b7f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1122b930(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1122b950(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1122bd00(unsigned int recovered_unused_stack_0);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1122c2e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1122c2f0(undefined1 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_1122c9c0(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1122cdc0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1122cdd0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1122ddd0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1122df00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1122df10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1122df20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1122df30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1122e0f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1122e130(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1122e2a0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1122e880(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ short * FUN_1122e890(short *param_1,int param_2,short param_3,int param_4,int param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1122e960(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __stdcall FUN_1122f190(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11230890(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112308a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11231020(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112313e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11231450(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11231540(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11231640(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112319d0(char *param_1,char *param_2,undefined4 *param_3,int param_4,int param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11231ab0(char *param_1,char *param_2,undefined4 *param_3,int param_4,int param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11231ad0(undefined4 param_1,undefined4 param_2,char *param_3,int param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112329c0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11233e90(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11234380(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11234500(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __cdecl strrchr(char *_Str,int _Ch);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11235940(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11235bd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11235da0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11236080(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11236090(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11236520(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11236580(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_112365f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11237820(int param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11237b80(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11237c30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_11237d30(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11237d40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11237ef0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11238050(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11238b10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11239550(undefined1 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112395a0(undefined1 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11239bd0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11239be0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1123a020(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1123a130(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1123a870(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1123a880(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_1123b220(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_1123b230(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1123b240(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __stdcall FUN_1123b250(int *param_1,undefined1 param_2,char param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1123b420(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1123b800(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1123d2a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1123d490(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1123d510(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1123f100(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1123fd00(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112403d0(byte param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112403f0(byte param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11240460(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11240630(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11240660(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_11240670(undefined1 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112406c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11240830(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11240860(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112411d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11241230(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11241240(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11241800(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112418e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_112418f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_11241c90(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11241cf0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11241d00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11241d20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11241ec0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11241fa0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11242930(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11242ce0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11242d00(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11242f60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11242f80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11242f90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_112430e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_11243100(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11243120(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11243130(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11243140(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11243150(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11243160(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11243170(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11243330(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_112433c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_112433e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11243500(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11243510(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11243530(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11243550(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_112437f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11243800(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11243810(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11243830(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11243840(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11243850(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11243bb0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11243bd0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_11243be0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11244aa0(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_11244c40(uint param_1,uint param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11244c60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11244dd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11244df0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11244ef0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ ulong FUN_112450f0(undefined4 param_1,undefined1 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8 FUN_11246500(uint param_1,uint param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112467b0(undefined4 param_1,undefined4 param_2,uint param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_112467f0(char param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4
FUN_11246ae0(char *param_1,undefined4 param_2,char *param_3,undefined1 *param_4,char *param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11247240(char *param_1,void *param_2,uint param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_112479d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_11247bf0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11247d20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_112488c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_11248b30(int param_1,int param_2,uint param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11249000(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11249020(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_112490e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11249130(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __stdcall FUN_11249140(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11249c40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11249c60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11249e50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11249fc0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1124a070(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1124a390(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1124a400(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1124c1f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1124d910(int param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1124d9d0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1124dd70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1124ddc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1124de30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1124de90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1124deb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1124ea30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1124eb40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1124eba0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1124ebc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_112505f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_112517a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_112517b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112519b0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11252240(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __fastcall FUN_112526d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char __fastcall FUN_112526f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __fastcall FUN_11252710(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char __fastcall FUN_11252730(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_11252750(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11252760(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_11252770(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11252780(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_11252790(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112527a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __fastcall FUN_112527b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_112527d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_112527f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11252800(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_11252810(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11252820(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11252880(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_112528e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11252920(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11252930(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11252940(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11252950(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11252960(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __fastcall FUN_11252dc0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __fastcall FUN_11252df0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11253120(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11253220(char *param_1,int param_2,char *param_3,char *param_4,char param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_112532d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11253bd0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_11253cb0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11253cc0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11253da0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11253de0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11253e20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11253e30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112544e0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_11254bc0(undefined1 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11254d30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 * __fastcall FUN_11254dd0(undefined2 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11255540(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ ulong FUN_11255e40(char *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11255fb0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11255fc0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11256250(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_112562f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11257130(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11257370(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11257540(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_112576d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11257710(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11257880(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_11257890(uint *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_112578d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_112578e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11257a40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11257a60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11257bc0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11258350(undefined4 param_1,char *param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11258a80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11258ef0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112599d0(int param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11259e10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11259e60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11259eb0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11259ec0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11259ed0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11259f30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11259f60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11259f90(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11259fa0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11259fb0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11259fc0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1125b270(char *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_1125b9d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1125bbc0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1125bf80(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1125d290(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1125d2e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1125d820(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1125d920(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1125d940(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1125d970(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1125d9e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1125e860(char *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1125fd20(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11260780(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_112607f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11260a70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11260a90(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11260f80(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11261190(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112612e0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11261320(undefined1 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_112613c0(int param_1,uint param_2,undefined1 *param_3,undefined4 param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_112614e0(int param_1,uint param_2,undefined1 *param_3,undefined4 param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_11261630(int param_1,uint param_2,undefined1 *param_3,undefined4 param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11262250(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_112624b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11262c20(undefined4 param_1,undefined4 param_2,uint param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte FUN_112632b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_112635c0(ushort param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_11263600(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11264760(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_11264790(int param_1,char *param_2,uint param_3,char param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11264a00(char *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_11264c80(char *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11264d60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11264e30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11264e50(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11265060(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11265070(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11265080(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11265120(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11265280(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11265290(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11265910(undefined4 param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11265e30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11265e50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11266430(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_112664f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_11267480(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_112674e0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11268ad0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11268b10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11268b50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11268ba0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11268bb0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11268f80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11269180(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11269190(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_112691e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_112691f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11269240(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_112694a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_112694b0(char *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_11269520(char *param_1,char *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * FUN_11269fa0(undefined1 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1126a000(char *param_1,ulong *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_1126a080(int param_1,undefined4 param_2,char *param_3,ulong *param_4,ulong param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1126b070(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1126b080(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1126b320(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1126bb40(char *param_1,char *param_2);
/* WARNING: Removing unreachable block (ram,0x112875b3) */ void __fastcall FUN_1126c470(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1126ce50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1126cfe0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1126d180(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1126d190(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1126d1b0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1126d1c0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1126d1d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1126d740(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1126d760(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1126d780(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1126d790(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1126d7a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1126d7b0(int param_1,uint *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1126d7f0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1126d960(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1126d970(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1126d980(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1126d990(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1126d9a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1126d9b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1126d9c0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1126d9f0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int *param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1126da50(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1126dab0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1126dad0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1126db70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1126db80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1126db90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1126dba0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1126dbb0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1126dbc0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1126dbd0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1126dbe0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1126dbf0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1126dd60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1126de90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1126deb0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1126dec0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1126e220(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1126e260(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1126e2e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1126e300(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1126e3d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1126e5a0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1126e5b0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1126e5c0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1126e5d0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1126e5e0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_1126e7a0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1126e810(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1126e8c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1126ec20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1126ec30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1126ec40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1126ec50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1126ec60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1126ec70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1126ec80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1126ec90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1126f000(unsigned int recovered_unused_stack_0);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1126f010(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1126f570(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1126f6a0(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1126f6f0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1126fd00(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1126fd10(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1126fd20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112702f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11270980(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11270a20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11270ac0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void Ordinal_111_11270c40(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11270cf0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11270d00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_112723f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11272460(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11272470(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11272480(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11272490(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112724a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112724b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 FUN_112724c0(undefined2 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8 FUN_112724d0(undefined8 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112724e0(undefined4 param_1,undefined4 *param_2,undefined1 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112726e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112726f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11272700(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11272710(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11272980(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11272a50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11272a60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11272a90(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11272ab0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11272c10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11272c40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11272d10(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11272d20(void *param_1,size_t param_2,char param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11272d80(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11272da0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11273150(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11273650(undefined1 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11273930(undefined1 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_11273a20(char param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11273a40(char *param_1,undefined2 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11273b10(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11273b20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11273be0(int param_1);
/* WARNING: Switch with 1 destination removed at 0x11273bf9 : 6 cases all go to same destination */ void FUN_11273bf0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11273e30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_11273ee0(undefined2 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_112741a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_112744c0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11274780(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_112752e0(unsigned int recovered_unused_stack_0);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11275330(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11275440(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11275450(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_112755b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_112755c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11275c10(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11275ea0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11275ec0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112762e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112762f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11276310(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11276400(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11276560(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11276570(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_112765a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_112765f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11276610(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11276920(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11276940(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11277d40(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11277e40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11277e50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11277e60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11277ee0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11277ef0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11277f00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11278280(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_112782a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11278320(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11278330(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11278340(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11278350(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11278360(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11278370(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11278380(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_112783a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_112783c0(int param_1,int param_2,int param_3,int param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_112785b0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_112789d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11278d90(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11278e10(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112790c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112790d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112790e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11279110(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112791a0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112791c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112791d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112791e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112791f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11279200(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11279230(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11279260(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11279280(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11279290(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_112793b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_112793c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11279550(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11279560(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11279760(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_112797a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_112797b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_112797c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_112797d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_112797e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_112797f0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11279800(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_112798b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_112798f0(undefined4 *param_1, undefined4 *param_2, int param_3, unsigned int recovered_unused_stack_0);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11279930(undefined4 *param_1,undefined4 *param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_11279ae0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11279b50(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11279b60(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11279bc0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11279c40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11279dc0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11279e20(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11279e30(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11279e80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11279f40(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1127a190(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1127a1a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_1127a6f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1127a7d0(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_1127a900(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1127adc0(char *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1127b8c0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1127bea0(undefined1 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_1127bf80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_1127c000(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1127c040(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_1127c060(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_1127c0b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1127c250(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1127c370(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_1127c550(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_1127c5a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1127c710(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_1127c820(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1127c8c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1127cb10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1127cd30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1127d0d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1127d230(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1127d760(unsigned int recovered_unused_stack_0);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1127d770(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __fastcall FUN_1127d980(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1127d9b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1127d9c0(int param_1);
// Reference entry 1117ea40; body size 133 bytes.
#line 1 "ENTRY_1117ea40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1117ea40(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0xb);
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
  param_1[5] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1117ec20; body size 86 bytes.
#line 1 "ENTRY_1117ec20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1117ec20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[9] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1117ec90; body size 55 bytes.
#line 1 "ENTRY_1117ec90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_1117ec90(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  *(char *)(param_1 + 1) = (char)param_2[1];
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 1117f970; body size 132 bytes.
#line 1 "ENTRY_1117f970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1117f970(undefined4 param_2,char *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  char cVar1;
  undefined4 *puVar2;
  undefined4 *_Dst;
  char *pcVar3;
  size_t _Size;
  
  *param_1 = (undefined4)(param_2);
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
    _Dst = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    pcVar3 = (char *)(param_3);
    do {
      cVar1 = (char)(*pcVar3);
      pcVar3 = (char *)(pcVar3 + 1);
    } while (cVar1 != '\0');
    _Size = (size_t)((int)pcVar3 - (int)(param_3 + 1));
    puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(_Size + 0x11));
    _Dst = (undefined4 *)(puVar2 + 4);
    *puVar2 = (undefined4)(1);
    puVar2[3] = (undefined4)(_Size);
    puVar2[2] = (undefined4)(0);
    puVar2[1] = (undefined4)(0);
    memcpy(_Dst,param_3,_Size);
    *(undefined1 *)(_Size + (int)_Dst) = 0;
  }
  param_1[1] = (undefined4)(_Dst);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11180d30; body size 31 bytes.
#line 1 "ENTRY_11180d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11180d30(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if (param_1 != (undefined4 *)(param_2)) {
    thunk_FUN_111780a0(*param_2,param_2[1],param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11180d60; body size 29 bytes.
#line 1 "ENTRY_11180d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11180d60(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  thunk_FUN_101ba530(param_2 + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11180d90; body size 55 bytes.
#line 1 "ENTRY_11180d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11180d90(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  thunk_FUN_101ba530(param_2 + 1);
  if (param_1 + 2 != param_2 + 2) {
    thunk_FUN_110e83d0(param_2[2],param_2[3],param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111823f0; body size 31 bytes.
#line 1 "ENTRY_111823f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111823f0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 11182420; body size 31 bytes.
#line 1 "ENTRY_11182420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11182420(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 11182450; body size 31 bytes.
#line 1 "ENTRY_11182450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11182450(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 11182480; body size 31 bytes.
#line 1 "ENTRY_11182480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11182480(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 111824b0; body size 31 bytes.
#line 1 "ENTRY_111824b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111824b0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x24));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 11182580; body size 33 bytes.
#line 1 "ENTRY_11182580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11182580(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_111886c0(param_2));
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + param_2 * 0x14);
  return;
}


// Reference entry 111825b0; body size 49 bytes.
#line 1 "ENTRY_111825b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_111825b0(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 2);
  if (0x3fffffff - (uVar1 >> 1) < uVar1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0x3fffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 111825f0; body size 49 bytes.
#line 1 "ENTRY_111825f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_111825f0(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 2);
  if (0x3fffffff - (uVar1 >> 1) < uVar1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0x3fffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 11182630; body size 63 bytes.
#line 1 "ENTRY_11182630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_11182630(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)((param_1[2] - *param_1) / 0x14);
  if (0xccccccc - (uVar1 >> 1) < uVar1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0xccccccc);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 11182680; body size 49 bytes.
#line 1 "ENTRY_11182680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_11182680(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 3);
  if (0x1fffffff - (uVar1 >> 1) < uVar1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0x1fffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 111826c0; body size 49 bytes.
#line 1 "ENTRY_111826c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_111826c0(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 3);
  if (0x1fffffff - (uVar1 >> 1) < uVar1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0x1fffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 11182a50; body size 219 bytes.
#line 1 "ENTRY_11182a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11182a50(uint param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (0xccccccc < param_2) {
                    
    thunk_FUN_11184c40();
  }
  iVar1 = (int)(*param_1);
  uVar4 = (uint)((param_1[2] - iVar1) / 0x14);
  if (0xccccccc - (uVar4 >> 1) < uVar4) {
    uVar4 = (uint)(0xccccccc);
  }
  else {
    uVar4 = (uint)((uVar4 >> 1) + uVar4);
    if (uVar4 < param_2) {
      uVar4 = (uint)(param_2);
    }
  }
  if (iVar1 != 0) {
    thunk_FUN_102a2fd0(iVar1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
    uVar2 = (uint)(((param_1[2] - iVar1) / 0x14) * 0x14);
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
  iVar1 = (int)(thunk_FUN_111886c0(uVar4));
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + uVar4 * 0x14);
  return;
}


// Reference entry 11182b70; body size 3 bytes.
#line 1 "ENTRY_11182b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11182b70(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 11182b80; body size 3 bytes.
#line 1 "ENTRY_11182b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11182b80(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 11182b90; body size 3 bytes.
#line 1 "ENTRY_11182b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11182b90(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 11182ba0; body size 21 bytes.
#line 1 "ENTRY_11182ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11182ba0(undefined4 *param_1, unsigned int recovered_unused_stack_0)

{
  thunk_FUN_111780a0(*param_1,param_1[1],param_1);
  return;
}


// Reference entry 11182bc0; body size 3 bytes.
#line 1 "ENTRY_11182bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11182bc0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 11182bd0; body size 3 bytes.
#line 1 "ENTRY_11182bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11182bd0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 11183f50; body size 3 bytes.
#line 1 "ENTRY_11183f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11183f50(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 11183f60; body size 3 bytes.
#line 1 "ENTRY_11183f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11183f60(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 11183f70; body size 3 bytes.
#line 1 "ENTRY_11183f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11183f70(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 11183f80; body size 3 bytes.
#line 1 "ENTRY_11183f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11183f80(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 11183f90; body size 3 bytes.
#line 1 "ENTRY_11183f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11183f90(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 11183fa0; body size 3 bytes.
#line 1 "ENTRY_11183fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11183fa0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 11183fb0; body size 3 bytes.
#line 1 "ENTRY_11183fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11183fb0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 11183fc0; body size 3 bytes.
#line 1 "ENTRY_11183fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11183fc0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 11183fd0; body size 3 bytes.
#line 1 "ENTRY_11183fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11183fd0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 11184470; body size 38 bytes.
#line 1 "ENTRY_11184470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_11184470(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 111844a0; body size 38 bytes.
#line 1 "ENTRY_111844a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_111844a0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 11184790; body size 27 bytes.
#line 1 "ENTRY_11184790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11184790(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 111847c0; body size 27 bytes.
#line 1 "ENTRY_111847c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_111847c0(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 111847f0; body size 24 bytes.
#line 1 "ENTRY_111847f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111847f0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1117c770(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 111849d0; body size 27 bytes.
#line 1 "ENTRY_111849d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_111849d0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 11184a00; body size 27 bytes.
#line 1 "ENTRY_11184a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11184a00(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 11188360; body size 87 bytes.
#line 1 "ENTRY_11188360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_11188360(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x40000000) {
    param_1 = (uint)(param_1 * 4);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 111883d0; body size 87 bytes.
#line 1 "ENTRY_111883d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_111883d0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x40000000) {
    param_1 = (uint)(param_1 * 4);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 11188440; body size 90 bytes.
#line 1 "ENTRY_11188440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_11188440(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0xaaaaaab) {
    param_1 = (uint)(param_1 * 0x18);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 111884c0; body size 90 bytes.
#line 1 "ENTRY_111884c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_111884c0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0xaaaaaab) {
    param_1 = (uint)(param_1 * 0x18);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 11188540; body size 90 bytes.
#line 1 "ENTRY_11188540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_11188540(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0xaaaaaab) {
    param_1 = (uint)(param_1 * 0x18);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 111885c0; body size 90 bytes.
#line 1 "ENTRY_111885c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_111885c0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0xaaaaaab) {
    param_1 = (uint)(param_1 * 0x18);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 11188640; body size 90 bytes.
#line 1 "ENTRY_11188640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_11188640(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x71c71c8) {
    param_1 = (uint)(param_1 * 0x24);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 11188740; body size 87 bytes.
#line 1 "ENTRY_11188740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_11188740(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x20000000) {
    param_1 = (uint)(param_1 * 8);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 111887b0; body size 87 bytes.
#line 1 "ENTRY_111887b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_111887b0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x20000000) {
    param_1 = (uint)(param_1 * 8);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 11188820; body size 48 bytes.
#line 1 "ENTRY_11188820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_11188820(uint param_2)
{
  int *param_1 = (int *)this;
  if (param_2 < (uint)((param_1[1] - *param_1) / 0x14)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + param_2 * 0x14);
  }
                    
  thunk_FUN_11184c70();
}


// Reference entry 111894f0; body size 57 bytes.
#line 1 "ENTRY_111894f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111894f0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 11189540; body size 57 bytes.
#line 1 "ENTRY_11189540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11189540(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 11189590; body size 57 bytes.
#line 1 "ENTRY_11189590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11189590(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 111895e0; body size 57 bytes.
#line 1 "ENTRY_111895e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111895e0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 11189630; body size 57 bytes.
#line 1 "ENTRY_11189630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11189630(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x24);
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


// Reference entry 11189680; body size 61 bytes.
#line 1 "ENTRY_11189680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11189680(int param_1,int param_2)

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


// Reference entry 111896d0; body size 61 bytes.
#line 1 "ENTRY_111896d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_111896d0(int param_1,int param_2)

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


// Reference entry 11189720; body size 60 bytes.
#line 1 "ENTRY_11189720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11189720(int param_1,int param_2)

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


// Reference entry 11189770; body size 60 bytes.
#line 1 "ENTRY_11189770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11189770(int param_1,int param_2)

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


// Reference entry 111897c0; body size 60 bytes.
#line 1 "ENTRY_111897c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_111897c0(int param_1,int param_2)

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


// Reference entry 11189810; body size 60 bytes.
#line 1 "ENTRY_11189810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11189810(int param_1,int param_2)

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


// Reference entry 11189860; body size 60 bytes.
#line 1 "ENTRY_11189860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11189860(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x24);
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


// Reference entry 11189950; body size 133 bytes.
#line 1 "ENTRY_11189950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11189950(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined1 auStack_104 [256];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)auStack_104);
  if (param_2 != 0) {
    for (uVar1 = (uint)(0); (param_2 = (int)(param_2 + -1, param_2 != 0 && (uVar1 < 5))); uVar1 = uVar1 + 1) {
      thunk_FUN_1145c720(auStack_104,0xff,"%s/%s/%d-map_%d.xml",PTR_DAT_12126b6c,"presentation",
                         *(undefined4 *)(param_1 + 0x40),param_2);
      thunk_FUN_1145d640(auStack_104);
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1118b480; body size 40 bytes.
#line 1 "ENTRY_1118b480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1118b480(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x40) = param_2;
  *(undefined4 *)(param_1 + 0x44) = param_4;
  thunk_FUN_101ba530(param_3);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return;
}


// Reference entry 1118b4d0; body size 47 bytes.
#line 1 "ENTRY_1118b4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_1118b4d0(int param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if (*(char *)(param_1 + 0x68) != '\0') {
    for (piVar1 = (int *)(*(int **)(param_1 + 4)); piVar1 != *(int **)(param_1 + 8); piVar1 = piVar1 + 1) {
      if (*(int *)(*piVar1 + 0x10) == param_2) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*piVar1);
      }
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
}


// Reference entry 1118c610; body size 36 bytes.
#line 1 "ENTRY_1118c610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1118c610(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_11178a60(puVar1,param_2);
  return;
}


// Reference entry 1118c640; body size 36 bytes.
#line 1 "ENTRY_1118c640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1118c640(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_11178c10(puVar1,param_2);
  return;
}


// Reference entry 1118c670; body size 40 bytes.
#line 1 "ENTRY_1118c670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1118c670(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    thunk_FUN_1117f820(param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x14;
    return;
  }
  thunk_FUN_11178dc0(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 1118c800; body size 24 bytes.
#line 1 "ENTRY_1118c800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_1118c800(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1118c820; body size 8 bytes.
#line 1 "ENTRY_1118c820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_1118c820(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)((int *)(param_1 + 0x24));
  if ((int *)(param_2) != piVar3) {
    iVar1 = (int)(*piVar3);
    if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
       (iVar2 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)), iVar2 == 0)) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
    iVar1 = (int)(*param_2);
    *piVar3 = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(piVar3);
}


// Reference entry 1118cbb0; body size 8 bytes.
#line 1 "ENTRY_1118cbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_1118cbb0(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)((int *)(param_1 + 0x10));
  if ((int *)(param_2) != piVar3) {
    iVar1 = (int)(*piVar3);
    if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
       (iVar2 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)), iVar2 == 0)) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
    iVar1 = (int)(*param_2);
    *piVar3 = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(piVar3);
}


// Reference entry 1118d1c0; body size 8 bytes.
#line 1 "ENTRY_1118d1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_1118d1c0(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)((int *)(param_1 + 0xc));
  if ((int *)(param_2) != piVar3) {
    iVar1 = (int)(*piVar3);
    if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
       (iVar2 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)), iVar2 == 0)) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
    iVar1 = (int)(*param_2);
    *piVar3 = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(piVar3);
}


// Reference entry 1118d1d0; body size 8 bytes.
#line 1 "ENTRY_1118d1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_1118d1d0(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)((int *)(param_1 + 8));
  if ((int *)(param_2) != piVar3) {
    iVar1 = (int)(*piVar3);
    if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
       (iVar2 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)), iVar2 == 0)) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
    iVar1 = (int)(*param_2);
    *piVar3 = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(piVar3);
}


// Reference entry 1118d2a0; body size 18 bytes.
#line 1 "ENTRY_1118d2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1118d2a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1118d2c0; body size 46 bytes.
#line 1 "ENTRY_1118d2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1118d2c0(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1118d320; body size 18 bytes.
#line 1 "ENTRY_1118d320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1118d320(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1118d430; body size 48 bytes.
#line 1 "ENTRY_1118d430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1118d430(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1118d470; body size 25 bytes.
#line 1 "ENTRY_1118d470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1118d470(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x24));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 1118d550; body size 73 bytes.
#line 1 "ENTRY_1118d550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_1118d550(int *param_2,uint *param_3)
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
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_2);
}


// Reference entry 1118d600; body size 31 bytes.
#line 1 "ENTRY_1118d600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_1118d600(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') && (in_EAX = *param_2, *(uint *)(param_1 + 0x10) <= in_EAX)
     ) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(in_EAX & 0xffffff00);
}


// Reference entry 1118d820; body size 12 bytes.
#line 1 "ENTRY_1118d820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1118d820(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (int)(*(int *)(param_2 + 8));
  if (iVar1 != 0) {
    uVar3 = (uint)(*(int *)(param_2 + 0x10) - iVar1 & 0xfffffffc);
    iVar2 = (int)(iVar1);
    if (0xfff < uVar3) {
      iVar2 = (int)(*(int *)(iVar1 + -4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (iVar1 - iVar2) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar2,uVar3);
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
  }
  return;
}


// Reference entry 1118d8a0; body size 28 bytes.
#line 1 "ENTRY_1118d8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1118d8a0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1118d930; body size 11 bytes.
#line 1 "ENTRY_1118d930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1118d930(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1118d940; body size 11 bytes.
#line 1 "ENTRY_1118d940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1118d940(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1118d9d0; body size 11 bytes.
#line 1 "ENTRY_1118d9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1118d9d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1118da10; body size 52 bytes.
#line 1 "ENTRY_1118da10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1118da10(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x24));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1118da60; body size 35 bytes.
#line 1 "ENTRY_1118da60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1118da60(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1118dd90; body size 8 bytes.
#line 1 "ENTRY_1118dd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1118dd90(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (int)(*(int *)(param_1 + 8));
  if (iVar1 != 0) {
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
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}


// Reference entry 1118e6f0; body size 31 bytes.
#line 1 "ENTRY_1118e6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1118e6f0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x24));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 1118eb10; body size 3 bytes.
#line 1 "ENTRY_1118eb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1118eb10(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 1118eba0; body size 90 bytes.
#line 1 "ENTRY_1118eba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1118eba0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x71c71c8) {
    param_1 = (uint)(param_1 * 0x24);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 1118ecf0; body size 57 bytes.
#line 1 "ENTRY_1118ecf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1118ecf0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x24);
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


// Reference entry 1118ed40; body size 60 bytes.
#line 1 "ENTRY_1118ed40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1118ed40(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x24);
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


// Reference entry 1118f260; body size 55 bytes.
#line 1 "ENTRY_1118f260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1118f260(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 8));
  for (puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 4)); (undefined4 *)(puVar2) != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(int *)*puVar2 + 4))(param_2,param_3);
  }
  return;
}


// Reference entry 1118f5c0; body size 27 bytes.
#line 1 "ENTRY_1118f5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_1118f5c0(int param_1,int param_2)

{
  short sVar1;
  
  sVar1 = (short)((**(code **)(**(int **)(param_1 + 0x2c) + 0xc))(*(undefined4 *)(param_2 + 4)));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(sVar1 == 0);
}


// Reference entry 1118f5f0; body size 32 bytes.
#line 1 "ENTRY_1118f5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1118f5f0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x28))(&param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 1118f690; body size 32 bytes.
#line 1 "ENTRY_1118f690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1118f690(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x40))(&param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 1118f7b0; body size 11 bytes.
#line 1 "ENTRY_1118f7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1118f7b0(undefined4 *param_1)

{
 try {
  int iVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjDP);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjUpnpService);
  thunk_FUN_111401c0(1);
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
  iVar1 = (int)(param_1[9]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[8]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  thunk_FUN_111a6f10();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfUpnpEventHandler);
  thunk_FUN_111a4f00();

  return;

 } catch (...) { }
}


// Reference entry 1118f870; body size 45 bytes.
#line 1 "ENTRY_1118f870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1118f870(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(0);
  do {
    if (param_1 == *(int *)(*(int *)(uVar1 + 0x1211f6c0) + 4)) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*(int *)(uVar1 + 0x1211f6c0));
    }
    uVar1 = (uint)(uVar1 + 4);
  } while (uVar1 < 0xc);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
}


// Reference entry 1118f8c0; body size 30 bytes.
#line 1 "ENTRY_1118f8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1118f8c0(int param_1)

{
 try {
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&stack0xffffffff);
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x28))(puVar1,&DAT_118bb268,param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)((char)((uint)puVar1 >> 0x18) == '\0');

 } catch (...) { }
}


// Reference entry 1118f8f0; body size 30 bytes.
#line 1 "ENTRY_1118f8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1118f8f0(int param_1)

{
 try {
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&stack0xffffffff);
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x40))(puVar1,&DAT_118bb268,param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)((char)((uint)puVar1 >> 0x18) == '\0');

 } catch (...) { }
}


// Reference entry 1118fa90; body size 24 bytes.
#line 1 "ENTRY_1118fa90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_1118fa90(int param_2)
{
  int param_1 = (int )this;
  short sVar1;
  
  sVar1 = (short)((**(code **)(**(int **)(param_1 + 0x2c) + 0xc))(*(undefined4 *)(param_2 + 4)));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(sVar1 == 0);
}


// Reference entry 1118fcb0; body size 45 bytes.
#line 1 "ENTRY_1118fcb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_1118fcb0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  }
  uVar1 = (undefined4)(func_0x1005edae(param_2,param_3,param_4,param_1,*(undefined4 *)(param_1 + 0xc),0x1211f6c0,
                          3));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 1118fcf0; body size 42 bytes.
#line 1 "ENTRY_1118fcf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_1118fcf0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  }
  uVar1 = (undefined4)(func_0x10045142(param_2,param_3,param_4,param_1,0x1211f6c0,3));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 1118fe20; body size 42 bytes.
#line 1 "ENTRY_1118fe20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_1118fe20(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  }
  uVar1 = (undefined4)(func_0x10019baf(param_2,param_3,param_4,param_1,0x1211f6c0,3));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 11190180; body size 34 bytes.
#line 1 "ENTRY_11190180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_11190180(int param_1)

{
  char cVar1;
  
  cVar1 = (char)('4');
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x44))(0,"Master",&param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(cVar1 == '\0');
}


// Reference entry 111903b0; body size 11 bytes.
#line 1 "ENTRY_111903b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111903b0(undefined4 *param_1)

{
 try {
  int iVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjRC);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjUpnpService);
  thunk_FUN_111401c0(1);
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
  iVar1 = (int)(param_1[9]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[8]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  thunk_FUN_111a6f10();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfUpnpEventHandler);
  thunk_FUN_111a4f00();

  return;

 } catch (...) { }
}


// Reference entry 111904a0; body size 45 bytes.
#line 1 "ENTRY_111904a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_111904a0(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(0);
  do {
    if (param_1 == *(int *)(*(int *)(uVar1 + 0x1211f908) + 4)) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*(int *)(uVar1 + 0x1211f908));
    }
    uVar1 = (uint)(uVar1 + 4);
  } while (uVar1 < 4);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
}


// Reference entry 11190570; body size 32 bytes.
#line 1 "ENTRY_11190570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11190570(int param_1)

{
 try {
  char cVar1;
  
  cVar1 = (char)('\0');
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x44))(0,"Master",&stack0xffffffff,param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(cVar1 == '\0');

 } catch (...) { }
}


// Reference entry 11190610; body size 27 bytes.
#line 1 "ENTRY_11190610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11190610(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    *(undefined4 *)(param_1 + 0x32) = 0xffffff;
    *(undefined2 *)(param_1 + 0x30) = 0xffff;
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11190a20; body size 45 bytes.
#line 1 "ENTRY_11190a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_11190a20(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  }
  uVar1 = (undefined4)(func_0x1005edae(param_2,param_3,param_4,param_1,*(undefined4 *)(param_1 + 0xc),0x1211f908,
                          1));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 11190f90; body size 43 bytes.
#line 1 "ENTRY_11190f90"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_11190f90(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
{
  int param_1 = (int )this;
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    thunk_FUN_111a36f0();
    uVar1 = (undefined8)(_DAT_119caf48);
    *param_4 = (undefined4)(4);
    *(undefined8 *)(param_4 + 2) = uVar1;
  }
  return (/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11191050; body size 42 bytes.
#line 1 "ENTRY_11191050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_11191050(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  }
  uVar1 = (undefined4)(func_0x10019baf(param_2,param_3,param_4,param_1,0x1211f908,1));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 11192e60; body size 15 bytes.
#line 1 "ENTRY_11192e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11192e60(int param_1)

{
  if (*(int *)(param_1 + 0x1c38) == 0) {
    return;
  }
  if (*(int *)(*(int *)(param_1 + 0x1c38) + 0x18) != 0) {
    thunk_FUN_11140420(0);
  }
  return;
}


// Reference entry 11192ed0; body size 17 bytes.
#line 1 "ENTRY_11192ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11192ed0(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = (int)(*(int *)(param_1 + 0x1c38));
  if (iVar1 == 0) {
    return;
  }


  if (*(int *)(iVar1 + 0x14) != 0) {
    uVar9 = (undefined4)(1);
    thunk_FUN_1109f7f0(1,DAT_12126b84 );
    cVar2 = (char)(thunk_FUN_110a1280(uVar9));
    if (cVar2 != '\0') {
      puVar3 = (undefined4 *)((undefined4 *)(**(code **)**(undefined4 **)(iVar1 + 0x14))(&iStack_18));

      puVar4 = (undefined4 *)((undefined4 *)(**(code **)(**(int **)(iVar1 + 0x14) + 4))(&iStack_14));
      puVar8 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)*puVar3 != (undefined1 *)0x0) {
        puVar8 = (undefined1 *)((undefined1 *)*puVar3);
      }
      puVar7 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
        puVar7 = (undefined1 *)((undefined1 *)*puVar4);
      }
      thunk_FUN_112af4e0(&DAT_118c9974,3,"SWF UPnP: unsubscribing from %s - sid=%s\n",puVar7,puVar8)
      ;
      uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(1)));
      if ((iStack_14 != 0) && (*(int *)(iStack_14 + -0x10) < 0xffff)) {
        iVar5 = (int)(thunk_FUN_1123fcd0((void *)(iStack_14 + -0x10)));
        if (iVar5 == 0) {
          *(undefined4 *)(iStack_14 + -8) = 0;
          *(undefined4 *)(iStack_14 + -0xc) = 0;
          thunk_FUN_113cfb70(iStack_14,*(undefined4 *)(iStack_14 + -4));
          free((void *)(iStack_14 + -0x10));
        }
      }

      if ((iStack_18 != 0) && (*(int *)(iStack_18 + -0x10) < 0xffff)) {
        iVar5 = (int)(thunk_FUN_1123fcd0((void *)(iStack_18 + -0x10)));
        if (iVar5 == 0) {
          *(undefined4 *)(iStack_18 + -8) = 0;
          *(undefined4 *)(iStack_18 + -0xc) = 0;
          thunk_FUN_113cfb70(iStack_18,*(undefined4 *)(iStack_18 + -4));
          free((void *)(iStack_18 + -0x10));
        }
      }

    }
    piVar6 = (int *)((int *)thunk_FUN_1114a810());
    puVar3 = (undefined4 *)((undefined4 *)(**(code **)**(undefined4 **)(iVar1 + 0x14))(&iStack_1c));

    puVar8 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*puVar3 != (undefined1 *)0x0) {
      puVar8 = (undefined1 *)((undefined1 *)*puVar3);
    }
    (**(code **)(*piVar6 + 0x18))(puVar8,param_2);

    if ((iStack_1c != 0) && (*(int *)(iStack_1c + -0x10) < 0xffff)) {
      iVar5 = (int)(thunk_FUN_1123fcd0((void *)(iStack_1c + -0x10)));
      if (iVar5 == 0) {
        *(undefined4 *)(iStack_1c + -8) = 0;
        *(undefined4 *)(iStack_1c + -0xc) = 0;
        thunk_FUN_113cfb70(iStack_1c,*(undefined4 *)(iStack_1c + -4));
        free((void *)(iStack_1c + -0x10));
      }
    }

    *(undefined4 *)(iVar1 + 0x14) = 0;
    thunk_FUN_111a5a20("CachedState");
  }

  return;

 } catch (...) { }
}


// Reference entry 11192f30; body size 28 bytes.
#line 1 "ENTRY_11192f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11192f30(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11192f60; body size 49 bytes.
#line 1 "ENTRY_11192f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_11192f60(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  *param_1 = (int)(0);
  if (param_1 != (int *)(param_2)) {
    iVar1 = (int)(*param_2);
    *param_1 = (int)(iVar1);
    if (iVar1 != 0) {
      thunk_FUN_1123fce0(iVar1 + 4);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 11192fa0; body size 14 bytes.
#line 1 "ENTRY_11192fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11192fa0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111937e0; body size 68 bytes.
#line 1 "ENTRY_111937e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_111937e0(undefined4 param_1, undefined4 *param_2, unsigned int recovered_unused_stack_0)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)(thunk_FUN_111a2ec0());
  if (iVar1 != 0) {
    uVar2 = (uint)(FUN_10070892(iVar1));
    thunk_FUN_111a36f0();
    param_2[2] = (undefined4)(uVar2 & 0xff);
    *param_2 = (undefined4)(5);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11193af0; body size 184 bytes.
#line 1 "ENTRY_11193af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_11193af0(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  uVar1 = (undefined4)(thunk_FUN_111a2df0());
  uVar5 = (undefined4)(0);
  if (*(int *)(param_1 + 0x34) == 0) {
    iVar2 = (int)((**(code **)(**(int **)(param_1 + 0x28) + 0x18))(uVar1));
    piVar4 = (int *)(*(int **)(param_1 + 0x30));
    if (piVar4 != (int *)0x0) {
      if (*(int *)(param_1 + 0x34) != 0) {
        (**(code **)(*piVar4 + 0x10))();
        piVar4 = (int *)(*(int **)(param_1 + 0x30));
      }
      if (piVar4 != (int *)0x0) {
        iVar3 = (int)(thunk_FUN_1123fcd0(piVar4 + 1));
        if (iVar3 == 0) {
          (**(code **)*piVar4)(1);
        }
      }
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    *(int *)(param_1 + 0x30) = iVar2;
    if (iVar2 != 0) {
      thunk_FUN_1123fce0(iVar2 + 4);
      if (*(int **)(param_1 + 0x30) != (int *)0x0) {
        uVar5 = (undefined4)((**(code **)(**(int **)(param_1 + 0x30) + 4))(param_1 + 0x14,0));
        *(undefined4 *)(param_1 + 0x34) = uVar5;
      }
    }
    *(undefined4 *)(param_1 + 0x38) = uVar1;
    uVar5 = (undefined4)(1);
  }
  thunk_FUN_111a36f0();
  param_4[2] = (undefined4)(uVar5);
  *param_4 = (undefined4)(5);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11193be0; body size 68 bytes.
#line 1 "ENTRY_11193be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_11193be0(undefined4 param_1, undefined4 *param_2, unsigned int recovered_unused_stack_0)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)(thunk_FUN_111a2ec0());
  if (iVar1 != 0) {
    uVar2 = (uint)(FUN_10065348(iVar1));
    thunk_FUN_111a36f0();
    param_2[2] = (undefined4)(uVar2 & 0xff);
    *param_2 = (undefined4)(5);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11194120; body size 14 bytes.
#line 1 "ENTRY_11194120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11194120(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11194140; body size 54 bytes.
#line 1 "ENTRY_11194140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11194140(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11202480();
  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RTrackMetaDataObjCB);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11194d10; body size 28 bytes.
#line 1 "ENTRY_11194d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11194d10(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11194d40; body size 28 bytes.
#line 1 "ENTRY_11194d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11194d40(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11194d70; body size 28 bytes.
#line 1 "ENTRY_11194d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11194d70(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11194da0; body size 28 bytes.
#line 1 "ENTRY_11194da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11194da0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11194dd0; body size 28 bytes.
#line 1 "ENTRY_11194dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11194dd0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11194e00; body size 28 bytes.
#line 1 "ENTRY_11194e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11194e00(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11194e30; body size 28 bytes.
#line 1 "ENTRY_11194e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11194e30(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11194f00; body size 194 bytes.
#line 1 "ENTRY_11194f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11194f00(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11261e50();
  param_1[7] = (undefined4)(param_2);
  param_1[8] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RRestoreOneAVTStateAIOOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RRestoreOneAVTStateAIOOp);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[9] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  param_1[0xd] = (undefined4)(0);
  param_1[0xe] = (undefined4)(0);
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  param_1[0x10] = (undefined4)(0);
  param_1[0x11] = (undefined4)(0);
  param_1[0xf] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  param_1[0x13] = (undefined4)(0);
  param_1[0x14] = (undefined4)(0);
  param_1[0x12] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  param_1[0x16] = (undefined4)(0);
  param_1[0x17] = (undefined4)(0);
  param_1[0x15] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  param_1[0x19] = (undefined4)(0);
  param_1[0x1a] = (undefined4)(0);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  param_1[0x1c] = (undefined4)(0);
  param_1[0x1d] = (undefined4)(0);
  param_1[0x1b] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111951f0; body size 134 bytes.
#line 1 "ENTRY_111951f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111951f0(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:AVTransport:1","GetCrossfadeMode",uVar3,
                     param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetCrossfadeModeAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetCrossfadeModeAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetCrossfadeModeAIOOp);
  *(undefined1 *)(param_1 + 0x35f4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111952a0; body size 148 bytes.
#line 1 "ENTRY_111952a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111952a0(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:AVTransport:1","GetTransportInfo",uVar3,
                     param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetTransportInfoAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetTransportInfoAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetTransportInfoAIOOp);
  *(undefined1 *)(param_1 + 0x35f4) = 0;
  *(undefined1 *)(param_1 + 0x36f4) = 0;
  *(undefined1 *)(param_1 + 0x37f4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11195360; body size 141 bytes.
#line 1 "ENTRY_11195360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11195360(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:AVTransport:1","GetTransportSettings",uVar3
                     ,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetTransportSettingsAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetTransportSettingsAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetTransportSettingsAIOOp);
  *(undefined1 *)(param_1 + 0x35f4) = 0;
  *(undefined1 *)(param_1 + 0x36f4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11195680; body size 28 bytes.
#line 1 "ENTRY_11195680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11195680(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetCrossfadeModeAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetCrossfadeModeAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetCrossfadeModeAIOOp);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  if ((undefined4 *)param_1[0x2a5e] != (undefined4 *)0x0) {
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


// Reference entry 111956b0; body size 28 bytes.
#line 1 "ENTRY_111956b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111956b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetTransportInfoAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetTransportInfoAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetTransportInfoAIOOp);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  if ((undefined4 *)param_1[0x2a5e] != (undefined4 *)0x0) {
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


// Reference entry 111956e0; body size 28 bytes.
#line 1 "ENTRY_111956e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111956e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetTransportSettingsAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetTransportSettingsAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetTransportSettingsAIOOp);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  if ((undefined4 *)param_1[0x2a5e] != (undefined4 *)0x0) {
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


// Reference entry 11197c60; body size 40 bytes.
#line 1 "ENTRY_11197c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11197c60(int param_1)

{
  int iVar1;
  
  iVar1 = (int)((**(code **)(*(int *)(*(int *)(param_1 + 0x1c) + 0x1c) + 4))
                    (*(undefined4 *)(param_1 + 0x20),1));
  if (iVar1 != 0) {
    iVar1 = (int)(thunk_FUN_110cb840());
    if (iVar1 != 0) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(iVar1 + 0x2c));
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11197ca0; body size 63 bytes.
#line 1 "ENTRY_11197ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_11197ca0(undefined4 param_2,char *param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined4 uVar2;
  
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    iVar1 = (int)((**(code **)(*(int *)(*(int *)(param_1 + 0x1c) + 0x1c) + 4))(param_3,1));
    if ((iVar1 != 0) && (*(int **)(iVar1 + 0x1c) != (int *)0x0)) {
      uVar2 = (undefined4)((**(code **)(**(int **)(iVar1 + 0x1c) + 0x1c))());
      thunk_FUN_1145a960(uVar2);
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11198a20; body size 24 bytes.
#line 1 "ENTRY_11198a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_11198a20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11198a40; body size 24 bytes.
#line 1 "ENTRY_11198a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_11198a40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11198a60; body size 24 bytes.
#line 1 "ENTRY_11198a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_11198a60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11198a80; body size 24 bytes.
#line 1 "ENTRY_11198a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_11198a80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11198aa0; body size 24 bytes.
#line 1 "ENTRY_11198aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_11198aa0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11198ac0; body size 24 bytes.
#line 1 "ENTRY_11198ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_11198ac0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11198ae0; body size 24 bytes.
#line 1 "ENTRY_11198ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_11198ae0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11198b00; body size 24 bytes.
#line 1 "ENTRY_11198b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_11198b00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11198b20; body size 24 bytes.
#line 1 "ENTRY_11198b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_11198b20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11198b40; body size 24 bytes.
#line 1 "ENTRY_11198b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_11198b40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11199390; body size 108 bytes.
#line 1 "ENTRY_11199390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4
FUN_11199390(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = (undefined4)(thunk_FUN_111a32a0());
  uVar2 = (undefined4)(thunk_FUN_111a2ec0());
  uVar1 = (undefined4)(func_0x11199650(uVar1,param_6,param_7));
  iVar3 = (int)(func_0x1006774c(param_4,uVar1,param_5,uVar2));
  thunk_FUN_111a36f0();
  *param_3 = (undefined4)(4);
  *(double *)(param_3 + 2) = (double)iVar3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11199510; body size 111 bytes.
#line 1 "ENTRY_11199510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4
FUN_11199510(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = (undefined4)(thunk_FUN_111a32a0());
  uVar3 = (uint)(thunk_FUN_111a2df0());
  iVar4 = (int)(func_0x11199650(uVar2,param_5,param_6));
  uVar5 = (uint)(0);
  if (uVar3 < *(uint *)(iVar4 + 0xc)) {
    bVar1 = (byte)((**(code **)(iVar4 + 0x18))(param_4,*(int *)(iVar4 + 8) + uVar3 * 0x14));
    uVar5 = (uint)((uint)bVar1);
  }
  thunk_FUN_111a36f0();
  param_3[2] = (undefined4)(uVar5);
  *param_3 = (undefined4)(5);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 111995a0; body size 41 bytes.
#line 1 "ENTRY_111995a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_111995a0(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  
  if (param_2 < *(uint *)(param_1 + 0xc)) {
    uVar1 = (uint)((**(code **)(param_1 + 0x18))(param_3,*(int *)(param_1 + 8) + param_2 * 0x14));
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(param_2 & 0xffffff00);
}


// Reference entry 111995e0; body size 89 bytes.
#line 1 "ENTRY_111995e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_111995e0(uint param_2,undefined1 *param_3,int param_4)
{
  int param_1 = (int )this;
  int iVar1;
  
  if (*(uint *)(param_1 + 0xc) <= param_2) {
    if (param_4 != 0) {
      *param_3 = (undefined1)(0);
    }
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  }
  iVar1 = (int)(*(int *)(param_1 + 8));
  if (*(int *)(param_1 + 0x10) == 1) {
    thunk_FUN_1145c250(param_3,*(undefined4 *)(iVar1 + param_2 * 0x14));
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
  }
  thunk_FUN_1109ac00(*(undefined4 *)(iVar1 + 8 + param_2 * 0x14),
                     *(undefined4 *)(iVar1 + 0xc + param_2 * 0x14),param_3,param_4);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
}


// Reference entry 111996e0; body size 28 bytes.
#line 1 "ENTRY_111996e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111996e0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11199710; body size 14 bytes.
#line 1 "ENTRY_11199710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11199710(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11199900; body size 21 bytes.
#line 1 "ENTRY_11199900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11199900(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHouseholdListenerBase);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11199930; body size 21 bytes.
#line 1 "ENTRY_11199930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11199930(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RTrackRatingsModel);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1119be40; body size 23 bytes.
#line 1 "ENTRY_1119be40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1119be40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RPresentationMapLoader);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1119be60; body size 162 bytes.
#line 1 "ENTRY_1119be60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1119be60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_1125b810(param_1,LAB_10075388,LAB_1007f71b,LAB_1001d089);
  param_1[0xa3] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RPresentationMapParser);
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[3] = (undefined4)(0xb);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0x1010000);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  *(undefined2 *)(param_1 + 9) = 0;
  param_1[0xa4] = (undefined4)(0);
  *(undefined1 *)((int)param_1 + 0x26) = 0;
  *(undefined1 *)((int)param_1 + 0x126) = 0;
  *(undefined1 *)((int)param_1 + 0xa6) = 0;
  *(undefined1 *)((int)param_1 + 0x1a6) = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  *(undefined1 *)((int)param_1 + 0x1c7) = 0;
  *(undefined1 *)((int)param_1 + 0x209) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1119ce40; body size 14 bytes.
#line 1 "ENTRY_1119ce40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1119ce40(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1119c480(param_2);
  return;
}


// Reference entry 1119ff30; body size 18 bytes.
#line 1 "ENTRY_1119ff30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1119ff30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_1119d3b0(param_2,param_3);
  return;
}


// Reference entry 1119ff50; body size 51 bytes.
#line 1 "ENTRY_1119ff50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1119ff50(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111a4bc0(0,"SwfObjHouseholdListenerProxy");
  param_1[5] = (undefined4)(param_2);
  param_1[6] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjHouseholdListenerProxy);
  *(undefined1 *)(param_1 + 7) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111a0420; body size 13 bytes.
#line 1 "ENTRY_111a0420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_111a0420(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x14) + 0xc))();
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 111a0430; body size 13 bytes.
#line 1 "ENTRY_111a0430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_111a0430(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x14) + 0x14))();
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 111a0440; body size 13 bytes.
#line 1 "ENTRY_111a0440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_111a0440(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x14) + 0x18))();
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 111a05a0; body size 13 bytes.
#line 1 "ENTRY_111a05a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_111a05a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x14) + 8))();
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 111a05b0; body size 13 bytes.
#line 1 "ENTRY_111a05b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_111a05b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x14) + 4))();
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 111a1610; body size 67 bytes.
#line 1 "ENTRY_111a1610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_111a1610(undefined4 *param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  if (param_3 != 0) {
    param_3 = (int)(param_3 + -1);
    if (param_3 != 0) {
      piVar2 = (int *)(param_2);
      do {
        iVar1 = (int)(*piVar2);
        piVar2 = (int *)(piVar2 + 1);
        *(int *)((int)param_1 + (-4 - (int)param_2) + (int)piVar2) = iVar1;
        if (iVar1 == 0) {
          return;
        }
        param_3 = (int)(param_3 + -1);
      } while (param_3 != 0);
    }
    *param_1 = (undefined4)(0);
  }
  return;
}


// Reference entry 111a1680; body size 165 bytes.
#line 1 "ENTRY_111a1680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_111a1680(undefined4 *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  char *pcVar2;
  void *_Src;
  undefined1 *_Src_00;
  int iVar3;
  char *pcVar4;
  size_t _Size;
  
  pcVar2 = (char *)((char *)*param_2);
  if (pcVar2 == (char *)0x0) {
    _Size = (size_t)(0);
  }
  else {
    _Size = (size_t)(*(size_t *)(pcVar2 + -0xc));
    if (_Size == 0) {
      pcVar4 = (char *)(pcVar2);
      do {
        cVar1 = (char)(*pcVar4);
        pcVar4 = (char *)(pcVar4 + 1);
      } while (cVar1 != '\0');
      _Size = (size_t)((int)pcVar4 - (int)(pcVar2 + 1));
      *(size_t *)(pcVar2 + -0xc) = _Size;
    }
  }
  pcVar2 = (char *)((char *)*param_1);
  if (pcVar2 == (char *)0x0) {
    iVar3 = (int)(0);
  }
  else {
    iVar3 = (int)(*(int *)(pcVar2 + -0xc));
    if (iVar3 == 0) {
      pcVar4 = (char *)(pcVar2);
      do {
        cVar1 = (char)(*pcVar4);
        pcVar4 = (char *)(pcVar4 + 1);
      } while (cVar1 != '\0');
      iVar3 = (int)((int)pcVar4 - (int)(pcVar2 + 1));
      *(int *)(pcVar2 + -0xc) = iVar3;
    }
  }
  _Src = (void *)((void *)thunk_FUN_111a1220(_Size + iVar3));
  memmove((void *)((int)_Src + _Size),_Src,iVar3 + 1);
  _Src_00 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    _Src_00 = (undefined1 *)((undefined1 *)*param_2);
  }
  memcpy(_Src,_Src_00,_Size);
  *(size_t *)(*param_1 + -0xc) = _Size + iVar3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 111a17f0; body size 114 bytes.
#line 1 "ENTRY_111a17f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_111a17f0(void *param_2,size_t param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  char *pcVar2;
  void *_Src;
  char *pcVar3;
  int iVar4;
  
  pcVar2 = (char *)((char *)*param_1);
  if (pcVar2 == (char *)0x0) {
    iVar4 = (int)(0);
  }
  else {
    iVar4 = (int)(*(int *)(pcVar2 + -0xc));
    if (iVar4 == 0) {
      pcVar3 = (char *)(pcVar2);
      do {
        cVar1 = (char)(*pcVar3);
        pcVar3 = (char *)(pcVar3 + 1);
      } while (cVar1 != '\0');
      iVar4 = (int)((int)pcVar3 - (int)(pcVar2 + 1));
      *(int *)(pcVar2 + -0xc) = iVar4;
    }
  }
  _Src = (void *)((void *)thunk_FUN_111a1220(iVar4 + param_3));
  memmove((void *)((int)_Src + param_3),_Src,iVar4 + 1);
  memcpy(_Src,param_2,param_3);
  *(size_t *)(*param_1 + -0xc) = iVar4 + param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 111a1f90; body size 42 bytes.
#line 1 "ENTRY_111a1f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111a1f90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111a4bc0(param_2,"String");
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjString);
  param_1[5] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111a2000; body size 96 bytes.
#line 1 "ENTRY_111a2000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111a2000(char *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  char cVar1;
  char *pcVar2;
  void *_Dst;
  
  *param_1 = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  pcVar2 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  param_1[9] = (undefined4)((int)pcVar2 - (int)(param_2 + 1));
  _Dst = (void *)(malloc(((int)pcVar2 - (int)(param_2 + 1)) + 1));
  *param_1 = (undefined4)(_Dst);
  memcpy(_Dst,param_2,param_1[9] + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111a2820; body size 37 bytes.
#line 1 "ENTRY_111a2820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_111a2820(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 4) {
    iVar1 = (int)(_finite(*(double *)(param_1 + 2)));
    if (iVar1 == 0) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 111a2850; body size 37 bytes.
#line 1 "ENTRY_111a2850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_111a2850(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 4) {
    iVar1 = (int)(_isnan(*(double *)(param_1 + 2)));
    if (iVar1 != 0) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 111a3650; body size 20 bytes.
#line 1 "ENTRY_111a3650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * __fastcall FUN_111a3650(undefined4 *param_1)

{
  int iVar1;
  
  switch(*param_1) {
  case 0:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("undefined");
  default:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("null");
  case 2:
  case 3:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("string");
  case 4:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("number");
  case 5:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("boolean");
  case 6:
    break;
  case 7:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("function");
  }
  if (((int *)param_1[2] != (int *)0x0) &&
     (iVar1 = (**(code **)(*(int *)param_1[2] + 0x20))(), iVar1 == 8)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("movieclip");
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("object");
}


// Reference entry 111a4320; body size 37 bytes.
#line 1 "ENTRY_111a4320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111a4320(int param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x18));
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[3] != param_2) {
      do {
                    
      } while( true );
    }
    *(undefined4 *)(param_1 + 0x18) = *puVar1;
    thunk_FUN_1148a50e(puVar1,0x10);
  }
  return;
}


// Reference entry 111a4780; body size 18 bytes.
#line 1 "ENTRY_111a4780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111a4780(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111a47a0; body size 18 bytes.
#line 1 "ENTRY_111a47a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111a47a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111a47c0; body size 25 bytes.
#line 1 "ENTRY_111a47c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111a47c0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 111a4b70; body size 52 bytes.
#line 1 "ENTRY_111a4b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111a4b70(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111a4dd0; body size 25 bytes.
#line 1 "ENTRY_111a4dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111a4dd0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjSymbolTableIter);
  param_1[1] = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111a56c0; body size 31 bytes.
#line 1 "ENTRY_111a56c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111a56c0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 111a5720; body size 90 bytes.
#line 1 "ENTRY_111a5720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_111a5720(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0xaaaaaab) {
    param_1 = (uint)(param_1 * 0x18);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 111a59b0; body size 57 bytes.
#line 1 "ENTRY_111a59b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111a59b0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 111a5f00; body size 8 bytes.
#line 1 "ENTRY_111a5f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111a5f00(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 0x20));
  return;
}


// Reference entry 111a65a0; body size 95 bytes.
#line 1 "ENTRY_111a65a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111a65a0(undefined4 param_2,int param_3)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 8));
  if (param_3 != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (puVar1 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(puVar1);
    }
    uVar2 = (undefined4)(func_0x1005b4e7());
    thunk_FUN_111a74d0("DebugUndefinedVars",4,
                       "\n *** attempt to call non-function member %s of object of class %s (type = %s) ***\n"
                       ,param_2,puVar3,uVar2);
    return;
  }
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)(puVar1);
  }
  thunk_FUN_111a74d0("DebugUndefinedVars",4,
                     "\n *** attempt to call non-existant member function %s of object of class %s ***\n"
                     ,param_2,puVar3);
  return;
}


// Reference entry 111a73b0; body size 25 bytes.
#line 1 "ENTRY_111a73b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_111a73b0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(*piVar1);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(piVar1[1]);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 111a7ca0; body size 28 bytes.
#line 1 "ENTRY_111a7ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111a7ca0(void *param_1,int param_2,int param_3)

{
  memmove((void *)(param_3 - (param_2 - (int)param_1)),param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 111a7cd0; body size 33 bytes.
#line 1 "ENTRY_111a7cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_111a7cd0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 111a7e80; body size 24 bytes.
#line 1 "ENTRY_111a7e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_111a7e80(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*param_1 == 0)));
}


// Reference entry 111a7ea0; body size 28 bytes.
#line 1 "ENTRY_111a7ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111a7ea0(void *param_1,int param_2,int param_3)

{
  memmove((void *)(param_3 - (param_2 - (int)param_1)),param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 111a7ed0; body size 33 bytes.
#line 1 "ENTRY_111a7ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_111a7ed0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 111a8050; body size 86 bytes.
#line 1 "ENTRY_111a8050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_111a8050(int *param_1,int param_2,int *param_3)

{
  if (*param_3 == 0) {
    memset(param_1,0,param_2 * 4);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1 + param_2);
  }
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = (int)(*param_3);
    param_1 = (int *)(param_1 + 1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 111a80c0; body size 36 bytes.
#line 1 "ENTRY_111a80c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_111a80c0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 111a8190; body size 36 bytes.
#line 1 "ENTRY_111a8190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111a8190(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_111a7d40(puVar1,param_2);
  return;
}


// Reference entry 111a8300; body size 11 bytes.
#line 1 "ENTRY_111a8300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111a8300(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111a8310; body size 11 bytes.
#line 1 "ENTRY_111a8310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111a8310(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111a8320; body size 37 bytes.
#line 1 "ENTRY_111a8320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111a8320(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111a4d30(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjArrayIter);
  param_1[3] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111a8490; body size 5 bytes.
#line 1 "ENTRY_111a8490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111a8490(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjObjectIter);
  puVar1 = (undefined4 *)((undefined4 *)param_1[1]);

  if (puVar1 != (undefined4 *)0x0) {
    iVar3 = (int)(thunk_FUN_1123fcd0(puVar1 + 1,uVar2));
    if (iVar3 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjIter);

  return;

 } catch (...) { }
}


// Reference entry 111a84f0; body size 18 bytes.
#line 1 "ENTRY_111a84f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111a84f0(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 4);
  return;
}


// Reference entry 111a8510; body size 18 bytes.
#line 1 "ENTRY_111a8510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111a8510(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 4);
  return;
}


// Reference entry 111a8680; body size 49 bytes.
#line 1 "ENTRY_111a8680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_111a8680(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 2);
  if (0x3fffffff - (uVar1 >> 1) < uVar1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0x3fffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 111a8750; body size 18 bytes.
#line 1 "ENTRY_111a8750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111a8750(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 4);
  return;
}


// Reference entry 111a8770; body size 3 bytes.
#line 1 "ENTRY_111a8770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_111a8770(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 111a8850; body size 37 bytes.
#line 1 "ENTRY_111a8850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_111a8850(void *param_1, int param_2, unsigned int recovered_unused_stack_0)

{
  memset(param_1,0,param_2 * 4);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)(param_2 * 4 + (int)param_1));
}


// Reference entry 111a8880; body size 38 bytes.
#line 1 "ENTRY_111a8880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_111a8880(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 111a88b0; body size 27 bytes.
#line 1 "ENTRY_111a88b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_111a88b0(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 111a88e0; body size 27 bytes.
#line 1 "ENTRY_111a88e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_111a88e0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 111a8910; body size 3 bytes.
#line 1 "ENTRY_111a8910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_111a8910(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 111a8e30; body size 51 bytes.
#line 1 "ENTRY_111a8e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111a8e30(undefined4 *param_2,void *param_3,void *param_4)
{
  int param_1 = (int )this;
  size_t _Size;
  
  if (param_3 != (void *)(param_4)) {
    _Size = (size_t)(*(int *)(param_1 + 4) - (int)param_4);
    memmove(param_3,param_4,_Size);
    *(size_t *)(param_1 + 4) = (int)param_3 + _Size;
  }
  *param_2 = (undefined4)(param_3);
  return;
}


// Reference entry 111a9320; body size 65 bytes.
#line 1 "ENTRY_111a9320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111a9320(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 1) {
    iVar1 = (int)(thunk_FUN_111a3630());
    if (iVar1 == 4) {
      uVar2 = (undefined4)(thunk_FUN_111a2df0());
      thunk_FUN_111ab150(uVar2);
      return;
    }
  }
  thunk_FUN_111aaf90(param_1,param_2);
  return;
}


// Reference entry 111a9a00; body size 44 bytes.
#line 1 "ENTRY_111a9a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_111a9a00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = (int)(*(int *)(param_1 + 0x14));
  iVar3 = (int)(*(int *)(param_1 + 0x18) - iVar1 >> 2);
  if (iVar3 != 0) {
    uVar2 = (undefined4)(*(undefined4 *)(iVar1 + -4 + iVar3 * 4));
    *(undefined4 *)(iVar1 + -4 + iVar3 * 4) = 0;
    thunk_FUN_111ab150(iVar3 + -1);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 111a9c70; body size 60 bytes.
#line 1 "ENTRY_111a9c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111a9c70(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = (undefined4)(thunk_FUN_111a32a0());
  uVar2 = (undefined4)(thunk_FUN_111a32a0());
  iVar3 = (int)(thunk_FUN_1106a250(uVar2,uVar1,0));
  if (iVar3 == 0) {
    thunk_FUN_1106a270(uVar2,uVar1,0);
  }
  return;
}


// Reference entry 111a9cc0; body size 43 bytes.
#line 1 "ENTRY_111a9cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111a9cc0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (undefined4)(thunk_FUN_111a32a0());
  uVar2 = (undefined4)(thunk_FUN_111a32a0());
  thunk_FUN_1106a270(uVar2,uVar1,0);
  return;
}


// Reference entry 111a9d30; body size 5 bytes.
#line 1 "ENTRY_111a9d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_111a9d30(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 111a9d40; body size 5 bytes.
#line 1 "ENTRY_111a9d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_111a9d40(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 111a9d50; body size 89 bytes.
#line 1 "ENTRY_111a9d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_111a9d50(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  uVar1 = (undefined4)(thunk_FUN_111a32a0());
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x14) != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)(*(undefined1 **)(param_1 + 0x14));
  }
  iVar2 = (int)(thunk_FUN_1106a270(puVar3,uVar1,0));
  thunk_FUN_111a36f0();
  *param_4 = (undefined4)(4);
  *(double *)(param_4 + 2) = (double)iVar2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 111a9dc0; body size 110 bytes.
#line 1 "ENTRY_111a9dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_111a9dc0(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  uVar1 = (undefined4)(thunk_FUN_111a32a0());
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x14) != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)(*(undefined1 **)(param_1 + 0x14));
  }
  iVar2 = (int)(thunk_FUN_1106a250(puVar3,uVar1,0));
  if (iVar2 == 0) {
    iVar2 = (int)(thunk_FUN_1106a270(puVar3,uVar1,0));
  }
  thunk_FUN_111a36f0();
  *param_4 = (undefined4)(4);
  *(double *)(param_4 + 2) = (double)iVar2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 111a9e50; body size 5 bytes.
#line 1 "ENTRY_111a9e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_111a9e50(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 111a9e60; body size 5 bytes.
#line 1 "ENTRY_111a9e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_111a9e60(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 111a9e70; body size 77 bytes.
#line 1 "ENTRY_111a9e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_111a9e70(undefined4 *param_1, int param_2, unsigned int recovered_unused_stack_0)

{
  int iVar1;
  
  if (param_1 == (undefined4 *)0x1) {
    iVar1 = (int)(param_2);
    param_2 = (int)(0);
  }
  else {
    if (param_1 != (undefined4 *)0x2) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
    }
    iVar1 = (int)(param_2 + 0x10);
  }
  iVar1 = (int)(func_0x100975aa(iVar1,param_2));
  thunk_FUN_111a36f0();
  *param_1 = (undefined4)(4);
  *(double *)(param_1 + 2) = (double)iVar1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 111aa2e0; body size 91 bytes.
#line 1 "ENTRY_111aa2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_111aa2e0(undefined4 *param_1, undefined4 param_2, unsigned int recovered_unused_stack_0)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(thunk_FUN_111a32a0());
  if (param_1 == (undefined4 *)0x1) {
    param_2 = (undefined4)(0);
  }
  else if (param_1 != (undefined4 *)0x2) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  }
  iVar2 = (int)(func_0x1009078c(uVar1,param_2));
  thunk_FUN_111a36f0();
  *param_1 = (undefined4)(4);
  *(double *)(param_1 + 2) = (double)iVar2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 111aa410; body size 18 bytes.
#line 1 "ENTRY_111aa410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_111aa410(undefined4 param_1, undefined4 param_2, unsigned int recovered_unused_stack_0)

{
  thunk_FUN_111aaf90(param_1,param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 111aa430; body size 5 bytes.
#line 1 "ENTRY_111aa430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_111aa430(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 111aa440; body size 5 bytes.
#line 1 "ENTRY_111aa440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_111aa440(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 111aa450; body size 5 bytes.
#line 1 "ENTRY_111aa450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_111aa450(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 111aa460; body size 5 bytes.
#line 1 "ENTRY_111aa460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_111aa460(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 111aa520; body size 5 bytes.
#line 1 "ENTRY_111aa520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_111aa520(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 111aaeb0; body size 5 bytes.
#line 1 "ENTRY_111aaeb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_111aaeb0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 111aaec0; body size 5 bytes.
#line 1 "ENTRY_111aaec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_111aaec0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 111aaed0; body size 5 bytes.
#line 1 "ENTRY_111aaed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_111aaed0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 111aaee0; body size 5 bytes.
#line 1 "ENTRY_111aaee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_111aaee0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 111ab0a0; body size 36 bytes.
#line 1 "ENTRY_111ab0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111ab0a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_111a7d40(puVar1,param_2);
  return;
}


// Reference entry 111ab0d0; body size 41 bytes.
#line 1 "ENTRY_111ab0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111ab0d0(uint param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  void *_Dst;
  
  if (param_2 <= (uint)(param_1[2] - *param_1 >> 2)) {
    return;
  }
  if (param_2 < 0x40000000) {
    iVar1 = (int)(param_1[1]);
    iVar2 = (int)(*param_1);
    _Dst = (void *)((void *)thunk_FUN_111a8930(param_2));
    memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
    thunk_FUN_111a86c0(_Dst,iVar1 - iVar2 >> 2,param_2);
    return;
  }
                    
  thunk_FUN_111a8920();
}


// Reference entry 111ab1d0; body size 5 bytes.
#line 1 "ENTRY_111ab1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111ab1d0(int param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_2 < 0) {
    thunk_FUN_111a74d0("DebugUndefinedVars",2,"error: attempt to access negative index in array");
    return;
  }
  piVar1 = (int *)((int *)(param_1 + 0x14));
  iVar2 = (int)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2);
  if (iVar2 <= param_2) {
    if ((100 < param_2) && (iVar2 * 2 < param_2)) {
      thunk_FUN_111a74d0("DebugUndefinedVars",2,"error: sparse arrays are not efficiently supported"
                        );
    }
    thunk_FUN_111ab150(param_2 + 1);
  }
  if (*(int *)(*piVar1 + param_2 * 4) == 0) {
    iVar2 = (int)(thunk_FUN_111a3630());
    if (iVar2 == 0) {
      return;
    }
    puVar3 = (undefined4 *)(operator_new(0x10));
    if (puVar3 == (undefined4 *)0x0) {
      *(undefined4 *)(*piVar1 + param_2 * 4) = 0;
      return;
    }
    *puVar3 = (undefined4)(0);
    *(undefined4 **)(*piVar1 + param_2 * 4) = puVar3;
  }
  thunk_FUN_111a2370(param_3);
  return;
}


// Reference entry 111ab300; body size 32 bytes.
#line 1 "ENTRY_111ab300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_111ab300(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(*param_1);
  if (iVar1 == 0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(*(int *)(iVar1 + -8));
    if (iVar2 == 0) {
      iVar2 = (int)(thunk_FUN_11069bc0(iVar1));
      *(int *)(iVar1 + -8) = iVar2;
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar2);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar2);
}


// Reference entry 111ab3c0; body size 248 bytes.
#line 1 "ENTRY_111ab3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_111ab3c0(undefined4 *param_1,ushort *param_2,uint *param_3,uint *param_4,int param_5)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = (uint *)((uint *)*param_3);
  puVar1 = (ushort *)((ushort *)*param_1);
  do {
    if (param_2 <= puVar1) {
      *param_1 = (undefined4)(puVar1);
      *param_3 = (uint)((uint)puVar4);
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
    }
    uVar3 = (uint)((uint)*puVar1);
    puVar2 = (ushort *)(puVar1 + 1);
    if ((uVar3 - 0xd800 < 0x400) && (puVar2 < param_2)) {
      if (*puVar2 - 0xdc00 < 0x400) {
        uVar3 = (uint)(uVar3 * 0x400 + -0x35fdc00 + (uint)*puVar2);
        puVar2 = (ushort *)(puVar1 + 2);
      }
      else if (param_5 == 0) {
        *param_1 = (undefined4)(puVar1);
        *param_3 = (uint)((uint)puVar4);
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(3);
      }
    }
    else if ((param_5 == 0) && ((0xdbff < uVar3 && (uVar3 < 0xe000)))) {
      *param_1 = (undefined4)(puVar1);
      *param_3 = (uint)((uint)puVar4);
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(3);
    }
    if (param_4 <= puVar4) {
      *param_1 = (undefined4)(puVar1);
      *param_3 = (uint)((uint)puVar4);
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(2);
    }
    *puVar4 = (uint)(uVar3);
    puVar4 = (uint *)(puVar4 + 1);
    puVar1 = (ushort *)(puVar2);
  } while( true );
}


// Reference entry 111ab6d0; body size 253 bytes.
#line 1 "ENTRY_111ab6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_111ab6d0(uint *param_1,uint *param_2,undefined4 *param_3,short *param_4,int param_5)

{
  uint uVar1;
  short *psVar2;
  undefined4 uVar3;
  short *psVar4;
  uint *puVar5;
  uint *puVar6;
  
  uVar3 = (undefined4)(0);
  puVar6 = (uint *)((uint *)*param_1);
  psVar2 = (short *)((short *)*param_3);
  if (puVar6 < param_2) {
    psVar4 = (short *)(psVar2 + 1);
    while (psVar2 < param_4) {
      uVar1 = (uint)(*puVar6);
      puVar5 = (uint *)(puVar6 + 1);
      if (uVar1 < 0x10000) {
        if (((param_5 == 0) && (0xd7ff < uVar1)) && (uVar1 < 0xe000)) {
          *param_1 = (uint)((uint)puVar6);
          *param_3 = (undefined4)(psVar2);
          return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(3);
        }
        *psVar2 = (short)((short)uVar1);
        psVar2 = (short *)(psVar2 + 1);
        psVar4 = (short *)(psVar4 + 1);
      }
      else if (uVar1 < 0x110000) {
        if (param_4 <= psVar4) break;
        *psVar2 = (short)((short)(uVar1 - 0x10000 >> 10) + -0x2800);
        psVar2[1] = (short)(((ushort)(uVar1 - 0x10000) & 0x3ff) + 0xdc00);
        psVar2 = (short *)(psVar2 + 2);
        psVar4 = (short *)(psVar4 + 2);
      }
      else if (param_5 == 0) {
        uVar3 = (undefined4)(3);
      }
      else {
        *psVar2 = (short)(-3);
        psVar2 = (short *)(psVar2 + 1);
        psVar4 = (short *)(psVar4 + 1);
      }
      puVar6 = (uint *)(puVar5);
      if (param_2 <= puVar5) {
        *param_1 = (uint)((uint)puVar5);
        *param_3 = (undefined4)(psVar2);
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar3);
      }
    }
    uVar3 = (undefined4)(2);
  }
  *param_1 = (uint)((uint)puVar6);
  *param_3 = (undefined4)(psVar2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar3);
}


// Reference entry 111abeb0; body size 35 bytes.
#line 1 "ENTRY_111abeb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111abeb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_101a6c80(param_1,param_2,param_3,param_4));
  __stdio_common_vfprintf(*puVar1,puVar1[1]);
  return;
}


// Reference entry 111abee0; body size 49 bytes.
#line 1 "ENTRY_111abee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_111abee0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)((uint *)thunk_FUN_101a6c80(param_1,0xffffffff,param_2,param_3,param_4));
  iVar2 = (int)(__stdio_common_vsprintf(*puVar1 | 1,puVar1[1]));
  if (iVar2 < 0) {
    iVar2 = (int)(-1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar2);
}


// Reference entry 111ac5a0; body size 5 bytes.
#line 1 "ENTRY_111ac5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111ac5a0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(*(int *)(param_1 + 4) + 0x24))(param_1,1);
    if (*(char *)(param_1 + 0x10) != '\0') {
      *(undefined4 *)(param_1 + 0x14) = 200;
      *(undefined4 *)(param_1 + 0x10c) = 0;
      return;
    }
    *(undefined4 *)(param_1 + 0x14) = 100;
  }
  return;
}


// Reference entry 111ac7b0; body size 60 bytes.
#line 1 "ENTRY_111ac7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_111ac7b0(int *param_1)

{
  if ((param_1[5] < 0xca) || (0xd2 < param_1[5])) {
    *(undefined4 *)(*param_1 + 0x14) = 0x14;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)(param_1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(((uint)((int3)((uint)param_1[100] >> 8)) << 8 | (uint)(*(undefined1 *)(param_1[100] + 0x10))));
}


// Reference entry 111ac800; body size 60 bytes.
#line 1 "ENTRY_111ac800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_111ac800(int *param_1)

{
  if ((param_1[5] < 200) || (0xd2 < param_1[5])) {
    *(undefined4 *)(*param_1 + 0x14) = 0x14;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)(param_1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(((uint)((int3)((uint)param_1[100] >> 8)) << 8 | (uint)(*(undefined1 *)(param_1[100] + 0x11))));
}


// Reference entry 111ae830; body size 216 bytes.
#line 1 "ENTRY_111ae830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111ae830(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  
  iVar1 = (int)(param_1[0x65]);
  uVar2 = (uint)(*(int *)(param_1[1] + 0x30) - 0x14);
  if ((int)uVar2 < (int)param_3) {
    param_3 = (uint)(uVar2);
  }
  if (param_3 == 0) {
    pcVar3 = (code *)(FUN_111af570);
    if ((param_2 == 0xe0) || (param_2 == 0xee)) {
      pcVar3 = (code *)(FUN_111adbe0);
    }
  }
  else {
    pcVar3 = (code *)(FUN_111af250);
    if (param_2 == 0xe0) {
      if (param_3 < 0xe) {
        *(code **)(iVar1 + 0x1c) = FUN_111af250;
        *(undefined4 *)(iVar1 + 0x60) = 0xe;
        return;
      }
      goto LAB_111ae8dc;
    }
    if (param_2 == 0xee) {
      if (param_3 < 0xc) {
        *(code **)(iVar1 + 0x54) = FUN_111af250;
        *(undefined4 *)(iVar1 + 0x98) = 0xc;
        return;
      }
      goto LAB_111ae8dc;
    }
  }
  if (param_2 == 0xfe) {
    *(code **)(iVar1 + 0x18) = pcVar3;
    *(uint *)(iVar1 + 0x5c) = param_3;
    return;
  }
  if ((param_2 < 0xe0) || (0xef < param_2)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x44;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
    return;
  }
LAB_111ae8dc:
  *(code **)(iVar1 + -0x364 + param_2 * 4) = pcVar3;
  *(uint *)(iVar1 + -800 + param_2 * 4) = param_3;
  return;
}


// Reference entry 111ae940; body size 82 bytes.
#line 1 "ENTRY_111ae940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111ae940(int *param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0xfe) {
    *(undefined4 *)(param_1[0x65] + 0x18) = param_3;
    return;
  }
  if (param_2 - 0xe0U < 0x10) {
    *(undefined4 *)(param_1[0x65] + -0x364 + param_2 * 4) = param_3;
    return;
  }
  *(undefined4 *)(*param_1 + 0x14) = 0x44;
  *(int *)(*param_1 + 0x18) = param_2;
  (**(code **)*param_1)(param_1);
  return;
}


// Reference entry 111bb3f0; body size 1269 bytes.
#line 1 "ENTRY_111bb3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111bb3f0(int param_1,int param_2,short *param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piStack_140;
  int *piStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  undefined1 *puStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int aiStack_104 [24];
  int aiStack_a4 [8];
  int aiStack_84 [32];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&piStack_140);
  iStack_10c = (int)(param_4);
  iStack_108 = (int)(param_5);
  iStack_130 = (int)(*(int *)(param_1 + 0x120) + 0x80);
  piVar6 = (int *)(aiStack_104);
  iStack_138 = (int)(8);
  piStack_140 = (int *)(*(int **)(param_2 + 0x50));
  do {
    if ((((param_3[8] == 0) && (param_3[0x10] == 0)) && (param_3[0x18] == 0)) &&
       (((param_3[0x20] == 0 && (param_3[0x28] == 0)) &&
        ((param_3[0x30] == 0 && (param_3[0x38] == 0)))))) {
      iVar2 = (int)((int)*param_3 * *piStack_140 * 4);
      *piVar6 = (int)(iVar2);
      piVar6[8] = (int)(iVar2);
      piVar6[0x10] = (int)(iVar2);
      piVar6[0x28] = (int)(iVar2);
      piVar6[0x30] = (int)(iVar2);
      piVar6[0x38] = (int)(iVar2);
      iStack_12c = (int)(0);
      iVar4 = (int)(iVar2);
    }
    else {
      iVar4 = (int)(((int)param_3[0x30] * piStack_140[0x30] + (int)param_3[0x10] * piStack_140[0x10]) *
              0x1151);
      iVar2 = (int)(iVar4 + (int)param_3[0x30] * piStack_140[0x30] * -0x3b21);
      iVar4 = (int)((int)param_3[0x10] * piStack_140[0x10] * 0x187e + iVar4);
      iVar8 = (int)(((int)param_3[0x20] * piStack_140[0x20] + (int)*param_3 * *piStack_140) * 0x2000);
      iStack_11c = (int)(((int)*param_3 * *piStack_140 - (int)param_3[0x20] * piStack_140[0x20]) * 0x2000);
      iStack_124 = (int)(iVar8 + iVar4);
      iVar8 = (int)(iVar8 - iVar4);
      iStack_120 = (int)(iStack_11c + iVar2);
      iStack_11c = (int)(iStack_11c - iVar2);
      iVar7 = (int)((int)param_3[0x38] * piStack_140[0x38]);
      iStack_110 = (int)((int)param_3[0x18] * piStack_140[0x18]);
      iStack_128 = (int)((int)param_3[0x28] * piStack_140[0x28]);
      iStack_12c = (int)((int)param_3[8] * piStack_140[8]);
      iVar3 = (int)((iStack_128 + iStack_12c + iStack_110 + iVar7) * 0x25a1);
      iVar4 = (int)((iStack_12c + iVar7) * -0x1ccd);
      iVar5 = (int)((iStack_110 + iStack_128) * -0x5203);
      iStack_114 = (int)(iVar3 + (iStack_110 + iVar7) * -0x3ec5);
      iVar3 = (int)(iVar3 + (iStack_128 + iStack_12c) * -0xc7c);
      iVar2 = (int)(iStack_110 * 0x6254 + iStack_114 + iVar5);
      iStack_114 = (int)(iVar7 * 0x98e + iVar4 + iStack_114);
      iVar5 = (int)(iStack_128 * 0x41b3 + iVar3 + iVar5);
      iVar4 = (int)(iStack_12c * 0x300b + iVar3 + iVar4);
      *piVar6 = (int)(iStack_124 + 0x400 + iVar4 >> 0xb);
      piVar6[0x38] = (int)((iStack_124 - iVar4) + 0x400 >> 0xb);
      piVar6[0x30] = (int)((iStack_120 - iVar2) + 0x400 >> 0xb);
      piVar6[8] = (int)(iStack_120 + 0x400 + iVar2 >> 0xb);
      piVar6[0x10] = (int)(iStack_11c + 0x400 + iVar5 >> 0xb);
      iVar2 = (int)((iVar8 - iStack_114) + 0x400 >> 0xb);
      piVar6[0x28] = (int)((iStack_11c - iVar5) + 0x400 >> 0xb);
      iVar4 = (int)(iVar8 + 0x400 + iStack_114 >> 0xb);
    }
    piVar6[0x18] = (int)(iVar4);
    piStack_140 = (int *)(piStack_140 + 1);
    piVar6[0x20] = (int)(iVar2);
    param_3 = (short *)(param_3 + 1);
    piVar6 = (int *)(piVar6 + 1);
    iStack_138 = (int)(iStack_138 + -1);
  } while (0 < iStack_138);
  piStack_13c = (int *)(aiStack_104);
  iStack_138 = (int)(0);
  do {
    iStack_134 = (int)(piStack_13c[1]);
    puStack_118 = (undefined1 *)((undefined1 *)(*(int *)(param_4 + iStack_138 * 4) + param_5));
    if ((((iStack_134 == 0) && (piStack_13c[2] == 0)) &&
        ((piStack_13c[3] == 0 &&
         (((piStack_13c[4] == 0 && (piStack_13c[5] == 0)) && (piStack_13c[6] == 0)))))) &&
       (piStack_13c[7] == 0)) {
      uVar1 = (undefined1)(*(undefined1 *)((*piStack_13c + 0x10 >> 5 & 0x3ffU) + iStack_130));
      *puStack_118 = (undefined1)(uVar1);
      puStack_118[1] = (undefined1)(uVar1);
      puStack_118[2] = (undefined1)(uVar1);
      puStack_118[3] = (undefined1)(uVar1);
      puStack_118[5] = (undefined1)(uVar1);
      puStack_118[6] = (undefined1)(uVar1);
      puStack_118[7] = (undefined1)(uVar1);
    }
    else {
      iVar2 = (int)(piStack_13c[5]);
      iVar4 = (int)((piStack_13c[6] + piStack_13c[2]) * 0x1151);
      iVar8 = (int)(iVar4 + piStack_13c[6] * -0x3b21);
      iVar4 = (int)(piStack_13c[2] * 0x187e + iVar4);
      iStack_120 = (int)((*piStack_13c - piStack_13c[4]) * 0x2000);
      iStack_128 = (int)((*piStack_13c + piStack_13c[4]) * 0x2000);
      iStack_114 = (int)(iStack_128 + iVar4);
      iStack_128 = (int)(iStack_128 - iVar4);
      iStack_11c = (int)(iStack_120 + iVar8);
      iStack_120 = (int)(iStack_120 - iVar8);
      iVar8 = (int)(piStack_13c[7]);
      iVar4 = (int)(iVar8 + piStack_13c[3]);
      iVar3 = (int)((iStack_134 + iVar2 + iVar4) * 0x25a1);
      iVar5 = (int)((iVar8 + iStack_134) * -0x1ccd);
      iVar7 = (int)((piStack_13c[3] + iVar2) * -0x5203);
      iVar4 = (int)(iVar3 + iVar4 * -0x3ec5);
      piStack_140 = (int *)((int *)(iVar3 + (iStack_134 + iVar2) * -0xc7c));
      iStack_124 = (int)(iVar8 * 0x98e + iVar5 + iVar4);
      iVar2 = (int)((int)piStack_140 + iVar7 + iVar2 * 0x41b3);
      iVar7 = (int)(piStack_13c[3] * 0x6254 + iVar4 + iVar7);
      iVar4 = (int)((int)piStack_140 + iVar5 + iStack_134 * 0x300b);
      *puStack_118 = (undefined1)(*(undefined1 *)((iStack_114 + 0x20000 + iVar4 >> 0x12 & 0x3ffU) + iStack_130));
      puStack_118[7] = (undefined1)(*(undefined1 *)(((iStack_114 - iVar4) + 0x20000 >> 0x12 & 0x3ffU) + iStack_130));
      puStack_118[1] = (undefined1)(*(undefined1 *)((iStack_11c + 0x20000 + iVar7 >> 0x12 & 0x3ffU) + iStack_130));
      puStack_118[6] = (undefined1)(*(undefined1 *)(((iStack_11c - iVar7) + 0x20000 >> 0x12 & 0x3ffU) + iStack_130));
      puStack_118[2] = (undefined1)(*(undefined1 *)((iStack_120 + 0x20000 + iVar2 >> 0x12 & 0x3ffU) + iStack_130));
      puStack_118[5] = (undefined1)(*(undefined1 *)(((iStack_120 - iVar2) + 0x20000 >> 0x12 & 0x3ffU) + iStack_130));
      puStack_118[3] = (undefined1)(*(undefined1 *)((iStack_124 + 0x20000 + iStack_128 >> 0x12 & 0x3ffU) + iStack_130));
      uVar1 = (undefined1)(*(undefined1 *)(((iStack_128 - iStack_124) + 0x20000 >> 0x12 & 0x3ffU) + iStack_130));
    }
    puStack_118[4] = (undefined1)(uVar1);
    piStack_13c = (int *)(piStack_13c + 8);
    iStack_138 = (int)(iStack_138 + 1);
  } while (iStack_138 < 8);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 111bba30; body size 1015 bytes.
#line 1 "ENTRY_111bba30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111bba30(int param_1,int param_2,short *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int *piStack_124;
  undefined1 *puStack_120;
  int iStack_11c;
  short *psStack_118;
  int *piStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int aiStack_104 [16];
  int aiStack_c4 [8];
  int aiStack_a4 [8];
  int aiStack_84 [8];
  int aiStack_64 [24];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&iStack_130);
  piStack_124 = (int *)(aiStack_104);
  iStack_10c = (int)(param_4);
  iStack_108 = (int)(param_5);
  iStack_11c = (int)(*(int *)(param_1 + 0x120) + 0x80);
  piStack_114 = (int *)(*(int **)(param_2 + 0x50));
  puStack_120 = (undefined1 *)((undefined1 *)0x8);
  do {
    if ((((param_3[8] == 0) && (param_3[0x10] == 0)) && (param_3[0x18] == 0)) &&
       (((param_3[0x20] == 0 && (param_3[0x28] == 0)) &&
        ((param_3[0x30] == 0 && (param_3[0x38] == 0)))))) {
      iVar1 = (int)((int)*param_3 * *piStack_114);
      piStack_124[0x30] = (int)(iVar1);
      piStack_124[0x38] = (int)(iVar1);
      iVar5 = (int)(iVar1);
      iVar8 = (int)(iVar1);
      iVar6 = (int)(iVar1);
      iStack_12c = (int)(iVar1);
      iStack_128 = (int)(iVar1);
    }
    else {
      iVar1 = (int)((int)param_3[0x20] * piStack_114[0x20] + (int)*param_3 * *piStack_114);
      iVar9 = (int)((int)*param_3 * *piStack_114 - (int)param_3[0x20] * piStack_114[0x20]);
      iVar5 = (int)((int)param_3[0x30] * piStack_114[0x30] + (int)param_3[0x10] * piStack_114[0x10]);
      iVar8 = (int)(iVar5 + iVar1);
      iVar1 = (int)(iVar1 - iVar5);
      iVar5 = (int)((((int)param_3[0x10] * piStack_114[0x10] - (int)param_3[0x30] * piStack_114[0x30]) *
               0x16a >> 8) - iVar5);
      iVar12 = (int)(iVar5 + iVar9);
      iVar9 = (int)(iVar9 - iVar5);
      iVar5 = (int)((int)param_3[0x28] * piStack_114[0x28] + (int)param_3[0x18] * piStack_114[0x18]);
      iVar10 = (int)((int)param_3[0x28] * piStack_114[0x28] - (int)param_3[0x18] * piStack_114[0x18]);
      iVar6 = (int)((int)param_3[0x38] * piStack_114[0x38] + (int)param_3[8] * piStack_114[8]);
      iVar7 = (int)((int)param_3[8] * piStack_114[8] - (int)param_3[0x38] * piStack_114[0x38]);
      iVar11 = (int)(iVar6 + iVar5);
      iVar2 = (int)((iVar7 + iVar10) * 0x1d9 >> 8);
      iVar10 = (int)(((iVar10 * -0x29d >> 8) - iVar11) + iVar2);
      iVar6 = (int)(((iVar6 - iVar5) * 0x16a >> 8) - iVar10);
      iStack_12c = (int)(iVar8 + iVar11);
      iVar2 = (int)(((iVar7 * 0x115 >> 8) - iVar2) + iVar6);
      piStack_124[0x38] = (int)(iVar8 - iVar11);
      iVar8 = (int)(iVar12 + iVar10);
      piStack_124[0x30] = (int)(iVar12 - iVar10);
      iStack_128 = (int)(iVar1 - iVar2);
      iVar5 = (int)(iVar9 - iVar6);
      iVar6 = (int)(iVar6 + iVar9);
      iVar1 = (int)(iVar1 + iVar2);
      iStack_110 = (int)(iVar6);
    }
    piStack_124[0x20] = (int)(iVar1);
    piStack_114 = (int *)(piStack_114 + 1);
    param_3 = (short *)(param_3 + 1);
    *piStack_124 = (int)(iStack_12c);
    piStack_124[8] = (int)(iVar8);
    piStack_124[0x10] = (int)(iVar6);
    piStack_124[0x28] = (int)(iVar5);
    piStack_124[0x18] = (int)(iStack_128);
    piStack_124 = (int *)(piStack_124 + 1);
    puStack_120 = (undefined1 *)((undefined1 *)((int)puStack_120 + -1));
  } while (0 < (int)puStack_120);
  piVar3 = (int *)(aiStack_104);
  iStack_128 = (int)(0);
  psStack_118 = (short *)(param_3);
  do {
    puStack_120 = (undefined1 *)((undefined1 *)(*(int *)(param_4 + iStack_128 * 4) + param_5));
    iStack_130 = (int)(piVar3[1]);
    if ((((iStack_130 == 0) && (piVar3[2] == 0)) &&
        ((piVar3[3] == 0 && (((piVar3[4] == 0 && (piVar3[5] == 0)) && (piVar3[6] == 0)))))) &&
       (piVar3[7] == 0)) {
      uVar4 = (undefined1)(*(undefined1 *)((*piVar3 >> 5 & 0x3ffU) + iStack_11c));
      *puStack_120 = (undefined1)(uVar4);
      puStack_120[1] = (undefined1)(uVar4);
      puStack_120[2] = (undefined1)(uVar4);
      puStack_120[4] = (undefined1)(uVar4);
      puStack_120[5] = (undefined1)(uVar4);
      puStack_120[6] = (undefined1)(uVar4);
      puStack_120[7] = (undefined1)(uVar4);
      iStack_130 = (int)(0);
    }
    else {
      iVar1 = (int)(*piVar3 + piVar3[4]);
      iVar12 = (int)(*piVar3 - piVar3[4]);
      iVar5 = (int)(piVar3[6] + piVar3[2]);
      iVar8 = (int)(iVar5 + iVar1);
      piStack_124 = (int *)((int *)(iVar1 - iVar5));
      iVar5 = (int)(((piVar3[2] - piVar3[6]) * 0x16a >> 8) - iVar5);
      iStack_110 = (int)(iVar5 + iVar12);
      psStack_118 = (short *)((short *)(iVar12 - iVar5));
      iVar1 = (int)(piVar3[5] + piVar3[3]);
      iVar11 = (int)(piVar3[5] - piVar3[3]);
      iVar5 = (int)(piVar3[7] + iStack_130);
      iStack_130 = (int)(iStack_130 - piVar3[7]);
      iVar12 = (int)(iVar5 + iVar1);
      iVar6 = (int)((iStack_130 + iVar11) * 0x1d9 >> 8);
      iVar11 = (int)(((iVar11 * -0x29d >> 8) - iVar12) + iVar6);
      iVar1 = (int)(((iVar5 - iVar1) * 0x16a >> 8) - iVar11);
      iStack_12c = (int)(((iStack_130 * 0x115 >> 8) - iVar6) + iVar1);
      *puStack_120 = (undefined1)(*(undefined1 *)((iVar12 + iVar8 >> 5 & 0x3ffU) + iStack_11c));
      puStack_120[7] = (undefined1)(*(undefined1 *)(iStack_11c + (iVar8 - iVar12 >> 5 & 0x3ffU)));
      puStack_120[1] = (undefined1)(*(undefined1 *)((iVar11 + iStack_110 >> 5 & 0x3ffU) + iStack_11c));
      puStack_120[6] = (undefined1)(*(undefined1 *)((iStack_110 - iVar11 >> 5 & 0x3ffU) + iStack_11c));
      puStack_120[2] = (undefined1)(*(undefined1 *)((iVar1 + (int)psStack_118 >> 5 & 0x3ffU) + iStack_11c));
      puStack_120[5] = (undefined1)(*(undefined1 *)(((int)psStack_118 - iVar1 >> 5 & 0x3ffU) + iStack_11c));
      puStack_120[4] = (undefined1)(*(undefined1 *)((iStack_12c + (int)piStack_124 >> 5 & 0x3ffU) + iStack_11c));
      uVar4 = (undefined1)(*(undefined1 *)(((int)piStack_124 - iStack_12c >> 5 & 0x3ffU) + iStack_11c));
    }
    puStack_120[3] = (undefined1)(uVar4);
    piVar3 = (int *)(piVar3 + 8);
    iStack_128 = (int)(iStack_128 + 1);
  } while (iStack_128 < 8);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 111bcf80; body size 21 bytes.
#line 1 "ENTRY_111bcf80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111bcf80(undefined4 param_2)
{
  int param_1 = (int )this;
  func_0x10087362(*(undefined4 *)(param_1 + 0x218),param_2);
  return;
}


// Reference entry 111bcfa0; body size 21 bytes.
#line 1 "ENTRY_111bcfa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111bcfa0(undefined4 param_2)
{
  int param_1 = (int )this;
  func_0x100319ee(*(undefined4 *)(param_1 + 0x218),param_2);
  return;
}


// Reference entry 111bd2f0; body size 116 bytes.
#line 1 "ENTRY_111bd2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111bd2f0(int param_1,undefined4 param_2,int param_3)

{
  undefined8 *puVar1;
  
  thunk_FUN_111bdc10(param_1,&DAT_119d25d0,5,"DTLS set connection timeout (%u, %u)",param_2,param_3)
  ;
  *(undefined4 *)(param_1 + 0x208) = 0xffffffff;
  puVar1 = (undefined8 *)((undefined8 *)(param_1 + 0x20c));
  *puVar1 = (undefined8)(0);
  (**(code **)(**(int **)(param_1 + 0x10) + 0x20))();
  if (param_3 != 0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x1c))(param_2);
    *(undefined4 *)(param_1 + 0x208) = 0;
    thunk_FUN_1145c930(puVar1,0);
    thunk_FUN_1145ad70(puVar1,param_3);
  }
  return;
}


// Reference entry 111bd5c0; body size 77 bytes.
#line 1 "ENTRY_111bd5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_111bd5c0(int param_1,void *param_2,uint param_3)

{
  if (0x5dcU - *(int *)(param_1 + 0x804) < param_3) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0xffff9600);
  }
  memcpy((void *)(*(int *)(param_1 + 0x804) + param_1 + 0x808),param_2,param_3);
  *(int *)(param_1 + 0x804) = *(int *)(param_1 + 0x804) + param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(param_3);
}


// Reference entry 111be890; body size 8 bytes.
#line 1 "ENTRY_111be890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111be890(void)

{
  thunk_FUN_111bd390(1);
  return;
}


// Reference entry 111bea80; body size 79 bytes.
#line 1 "ENTRY_111bea80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111bea80(int param_1)

{
  thunk_FUN_111bd390(0);
  if (*(int *)(param_1 + 0xc) != 0) {
    thunk_FUN_113bf660(*(int *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 0x218) != 0) {
    thunk_FUN_111bf100(*(int *)(param_1 + 0x218));
    *(undefined4 *)(param_1 + 0x218) = 0;
  }
  thunk_FUN_113daf30(param_1 + 0x148);
  return;
}


// Reference entry 111beaf0; body size 26 bytes.
#line 1 "ENTRY_111beaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_111beaf0(int param_2)
{
  int param_1 = (int )this;
  uint3 uVar1;
  
  uVar1 = (uint3)((uint3)((uint)*(int *)(param_1 + 0x10) >> 8));
  if (*(int *)(param_1 + 0x10) == param_2) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(((uint)(uVar1) << 8 | (uint)(1)));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((uint)uVar1 << 8);
}


// Reference entry 111c04c0; body size 50 bytes.
#line 1 "ENTRY_111c04c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_111c04c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)((uint *)thunk_FUN_101a6c80(param_1,param_2,param_3,0,param_4));
  iVar2 = (int)(__stdio_common_vsprintf(*puVar1 | 2,puVar1[1]));
  if (iVar2 < 0) {
    iVar2 = (int)(-1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar2);
}


// Reference entry 111c0550; body size 57 bytes.
#line 1 "ENTRY_111c0550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111c0550(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11240560(param_2,param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpImpl);
  *(undefined2 *)(param_1 + 0x17) = 1000;
  param_1[0x15] = (undefined4)(0);
  param_1[0x16] = (undefined4)(0xffffffff);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111c20f0; body size 11 bytes.
#line 1 "ENTRY_111c20f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111c20f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111c2100; body size 18 bytes.
#line 1 "ENTRY_111c2100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111c2100(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111c2130; body size 72 bytes.
#line 1 "ENTRY_111c2130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::FUN_111c2130(char *param_2,undefined2 *param_3)
{
  undefined1 *param_1 = (undefined1 *)this;
  char cVar1;
  char *pcVar2;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (undefined1)(0);
  pcVar2 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  thunk_FUN_1012d130(param_2,(int)pcVar2 - (int)(param_2 + 1));
  *(undefined2 *)(param_1 + 0x18) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(param_1);
}


// Reference entry 111c2190; body size 18 bytes.
#line 1 "ENTRY_111c2190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111c2190(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111c22a0; body size 11 bytes.
#line 1 "ENTRY_111c22a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111c22a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111c2380; body size 110 bytes.
#line 1 "ENTRY_111c2380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_111c2380(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)(param_2);
  if (0xf < (uint)param_2[5]) {
    puVar1 = (undefined4 *)((undefined4 *)*param_2);
  }
  puVar3 = (undefined4 *)(param_1);
  if (0xf < (uint)param_1[5]) {
    puVar3 = (undefined4 *)((undefined4 *)*param_1);
  }
  iVar2 = (int)(thunk_FUN_102bce30(puVar3,param_1[4],puVar1,param_2[4]));
  if (-1 < iVar2) {
    puVar1 = (undefined4 *)(param_1);
    if (0xf < (uint)param_1[5]) {
      puVar1 = (undefined4 *)((undefined4 *)*param_1);
    }
    puVar3 = (undefined4 *)(param_2);
    if (0xf < (uint)param_2[5]) {
      puVar3 = (undefined4 *)((undefined4 *)*param_2);
    }
    iVar2 = (int)(thunk_FUN_102bce30(puVar3,param_2[4],puVar1,param_1[4]));
    if ((iVar2 < 0) || (*(ushort *)(param_2 + 6) <= *(ushort *)(param_1 + 6))) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
}


// Reference entry 111c2420; body size 25 bytes.
#line 1 "ENTRY_111c2420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111c2420(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x2c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 111c2ab0; body size 91 bytes.
#line 1 "ENTRY_111c2ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111c2ab0(undefined4 param_1,int param_2)

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
  thunk_FUN_1148a50e(param_2,0x2c);
  return;
}


// Reference entry 111c2b40; body size 37 bytes.
#line 1 "ENTRY_111c2b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_111c2b40(int param_1,undefined4 param_2)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar1 = (char)(thunk_FUN_111c3d40(param_2,param_1 + 0x10));
    if (cVar1 == '\0') {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 111c2bd0; body size 29 bytes.
#line 1 "ENTRY_111c2bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111c2bd0(undefined4 param_1,int param_2,int param_3)

{
  thunk_FUN_10118c40(param_3);
  *(undefined2 *)(param_2 + 0x18) = *(undefined2 *)(param_3 + 0x18);
  return;
}


// Reference entry 111c3020; body size 11 bytes.
#line 1 "ENTRY_111c3020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111c3020(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111c30b0; body size 11 bytes.
#line 1 "ENTRY_111c30b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111c30b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111c3110; body size 35 bytes.
#line 1 "ENTRY_111c3110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_111c3110(int param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10118c40(param_2);
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 111c3930; body size 34 bytes.
#line 1 "ENTRY_111c3930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111c3930(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSocketTxn);
  param_1[2] = (undefined4)(0);
  thunk_FUN_11286490();
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111c3aa0; body size 27 bytes.
#line 1 "ENTRY_111c3aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111c3aa0(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  if (iVar1 != 0) {
    thunk_FUN_1124d790();
    thunk_FUN_1148a50e(iVar1,0x20);
  }
  return;
}


// Reference entry 111c3d10; body size 31 bytes.
#line 1 "ENTRY_111c3d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_111c3d10(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_1124d790();
    thunk_FUN_1148a50e(param_1,0x20);
  }
  return;
}


// Reference entry 111c4330; body size 31 bytes.
#line 1 "ENTRY_111c4330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111c4330(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x2c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 111c4750; body size 30 bytes.
#line 1 "ENTRY_111c4750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_111c4750(int param_1)

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
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 111c49c0; body size 87 bytes.
#line 1 "ENTRY_111c49c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_111c49c0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x5d1745e) {
    param_1 = (uint)(param_1 * 0x2c);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 111c4ae0; body size 52 bytes.
#line 1 "ENTRY_111c4ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111c4ae0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x2c);
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


// Reference entry 111c4b30; body size 55 bytes.
#line 1 "ENTRY_111c4b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_111c4b30(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x2c);
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


// Reference entry 111c4cf0; body size 8 bytes.
#line 1 "ENTRY_111c4cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_111c4cf0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x414));
}


// Reference entry 111c4d20; body size 8 bytes.
#line 1 "ENTRY_111c4d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_111c4d20(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x430));
}


// Reference entry 111c5100; body size 8 bytes.
#line 1 "ENTRY_111c5100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 __fastcall FUN_111c5100(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2)(*(undefined2 *)(param_1 + 0x42c));
}


// Reference entry 111c5670; body size 351 bytes.
#line 1 "ENTRY_111c5670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111c5670(char *param_2,int param_3)
{
  int param_1 = (int )this;
  int iVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    return;
  }
  do {
    uVar2 = (uint)(*(uint *)(param_1 + 0x2798));
    if (*(char *)(param_1 + 0x27a0) == '\0') {
      if (uVar2 < 0x400) {
        *(char *)(uVar2 + 0x2398 + param_1) = *param_2;
        *(int *)(param_1 + 0x2798) = *(int *)(param_1 + 0x2798) + 1;
        uVar2 = (uint)(*(uint *)(param_1 + 0x2798));
      }
      if (*param_2 == '\n') {
        *(uint *)(param_1 + 0x2798) = uVar2 - 1;
        *(undefined1 *)(uVar2 + 0x2397 + param_1) = 0;
        iVar1 = (int)(*(int *)(param_1 + 0x2798));
        if ((iVar1 != 0) && (*(char *)(iVar1 + 0x2397 + param_1) == '\r')) {
          *(int *)(param_1 + 0x2798) = iVar1 + -1;
          *(undefined1 *)(iVar1 + 0x2397 + param_1) = 0;
        }
        if (*(int *)(param_1 + 0x2394) == 0) {
          iVar1 = (int)(strncmp((char *)(param_1 + 0x2398),"HTTP/1.0",8));
          if ((iVar1 != 0) && (iVar1 = strncmp((char *)(param_1 + 0x2398),"HTTP/1.1",8), iVar1 != 0)
             ) {
            *(undefined4 *)(param_1 + 4) = 0xffffffff;
            return;
          }
        }
        else if (*(int *)(param_1 + 0x2798) == 0) {
          *(undefined1 *)(param_1 + 0x27a0) = 1;
        }
        else {
          iVar1 = (int)(thunk_FUN_113b9f60(param_1 + 0x2398,"Content-Length:",0xf));
          if (iVar1 == 0) {
            iVar1 = (int)(atoi((char *)(param_1 + 0x23a7)));
            *(int *)(param_1 + 0x279c) = iVar1;
          }
        }
        *(int *)(param_1 + 0x2394) = *(int *)(param_1 + 0x2394) + 1;
        *(undefined4 *)(param_1 + 0x2798) = 0;
      }
    }
    else if ((uVar2 < 0x400) && (uVar2 < *(uint *)(param_1 + 0x279c))) {
      *(char *)(uVar2 + 0x2398 + param_1) = *param_2;
      *(int *)(param_1 + 0x2798) = *(int *)(param_1 + 0x2798) + 1;
    }
    param_2 = (char *)(param_2 + 1);
    param_3 = (int)(param_3 + -1);
    if (param_3 == 0) {
      return;
    }
  } while( true );
}


// Reference entry 111c5ed0; body size 35 bytes.
#line 1 "ENTRY_111c5ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111c5ed0(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  *param_1 = (int)(param_2);
  if (iVar1 != 0) {
    thunk_FUN_1124d790();
    thunk_FUN_1148a50e(iVar1,0x20);
  }
  return;
}


// Reference entry 111c6d10; body size 18 bytes.
#line 1 "ENTRY_111c6d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111c6d10(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111c6d70; body size 67 bytes.
#line 1 "ENTRY_111c6d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_111c6d70(undefined4 param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  thunk_FUN_10118c40(param_2);
  uVar1 = (undefined4)(param_3[1]);
  uVar2 = (undefined4)(param_3[2]);
  uVar3 = (undefined4)(param_3[3]);
  *(undefined4 *)(param_1 + 0x18) = *param_3;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  uVar1 = (undefined4)(param_3[5]);
  uVar2 = (undefined4)(param_3[6]);
  uVar3 = (undefined4)(param_3[7]);
  *(undefined4 *)(param_1 + 0x28) = param_3[4];
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  uVar1 = (undefined4)(param_3[9]);
  uVar2 = (undefined4)(param_3[10]);
  uVar3 = (undefined4)(param_3[0xb]);
  *(undefined4 *)(param_1 + 0x38) = param_3[8];
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_3 + 0xc);
  *(undefined4 *)(param_1 + 0x50) = param_3[0xe];
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 111c6dd0; body size 35 bytes.
#line 1 "ENTRY_111c6dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111c6dd0(undefined4 *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  thunk_FUN_10118c40(param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111c6e20; body size 18 bytes.
#line 1 "ENTRY_111c6e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111c6e20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111c7190; body size 18 bytes.
#line 1 "ENTRY_111c7190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111c7190(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111c71b0; body size 25 bytes.
#line 1 "ENTRY_111c71b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111c71b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111c71d0; body size 25 bytes.
#line 1 "ENTRY_111c71d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111c71d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111c71f0; body size 18 bytes.
#line 1 "ENTRY_111c71f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111c71f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111c7210; body size 25 bytes.
#line 1 "ENTRY_111c7210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111c7210(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111c7230; body size 25 bytes.
#line 1 "ENTRY_111c7230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111c7230(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111c7250; body size 18 bytes.
#line 1 "ENTRY_111c7250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111c7250(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111c7270; body size 25 bytes.
#line 1 "ENTRY_111c7270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111c7270(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111c7290; body size 25 bytes.
#line 1 "ENTRY_111c7290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111c7290(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111c72b0; body size 31 bytes.
#line 1 "ENTRY_111c72b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_111c72b0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  thunk_FUN_10118c40(param_3);
  *(undefined4 *)(param_1 + 0x18) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 111c72e0; body size 49 bytes.
#line 1 "ENTRY_111c72e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_111c72e0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  thunk_FUN_10118c40(param_3);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 111c73a0; body size 5 bytes.
#line 1 "ENTRY_111c73a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_111c73a0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 111c73b0; body size 5 bytes.
#line 1 "ENTRY_111c73b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_111c73b0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 111c7480; body size 5 bytes.
#line 1 "ENTRY_111c7480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_111c7480(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 111c7490; body size 5 bytes.
#line 1 "ENTRY_111c7490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_111c7490(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 111c74a0; body size 5 bytes.
#line 1 "ENTRY_111c74a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_111c74a0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 111c74b0; body size 5 bytes.
#line 1 "ENTRY_111c74b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_111c74b0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 111c76a0; body size 33 bytes.
#line 1 "ENTRY_111c76a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_111c76a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10118c40(*param_2);
  *(undefined4 *)(param_1 + 0x18) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 111c76d0; body size 51 bytes.
#line 1 "ENTRY_111c76d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_111c76d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10118c40(*param_2);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 111c7740; body size 29 bytes.
#line 1 "ENTRY_111c7740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111c7740(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  thunk_FUN_104086f0(param_2 + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111c77a0; body size 25 bytes.
#line 1 "ENTRY_111c77a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111c77a0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x44));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 111c7d70; body size 127 bytes.
#line 1 "ENTRY_111c7d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_111c7d70(int *param_2,undefined4 *param_3)
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
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_2);
}


// Reference entry 111c7ff0; body size 40 bytes.
#line 1 "ENTRY_111c7ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111c7ff0(undefined4 param_1,int param_2)

{
  if (0x1f < (param_2 - (int)*(void **)(param_2 + -4)) - 4U) {
                    
                    
                    
    _invalid_parameter_noinfo_noreturn();
    return;
  }
  free(*(void **)(param_2 + -4));
  return;
}


// Reference entry 111c8150; body size 50 bytes.
#line 1 "ENTRY_111c8150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111c8150(undefined4 param_1,int param_2)

{
  thunk_FUN_111d35e0();
  if (0x1f < (param_2 - (int)*(void **)(param_2 + -4)) - 4U) {
                    
    _invalid_parameter_noinfo_noreturn();
  }
  free(*(void **)(param_2 + -4));
  return;
}


// Reference entry 111c8190; body size 26 bytes.
#line 1 "ENTRY_111c8190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111c8190(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_111d34c0();
  thunk_FUN_1148a50e(param_2,0x44);
  return;
}


// Reference entry 111c81b0; body size 22 bytes.
#line 1 "ENTRY_111c81b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_111c81b0(uint param_1)

{
  undefined1 auStack_c [12];
  
  if (param_1 < 0xa6f88) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 * 0x1888);
  }
  thunk_FUN_1011bdc0();
                    
  _CxxThrowException(auStack_c,(ThrowInfo *)&DAT_11d330dc);
}


// Reference entry 111c81d0; body size 27 bytes.
#line 1 "ENTRY_111c81d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_111c81d0(uint param_1)

{
  undefined1 auStack_c [12];
  
  if (param_1 < 0x3c3c3c4) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 * 0x44);
  }
  thunk_FUN_1011bdc0();
                    
  _CxxThrowException(auStack_c,(ThrowInfo *)&DAT_11d330dc);
}


// Reference entry 111c8200; body size 19 bytes.
#line 1 "ENTRY_111c8200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_111c8200(uint param_1)

{
  undefined1 auStack_c [12];
  
  if (param_1 < 0x2c8590c) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 * 0x5c);
  }
  thunk_FUN_1011bdc0();
                    
  _CxxThrowException(auStack_c,(ThrowInfo *)&DAT_11d330dc);
}


// Reference entry 111c8290; body size 68 bytes.
#line 1 "ENTRY_111c8290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_111c8290(int param_1,undefined4 *param_2)

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
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 111c8d50; body size 27 bytes.
#line 1 "ENTRY_111c8d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111c8d50(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  thunk_FUN_10118c40(*param_4);
  *(undefined4 *)(param_2 + 0x18) = 0;
  return;
}


// Reference entry 111c8d80; body size 45 bytes.
#line 1 "ENTRY_111c8d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111c8d80(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  thunk_FUN_10118c40(*param_4);
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 0x30) = 0xf;
  *(undefined1 *)(param_2 + 0x1c) = 0;
  return;
}


// Reference entry 111c8dc0; body size 61 bytes.
#line 1 "ENTRY_111c8dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111c8dc0(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  thunk_FUN_10118c40(param_3);
  uVar1 = (undefined4)(*(undefined4 *)(param_3 + 0x1c));
  uVar2 = (undefined4)(*(undefined4 *)(param_3 + 0x20));
  uVar3 = (undefined4)(*(undefined4 *)(param_3 + 0x24));
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
  *(undefined4 *)(param_2 + 0x1c) = uVar1;
  *(undefined4 *)(param_2 + 0x20) = uVar2;
  *(undefined4 *)(param_2 + 0x24) = uVar3;
  uVar1 = (undefined4)(*(undefined4 *)(param_3 + 0x2c));
  uVar2 = (undefined4)(*(undefined4 *)(param_3 + 0x30));
  uVar3 = (undefined4)(*(undefined4 *)(param_3 + 0x34));
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0x28);
  *(undefined4 *)(param_2 + 0x2c) = uVar1;
  *(undefined4 *)(param_2 + 0x30) = uVar2;
  *(undefined4 *)(param_2 + 0x34) = uVar3;
  uVar1 = (undefined4)(*(undefined4 *)(param_3 + 0x3c));
  uVar2 = (undefined4)(*(undefined4 *)(param_3 + 0x40));
  uVar3 = (undefined4)(*(undefined4 *)(param_3 + 0x44));
  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_3 + 0x38);
  *(undefined4 *)(param_2 + 0x3c) = uVar1;
  *(undefined4 *)(param_2 + 0x40) = uVar2;
  *(undefined4 *)(param_2 + 0x44) = uVar3;
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
  *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_3 + 0x50);
  return;
}


// Reference entry 111c9560; body size 94 bytes.
#line 1 "ENTRY_111c9560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111c9560(int *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined1 auStack_8 [8];
  
  puVar5 = (undefined4 *)(param_3);
  if (0xf < (uint)param_3[5]) {
    puVar5 = (undefined4 *)((undefined4 *)*param_3);
  }
  uVar3 = (uint)(0);
  uVar4 = (uint)(0x811c9dc5);
  if (param_3[4] != 0) {
    do {
      pbVar1 = (byte *)((byte *)(uVar3 + (int)puVar5));
      uVar3 = (uint)(uVar3 + 1);
      uVar4 = (uint)((*pbVar1 ^ uVar4) * 0x1000193);
    } while (uVar3 < (uint)param_3[4]);
  }
  iVar2 = (int)(thunk_FUN_111c7b30(auStack_8,param_3,uVar4));
  iVar2 = (int)(*(int *)(iVar2 + 4));
  if (iVar2 == 0) {
    iVar2 = (int)(*(int *)(param_1 + 4));
  }
  *param_2 = (int)(iVar2);
  return;
}


// Reference entry 111c9860; body size 30 bytes.
#line 1 "ENTRY_111c9860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111c9860(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 111c9890; body size 30 bytes.
#line 1 "ENTRY_111c9890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111c9890(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 111c98c0; body size 30 bytes.
#line 1 "ENTRY_111c98c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111c98c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 111c98f0; body size 28 bytes.
#line 1 "ENTRY_111c98f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111c98f0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111c9b60; body size 28 bytes.
#line 1 "ENTRY_111c9b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111c9b60(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111c9b90; body size 28 bytes.
#line 1 "ENTRY_111c9b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111c9b90(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111c9ed0; body size 11 bytes.
#line 1 "ENTRY_111c9ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111c9ed0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111c9ee0; body size 11 bytes.
#line 1 "ENTRY_111c9ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111c9ee0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111c9ef0; body size 11 bytes.
#line 1 "ENTRY_111c9ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111c9ef0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111c9f00; body size 11 bytes.
#line 1 "ENTRY_111c9f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111c9f00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111c9f10; body size 11 bytes.
#line 1 "ENTRY_111c9f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111c9f10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111c9f20; body size 11 bytes.
#line 1 "ENTRY_111c9f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111c9f20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111c9f30; body size 11 bytes.
#line 1 "ENTRY_111c9f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111c9f30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111c9f40; body size 11 bytes.
#line 1 "ENTRY_111c9f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111c9f40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111ca070; body size 11 bytes.
#line 1 "ENTRY_111ca070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111ca070(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111ca080; body size 11 bytes.
#line 1 "ENTRY_111ca080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111ca080(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111ca290; body size 52 bytes.
#line 1 "ENTRY_111ca290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111ca290(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x44));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111ca2e0; body size 67 bytes.
#line 1 "ENTRY_111ca2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_111ca2e0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  thunk_FUN_10118c40(param_2);
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0x1c));
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0x20));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 0x24));
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0x2c));
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0x30));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 0x34));
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0x3c));
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0x40));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 0x44));
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 111ca340; body size 35 bytes.
#line 1 "ENTRY_111ca340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111ca340(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  thunk_FUN_10118c40(param_2 + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111ca620; body size 43 bytes.
#line 1 "ENTRY_111ca620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111ca620(undefined1 *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11202480();
  param_1[2] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCDAlbumArtCallback);
  param_1[1] = (undefined4)(param_2);
  *param_2 = (undefined1)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111ca660; body size 43 bytes.
#line 1 "ENTRY_111ca660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111ca660(undefined1 *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11202480();
  param_1[2] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCDAlbumIdCallback);
  param_1[1] = (undefined4)(param_2);
  *param_2 = (undefined1)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111ca6a0; body size 43 bytes.
#line 1 "ENTRY_111ca6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111ca6a0(undefined1 *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11202480();
  param_1[2] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCDMimeTypeCallback);
  param_1[1] = (undefined4)(param_2);
  *param_2 = (undefined1)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111ca7d0; body size 43 bytes.
#line 1 "ENTRY_111ca7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111ca7d0(undefined1 *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11202480();
  param_1[2] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCDTitleCallback);
  param_1[1] = (undefined4)(param_2);
  *param_2 = (undefined1)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111cacc0; body size 31 bytes.
#line 1 "ENTRY_111cacc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111cacc0(undefined4 *param_1)

{
  thunk_FUN_11261e50();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCPValidateOperation);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RCPValidateOperation);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111cacf0; body size 73 bytes.
#line 1 "ENTRY_111cacf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111cacf0(undefined4 param_2,undefined4 *param_3,int param_4,
            undefined4 param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_1124dd60();
  param_1[1] = (undefined4)(param_2);
  param_1[4] = (undefined4)(param_5);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RContentKeyParam);
  param_1[2] = (undefined4)(param_3);
  param_1[3] = (undefined4)(param_4);
  *(undefined2 *)(param_1 + 5) = 1;
  if (param_4 == 0) {
    param_1[4] = (undefined4)(0);
  }
  *param_3 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111cad50; body size 124 bytes.
#line 1 "ENTRY_111cad50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111cad50(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  char cVar1;
  char *pcVar2;
  
  thunk_FUN_1124dd60();
  pcVar2 = (char *)((char *)(param_1 + 1));
  *param_1 = (undefined4)((uint)&ghidra_vftable_RContentKeysParam);
  thunk_FUN_1106a8d0(pcVar2,param_2,0x401);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  param_1[0x102] = (undefined4)((int)pcVar2 - ((int)param_1 + 5));
  param_1[0x103] = (undefined4)(param_3);
  *(undefined2 *)(param_1 + 0x104) = 0;
  *(undefined1 *)((int)param_1 + 0x412) = 0;
  param_1[0x109] = (undefined4)(0);
  param_1[0x10a] = (undefined4)(0xf);
  *(undefined1 *)(param_1 + 0x105) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111caeb0; body size 117 bytes.
#line 1 "ENTRY_111caeb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111caeb0(undefined4 param_2,int param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  char cVar1;
  char *pcVar2;
  
  thunk_FUN_1124dd60();
  pcVar2 = (char *)((char *)(param_1 + 1));
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpHeadersParam);
  thunk_FUN_1106a8d0(pcVar2,param_2,0x401);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  param_1[0x102] = (undefined4)((int)pcVar2 - ((int)param_1 + 5));
  param_1[0x103] = (undefined4)(param_3);
  param_1[0x104] = (undefined4)(param_4);
  *(undefined2 *)(param_1 + 0x105) = 0;
  if (param_3 != 0) {
    *(undefined1 *)(param_3 + 1) = 0;
    *(undefined1 *)param_1[0x103] = (undefined4)(0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111caf50; body size 53 bytes.
#line 1 "ENTRY_111caf50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __thiscall Recovered_Bulk::FUN_111caf50(undefined4 param_2)
{
  char *param_1 = (char *)this;
  char cVar1;
  char *pcVar2;
  
  thunk_FUN_1106a8d0(param_1,param_2,0x401);
  pcVar2 = (char *)(param_1);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  *(int *)(param_1 + 0x404) = (int)pcVar2 - (int)(param_1 + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)(param_1);
}


// Reference entry 111cb750; body size 71 bytes.
#line 1 "ENTRY_111cb750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111cb750(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8,
            undefined4 param_9)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  param_1[2] = (undefined4)(param_4);
  param_1[4] = (undefined4)(param_6);
  *(undefined1 *)(param_1 + 6) = param_8;
  param_1[7] = (undefined4)(param_9);
  param_1[3] = (undefined4)(param_5);
  param_1[5] = (undefined4)(param_7);
  param_1[8] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111cb7b0; body size 67 bytes.
#line 1 "ENTRY_111cb7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111cb7b0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6,undefined4 param_7)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  param_1[4] = (undefined4)(param_4);
  *(undefined1 *)(param_1 + 6) = param_6;
  param_1[8] = (undefined4)(param_7);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[5] = (undefined4)(param_5);
  param_1[7] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111cc510; body size 180 bytes.
#line 1 "ENTRY_111cc510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111cc510(undefined4 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosContentProviderMediaSessions);
  param_1[1] = (undefined4)(1);
  thunk_FUN_111ca460();
  puVar1 = (undefined4 *)(param_1 + 2);
  thunk_FUN_112a9cf0(puVar1);
  cVar2 = (char)(thunk_FUN_112a7f50(puVar1));
  param_1[1] = (undefined4)(3);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)((int)param_1 + 0x821) = 0;
  param_1[0x309] = (undefined4)(0);
  param_1[0x30a] = (undefined4)(0);
  param_1[0x30b] = (undefined4)(0);
  param_1[0x30c] = (undefined4)(0);
  *(undefined1 *)(param_1 + 0x30d) = 0;
  *(undefined1 *)((int)param_1 + 0x1435) = 0;
  if (cVar2 != '\0') {
    thunk_FUN_112a8010(puVar1);
  }
  param_1[0x60e] = (undefined4)(0);
  param_1[0x60f] = (undefined4)(0);
  param_1[0x610] = (undefined4)(0);
  param_1[0x611] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111cf8e0; body size 169 bytes.
#line 1 "ENTRY_111cf8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111cf8e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_11283280(param_1 + 0x35f4,0x80));
  thunk_FUN_111c0760(uVar1,"http://www.sonos.com/Services/1.1","getSessionId",0,40000,20000,1,
                     param_1 + 0x3655);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosGetUserIdOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RSonosGetUserIdOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RSonosGetUserIdOp);
  *(undefined1 *)((int)param_1 + 0xd951) = 0;
  param_1[0x3655] = (undefined4)((uint)&ghidra_vftable_RSonosCPFaultHandler);
  param_1[0x3656] = (undefined4)(0);
  *(undefined1 *)(param_1 + 0x3657) = 0;
  *(undefined1 *)(param_1 + 0x365f) = 0;
  *(undefined1 *)((int)param_1 + 0xe17d) = 0;
  *(undefined1 *)(param_1 + 0x3a60) = 0;
  *(undefined1 *)((int)param_1 + 0xe999) = 0;
  param_1[0x3a77] = (undefined4)(0);
  *(undefined1 *)(param_1 + 0x3a78) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111cf9c0; body size 148 bytes.
#line 1 "ENTRY_111cf9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111cf9c0(undefined4 *param_1)

{
  thunk_FUN_111c0760(&DAT_122e8b78,"urn:schemas-upnp-org:service:MusicServices:1","GetSessionId",
                     &DAT_122e8cf8,40000,20000,1,param_1 + 0x3655);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosGetUserIdOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RSonosGetUserIdOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RSonosGetUserIdOp);
  *(undefined1 *)((int)param_1 + 0xd951) = 0;
  param_1[0x3655] = (undefined4)((uint)&ghidra_vftable_RSonosCPFaultHandler);
  param_1[0x3656] = (undefined4)(0);
  *(undefined1 *)(param_1 + 0x3657) = 0;
  *(undefined1 *)(param_1 + 0x365f) = 0;
  *(undefined1 *)((int)param_1 + 0xe17d) = 0;
  *(undefined1 *)(param_1 + 0x3a60) = 0;
  *(undefined1 *)((int)param_1 + 0xe999) = 0;
  param_1[0x3a77] = (undefined4)(0);
  *(undefined1 *)(param_1 + 0x3a78) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111d10d0; body size 59 bytes.
#line 1 "ENTRY_111d10d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111d10d0(undefined4 param_2,char *param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  char *pcVar1;
  
  thunk_FUN_111d0010(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosRelatedInfoParam);
  param_1[0x525] = (undefined4)(param_4);
  pcVar1 = (char *)(_strdup(param_3));
  param_1[0x524] = (undefined4)(pcVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111d1120; body size 126 bytes.
#line 1 "ENTRY_111d1120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111d1120(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111d0010(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosRelatedPlayParam);
  *(undefined1 *)((int)param_1 + 0x1611) = 1;
  param_1[0x585] = (undefined4)(0);
  *(undefined1 *)(param_1 + 0x587) = 0;
  param_1[0x62a] = (undefined4)(0);
  thunk_FUN_111e7a30(param_3);
  param_1[0x62b] = (undefined4)(param_4);
  param_1[0x62c] = (undefined4)(param_5);
  param_1[0x62e] = (undefined4)(param_6);
  param_1[0x62d] = (undefined4)(8);
  *(undefined1 *)(param_1 + 0x524) = 0;
  *(undefined1 *)((int)param_1 + 0x1591) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111d2320; body size 82 bytes.
#line 1 "ENTRY_111d2320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111d2320(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111d0010(param_2);
  param_1[0x524] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosSegmentMetadataParam);
  param_1[0xe69] = (undefined4)(0);
  param_1[0xe6a] = (undefined4)(0);
  param_1[0xe6b] = (undefined4)(0);
  param_1[0xe6c] = (undefined4)(0);
  *(undefined1 *)(param_1 + 0xe6d) = 0;
  param_1[0xe68] = (undefined4)((uint)&ghidra_vftable_RDateTime);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111d2a00; body size 61 bytes.
#line 1 "ENTRY_111d2a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111d2a00(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111d0010(param_2);
  param_1[0x57d] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosUserInfoParam);
  *(undefined1 *)(param_1 + 0x524) = 0;
  *(undefined1 *)((int)param_1 + 0x1591) = 0;
  *(undefined1 *)((int)param_1 + 0x15d2) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111d2d30; body size 59 bytes.
#line 1 "ENTRY_111d2d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111d2d30(undefined1 *param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11202480();
  param_1[2] = (undefined4)(param_3);
  param_1[3] = (undefined4)(param_4);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RTrackPositionCallback);
  param_1[1] = (undefined4)(param_2);
  *param_2 = (undefined1)(0);
  *(undefined4 *)param_1[3] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111d36e0; body size 5 bytes.
#line 1 "ENTRY_111d36e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111d36e0(void)

{
  FUN_111d2f40();
  return;
}


// Reference entry 111d3700; body size 5 bytes.
#line 1 "ENTRY_111d3700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111d3700(void)

{
  FUN_111d3040();
  return;
}


// Reference entry 111d3e10; body size 14 bytes.
#line 1 "ENTRY_111d3e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111d3e10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosContentProviderImpl);
  return;
}


// Reference entry 111d3e70; body size 14 bytes.
#line 1 "ENTRY_111d3e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111d3e70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosContentProviderImpl);
  return;
}


// Reference entry 111d46c0; body size 15 bytes.
#line 1 "ENTRY_111d46c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111d46c0(undefined4 *param_1)

{
  param_1[0x3655] = (undefined4)((uint)&ghidra_vftable_RSOAPFaultHandler);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  if ((undefined4 *)param_1[0x2a5e] != (undefined4 *)0x0) {
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


// Reference entry 111d4e20; body size 98 bytes.
#line 1 "ENTRY_111d4e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111d4e20(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piStack_4;
  
  iVar2 = (int)(*param_1);
  if ((iVar2 != 0) && (*(uint *)(iVar2 + 8) != 0)) {
    piVar1 = (int *)((int *)(iVar2 + 4));
    piStack_4 = (int *)(param_1);
    if (*(uint *)(iVar2 + 8) < *(uint *)(iVar2 + 0x1c) >> 3) {
      func_0x10047ea6(*(undefined4 *)*piVar1,(undefined4 *)*piVar1);
      return;
    }
    thunk_FUN_111c7e10(piVar1,*piVar1);
    *(int *)*piVar1 = (int)(*piVar1);
    *(int *)(*piVar1 + 4) = *piVar1;
    *(undefined4 *)(iVar2 + 8) = 0;
    piStack_4 = (int *)((int *)*piVar1);
    thunk_FUN_111c93e0(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),&piStack_4);
  }
  return;
}


// Reference entry 111d4ea0; body size 11 bytes.
#line 1 "ENTRY_111d4ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111d4ea0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iStack_4;
  
  iVar2 = (int)(*param_1);
  if (iVar2 == 0) {
    return;
  }
  if (*(uint *)(iVar2 + 8) != 0) {
    piVar1 = (int *)((int *)(iVar2 + 4));
    iStack_4 = (int)(iVar2);
    if (*(uint *)(iVar2 + 8) < *(uint *)(iVar2 + 0x1c) >> 3) {
      thunk_FUN_111da060(*(undefined4 *)*piVar1,(undefined4 *)*piVar1);
      return;
    }
    thunk_FUN_111c7eb0(piVar1,*piVar1);
    *(int *)*piVar1 = (int)(*piVar1);
    *(int *)(*piVar1 + 4) = *piVar1;
    *(undefined4 *)(iVar2 + 8) = 0;
    iStack_4 = (int)(*piVar1);
    thunk_FUN_111c9460(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),&iStack_4);
  }
  return;
}


// Reference entry 111d4eb0; body size 98 bytes.
#line 1 "ENTRY_111d4eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111d4eb0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piStack_4;
  
  iVar2 = (int)(*param_1);
  if ((iVar2 != 0) && (*(uint *)(iVar2 + 8) != 0)) {
    piVar1 = (int *)((int *)(iVar2 + 4));
    piStack_4 = (int *)(param_1);
    if (*(uint *)(iVar2 + 8) < *(uint *)(iVar2 + 0x1c) >> 3) {
      func_0x10070f4a(*(undefined4 *)*piVar1,(undefined4 *)*piVar1);
      return;
    }
    thunk_FUN_111c7f50(piVar1,*piVar1);
    *(int *)*piVar1 = (int)(*piVar1);
    *(int *)(*piVar1 + 4) = *piVar1;
    *(undefined4 *)(iVar2 + 8) = 0;
    piStack_4 = (int *)((int *)*piVar1);
    thunk_FUN_111c94e0(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),&piStack_4);
  }
  return;
}


// Reference entry 111d50d0; body size 16 bytes.
#line 1 "ENTRY_111d50d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_111d50d0(undefined4 param_1,undefined4 param_2)

{
  func_0x10060406(param_1,param_2);
  return;
}


// Reference entry 111d50f0; body size 5 bytes.
#line 1 "ENTRY_111d50f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111d50f0(char param_2)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_118872c0);
  *(undefined4 *)(param_1 + 8) = 0;
  *(char *)(param_1 + 0x10) = param_2;
  if (param_2 != '\0') {
    puVar1 = (undefined1 *)(&DAT_11881128);
  }
  thunk_FUN_1145c250(param_1 + 0x38,puVar1,0x18);
  return;
}


// Reference entry 111d5200; body size 12 bytes.
#line 1 "ENTRY_111d5200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_111d5200(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*(char *)(*param_1 + 0xd) == '\0')));
}


// Reference entry 111d7a70; body size 66 bytes.
#line 1 "ENTRY_111d7a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_111d7a70(char *param_1,char *param_2)

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
    if ((param_1[(int)pcVar3 - (int)(param_2 + 1)] == '#') ||
       (param_1[(int)pcVar3 - (int)(param_2 + 1)] == '\0')) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 111d7ad0; body size 31 bytes.
#line 1 "ENTRY_111d7ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111d7ad0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x44));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 111d7b40; body size 45 bytes.
#line 1 "ENTRY_111d7b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111d7b40(uint *param_1)

{
  void *pvVar1;
  uint uVar2;
  
  pvVar1 = (void *)(operator_new(0x18ab));
  if (pvVar1 != (void *)0x0) {
    uVar2 = (uint)((int)pvVar1 + 0x23U & 0xffffffe0);
    *(void **)(uVar2 - 4) = pvVar1;
    *(uint *)uVar2 = (uint)(uVar2);
    *(uint *)(uVar2 + 4) = uVar2;
    *param_1 = (uint)(uVar2);
    return;
  }
                    
  _invalid_parameter_noinfo_noreturn();
}


// Reference entry 111d80b0; body size 66 bytes.
#line 1 "ENTRY_111d80b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_111d80b0(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) +
                 (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 <= fVar1 && fVar1 != *param_1);
}


// Reference entry 111d8110; body size 66 bytes.
#line 1 "ENTRY_111d8110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_111d8110(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) +
                 (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 <= fVar1 && fVar1 != *param_1);
}


// Reference entry 111d8170; body size 66 bytes.
#line 1 "ENTRY_111d8170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_111d8170(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) +
                 (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 <= fVar1 && fVar1 != *param_1);
}


// Reference entry 111d83e0; body size 54 bytes.
#line 1 "ENTRY_111d83e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111d83e0(int *param_2,int param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((int *)(*(int *)(param_1 + 0xc) + param_3 * 8));
  if ((int *)piVar1[1] != param_2) {
    if ((int *)*piVar1 == (int *)(param_2)) {
      *piVar1 = (int)(*param_2);
    }
    return;
  }
  if ((int *)*piVar1 == (int *)(param_2)) {
    iVar2 = (int)(*(int *)(param_1 + 4));
    *piVar1 = (int)(iVar2);
    piVar1[1] = (int)(iVar2);
    return;
  }
  piVar1[1] = (int)(param_2[1]);
  return;
}


// Reference entry 111d9730; body size 3 bytes.
#line 1 "ENTRY_111d9730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_111d9730(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 111d9740; body size 3 bytes.
#line 1 "ENTRY_111d9740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_111d9740(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 111da570; body size 43 bytes.
#line 1 "ENTRY_111da570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111da570(int param_1,int param_2,int param_3)

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
  *(int **)(param_1 + 4) = piVar2;
  *(int **)(param_3 + 4) = piVar1;
  *(int **)(param_2 + 4) = piVar3;
  return;
}


// Reference entry 111da5b0; body size 43 bytes.
#line 1 "ENTRY_111da5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111da5b0(int param_1,int param_2,int param_3)

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
  *(int **)(param_1 + 4) = piVar2;
  *(int **)(param_3 + 4) = piVar1;
  *(int **)(param_2 + 4) = piVar3;
  return;
}


// Reference entry 111da5f0; body size 43 bytes.
#line 1 "ENTRY_111da5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111da5f0(int param_1,int param_2,int param_3)

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
  *(int **)(param_1 + 4) = piVar2;
  *(int **)(param_3 + 4) = piVar1;
  *(int **)(param_2 + 4) = piVar3;
  return;
}


// Reference entry 111da6e0; body size 115 bytes.
#line 1 "ENTRY_111da6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_111da6e0(int param_2,int *param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  if ((*(uint *)(param_2 + 0x130) >> 0x15 & 1) != 0) {
    uVar1 = (uint)((**(code **)(*param_3 + 0xc))());
    iVar3 = (int)(param_1 + 0x1250);
    (**(code **)(*(int *)(param_1 + 0x1250) + 4))();
    if ((uVar1 & 1) != 0) {
      piVar2 = (int *)((int *)thunk_FUN_1124fec0("explicit"));
      (**(code **)(*piVar2 + 0xc))(&DAT_11889d24);
      thunk_FUN_11250060("contentFiltering");
      thunk_FUN_1124f4c0(iVar3);
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 111dab00; body size 34 bytes.
#line 1 "ENTRY_111dab00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111dab00(int param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1124fe70(param_2);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xa98c);
  return;
}


// Reference entry 111dab30; body size 11 bytes.
#line 1 "ENTRY_111dab30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_111dab30(undefined4 param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0xa948));
  if (uVar1 < 0x10) {
    *(uint *)(param_1 + 0xa948) = uVar1 + 1;
  }
  else {
    uVar1 = (uint)(uVar1 - 1);
  }
  *(int *)(param_1 + 0xbab8) = *(int *)(param_1 + 0xbab8) + 1;
  iVar2 = (int)(uVar1 * 0x60 + param_1 + 0xa940);
  (**(code **)(*(int *)(iVar2 + 0x1180) + 4))(param_2);
  *(undefined1 *)(iVar2 + 0x11d4) = (undefined1)param_2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar2 + 0x1180);
}


// Reference entry 111dab40; body size 11 bytes.
#line 1 "ENTRY_111dab40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_111dab40(undefined4 param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0xc0c4));
  if (uVar1 < 0x10) {
    *(uint *)(param_1 + 0xc0c4) = uVar1 + 1;
  }
  else {
    uVar1 = (uint)(uVar1 - 1);
  }
  *(int *)(param_1 + 0xc0c8) = *(int *)(param_1 + 0xc0c8) + 1;
  (**(code **)(*(int *)(param_1 + 0xc3a8 + uVar1 * 0x38) + 4))(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + uVar1 * 0x38 + 0xc3a8);
}


// Reference entry 111dab50; body size 34 bytes.
#line 1 "ENTRY_111dab50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111dab50(int param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1124fe20(param_2);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xa944);
  return;
}


// Reference entry 111dadb0; body size 90 bytes.
#line 1 "ENTRY_111dadb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_111dadb0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x71c71c8) {
    param_1 = (uint)(param_1 * 0x24);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 111dae30; body size 87 bytes.
#line 1 "ENTRY_111dae30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_111dae30(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x2c8590c) {
    param_1 = (uint)(param_1 * 0x5c);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 111daea0; body size 90 bytes.
#line 1 "ENTRY_111daea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_111daea0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0xa6f88) {
    param_1 = (uint)(param_1 * 0x1888);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 111daf20; body size 95 bytes.
#line 1 "ENTRY_111daf20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_111daf20(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x3c3c3c4) {
    param_1 = (uint)(param_1 * 0x44);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 111dafa0; body size 87 bytes.
#line 1 "ENTRY_111dafa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_111dafa0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x40000000) {
    param_1 = (uint)(param_1 * 4);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 111db010; body size 87 bytes.
#line 1 "ENTRY_111db010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_111db010(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x40000000) {
    param_1 = (uint)(param_1 * 4);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 111db080; body size 87 bytes.
#line 1 "ENTRY_111db080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_111db080(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x40000000) {
    param_1 = (uint)(param_1 * 4);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 111db100; body size 14 bytes.
#line 1 "ENTRY_111db100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_111db100(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(((uint)((int3)((uint)*(int *)(param_1 + 8) >> 8)) << 8 | (uint)(*(int *)(*(int *)(param_1 + 8) + 0x166c) == 2)));
}


// Reference entry 111db1b0; body size 6 bytes.
#line 1 "ENTRY_111db1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_111db1b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(((uint)((int3)((uint)*(undefined1 **)(param_1 + 8) >> 8)) << 8 | (uint)(**(undefined1 **)(param_1 + 8))));
}


// Reference entry 111db270; body size 61 bytes.
#line 1 "ENTRY_111db270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_111db270(undefined4 *param_2)
{
  int param_1 = (int )this;
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(param_2);
  if (0xf < (uint)param_2[5]) {
    puVar4 = (undefined4 *)((undefined4 *)*param_2);
  }
  uVar2 = (uint)(0);
  uVar3 = (uint)(0x811c9dc5);
  if (param_2[4] != 0) {
    do {
      pbVar1 = (byte *)((byte *)(uVar2 + (int)puVar4));
      uVar2 = (uint)(uVar2 + 1);
      uVar3 = (uint)((*pbVar1 ^ uVar3) * 0x1000193);
    } while (uVar2 < (uint)param_2[4]);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(uint *)(param_1 + 0x18) & uVar3);
}


// Reference entry 111db2c0; body size 61 bytes.
#line 1 "ENTRY_111db2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_111db2c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(param_2);
  if (0xf < (uint)param_2[5]) {
    puVar4 = (undefined4 *)((undefined4 *)*param_2);
  }
  uVar2 = (uint)(0);
  uVar3 = (uint)(0x811c9dc5);
  if (param_2[4] != 0) {
    do {
      pbVar1 = (byte *)((byte *)(uVar2 + (int)puVar4));
      uVar2 = (uint)(uVar2 + 1);
      uVar3 = (uint)((*pbVar1 ^ uVar3) * 0x1000193);
    } while (uVar2 < (uint)param_2[4]);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(uint *)(param_1 + 0x18) & uVar3);
}


// Reference entry 111db310; body size 61 bytes.
#line 1 "ENTRY_111db310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_111db310(undefined4 *param_2)
{
  int param_1 = (int )this;
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(param_2);
  if (0xf < (uint)param_2[5]) {
    puVar4 = (undefined4 *)((undefined4 *)*param_2);
  }
  uVar2 = (uint)(0);
  uVar3 = (uint)(0x811c9dc5);
  if (param_2[4] != 0) {
    do {
      pbVar1 = (byte *)((byte *)(uVar2 + (int)puVar4));
      uVar2 = (uint)(uVar2 + 1);
      uVar3 = (uint)((*pbVar1 ^ uVar3) * 0x1000193);
    } while (uVar2 < (uint)param_2[4]);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(uint *)(param_1 + 0x18) & uVar3);
}


// Reference entry 111dbe40; body size 94 bytes.
#line 1 "ENTRY_111dbe40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111dbe40(int param_1)

{
  int *piVar1;
  int iStack_4;
  
  if (*(uint *)(param_1 + 8) != 0) {
    piVar1 = (int *)((int *)(param_1 + 4));
    iStack_4 = (int)(param_1);
    if (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 0x1c) >> 3) {
      func_0x10047ea6(*(undefined4 *)*piVar1,(undefined4 *)*piVar1);
      return;
    }
    thunk_FUN_111c7e10(piVar1,*piVar1);
    *(int *)*piVar1 = (int)(*piVar1);
    *(int *)(*piVar1 + 4) = *piVar1;
    *(undefined4 *)(param_1 + 8) = 0;
    iStack_4 = (int)(*piVar1);
    thunk_FUN_111c93e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&iStack_4);
  }
  return;
}


// Reference entry 111dbf40; body size 94 bytes.
#line 1 "ENTRY_111dbf40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111dbf40(int param_1)

{
  int *piVar1;
  int iStack_4;
  
  if (*(uint *)(param_1 + 8) != 0) {
    piVar1 = (int *)((int *)(param_1 + 4));
    iStack_4 = (int)(param_1);
    if (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 0x1c) >> 3) {
      func_0x10070f4a(*(undefined4 *)*piVar1,(undefined4 *)*piVar1);
      return;
    }
    thunk_FUN_111c7f50(piVar1,*piVar1);
    *(int *)*piVar1 = (int)(*piVar1);
    *(int *)(*piVar1 + 4) = *piVar1;
    *(undefined4 *)(param_1 + 8) = 0;
    iStack_4 = (int)(*piVar1);
    thunk_FUN_111c94e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&iStack_4);
  }
  return;
}


// Reference entry 111dc170; body size 28 bytes.
#line 1 "ENTRY_111dc170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111dc170(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_111dc0c0(*(undefined4 *)(*(int *)(param_1 + 0xd8dc) + 0x165c),
                     *(int *)(param_1 + 0xd8dc) + 2);
  return;
}


// Reference entry 111dc3e0; body size 87 bytes.
#line 1 "ENTRY_111dc3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_111dc3e0(char *param_2,int *param_3)
{
  int param_1 = (int )this;
  char cVar1;
  uint3 uVar2;
  int *piVar3;
  char *pcVar4;
  uint uVar5;
  bool bVar6;
  
  pcVar4 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar4);
    pcVar4 = (char *)(pcVar4 + 1);
  } while (cVar1 != '\0');
  thunk_FUN_113d15c0(2,param_2,(int)pcVar4 - (int)(param_2 + 1),param_3);
  piVar3 = (int *)((int *)(param_1 + 0x1838));
  uVar5 = (uint)(0xc);
  do {
    uVar2 = (uint3)((uint3)((uint)*piVar3 >> 8));
    if (*piVar3 != *param_3) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((uint)uVar2 << 8);
    }
    piVar3 = (int *)(piVar3 + 1);
    param_3 = (int *)(param_3 + 1);
    bVar6 = (bool)(3 < uVar5);
    uVar5 = (uint)(uVar5 - 4);
  } while (bVar6);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(((uint)(uVar2) << 8 | (uint)(1)));
}


// Reference entry 111decb0; body size 57 bytes.
#line 1 "ENTRY_111decb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111decb0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x24);
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


// Reference entry 111ded00; body size 52 bytes.
#line 1 "ENTRY_111ded00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111ded00(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x5c);
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


// Reference entry 111ded50; body size 55 bytes.
#line 1 "ENTRY_111ded50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111ded50(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x1888);
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


// Reference entry 111deda0; body size 61 bytes.
#line 1 "ENTRY_111deda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111deda0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x44);
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


// Reference entry 111dedf0; body size 60 bytes.
#line 1 "ENTRY_111dedf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_111dedf0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x24);
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


// Reference entry 111dee40; body size 55 bytes.
#line 1 "ENTRY_111dee40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_111dee40(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x5c);
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


// Reference entry 111dee90; body size 58 bytes.
#line 1 "ENTRY_111dee90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_111dee90(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x1888);
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


// Reference entry 111deee0; body size 64 bytes.
#line 1 "ENTRY_111deee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_111deee0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x44);
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


// Reference entry 111def30; body size 61 bytes.
#line 1 "ENTRY_111def30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_111def30(int param_1,int param_2)

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


// Reference entry 111def80; body size 61 bytes.
#line 1 "ENTRY_111def80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_111def80(int param_1,int param_2)

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


// Reference entry 111defd0; body size 61 bytes.
#line 1 "ENTRY_111defd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_111defd0(int param_1,int param_2)

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


// Reference entry 111e40c0; body size 4 bytes.
#line 1 "ENTRY_111e40c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 __fastcall FUN_111e40c0(undefined2 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2)(*param_1);
}


// Reference entry 111e40e0; body size 61 bytes.
#line 1 "ENTRY_111e40e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

short __stdcall FUN_111e40e0(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  
  sVar1 = (short)(thunk_FUN_111eb4e0(param_1,param_2));
  if ((sVar1 == 0x3fc) || (sVar1 == 0x40d)) {
    sVar1 = (short)(thunk_FUN_111eb4e0(param_1,param_2));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ short)(sVar1);
}


// Reference entry 111e6f70; body size 5 bytes.
#line 1 "ENTRY_111e6f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111e6f70(int *param_1)

{
                    
                    
  (**(code **)(*param_1 + 0x1c))();
  return;
}


// Reference entry 111e7810; body size 18 bytes.
#line 1 "ENTRY_111e7810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_111e7810(int param_1)

{
  char *pcVar1;
  uint3 uVar2;
  
  pcVar1 = (char *)(*(char **)(param_1 + 0x1c));
  uVar2 = (uint3)((uint3)((uint)pcVar1 >> 8));
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((uint)uVar2 << 8);
}


// Reference entry 111e78b0; body size 75 bytes.
#line 1 "ENTRY_111e78b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111e78b0(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  if (*(int *)(param_1 + 4) == -1) {
    *(undefined4 *)(param_1 + 4) = 3;
    uVar1 = (uint)(*(uint *)(param_1 + 0x10));
    uVar2 = (uint)(*(uint *)(param_1 + 0xc24));
    if (uVar2 < uVar1) {
      *(undefined4 *)(param_1 + 0x10) = 2;
      *(uint *)(param_1 + 0xc24) = (uint)(uVar2 != 0);
      return;
    }
    if (uVar1 < uVar2) {
      *(undefined4 *)(param_1 + 0xc24) = 2;
      *(uint *)(param_1 + 0x10) = (uint)(uVar1 != 0);
    }
  }
  return;
}


// Reference entry 111e85c0; body size 20 bytes.
#line 1 "ENTRY_111e85c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_111e85c0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_111c9080(param_1,param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 111edfc0; body size 1447 bytes.
#line 1 "ENTRY_111edfc0"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111edfc0(int *param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)
{
  int *param_1 = (int *)this;
 try {
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined ***pppuVar9;
  undefined **ppuStack_15e10;
  undefined4 uStack_15e0c;
  undefined4 uStack_15e08;
  undefined4 uStack_15e04;
  undefined4 uStack_15e00;
  undefined1 uStack_15dfc;
  int *piStack_15df8;
  undefined4 uStack_15df4;
  int iStack_15df0;
  undefined4 uStack_15dec;
  undefined4 uStack_15de8;
  int iStack_15de4;
  bool bStack_15ddd;
  void *pvStack_15ddc;
  undefined1 *puStack_15dd8;
  undefined4 uStack_15dd4;
  undefined1 auStack_15dd0 [1040];
  undefined1 auStack_159c0 [1281];
  undefined1 auStack_154bf [299];
  int iStack_15394;
  undefined4 uStack_b48c;
  undefined **ppuStack_9698;
  char cStack_9694;
  undefined1 auStack_9654 [6];
  undefined2 uStack_964e;
  char acStack_9614 [1028];
  int iStack_9210;
  char cStack_820b;
  int *piStack_8208;
  undefined **ppuStack_5cf8;
  undefined4 uStack_5cf4;
  undefined4 uStack_5cf0;
  undefined4 uStack_5cec;
  undefined4 uStack_5ce8;
  undefined1 uStack_5ce4;
  undefined1 auStack_5cdc [32];
  undefined1 auStack_5cbc [4];
  undefined4 uStack_5cb8;
  undefined1 auStack_4104 [4];
  undefined4 uStack_4100;
  undefined1 auStack_2ed4 [2440];
  undefined **ppuStack_254c;
  undefined4 uStack_2548;
  undefined1 uStack_2544;
  undefined1 uStack_2524;
  undefined1 uStack_1d23;
  undefined1 uStack_1520;
  undefined1 uStack_1507;
  undefined4 uStack_14c4;
  undefined1 uStack_14c0;
  undefined1 auStack_14bc [684];
  undefined1 auStack_1210 [4100];
  undefined1 auStack_20c [260];
  undefined1 auStack_108 [128];
  undefined1 auStack_88 [128];
  uint uStack_8;


  uStack_8 = (uint)(DAT_12126b84 ^ (uint)auStack_15dd0);

  uVar6 = (undefined4)(0);
  piStack_15df8 = (int *)(param_2);
  iStack_15df0 = (int)(param_3);
  uStack_15df4 = (undefined4)(param_4);
  bStack_15ddd = (bool)(true);
  if (param_6 != 0) {
    uVar6 = (undefined4)(thunk_FUN_1145abd0(param_6,uStack_8));
  }
  bStack_15ddd = (bool)(param_6 == 0);
  thunk_FUN_11283280(auStack_108,0x80);
  uStack_15dec = (undefined4)((**(code **)(*param_1 + 8))());
  thunk_FUN_1124e950(uStack_15dec,"credentials");

  thunk_FUN_1124e950("http://www.sonos.com/Services/1.1","context");
  *(unsigned char *)((char *)&uStack_15dd4 + 0) = 1;
  thunk_FUN_1124e200();
  auStack_5cdc[0] = (undefined1)(0);
  *(unsigned char *)((char *)&uStack_15dd4 + 0) = 2;
  thunk_FUN_1124e200();
  *(unsigned char *)((char *)&uStack_15dd4 + 0) = 3;

  auStack_88[0] = (undefined1)(0);
  iStack_15de4 = (int)(0);
  sVar1 = (short)(thunk_FUN_111e7df0(auStack_4104,auStack_5cdc,auStack_2ed4,auStack_20c,&iStack_15de4,
                             auStack_1210,0x1001));
  if (sVar1 != 0) goto LAB_111ee4ba;
  ppuStack_254c = (undefined **)((uint)&ghidra_vftable_RSonosCPFaultHandler);








  *(unsigned char *)((char *)&uStack_15dd4 + 0) = 4;
  uVar2 = (undefined4)(uVar6);
  if (bStack_15ddd != false) {
    uVar2 = (undefined4)(10000);
    uVar6 = (undefined4)(20000);
  }
  thunk_FUN_111c32e0(auStack_108,uStack_15dec,"getStreamingMetadata",0,uVar6,uVar2,1,&ppuStack_254c)
  ;
  uStack_15dd4 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_15dd4 + 1)) << 8 | (uint)(5)));
  thunk_FUN_111c6450(*(undefined4 *)(param_1[3] + 0x14));
  iVar4 = (int)(param_1[2]);
  thunk_FUN_111da770(auStack_15dd0,iVar4 + 0x1528,iVar4 + 0x124,iVar4 + 0x104,iVar4 + 0x1494,0,0,0,0
                    );
  *(undefined4 *)(iStack_15394 + 4) = 1;
  thunk_FUN_1124fe20(auStack_4104);
  uStack_4100 = (undefined4)(uStack_b48c);
  if ((*(byte *)(param_1[2] + 0x165a) & 1) != 0) {
    thunk_FUN_1124fe20(auStack_5cbc);
    uStack_5cb8 = (undefined4)(uStack_b48c);
  }
  piVar3 = (int *)((int *)thunk_FUN_11250000(&DAT_1187b440,0));
  if ((*(int *)(iStack_15df0 + 4) == 0) || (iVar4 = 0x191, *(int *)(iStack_15df0 + 4) == 1)) {
    iVar4 = (int)(9);
  }
  (**(code **)(*piVar3 + 0xc))(iStack_15df0 + iVar4);
  piVar3 = (int *)((int *)thunk_FUN_11250000("startTime",0));
  (**(code **)(*piVar3 + 0xc))(uStack_15df4);
  thunk_FUN_11250000("duration",0);
  thunk_FUN_1124f350(param_5);
  thunk_FUN_1124eaa0();
  uVar6 = (undefined4)(0x80);
  puVar7 = (undefined1 *)(auStack_88);
  *(unsigned char *)((char *)&uStack_15dd4 + 0) = 6;
  thunk_FUN_112500b0("http://www.sonos.com/Services/1.1|startTime");
  thunk_FUN_112503c0(puVar7,uVar6);
  puVar8 = (undefined4 *)(&uStack_15de8);
  thunk_FUN_112500b0("http://www.sonos.com/Services/1.1|duration");
  thunk_FUN_112504b0(puVar8);
  uVar6 = (undefined4)((**(code **)(*param_1 + 8))());
  thunk_FUN_1124dd60();
  *(unsigned char *)((char *)&uStack_15dd4 + 0) = 7;
  ppuStack_9698 = (undefined **)((uint)&ghidra_vftable_RSonosParamRX);

  thunk_FUN_1124dee0();
  thunk_FUN_1106a8d0(acStack_9614,uVar6,0x401);
  pcVar5 = (char *)(acStack_9614);
  do {
    cStack_9694 = (char)(*pcVar5);
    pcVar5 = (char *)(pcVar5 + 1);
  } while (cStack_9694 != '\0');
  iStack_9210 = (int)((int)pcVar5 - (int)(acStack_9614 + 1));
  cStack_820b = (char)(cStack_9694);
  thunk_FUN_1145c250(auStack_9654,&DAT_1188a1d4,6);
  piVar3 = (int *)(piStack_15df8);
  ppuStack_9698 = (undefined **)((uint)&ghidra_vftable_RSonosSegmentMetadataParam);
  piStack_8208 = (int *)(piStack_15df8);





  ppuStack_5cf8 = (undefined **)((uint)&ghidra_vftable_RDateTime);
  pppuVar9 = (undefined ***)(&ppuStack_9698);
  *(unsigned char *)((char *)&uStack_15dd4 + 0) = 8;
  thunk_FUN_112500b0("http://www.sonos.com/Services/1.1|segmentMetadata");
  thunk_FUN_112504f0(pppuVar9);
  puVar7 = (undefined1 *)(auStack_14bc);
  thunk_FUN_1124ff50("http://www.sonos.com/Services/1.1|getStreamingMetadataResult");
  thunk_FUN_112504f0(puVar7);
  sVar1 = (short)(thunk_FUN_111c5fc0());
  if (sVar1 == 0x3fc) {
    if (iStack_15de4 != 0) {
      thunk_FUN_111dc0c0(*(undefined4 *)(param_1[2] + 0x165c),param_1[2] + 2);
    }
LAB_111ee419:
    thunk_FUN_112b0270("sonoscp",(sVar1 == 0x40d) * '\x02' + '\x03',"%s: %s#%s failed, ret = %hu",
                       param_1[2] + 0x1528,auStack_159c0,auStack_154bf,sVar1);
  }
  else {
    if (sVar1 == 0x40d) {
      sVar1 = (short)(thunk_FUN_111e5150(&ppuStack_254c));
    }
    if (sVar1 != 0) goto LAB_111ee419;
    ppuStack_15e10 = (undefined **)((uint)&ghidra_vftable_RDateTime);





    thunk_FUN_11262fc0(auStack_88);
    (**(code **)(*piVar3 + 8))(&ppuStack_15e10,uStack_15de8);
  }
  ppuStack_9698 = (undefined **)((uint)&ghidra_vftable_RSonosParamRX);
  thunk_FUN_1124ecb0();
  thunk_FUN_1124eb30();
  thunk_FUN_1124f230();
  thunk_FUN_1124ef40();
  thunk_FUN_1124f0e0();
  thunk_FUN_1124d790();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
LAB_111ee4ba:
  thunk_FUN_1124eda0();
  thunk_FUN_1124eda0();
  thunk_FUN_1124f190();
  thunk_FUN_1124f190();

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 111eec40; body size 170 bytes.
#line 1 "ENTRY_111eec40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111eec40(char param_2)
{
  int param_1 = (int )this;
  short sVar1;
  char cVar2;
  
  if (param_2 != '\0') {
    thunk_FUN_112a9cf0(param_1 + 0x16c8);
    thunk_FUN_112a9cf0(param_1 + 0x16d0);
    thunk_FUN_112a9cf0(param_1 + 0x16d8);
  }
  sVar1 = (short)(*(short *)(param_1 + 0x1662));
  if ((*(short *)(param_1 + 0x1660) != 1) || ((sVar1 != 1 && (sVar1 != 2)))) {
    thunk_FUN_112b0270("sonoscp",4,
                       "Unexpected version from service descriptor %u.%u. Defaulting to 1.1",
                       *(short *)(param_1 + 0x1660),sVar1);
  }
  *(int *)(param_1 + 0x1688) = param_1 + 0x168c;
  if (param_2 != '\0') {
    cVar2 = (char)(thunk_FUN_112a7f50(&DAT_122e8d38));
    *(int *)(param_1 + 0x16c4) = DAT_122e8d34;
    DAT_122e8d34 = (int)(param_1);
    if (cVar2 != '\0') {
      thunk_FUN_112a8010(&DAT_122e8d38);
    }
  }
  return;
}


// Reference entry 111eed20; body size 867 bytes.
#line 1 "ENTRY_111eed20"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111eed20(undefined4 param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  int *piVar4;
  int iStack_120f8;
  void *pvStack_120f4;
  undefined1 *puStack_120f0;
  undefined4 uStack_120ec;
  undefined1 auStack_120e8 [1040];
  undefined1 auStack_11cd8 [1281];
  undefined1 auStack_117d7 [299];
  int iStack_116ac;
  undefined4 uStack_77a4;
  undefined1 auStack_59b0 [32];
  undefined1 auStack_5990 [4];
  undefined4 uStack_598c;
  undefined1 auStack_3dd8 [4];
  undefined4 uStack_3dd4;
  undefined1 auStack_2ba8 [2440];
  undefined **ppuStack_2220;
  undefined4 uStack_221c;
  undefined1 uStack_2218;
  undefined1 uStack_21f8;
  undefined1 uStack_19f7;
  undefined1 uStack_11f4;
  undefined1 uStack_11db;
  undefined4 uStack_1198;
  undefined1 uStack_1194;
  undefined1 auStack_1190 [4100];
  undefined1 auStack_18c [260];
  undefined1 auStack_88 [128];
  uint uStack_8;


  uStack_8 = (uint)(DAT_12126b84 ^ (uint)auStack_120e8);

  thunk_FUN_112b0270("sonoscp",5,"reportAccountAction: %s; sd.name: %s; sd.sid: %d",param_2,
                     param_1[2] + 0x1528,*(undefined4 *)(param_1[2] + 0x165c),uStack_8);
  uVar3 = (undefined4)((**(code **)(*param_1 + 8))());
  thunk_FUN_1124e950(uVar3,"credentials");

  thunk_FUN_1124e950("http://www.sonos.com/Services/1.1","context");
  *(unsigned char *)((char *)&uStack_120ec + 0) = 1;
  thunk_FUN_1124e200();
  auStack_59b0[0] = (undefined1)(0);
  *(unsigned char *)((char *)&uStack_120ec + 0) = 2;
  thunk_FUN_1124e200();
  *(unsigned char *)((char *)&uStack_120ec + 0) = 3;
  thunk_FUN_11283280(auStack_88,0x80);
  iStack_120f8 = (int)(0);
  sVar2 = (short)(thunk_FUN_111e7df0(auStack_3dd8,auStack_59b0,auStack_2ba8,auStack_18c,&iStack_120f8,
                             auStack_1190,0x1001));
  if (sVar2 != 0) goto LAB_111ef02f;
  ppuStack_2220 = (undefined **)((uint)&ghidra_vftable_RSonosCPFaultHandler);








  *(unsigned char *)((char *)&uStack_120ec + 0) = 4;
  thunk_FUN_111c32e0(auStack_88,uVar3,"reportAccountAction",0,20000,10000,1,&ppuStack_2220);
  *(unsigned char *)((char *)&uStack_120ec + 0) = 5;
  thunk_FUN_111c6450(*(undefined4 *)(param_1[3] + 0x14));
  iVar1 = (int)(param_1[2]);
  thunk_FUN_111da770(auStack_120e8,iVar1 + 0x1528,iVar1 + 0x124,iVar1 + 0x104,iVar1 + 0x1494,0,0,0,0
                    );
  *(undefined4 *)(iStack_116ac + 4) = 1;
  thunk_FUN_1124fe20(auStack_3dd8);
  uStack_3dd4 = (undefined4)(uStack_77a4);
  if ((*(byte *)(param_1[2] + 0x165a) & 1) != 0) {
    thunk_FUN_1124fe20(auStack_5990);
    uStack_598c = (undefined4)(uStack_77a4);
  }
  piVar4 = (int *)((int *)thunk_FUN_11250000(&DAT_1187b694,0));
  (**(code **)(*piVar4 + 0xc))(param_2);
  sVar2 = (short)(thunk_FUN_111c5fc0());
  if (sVar2 == 0x3fc) {
    if (iStack_120f8 != 0) {
      thunk_FUN_111dc0c0(*(undefined4 *)(param_1[2] + 0x165c),param_1[2] + 2);
    }
LAB_111eefbe:
    thunk_FUN_112b0270("sonoscp",(sVar2 == 0x40d) * '\x02' + '\x03',"%s: %s#%s failed, ret = %hu",
                       param_1[2] + 0x1528,auStack_11cd8,auStack_117d7,sVar2);
  }
  else {
    if (sVar2 == 0x40d) {
      sVar2 = (short)(thunk_FUN_111e5150(&ppuStack_2220));
    }
    if (sVar2 != 0) goto LAB_111eefbe;
  }
  thunk_FUN_1124ef40();
  thunk_FUN_1124f0e0();
  thunk_FUN_1124d790();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
LAB_111ef02f:
  thunk_FUN_1124eda0();
  thunk_FUN_1124eda0();
  thunk_FUN_1124f190();
  thunk_FUN_1124f190();

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 111ef160; body size 1149 bytes.
#line 1 "ENTRY_111ef160"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111ef160(undefined4 param_2,char *param_3,undefined4 *param_4,undefined4 *param_5)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 *puVar5;
  int iStack_123a4;
  void *pvStack_123a0;
  undefined1 *puStack_1239c;
  undefined4 uStack_12398;
  undefined1 auStack_12394 [1040];
  undefined1 auStack_11f84 [1281];
  undefined1 auStack_11a83 [299];
  int iStack_11958;
  undefined4 uStack_7a50;
  undefined1 auStack_5c5c [32];
  undefined1 auStack_5c3c [4];
  undefined4 uStack_5c38;
  undefined1 auStack_4084 [4];
  undefined4 uStack_4080;
  undefined1 auStack_2e54 [2440];
  undefined **ppuStack_24cc;
  undefined4 uStack_24c8;
  undefined1 uStack_24c4;
  undefined1 uStack_24a4;
  undefined1 uStack_1ca3;
  undefined1 uStack_14a0;
  undefined1 uStack_1487;
  undefined4 uStack_1444;
  undefined1 uStack_1440;
  undefined1 auStack_143c [684];
  undefined1 auStack_1190 [4100];
  undefined1 auStack_18c [260];
  undefined1 auStack_88 [128];
  uint uStack_8;


  uStack_8 = (uint)(DAT_12126b84 ^ (uint)auStack_12394);

  thunk_FUN_112b0270("sonoscp",5,
                     "reportPlaySeconds: context: %s; uri: %s; cid: %s; id: %s; seconds: %lld; offset: %lld"
                     ,param_4[1],*param_4,param_3,param_2,param_4[2],param_4[3],param_4[4],
                     param_4[5],uStack_8);
  *param_5 = (undefined4)(0x3c);
  uVar3 = (undefined4)((**(code **)(*param_1 + 8))());
  thunk_FUN_1124e950(uVar3,"credentials");

  thunk_FUN_1124e950("http://www.sonos.com/Services/1.1","context");
  *(unsigned char *)((char *)&uStack_12398 + 0) = 1;
  thunk_FUN_1124e200();
  auStack_5c5c[0] = (undefined1)(0);
  *(unsigned char *)((char *)&uStack_12398 + 0) = 2;
  thunk_FUN_1124e200();
  *(unsigned char *)((char *)&uStack_12398 + 0) = 3;
  thunk_FUN_11283280(auStack_88,0x80);
  iStack_123a4 = (int)(0);
  sVar2 = (short)(thunk_FUN_111e7df0(auStack_4084,auStack_5c5c,auStack_2e54,auStack_18c,&iStack_123a4,
                             auStack_1190,0x1001));
  if (sVar2 != 0) goto LAB_111ef589;
  ppuStack_24cc = (undefined **)((uint)&ghidra_vftable_RSonosCPFaultHandler);








  *(unsigned char *)((char *)&uStack_12398 + 0) = 4;
  thunk_FUN_111c32e0(auStack_88,uVar3,"reportPlaySeconds",0,20000,10000,1,&ppuStack_24cc);
  uStack_12398 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_12398 + 1)) << 8 | (uint)(5)));
  thunk_FUN_111c6450(*(undefined4 *)(param_1[3] + 0x14));
  iVar1 = (int)(param_1[2]);
  thunk_FUN_111da770(auStack_12394,iVar1 + 0x1528,iVar1 + 0x124,iVar1 + 0x104,iVar1 + 0x1494,0,0,0,0
                    );
  *(undefined4 *)(iStack_11958 + 4) = 1;
  thunk_FUN_1124fe20(auStack_4084);
  uStack_4080 = (undefined4)(uStack_7a50);
  if ((*(byte *)(param_1[2] + 0x165a) & 1) != 0) {
    thunk_FUN_1124fe20(auStack_5c3c);
    uStack_5c38 = (undefined4)(uStack_7a50);
  }
  piVar4 = (int *)((int *)thunk_FUN_11250000(&DAT_1187b440,0));
  (**(code **)(*piVar4 + 0xc))(param_2);
  thunk_FUN_11250000("seconds",0);
  func_0x10060406(param_4[2],param_4[3]);
  if (((param_3 != (char *)0x0) && (*param_3 != '\0')) &&
     ((*(uint *)(param_1[2] + 0x1658) >> 0x13 & 1) != 0)) {
    piVar4 = (int *)((int *)thunk_FUN_11250000("contextId",0));
    (**(code **)(*piVar4 + 0xc))(param_3);
  }
  if (((char *)param_4[7] != (char *)0x0) && (*(char *)param_4[7] != '\0')) {
    piVar4 = (int *)((int *)thunk_FUN_11250000("privateData",0));
    (**(code **)(*piVar4 + 0xc))(param_4[7]);
  }
  if (*(char *)(param_4 + 6) != '\0') {
    thunk_FUN_11250000("offsetMillis",0);
    func_0x10060406(param_4[4],param_4[5]);
  }
  thunk_FUN_1124eaa0();
  *(unsigned char *)((char *)&uStack_12398 + 0) = 6;
  thunk_FUN_112500b0("http://www.sonos.com/Services/1.1|interval");
  thunk_FUN_112504b0(param_5);
  puVar5 = (undefined1 *)(auStack_143c);
  thunk_FUN_1124ff50("http://www.sonos.com/Services/1.1|reportPlaySecondsResult");
  thunk_FUN_112504f0(puVar5);
  sVar2 = (short)(thunk_FUN_111c5fc0());
  if (sVar2 == 0x3fc) {
    if (iStack_123a4 != 0) {
      thunk_FUN_111dc0c0(*(undefined4 *)(param_1[2] + 0x165c),param_1[2] + 2);
    }
LAB_111ef50d:
    thunk_FUN_112b0270("sonoscp",(sVar2 == 0x40d) * '\x02' + '\x03',"%s: %s#%s failed, ret = %hu",
                       param_1[2] + 0x1528,auStack_11f84,auStack_11a83,sVar2);
  }
  else {
    if (sVar2 == 0x40d) {
      sVar2 = (short)(thunk_FUN_111e5150(&ppuStack_24cc));
    }
    if (sVar2 != 0) goto LAB_111ef50d;
  }
  thunk_FUN_1124f230();
  thunk_FUN_1124ef40();
  thunk_FUN_1124f0e0();
  thunk_FUN_1124d790();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
LAB_111ef589:
  thunk_FUN_1124eda0();
  thunk_FUN_1124eda0();
  thunk_FUN_1124f190();
  thunk_FUN_1124f190();

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 111ef700; body size 1012 bytes.
#line 1 "ENTRY_111ef700"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111ef700(undefined4 param_2,char *param_3,undefined4 *param_4)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  int *piVar4;
  int iStack_120f8;
  void *pvStack_120f4;
  undefined1 *puStack_120f0;
  undefined4 uStack_120ec;
  undefined1 auStack_120e8 [1040];
  undefined1 auStack_11cd8 [1281];
  undefined1 auStack_117d7 [299];
  int iStack_116ac;
  undefined4 uStack_77a4;
  undefined1 auStack_59b0 [32];
  undefined1 auStack_5990 [4];
  undefined4 uStack_598c;
  undefined1 auStack_3dd8 [4];
  undefined4 uStack_3dd4;
  undefined1 auStack_2ba8 [2440];
  undefined **ppuStack_2220;
  undefined4 uStack_221c;
  undefined1 uStack_2218;
  undefined1 uStack_21f8;
  undefined1 uStack_19f7;
  undefined1 uStack_11f4;
  undefined1 uStack_11db;
  undefined4 uStack_1198;
  undefined1 uStack_1194;
  undefined1 auStack_1190 [4100];
  undefined1 auStack_18c [260];
  undefined1 auStack_88 [128];
  uint uStack_8;


  uStack_8 = (uint)(DAT_12126b84 ^ (uint)auStack_120e8);

  thunk_FUN_112b0270("sonoscp",5,
                     "reportPlayStatus: %s; context: %s; uri: %s; cid: %s; id: %s; seconds: %lld; offset: %lld"
                     ,param_4[8],param_4[1],*param_4,param_3,param_2,param_4[2],param_4[3],
                     param_4[4],param_4[5],uStack_8);
  uVar3 = (undefined4)((**(code **)(*param_1 + 8))());
  thunk_FUN_1124e950(uVar3,"credentials");

  thunk_FUN_1124e950("http://www.sonos.com/Services/1.1","context");
  *(unsigned char *)((char *)&uStack_120ec + 0) = 1;
  thunk_FUN_1124e200();
  auStack_59b0[0] = (undefined1)(0);
  *(unsigned char *)((char *)&uStack_120ec + 0) = 2;
  thunk_FUN_1124e200();
  *(unsigned char *)((char *)&uStack_120ec + 0) = 3;
  thunk_FUN_11283280(auStack_88,0x80);
  iStack_120f8 = (int)(0);
  sVar2 = (short)(thunk_FUN_111e7df0(auStack_3dd8,auStack_59b0,auStack_2ba8,auStack_18c,&iStack_120f8,
                             auStack_1190,0x1001));
  if (sVar2 != 0) goto LAB_111efaa0;
  ppuStack_2220 = (undefined **)((uint)&ghidra_vftable_RSonosCPFaultHandler);








  *(unsigned char *)((char *)&uStack_120ec + 0) = 4;
  thunk_FUN_111c32e0(auStack_88,uVar3,"reportPlayStatus",0,20000,10000,1,&ppuStack_2220);
  *(unsigned char *)((char *)&uStack_120ec + 0) = 5;
  thunk_FUN_111c6450(*(undefined4 *)(param_1[3] + 0x14));
  iVar1 = (int)(param_1[2]);
  thunk_FUN_111da770(auStack_120e8,iVar1 + 0x1528,iVar1 + 0x124,iVar1 + 0x104,iVar1 + 0x1494,0,0,0,0
                    );
  *(undefined4 *)(iStack_116ac + 4) = 1;
  thunk_FUN_1124fe20(auStack_3dd8);
  uStack_3dd4 = (undefined4)(uStack_77a4);
  if ((*(byte *)(param_1[2] + 0x165a) & 1) != 0) {
    thunk_FUN_1124fe20(auStack_5990);
    uStack_598c = (undefined4)(uStack_77a4);
  }
  piVar4 = (int *)((int *)thunk_FUN_11250000(&DAT_1187b440,0));
  (**(code **)(*piVar4 + 0xc))(param_2);
  piVar4 = (int *)((int *)thunk_FUN_11250000("status",0));
  (**(code **)(*piVar4 + 0xc))(param_4[8]);
  if (((param_3 != (char *)0x0) && (*param_3 != '\0')) &&
     ((*(uint *)(param_1[2] + 0x1658) >> 0x13 & 1) != 0)) {
    piVar4 = (int *)((int *)thunk_FUN_11250000("contextId",0));
    (**(code **)(*piVar4 + 0xc))(param_3);
  }
  if (*(char *)(param_4 + 6) != '\0') {
    thunk_FUN_11250000("offsetMillis",0);
    func_0x10060406(param_4[4],param_4[5]);
  }
  sVar2 = (short)(thunk_FUN_111c5fc0());
  if (sVar2 == 0x3fc) {
    if (iStack_120f8 != 0) {
      thunk_FUN_111dc0c0(*(undefined4 *)(param_1[2] + 0x165c),param_1[2] + 2);
    }
LAB_111efa2f:
    thunk_FUN_112b0270("sonoscp",(sVar2 == 0x40d) * '\x02' + '\x03',"%s: %s#%s failed, ret = %hu",
                       param_1[2] + 0x1528,auStack_11cd8,auStack_117d7,sVar2);
  }
  else {
    if (sVar2 == 0x40d) {
      sVar2 = (short)(thunk_FUN_111e5150(&ppuStack_2220));
    }
    if (sVar2 != 0) goto LAB_111efa2f;
  }
  thunk_FUN_1124ef40();
  thunk_FUN_1124f0e0();
  thunk_FUN_1124d790();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
LAB_111efaa0:
  thunk_FUN_1124eda0();
  thunk_FUN_1124eda0();
  thunk_FUN_1124f190();
  thunk_FUN_1124f190();

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 111efc00; body size 876 bytes.
#line 1 "ENTRY_111efc00"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111efc00(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  int *piVar4;
  int iStack_120f8;
  void *pvStack_120f4;
  undefined1 *puStack_120f0;
  undefined4 uStack_120ec;
  undefined1 auStack_120e8 [2620];
  int iStack_116ac;
  undefined4 uStack_77a4;
  undefined1 auStack_59b0 [32];
  undefined1 auStack_5990 [4];
  undefined4 uStack_598c;
  undefined1 auStack_3dd8 [4];
  undefined4 uStack_3dd4;
  undefined1 auStack_2ba8 [2440];
  undefined **ppuStack_2220;
  undefined4 uStack_221c;
  undefined1 uStack_2218;
  undefined1 uStack_21f8;
  undefined1 uStack_19f7;
  undefined1 uStack_11f4;
  undefined1 uStack_11db;
  undefined4 uStack_1198;
  undefined1 uStack_1194;
  undefined1 auStack_1190 [4100];
  undefined1 auStack_18c [260];
  undefined1 auStack_88 [128];
  uint uStack_8;


  uStack_8 = (uint)(DAT_12126b84 ^ (uint)auStack_120e8);

  uVar3 = (undefined4)((**(code **)(*param_1 + 8))(uStack_8));
  thunk_FUN_1124e950(uVar3,"credentials");

  thunk_FUN_1124e950("http://www.sonos.com/Services/1.1","context");
  *(unsigned char *)((char *)&uStack_120ec + 0) = 1;
  thunk_FUN_1124e200();
  auStack_59b0[0] = (undefined1)(0);
  *(unsigned char *)((char *)&uStack_120ec + 0) = 2;
  thunk_FUN_1124e200();
  *(unsigned char *)((char *)&uStack_120ec + 0) = 3;
  thunk_FUN_11283280(auStack_88,0x80);
  iStack_120f8 = (int)(0);
  sVar2 = (short)(thunk_FUN_111e7df0(auStack_3dd8,auStack_59b0,auStack_2ba8,auStack_18c,&iStack_120f8,
                             auStack_1190,0x1001));
  if (sVar2 != 0) goto LAB_111eff18;
  ppuStack_2220 = (undefined **)((uint)&ghidra_vftable_RSonosCPFaultHandler);








  *(unsigned char *)((char *)&uStack_120ec + 0) = 4;
  thunk_FUN_111c32e0(auStack_88,uVar3,"reportStatus",0,20000,10000,1,&ppuStack_2220);
  *(unsigned char *)((char *)&uStack_120ec + 0) = 5;
  thunk_FUN_111c6450(*(undefined4 *)(param_1[3] + 0x14));
  iVar1 = (int)(param_1[2]);
  thunk_FUN_111da770(auStack_120e8,iVar1 + 0x1528,iVar1 + 0x124,iVar1 + 0x104,iVar1 + 0x1494,0,0,0,0
                    );
  *(undefined4 *)(iStack_116ac + 4) = 1;
  thunk_FUN_1124fe20(auStack_3dd8);
  uStack_3dd4 = (undefined4)(uStack_77a4);
  if ((*(byte *)(param_1[2] + 0x165a) & 1) != 0) {
    thunk_FUN_1124fe20(auStack_5990);
    uStack_598c = (undefined4)(uStack_77a4);
  }
  piVar4 = (int *)((int *)thunk_FUN_11250000(&DAT_1187b440,0));
  (**(code **)(*piVar4 + 0xc))(param_2);
  thunk_FUN_11250000(&DAT_1187d828,0);
  thunk_FUN_1124f350(param_3);
  piVar4 = (int *)((int *)thunk_FUN_11250000("message",0));
  (**(code **)(*piVar4 + 0xc))(param_4);
  sVar2 = (short)(thunk_FUN_111c5fc0());
  if (sVar2 == 0x3fc) {
    if (iStack_120f8 != 0) {
      thunk_FUN_111dc0c0(*(undefined4 *)(param_1[2] + 0x165c),param_1[2] + 2);
    }
LAB_111efebe:
    thunk_FUN_112b0270("sonoscp",(sVar2 == 0x40d) * '\x02' + '\x03',"reportStatus failed, ret = %hu"
                       ,sVar2);
  }
  else {
    if (sVar2 == 0x40d) {
      sVar2 = (short)(thunk_FUN_111e5150(&ppuStack_2220));
    }
    if (sVar2 != 0) goto LAB_111efebe;
  }
  thunk_FUN_1124ef40();
  thunk_FUN_1124f0e0();
  thunk_FUN_1124d790();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
LAB_111eff18:
  thunk_FUN_1124eda0();
  thunk_FUN_1124eda0();
  thunk_FUN_1124f190();
  thunk_FUN_1124f190();

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 111f0ab0; body size 1029 bytes.
#line 1 "ENTRY_111f0ab0"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111f0ab0(undefined4 param_2,char *param_3,undefined4 *param_4)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  int *piVar4;
  int iStack_120f8;
  void *pvStack_120f4;
  undefined1 *puStack_120f0;
  undefined4 uStack_120ec;
  undefined1 auStack_120e8 [2620];
  int iStack_116ac;
  undefined4 uStack_77a4;
  undefined1 auStack_59b0 [32];
  undefined1 auStack_5990 [4];
  undefined4 uStack_598c;
  undefined1 auStack_3dd8 [4];
  undefined4 uStack_3dd4;
  undefined1 auStack_2ba8 [2440];
  undefined **ppuStack_2220;
  undefined4 uStack_221c;
  undefined1 uStack_2218;
  undefined1 uStack_21f8;
  undefined1 uStack_19f7;
  undefined1 uStack_11f4;
  undefined1 uStack_11db;
  undefined4 uStack_1198;
  undefined1 uStack_1194;
  undefined1 auStack_1190 [4100];
  undefined1 auStack_18c [260];
  undefined1 auStack_88 [128];
  uint uStack_8;


  uStack_8 = (uint)(DAT_12126b84 ^ (uint)auStack_120e8);

  thunk_FUN_112b0270("sonoscp",5,
                     "setPlayedSeconds: context: %s; uri: %s; cid: %s; id: %s; seconds: %lld; offset: %lld"
                     ,param_4[1],*param_4,param_3,param_2,param_4[2],param_4[3],param_4[4],
                     param_4[5],uStack_8);
  uVar3 = (undefined4)((**(code **)(*param_1 + 8))());
  thunk_FUN_1124e950(uVar3,"credentials");

  thunk_FUN_1124e950("http://www.sonos.com/Services/1.1","context");
  *(unsigned char *)((char *)&uStack_120ec + 0) = 1;
  thunk_FUN_1124e200();
  auStack_59b0[0] = (undefined1)(0);
  *(unsigned char *)((char *)&uStack_120ec + 0) = 2;
  thunk_FUN_1124e200();
  *(unsigned char *)((char *)&uStack_120ec + 0) = 3;
  thunk_FUN_11283280(auStack_88,0x80);
  iStack_120f8 = (int)(0);
  sVar2 = (short)(thunk_FUN_111e7df0(auStack_3dd8,auStack_59b0,auStack_2ba8,auStack_18c,&iStack_120f8,
                             auStack_1190,0x1001));
  if (sVar2 != 0) goto LAB_111f0e61;
  ppuStack_2220 = (undefined **)((uint)&ghidra_vftable_RSonosCPFaultHandler);








  *(unsigned char *)((char *)&uStack_120ec + 0) = 4;
  thunk_FUN_111c32e0(auStack_88,uVar3,"setPlayedSeconds",0,20000,10000,1,&ppuStack_2220);
  *(unsigned char *)((char *)&uStack_120ec + 0) = 5;
  thunk_FUN_111c6450(*(undefined4 *)(param_1[3] + 0x14));
  iVar1 = (int)(param_1[2]);
  thunk_FUN_111da770(auStack_120e8,iVar1 + 0x1528,iVar1 + 0x124,iVar1 + 0x104,iVar1 + 0x1494,0,0,0,0
                    );
  *(undefined4 *)(iStack_116ac + 4) = 1;
  thunk_FUN_1124fe20(auStack_3dd8);
  uStack_3dd4 = (undefined4)(uStack_77a4);
  if ((*(byte *)(param_1[2] + 0x165a) & 1) != 0) {
    thunk_FUN_1124fe20(auStack_5990);
    uStack_598c = (undefined4)(uStack_77a4);
  }
  piVar4 = (int *)((int *)thunk_FUN_11250000(&DAT_1187b440,0));
  (**(code **)(*piVar4 + 0xc))(param_2);
  thunk_FUN_11250000("seconds",0);
  func_0x10060406(param_4[2],param_4[3]);
  if (((param_3 != (char *)0x0) && (*param_3 != '\0')) &&
     ((*(uint *)(param_1[2] + 0x1658) >> 0x13 & 1) != 0)) {
    piVar4 = (int *)((int *)thunk_FUN_11250000("contextId",0));
    (**(code **)(*piVar4 + 0xc))(param_3);
  }
  if (((char *)param_4[7] != (char *)0x0) && (*(char *)param_4[7] != '\0')) {
    piVar4 = (int *)((int *)thunk_FUN_11250000("privateData",0));
    (**(code **)(*piVar4 + 0xc))(param_4[7]);
  }
  if (*(char *)(param_4 + 6) != '\0') {
    thunk_FUN_11250000("offsetMillis",0);
    func_0x10060406(param_4[4],param_4[5]);
  }
  sVar2 = (short)(thunk_FUN_111c5fc0());
  if (sVar2 == 0x3fc) {
    if (iStack_120f8 != 0) {
      thunk_FUN_111dc0c0(*(undefined4 *)(param_1[2] + 0x165c),param_1[2] + 2);
    }
LAB_111f0e07:
    thunk_FUN_112b0270("sonoscp",(sVar2 == 0x40d) * '\x02' + '\x03',
                       "setPlayedSeconds failed, ret = %hu",sVar2);
  }
  else {
    if (sVar2 == 0x40d) {
      sVar2 = (short)(thunk_FUN_111e5150(&ppuStack_2220));
    }
    if (sVar2 != 0) goto LAB_111f0e07;
  }
  thunk_FUN_1124ef40();
  thunk_FUN_1124f0e0();
  thunk_FUN_1124d790();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
LAB_111f0e61:
  thunk_FUN_1124eda0();
  thunk_FUN_1124eda0();
  thunk_FUN_1124f190();
  thunk_FUN_1124f190();

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 111f1870; body size 22 bytes.
#line 1 "ENTRY_111f1870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_111f1870(int param_1)

{
  switch(*(undefined1 *)(param_1 + 0x1654)) {
  case 3:
  case 4:
    if ((*(char *)(param_1 + 0x124) == '\0') && (*(char *)(param_1 + 0x925) == '\0')) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 111f18c0; body size 28 bytes.
#line 1 "ENTRY_111f18c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_111f18c0(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0xd8dc));
  uVar2 = (uint3)((uint3)((uint)iVar1 >> 8));
  switch(*(undefined1 *)(iVar1 + 0x1654)) {
  case 3:
  case 4:
    if ((*(char *)(iVar1 + 0x124) == '\0') && (*(char *)(iVar1 + 0x925) == '\0')) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(((uint)(uVar2) << 8 | (uint)(1)));
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((uint)uVar2 << 8);
}


// Reference entry 111f1960; body size 19 bytes.
#line 1 "ENTRY_111f1960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_111f1960(int param_1)

{
  uint in_EAX;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((int3)((uint)*(int *)(param_1 + 0x2c) >> 8)) << 8 | (uint)(*(undefined1 *)(*(int *)(param_1 + 0x2c) + 0xd951))));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(in_EAX & 0xffffff00);
}


// Reference entry 111f3300; body size 238 bytes.
#line 1 "ENTRY_111f3300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111f3300(uint *param_2)
{
  int param_1 = (int )this;
 try {
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  void *pvStack_94;
  undefined1 *puStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [128];
  uint uStack_8;


  uStack_8 = (uint)(DAT_12126b84 ^ (uint)auStack_88);

  iVar4 = (int)(param_1);
  cVar1 = (char)(thunk_FUN_112a7f50(param_1,uStack_8));
  uVar3 = (uint)(0);
  *(undefined4 *)(param_1 + 0x8508) = 0;
  *(undefined4 *)(param_1 + 0x850c) = 0;

  if (*param_2 != 0) {
    do {
      thunk_FUN_11283280(auStack_88,0x80);
      cVar2 = (char)(thunk_FUN_111e86b0(auStack_88));
      if (cVar2 == '\0') break;
      uVar3 = (uint)(uVar3 + 1);
    } while (uVar3 < *param_2);
  }
  if (cVar1 != '\0') {
    thunk_FUN_112a8010(param_1);
  }

  thunk_FUN_1148ac28(iVar4);
  return;

 } catch (...) { }
}


// Reference entry 111f44a0; body size 11 bytes.
#line 1 "ENTRY_111f44a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111f44a0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0xa9c0));
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)((undefined4 *)(param_1 + 0xa9b0 + iVar1 * 4));
    do {
      *puVar2 = (undefined4)(0);
      puVar2 = (undefined4 *)(puVar2 + -1);
      iVar1 = (int)(iVar1 + -1);
    } while (iVar1 != 0);
  }
  *(undefined4 *)(param_1 + 0xa9bc) = 0;
  *(undefined4 *)(param_1 + 0xa9c0) = 0;
  return;
}


// Reference entry 111f45a0; body size 109 bytes.
#line 1 "ENTRY_111f45a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

short __stdcall FUN_111f45a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  short sVar1;
  
  sVar1 = (short)(thunk_FUN_111f0050(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8));
  if ((sVar1 == 0x3fc) || (sVar1 == 0x40d)) {
    sVar1 = (short)(thunk_FUN_111f0050(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ short)(sVar1);
}


// Reference entry 111f5100; body size 23 bytes.
#line 1 "ENTRY_111f5100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111f5100(uint param_2)
{
  int param_1 = (int )this;
  *(byte *)(param_1 + 0x222) = *(byte *)(param_1 + 0x222) | (byte)(1 << (param_2 & 0x1f));
  return;
}


// Reference entry 111f5120; body size 23 bytes.
#line 1 "ENTRY_111f5120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111f5120(uint param_2)
{
  int param_1 = (int )this;
  *(byte *)(param_1 + 0x323) = *(byte *)(param_1 + 0x323) | (byte)(1 << (param_2 & 0x1f));
  return;
}


// Reference entry 111f5320; body size 35 bytes.
#line 1 "ENTRY_111f5320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111f5320(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_11281ab0(param_2);
  *(uint *)(param_1 + 0x166c) = (uint)*(byte *)(param_1 + 0x1654);
  return;
}


// Reference entry 111f64c0; body size 38 bytes.
#line 1 "ENTRY_111f64c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_111f64c0(undefined4 param_1)

{
  switch(param_1) {
  case 2:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("search");
  case 3:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("track");
  case 4:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("album");
  case 5:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("artist");
  case 6:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("playlist");
  case 7:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("genre");
  case 8:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("other");
  case 9:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("stream");
  case 10:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("favorite");
  case 0xb:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("show");
  case 0xc:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("program");
  case 0xd:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("albumList");
  case 0xe:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("trackList");
  case 0xf:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("artistTrackList");
  case 0x10:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("folder");
  case 0x11:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("compilationAlbum");
  default:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("");
  case 0x13:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("audiobook");
  case 0x14:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("podcast");
  case 0x15:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("episode.podcast");
  case 0x16:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("episode.show");
  case 0xfe:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("container");
  }
}


// Reference entry 111f6760; body size 12 bytes.
#line 1 "ENTRY_111f6760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_111f6760(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(uint *)(param_1 + 0x130) >> 3 & 0xffffff01);
}


// Reference entry 111f6770; body size 12 bytes.
#line 1 "ENTRY_111f6770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_111f6770(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(uint *)(param_1 + 0x130) >> 0x13 & 0xffffff01);
}


// Reference entry 111f6780; body size 12 bytes.
#line 1 "ENTRY_111f6780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_111f6780(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(uint *)(param_1 + 0x130) >> 0x11 & 0xffffff01);
}


// Reference entry 111f6790; body size 12 bytes.
#line 1 "ENTRY_111f6790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_111f6790(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(uint *)(param_1 + 0x130) >> 0x12 & 0xffffff01);
}


// Reference entry 111f67b0; body size 7 bytes.
#line 1 "ENTRY_111f67b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_111f67b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(((uint)((int3)((uint)*(int *)(param_1 + 8) >> 8)) << 8 | (uint)(*(undefined1 *)(*(int *)(param_1 + 8) + 1))));
}


// Reference entry 111f6e20; body size 72 bytes.
#line 1 "ENTRY_111f6e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_111f6e20(char *param_1,char *param_2)

{
  if ((((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) && (*param_1 != '\0')) &&
     (*param_2 != '\0')) {
    thunk_FUN_111f6fe0(param_1,param_2);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x40d);
  }
  thunk_FUN_112b0270("sonoscp",3,"Null or empty token/key for token refrsh - ignored");
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x192);
}


// Reference entry 111f7190; body size 39 bytes.
#line 1 "ENTRY_111f7190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_111f7190(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x166c));
  uVar2 = (uint3)((uint3)((uint)iVar1 >> 8));
  if ((iVar1 != 0) &&
     (((iVar1 != 3 || (*(char *)(param_1 + 0x124) != '\0')) || (*(char *)(param_1 + 0x1453) != '\0')
      ))) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((uint)uVar2 << 8);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(((uint)(uVar2) << 8 | (uint)(1)));
}


// Reference entry 111f71c0; body size 42 bytes.
#line 1 "ENTRY_111f71c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_111f71c0(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 8));
  uVar2 = (uint3)((uint3)((uint)iVar1 >> 8));
  if ((*(int *)(iVar1 + 0x166c) != 0) &&
     (((*(int *)(iVar1 + 0x166c) != 3 || (*(char *)(iVar1 + 0x124) != '\0')) ||
      (*(char *)(iVar1 + 0x1453) != '\0')))) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((uint)uVar2 << 8);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(((uint)(uVar2) << 8 | (uint)(1)));
}


// Reference entry 111f7200; body size 31 bytes.
#line 1 "ENTRY_111f7200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_111f7200(int param_1)

{
  if ((*(short *)(param_1 + 0x120) == 1) && (*(short *)(param_1 + 0x122) == 0)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 111f7230; body size 11 bytes.
#line 1 "ENTRY_111f7230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111f7230(int param_1)

{
                    
                    
  (**(code **)(**(int **)(param_1 + 0x1688) + 4))();
  return;
}


// Reference entry 111f92a0; body size 3 bytes.
#line 1 "ENTRY_111f92a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_111f92a0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 111f92c0; body size 13 bytes.
#line 1 "ENTRY_111f92c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111f92c0(void *param_2,size_t param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  void *_Dst;
  int iVar2;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    return;
  }
  iVar2 = (int)(*(int *)(param_1 + 0xc18));
  uVar1 = (uint)(*(uint *)(param_1 + 0xc14));
  if (uVar1 < iVar2 + param_3) {
    do {
      uVar1 = (uint)(uVar1 * 2);
    } while (uVar1 < iVar2 + param_3);
    *(uint *)(param_1 + 0xc14) = uVar1;
    _Dst = (void *)((void *)thunk_FUN_1148b586(uVar1));
    memcpy(_Dst,*(void **)(param_1 + 0xc10),*(size_t *)(param_1 + 0xc18));
    if (*(void **)(param_1 + 0xc10) != (void *)(param_1 + 0x40f)) {
      free(*(void **)(param_1 + 0xc10));
    }
    iVar2 = (int)(*(int *)(param_1 + 0xc18));
    *(void **)(param_1 + 0xc10) = _Dst;
  }
  else {
    _Dst = (void *)(*(void **)(param_1 + 0xc10));
  }
  memcpy((void *)((int)_Dst + iVar2),param_2,param_3);
  *(int *)(param_1 + 0xc18) = *(int *)(param_1 + 0xc18) + param_3;
  return;
}


// Reference entry 111f92d0; body size 24 bytes.
#line 1 "ENTRY_111f92d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111f92d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(char *)(param_1 + 0xe) != '\0') {
    thunk_FUN_111f7a60(param_2,param_3);
  }
  return;
}


// Reference entry 111f9550; body size 21 bytes.
#line 1 "ENTRY_111f9550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111f9550(int param_1,undefined4 param_2)

{
  if (*(code **)(param_1 + 0x214) != (code *)0x0) {
    (**(code **)(param_1 + 0x214))(param_2);
  }
  return;
}


// Reference entry 111fb6f0; body size 18 bytes.
#line 1 "ENTRY_111fb6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111fb6f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_111fb430(param_2,param_3);
  return;
}


// Reference entry 111fb710; body size 25 bytes.
#line 1 "ENTRY_111fb710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111fb710(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(code **)(param_1 + 0x210) != (code *)0x0) {
    (**(code **)(param_1 + 0x210))(param_2,param_3);
  }
  return;
}


// Reference entry 111fbcc0; body size 18 bytes.
#line 1 "ENTRY_111fbcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111fbcc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_111fb950(param_2,param_3);
  return;
}


// Reference entry 111fbd30; body size 298 bytes.
#line 1 "ENTRY_111fbd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111fbd30(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11261e50();
  param_1[7] = (undefined4)((uint)&ghidra_vftable_RHTTPDataIO);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAsyncGETIOOperation);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RAsyncGETIOOperation);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_RAsyncGETIOOperation);
  param_1[9] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[8] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  param_1[0xc] = (undefined4)(0);
  param_1[0xd] = (undefined4)(0);
  param_1[0xb] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  param_1[0xf] = (undefined4)(0);
  param_1[0x10] = (undefined4)(0);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  param_1[0x12] = (undefined4)(0);
  param_1[0x13] = (undefined4)(0);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  param_1[0x3017] = (undefined4)(param_4);
  param_1[0x3018] = (undefined4)(param_5);
  *(undefined1 *)(param_1 + 0x3019) = param_6;
  param_1[0x301a] = (undefined4)(param_7);
  param_1[0x301b] = (undefined4)(param_8);
  param_1[0x3020] = (undefined4)(param_9);
  param_1[0x14] = (undefined4)(0);
  param_1[0x301c] = (undefined4)(0);
  param_1[0x301d] = (undefined4)(0);
  *(undefined1 *)(param_1 + 0x301e) = 0;
  param_1[0x301f] = (undefined4)(0);
  thunk_FUN_1106a8d0((int)param_1 + 0x4056,param_2,0x4002);
  thunk_FUN_1106a8d0(param_1 + 0x15,param_2,0x4002);
  thunk_FUN_1106a8d0(param_1 + 0x2016,param_3,0x4002);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111fc980; body size 10 bytes.
#line 1 "ENTRY_111fc980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_111fc980(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(((uint)((int3)((uint)*(int *)(param_1 + 0x24) >> 8)) << 8 | (uint)(*(undefined1 *)(*(int *)(param_1 + 0x24) + 0x4490))));
}


// Reference entry 111fe160; body size 47 bytes.
#line 1 "ENTRY_111fe160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111fe160(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  *param_1 = (undefined4)(0xffffffff);
  iVar1 = (int)(0x10);
  *(undefined2 *)(param_1 + 1) = 0xffff;
  do {
    *(undefined4 *)((int)param_1 + 6) = *param_2;
    *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)(param_2 + 1);
    iVar1 = (int)(iVar1 + -1);
    param_1 = (undefined4 *)((undefined4 *)((int)param_1 + 6));
  } while (iVar1 != 0);
  return;
}


// Reference entry 111fe3a0; body size 68 bytes.
#line 1 "ENTRY_111fe3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111fe3a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RContentProvider);
  param_1[1] = (undefined4)(0);
  thunk_FUN_1145c930(param_1 + 2,0);
  param_1[5] = (undefined4)(param_2);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RBrowseContentProviderWithCD);
  param_1[6] = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111fe440; body size 85 bytes.
#line 1 "ENTRY_111fe440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111fe440(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11202480();
  param_1[0x102] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSCPBrowseContainerCallback);
  *(undefined1 *)(param_1 + 0x143) = 0;
  thunk_FUN_1106a8d0(param_1 + 1,param_2,0x401);
  thunk_FUN_1106a8d0(param_1 + 0x103,param_4,0x100);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111fe8f0; body size 24 bytes.
#line 1 "ENTRY_111fe8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111fe8f0(undefined4 *param_1)

{
  thunk_FUN_11202500();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSCPPropNameTranslator);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111fe910; body size 76 bytes.
#line 1 "ENTRY_111fe910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111fe910(undefined4 param_2,undefined4 param_3,undefined1 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11202480();
  param_1[0x102] = (undefined4)(param_3);
  *(undefined1 *)((int)param_1 + 0x40e) = param_4;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSCPSearchContainerCallback);
  *(undefined2 *)(param_1 + 0x103) = 0;
  thunk_FUN_1106a8d0(param_1 + 1,param_2,0x401);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111fea90; body size 91 bytes.
#line 1 "ENTRY_111fea90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111fea90(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RContentProvider);
  param_1[1] = (undefined4)(0);
  thunk_FUN_1145c930(param_1 + 2,0);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSvcContentProvider);
  thunk_FUN_1106a8d0(param_1 + 5,param_2,0x81);
  thunk_FUN_1106a8d0((int)param_1 + 0x95,param_3,0x81);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 111feb10; body size 13 bytes.
#line 1 "ENTRY_111feb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111feb10(int *param_1)

{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1);
  }
  return;
}


// Reference entry 111fed50; body size 23 bytes.
#line 1 "ENTRY_111fed50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_111fed50(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
                    
                    
    (**(code **)*param_1)();
    return;
  }
  return;
}


// Reference entry 11202360; body size 27 bytes.
#line 1 "ENTRY_11202360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11202360(int param_1)

{
  Sleep(param_1 / 1000);
  return;
}


// Reference entry 112023f0; body size 64 bytes.
#line 1 "ENTRY_112023f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_112023f0(char *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (char)(*param_1);
  if (cVar1 == '\0') {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
  }
  while ((iVar2 = isdigit((int)cVar1), iVar2 != 0 || (*param_1 == ','))) {
    cVar1 = (char)(param_1[1]);
    param_1 = (char *)(param_1 + 1);
    if (cVar1 == '\0') {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 112025a0; body size 11 bytes.
#line 1 "ENTRY_112025a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_112025a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCDUpdateProcessor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXMLParserBase);
  thunk_FUN_112c8b80(param_1[1]);
  param_1[1] = (undefined4)(0);
  thunk_FUN_11285a90();
  return;
}


// Reference entry 11202d30; body size 14 bytes.
#line 1 "ENTRY_11202d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11202d30(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_112029e0(param_2);
  return;
}


// Reference entry 11202d80; body size 30 bytes.
#line 1 "ENTRY_11202d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11202d80(int param_1,undefined4 param_2)

{
  (**(code **)(**(int **)(param_1 + 8) + 4))(param_2,param_1 + 0xc);
  *(undefined1 *)(param_1 + 0x40c) = 0;
  return;
}


// Reference entry 11203650; body size 18 bytes.
#line 1 "ENTRY_11203650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11203650(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_11202ed0(param_2,param_3);
  return;
}


// Reference entry 11203670; body size 14 bytes.
#line 1 "ENTRY_11203670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11203670(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x40c) = 1;
  return;
}


// Reference entry 11203ed0; body size 259 bytes.
#line 1 "ENTRY_11203ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_11203ed0(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  thunk_FUN_1145c250(param_1 + 4,param_2 + 4,0xc0);
  thunk_FUN_1145c250(param_1 + 0xc4,param_2 + 0xc4,0xc0);
  thunk_FUN_1145c250(param_1 + 0x184,param_2 + 0x184,0x21);
  thunk_FUN_1145c250(param_1 + 0x669,param_2 + 0x669,0x10);
  *(undefined4 *)(param_1 + 0x64c) = *(undefined4 *)(param_2 + 0x64c);
  uVar3 = (uint)(0);
  *(undefined4 *)(param_1 + 0x644) = *(undefined4 *)(param_2 + 0x644);
  *(undefined4 *)(param_1 + 0x648) = *(undefined4 *)(param_2 + 0x648);
  *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(param_2 + 0x334);
  uVar1 = (uint)(0);
  if (*(uint *)(param_2 + 0x640) != 0) {
    iVar2 = (int)(param_1 + 0x338);
    do {
      thunk_FUN_1145c250(iVar2,iVar2 + (param_2 - param_1),0x81);
      uVar1 = (uint)(*(uint *)(param_2 + 0x640));
      uVar3 = (uint)(uVar3 + 1);
      iVar2 = (int)(iVar2 + 0x81);
    } while (uVar3 < uVar1);
  }
  *(uint *)(param_1 + 0x640) = uVar1;
  *(undefined1 *)(param_1 + 0x668) = 1;
  *(undefined1 *)(param_1 + 0x1a5) = 0;
  *(undefined1 *)(param_1 + 0x265) = 0;
  *(undefined1 *)(param_1 + 0x325) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 112041c0; body size 32 bytes.
#line 1 "ENTRY_112041c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112041c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (DAT_122f5600 != 0) {
    thunk_FUN_1123a890(param_1,param_2,param_3,param_4);
  }
  return;
}


// Reference entry 112047a0; body size 24 bytes.
#line 1 "ENTRY_112047a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112047a0(undefined4 param_1,undefined4 param_2)

{
  if (DAT_122f5600 != 0) {
    thunk_FUN_1123bf80(param_1,param_2);
  }
  return;
}


// Reference entry 11204a10; body size 8 bytes.
#line 1 "ENTRY_11204a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11204a10(undefined4 param_1)

{
  func_0x100553bc(param_1);
  return;
}


// Reference entry 11205200; body size 40 bytes.
#line 1 "ENTRY_11205200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11205200(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_112869b0(param_1,param_2,param_3,param_4,param_5));
  thunk_FUN_112ea860(uVar1);
  return;
}


// Reference entry 11208210; body size 14 bytes.
#line 1 "ENTRY_11208210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11208210(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_11207ab0(param_2);
  return;
}


// Reference entry 11208c70; body size 18 bytes.
#line 1 "ENTRY_11208c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11208c70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_112084f0(param_2,param_3);
  return;
}


// Reference entry 11208e30; body size 5 bytes.
#line 1 "ENTRY_11208e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11208e30(undefined2 param_2)
{
  int param_1 = (int )this;
  *(undefined2 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 8) = 1;
  thunk_FUN_1145c720(param_1 + 0x38,0x18,&DAT_1188f3d4,param_2);
  return;
}


// Reference entry 11208e40; body size 5 bytes.
#line 1 "ENTRY_11208e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11208e40(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 8) = 4;
  thunk_FUN_1145c720(param_1 + 0x38,0x18,&DAT_11884800,param_2);
  return;
}


// Reference entry 112140a0; body size 5 bytes.
#line 1 "ENTRY_112140a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_112140a0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 112144d0; body size 11 bytes.
#line 1 "ENTRY_112144d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_112144d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RClient);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 112144e0; body size 11 bytes.
#line 1 "ENTRY_112144e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_112144e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RContentDirectory);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11214500; body size 34 bytes.
#line 1 "ENTRY_11214500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11214500(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  if (iVar1 != 0) {
    thunk_FUN_11203e10();
    thunk_FUN_1148a50e(iVar1,0x74c);
  }
  return;
}


// Reference entry 11214530; body size 38 bytes.
#line 1 "ENTRY_11214530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11214530(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_11203e10();
    thunk_FUN_1148a50e(param_1,0x74c);
  }
  return;
}


// Reference entry 1121dcb0; body size 5 bytes.
#line 1 "ENTRY_1121dcb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1121dcb0(short param_2)
{
  int param_1 = (int )this;
  *(short *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 8) = 2;
  thunk_FUN_1145c720(param_1 + 0x38,0x18,&DAT_11884800,(int)param_2);
  return;
}


// Reference entry 112233b0; body size 5 bytes.
#line 1 "ENTRY_112233b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_112233b0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 112237f0; body size 11 bytes.
#line 1 "ENTRY_112237f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_112237f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceProperties);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11223800; body size 41 bytes.
#line 1 "ENTRY_11223800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11223800(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  if (iVar1 != 0) {
    thunk_FUN_11203e10();
    thunk_FUN_1128f0f0();
    thunk_FUN_1148a50e(iVar1,0x68c);
  }
  return;
}


// Reference entry 11223840; body size 45 bytes.
#line 1 "ENTRY_11223840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11223840(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_11203e10();
    thunk_FUN_1128f0f0();
    thunk_FUN_1148a50e(param_1,0x68c);
  }
  return;
}


// Reference entry 112278c0; body size 22 bytes.
#line 1 "ENTRY_112278c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_112278c0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_1124ff50(param_1));
  *(undefined1 *)(iVar1 + 0x30) = 1;
  return;
}


// Reference entry 11227a50; body size 19 bytes.
#line 1 "ENTRY_11227a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11227a50(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11227a70; body size 11 bytes.
#line 1 "ENTRY_11227a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11227a70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11227a80; body size 13 bytes.
#line 1 "ENTRY_11227a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11227a80(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_4);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11227a90; body size 13 bytes.
#line 1 "ENTRY_11227a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11227a90(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_4);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11227aa0; body size 5 bytes.
#line 1 "ENTRY_11227aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11227aa0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11227ab0; body size 19 bytes.
#line 1 "ENTRY_11227ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11227ab0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11227ad0; body size 15 bytes.
#line 1 "ENTRY_11227ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11227ad0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 11227af0; body size 5 bytes.
#line 1 "ENTRY_11227af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11227af0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11227b00; body size 5 bytes.
#line 1 "ENTRY_11227b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11227b00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11227b10; body size 5 bytes.
#line 1 "ENTRY_11227b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11227b10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11227b20; body size 5 bytes.
#line 1 "ENTRY_11227b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11227b20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11227e80; body size 11 bytes.
#line 1 "ENTRY_11227e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11227e80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSystemProperties);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11227ef0; body size 41 bytes.
#line 1 "ENTRY_11227ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11227ef0(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  if (iVar1 != 0) {
    thunk_FUN_11203e10();
    thunk_FUN_1128f080();
    thunk_FUN_1148a50e(iVar1,0x68c);
  }
  return;
}


// Reference entry 11227f30; body size 45 bytes.
#line 1 "ENTRY_11227f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11227f30(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_11203e10();
    thunk_FUN_1128f080();
    thunk_FUN_1148a50e(param_1,0x68c);
  }
  return;
}


// Reference entry 1122a780; body size 3 bytes.
#line 1 "ENTRY_1122a780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1122a780(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1122a790; body size 11 bytes.
#line 1 "ENTRY_1122a790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_1122a790(undefined4 param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0xa948));
  if (uVar1 < 0x10) {
    *(uint *)(param_1 + 0xa948) = uVar1 + 1;
  }
  else {
    uVar1 = (uint)(uVar1 - 1);
  }
  *(int *)(param_1 + 0xbab8) = *(int *)(param_1 + 0xbab8) + 1;
  iVar2 = (int)(uVar1 * 0x60 + param_1 + 0xa940);
  (**(code **)(*(int *)(iVar2 + 0x1180) + 4))(param_2);
  *(undefined1 *)(iVar2 + 0x11d4) = 0;
  *(int *)(iVar2 + 0x11d0) = param_1 + 0xb59c;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar2 + 0x1180);
}


// Reference entry 1122a7a0; body size 11 bytes.
#line 1 "ENTRY_1122a7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_1122a7a0(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(*(uint *)(param_1 + 0xc0c4));
  if (uVar2 < 0x10) {
    *(uint *)(param_1 + 0xc0c4) = uVar2 + 1;
  }
  else {
    uVar2 = (uint)(uVar2 - 1);
  }
  *(int *)(param_1 + 0xc0c8) = *(int *)(param_1 + 0xc0c8) + 1;
  iVar1 = (int)(param_1 + 0xc0c0 + uVar2 * 0x38);
  (**(code **)(*(int *)(param_1 + 0xc3a8 + uVar2 * 0x38) + 4))(param_2);
  *(undefined1 *)(iVar1 + 0x31a) = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1 + 0x2e8);
}


// Reference entry 1122a8e0; body size 3 bytes.
#line 1 "ENTRY_1122a8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1122a8e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1122a8f0; body size 9 bytes.
#line 1 "ENTRY_1122a8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1122a8f0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 1122a900; body size 17 bytes.
#line 1 "ENTRY_1122a900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::FUN_1122a900(undefined4 *param_2)
{
  undefined1 *param_1 = (undefined1 *)this;
  *param_1 = (undefined1)(1);
  *(undefined4 *)(param_1 + 4) = *param_2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(param_1);
}


// Reference entry 1122a920; body size 24 bytes.
#line 1 "ENTRY_1122a920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __thiscall Recovered_Bulk::FUN_1122a920(char *param_2)
{
  char *param_1 = (char *)this;
  *param_1 = (char)(*param_2);
  if (*param_2 != '\0') {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)(param_1);
}


// Reference entry 1122a940; body size 13 bytes.
#line 1 "ENTRY_1122a940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1122a940(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1122ae20; body size 64 bytes.
#line 1 "ENTRY_1122ae20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_1122ae20(int param_2,int param_3)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = (int)(*(int *)(param_1 + 4));
  if (iVar1 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_3);
  }
  iVar2 = (int)(*(int *)(param_1 + 0xc));
  piVar3 = (int *)(*(int **)(param_1 + 8));
  piVar4 = (int *)(*(int **)(param_3 + 4));
  *(int **)(iVar2 + 4) = piVar4;
  *piVar4 = (int)(iVar2);
  *piVar3 = (int)(param_3);
  *(int **)(param_3 + 4) = piVar3;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + iVar1;
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar2);
}


// Reference entry 1122ae70; body size 13 bytes.
#line 1 "ENTRY_1122ae70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1122ae70(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1122ae80; body size 3 bytes.
#line 1 "ENTRY_1122ae80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1122ae80(void)

{
  return;
}


// Reference entry 1122ae90; body size 3 bytes.
#line 1 "ENTRY_1122ae90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1122ae90(void)

{
  return;
}


// Reference entry 1122aea0; body size 5 bytes.
#line 1 "ENTRY_1122aea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1122aea0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1122aeb0; body size 3 bytes.
#line 1 "ENTRY_1122aeb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1122aeb0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1122aec0; body size 3 bytes.
#line 1 "ENTRY_1122aec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1122aec0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1122af20; body size 11 bytes.
#line 1 "ENTRY_1122af20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1122af20(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1122b190; body size 15 bytes.
#line 1 "ENTRY_1122b190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1122b190(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 1122b1b0; body size 15 bytes.
#line 1 "ENTRY_1122b1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1122b1b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 1122b1d0; body size 5 bytes.
#line 1 "ENTRY_1122b1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1122b1d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1122b1e0; body size 7 bytes.
#line 1 "ENTRY_1122b1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1122b1e0(undefined4 param_1)

{
  undefined1 uStack_1;
  
  uStack_1 = (undefined1)((undefined1)((uint)param_1 >> 0x18));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(uStack_1);
}


// Reference entry 1122b1f0; body size 18 bytes.
#line 1 "ENTRY_1122b1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1122b1f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1122b210; body size 15 bytes.
#line 1 "ENTRY_1122b210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_1122b210(undefined1 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined1)(0);
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(param_1);
}


// Reference entry 1122b7e0; body size 3 bytes.
#line 1 "ENTRY_1122b7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1122b7e0(void)

{
  return;
}


// Reference entry 1122b7f0; body size 3 bytes.
#line 1 "ENTRY_1122b7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1122b7f0(void)

{
  return;
}


// Reference entry 1122b930; body size 17 bytes.
#line 1 "ENTRY_1122b930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1122b930(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_exception);
  __std_exception_destroy(param_1 + 1);
  return;
}


// Reference entry 1122b950; body size 17 bytes.
#line 1 "ENTRY_1122b950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1122b950(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_exception);
  __std_exception_destroy(param_1 + 1);
  return;
}


// Reference entry 1122bd00; body size 3 bytes.
#line 1 "ENTRY_1122bd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1122bd00(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 1122bd30; body size 13 bytes.
#line 1 "ENTRY_1122bd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1122bd30(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 1122bd40; body size 11 bytes.
#line 1 "ENTRY_1122bd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1122bd40(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 1122c2d0; body size 11 bytes.
#line 1 "ENTRY_1122c2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1122c2d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1122c2e0; body size 3 bytes.
#line 1 "ENTRY_1122c2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1122c2e0(void)

{
  return;
}


// Reference entry 1122c2f0; body size 3 bytes.
#line 1 "ENTRY_1122c2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1122c2f0(undefined1 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*param_1);
}


// Reference entry 1122c9c0; body size 20 bytes.
#line 1 "ENTRY_1122c9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_1122c9c0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1122af30(param_1,param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1122cdc0; body size 3 bytes.
#line 1 "ENTRY_1122cdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1122cdc0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1122cdd0; body size 3 bytes.
#line 1 "ENTRY_1122cdd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1122cdd0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1122ddd0; body size 4 bytes.
#line 1 "ENTRY_1122ddd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1122ddd0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1122df00; body size 3 bytes.
#line 1 "ENTRY_1122df00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1122df00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1122df10; body size 3 bytes.
#line 1 "ENTRY_1122df10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1122df10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1122df20; body size 3 bytes.
#line 1 "ENTRY_1122df20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1122df20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1122df30; body size 3 bytes.
#line 1 "ENTRY_1122df30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1122df30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1122df50; body size 36 bytes.
#line 1 "ENTRY_1122df50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1122df50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_1123ec00();
  param_1[0x3162] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSubmitUsageMetrics);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1122e0f0; body size 30 bytes.
#line 1 "ENTRY_1122e0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1122e0f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1122e130; body size 14 bytes.
#line 1 "ENTRY_1122e130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1122e130(int param_1)

{
  thunk_FUN_112a7f20(param_1 + 0x150);
  return;
}


// Reference entry 1122e230; body size 13 bytes.
#line 1 "ENTRY_1122e230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1122e230(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x160) = param_2;
  return;
}


// Reference entry 1122e240; body size 13 bytes.
#line 1 "ENTRY_1122e240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1122e240(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x164) = param_2;
  return;
}


// Reference entry 1122e2a0; body size 11 bytes.
#line 1 "ENTRY_1122e2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1122e2a0(int *param_1)

{
  (**(code **)(*param_1 + 0x5c))("<ucs>");
  return;
}


// Reference entry 1122e880; body size 11 bytes.
#line 1 "ENTRY_1122e880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1122e880(int *param_1)

{
  (**(code **)(*param_1 + 0x5c))("</ucs>");
  return;
}


// Reference entry 1122e890; body size 156 bytes.
#line 1 "ENTRY_1122e890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

short * FUN_1122e890(short *param_1,int param_2,short param_3,int param_4,int param_5)

{
  int iVar1;
  short *psVar2;
  char *pcVar3;
  
  iVar1 = (int)(0);
  psVar2 = (short *)(param_1);
  if (0 < param_2) {
    do {
      if (((param_3 == *psVar2) && (param_4 == *(int *)(psVar2 + 2))) &&
         (param_5 == *(int *)(psVar2 + 4))) {
        pcVar3 = (char *)("find(%d,%u,%u) -> existing %d");
LAB_1122e8ed:
        thunk_FUN_112b0270("usagemetrics",8,pcVar3,(int)param_3,param_4,param_5,iVar1);
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ short *)(psVar2);
      }
      if (*psVar2 == -1) {
        psVar2 = (short *)(param_1 + iVar1 * 8);
        pcVar3 = (char *)("find(%d,%u,%u) -> new %d");
        *psVar2 = (short)(param_3);
        *(int *)(psVar2 + 2) = param_4;
        *(int *)(psVar2 + 4) = param_5;
        psVar2[6] = (short)(0);
        psVar2[7] = (short)(0);
        goto LAB_1122e8ed;
      }
      iVar1 = (int)(iVar1 + 1);
      psVar2 = (short *)(psVar2 + 8);
    } while (iVar1 < param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ short *)((short *)0x0);
}


// Reference entry 1122e960; body size 7 bytes.
#line 1 "ENTRY_1122e960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1122e960(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x8568);
}


// Reference entry 1122eed0; body size 515 bytes.
#line 1 "ENTRY_1122eed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1122eed0(int *param_2)
{
  char *param_1 = (char *)this;
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *_Str;
  int iVar4;
  int iVar5;
  undefined1 auStack_c0 [2];
  bool bStack_be;
  char cStack_bd;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  int iStack_ac;
  undefined1 auStack_a8 [36];
  undefined1 auStack_84 [128];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)auStack_c0);
  pcVar1 = (char *)(param_1 + 0x150);
  cStack_bd = (char)(thunk_FUN_112a7f50(pcVar1));
  if (((param_1[0x32] == '\0') || (*param_1 == '\0')) || (param_1[0x11] == '\0')) {
    bStack_be = (bool)(false);
  }
  else {
    bStack_be = (bool)(true);
  }
  iStack_bc = (int)(*(int *)(param_1 + 0x138));
  uStack_b0 = (undefined4)(*(undefined4 *)(param_1 + 0x13c));
  iStack_b8 = (int)(*(int *)(param_1 + 0x140));
  iStack_ac = (int)(*(int *)(param_1 + 0x134));
  iStack_b4 = (int)(iStack_b8);
  thunk_FUN_1145c250(auStack_84,param_1 + 0x33,0x80);
  thunk_FUN_1145c250(auStack_a8,param_1 + 0x11,0x21);
  if (cStack_bd != '\0') {
    thunk_FUN_112a8010(pcVar1);
  }
  if (bStack_be != false) {
    if (param_2 == (int *)0x0) {
      iVar3 = (int)(thunk_FUN_1122e2b0(auStack_84,auStack_a8,"pollInterval.htm",&iStack_bc));
      bStack_be = (bool)(iVar3 == 0);
      iVar4 = (int)(iStack_bc);
      if (iVar3 != 0) {
        iVar4 = (int)(0x7fffffff);
      }
    }
    else {
      iVar3 = (int)((**(code **)(*param_2 + 0x74))());
      bStack_be = (bool)(true);
      iVar4 = (int)(0x7fffffff);
      if (0 < iVar3) {
        iVar4 = (int)(iVar3);
      }
    }
    _Str = (char *)((char *)thunk_FUN_11265090(0x21,&DAT_1186d2ee));
    if (*_Str != '\0') {
      iVar4 = (int)(atoi(_Str));
    }
    if (iVar4 == 0x7fffffff) {
      iVar4 = (int)(0x708);
    }
    iVar3 = (int)(iStack_b4);
    if (bStack_be != false) {
      if (param_2 == (int *)0x0) {
        iVar5 = (int)(thunk_FUN_1122e2b0(auStack_84,auStack_a8,"wifiTxRateThreshold.htm",&uStack_b0));
        iVar3 = (int)(iStack_b4);
        if (iVar5 == 0) {
          thunk_FUN_1122e2b0(auStack_84,auStack_a8,"wifiLatencyThreshold.htm",&iStack_b8);
          iVar3 = (int)(iStack_b8);
        }
      }
      else {
        (**(code **)(*param_2 + 0x78))();
        iVar5 = (int)((**(code **)(*param_2 + 0x7c))());
        iVar3 = (int)(0x32);
        if (0 < iVar5) {
          iVar3 = (int)(iVar5);
        }
      }
    }
    cVar2 = (char)(thunk_FUN_112a7f50(pcVar1));
    if (iStack_ac == *(int *)(param_1 + 0x134)) {
      *(undefined4 *)(param_1 + 0x13c) = uStack_b0;
      *(int *)(param_1 + 0x138) = iVar4;
      *(int *)(param_1 + 0x140) = iVar3;
      *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + 1;
    }
    if (cVar2 != '\0') {
      thunk_FUN_112a8010(pcVar1);
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1122f160; body size 13 bytes.
#line 1 "ENTRY_1122f160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1122f160(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x798) = param_2;
  return;
}


// Reference entry 1122f170; body size 13 bytes.
#line 1 "ENTRY_1122f170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1122f170(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x158) = param_2;
  return;
}


// Reference entry 1122f180; body size 13 bytes.
#line 1 "ENTRY_1122f180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1122f180(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x15c) = param_2;
  return;
}


// Reference entry 1122f190; body size 5 bytes.
#line 1 "ENTRY_1122f190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __stdcall FUN_1122f190(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 1122fec0; body size 88 bytes.
#line 1 "ENTRY_1122fec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1122fec0(int *param_2)
{
  int *param_1 = (int *)this;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 auStack_104 [256];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)auStack_104);
  uStack_10c = (undefined4)(0);
  uStack_110 = (undefined4)(0x100);
  (**(code **)(*param_2 + 0xc))(auStack_104);
  (**(code **)(*param_1 + 100))(&DAT_11895278,&uStack_110);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 11230890; body size 3 bytes.
#line 1 "ENTRY_11230890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11230890(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 112308a0; body size 3 bytes.
#line 1 "ENTRY_112308a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112308a0(void)

{
  return;
}


// Reference entry 11230b70; body size 63 bytes.
#line 1 "ENTRY_11230b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11230b70(undefined1 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[2] = (undefined4)(param_3);
  param_1[4] = (undefined4)(param_4);
  param_1[5] = (undefined4)(param_5);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RLFMGetSessionCB);
  param_1[1] = (undefined4)(param_2);
  *(undefined2 *)(param_1 + 3) = 0;
  *param_2 = (undefined1)(0);
  if ((undefined1 *)param_1[4] != (undefined1 *)0x0) {
    *(undefined1 *)param_1[4] = (undefined4)(0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11230bc0; body size 81 bytes.
#line 1 "ENTRY_11230bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11230bc0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
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
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11230c30; body size 77 bytes.
#line 1 "ENTRY_11230c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11230c30(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11230ea0(param_2,param_3,param_4,param_5,param_6,param_9);
  param_1[0x1c68] = (undefined4)(param_7);
  param_1[0x1c69] = (undefined4)(param_8);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RLastFMClient);
  *(undefined1 *)(param_1 + 0x1c67) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11230d20; body size 18 bytes.
#line 1 "ENTRY_11230d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_11230d20(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_112332a0(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11231020; body size 9 bytes.
#line 1 "ENTRY_11231020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11231020(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RLastFMResultCB);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 112313e0; body size 3 bytes.
#line 1 "ENTRY_112313e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112313e0(void)

{
  return;
}


// Reference entry 11231450; body size 3 bytes.
#line 1 "ENTRY_11231450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11231450(void)

{
  return;
}


// Reference entry 11231540; body size 7 bytes.
#line 1 "ENTRY_11231540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11231540(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RLastFMResultCB);
  return;
}


// Reference entry 11231640; body size 3 bytes.
#line 1 "ENTRY_11231640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11231640(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 112319d0; body size 169 bytes.
#line 1 "ENTRY_112319d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112319d0(char *param_1,char *param_2,undefined4 *param_3,int param_4,int param_5)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  char *pcVar5;
  
  pcVar3 = (char *)(param_1);
  do {
    cVar1 = (char)(*pcVar3);
    pcVar3 = (char *)(pcVar3 + 1);
  } while (cVar1 != '\0');
  puVar4 = (undefined1 *)((undefined1 *)*param_3);
  if (puVar4 < (undefined1 *)(param_4 + -1)) {
    *puVar4 = (undefined1)(0x26);
    puVar4 = (undefined1 *)(puVar4 + 1);
  }
  thunk_FUN_1106a8d0(puVar4,param_1,param_4 - (int)puVar4);
  pcVar5 = (char *)(puVar4 + ((int)pcVar3 - (int)(param_1 + 1)));
  if (pcVar5 < (char *)(param_4 + -1)) {
    *pcVar5 = (char)('=');
    pcVar5 = (char *)(pcVar5 + 1);
  }
  thunk_FUN_11247e90(param_2,pcVar5,param_4 - (int)pcVar5);
  do {
    pcVar2 = (char *)(pcVar5);
    pcVar5 = (char *)(pcVar2 + 1);
  } while (*pcVar2 != '\0');
  *param_3 = (undefined4)(pcVar2);
  if (param_5 != 0) {
    thunk_FUN_113d1d90(param_5,param_1,(int)pcVar3 - (int)(param_1 + 1));
    pcVar3 = (char *)(param_2);
    do {
      cVar1 = (char)(*pcVar3);
      pcVar3 = (char *)(pcVar3 + 1);
    } while (cVar1 != '\0');
    thunk_FUN_113d1d90(param_5,param_2,(int)pcVar3 - (int)(param_2 + 1));
  }
  return;
}


// Reference entry 11231ab0; body size 23 bytes.
#line 1 "ENTRY_11231ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11231ab0(char *param_1,char *param_2,undefined4 *param_3,int param_4,int param_5)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  char *pcVar5;
  
  if (param_2 != (char *)0x0) {
    pcVar3 = (char *)(param_1);
    do {
      cVar1 = (char)(*pcVar3);
      pcVar3 = (char *)(pcVar3 + 1);
    } while (cVar1 != '\0');
    puVar4 = (undefined1 *)((undefined1 *)*param_3);
    if (puVar4 < (undefined1 *)(param_4 + -1)) {
      *puVar4 = (undefined1)(0x26);
      puVar4 = (undefined1 *)(puVar4 + 1);
    }
    thunk_FUN_1106a8d0(puVar4,param_1,param_4 - (int)puVar4);
    pcVar5 = (char *)(puVar4 + ((int)pcVar3 - (int)(param_1 + 1)));
    if (pcVar5 < (char *)(param_4 + -1)) {
      *pcVar5 = (char)('=');
      pcVar5 = (char *)(pcVar5 + 1);
    }
    thunk_FUN_11247e90(param_2,pcVar5,param_4 - (int)pcVar5);
    do {
      pcVar2 = (char *)(pcVar5);
      pcVar5 = (char *)(pcVar2 + 1);
    } while (*pcVar2 != '\0');
    *param_3 = (undefined4)(pcVar2);
    if (param_5 != 0) {
      thunk_FUN_113d1d90(param_5,param_1,(int)pcVar3 - (int)(param_1 + 1));
      pcVar3 = (char *)(param_2);
      do {
        cVar1 = (char)(*pcVar3);
        pcVar3 = (char *)(pcVar3 + 1);
      } while (cVar1 != '\0');
      thunk_FUN_113d1d90(param_5,param_2,(int)pcVar3 - (int)(param_2 + 1));
    }
    return;
  }
  return;
}


// Reference entry 11231ad0; body size 59 bytes.
#line 1 "ENTRY_11231ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11231ad0(undefined4 param_1,undefined4 param_2,char *param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  
  if (param_4 != 0) {
    thunk_FUN_113d1d90(param_4,param_1,param_2);
    pcVar2 = (char *)(param_3);
    do {
      cVar1 = (char)(*pcVar2);
      pcVar2 = (char *)(pcVar2 + 1);
    } while (cVar1 != '\0');
    thunk_FUN_113d1d90(param_4,param_3,(int)pcVar2 - (int)(param_3 + 1));
  }
  return;
}


// Reference entry 112329b0; body size 8 bytes.
#line 1 "ENTRY_112329b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint * __thiscall Recovered_Bulk::FUN_112329b0(void *param_2,size_t param_3)
{
  int param_1 = (int )this;
  undefined1 *_Memory;
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  
  puVar3 = (uint *)((uint *)(param_1 + 0x4c));
  if (param_3 != 0) {
    uVar1 = (uint)(*(int *)(param_1 + 0x50) + 1 + param_3);
    if (*puVar3 < uVar1) {
      uVar4 = (uint)(*puVar3 * 2);
      if (uVar4 <= uVar1) {
        uVar4 = (uint)(uVar1);
      }
      uVar2 = (undefined4)(thunk_FUN_1148b586(uVar4));
      *puVar3 = (uint)(uVar4);
      _Memory = (undefined1 *)(*(undefined1 **)(param_1 + 0x54));
      thunk_FUN_1145c250(uVar2,_Memory,uVar4);
      *(undefined4 *)(param_1 + 0x54) = uVar2;
      if (_Memory == (undefined1 *)(param_1 + 0x58)) {
        *(undefined1 *)(param_1 + 0x58) = 0;
      }
      else {
        free(_Memory);
      }
    }
    memcpy((void *)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x50)),param_2,param_3);
    *(undefined1 *)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x50) + param_3) = 0;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + param_3;
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint *)(puVar3);
}


// Reference entry 112329c0; body size 21 bytes.
#line 1 "ENTRY_112329c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112329c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_11234290(param_2,param_3);
  return;
}


// Reference entry 112333f0; body size 58 bytes.
#line 1 "ENTRY_112333f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_112333f0(undefined4 param_2,int param_3)
{
  int *param_1 = (int *)this;
  undefined4 uVar1;
  
  thunk_FUN_112b0270("lastfm",0xb,&DAT_119d5cb0,param_3,param_2);
  uVar1 = (undefined4)(1);
  if (param_3 != 0) {
    uVar1 = (undefined4)((**(code **)(*param_1 + 4))(param_2,param_3));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 11233860; body size 12 bytes.
#line 1 "ENTRY_11233860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_11233860(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 8) = param_2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 11233870; body size 12 bytes.
#line 1 "ENTRY_11233870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_11233870(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 11233e90; body size 323 bytes.
#line 1 "ENTRY_11233e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11233e90(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
 try {
  uint uVar1;
  char *pcVar2;
  int iVar3;
  undefined1 auStack_13c [8];
  undefined4 uStack_134;
  undefined1 uStack_12d;
  void *pvStack_12c;
  undefined1 *puStack_128;
  undefined4 uStack_124;
  undefined **appuStack_120 [5];
  undefined1 auStack_10c [129];
  undefined1 auStack_8b [65];
  undefined1 uStack_4a;
  undefined1 uStack_a;
  uint uStack_8;


  uVar1 = (uint)(DAT_12126b84 ^ (uint)appuStack_120);

  iVar3 = (int)(0);
  uStack_134 = (undefined4)(param_3);

  uStack_8 = (uint)(uVar1);
  pcVar2 = (char *)(strchr(param_1,0x40));
  if (pcVar2 != (char *)0x0) {
    do {
      iVar3 = (int)(iVar3 + 1);
      if (pcVar2 + 1 == (char *)0x0) break;
      pcVar2 = (char *)(strchr(pcVar2 + 1,0x40));
    } while (pcVar2 != (char *)0x0);
    if (iVar3 == 1) {
      thunk_FUN_111fe400(uVar1);
      appuStack_120[0] = (undefined **)((uint)&ghidra_vftable_RLastFMContentProvider);

      thunk_FUN_1106a8d0(auStack_10c,param_1,0x81);
      thunk_FUN_1106a8d0(auStack_8b,param_2,0x41);


      thunk_FUN_1145c930(auStack_13c,0);
      thunk_FUN_1145ad70(auStack_13c,20000);
      thunk_FUN_11232e50(auStack_13c,&uStack_12d,uStack_134,param_4);
      appuStack_120[0] = (undefined **)((uint)&ghidra_vftable_RLastFMContentProvider);
      thunk_FUN_111feb50();
    }
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 11234380; body size 18 bytes.
#line 1 "ENTRY_11234380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11234380(int param_1)

{
  if (*(void **)(param_1 + 8) != (void *)(param_1 + 0xc)) {
    free(*(void **)(param_1 + 8));
  }
  return;
}


// Reference entry 11234500; body size 5 bytes.
#line 1 "ENTRY_11234500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11234500(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMediaReceiverRegistrar);
  return;
}


// Reference entry 11235520; body size 13 bytes.
#line 1 "ENTRY_11235520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11235520(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1 *)(param_1 + 0x668) = param_2;
  return;
}


// Reference entry 11235530; body size 5 bytes.
#line 1 "ENTRY_11235530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * __cdecl strrchr(char *_Str,int _Ch)

{
  char *pcVar1;
  
                    
                    
  pcVar1 = (char *)(strrchr(_Str,_Ch));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)(pcVar1);
}


// Reference entry 11235940; body size 30 bytes.
#line 1 "ENTRY_11235940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11235940(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXMLRPCFaultResultCB);
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11235bd0; body size 9 bytes.
#line 1 "ENTRY_11235bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11235bd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXMLRPCResultCB);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11235be0; body size 80 bytes.
#line 1 "ENTRY_11235be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11235be0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_1125b810(param_1,LAB_1009926a,LAB_1008bb79,LAB_100730c4);
  param_1[3] = (undefined4)(param_2);
  param_1[4] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXMLRPCResultParser);
  param_1[2] = (undefined4)(0);
  param_1[5] = (undefined4)(0xff0000);
  param_1[0xc0e] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11235da0; body size 45 bytes.
#line 1 "ENTRY_11235da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11235da0(undefined4 *param_1)

{
  *param_1 = (undefined4)(2);
  param_1[2] = (undefined4)(0);
  thunk_FUN_11285a10();
  param_1[1] = (undefined4)(&DAT_1186d2ee);
  *(undefined1 *)(param_1 + 10) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11236080; body size 7 bytes.
#line 1 "ENTRY_11236080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11236080(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXMLRPCResultCB);
  return;
}


// Reference entry 11236090; body size 11 bytes.
#line 1 "ENTRY_11236090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11236090(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXMLRPCResultParser);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXMLParserBase);
  thunk_FUN_112c8b80(param_1[1]);
  param_1[1] = (undefined4)(0);
  thunk_FUN_11285a90();
  return;
}


// Reference entry 11236140; body size 36 bytes.
#line 1 "ENTRY_11236140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11236140(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)(1);
  thunk_FUN_1145c720(param_1 + 10,0x10,&DAT_11884800,param_2);
  return;
}


// Reference entry 11236170; body size 20 bytes.
#line 1 "ENTRY_11236170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11236170(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(4);
  param_1[1] = (undefined4)(param_2);
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}


// Reference entry 11236190; body size 20 bytes.
#line 1 "ENTRY_11236190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11236190(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(3);
  param_1[1] = (undefined4)(param_2);
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}


// Reference entry 112361b0; body size 20 bytes.
#line 1 "ENTRY_112361b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_112361b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(2);
  param_1[1] = (undefined4)(param_2);
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}


// Reference entry 112361d0; body size 48 bytes.
#line 1 "ENTRY_112361d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_112361d0(char param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_118872c0);
  *param_1 = (undefined4)(0);
  *(char *)(param_1 + 1) = param_2;
  if (param_2 != '\0') {
    puVar1 = (undefined1 *)(&DAT_11881128);
  }
  thunk_FUN_1145c250(param_1 + 10,puVar1,0x10);
  return;
}


// Reference entry 11236520; body size 28 bytes.
#line 1 "ENTRY_11236520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11236520(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x380));
  *(int *)(param_1 + 0x380) = iVar1 + 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + iVar1 * 0x38);
}


// Reference entry 11236550; body size 31 bytes.
#line 1 "ENTRY_11236550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_11236550(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x5c0) * 0x5c);
  *(int *)(param_1 + 0x5c0) = *(int *)(param_1 + 0x5c0) + 1;
  *(undefined4 *)(iVar1 + param_1) = param_2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 4 + iVar1);
}


// Reference entry 11236580; body size 24 bytes.
#line 1 "ENTRY_11236580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11236580(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x5c4));
  *(int *)(param_1 + 0x5c4) = iVar1 + 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1 * 0x5c + 4 + param_1);
}


// Reference entry 112365f0; body size 42 bytes.
#line 1 "ENTRY_112365f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_112365f0(int param_1)

{
  if ((((*(int *)(param_1 + 0x3038) == 3) && (*(char *)(param_1 + 0x3017) == '\a')) &&
      (*(char *)(param_1 + 0x3018) == '\n')) && (*(char *)(param_1 + 0x3019) == '\t')) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11236720; body size 220 bytes.
#line 1 "ENTRY_11236720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_11236720(int param_2,int param_3,int *param_4)
{
  int param_1 = (int )this;
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar4 = (int)(0);
  iVar1 = (int)(*(int *)(param_1 + 900));
  iVar5 = (int)(param_3);
  do {
    iVar3 = (int)(iVar1);
    if (iVar1 == 4) break;
    if (iVar1 == 2) {
      cVar2 = (char)(thunk_FUN_112372f0(param_2,iVar5,&param_3));
    }
    else {
      cVar2 = (char)((**(code **)(*(int *)(param_1 + 0x388) + 8))(param_2,iVar5,&param_3));
    }
    iVar4 = (int)(iVar4 + param_3);
    param_2 = (int)(param_2 + param_3);
    iVar5 = (int)(iVar5 - param_3);
    if (cVar2 == '\0') {
      switch(*(undefined4 *)(param_1 + 900)) {
      case 0:
        *(undefined4 *)(param_1 + 900) = 1;
        (**(code **)(*(int *)(param_1 + 0x388) + 4))("<array><data>",0xd,0);
        break;
      case 1:
        if (*(int *)(param_1 + 0x380) == 0) {
code_r0x11236808:
          *(undefined4 *)(param_1 + 900) = 3;
          (**(code **)(*(int *)(param_1 + 0x388) + 4))("</data></array>",0xf,0);
        }
        else {
          *(undefined4 *)(param_1 + 900) = 2;
        }
        break;
      case 2:
        *(int *)(param_1 + 0x3a4) = *(int *)(param_1 + 0x3a4) + 1;
        if (*(uint *)(param_1 + 0x380) <= *(uint *)(param_1 + 0x3a4)) goto code_r0x11236808;
        break;
      default:
        *(undefined4 *)(param_1 + 900) = 4;
      }
    }
    iVar3 = (int)(*(int *)(param_1 + 900));
    bVar6 = (bool)(iVar1 != iVar3);
    iVar1 = (int)(iVar3);
  } while ((bVar6) || (iVar5 != 0));
  if (param_4 != (int *)0x0) {
    *param_4 = (int)(iVar4);
    iVar3 = (int)(*(int *)(param_1 + 900));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(iVar3 != 4);
}


// Reference entry 11236c80; body size 176 bytes.
#line 1 "ENTRY_11236c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_11236c80(int param_2,int param_3,int *param_4)
{
  int param_1 = (int )this;
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar4 = (int)(0);
  iVar1 = (int)(*(int *)(param_1 + 0x3c));
  iVar5 = (int)(param_3);
  do {
    iVar3 = (int)(iVar1);
    if (iVar1 == 4) break;
    if (iVar1 == 2) {
      cVar2 = (char)(thunk_FUN_112372f0(param_2,iVar5,&param_3));
    }
    else {
      cVar2 = (char)((**(code **)(*(int *)(param_1 + 0x40) + 8))(param_2,iVar5,&param_3));
    }
    iVar4 = (int)(iVar4 + param_3);
    param_2 = (int)(param_2 + param_3);
    iVar5 = (int)(iVar5 - param_3);
    if (cVar2 == '\0') {
      switch(*(undefined4 *)(param_1 + 0x3c)) {
      case 0:
        *(undefined4 *)(param_1 + 0x3c) = 1;
        (**(code **)(*(int *)(param_1 + 0x40) + 4))("<param>",7,0);
        break;
      case 1:
        *(undefined4 *)(param_1 + 0x3c) = 2;
        break;
      case 2:
        *(undefined4 *)(param_1 + 0x3c) = 3;
        (**(code **)(*(int *)(param_1 + 0x40) + 4))("</param>",8,0);
        break;
      default:
        *(undefined4 *)(param_1 + 0x3c) = 4;
      }
    }
    iVar3 = (int)(*(int *)(param_1 + 0x3c));
    bVar6 = (bool)(iVar1 != iVar3);
    iVar1 = (int)(iVar3);
  } while ((bVar6) || (iVar5 != 0));
  if (param_4 != (int *)0x0) {
    *param_4 = (int)(iVar4);
    iVar3 = (int)(*(int *)(param_1 + 0x3c));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(iVar3 != 4);
}


// Reference entry 11237820; body size 119 bytes.
#line 1 "ENTRY_11237820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11237820(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  char cVar2;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    uVar1 = (uint)(*(uint *)(param_1 + 0x3038));
    if (uVar1 == 0) {
      *(undefined1 *)(param_1 + 0x14) = 1;
      return;
    }
    if (((((2 < uVar1) && (*(char *)(uVar1 + 0x3016 + param_1) == '\b')) &&
         (*(char *)(uVar1 + 0x3015 + param_1) == '\x06')) &&
        (*(char *)(uVar1 + 0x3014 + param_1) == '\f')) ||
       ((cVar2 = thunk_FUN_112366e0(), cVar2 != '\0' ||
        ((*(char *)(uVar1 + 0x3016 + param_1) == '\r' && (*(char *)(param_1 + 0x16) == '\r')))))) {
      thunk_FUN_11247d40(param_1 + 0x17,0x3000,param_2,param_3);
    }
  }
  return;
}


// Reference entry 11237b80; body size 14 bytes.
#line 1 "ENTRY_11237b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11237b80(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_112378c0(param_2);
  return;
}


// Reference entry 11237c30; body size 4 bytes.
#line 1 "ENTRY_11237c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11237c30(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 11237d30; body size 12 bytes.
#line 1 "ENTRY_11237d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_11237d30(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_11237dd0());
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1 + 0xf);
}


// Reference entry 11237d40; body size 77 bytes.
#line 1 "ENTRY_11237d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11237d40(undefined4 *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = (uint)(0);
  puVar1 = (uint *)(param_1 + 0x170);
  iVar4 = (int)(0x11);
  if (*puVar1 != 0) {
    do {
      iVar2 = (int)(thunk_FUN_11285d80(*param_1));
      iVar3 = (int)(thunk_FUN_11237dd0());
      param_1 = (undefined4 *)(param_1 + 0x17);
      iVar4 = (int)(iVar4 + iVar3 + iVar2 + 0x1e);
      uVar5 = (uint)(uVar5 + 1);
    } while (uVar5 < *puVar1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar4);
}


// Reference entry 11237ef0; body size 66 bytes.
#line 1 "ENTRY_11237ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11237ef0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (int)(0);
  uVar3 = (uint)(0);
  if (param_1[0x171] != 0) {
    do {
      iVar1 = (int)(thunk_FUN_11237dd0());
      uVar3 = (uint)(uVar3 + 1);
      iVar2 = (int)(iVar2 + 0xf + iVar1);
    } while (uVar3 < (uint)param_1[0x171]);
  }
  iVar1 = (int)(thunk_FUN_11285d80(*param_1));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1 + iVar2 + 0x58);
}


// Reference entry 11237fd0; body size 99 bytes.
#line 1 "ENTRY_11237fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11237fd0(char *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint *puVar1;
  char *pcVar2;
  uint uVar3;
  
  pcVar2 = (char *)("unnamed");
  if (param_2 != (char *)0x0) {
    pcVar2 = (char *)(param_2);
  }
  thunk_FUN_112b0270("xmlrpc",3,"beginning of <%.256s> struct ",pcVar2);
  uVar3 = (uint)(0);
  puVar1 = (uint *)(param_1 + 0x170);
  if (*puVar1 != 0) {
    do {
      thunk_FUN_11238060(*param_1);
      uVar3 = (uint)(uVar3 + 1);
      param_1 = (undefined4 *)(param_1 + 0x17);
    } while (uVar3 < *puVar1);
  }
  thunk_FUN_112b0270("xmlrpc",3,"end of <%.256s> struct ",pcVar2);
  return;
}


// Reference entry 11238050; body size 11 bytes.
#line 1 "ENTRY_11238050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11238050(void)

{
  thunk_FUN_11238060(0);
  return;
}


// Reference entry 112382a0; body size 42 bytes.
#line 1 "ENTRY_112382a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __thiscall Recovered_Bulk::FUN_112382a0(undefined4 param_2,int param_3)
{
  int param_1 = (int )this;
  char cVar1;
  
  if (param_3 != 0) {
    cVar1 = (char)((**(code **)(*(int *)(param_1 + 0x414) + 4))(param_2,param_3));
    if (cVar1 == '\0') {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
}


// Reference entry 11238b10; body size 18 bytes.
#line 1 "ENTRY_11238b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11238b10(int param_1)

{
  if ((*(char *)(param_1 + 0x14) == '\0') && (*(char *)(param_1 + 0x15) != '\0')) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11239550; body size 60 bytes.
#line 1 "ENTRY_11239550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11239550(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  param_1[0x2042] = (undefined1)(0);
  param_1[0x4084] = (undefined1)(0);
  param_1[0x2001] = (undefined1)(0);
  param_1[0x4043] = (undefined1)(0);
  thunk_FUN_111d7620(param_1 + 0x40c5);
  param_1[0x4cca] = (undefined1)(0);
  return;
}


// Reference entry 112395a0; body size 29 bytes.
#line 1 "ENTRY_112395a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112395a0(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  param_1[0x2001] = (undefined1)(0);
  param_1[0x2042] = (undefined1)(0);
  param_1[0x2083] = (undefined1)(0);
  return;
}


// Reference entry 11239b70; body size 71 bytes.
#line 1 "ENTRY_11239b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_11239b70(int *param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 != (int *)(param_2)) {
    puVar1 = (undefined4 *)((undefined4 *)*param_1);
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    iVar2 = (int)(*param_2);
    *param_1 = (int)(iVar2);
    if (iVar2 != 0) {
      thunk_FUN_1123fce0(iVar2 + 4);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 11239bd0; body size 7 bytes.
#line 1 "ENTRY_11239bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11239bd0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 11239be0; body size 3 bytes.
#line 1 "ENTRY_11239be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11239be0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 1123a020; body size 26 bytes.
#line 1 "ENTRY_1123a020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1123a020(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  *(undefined1 *)(param_1 + 0x31) = 0;
  param_1[0x32] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1123a130; body size 91 bytes.
#line 1 "ENTRY_1123a130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1123a130(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[9] = (undefined4)(0);
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[0xb] = (undefined4)(0);
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0x36] = (undefined4)(0);
  param_1[0x37] = (undefined4)(0);
  param_1[0x3c] = (undefined4)(0);
  *(undefined1 *)(param_1 + 0x38) = 0;
  param_1[0x3e] = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[10] = (undefined4)(0xf);
  param_1[0x3d] = (undefined4)(0xf);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1123a870; body size 7 bytes.
#line 1 "ENTRY_1123a870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1123a870(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x8591);
}


// Reference entry 1123a880; body size 7 bytes.
#line 1 "ENTRY_1123a880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1123a880(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x858c));
}


// Reference entry 1123ad50; body size 49 bytes.
#line 1 "ENTRY_1123ad50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1123ad50(undefined4 *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(param_2);
  if (0xf < (uint)param_2[5]) {
    puVar1 = (undefined4 *)((undefined4 *)*param_2);
  }
  puVar2 = (undefined4 *)(param_1);
  if (0xf < (uint)param_1[5]) {
    puVar2 = (undefined4 *)((undefined4 *)*param_1);
  }
  thunk_FUN_10c66110(puVar2,param_1[4],param_3,puVar1,param_2[4]);
  return;
}


// Reference entry 1123b0c0; body size 195 bytes.
#line 1 "ENTRY_1123b0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1123b0c0(int *param_2,char param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  __time64_t _Var4;
  
  if (param_2[0x37] == 3) {
    if (*(char *)((int)param_2 + 0xf) == '\0') {
      if (param_3 == '\0') {
        uVar1 = (uint)((uint)*(ushort *)(param_2 + 3) * (uint)*(ushort *)(param_2 + 3));
        iVar3 = (int)((int)uVar1 >> 0x1f);
        if ((-1 < iVar3) && (((int)uVar1 < 0 || (299 < uVar1)))) {
          uVar1 = (uint)(300);
          iVar3 = (int)(0);
        }
        _Var4 = (__time64_t)(_time64((__time64_t *)0x0));
        *(__time64_t *)(param_2 + 0x34) = _Var4 + ((unsigned long long)(iVar3) << 32 | (unsigned long long)(uVar1));
      }
      else {
        thunk_FUN_112b0270(&DAT_118c9974,6,"Received HTTP_GONE, setting renew timeout to max.");
        param_2[0x34] = (int)(0x7fffffff);
        param_2[0x35] = (int)(0);
      }
    }
    if ((*(char *)((int)param_2 + 0xe) != '\0') &&
       (*(undefined1 *)((int)param_2 + 0xe) = 0, *(int *)(param_1 + 0x4a4) != 0)) {
      uVar2 = (undefined4)((**(code **)(*(int *)(*param_2 + *(int *)(*(int *)*param_2 + 4)) + 0x38))
                        (*(undefined1 *)((int)param_2 + 0xf)));
      (**(code **)(param_1 + 0x4a4))(uVar2);
    }
  }
  return;
}


// Reference entry 1123b200; body size 21 bytes.
#line 1 "ENTRY_1123b200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_1123b200(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(*(uint *)(param_2 + 4));
  if (*(uint *)(param_2 + 4) < *(uint *)(param_1 + 0x4a8)) {
    uVar1 = (uint)(*(uint *)(param_1 + 0x4a8));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 1123b220; body size 6 bytes.
#line 1 "ENTRY_1123b220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_1123b220(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(DAT_122f563d);
}


// Reference entry 1123b230; body size 6 bytes.
#line 1 "ENTRY_1123b230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_1123b230(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(DAT_122f563c);
}


// Reference entry 1123b240; body size 8 bytes.
#line 1 "ENTRY_1123b240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1123b240(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x410);
}


// Reference entry 1123b250; body size 118 bytes.
#line 1 "ENTRY_1123b250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __stdcall FUN_1123b250(int *param_1,undefined1 param_2,char param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = (undefined4 *)(operator_new(0xcc));
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    *(undefined1 *)(puVar2 + 0x31) = 0;
    puVar2[0x32] = (undefined4)(0);
  }
  *puVar2 = (undefined4)(param_1);
  iVar1 = (int)(*(int *)(*(int *)(*param_1 + 4) + (int)param_1));
  if (param_3 == '\0') {
    uVar3 = (undefined4)((**(code **)(iVar1 + 0x3c))());
  }
  else {
    uVar3 = (undefined4)((**(code **)(iVar1 + 0x40))());
  }
  thunk_FUN_1145c250(puVar2 + 1,uVar3,0xc0);
  *(undefined1 *)(puVar2 + 0x31) = param_2;
  puVar2[0x32] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(puVar2);
}


// Reference entry 1123b420; body size 7 bytes.
#line 1 "ENTRY_1123b420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1123b420(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x8588));
}


// Reference entry 1123b800; body size 142 bytes.
#line 1 "ENTRY_1123b800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1123b800(int param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  
  cVar2 = (char)(thunk_FUN_112a7f50(param_1 + 8));
  cVar3 = (char)(thunk_FUN_112a7f50(param_1 + 0x10));
  iVar1 = (int)(*(int *)(param_1 + 0x498));
  if (*(int *)(param_1 + 0x498) != 0) {
    do {
      iVar4 = (int)(iVar1);
      *(undefined4 *)(iVar4 + 0xdc) = 0;
      iVar1 = (int)(*(int *)(iVar4 + 0xd8));
    } while (*(int *)(iVar4 + 0xd8) != 0);
    if (iVar4 != 0) {
      *(undefined4 *)(iVar4 + 0xd8) = *(undefined4 *)(param_1 + 0x490);
      *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_1 + 0x498);
      *(undefined4 *)(param_1 + 0x498) = 0;
    }
  }
  if (cVar3 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x10);
  }
  if (cVar2 != '\0') {
    thunk_FUN_112a8010(param_1 + 8);
  }
  return;
}


// Reference entry 1123d2a0; body size 23 bytes.
#line 1 "ENTRY_1123d2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1123d2a0(int param_1)

{
  *(undefined1 *)(param_1 + 0x4a0) = 0;
  (**(code **)(**(int **)(param_1 + 4) + 4))(LAB_1000b0f5,0);
  return;
}


// Reference entry 1123d490; body size 21 bytes.
#line 1 "ENTRY_1123d490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1123d490(undefined4 param_1)

{
  if (DAT_122f5600 != 0) {
    *(undefined4 *)(DAT_122f5600 + 0x4a4) = param_1;
  }
  return;
}


// Reference entry 1123d4b0; body size 70 bytes.
#line 1 "ENTRY_1123d4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1123d4b0(undefined4 param_2,undefined2 param_3,undefined2 param_4,undefined4 param_5)
{
  int param_1 = (int )this;
  *(undefined2 *)(param_1 + 0x86) = param_3;
  *(undefined2 *)(param_1 + 0x88) = param_4;
  thunk_FUN_1145c250(param_1 + 0x6d,param_2,0x19);
  thunk_FUN_1145c250(param_1 + 0x8a,param_5,0x401);
  return;
}


// Reference entry 1123d510; body size 224 bytes.
#line 1 "ENTRY_1123d510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1123d510(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x4ac));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (undefined4)((uint)&ghidra_vftable_RSubscriptionRenewal);
    puVar1[1] = (undefined4)(0);
    *(undefined1 *)(puVar1 + 0x10) = 0;
    *(undefined1 *)(puVar1 + 0x1b) = 0;
    puVar1[0x123] = (undefined4)(0);
    puVar1[0x124] = (undefined4)(0);
    puVar1[0x125] = (undefined4)(0);
    puVar1[0x126] = (undefined4)(0);
    puVar1[0x127] = (undefined4)(0);
    *(undefined2 *)(puVar1 + 0x128) = 0;
    puVar1[0x129] = (undefined4)(0);
    puVar1[0x12a] = (undefined4)(0);
    thunk_FUN_112a7ea0(puVar1 + 2,"active_record");
    thunk_FUN_112a7ea0(puVar1 + 4,"network_safe");
    thunk_FUN_112a7b70(puVar1 + 6,"subrenew_del");
    thunk_FUN_112a7b70(puVar1 + 0x11,"subrenew_sub");
    *(undefined4 *)((int)puVar1 + 0x86) = 0;
    *(undefined1 *)((int)puVar1 + 0x8a) = 0;
    DAT_122f5600 = (int)(puVar1);
    return;
  }
  DAT_122f5600 = (int)((undefined4 *)0x0);
  return;
}


// Reference entry 1123f100; body size 70 bytes.
#line 1 "ENTRY_1123f100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1123f100(int param_1)

{
  *(undefined4 *)(param_1 + 0xc570) = 0;
  *(int *)(param_1 + 0xc568) = param_1 + 0x8568;
  *(int *)(param_1 + 0xc574) = param_1 + 0x8568;
  *(int *)(param_1 + 0xc56c) = param_1 + 0xc567;
  *(undefined4 *)(param_1 + 0xc578) = 0;
  *(undefined4 *)(param_1 + 0xc57c) = 0;
  *(undefined2 *)(param_1 + 0xc580) = 0;
  return;
}


// Reference entry 1123fd00; body size 6 bytes.
#line 1 "ENTRY_1123fd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1123fd00(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xfd);
}


// Reference entry 112403d0; body size 15 bytes.
#line 1 "ENTRY_112403d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112403d0(byte param_1)

{
                    
                    
  isspace((uint)param_1);
  return;
}


// Reference entry 112403f0; body size 15 bytes.
#line 1 "ENTRY_112403f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112403f0(byte param_1)

{
                    
                    
  tolower((uint)param_1);
  return;
}


// Reference entry 11240440; body size 21 bytes.
#line 1 "ENTRY_11240440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11240440(code *param_2,undefined4 param_3,undefined4 param_4)
{
  int *param_1 = (int *)this;
  if (*param_1 != 0) {
    (*param_2)(param_3,param_4);
  }
  return;
}


// Reference entry 11240460; body size 9 bytes.
#line 1 "ENTRY_11240460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11240460(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11240630; body size 21 bytes.
#line 1 "ENTRY_11240630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11240630(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOp);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11240660; body size 9 bytes.
#line 1 "ENTRY_11240660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11240660(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11240670; body size 6 bytes.
#line 1 "ENTRY_11240670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_11240670(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(param_1);
}


// Reference entry 112406c0; body size 3 bytes.
#line 1 "ENTRY_112406c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112406c0(void)

{
  return;
}


// Reference entry 11240830; body size 8 bytes.
#line 1 "ENTRY_11240830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11240830(undefined4 param_1)

{
  thunk_FUN_112a7f20(param_1);
  return;
}


// Reference entry 11240860; body size 3 bytes.
#line 1 "ENTRY_11240860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11240860(void)

{
  return;
}


// Reference entry 112408d0; body size 207 bytes.
#line 1 "ENTRY_112408d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_112408d0(byte param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  undefined4 *_Memory;
  int iVar2;
  void **ppvVar3;
  uint uVar4;
  int iVar5;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar4 = (uint)(DAT_12126b84);

  ppvVar3 = (void **)(&pvStack_10);
  _Memory = (undefined4 *)(*(undefined4 **)(param_1 + 0x1c));

  while (ExceptionList = ppvVar3, _Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)*_Memory);
    free(_Memory);

    _Memory = (undefined4 *)(puVar1);
  }
  if ((DAT_122f564c != 0) &&
     (iVar5 = thunk_FUN_1123fcd0(DAT_122f564c + 0x10,uVar4), iVar2 = DAT_122f564c, iVar5 == 0)) {
    if (DAT_122f564c != 0) {
      thunk_FUN_112a7f20(DAT_122f564c);
      thunk_FUN_1148a50e(iVar2,0x14);
    }
    DAT_122f564c = (int)(0);
  }
  thunk_FUN_11240e60(0);
  CloseHandle(*(HANDLE *)(param_1 + 8));
  thunk_FUN_112a7f20(param_1 + 0x48);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x50);
  }

  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);

 } catch (...) { }
}


// Reference entry 11240b70; body size 86 bytes.
#line 1 "ENTRY_11240b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11240b70(undefined4 param_2,char param_3,char param_4)
{
  int param_1 = (int )this;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)(0x21);
  if (param_3 == '\0') {
    uVar2 = (uint)(0);
  }
  uVar1 = (uint)(uVar2 | 0x12);
  if (param_4 == '\0') {
    uVar1 = (uint)(uVar2);
  }
  if ((param_3 != '\0') || (param_4 != '\0')) {
    WSAEventSelect(param_2,*(undefined4 *)(param_1 + 0x208),uVar1);
  }
  *(undefined4 *)(param_1 + 0x210 + *(int *)(param_1 + 0x1210) * 4) = param_2;
  *(int *)(param_1 + 0x1210) = *(int *)(param_1 + 0x1210) + 1;
  return;
}


// Reference entry 112411d0; body size 65 bytes.
#line 1 "ENTRY_112411d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112411d0(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_122f564c != 0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(DAT_122f564c + 0x10));
    iVar1 = (int)(DAT_122f564c);
    if (iVar2 == 0) {
      if (DAT_122f564c != 0) {
        thunk_FUN_112a7f20(DAT_122f564c);
        thunk_FUN_1148a50e(iVar1,0x14);
      }
      DAT_122f564c = (int)(0);
    }
  }
  return;
}


// Reference entry 11241230; body size 3 bytes.
#line 1 "ENTRY_11241230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11241230(void)

{
  return;
}


// Reference entry 11241240; body size 3 bytes.
#line 1 "ENTRY_11241240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11241240(void)

{
  return;
}


// Reference entry 11241800; body size 20 bytes.
#line 1 "ENTRY_11241800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11241800(int *param_1)

{
  if (*param_1 != 0) {
    thunk_FUN_112408cb(param_1[1],param_1[8]);
  }
  return;
}


// Reference entry 11241820; body size 39 bytes.
#line 1 "ENTRY_11241820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11241820(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1);
  for (iVar1 = (int)(0x41); iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = (undefined4)(*puVar2);
    puVar2 = (undefined4 *)(puVar2 + 1);
    param_2 = (undefined4 *)(param_2 + 1);
  }
  puVar2 = (undefined4 *)(param_1 + 0x41);
  for (iVar1 = (int)(0x41); iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_3 = (undefined4)(*puVar2);
    puVar2 = (undefined4 *)(puVar2 + 1);
    param_3 = (undefined4 *)(param_3 + 1);
  }
  return;
}


// Reference entry 112418e0; body size 6 bytes.
#line 1 "ENTRY_112418e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_112418e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(DAT_122f564c);
}


// Reference entry 112418f0; body size 4 bytes.
#line 1 "ENTRY_112418f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_112418f0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 11241a90; body size 73 bytes.
#line 1 "ENTRY_11241a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11241a90(undefined4 param_2)
{
  int *param_1 = (int *)this;
  (**(code **)(*param_1 + 0x34))(param_2);
  if ((char)param_2 != '\0') {
    if (param_1[0xf] != 0) {
      thunk_FUN_112b5970(param_1[0xf]);
      param_1[0xf] = (int)(0);
    }
    if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[2])(1);
      param_1[2] = (int)(0);
    }
  }
  param_1[4] = (int)(3);
  return;
}


// Reference entry 11241c40; body size 55 bytes.
#line 1 "ENTRY_11241c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_11241c40(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)((int *)(param_1 + 0x24));
  iVar2 = (int)(*(int *)(param_1 + 0x24));
  iVar1 = (int)(0);
  while (iVar4 = iVar2, iVar4 != 0) {
    if ((*(int *)(iVar4 + 0xc) == param_2) || (param_2 == 0)) {
      *piVar3 = (int)(*(int *)(iVar4 + 0x18));
      *(int *)(iVar4 + 0x18) = iVar1;
    }
    else {
      piVar3 = (int *)((int *)(iVar4 + 0x18));
      iVar4 = (int)(iVar1);
    }
    iVar1 = (int)(iVar4);
    iVar2 = (int)(*piVar3);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1);
}


// Reference entry 11241c90; body size 12 bytes.
#line 1 "ENTRY_11241c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_11241c90(uint param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(0x7ffffffe < param_1);
}


// Reference entry 11241cf0; body size 11 bytes.
#line 1 "ENTRY_11241cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11241cf0(int param_1)

{
  thunk_FUN_112a7f50(param_1 + 0x1c);
  return;
}


// Reference entry 11241d00; body size 14 bytes.
#line 1 "ENTRY_11241d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11241d00(int param_1)

{
  ReleaseSemaphore(*(HANDLE *)(param_1 + 8),1,(LPLONG)0x0);
  return;
}


// Reference entry 11241d20; body size 39 bytes.
#line 1 "ENTRY_11241d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11241d20(int param_1)

{
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 4));
    return;
  }
  if (*(HWND *)(param_1 + 0xc) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0xc),*(UINT *)(param_1 + 0x10),0,*(LPARAM *)(param_1 + 4));
  }
  return;
}


// Reference entry 11241e70; body size 22 bytes.
#line 1 "ENTRY_11241e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11241e70(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_11240ae0(param_2));
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  return;
}


// Reference entry 11241ea0; body size 17 bytes.
#line 1 "ENTRY_11241ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11241ea0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return;
}


// Reference entry 11241ec0; body size 26 bytes.
#line 1 "ENTRY_11241ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11241ec0(int param_1)

{
  thunk_FUN_112a9da0(param_1 + 0x30,"asynciomgr",LAB_10087e25,param_1,0);
  return;
}


// Reference entry 11241fa0; body size 12 bytes.
#line 1 "ENTRY_11241fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11241fa0(void)

{
  thunk_FUN_11241fb0();
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11242930; body size 11 bytes.
#line 1 "ENTRY_11242930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11242930(int param_1)

{
  thunk_FUN_112a8010(param_1 + 0x1c);
  return;
}


// Reference entry 11242ce0; body size 17 bytes.
#line 1 "ENTRY_11242ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11242ce0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)(param_1 + 0x18));
  *piVar1 = (int)(*piVar1 + -1);
  if (*piVar1 == 0) {
    thunk_FUN_112a7b20(param_1 + 0x28);
  }
  return;
}


// Reference entry 11242d00; body size 5 bytes.
#line 1 "ENTRY_11242d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11242d00(int *param_1)

{
  if ((*param_1 == 0x7fffffff) && (param_1[1] == 0)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11242d10; body size 91 bytes.
#line 1 "ENTRY_11242d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11242d10(undefined4 param_2,undefined1 *param_3)
{
  int param_1 = (int )this;
  char cVar1;
  int iVar2;
  
  cVar1 = (char)(thunk_FUN_1145af90(param_2));
  if (cVar1 != '\0') {
    thunk_FUN_112a7da0(param_1 + 0x28,param_1 + 0x20);
    *param_3 = (undefined1)(0);
    return;
  }
  iVar2 = (int)(thunk_FUN_1145abd0(param_2));
  if (iVar2 == -1) {
    iVar2 = (int)(-2);
  }
  thunk_FUN_112a7d20(param_1 + 0x28,param_1 + 0x20,iVar2,param_3);
  return;
}


// Reference entry 11242f60; body size 15 bytes.
#line 1 "ENTRY_11242f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11242f60(int param_1)

{
  *(undefined1 *)(param_1 + 0x1c) = 0;
  thunk_FUN_112a7b20(param_1 + 0x28);
  return;
}


// Reference entry 11242f80; body size 3 bytes.
#line 1 "ENTRY_11242f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11242f80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11242f90; body size 3 bytes.
#line 1 "ENTRY_11242f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11242f90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 112430e0; body size 20 bytes.
#line 1 "ENTRY_112430e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_112430e0(int param_1)

{
  if ((*(char *)(param_1 + 0x18) == -1) || (*(char *)(param_1 + 0x18) != '\x01')) {
    param_1 = (int)(0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 11243100; body size 19 bytes.
#line 1 "ENTRY_11243100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_11243100(int param_1)

{
  if ((*(char *)(param_1 + 0x18) == -1) || (*(char *)(param_1 + 0x18) != '\0')) {
    param_1 = (int)(0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 11243120; body size 7 bytes.
#line 1 "ENTRY_11243120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11243120(undefined4 param_1)

{
  undefined1 uStack_1;
  
  uStack_1 = (undefined1)((undefined1)((uint)param_1 >> 0x18));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(uStack_1);
}


// Reference entry 11243130; body size 7 bytes.
#line 1 "ENTRY_11243130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11243130(undefined4 param_1)

{
  undefined1 uStack_1;
  
  uStack_1 = (undefined1)((undefined1)((uint)param_1 >> 0x18));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(uStack_1);
}


// Reference entry 11243140; body size 6 bytes.
#line 1 "ENTRY_11243140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11243140(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
}


// Reference entry 11243150; body size 3 bytes.
#line 1 "ENTRY_11243150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11243150(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11243160; body size 5 bytes.
#line 1 "ENTRY_11243160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11243160(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11243170; body size 5 bytes.
#line 1 "ENTRY_11243170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11243170(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11243330; body size 22 bytes.
#line 1 "ENTRY_11243330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11243330(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 1) = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_nonstd_expected_lite_bad_expected_access);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 112433c0; body size 17 bytes.
#line 1 "ENTRY_112433c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_112433c0(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 1) = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_nonstd_variants_bad_variant_access);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 112433e0; body size 17 bytes.
#line 1 "ENTRY_112433e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_112433e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_exception);
  *(undefined8 *)(param_1 + 1) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11243500; body size 3 bytes.
#line 1 "ENTRY_11243500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11243500(void)

{
  return;
}


// Reference entry 11243510; body size 3 bytes.
#line 1 "ENTRY_11243510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11243510(void)

{
  return;
}


// Reference entry 11243530; body size 17 bytes.
#line 1 "ENTRY_11243530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11243530(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_exception);
  __std_exception_destroy(param_1 + 1);
  return;
}


// Reference entry 11243550; body size 4 bytes.
#line 1 "ENTRY_11243550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11243550(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x18));
}


// Reference entry 112437f0; body size 4 bytes.
#line 1 "ENTRY_112437f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_112437f0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x18));
}


// Reference entry 11243800; body size 4 bytes.
#line 1 "ENTRY_11243800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11243800(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x18));
}


// Reference entry 11243810; body size 17 bytes.
#line 1 "ENTRY_11243810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11243810(int param_1)

{
  if (*(char *)(param_1 + 0x18) == -1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(-1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((int)*(char *)(param_1 + 0x18));
}


// Reference entry 11243830; body size 12 bytes.
#line 1 "ENTRY_11243830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11243830(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x24) + -1);
  if (-1 < iVar1) {
    *(int *)(param_1 + 0x24) = iVar1;
  }
  return;
}


// Reference entry 11243840; body size 13 bytes.
#line 1 "ENTRY_11243840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11243840(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x24) + 1);
  if (iVar1 < 0x20) {
    *(int *)(param_1 + 0x24) = iVar1;
  }
  return;
}


// Reference entry 11243850; body size 3 bytes.
#line 1 "ENTRY_11243850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11243850(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11243bb0; body size 20 bytes.
#line 1 "ENTRY_11243bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11243bb0(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
  }
  uVar1 = (undefined4)(thunk_FUN_112437d0());
                    
  thunk_FUN_11243860(uVar1);
}


// Reference entry 11243bd0; body size 3 bytes.
#line 1 "ENTRY_11243bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11243bd0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11243be0; body size 3 bytes.
#line 1 "ENTRY_11243be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_11243be0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0xff);
}


// Reference entry 11243c10; body size 81 bytes.
#line 1 "ENTRY_11243c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11243c10(undefined4 *param_2)
{
  int *param_1 = (int *)this;
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)((undefined4 *)*param_2);
  }
  if (*(char *)(param_1[9] + 4 + (int)param_1) == '\0') {
    (**(code **)(*param_1 + 4))(&DAT_118850bc,1);
    thunk_FUN_11244840(param_2,0xffffffff,1,1);
    return;
  }
  *(undefined1 *)(param_1[9] + 4 + (int)param_1) = 0;
  thunk_FUN_11244840(param_2,0xffffffff,1,1);
  return;
}


// Reference entry 11243eb0; body size 95 bytes.
#line 1 "ENTRY_11243eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11243eb0(undefined4 param_2,undefined4 *param_3)
{
  int *param_1 = (int *)this;
  if (0xf < (uint)param_3[5]) {
    param_3 = (undefined4 *)((undefined4 *)*param_3);
  }
  if (*(char *)(param_1[9] + 4 + (int)param_1) == '\0') {
    (**(code **)(*param_1 + 4))(&DAT_118850bc,1);
  }
  else {
    *(undefined1 *)(param_1[9] + 4 + (int)param_1) = 0;
  }
  thunk_FUN_11244840(param_2,0xffffffff,1,1);
  (**(code **)(*param_1 + 4))(&DAT_11884554,1);
  thunk_FUN_11244840(param_3,0xffffffff,1,1);
  return;
}


// Reference entry 11244aa0; body size 20 bytes.
#line 1 "ENTRY_11244aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11244aa0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_11244840(param_1,0xffffffff,param_2,1);
  return;
}


// Reference entry 11244c00; body size 41 bytes.
#line 1 "ENTRY_11244c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11244c00(char *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  (**(code **)(*param_1 + 4))(param_2,(int)pcVar2 - (int)(param_2 + 1));
  return;
}


// Reference entry 11244c40; body size 14 bytes.
#line 1 "ENTRY_11244c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_11244c40(uint param_1,uint param_2)

{
  if (param_2 < param_1) {
    param_1 = (uint)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(param_1);
}


// Reference entry 11244c60; body size 6 bytes.
#line 1 "ENTRY_11244c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11244c60(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(8);
}


// Reference entry 11244d40; body size 47 bytes.
#line 1 "ENTRY_11244d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11244d40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RKeyValueUrlPairs);
  param_1[1] = (undefined4)(0);
  thunk_FUN_11247c50(param_2,0x3d,0x26);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RKeyValuePairsQueryParams);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11244da0; body size 39 bytes.
#line 1 "ENTRY_11244da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11244da0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RKeyValueUrlPairs);
  param_1[1] = (undefined4)(0);
  thunk_FUN_11247c50(param_2,param_3,param_4);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11244dd0; body size 16 bytes.
#line 1 "ENTRY_11244dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11244dd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RKeyValueUrlPairs);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11244df0; body size 13 bytes.
#line 1 "ENTRY_11244df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11244df0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11244ef0; body size 7 bytes.
#line 1 "ENTRY_11244ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11244ef0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RKeyValueUrlPairs);
  return;
}


// Reference entry 112450f0; body size 92 bytes.
#line 1 "ENTRY_112450f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

ulong FUN_112450f0(undefined4 param_1,undefined1 *param_2)

{
  char *_Str;
  int *piVar1;
  ulong uVar2;
  
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = (undefined1)(0);
  }
  _Str = (char *)((char *)thunk_FUN_112a1350(param_1,"content-length"));
  if (_Str != (char *)0x0) {
    piVar1 = (int *)(_errno());
    *piVar1 = (int)(0);
    uVar2 = (ulong)(strtoul(_Str,(char **)0x0,10));
    piVar1 = (int *)(_errno());
    if (*piVar1 == 0) {
      if (param_2 != (undefined1 *)0x0) {
        *param_2 = (undefined1)(1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ ulong)(uVar2);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ ulong)(0);
}


// Reference entry 11246500; body size 22 bytes.
#line 1 "ENTRY_11246500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined8 FUN_11246500(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (uint)((int)param_2 >> 0x1f);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8)(((unsigned long long)(((param_2 ^ uVar1) - uVar1) - (uint)((param_1 ^ uVar1) < uVar1)) << 32 | (unsigned long long)((param_1 ^ uVar1) - uVar1)));
}


// Reference entry 112467b0; body size 41 bytes.
#line 1 "ENTRY_112467b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_112467b0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = (uint)(thunk_FUN_1145c720(param_2,param_3,"uuid:%s::urn:schemas-upnp-org:device:ZonePlayer:1",
                             param_1));
  if ((-1 < (int)uVar1) && (uVar1 < param_3)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 112467f0; body size 9 bytes.
#line 1 "ENTRY_112467f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_112467f0(char param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + -0x30);
}


// Reference entry 11246ae0; body size 200 bytes.
#line 1 "ENTRY_11246ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4
FUN_11246ae0(char *param_1,undefined4 param_2,char *param_3,undefined1 *param_4,char *param_5)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  
  if (param_1 == (char *)0x0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  }
  cVar1 = (char)(*param_1);
  while (cVar1 == ' ') {
    pcVar5 = (char *)(param_1 + 1);
    param_1 = (char *)(param_1 + 1);
    cVar1 = (char)(*pcVar5);
  }
  pcVar5 = (char *)(param_1 + 1);
  if (cVar1 != '\"') {
    pcVar5 = (char *)(param_1);
  }
  pcVar3 = (char *)(pcVar5);
  do {
    cVar2 = (char)(*pcVar3);
    pcVar3 = (char *)(pcVar3 + 1);
  } while (cVar2 != '\0');
  for (iVar4 = (int)((int)pcVar3 - (int)(pcVar5 + 1)); (iVar4 != 0 && (pcVar5[iVar4 + -1] == ' '));
      iVar4 = iVar4 + -1) {
  }
  if (cVar1 == '\"') {
    if (pcVar5[iVar4 + -1] == '\"') {
      iVar4 = (int)(iVar4 + -1);
    }
    else {
      pcVar5 = (char *)(pcVar5 + -1);
      iVar4 = (int)(iVar4 + 1);
    }
  }
  pcVar3 = (char *)(strchr(pcVar5,0x23));
  if (pcVar3 == (char *)0x0) {
    if ((char *)(iVar4 + 1) < param_3) {
      param_3 = (char *)((char *)(iVar4 + 1));
    }
    thunk_FUN_1145c250(param_2,pcVar5,param_3);
    *param_4 = (undefined1)(0);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
  }
  if (pcVar3 + (1 - (int)pcVar5) < param_3) {
    param_3 = (char *)(pcVar3 + (1 - (int)pcVar5));
  }
  thunk_FUN_1145c250(param_2,pcVar5,param_3);
  if (pcVar5 + (iVar4 - (int)(pcVar3 + 1)) + 1 < param_5) {
    param_5 = (char *)(pcVar5 + (iVar4 - (int)(pcVar3 + 1)) + 1);
  }
  thunk_FUN_1145c250(param_4,pcVar3 + 1,param_5);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
}


// Reference entry 11247240; body size 129 bytes.
#line 1 "ENTRY_11247240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11247240(char *param_1,void *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  size_t _Size;
  char *_Str;
  
  if ((0x18 < param_3) && (param_2 != (void *)0x0)) {
    iVar2 = (int)(strncmp(param_1,"uuid:",5));
    if (iVar2 == 0) {
      _Str = (char *)(param_1 + 5);
      pcVar3 = (char *)(strstr(_Str,"::"));
      if (pcVar3 == (char *)0x0) {
        pcVar3 = (char *)(_Str);
        do {
          cVar1 = (char)(*pcVar3);
          pcVar3 = (char *)(pcVar3 + 1);
        } while (cVar1 != '\0');
        _Size = (size_t)((int)pcVar3 - (int)(param_1 + 6));
      }
      else {
        _Size = (size_t)((int)pcVar3 - (int)_Str);
      }
      if ((_Size != 0) && (_Size + 1 <= param_3)) {
        memcpy(param_2,_Str,_Size);
        *(undefined1 *)(_Size + (int)param_2) = 0;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
      }
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 112479d0; body size 11 bytes.
#line 1 "ENTRY_112479d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_112479d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  return;
}


// Reference entry 11247bf0; body size 45 bytes.
#line 1 "ENTRY_11247bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_11247bf0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)(thunk_FUN_112a1350(param_1,"x-sonos-upnp-tunnel"));
  uVar2 = (uint)(0);
  if (iVar1 != 0) {
    uVar2 = (uint)(thunk_FUN_113b9ec0(iVar1,&DAT_11889d24));
    if (uVar2 == 0) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar2 & 0xffffff00);
}


// Reference entry 11247d20; body size 23 bytes.
#line 1 "ENTRY_11247d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11247d20(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[2] = (undefined4)(0);
  if (param_1[1] != 0) {
    *(undefined1 *)*param_1 = (undefined4)(0);
  }
  return;
}


// Reference entry 112487f0; body size 167 bytes.
#line 1 "ENTRY_112487f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_112487f0(undefined1 *param_2,int param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 auStack_404 [1024];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)auStack_404);
  if (*(int *)(param_1 + 0x408) != 0) {
    iVar1 = (int)(thunk_FUN_114601a0(*(int *)(param_1 + 0x404) + param_1,*(int *)(param_1 + 0x408),
                               auStack_404,0x400));
    if (iVar1 != 0) {
      thunk_FUN_1145c720(param_2,param_3,"0x%s %d.%d-%d.%d",auStack_404,
                         *(uint *)(param_1 + 0x40c) >> 0x10,*(uint *)(param_1 + 0x40c) & 0xffff,
                         *(uint *)(param_1 + 0x410) >> 0x10,*(uint *)(param_1 + 0x410) & 0xffff);
      goto LAB_1124887e;
    }
  }
  if (param_3 != 0) {
    *param_2 = (undefined1)(0);
  }
LAB_1124887e:
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 112488c0; body size 7 bytes.
#line 1 "ENTRY_112488c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_112488c0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x4b0);
}


// Reference entry 11248b30; body size 5 bytes.
#line 1 "ENTRY_11248b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_11248b30(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  if ((uint)(param_2 * 8) <= param_3) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(false);
  }
  uVar1 = (uint)(param_3 & 0x80000007);
  if ((int)uVar1 < 0) {
    uVar1 = (uint)((uVar1 - 1 | 0xfffffff8) + 1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)((*(byte *)((param_1 - ((int)(param_3 + ((int)param_3 >> 0x1f & 7U)) >> 3)) + -1 + param_2)
         & (byte)(1 << ((byte)uVar1 & 0x1f))) != 0);
}


// Reference entry 11248fc0; body size 23 bytes.
#line 1 "ENTRY_11248fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11248fc0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_KeyValueCB);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11248fe0; body size 23 bytes.
#line 1 "ENTRY_11248fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11248fe0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_KeyValueTagBodyCB);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11249000; body size 16 bytes.
#line 1 "ENTRY_11249000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11249000(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11249020; body size 51 bytes.
#line 1 "ENTRY_11249020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11249020(undefined4 *param_1)

{
  thunk_FUN_11273f80();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RKVReport);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  thunk_FUN_1145c930(param_1 + 4,0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 112490b0; body size 27 bytes.
#line 1 "ENTRY_112490b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_112490b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RKVReportDataAppenderCB);
  *(undefined1 *)(param_1 + 2) = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 112490e0; body size 9 bytes.
#line 1 "ENTRY_112490e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_112490e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RKeyValueEnumCB);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11249130; body size 7 bytes.
#line 1 "ENTRY_11249130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11249130(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RKeyValueEnumCB);
  return;
}


// Reference entry 11249140; body size 35 bytes.
#line 1 "ENTRY_11249140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __stdcall FUN_11249140(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  thunk_FUN_1145c930(param_1,0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11249c40; body size 15 bytes.
#line 1 "ENTRY_11249c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11249c40(int param_1)

{
  thunk_FUN_1145c930(param_1 + 0x10,0);
  return;
}


// Reference entry 11249c60; body size 19 bytes.
#line 1 "ENTRY_11249c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11249c60(int param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


// Reference entry 11249e50; body size 4 bytes.
#line 1 "ENTRY_11249e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11249e50(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x10);
}


// Reference entry 11249fc0; body size 15 bytes.
#line 1 "ENTRY_11249fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11249fc0(undefined4 param_1)

{
  thunk_FUN_1145c930(param_1,0);
  return;
}


// Reference entry 1124a070; body size 16 bytes.
#line 1 "ENTRY_1124a070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1124a070(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAsyncSocketIOSessionCB);
  param_1[1] = (undefined4)((uint)&ghidra_vftable_RAsyncSocketIOSessionCB);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1124a300; body size 101 bytes.
#line 1 "ENTRY_1124a300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1124a300(char *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHTTPRequestHeadersBuilder);
  param_1[0x1841] = (undefined4)(0);
  param_1[0x1842] = (undefined4)(0);
  *(undefined1 *)(param_1 + 1) = 0;
  if (param_2 == (char *)0x0) {
    pcVar3 = (char *)((char *)thunk_FUN_1125b4a0());
    pcVar1 = (char *)(pcVar3 + 1);
    do {
      cVar2 = (char)(*pcVar3);
      pcVar3 = (char *)(pcVar3 + 1);
    } while (cVar2 != '\0');
    if ((char *)(pcVar3) == pcVar1) {
      param_2 = (char *)("Sonos");
    }
    else {
      param_2 = (char *)((char *)thunk_FUN_1125b4a0());
    }
  }
  thunk_FUN_1145c250(param_1 + 0x1801,param_2,0x100);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1124a390; body size 3 bytes.
#line 1 "ENTRY_1124a390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1124a390(void)

{
  return;
}


// Reference entry 1124a400; body size 7 bytes.
#line 1 "ENTRY_1124a400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1124a400(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHTTPRequestHeadersBuilder);
  return;
}


// Reference entry 1124b740; body size 134 bytes.
#line 1 "ENTRY_1124b740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1124b740(int param_2,int param_3)
{
  int param_1 = (int )this;
  int iVar1;
  size_t _Size;
  void *_Src;
  
  if (param_2 != 0) {
    iVar1 = (int)(thunk_FUN_11460290(param_2,"X-Sonos-ErrorType: ",param_3));
    if ((((iVar1 != 0) && (_Src = (void *)(iVar1 + 0x13), _Src < (void *)(param_2 + param_3))) &&
        (iVar1 = thunk_FUN_11460290(_Src,&DAT_11881ac8,(param_2 + param_3) - (int)_Src), iVar1 != 0)
        ) && ((*(char *)(iVar1 + -1) != '\r' || (iVar1 = iVar1 + -1, iVar1 != 0)))) {
      _Size = (size_t)(iVar1 - (int)_Src);
      if (0x7ff < _Size) {
        _Size = (size_t)(0x7ff);
      }
      memcpy((void *)(param_1 + 0x18),_Src,_Size);
      *(undefined1 *)(_Size + 0x18 + param_1) = 0;
      (**(code **)(**(int **)(param_1 + 8) + 0x10))((void *)(param_1 + 0x18));
    }
  }
  return;
}


// Reference entry 1124c1f0; body size 319 bytes.
#line 1 "ENTRY_1124c1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1124c1f0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  undefined1 uVar7;
  
  uVar7 = (undefined1)(0);
  uVar4 = (uint)(*(uint *)(param_1 + 0x4420));
  *(undefined1 *)(param_1 + 0x4485) = 0;
  do {
    uVar6 = (uint)(*(uint *)(param_1 + 0x441c));
    if (uVar4 < uVar6) {
      do {
        uVar2 = (undefined4)(thunk_FUN_112967e0(uVar4 + 0x41a + param_1,uVar6 - uVar4));
        iVar3 = (int)(thunk_FUN_113e6260(uVar2));
        if (iVar3 < 1) {
          if (iVar3 != 0) {
            if (iVar3 == -0x6900) {
              *(undefined1 *)(param_1 + 0x4484) = 1;
            }
            else if (iVar3 == -0x6880) {
              *(undefined1 *)(param_1 + 0x4485) = 1;
            }
            else if (iVar3 == -0x7b00) {
              thunk_FUN_112b0270(&DAT_119df9ec,6,
                                 "Received new session ticket during mbedtls_ssl_write.");
              thunk_FUN_1124ab00();
              *(undefined1 *)(param_1 + 0x4485) = 1;
            }
            else {
              piVar5 = (int *)(_errno());
              thunk_FUN_11267380("write",param_1 + 0x14,*(undefined2 *)(param_1 + 0x416),
                                 *(undefined2 *)(param_1 + 0x418),iVar3,*piVar5);
              *(undefined4 *)(param_1 + 0x10) = 0x80000007;
            }
          }
          break;
        }
        uVar4 = (uint)(*(int *)(param_1 + 0x4420) + iVar3);
        *(uint *)(param_1 + 0x4420) = uVar4;
        uVar6 = (uint)(*(uint *)(param_1 + 0x441c));
      } while (uVar4 < uVar6);
    }
    if ((*(uint *)(param_1 + 0x4420) < *(uint *)(param_1 + 0x441c)) ||
       (cVar1 = (**(code **)(**(int **)(param_1 + 4) + 8))(), cVar1 == '\0')) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(uVar7);
    }
    uVar2 = (undefined4)((**(code **)(**(int **)(param_1 + 4) + 0x10))(param_1 + 0x41a,0x4000));
    *(undefined4 *)(param_1 + 0x441c) = uVar2;
    uVar7 = (undefined1)(1);
    *(undefined4 *)(param_1 + 0x4420) = 0;
    uVar4 = (uint)(0);
  } while( true );
}


// Reference entry 1124c530; body size 78 bytes.
#line 1 "ENTRY_1124c530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_1124c530(char *param_2,int param_3)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(0);
  if (param_3 != 0) {
    do {
      if (*(int *)(param_1 + 0xc) != 4) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1);
      }
      if (*(int *)(param_1 + 0x82c) != 3) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1);
      }
      if (*param_2 == '\n') {
        *(undefined4 *)(param_1 + 0x82c) = 1;
        *(undefined4 *)(param_1 + 0x850) = 0;
      }
      else {
        *(int *)(param_1 + 0x850) = *(int *)(param_1 + 0x850) + 1;
      }
      param_2 = (char *)(param_2 + 1);
      iVar1 = (int)(iVar1 + 1);
      param_3 = (int)(param_3 + -1);
    } while (param_3 != 0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1);
}


// Reference entry 1124c6b0; body size 189 bytes.
#line 1 "ENTRY_1124c6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_1124c6b0(char *param_2,int param_3)
{
  int param_1 = (int )this;
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = (int)(0);
  if (param_3 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
  }
  while( true ) {
    if (*(int *)(param_1 + 0xc) != 4) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar4);
    }
    if (*(int *)(param_1 + 0x82c) != 4) break;
    uVar3 = (uint)(*(uint *)(param_1 + 0x850));
    if (*param_2 == '\n') {
      if ((uVar3 == 0) || ((uVar3 == 1 && (*(char *)(param_1 + 0x830) == '\r')))) {
        *(undefined4 *)(param_1 + 0x82c) = 5;
        cVar1 = (char)((**(code **)(**(int **)(param_1 + 8) + 0xc))(0,0));
        if ((cVar1 == '\0') || (*(uint *)(param_1 + 0x858) <= *(uint *)(param_1 + 0x85c))) {
          *(undefined4 *)(param_1 + 0xc) = 5;
        }
      }
      iVar2 = (int)(0);
    }
    else {
      if (uVar3 < 0x1f) {
        *(char *)(uVar3 + 0x830 + param_1) = *param_2;
        uVar3 = (uint)(*(uint *)(param_1 + 0x850));
      }
      iVar2 = (int)(uVar3 + 1);
    }
    param_2 = (char *)(param_2 + 1);
    *(int *)(param_1 + 0x850) = iVar2;
    iVar4 = (int)(iVar4 + 1);
    param_3 = (int)(param_3 + -1);
    if (param_3 == 0) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar4);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar4);
}


// Reference entry 1124cef0; body size 59 bytes.
#line 1 "ENTRY_1124cef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1124cef0(undefined4 *param_2,undefined2 *param_3,undefined4 param_4,
            undefined4 param_5,undefined1 *param_6)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *param_3 = (undefined2)(*(undefined2 *)(param_1 + 8));
  thunk_FUN_1145c250(param_4,param_1 + 10,param_5);
  *param_6 = (undefined1)(*(undefined1 *)(param_1 + 0x40b));
  return;
}


// Reference entry 1124d220; body size 38 bytes.
#line 1 "ENTRY_1124d220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1124d220(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)
{
  int param_1 = (int )this;
  thunk_FUN_112ea860(param_1 + 0x4430,param_2,param_3,param_4,param_5,param_6);
  return;
}


// Reference entry 1124d650; body size 82 bytes.
#line 1 "ENTRY_1124d650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_1124d650(int param_2,int param_3)
{
  int param_1 = (int )this;
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)(0);
  iVar2 = (int)(param_3);
  if (param_3 != 0) {
    while( true ) {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 8) + 8))(param_2,iVar2,&param_3));
      param_2 = (int)(param_2 + param_3);
      iVar2 = (int)(iVar2 - param_3);
      iVar3 = (int)(iVar3 + param_3);
      if (cVar1 == '\0') break;
      if (iVar2 == 0) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar3);
      }
    }
    thunk_FUN_1124c380(0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar3);
}


// Reference entry 1124d6c0; body size 85 bytes.
#line 1 "ENTRY_1124d6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ size_t __thiscall Recovered_Bulk::FUN_1124d6c0(void *param_2,uint param_3)
{
  int param_1 = (int )this;
  int iVar1;
  uint uVar2;
  uint _Size;
  
  iVar1 = (int)((**(code **)(**(int **)(param_1 + 8) + 0x18))());
  uVar2 = (uint)((**(code **)(**(int **)(param_1 + 8) + 0x1c))());
  _Size = (uint)(uVar2 - *(int *)(param_1 + 0x14));
  if (param_3 < _Size) {
    _Size = (uint)(param_3);
  }
  memcpy(param_2,(void *)(*(int *)(param_1 + 0x14) + iVar1),_Size);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + _Size;
  if (uVar2 <= *(uint *)(param_1 + 0x14)) {
    thunk_FUN_1124c380(0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ size_t)(_Size);
}


// Reference entry 1124d8f0; body size 16 bytes.
#line 1 "ENTRY_1124d8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1124d8f0(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1145f900(param_2,param_1);
  return;
}


// Reference entry 1124d910; body size 84 bytes.
#line 1 "ENTRY_1124d910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1124d910(int param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = (int)(func_0x10041443(param_2,"X-Sonos-Corr-Id"));
  thunk_FUN_1145f8f0(param_1);
  iVar1 = (int)(param_1 + 0x10);
  thunk_FUN_1145f8f0(iVar1);
  if (iVar3 != 0) {
    cVar2 = (char)(func_0x10061ec8(iVar1,iVar3));
    if (cVar2 == '\0') {
      thunk_FUN_1145f8f0(iVar1);
    }
  }
  thunk_FUN_1145f920(param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 1124d9d0; body size 69 bytes.
#line 1 "ENTRY_1124d9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1124d9d0(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  thunk_FUN_1145f8f0(param_1);
  iVar1 = (int)(param_1 + 0x10);
  thunk_FUN_1145f8f0(iVar1);
  if (param_2 != 0) {
    cVar2 = (char)(func_0x10061ec8(iVar1,param_2));
    if (cVar2 == '\0') {
      thunk_FUN_1145f8f0(iVar1);
    }
  }
  thunk_FUN_1145f920(param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 1124dd70; body size 59 bytes.
#line 1 "ENTRY_1124dd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1124dd70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCRInParam);
  param_1[6] = (undefined4)(0);
  thunk_FUN_11285a10();
  param_1[0x14] = (undefined4)(0);
  *(undefined2 *)((int)param_1 + 0x55) = 0x100;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1124ddc0; body size 79 bytes.
#line 1 "ENTRY_1124ddc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1124ddc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCRInParam);
  param_1[6] = (undefined4)(0);
  thunk_FUN_11285a10();
  param_1[0x14] = (undefined4)(0);
  *(undefined2 *)((int)param_1 + 0x55) = 0x100;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCRInParamDeepCopy);
  param_1[0x16] = (undefined4)(0);
  param_1[0x17] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1124de30; body size 72 bytes.
#line 1 "ENTRY_1124de30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1124de30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCRInParam);
  param_1[6] = (undefined4)(0);
  thunk_FUN_11285a10();
  param_1[0x14] = (undefined4)(0);
  *(undefined2 *)((int)param_1 + 0x55) = 0x100;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCRInParamShallowCopy);
  param_1[0x16] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1124de90; body size 26 bytes.
#line 1 "ENTRY_1124de90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1124de90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCROutParam);
  param_1[1] = (undefined4)(0);
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0x32) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1124deb0; body size 38 bytes.
#line 1 "ENTRY_1124deb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1124deb0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0x32) = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCROutParamDeepCopy);
  param_1[0xd] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1124e8d0; body size 96 bytes.
#line 1 "ENTRY_1124e8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1124e8d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[8] = (undefined4)(param_2);
  param_1[9] = (undefined4)(param_3);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSOAPHeaderWriter);
  param_1[10] = (undefined4)(0);
  *(undefined2 *)(param_1 + 0x30b) = 0x101;
  *(undefined1 *)(param_1 + 0xb) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1124ea30; body size 60 bytes.
#line 1 "ENTRY_1124ea30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1124ea30(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSOAPParametersWriter);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1124ea80; body size 18 bytes.
#line 1 "ENTRY_1124ea80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1124ea80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSOAPWriter);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1124eb40; body size 14 bytes.
#line 1 "ENTRY_1124eb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1124eb40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCRInParam);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_RCRStringEmitter);
  return;
}


// Reference entry 1124eba0; body size 14 bytes.
#line 1 "ENTRY_1124eba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1124eba0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCRInParam);
  thunk_FUN_11285ab0();
  return;
}


// Reference entry 1124ebc0; body size 7 bytes.
#line 1 "ENTRY_1124ebc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1124ebc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCROutParam);
  return;
}


// Reference entry 1124f380; body size 45 bytes.
#line 1 "ENTRY_1124f380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1124f380(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 8) = 5;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  thunk_FUN_1145c720(param_1 + 0x38,0x18,&DAT_11921cf0,param_2,param_3);
  return;
}


// Reference entry 1124f4a0; body size 21 bytes.
#line 1 "ENTRY_1124f4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1124f4a0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 8) = 9;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}


// Reference entry 1124ff00; body size 63 bytes.
#line 1 "ENTRY_1124ff00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_1124ff00(undefined4 param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(*(uint *)(param_1 + 4));
  if (uVar1 < 0x10) {
    *(uint *)(param_1 + 4) = uVar1 + 1;
  }
  else {
    uVar1 = (uint)(uVar1 - 1);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  (**(code **)(*(int *)(param_1 + 0x2e8 + uVar1 * 0x38) + 4))(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + uVar1 * 0x38 + 0x2e8);
}


// Reference entry 11250100; body size 70 bytes.
#line 1 "ENTRY_11250100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_11250100(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(*(uint *)(param_1 + 4));
  if (uVar2 < 0x10) {
    *(uint *)(param_1 + 4) = uVar2 + 1;
  }
  else {
    uVar2 = (uint)(uVar2 - 1);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  iVar1 = (int)(param_1 + uVar2 * 0x38);
  (**(code **)(*(int *)(param_1 + 0x2e8 + uVar2 * 0x38) + 4))(param_2);
  *(undefined1 *)(iVar1 + 0x31a) = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1 + 0x2e8);
}


// Reference entry 112502a0; body size 21 bytes.
#line 1 "ENTRY_112502a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_112502a0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 8) = 7;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}


// Reference entry 112502c0; body size 24 bytes.
#line 1 "ENTRY_112502c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_112502c0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  void *pvVar1;
  undefined4 uVar2;
  uint uVar3;
  
  switch(param_2) {
  case 1:
    *(undefined4 *)(param_1 + 4) = 1;
    uVar3 = (uint)(1);
    break;
  case 2:
    *(undefined4 *)(param_1 + 4) = 2;
    uVar3 = (uint)(2);
    break;
  case 3:
    *(undefined4 *)(param_1 + 4) = 3;
    uVar3 = (uint)(2);
    break;
  case 4:
    *(undefined4 *)(param_1 + 4) = 4;
    uVar3 = (uint)(4);
    break;
  case 5:
    *(undefined4 *)(param_1 + 4) = 5;
    uVar3 = (uint)(4);
    break;
  case 6:
    *(undefined4 *)(param_1 + 4) = 6;
    uVar3 = (uint)(8);
    break;
  case 7:
    *(undefined4 *)(param_1 + 4) = 7;
    uVar2 = (undefined4)(thunk_FUN_1148b586(param_3));
    *(undefined4 *)(param_1 + 0x10) = param_3;
    *(undefined4 *)(param_1 + 8) = uVar2;
    *(undefined4 *)(param_1 + 0xc) = uVar2;
  default:
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined1 *)(param_1 + 0x31) = 0;
    return;
  }
  pvVar1 = (void *)(operator_new(uVar3));
  *(void **)(param_1 + 8) = pvVar1;
  *(undefined4 *)(param_1 + 0x10) = 0x18;
  *(int *)(param_1 + 0xc) = param_1 + 0x18;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  return;
}


// Reference entry 11250570; body size 41 bytes.
#line 1 "ENTRY_11250570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11250570(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x10) = 0x18;
  *(int *)(param_1 + 0xc) = param_1 + 0x18;
  *(undefined4 *)(param_1 + 4) = 6;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  return;
}


// Reference entry 112505f0; body size 10 bytes.
#line 1 "ENTRY_112505f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_112505f0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(((uint)((int3)(*(uint *)(param_1 + 8) >> 8)) << 8 | (uint)(*(uint *)(param_1 + 4) < *(uint *)(param_1 + 8))));
}


// Reference entry 112517a0; body size 8 bytes.
#line 1 "ENTRY_112517a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_112517a0(int param_1)

{
                    
                    
  (**(code **)(**(int **)(param_1 + 8) + 0xc))();
  return;
}


// Reference entry 112517b0; body size 8 bytes.
#line 1 "ENTRY_112517b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_112517b0(int param_1)

{
                    
                    
  (**(code **)(**(int **)(param_1 + 8) + 0x10))();
  return;
}


// Reference entry 112519b0; body size 18 bytes.
#line 1 "ENTRY_112519b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112519b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_112517c0(param_2,param_3);
  return;
}


// Reference entry 11252240; body size 14 bytes.
#line 1 "ENTRY_11252240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11252240(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_11251ae0(param_2);
  return;
}


// Reference entry 112526d0; body size 18 bytes.
#line 1 "ENTRY_112526d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * __fastcall FUN_112526d0(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)("</u:%s%s>");
  if (*(int *)(param_1 + 4) != 0) {
    pcVar1 = (char *)("</%s%s>");
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)(pcVar1);
}


// Reference entry 112526f0; body size 16 bytes.
#line 1 "ENTRY_112526f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char __fastcall FUN_112526f0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char)((*(int *)(param_1 + 4) == 0) * '\x02' + '\b');
}


// Reference entry 11252710; body size 18 bytes.
#line 1 "ENTRY_11252710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * __fastcall FUN_11252710(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)("<u:%s%s xmlns:u=\"%s\">");
  if (*(int *)(param_1 + 4) != 0) {
    pcVar1 = (char *)("<%s%s xmlns=\"%s\">");
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)(pcVar1);
}


// Reference entry 11252730; body size 16 bytes.
#line 1 "ENTRY_11252730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char __fastcall FUN_11252730(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char)((*(int *)(param_1 + 4) == 0) * '\x04' + '\x12');
}


// Reference entry 11252750; body size 6 bytes.
#line 1 "ENTRY_11252750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_11252750(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("</s:Body>");
}


// Reference entry 11252760; body size 6 bytes.
#line 1 "ENTRY_11252760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11252760(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(10);
}


// Reference entry 11252770; body size 6 bytes.
#line 1 "ENTRY_11252770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_11252770(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("<s:Body>");
}


// Reference entry 11252780; body size 6 bytes.
#line 1 "ENTRY_11252780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11252780(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(9);
}


// Reference entry 11252790; body size 6 bytes.
#line 1 "ENTRY_11252790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_11252790(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("</s:Envelope>");
}


// Reference entry 112527a0; body size 6 bytes.
#line 1 "ENTRY_112527a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_112527a0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xe);
}


// Reference entry 112527b0; body size 18 bytes.
#line 1 "ENTRY_112527b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * __fastcall FUN_112527b0(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)("<s:Envelope xmlns:s=\"http://schemas.xmlsoap.org/soap/envelope/\" s:encodingStyle=\"http://schemas.xmlsoap.org/soap/encoding/\">");
  if (*(int *)(param_1 + 4) != 0) {
    pcVar1 = (char *)("<s:Envelope xmlns:s=\"http://schemas.xmlsoap.org/soap/envelope/\">");
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)(pcVar1);
}


// Reference entry 112527d0; body size 18 bytes.
#line 1 "ENTRY_112527d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_112527d0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(0x41);
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = (undefined4)(0x7d);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 112527f0; body size 6 bytes.
#line 1 "ENTRY_112527f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_112527f0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("</s:Header>");
}


// Reference entry 11252800; body size 6 bytes.
#line 1 "ENTRY_11252800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11252800(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xc);
}


// Reference entry 11252810; body size 6 bytes.
#line 1 "ENTRY_11252810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_11252810(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("<s:Header>");
}


// Reference entry 11252820; body size 6 bytes.
#line 1 "ENTRY_11252820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11252820(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xb);
}


// Reference entry 11252880; body size 4 bytes.
#line 1 "ENTRY_11252880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11252880(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 11252890; body size 62 bytes.
#line 1 "ENTRY_11252890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11252890(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0x38));
  if (((uVar1 < 2) && (param_2 != 0)) && (*(int *)(param_2 + 8) != 0)) {
    *(int *)(param_1 + 0x2c + uVar1 * 4) = param_2;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 4);
    if (uVar1 != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x28 + uVar1 * 4) + 0xc2d) = 0;
      *(undefined1 *)(param_2 + 0xc2c) = 0;
    }
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  }
  return;
}


// Reference entry 112528e0; body size 45 bytes.
#line 1 "ENTRY_112528e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_112528e0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x38));
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)((undefined4 *)(param_1 + 0x28 + iVar1 * 4));
    do {
      *puVar2 = (undefined4)(0);
      puVar2 = (undefined4 *)(puVar2 + -1);
      iVar1 = (int)(iVar1 + -1);
    } while (iVar1 != 0);
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}


// Reference entry 11252920; body size 8 bytes.
#line 1 "ENTRY_11252920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11252920(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 8) == 0);
}


// Reference entry 11252930; body size 8 bytes.
#line 1 "ENTRY_11252930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11252930(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 4) == 0);
}


// Reference entry 11252940; body size 4 bytes.
#line 1 "ENTRY_11252940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11252940(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x30));
}


// Reference entry 11252950; body size 8 bytes.
#line 1 "ENTRY_11252950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11252950(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x50) != 0);
}


// Reference entry 11252960; body size 4 bytes.
#line 1 "ENTRY_11252960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11252960(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x32));
}


// Reference entry 11252dc0; body size 37 bytes.
#line 1 "ENTRY_11252dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * __fastcall FUN_11252dc0(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)((char *)(param_1 + 0x28));
  do {
    cVar1 = (char)(*pcVar3);
    pcVar3 = (char *)(pcVar3 + 1);
  } while (cVar1 != '\0');
  iVar2 = (int)(0x11c);
  if (*(int *)(param_1 + 4) == 0) {
    iVar2 = (int)(0x158);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)(pcVar3 + (iVar2 - (param_1 + 0x29)));
}


// Reference entry 11252df0; body size 13 bytes.
#line 1 "ENTRY_11252df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * __fastcall FUN_11252df0(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  
  if (*(int *)(param_1 + 8) == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)((char *)0x0);
  }
  iVar4 = (int)(thunk_FUN_11253130());
  pcVar6 = (char *)(*(char **)(param_1 + 0x24));
  pcVar1 = (char *)(pcVar6 + 1);
  do {
    cVar3 = (char)(*pcVar6);
    pcVar6 = (char *)(pcVar6 + 1);
  } while (cVar3 != '\0');
  pcVar8 = (char *)(*(char **)(param_1 + 0x20));
  pcVar2 = (char *)(pcVar8 + 1);
  do {
    cVar3 = (char)(*pcVar8);
    pcVar8 = (char *)(pcVar8 + 1);
  } while (cVar3 != '\0');
  iVar7 = (int)(0x15);
  if (*(char *)(param_1 + 0xc2d) == '\0') {
    iVar7 = (int)(0);
  }
  iVar5 = (int)(0x1a);
  if (*(int *)(param_1 + 4) == 0) {
    iVar5 = (int)(0x20);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)(pcVar8 + iVar4 + -0xc + ((int)pcVar6 - (int)pcVar1) * 2 + iVar7 + (iVar5 - (int)pcVar2));
}


// Reference entry 11252f30; body size 81 bytes.
#line 1 "ENTRY_11252f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11252f30(undefined4 param_2)
{
  int *param_1 = (int *)this;
  char *pcVar1;
  undefined4 uVar2;
  
  if (param_1[1] == 8) {
    pcVar1 = (char *)("stream");
  }
  else if (param_1[1] == 9) {
    pcVar1 = (char *)("custom");
  }
  else {
    pcVar1 = (char *)("");
    if ((char *)param_1[3] != (char *)0x0) {
      pcVar1 = (char *)((char *)param_1[3]);
    }
  }
  uVar2 = (undefined4)((**(code **)(*param_1 + 8))(pcVar1));
  uVar2 = (undefined4)(thunk_FUN_11299c80(param_2," - param %s = %s",uVar2));
  thunk_FUN_112b0270(&DAT_119e05c4,uVar2);
  return;
}


// Reference entry 11253120; body size 4 bytes.
#line 1 "ENTRY_11253120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11253120(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 11253220; body size 135 bytes.
#line 1 "ENTRY_11253220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11253220(char *param_1,int param_2,char *param_3,char *param_4,char param_5)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  
  if ((param_2 == 0) || (param_1 == (char *)0x0)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  }
  pcVar3 = (char *)(strstr(param_3,param_4));
  if (pcVar3 == (char *)0x0) {
    *param_1 = (char)('\0');
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  }
  pcVar1 = (char *)(param_4 + 1);
  do {
    cVar2 = (char)(*param_4);
    param_4 = (char *)(param_4 + 1);
  } while (cVar2 != '\0');
  uVar5 = (uint)(0);
  if (param_2 != 1) {
    pcVar4 = (char *)(param_1);
    do {
      cVar2 = (char)(pcVar4[(int)(pcVar3 + (int)(param_4 + (-(int)param_1 - (int)pcVar1)))]);
      if ((cVar2 == '\0') || (cVar2 == param_5)) break;
      *pcVar4 = (char)(cVar2);
      uVar5 = (uint)(uVar5 + 1);
      pcVar4 = (char *)(pcVar4 + 1);
    } while (uVar5 < param_2 - 1U);
  }
  param_1[uVar5] = (char)('\0');
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
}


// Reference entry 112532d0; body size 7 bytes.
#line 1 "ENTRY_112532d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_112532d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x2d0));
}


// Reference entry 11253bd0; body size 26 bytes.
#line 1 "ENTRY_11253bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11253bd0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  return;
}


// Reference entry 11253cb0; body size 8 bytes.
#line 1 "ENTRY_11253cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 __fastcall FUN_11253cb0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2)(*(undefined2 *)(param_1 + 0x2ce));
}


// Reference entry 11253cc0; body size 4 bytes.
#line 1 "ENTRY_11253cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11253cc0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xc));
}


// Reference entry 11253d90; body size 10 bytes.
#line 1 "ENTRY_11253d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11253d90(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1 *)(param_1 + 0x54) = param_2;
  return;
}


// Reference entry 11253da0; body size 5 bytes.
#line 1 "ENTRY_11253da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11253da0(int param_1)

{
  *(undefined1 *)(param_1 + 0x32) = 1;
  return;
}


// Reference entry 11253db0; body size 10 bytes.
#line 1 "ENTRY_11253db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11253db0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x50) = param_2;
  return;
}


// Reference entry 11253dc0; body size 13 bytes.
#line 1 "ENTRY_11253dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11253dc0(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1 *)(param_1 + 0xc2d) = param_2;
  return;
}


// Reference entry 11253dd0; body size 13 bytes.
#line 1 "ENTRY_11253dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11253dd0(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1 *)(param_1 + 0xc2c) = param_2;
  return;
}


// Reference entry 11253de0; body size 4 bytes.
#line 1 "ENTRY_11253de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11253de0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x54));
}


// Reference entry 11253e20; body size 8 bytes.
#line 1 "ENTRY_11253e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11253e20(int param_1)

{
                    
                    
  (**(code **)(**(int **)(param_1 + 8) + 4))();
  return;
}


// Reference entry 11253e30; body size 8 bytes.
#line 1 "ENTRY_11253e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11253e30(int param_1)

{
                    
                    
  (**(code **)(**(int **)(param_1 + 8) + 8))();
  return;
}


// Reference entry 112544e0; body size 18 bytes.
#line 1 "ENTRY_112544e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112544e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_11253f10(param_2,param_3);
  return;
}


// Reference entry 11254bc0; body size 71 bytes.
#line 1 "ENTRY_11254bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_11254bc0(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *param_1 = (undefined1)(0);
  param_1[0x102] = (undefined1)(0);
  param_1[0x81] = (undefined1)(0);
  param_1[0x143] = (undefined1)(0);
  param_1[0x184] = (undefined1)(0);
  param_1[0x1c5] = (undefined1)(0);
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(param_1);
}


// Reference entry 11254d30; body size 53 bytes.
#line 1 "ENTRY_11254d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11254d30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAccountsVectorClock);
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)((int)param_1 + 5) = 0;
  *(undefined4 *)((int)param_1 + 9) = 0;
  *(undefined4 *)((int)param_1 + 0xd) = 0;
  *(undefined4 *)((int)param_1 + 0x11) = 0;
  *(undefined4 *)((int)param_1 + 0x15) = 0;
  *(undefined4 *)((int)param_1 + 0x19) = 0;
  *(undefined4 *)((int)param_1 + 0x1d) = 0;
  *(undefined4 *)((int)param_1 + 0x21) = 0;
  *(undefined4 *)((int)param_1 + 0x25) = 0;
  *(undefined4 *)((int)param_1 + 0x29) = 0;
  *(undefined4 *)((int)param_1 + 0x2d) = 0;
  *(undefined4 *)((int)param_1 + 0x31) = 0;
  *(undefined4 *)((int)param_1 + 0x35) = 0;
  *(undefined8 *)((int)param_1 + 0x39) = 0;
  *(undefined4 *)((int)param_1 + 0x41) = 0;
  *(undefined2 *)((int)param_1 + 0x45) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11254dd0; body size 8 bytes.
#line 1 "ENTRY_11254dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 * __fastcall FUN_11254dd0(undefined2 *param_1)

{
  *param_1 = (undefined2)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 *)(param_1);
}


// Reference entry 11255540; body size 3 bytes.
#line 1 "ENTRY_11255540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11255540(void)

{
  return;
}


// Reference entry 11255a10; body size 118 bytes.
#line 1 "ENTRY_11255a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_11255a10(int *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  
  if (((param_1[1] == param_2[1]) && (*param_1 == *param_2)) && (param_1[0x7d] == param_2[0x7d])) {
    cVar1 = (char)(thunk_FUN_11255740(param_2 + 2));
    if (cVar1 != '\0') {
      cVar1 = (char)(thunk_FUN_11255ba0(param_1 + 0x7e,param_2 + 0x7e));
      if (cVar1 == '\0') {
        cVar1 = (char)(thunk_FUN_1145f930(param_1 + 0x90,param_2 + 0x90));
        if (cVar1 != '\0') {
          return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
        }
      }
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11255ab0; body size 182 bytes.
#line 1 "ENTRY_11255ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_11255ab0(uint *param_2)
{
  uint *param_1 = (uint *)this;
  char cVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  if (*param_1 != *param_2) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  }
  uVar2 = (uint)(0);
  if (*param_2 != 0) {
    puVar4 = (uint *)(param_2 + 3);
    puVar3 = (uint *)(param_1 + 2);
    do {
      if (*puVar3 != *(uint *)(((int)param_2 - (int)param_1) + (int)puVar3)) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
      }
      if (puVar3[-1] != puVar4[-2]) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
      }
      if (puVar3[0x7c] != puVar4[0x7b]) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
      }
      cVar1 = (char)(thunk_FUN_11255740(puVar4));
      if (cVar1 == '\0') {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
      }
      cVar1 = (char)(thunk_FUN_11255ba0(puVar3 + 0x7d,puVar4 + 0x7c));
      if (cVar1 != '\0') {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
      }
      cVar1 = (char)(thunk_FUN_1145f930(puVar3 + 0x8f,puVar4 + 0x8e));
      if (cVar1 == '\0') {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
      }
      uVar2 = (uint)(uVar2 + 1);
      puVar4 = (uint *)(puVar4 + 0x94);
      puVar3 = (uint *)(puVar3 + 0x94);
    } while (uVar2 < *param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
}


// Reference entry 11255cd0; body size 182 bytes.
#line 1 "ENTRY_11255cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_11255cd0(uint *param_2)
{
  uint *param_1 = (uint *)this;
  char cVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  if (*param_1 != *param_2) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
  }
  uVar2 = (uint)(0);
  if (*param_2 != 0) {
    puVar4 = (uint *)(param_2 + 3);
    puVar3 = (uint *)(param_1 + 2);
    do {
      if (*puVar3 != *(uint *)(((int)param_2 - (int)param_1) + (int)puVar3)) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
      }
      if (puVar3[-1] != puVar4[-2]) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
      }
      if (puVar3[0x7c] != puVar4[0x7b]) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
      }
      cVar1 = (char)(thunk_FUN_11255740(puVar4));
      if (cVar1 == '\0') {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
      }
      cVar1 = (char)(thunk_FUN_11255ba0(puVar3 + 0x7d,puVar4 + 0x7c));
      if (cVar1 != '\0') {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
      }
      cVar1 = (char)(thunk_FUN_1145f930(puVar3 + 0x8f,puVar4 + 0x8e));
      if (cVar1 == '\0') {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
      }
      uVar2 = (uint)(uVar2 + 1);
      puVar4 = (uint *)(puVar4 + 0x94);
      puVar3 = (uint *)(puVar3 + 0x94);
    } while (uVar2 < *param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11255e40; body size 55 bytes.
#line 1 "ENTRY_11255e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

ulong FUN_11255e40(char *param_1)

{
  int iVar1;
  ulong uVar2;
  char *pcStack_4;
  
  iVar1 = (int)(strncmp(param_1,"X_#Svc",6));
  if (iVar1 == 0) {
    uVar2 = (ulong)(strtoul(param_1 + 6,&pcStack_4,10));
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ ulong)(uVar2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ ulong)(0);
}


// Reference entry 11255fb0; body size 7 bytes.
#line 1 "ENTRY_11255fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11255fb0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x1cd);
}


// Reference entry 11255fc0; body size 7 bytes.
#line 1 "ENTRY_11255fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11255fc0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x18c);
}


// Reference entry 11256250; body size 7 bytes.
#line 1 "ENTRY_11256250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11256250(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return;
}


// Reference entry 112562f0; body size 4 bytes.
#line 1 "ENTRY_112562f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_112562f0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x28);
}


// Reference entry 11256980; body size 512 bytes.
#line 1 "ENTRY_11256980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11256980(int param_2)
{
  uint param_1 = (uint )this;
 try {
  undefined1 *puVar1;
  uint uStack_53c;
  void *pvStack_538;
  undefined1 *puStack_534;
  undefined4 uStack_530;
  undefined1 auStack_52c [137];
  char cStack_4a3;
  undefined1 auStack_4a2 [354];
  void *pvStack_340;
  void *pvStack_33c;
  undefined1 auStack_2dc [137];
  char cStack_253;
  undefined1 auStack_252 [354];
  void *pvStack_f0;
  void *pvStack_ec;
  undefined1 auStack_8c [132];
  uint uStack_8;


  uStack_8 = (uint)(DAT_12126b84 ^ (uint)auStack_52c);

  uStack_53c = (uint)(param_1);
  if ((((*(uint *)(param_2 + 4) & 0x7f) - 1 & 0xfffffffe) == 10) &&
     (((*(uint *)(param_1 + 4) & 0x7f) - 1 & 0xfffffffe) == 10)) {
    thunk_FUN_11254de0(param_1);

    thunk_FUN_11254de0(param_2);

    puVar1 = (undefined1 *)(&DAT_1186d2ee);
    if (cStack_4a3 == '1') {
      puVar1 = (undefined1 *)(auStack_4a2);
    }
    thunk_FUN_101b9160(puVar1,&DAT_119e0b2c,&uStack_53c);
    thunk_FUN_1145c720(auStack_8c,0x81,&DAT_119e0b2c,(uStack_53c >> 1 & 1) * 2);
    cStack_4a3 = (char)('1');
    thunk_FUN_1106a8d0(auStack_4a2,auStack_8c,0x80);

    puVar1 = (undefined1 *)(&DAT_1186d2ee);
    if (cStack_253 == '1') {
      puVar1 = (undefined1 *)(auStack_252);
    }
    thunk_FUN_101b9160(puVar1,&DAT_119e0b2c,&uStack_53c);
    thunk_FUN_1145c720(auStack_8c,0x81,&DAT_119e0b2c,(uStack_53c >> 1 & 1) * 2);
    cStack_253 = (char)('1');
    thunk_FUN_1106a8d0(auStack_252,auStack_8c,0x80);
    func_0x1004c857(auStack_2dc);
    if (pvStack_f0 != (void *)0x0) {
      free(pvStack_f0);
      pvStack_f0 = (void *)((void *)0x0);
    }
    if (pvStack_ec != (void *)0x0) {
      free(pvStack_ec);
      pvStack_ec = (void *)((void *)0x0);
    }
    if (pvStack_340 != (void *)0x0) {
      free(pvStack_340);
      pvStack_340 = (void *)((void *)0x0);
    }
    if (pvStack_33c != (void *)0x0) {
      free(pvStack_33c);
    }
  }
  else {
    func_0x1004c857(param_2,uStack_8);
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 11256c00; body size 598 bytes.
#line 1 "ENTRY_11256c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11256c00(uint *param_2)
{
  uint *param_1 = (uint *)this;
 try {
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uStack_544;
  uint uStack_540;
  char cStack_539;
  void *pvStack_538;
  undefined1 *puStack_534;
  undefined4 uStack_530;
  undefined1 auStack_52c [137];
  char cStack_4a3;
  undefined1 auStack_4a2 [354];
  void *pvStack_340;
  void *pvStack_33c;
  undefined1 auStack_2dc [137];
  char cStack_253;
  undefined1 auStack_252 [354];
  void *pvStack_f0;
  void *pvStack_ec;
  undefined1 auStack_8c [132];
  uint uStack_8;


  uVar2 = (uint)(DAT_12126b84 ^ (uint)auStack_52c);

  uStack_8 = (uint)(uVar2);
  if ((*param_1 == *param_2) && (uVar6 = 0, *param_2 != 0)) {
    puVar5 = (uint *)(param_1 + 1);
    iVar4 = (int)((int)param_2 - (int)param_1);
    do {
      if ((((*(uint *)(iVar4 + 4 + (int)puVar5) & 0x7f) - 1 & 0xfffffffe) == 10) &&
         (((puVar5[1] & 0x7f) - 1 & 0xfffffffe) == 10)) {
        thunk_FUN_11254de0(puVar5);

        thunk_FUN_11254de0(iVar4 + (int)puVar5);

        puVar3 = (undefined1 *)(&DAT_1186d2ee);
        if (cStack_4a3 == '1') {
          puVar3 = (undefined1 *)(auStack_4a2);
        }
        thunk_FUN_101b9160(puVar3,&DAT_119e0b2c,&uStack_540);
        thunk_FUN_1145c720(auStack_8c,0x81,&DAT_119e0b2c,(uStack_540 >> 1 & 1) * 2);
        cStack_4a3 = (char)('1');
        thunk_FUN_1106a8d0(auStack_4a2,auStack_8c,0x80);

        puVar3 = (undefined1 *)(&DAT_1186d2ee);
        if (cStack_253 == '1') {
          puVar3 = (undefined1 *)(auStack_252);
        }
        thunk_FUN_101b9160(puVar3,&DAT_119e0b2c,&uStack_544);
        thunk_FUN_1145c720(auStack_8c,0x81,&DAT_119e0b2c,(uStack_544 >> 1 & 1) * 2);
        cStack_253 = (char)('1');
        thunk_FUN_1106a8d0(auStack_252,auStack_8c,0x80);
        cStack_539 = (char)(func_0x1004c857(auStack_2dc));
        if (pvStack_f0 != (void *)0x0) {
          free(pvStack_f0);
          pvStack_f0 = (void *)((void *)0x0);
        }
        if (pvStack_ec != (void *)0x0) {
          free(pvStack_ec);
          pvStack_ec = (void *)((void *)0x0);
        }

        if (pvStack_340 != (void *)0x0) {
          free(pvStack_340);
          pvStack_340 = (void *)((void *)0x0);
        }
        cVar1 = (char)(cStack_539);
        if (pvStack_33c != (void *)0x0) {
          free(pvStack_33c);
          cVar1 = (char)(cStack_539);
        }
      }
      else {
        cVar1 = (char)(func_0x1004c857(iVar4 + (int)puVar5,uVar2));
      }
      if (cVar1 == '\0') break;
      uVar6 = (uint)(uVar6 + 1);
      puVar5 = (uint *)(puVar5 + 0x94);
    } while (uVar6 < *param_2);
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 11257130; body size 18 bytes.
#line 1 "ENTRY_11257130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11257130(undefined4 param_1,undefined4 param_2)

{
  func_0x100630b6(param_1,0,param_2);
  return;
}


// Reference entry 11257340; body size 36 bytes.
#line 1 "ENTRY_11257340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint * __thiscall Recovered_Bulk::FUN_11257340(uint param_2)
{
  uint *param_1 = (uint *)this;
  uint *puVar1;
  uint uVar2;
  
  uVar2 = (uint)(0);
  if (*param_1 != 0) {
    puVar1 = (uint *)(param_1 + 1);
    do {
      if (param_2 == *puVar1) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint *)(puVar1);
      }
      uVar2 = (uint)(uVar2 + 1);
      puVar1 = (uint *)(puVar1 + 0x94);
    } while (uVar2 < *param_1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint *)((uint *)0x0);
}


// Reference entry 11257370; body size 18 bytes.
#line 1 "ENTRY_11257370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11257370(undefined4 param_1,undefined4 param_2)

{
  func_0x100630b6(param_1,param_2,0);
  return;
}


// Reference entry 11257540; body size 7 bytes.
#line 1 "ENTRY_11257540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11257540(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 500));
}


// Reference entry 112575a0; body size 62 bytes.
#line 1 "ENTRY_112575a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_112575a0(int param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  
  iVar5 = (int)(*param_1);
  iVar2 = (int)(0);
  if (iVar5 != 0) {
    puVar4 = (uint *)((uint *)(param_1 + 2));
    iVar3 = (int)(iVar2);
    do {
      uVar1 = (uint)(*puVar4);
      puVar4 = (uint *)(puVar4 + 0x94);
      iVar2 = (int)(iVar3 + 1);
      if (param_2 != (uVar1 & 0xffffff7f) + ((uVar1 & 1) - 1)) {
        iVar2 = (int)(iVar3);
      }
      iVar5 = (int)(iVar5 + -1);
      iVar3 = (int)(iVar2);
    } while (iVar5 != 0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar2);
}


// Reference entry 112576d0; body size 49 bytes.
#line 1 "ENTRY_112576d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_112576d0(int param_1)

{
  uint uVar1;
  
  if (((*(ushort *)(param_1 + 4) & 0x7f) - 1 & 0xfffffffe) == 6) {
    uVar1 = (uint)(*(uint *)(param_1 + 4) >> 8);
    if (uVar1 == 0xa8) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(2);
    }
    if (uVar1 == 0x31) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x25);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11257710; body size 42 bytes.
#line 1 "ENTRY_11257710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11257710(int *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)(*param_1);
  iVar3 = (int)(0);
  if (iVar5 != 0) {
    pbVar2 = (byte *)((byte *)(param_1 + 0x7e));
    iVar4 = (int)(iVar3);
    do {
      bVar1 = (byte)(*pbVar2);
      pbVar2 = (byte *)(pbVar2 + 0x250);
      iVar3 = (int)(iVar4 + 1);
      if ((bVar1 & 1) == 0) {
        iVar3 = (int)(iVar4);
      }
      iVar5 = (int)(iVar5 + -1);
      iVar4 = (int)(iVar3);
    } while (iVar5 != 0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar3);
}


// Reference entry 11257880; body size 7 bytes.
#line 1 "ENTRY_11257880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11257880(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x1f8);
}


// Reference entry 11257890; body size 49 bytes.
#line 1 "ENTRY_11257890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_11257890(uint *param_1)

{
  uint in_EAX;
  uint *puVar1;
  uint uVar2;
  
  uVar2 = (uint)(0);
  if (*param_1 != 0) {
    puVar1 = (uint *)(param_1 + 2);
    do {
      in_EAX = (uint)(*puVar1 & 0xffffff00);
      if (in_EAX == 0x12f00) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0x12f01);
      }
      uVar2 = (uint)(uVar2 + 1);
      puVar1 = (uint *)(puVar1 + 0x94);
    } while (uVar2 < *param_1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(in_EAX & 0xffffff00);
}


// Reference entry 112578d0; body size 4 bytes.
#line 1 "ENTRY_112578d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_112578d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 4);
}


// Reference entry 112578e0; body size 9 bytes.
#line 1 "ENTRY_112578e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_112578e0(int param_1)

{
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}


// Reference entry 11257940; body size 81 bytes.
#line 1 "ENTRY_11257940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_11257940(uint param_2)
{
  uint *param_1 = (uint *)this;
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *_Str2;
  
  if (param_2 < *param_1) {
    _Str2 = (uint *)(param_1 + param_2 * 0x94 + 3);
    if (param_1[param_2 * 0x94 + 0x7c] != 0) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
    puVar3 = (uint *)(_Str2);
    do {
      uVar1 = (uint)(*puVar3);
      puVar3 = (uint *)((uint *)((int)puVar3 + 1));
    } while ((char)uVar1 != '\0');
    if ((3 < (uint)((int)puVar3 - ((int)_Str2 + 1))) &&
       (iVar2 = strncmp("X_#",(char *)_Str2,3), iVar2 == 0)) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11257a40; body size 17 bytes.
#line 1 "ENTRY_11257a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11257a40(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(*(uint *)(param_1 + 4) & 0xffffff00);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)(uVar1 == 0xa800)));
}


// Reference entry 11257a60; body size 17 bytes.
#line 1 "ENTRY_11257a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11257a60(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(*(uint *)(param_1 + 4) & 0xffffff00);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)(uVar1 == 0x3100)));
}


// Reference entry 11257bc0; body size 7 bytes.
#line 1 "ENTRY_11257bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11257bc0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x1f0));
}


// Reference entry 11257bd0; body size 83 bytes.
#line 1 "ENTRY_11257bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11257bd0(int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10)
{
  int param_1 = (int )this;
  if ((param_2 == 1) || (param_2 == 2)) {
    param_2 = (int)(0xca07);
  }
  else if ((param_2 == 0xd) || (param_2 == 0xe)) {
    param_2 = (int)(0xcb07);
  }
  *(int *)(param_1 + 4) = param_2;
  thunk_FUN_112588d0(param_3,param_4,param_5,param_6,param_7,0,0,param_8,param_9,param_10);
  return;
}


// Reference entry 11257cb0; body size 157 bytes.
#line 1 "ENTRY_11257cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11257cb0(int param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *_Src;
  void *pvVar2;
  char *pcVar3;
  size_t sVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(*(char **)(param_2 + 0x1e4));
  _Src = (char *)(*(char **)(param_2 + 0x1e8));
  if (pcVar5 != (char *)0x0) {
    pcVar3 = (char *)(pcVar5);
    do {
      cVar1 = (char)(*pcVar3);
      pcVar3 = (char *)(pcVar3 + 1);
    } while (cVar1 != '\0');
    if ((int)pcVar3 - (int)(pcVar5 + 1) != 0) {
      if (*(void **)(param_1 + 0x1e4) != (void *)0x0) {
        free(*(void **)(param_1 + 0x1e4));
      }
      sVar4 = (size_t)(((int)pcVar3 - (int)(pcVar5 + 1)) + 1);
      pvVar2 = (void *)((void *)thunk_FUN_1148b586(sVar4));
      *(void **)(param_1 + 0x1e4) = pvVar2;
      memcpy(pvVar2,pcVar5,sVar4);
    }
  }
  if (_Src != (char *)0x0) {
    pcVar5 = (char *)(_Src);
    do {
      cVar1 = (char)(*pcVar5);
      pcVar5 = (char *)(pcVar5 + 1);
    } while (cVar1 != '\0');
    if ((int)pcVar5 - (int)(_Src + 1) != 0) {
      if (*(void **)(param_1 + 0x1e8) != (void *)0x0) {
        free(*(void **)(param_1 + 0x1e8));
      }
      sVar4 = (size_t)(((int)pcVar5 - (int)(_Src + 1)) + 1);
      pvVar2 = (void *)((void *)thunk_FUN_1148b586(sVar4));
      *(void **)(param_1 + 0x1e8) = pvVar2;
      memcpy(pvVar2,_Src,sVar4);
    }
  }
  return;
}


// Reference entry 11257e40; body size 157 bytes.
#line 1 "ENTRY_11257e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11257e40(int param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *_Src;
  void *pvVar2;
  char *pcVar3;
  size_t sVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(*(char **)(param_2 + 0x1ec));
  _Src = (char *)(*(char **)(param_2 + 0x1f0));
  if (pcVar5 != (char *)0x0) {
    pcVar3 = (char *)(pcVar5);
    do {
      cVar1 = (char)(*pcVar3);
      pcVar3 = (char *)(pcVar3 + 1);
    } while (cVar1 != '\0');
    if ((int)pcVar3 - (int)(pcVar5 + 1) != 0) {
      if (*(void **)(param_1 + 0x1ec) != (void *)0x0) {
        free(*(void **)(param_1 + 0x1ec));
      }
      sVar4 = (size_t)(((int)pcVar3 - (int)(pcVar5 + 1)) + 1);
      pvVar2 = (void *)((void *)thunk_FUN_1148b586(sVar4));
      *(void **)(param_1 + 0x1ec) = pvVar2;
      memcpy(pvVar2,pcVar5,sVar4);
    }
  }
  if (_Src != (char *)0x0) {
    pcVar5 = (char *)(_Src);
    do {
      cVar1 = (char)(*pcVar5);
      pcVar5 = (char *)(pcVar5 + 1);
    } while (cVar1 != '\0');
    if ((int)pcVar5 - (int)(_Src + 1) != 0) {
      if (*(void **)(param_1 + 0x1f0) != (void *)0x0) {
        free(*(void **)(param_1 + 0x1f0));
      }
      sVar4 = (size_t)(((int)pcVar5 - (int)(_Src + 1)) + 1);
      pvVar2 = (void *)((void *)thunk_FUN_1148b586(sVar4));
      *(void **)(param_1 + 0x1f0) = pvVar2;
      memcpy(pvVar2,_Src,sVar4);
    }
  }
  return;
}


// Reference entry 11257fd0; body size 193 bytes.
#line 1 "ENTRY_11257fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11257fd0(uint param_2,char *param_3,char *param_4,char *param_5)
{
  uint *param_1 = (uint *)this;
  char cVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  size_t sVar5;
  
  if (param_2 < *param_1) {
    param_1 = (uint *)(param_1 + param_2 * 0x94 + 3);
    iVar2 = (int)(strncmp((char *)param_1,param_3,0x80));
    if (iVar2 == 0) {
      if (param_4 != (char *)0x0) {
        pcVar4 = (char *)(param_4);
        do {
          cVar1 = (char)(*pcVar4);
          pcVar4 = (char *)(pcVar4 + 1);
        } while (cVar1 != '\0');
        if ((int)pcVar4 - (int)(param_4 + 1) != 0) {
          if ((void *)param_1[0x79] != (void *)0x0) {
            free((void *)param_1[0x79]);
          }
          sVar5 = (size_t)(((int)pcVar4 - (int)(param_4 + 1)) + 1);
          pvVar3 = (void *)((void *)thunk_FUN_1148b586(sVar5));
          param_1[0x79] = (uint)((uint)pvVar3);
          memcpy(pvVar3,param_4,sVar5);
        }
      }
      if (param_5 != (char *)0x0) {
        pcVar4 = (char *)(param_5);
        do {
          cVar1 = (char)(*pcVar4);
          pcVar4 = (char *)(pcVar4 + 1);
        } while (cVar1 != '\0');
        if ((int)pcVar4 - (int)(param_5 + 1) != 0) {
          if ((void *)param_1[0x7a] != (void *)0x0) {
            free((void *)param_1[0x7a]);
          }
          sVar5 = (size_t)(((int)pcVar4 - (int)(param_5 + 1)) + 1);
          pvVar3 = (void *)((void *)thunk_FUN_1148b586(sVar5));
          param_1[0x7a] = (uint)((uint)pvVar3);
          memcpy(pvVar3,param_5,sVar5);
        }
      }
    }
  }
  return;
}


// Reference entry 11258240; body size 24 bytes.
#line 1 "ENTRY_11258240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11258240(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1106a8d0(param_1 + 0x1cd,param_2,0x19);
  return;
}


// Reference entry 11258350; body size 187 bytes.
#line 1 "ENTRY_11258350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11258350(undefined4 param_1,char *param_2,undefined4 param_3)

{
 try {
  char cVar1;
  char *pcVar2;
  undefined1 auStack_84 [108];
  undefined1 auStack_18 [20];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)auStack_84);
  thunk_FUN_113d1ae0(auStack_84,2);
  Ordinal_8(param_1);
  thunk_FUN_113d1d90(&stack0xffffff78,&stack0x00000000,4);
  pcVar2 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  thunk_FUN_113d1d90(&stack0xffffff78,param_2,(int)pcVar2 - (int)(param_2 + 1));
  thunk_FUN_113d1a60(&stack0xffffff78,auStack_18);
  thunk_FUN_114601a0(auStack_18,0x10,param_3,param_3);
  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 11258a80; body size 44 bytes.
#line 1 "ENTRY_11258a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11258a80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  thunk_FUN_112588d0(param_1,param_2,param_3,param_4,param_5,0,0,param_6,param_7,param_8);
  return;
}


// Reference entry 11258ac0; body size 24 bytes.
#line 1 "ENTRY_11258ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_11258ac0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1145f900(param_1 + 0x240,param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
}


// Reference entry 11258ef0; body size 7 bytes.
#line 1 "ENTRY_11258ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11258ef0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x1ec));
}


// Reference entry 11258f00; body size 26 bytes.
#line 1 "ENTRY_11258f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_11258f00(uint param_2)
{
  uint *param_1 = (uint *)this;
  if (param_2 < *param_1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(param_1[param_2 * 0x94 + 2]);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0);
}


// Reference entry 11259370; body size 107 bytes.
#line 1 "ENTRY_11259370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11259370(undefined4 param_2,undefined4 param_3,int param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[0x23] = (undefined4)(0);
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x25] = (undefined4)(0);
  thunk_FUN_112a9cf0(param_1 + 9);
  thunk_FUN_112a9cf0(param_1 + 0x21);
  *(undefined1 *)(param_1 + 0xb) = 0;
  if (param_4 != 0) {
    thunk_FUN_1145c250(param_1 + 0xb,param_4,0x21);
  }
  *(undefined1 *)((int)param_1 + 0x4d) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 112599d0; body size 26 bytes.
#line 1 "ENTRY_112599d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112599d0(int param_1,undefined4 param_2)

{
  if ((param_1 != 0) && (param_1 == DAT_122f5698)) {
    thunk_FUN_112599f0(param_2);
  }
  return;
}


// Reference entry 11259e10; body size 7 bytes.
#line 1 "ENTRY_11259e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11259e10(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x428));
}


// Reference entry 11259e60; body size 7 bytes.
#line 1 "ENTRY_11259e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11259e60(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x424));
}


// Reference entry 11259eb0; body size 7 bytes.
#line 1 "ENTRY_11259eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11259eb0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x44c));
}


// Reference entry 11259ec0; body size 7 bytes.
#line 1 "ENTRY_11259ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11259ec0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x418));
}


// Reference entry 11259ed0; body size 7 bytes.
#line 1 "ENTRY_11259ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11259ed0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x430));
}


// Reference entry 11259f30; body size 7 bytes.
#line 1 "ENTRY_11259f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11259f30(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x404));
}


// Reference entry 11259f60; body size 30 bytes.
#line 1 "ENTRY_11259f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11259f60(int param_1)

{
  char *pcVar1;
  uint3 uVar2;
  
  pcVar1 = (char *)(*(char **)(param_1 + 0x408));
  uVar2 = (uint3)((uint3)((uint)pcVar1 >> 8));
  if (((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) && (0 < *(int *)(param_1 + 0x428))) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((uint)uVar2 << 8);
}


// Reference entry 11259f90; body size 11 bytes.
#line 1 "ENTRY_11259f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11259f90(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x44c) == 1);
}


// Reference entry 11259fa0; body size 11 bytes.
#line 1 "ENTRY_11259fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11259fa0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x44c) == 0);
}


// Reference entry 11259fb0; body size 7 bytes.
#line 1 "ENTRY_11259fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11259fb0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x401));
}


// Reference entry 11259fc0; body size 7 bytes.
#line 1 "ENTRY_11259fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11259fc0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x403));
}


// Reference entry 1125a240; body size 13 bytes.
#line 1 "ENTRY_1125a240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1125a240(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x428) = param_2;
  return;
}


// Reference entry 1125b270; body size 53 bytes.
#line 1 "ENTRY_1125b270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1125b270(char *param_1)

{
  char *pcVar1;
  
  if (param_1 != (char *)0x0) {
    pcVar1 = (char *)(strstr(param_1,"Sonos/"));
    if (pcVar1 != (char *)0x0) {
      pcVar1 = (char *)(strstr(param_1,"(WD100)"));
      if (pcVar1 != (char *)0x0) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
      }
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 1125b9d0; body size 30 bytes.
#line 1 "ENTRY_1125b9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_1125b9d0(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  uVar1 = (undefined4)(func_0x1008c65f(*(undefined4 *)(param_1 + 4)));
  puVar2 = (undefined1 *)((undefined1 *)func_0x1001ba3b(uVar1));
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)(puVar2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(puVar3);
}


// Reference entry 1125bbc0; body size 3 bytes.
#line 1 "ENTRY_1125bbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1125bbc0(void)

{
  return;
}


// Reference entry 1125bef0; body size 37 bytes.
#line 1 "ENTRY_1125bef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1125bef0(char *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  thunk_FUN_112a0b40(*(undefined4 *)(param_1 + 4),param_2,(int)pcVar2 - (int)(param_2 + 1));
  return;
}


// Reference entry 1125bf80; body size 6 bytes.
#line 1 "ENTRY_1125bf80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1125bf80(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
}


// Reference entry 1125c810; body size 58 bytes.
#line 1 "ENTRY_1125c810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1125c810(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  thunk_FUN_112b0270("rootcerts_download",4,
                     "Scheduling root cert bundle fetch for %ld seconds from now",param_2,param_3);
  (**(code **)(**(int **)(param_1 + 4) + 8))(*(undefined4 *)(param_1 + 8),0,param_2,param_3,1);
  return;
}


// Reference entry 1125cbe0; body size 21 bytes.
#line 1 "ENTRY_1125cbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1125cbe0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1125cc00; body size 30 bytes.
#line 1 "ENTRY_1125cc00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_1125cc00(uint *param_2)
{
  uint *param_1 = (uint *)this;
  ushort uVar1;
  uint uVar2;
  
  uVar2 = (uint)(*param_1);
  if (uVar2 == *param_2) {
    uVar1 = (ushort)((ushort)param_1[1]);
    uVar2 = (uint)((uint)uVar1);
    if (uVar1 == (ushort)param_2[1]) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((uint3)(byte)(uVar1 >> 8)) << 8 | (uint)(1)));
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar2 & 0xffffff00);
}


// Reference entry 1125cc30; body size 30 bytes.
#line 1 "ENTRY_1125cc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_1125cc30(uint *param_2)
{
  uint *param_1 = (uint *)this;
  ushort uVar1;
  uint uVar2;
  
  uVar2 = (uint)(*param_1);
  if (uVar2 == *param_2) {
    uVar1 = (ushort)((ushort)param_1[1]);
    uVar2 = (uint)((uint)uVar1);
    if (uVar1 == (ushort)param_2[1]) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((uint)(byte)(uVar1 >> 8) << 8);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(((uint)((int3)(uVar2 >> 8)) << 8 | (uint)(1)));
}


// Reference entry 1125d290; body size 22 bytes.
#line 1 "ENTRY_1125d290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1125d290(undefined4 param_1)

{
  switch(param_1) {
  case 1:
  case 3:
  case 4:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
  case 2:
  case 5:
  case 6:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(2);
  default:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
  }
}


// Reference entry 1125d2e0; body size 8 bytes.
#line 1 "ENTRY_1125d2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1125d2e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x18) == 4);
}


// Reference entry 1125d820; body size 6 bytes.
#line 1 "ENTRY_1125d820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1125d820(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(6);
}


// Reference entry 1125d830; body size 43 bytes.
#line 1 "ENTRY_1125d830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1125d830(undefined1 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *(undefined1 *)(param_1 + 5) = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RIPNetStartListenerBase);
  param_1[3] = (undefined4)(0xffffffff);
  param_1[4] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1125d8c0; body size 48 bytes.
#line 1 "ENTRY_1125d8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1125d8c0(undefined1 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *(undefined1 *)(param_1 + 5) = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0xffffffff);
  param_1[4] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RIPNetStartListenerResponse);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1125d920; body size 20 bytes.
#line 1 "ENTRY_1125d920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1125d920(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSelectThreadUser);
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1125d940; body size 28 bytes.
#line 1 "ENTRY_1125d940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1125d940(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RIPNetStartListenerBase);
  if ((*(char *)(param_1 + 5) == '\0') && (param_1[3] != -1)) {
    Ordinal_3(param_1[3]);
  }
  return;
}


// Reference entry 1125d970; body size 28 bytes.
#line 1 "ENTRY_1125d970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1125d970(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RIPNetStartListenerBase);
  if ((*(char *)(param_1 + 5) == '\0') && (param_1[3] != -1)) {
    Ordinal_3(param_1[3]);
  }
  return;
}


// Reference entry 1125d9e0; body size 3 bytes.
#line 1 "ENTRY_1125d9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1125d9e0(void)

{
  return;
}


// Reference entry 1125e860; body size 125 bytes.
#line 1 "ENTRY_1125e860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1125e860(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_1);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  if (pcVar2 + (0x15 - (int)(param_1 + 1)) < (char *)0x401) {
    thunk_FUN_1145c250(0x122f5848,param_1,0x401);
    if ((param_1[(int)(pcVar2 + (-1 - (int)(param_1 + 1)))] != '/') &&
       (param_1[(int)(pcVar2 + (-1 - (int)(param_1 + 1)))] != '\\')) {
      thunk_FUN_1145fa40(0x122f5848,&DAT_1187d7f4,0x401);
    }
    thunk_FUN_1145fa40(0x122f5848,"zp-netstart-src-mac",0x401);
    DAT_122f5840 = (int)(0x122f5848);
  }
  return;
}


// Reference entry 1125fd20; body size 158 bytes.
#line 1 "ENTRY_1125fd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1125fd20(void)

{
  int iVar1;
  undefined4 uStack00000004;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined1 auStack_804 [2048];
  uint uStack_4;
  
  uStack00000004 = (undefined4)(0);
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_80c);
  uStack_808 = (undefined4)(0x800);
  uStack_80c = (undefined4)(0);
  iVar1 = (int)(thunk_FUN_112c7f50(auStack_804,&uStack_80c,&uStack_808,0,0xb));
  if (iVar1 != 0) {
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_112c4a90(auStack_804,uStack_80c,0);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 11260780; body size 55 bytes.
#line 1 "ENTRY_11260780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11260780(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  thunk_FUN_11260290(param_1,param_2,param_3,param_4,param_5,0,0,0,param_6,param_7,param_8,param_9,
                     param_10);
  return;
}


// Reference entry 112607f0; body size 58 bytes.
#line 1 "ENTRY_112607f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_112607f0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = (int)(thunk_FUN_112c7fc0(param_1,&DAT_122f5c4c));
  bVar3 = (bool)(iVar1 == 1);
  DAT_122f5844 = (int)(bVar3);
  if (bVar3) {
    uVar2 = (uint)(0);
    do {
      if (*(char *)((int)&DAT_122f5c4c + uVar2) != '\0') {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(true);
      }
      uVar2 = (uint)(uVar2 + 1);
    } while (uVar2 < 6);
    DAT_122f5844 = (int)(false);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(bVar3);
}


// Reference entry 11260a70; body size 4 bytes.
#line 1 "ENTRY_11260a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11260a70(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x18);
}


// Reference entry 11260a90; body size 7 bytes.
#line 1 "ENTRY_11260a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11260a90(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x818));
}


// Reference entry 11260f80; body size 3 bytes.
#line 1 "ENTRY_11260f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11260f80(void)

{
  return;
}


// Reference entry 11261190; body size 32 bytes.
#line 1 "ENTRY_11261190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11261190(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = (undefined4)(0xfa);
  }
  *param_1 = (undefined4)(0);
  *param_3 = (undefined1)(0);
  return;
}


// Reference entry 112612e0; body size 20 bytes.
#line 1 "ENTRY_112612e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112612e0(uint param_1)

{
  Sleep(param_1 / 1000);
  return;
}


// Reference entry 11261320; body size 10 bytes.
#line 1 "ENTRY_11261320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11261320(undefined1 param_1)

{
  DAT_122f5d24 = (int)(param_1);
  return;
}


// Reference entry 112613c0; body size 108 bytes.
#line 1 "ENTRY_112613c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_112613c0(int param_1,uint param_2,undefined1 *param_3,undefined4 param_4)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (param_3 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(param_3);
  }
  pcVar1 = (char *)((char *)thunk_FUN_11265090(param_4,&DAT_1186d2ee));
  if (*pcVar1 != '\0') {
    uVar2 = (uint)(thunk_FUN_1145c720(param_1,param_2,&DAT_1188e99c,pcVar1,&DAT_1186d2ee));
    if (((0 < (int)uVar2) && (uVar2 < param_2)) && (param_1 != 0)) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
    }
  }
  iVar3 = (int)(FUN_11261ab0(param_1,param_2,7,puVar4,&DAT_119c36c8));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar3);
}


// Reference entry 112614e0; body size 108 bytes.
#line 1 "ENTRY_112614e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_112614e0(int param_1,uint param_2,undefined1 *param_3,undefined4 param_4)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (param_3 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(param_3);
  }
  pcVar1 = (char *)((char *)thunk_FUN_11265090(param_4,&DAT_1186d2ee));
  if (*pcVar1 != '\0') {
    uVar2 = (uint)(thunk_FUN_1145c720(param_1,param_2,&DAT_1188e99c,pcVar1,&DAT_1186d2ee));
    if (((0 < (int)uVar2) && (uVar2 < param_2)) && (param_1 != 0)) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
    }
  }
  iVar3 = (int)(FUN_11261ab0(param_1,param_2,0x20,puVar4,&DAT_119c36c8));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar3);
}


// Reference entry 11261630; body size 108 bytes.
#line 1 "ENTRY_11261630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_11261630(int param_1,uint param_2,undefined1 *param_3,undefined4 param_4)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (param_3 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(param_3);
  }
  pcVar1 = (char *)((char *)thunk_FUN_11265090(param_4,&DAT_1186d2ee));
  if (*pcVar1 != '\0') {
    uVar2 = (uint)(thunk_FUN_1145c720(param_1,param_2,&DAT_1188e99c,pcVar1,&DAT_1186d2ee));
    if (((0 < (int)uVar2) && (uVar2 < param_2)) && (param_1 != 0)) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
    }
  }
  iVar3 = (int)(FUN_11261ab0(param_1,param_2,0x1b,puVar4,&DAT_119c36c8));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar3);
}


// Reference entry 11262250; body size 9 bytes.
#line 1 "ENTRY_11262250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11262250(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAlarmClockListAlarms);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11262350; body size 41 bytes.
#line 1 "ENTRY_11262350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::FUN_11262350(ushort param_2)
{
  undefined1 *param_1 = (undefined1 *)this;
  ulonglong uVar1;
  
  uVar1 = (ulonglong)((ulonglong)param_2 % 0xe10);
  *param_1 = (undefined1)((char)((ulonglong)param_2 / 0xe10));
  param_1[1] = (undefined1)((char)(uVar1 / 0x3c));
  param_1[2] = (undefined1)((char)(uVar1 % 0x3c));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(param_1);
}


// Reference entry 11262390; body size 85 bytes.
#line 1 "ENTRY_11262390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11262390(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSystemTime);
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 4);
  *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)(param_2 + 6);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 8);
  *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)(param_2 + 10);
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 0xc);
  *(undefined2 *)((int)param_1 + 0xe) = *(undefined2 *)(param_2 + 0xe);
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 0x10);
  *(undefined2 *)((int)param_1 + 0x12) = *(undefined2 *)(param_2 + 0x12);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 0x14);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 112624b0; body size 7 bytes.
#line 1 "ENTRY_112624b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_112624b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAlarmClockListAlarms);
  return;
}


// Reference entry 11262900; body size 96 bytes.
#line 1 "ENTRY_11262900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_11262900(int param_2)
{
  int param_1 = (int )this;
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_10405e20(param_1,param_2));
  if (cVar1 != '\0') {
    cVar1 = (char)(thunk_FUN_10405e20(param_1 + 0x18,param_2 + 0x18));
    if (cVar1 != '\0') {
      cVar1 = (char)(thunk_FUN_10405e20(param_1 + 0x30,param_2 + 0x30));
      if (cVar1 != '\0') {
        cVar1 = (char)(thunk_FUN_10405e20(param_1 + 0x48,param_2 + 0x48));
        if (cVar1 != '\0') {
          return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
        }
      }
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 112629e0; body size 92 bytes.
#line 1 "ENTRY_112629e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ ushort __thiscall Recovered_Bulk::FUN_112629e0(int param_2)
{
  int param_1 = (int )this;
  ushort uVar1;
  undefined1 uVar2;
  
  uVar1 = (ushort)(*(ushort *)(param_1 + 4));
  if ((((uVar1 == *(ushort *)(param_2 + 4)) &&
       (uVar1 = *(ushort *)(param_1 + 6), uVar1 == *(ushort *)(param_2 + 6))) &&
      (uVar1 = *(ushort *)(param_1 + 10), uVar1 == *(ushort *)(param_2 + 10))) &&
     (((uVar1 = *(ushort *)(param_1 + 0xc), uVar1 == *(ushort *)(param_2 + 0xc) &&
       (uVar1 = *(ushort *)(param_1 + 0xe), uVar1 == *(ushort *)(param_2 + 0xe))) &&
      ((uVar1 = *(ushort *)(param_1 + 0x10), uVar1 == *(ushort *)(param_2 + 0x10) &&
       (uVar1 = *(ushort *)(param_1 + 0x12), uVar1 == *(ushort *)(param_2 + 0x12))))))) {
    uVar2 = (undefined1)((undefined1)(uVar1 >> 8));
    uVar1 = (ushort)(((uint)(uVar2) << 8 | (uint)(*(char *)(param_1 + 0x14))));
    if (*(char *)(param_1 + 0x14) == *(char *)(param_2 + 0x14)) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ ushort)(((uint)(uVar2) << 8 | (uint)(1)));
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ ushort)(uVar1 & 0xff00);
}


// Reference entry 11262b20; body size 92 bytes.
#line 1 "ENTRY_11262b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ short __thiscall Recovered_Bulk::FUN_11262b20(int param_2)
{
  int param_1 = (int )this;
  short sVar1;
  byte bVar2;
  
  sVar1 = (short)(*(short *)(param_1 + 4));
  if ((((sVar1 == *(short *)(param_2 + 4)) &&
       (sVar1 = *(short *)(param_1 + 6), sVar1 == *(short *)(param_2 + 6))) &&
      (sVar1 = *(short *)(param_1 + 10), sVar1 == *(short *)(param_2 + 10))) &&
     (((sVar1 = *(short *)(param_1 + 0xc), sVar1 == *(short *)(param_2 + 0xc) &&
       (sVar1 = *(short *)(param_1 + 0xe), sVar1 == *(short *)(param_2 + 0xe))) &&
      ((sVar1 = *(short *)(param_1 + 0x10), sVar1 == *(short *)(param_2 + 0x10) &&
       (sVar1 = *(short *)(param_1 + 0x12), sVar1 == *(short *)(param_2 + 0x12))))))) {
    bVar2 = (byte)((byte)((ushort)sVar1 >> 8));
    sVar1 = (short)(((uint)(bVar2) << 8 | (uint)(*(char *)(param_1 + 0x14))));
    if (*(char *)(param_1 + 0x14) == *(char *)(param_2 + 0x14)) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ short)((ushort)bVar2 << 8);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ short)(((uint)((char)((ushort)sVar1 >> 8)) << 8 | (uint)(1)));
}


// Reference entry 11262c20; body size 66 bytes.
#line 1 "ENTRY_11262c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11262c20(undefined4 param_1,undefined4 param_2,uint param_3)

{
  thunk_FUN_1145c720(param_1,param_2,"%+02d:%02d",(int)param_3 / 0x3c,
                     (int)((param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f)) % 0x3c);
  return;
}


// Reference entry 112632b0; body size 8 bytes.
#line 1 "ENTRY_112632b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

byte FUN_112632b0(void)

{
  byte bVar1;
  
  bVar1 = (byte)(thunk_FUN_11263620());
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte)(bVar1 ^ 1);
}


// Reference entry 112635c0; body size 46 bytes.
#line 1 "ENTRY_112635c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_112635c0(ushort param_1)

{
  ulonglong uVar1;
  uint in_EAX;
  uint uVar2;
  
  uVar2 = (uint)((uint)param_1);
  if ((param_1 & 3) == 0) {
    in_EAX = (uint)(uVar2 / 100);
    if (((int)((ulonglong)uVar2 % 100) != 0) ||
       (uVar1 = (ulonglong)uVar2 % 100 << 0x20 | (ulonglong)uVar2, in_EAX = (uint)(uVar1 / 400),
       (int)(uVar1 % 400) == 0)) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(in_EAX & 0xffffff00);
}


// Reference entry 11263600; body size 25 bytes.
#line 1 "ENTRY_11263600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_11263600(int param_1)

{
  if (((param_1 != 2) && (param_1 != 3)) && (param_1 - 4U != 0)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(param_1 - 4U & 0xffffff00);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(1);
}


// Reference entry 11264210; body size 74 bytes.
#line 1 "ENTRY_11264210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ ushort __thiscall Recovered_Bulk::FUN_11264210(int param_2)
{
  int param_1 = (int )this;
  ushort uVar1;
  
  uVar1 = (ushort)(*(ushort *)(param_1 + 4));
  if ((((uVar1 == *(ushort *)(param_2 + 4)) &&
       (uVar1 = *(ushort *)(param_1 + 6), uVar1 == *(ushort *)(param_2 + 6))) &&
      (uVar1 = *(ushort *)(param_1 + 10), uVar1 == *(ushort *)(param_2 + 10))) &&
     (((uVar1 = *(ushort *)(param_1 + 0xc), uVar1 == *(ushort *)(param_2 + 0xc) &&
       (uVar1 = *(ushort *)(param_1 + 0xe), uVar1 == *(ushort *)(param_2 + 0xe))) &&
      (uVar1 = *(ushort *)(param_1 + 0x10), uVar1 == *(ushort *)(param_2 + 0x10))))) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ ushort)(((uint)((char)(uVar1 >> 8)) << 8 | (uint)(1)));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ ushort)(uVar1 & 0xff00);
}


// Reference entry 11264640; body size 194 bytes.
#line 1 "ENTRY_11264640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11264640(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  if ((undefined4 *)(param_1 + 0x68) != param_2) {
    puVar1 = (undefined4 *)(param_2);
    if (0xf < (uint)param_2[5]) {
      puVar1 = (undefined4 *)((undefined4 *)*param_2);
    }
    thunk_FUN_1012d130(puVar1,param_2[4]);
  }
  if ((undefined4 *)(param_1 + 0x80) != param_3) {
    puVar1 = (undefined4 *)(param_3);
    if (0xf < (uint)param_3[5]) {
      puVar1 = (undefined4 *)((undefined4 *)*param_3);
    }
    thunk_FUN_1012d130(puVar1,param_3[4]);
  }
  if ((undefined4 *)(param_1 + 0x98) != param_4) {
    puVar1 = (undefined4 *)(param_4);
    if (0xf < (uint)param_4[5]) {
      puVar1 = (undefined4 *)((undefined4 *)*param_4);
    }
    thunk_FUN_1012d130(puVar1,param_4[4]);
  }
  piVar2 = (int *)(param_4 + 6);
  if ((int *)(param_1 + 0xb0) != piVar2) {
    if (0xf < (uint)param_4[0xb]) {
      piVar2 = (int *)((int *)*piVar2);
    }
    thunk_FUN_1012d130(piVar2,param_4[10]);
  }
  piVar2 = (int *)(param_4 + 0xc);
  if ((int *)(param_1 + 200) != piVar2) {
    if (0xf < (uint)param_4[0x11]) {
      piVar2 = (int *)((int *)*piVar2);
    }
    thunk_FUN_1012d130(piVar2,param_4[0x10]);
  }
  puVar1 = (undefined4 *)(param_4 + 0x12);
  if ((undefined4 *)(param_1 + 0xe0) != puVar1) {
    if (0xf < (uint)param_4[0x17]) {
      puVar1 = (undefined4 *)((undefined4 *)*puVar1);
    }
    thunk_FUN_1012d130(puVar1,param_4[0x16]);
  }
  return;
}


// Reference entry 11264760; body size 19 bytes.
#line 1 "ENTRY_11264760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11264760(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  *(undefined2 *)(param_1 + 1) = 1;
  *(undefined1 *)((int)param_1 + 6) = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11264790; body size 76 bytes.
#line 1 "ENTRY_11264790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_11264790(int param_1,char *param_2,uint param_3,char param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)(0);
  if (param_3 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
  }
  iVar2 = (int)(param_1 - (int)param_2);
  while( true ) {
    cVar1 = (char)(*param_2);
    if (*param_2 == '\n') {
      cVar1 = (char)(param_4);
    }
    param_2[iVar2] = (char)(cVar1);
    if (*param_2 == '\0') break;
    uVar3 = (uint)(uVar3 + 1);
    param_2 = (char *)(param_2 + 1);
    if (param_3 <= uVar3) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 11264860; body size 232 bytes.
#line 1 "ENTRY_11264860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __thiscall Recovered_Bulk::FUN_11264860(char *param_2,char *param_3,uint param_4,undefined1 param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)((char *)0x0);
  *(undefined1 *)((int)param_1 + 6) = 1;
  *param_1 = (undefined4)(param_2);
  if ((param_3 == (char *)0x0) || (param_4 == 0)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
  }
  if (param_2 == (char *)0x0) {
    *(unsigned char *)((char *)&param_2 + 0) = 0;
  }
  else {
    pcVar4 = (char *)(param_2);
    if (*(char *)(param_1 + 1) != '\0') {
      cVar1 = (char)(*param_2);
      while (((cVar1 != '\0' && (cVar1 != '\n')) && (iVar2 = isspace((int)cVar1), iVar2 != 0))) {
        cVar1 = (char)(pcVar4[1]);
        pcVar4 = (char *)(pcVar4 + 1);
      }
    }
    cVar1 = (char)(*pcVar4);
    if ((cVar1 == '\0') || (cVar1 == '\n')) {
LAB_1126491f:
      *(unsigned char *)((char *)&param_2 + 0) = 0;
    }
    else {
      uVar3 = (uint)((uint)((uint)(param_5) << 8 | (uint)(cVar1)));
      do {
        cVar1 = (char)((char)uVar3);
        *(unsigned char *)((char *)&param_2 + 0) = 1;
        if (cVar1 == '\n') break;
        if (((*(char *)((int)param_1 + 5) == '\0') || (cVar1 != '\\')) ||
           ((pcVar4[1] == '\0' || (pcVar4[1] == '\n')))) {
          *(unsigned char *)((char *)&param_2 + 0) = 1;
          if (cVar1 == (char)(uVar3 >> 8)) break;
        }
        else {
          pcVar4 = (char *)(pcVar4 + 1);
        }
        if (param_4 < 2) goto LAB_1126491f;
        cVar1 = (char)(*pcVar4);
        param_4 = (uint)(param_4 - 1);
        pcVar4 = (char *)(pcVar4 + 1);
        *param_3 = (char)(cVar1);
        param_3 = (char *)(param_3 + 1);
        uVar3 = (uint)(((uint)((int3)(uVar3 >> 8)) << 8 | (uint)(*pcVar4)));
        *(unsigned char *)((char *)&param_2 + 0) = 1;
      } while (*pcVar4 != '\0');
    }
  }
  *param_1 = (undefined4)(pcVar4);
  *param_3 = (char)('\0');
  *(undefined1 *)((int)param_1 + 6) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(unsigned char *)((char *)&param_2 + 0));
}


// Reference entry 11264a00; body size 49 bytes.
#line 1 "ENTRY_11264a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11264a00(char *param_1)

{
  char cVar1;
  undefined4 in_EAX;
  uint uVar2;
  int iVar3;
  
  cVar1 = (char)(*param_1);
  uVar2 = (uint)(((uint)((int3)((uint)in_EAX >> 8)) << 8 | (uint)(cVar1)));
  while( true ) {
    if (cVar1 == '\0') {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(((uint)((int3)(uVar2 >> 8)) << 8 | (uint)(1)));
    }
    iVar3 = (int)(isprint(uVar2 & 0xff));
    if (iVar3 == 0) break;
    cVar1 = (char)(param_1[1]);
    uVar2 = (uint)(((uint)((int3)((uint)iVar3 >> 8)) << 8 | (uint)(cVar1)));
    param_1 = (char *)(param_1 + 1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11264c70; body size 10 bytes.
#line 1 "ENTRY_11264c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11264c70(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1 *)(param_1 + 5) = param_2;
  return;
}


// Reference entry 11264c80; body size 48 bytes.
#line 1 "ENTRY_11264c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_11264c80(char *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (char)(*param_1);
  if (cVar1 == '\0') {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)(param_1);
  }
  do {
    iVar2 = (int)(isspace((int)cVar1));
    if (iVar2 == 0) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)(param_1);
    }
    cVar1 = (char)(param_1[1]);
    param_1 = (char *)(param_1 + 1);
  } while (cVar1 != '\0');
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)(param_1);
}


// Reference entry 11264cc0; body size 10 bytes.
#line 1 "ENTRY_11264cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11264cc0(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1 *)(param_1 + 4) = param_2;
  return;
}


// Reference entry 11264d60; body size 6 bytes.
#line 1 "ENTRY_11264d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11264d60(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x44);
}


// Reference entry 11264d70; body size 36 bytes.
#line 1 "ENTRY_11264d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11264d70(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  param_1[3] = (undefined4)(param_4);
  param_1[2] = (undefined4)(0);
  *(undefined1 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11264da0; body size 106 bytes.
#line 1 "ENTRY_11264da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11264da0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  char cVar1;
  int *piVar2;
  int iVar3;
  
  *param_1 = (undefined4)(param_2);
  thunk_FUN_112b0270("overrides",7,"overrides %s","disabled");
  piVar2 = (int *)(&DAT_121205b0);
  iVar3 = (int)(0x44);
  do {
    if (piVar2 != (int *)0x0) {
      if (*piVar2 == 0x27) {
LAB_11264df1:
        thunk_FUN_11265130(*param_1);
      }
      else if (piVar2[3] != -1) {
        cVar1 = (char)(thunk_FUN_11248b40(piVar2[3]));
        if (cVar1 != '\0') goto LAB_11264df1;
      }
    }
    piVar2 = (int *)(piVar2 + 5);
    iVar3 = (int)(iVar3 + -1);
    if (iVar3 == 0) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
    }
  } while( true );
}


// Reference entry 11264e30; body size 16 bytes.
#line 1 "ENTRY_11264e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11264e30(int param_1)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    free(*(void **)(param_1 + 8));
  }
  return;
}


// Reference entry 11264e50; body size 3 bytes.
#line 1 "ENTRY_11264e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11264e50(void)

{
  return;
}


// Reference entry 11264e60; body size 27 bytes.
#line 1 "ENTRY_11264e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_11264e60(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11265060; body size 4 bytes.
#line 1 "ENTRY_11265060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11265060(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xc));
}


// Reference entry 11265070; body size 4 bytes.
#line 1 "ENTRY_11265070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11265070(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 11265080; body size 3 bytes.
#line 1 "ENTRY_11265080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11265080(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 11265120; body size 4 bytes.
#line 1 "ENTRY_11265120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11265120(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 11265280; body size 4 bytes.
#line 1 "ENTRY_11265280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11265280(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x10));
}


// Reference entry 11265290; body size 3 bytes.
#line 1 "ENTRY_11265290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11265290(void)

{
  return;
}


// Reference entry 11265910; body size 337 bytes.
#line 1 "ENTRY_11265910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11265910(undefined4 param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_2dc;
  undefined1 auStack_2d8 [16];
  undefined1 auStack_2c8 [708];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_2dc);
  if (param_2 == 0) {
    thunk_FUN_1148ac28();
    return;
  }
  iVar3 = (int)(thunk_FUN_113d6f50(0x400));
  if (iVar3 != 0) {
    iVar4 = (int)(thunk_FUN_113d5510(iVar3,param_2));
    if (iVar4 != 0) {
      uStack_2dc = (undefined4)(0);
      thunk_FUN_113d15c0(2,param_2,0x104,auStack_2d8);
      pcVar1 = (code *)(DAT_122f5d98);
      *(undefined4 *)(param_2 + 0x344) = 0;
      if ((pcVar1 != (code *)0x0) && (cVar2 = (*pcVar1)(auStack_2c8,0x2c4), cVar2 != '\0')) {
        iVar4 = (int)(thunk_FUN_113d43f0(auStack_2c8,0x2c4));
        if (iVar4 != 0) {
          uStack_2dc = (undefined4)(0x80);
          iVar5 = (int)(thunk_FUN_113d49e0(iVar4,1,2,auStack_2d8,0x10,param_2 + 0x2c4,&uStack_2dc));
          if (iVar5 != 0) {
            *(undefined4 *)(param_2 + 0x344) = uStack_2dc;
          }
          thunk_FUN_113d47d0(iVar4);
        }
        thunk_FUN_113cfb70(auStack_2c8,0x2c4);
        DAT_122f5d98 = (int)((code *)0x0);
      }
    }
    thunk_FUN_113d47d0(iVar3);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 11265e30; body size 24 bytes.
#line 1 "ENTRY_11265e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11265e30(undefined4 *param_1)

{
  thunk_FUN_11287890();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RChunkedSocketWriter);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11265e50; body size 31 bytes.
#line 1 "ENTRY_11265e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11265e50(undefined4 *param_1)

{
  thunk_FUN_11287890();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCountWritableStream);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11265e80; body size 80 bytes.
#line 1 "ENTRY_11265e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11265e80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11265ef0();
  param_1[0x215e] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHTTPChunkedClient);
  param_1[0x215a] = (undefined4)(0);
  *(undefined1 *)(param_1 + 0x215b) = 0;
  param_1[0x215c] = (undefined4)(0);
  param_1[0x215d] = (undefined4)(0);
  *(undefined1 *)((int)param_1 + 0x4a9) = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 112661b0; body size 87 bytes.
#line 1 "ENTRY_112661b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_112661b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  thunk_FUN_11265ef0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHTTPHeadRequest);
  uVar1 = (undefined4)(*param_2);
  param_1[0x215b] = (undefined4)(param_2[1]);
  param_1[0x215a] = (undefined4)(uVar1);
  param_1[0x216d] = (undefined4)(0xffffffff);
  param_1[0x216e] = (undefined4)(0);
  param_1[0x216f] = (undefined4)(0);
  param_1[0x215c] = (undefined4)("Sonos");
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 112663b0; body size 102 bytes.
#line 1 "ENTRY_112663b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_112663b0(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined2 param_6,undefined2 param_7)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  thunk_FUN_11287890();
  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSocketWriter);
  param_1[0x1004] = (undefined4)(0);
  uVar1 = (undefined4)(*param_4);
  param_1[3] = (undefined4)(param_4[1]);
  param_1[0x1005] = (undefined4)(param_3);
  param_1[0x1006] = (undefined4)(param_5);
  *(undefined2 *)(param_1 + 0x1007) = param_6;
  *(undefined2 *)((int)param_1 + 0x401e) = param_7;
  param_1[2] = (undefined4)(uVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11266430; body size 24 bytes.
#line 1 "ENTRY_11266430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11266430(undefined4 *param_1)

{
  thunk_FUN_11287890();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSocketWriter);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 112664f0; body size 11 bytes.
#line 1 "ENTRY_112664f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_112664f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCountWritableStream);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RWritableStream);
  return;
}


// Reference entry 112673f0; body size 26 bytes.
#line 1 "ENTRY_112673f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_112673f0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 11267480; body size 17 bytes.
#line 1 "ENTRY_11267480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_11267480(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_112869a0());
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(iVar1 != -1);
}


// Reference entry 112674a0; body size 49 bytes.
#line 1 "ENTRY_112674a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_112674a0(uint param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  if (param_2 <=
      (uint)((*(int *)(param_1 + 0x200c) - *(int *)(param_1 + 0x2010)) + *(int *)(param_1 + 0x2008))
     ) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(true);
  }
  iVar1 = (int)(thunk_FUN_112869a0());
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(iVar1 != -1);
}


// Reference entry 112674e0; body size 14 bytes.
#line 1 "ENTRY_112674e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_112674e0(int *param_1)

{
  *(undefined1 *)(param_1 + 0x215b) = 0;
                    
                    
  (**(code **)(*param_1 + 0x54))();
  return;
}


// Reference entry 11267500; body size 138 bytes.
#line 1 "ENTRY_11267500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11267500(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)
{
  int *param_1 = (int *)this;
  undefined1 auStack_104 [256];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)auStack_104);
  thunk_FUN_1145c720(auStack_104,0x100,"multipart/%s; boundary=%s",param_3,
                     "SONOSMULTIPARTBOUNDARY.BLAHBLAHBLAH");
  *(undefined1 *)(param_1 + 0x215b) = 1;
  (**(code **)(*param_1 + 0x54))(param_2,auStack_104,param_4,param_5,param_6);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 11268070; body size 98 bytes.
#line 1 "ENTRY_11268070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11268070(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  undefined4 uStack_4;
  
  *(int *)(param_1 + 0x2008) = *(int *)(param_1 + 0x2008) + *(int *)(param_1 + 0x200c);
  *(undefined4 *)(param_1 + 0x2010) = *(undefined4 *)(param_1 + 0x2008);
  uStack_4 = (undefined4)(0x4000);
  if (*(char *)(param_1 + 0x12338) != '\0') {
    uStack_4 = (undefined4)(0x1800);
  }
  puVar1 = (undefined4 *)(&uStack_4);
  (**(code **)(*(int *)(param_1 + 0x6018) + 4))(param_1 + 0x2018,puVar1,param_2);
  *(undefined4 **)(param_1 + 0x200c) = puVar1;
  return;
}


// Reference entry 11268ad0; body size 48 bytes.
#line 1 "ENTRY_11268ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11268ad0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  thunk_FUN_11268590(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,1,0);
  return;
}


// Reference entry 11268b10; body size 50 bytes.
#line 1 "ENTRY_11268b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11268b10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  thunk_FUN_11268590(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,0,
                     param_10);
  return;
}


// Reference entry 11268b50; body size 7 bytes.
#line 1 "ENTRY_11268b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11268b50(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x44bc));
}


// Reference entry 11268ba0; body size 7 bytes.
#line 1 "ENTRY_11268ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11268ba0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0xc300);
}


// Reference entry 11268bb0; body size 7 bytes.
#line 1 "ENTRY_11268bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11268bb0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x8570));
}


// Reference entry 11268f80; body size 4 bytes.
#line 1 "ENTRY_11268f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11268f80(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x14));
}


// Reference entry 11269180; body size 8 bytes.
#line 1 "ENTRY_11269180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11269180(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x428));
}


// Reference entry 11269190; body size 4 bytes.
#line 1 "ENTRY_11269190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11269190(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 112691a0; body size 21 bytes.
#line 1 "ENTRY_112691a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_112691a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(*(int *)(param_1 + 4) + 0xc));
  *param_2 = (undefined4)(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
  param_2[1] = (undefined4)(uVar1);
  return;
}


// Reference entry 112691c0; body size 18 bytes.
#line 1 "ENTRY_112691c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_112691c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 8));
  param_2[1] = (undefined4)(uVar1);
  return;
}


// Reference entry 112691e0; body size 7 bytes.
#line 1 "ENTRY_112691e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_112691e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x8568));
}


// Reference entry 112691f0; body size 64 bytes.
#line 1 "ENTRY_112691f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_112691f0(int param_1)

{
  if (*(char *)(param_1 + 0x44b4) != '\0') {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(uint *)(param_1 + 0x44b8) <= *(uint *)(param_1 + 0x44b0));
  }
  if (*(char *)(param_1 + 0x4aa) != '\0') {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)((bool)*(undefined1 *)(param_1 + 0x44e4));
  }
  thunk_FUN_112b0270("dataio",5,"ERROR: unexpected response condition");
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(true);
}


// Reference entry 11269240; body size 166 bytes.
#line 1 "ENTRY_11269240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11269240(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x4504) = 0;
  *(undefined4 *)(param_1 + 0x4508) = 0;
  *(undefined4 *)(param_1 + 0x450c) = 0;
  *(undefined4 *)(param_1 + 0x4510) = 0;
  *(undefined4 *)(param_1 + 0x4514) = 0;
  *(undefined4 *)(param_1 + 0x4518) = 0;
  *(undefined4 *)(param_1 + 0x4528) = 0;
  *(undefined4 *)(param_1 + 0x452c) = 0;
  *(undefined4 *)(param_1 + 0x4530) = 0;
  *(undefined4 *)(param_1 + 0x4500) = 0;
  *(undefined4 *)(param_1 + 0x44fc) = 0;
  *(undefined4 *)(param_1 + 0x451c) = 0;
  *(undefined4 *)(param_1 + 0x4520) = 0;
  *(undefined4 *)(param_1 + 0x4524) = 0;
  iVar1 = (int)(thunk_FUN_113c7f60((undefined4 *)(param_1 + 0x44fc),0x1f,"1.2.12",0x38));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(iVar1 == 0);
}


// Reference entry 11269420; body size 23 bytes.
#line 1 "ENTRY_11269420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_11269420(ushort param_2)
{
  int param_1 = (int )this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)((*(ushort *)(param_1 + 0x4ac) & param_2) == param_2);
}


// Reference entry 112694a0; body size 8 bytes.
#line 1 "ENTRY_112694a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_112694a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x42d));
}


// Reference entry 112694b0; body size 78 bytes.
#line 1 "ENTRY_112694b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_112694b0(char *param_1)

{
  char cVar1;
  char *in_EAX;
  char *pcVar2;
  
  if (param_1 != (char *)0x0) {
    pcVar2 = (char *)(strchr(".sonos.com",0x2e));
    in_EAX = (char *)((char *)0x0);
    if (pcVar2 != (char *)0x0) {
      in_EAX = (char *)(pcVar2);
      pcVar2 = (char *)(param_1);
      do {
        cVar1 = (char)(*pcVar2);
        in_EAX = (char *)((char *)((uint)((int3)((uint)in_EAX >> 8)) << 8 | (uint)(cVar1)));
        pcVar2 = (char *)(pcVar2 + 1);
      } while (cVar1 != '\0');
      if (9 < (uint)((int)pcVar2 - (int)(param_1 + 1))) {
        in_EAX = (char *)((char *)thunk_FUN_113b9ec0(".sonos.com",
                                            param_1 + (((int)pcVar2 - (int)(param_1 + 1)) - 10)));
        if (in_EAX == (char *)0x0) {
          return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(1);
        }
      }
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)((uint)in_EAX & 0xffffff00);
}


// Reference entry 11269520; body size 95 bytes.
#line 1 "ENTRY_11269520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_11269520(char *param_1,char *param_2)

{
  char cVar1;
  char *in_EAX;
  char *pcVar2;
  char *pcVar3;
  
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    pcVar2 = (char *)(strchr(param_2,0x2e));
    in_EAX = (char *)((char *)0x0);
    if (pcVar2 != (char *)0x0) {
      in_EAX = (char *)(pcVar2);
      pcVar2 = (char *)(param_2);
      do {
        cVar1 = (char)(*pcVar2);
        in_EAX = (char *)((char *)((uint)((int3)((uint)in_EAX >> 8)) << 8 | (uint)(cVar1)));
        pcVar2 = (char *)(pcVar2 + 1);
      } while (cVar1 != '\0');
      pcVar3 = (char *)(param_1);
      do {
        cVar1 = (char)(*pcVar3);
        in_EAX = (char *)((char *)((uint)((int3)((uint)in_EAX >> 8)) << 8 | (uint)(cVar1)));
        pcVar3 = (char *)(pcVar3 + 1);
      } while (cVar1 != '\0');
      if ((uint)((int)pcVar2 - (int)(param_2 + 1)) <= (uint)((int)pcVar3 - (int)(param_1 + 1))) {
        in_EAX = (char *)((char *)thunk_FUN_113b9ec0(param_2,param_1 + (((int)pcVar3 - (int)(param_1 + 1)) -
                                                              ((int)pcVar2 - (int)(param_2 + 1)))));
        if (in_EAX == (char *)0x0) {
          return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(1);
        }
      }
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)((uint)in_EAX & 0xffffff00);
}


// Reference entry 112696e0; body size 119 bytes.
#line 1 "ENTRY_112696e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_112696e0(int param_2,int *param_3,int *param_4,int param_5,int param_6,char param_7)
{
  int *param_1 = (int *)this;
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_3);
  if (param_4 != (int *)0x0) {
    piVar3 = (int *)(param_4);
  }
  iVar1 = (int)(piVar3[1]);
  param_1[0x113c] = (int)(*piVar3);
  param_1[0x113e] = (int)(param_5);
  param_1[0x113d] = (int)(iVar1);
  (**(code **)(*param_1 + 0x28))();
  if (param_7 != '\0') {
    *(undefined1 *)((int)param_1 + 0x4a9) = 1;
  }
  param_1[0x112c] = (int)(param_2);
  param_1[0x112f] = (int)(param_6);
  iVar1 = (int)(thunk_FUN_1145abd0(param_3));
  if (iVar1 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x80000025);
  }
  uVar2 = (undefined4)(thunk_FUN_11286a60());
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar2);
}


// Reference entry 11269fa0; body size 65 bytes.
#line 1 "ENTRY_11269fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * FUN_11269fa0(undefined1 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined2 uVar2;
  
  cVar1 = (char)(thunk_FUN_11286990());
  if (cVar1 != '\0') {
    uVar2 = (undefined2)(thunk_FUN_11286980());
    thunk_FUN_1145c720(param_1,param_2,&DAT_119dced8,uVar2);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(param_1);
  }
  *param_1 = (undefined1)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(param_1);
}


// Reference entry 1126a000; body size 103 bytes.
#line 1 "ENTRY_1126a000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1126a000(char *param_1,ulong *param_2)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  
  pcVar1 = (char *)(param_1);
  iVar2 = (int)(thunk_FUN_113b9f60(param_1,"Retry-After:",0xc));
  if (iVar2 == 0) {
    piVar3 = (int *)(_errno());
    *piVar3 = (int)(0);
    uVar4 = (ulong)(strtoul(pcVar1 + 0xc,&param_1,10));
    piVar3 = (int *)(_errno());
    if (((*piVar3 == 0) && (pcVar1[0xc] != '\0')) && (*param_1 == '\0')) {
      *param_2 = (ulong)(uVar4);
      param_2[1] = (ulong)(0);
    }
  }
  return;
}


// Reference entry 1126a080; body size 126 bytes.
#line 1 "ENTRY_1126a080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_1126a080(int param_1,undefined4 param_2,char *param_3,ulong *param_4,ulong param_5)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  
  pcVar1 = (char *)(param_3);
  iVar2 = (int)(thunk_FUN_113b9f60(param_1,param_2,param_3));
  if (iVar2 == 0) {
    piVar3 = (int *)(_errno());
    *piVar3 = (int)(0);
    uVar4 = (ulong)(strtoul(pcVar1 + param_1,&param_3,10));
    piVar3 = (int *)(_errno());
    if (((*piVar3 == 0) && (pcVar1[param_1] != '\0')) && (*param_3 == '\0')) {
      *param_4 = (ulong)(uVar4);
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
    }
    *param_4 = (ulong)(param_5);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 1126b070; body size 7 bytes.
#line 1 "ENTRY_1126b070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1126b070(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x867a));
}


// Reference entry 1126b080; body size 7 bytes.
#line 1 "ENTRY_1126b080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1126b080(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x86be);
}


// Reference entry 1126b320; body size 52 bytes.
#line 1 "ENTRY_1126b320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1126b320(int param_1)

{
  *(undefined4 *)(param_1 + 0x2008) = 0;
  *(undefined4 *)(param_1 + 0x200c) = 0;
  *(undefined4 *)(param_1 + 0x2010) = 0;
  *(undefined1 *)(param_1 + 0x12330) = 0;
                    
                    
  (**(code **)(*(int *)(param_1 + 0x6018) + 0x28))();
  return;
}


// Reference entry 1126b600; body size 23 bytes.
#line 1 "ENTRY_1126b600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1126b600(undefined *param_2)
{
  int param_1 = (int )this;
  undefined *puVar1;
  
  puVar1 = (undefined *)(&DAT_119e3b30);
  if (param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)(param_2);
  }
  *(undefined **)(param_1 + 0x856c) = puVar1;
  return;
}


// Reference entry 1126b630; body size 52 bytes.
#line 1 "ENTRY_1126b630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1126b630(ushort param_2,char param_3)
{
  int param_1 = (int )this;
  if (param_3 != '\0') {
    *(ushort *)(param_1 + 0x4ac) = *(ushort *)(param_1 + 0x4ac) | param_2;
    return;
  }
  *(ushort *)(param_1 + 0x4ac) = ~param_2 & *(ushort *)(param_1 + 0x4ac);
  return;
}


// Reference entry 1126bad0; body size 13 bytes.
#line 1 "ENTRY_1126bad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1126bad0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc314) = param_2;
  return;
}


// Reference entry 1126bae0; body size 18 bytes.
#line 1 "ENTRY_1126bae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1126bae0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(param_2[1]);
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return;
}


// Reference entry 1126bb00; body size 26 bytes.
#line 1 "ENTRY_1126bb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1126bb00(int param_2)
{
  int param_1 = (int )this;
  if (param_2 == 0) {
    param_2 = (int)(thunk_FUN_1125b4a0());
  }
  *(int *)(param_1 + 0x8568) = param_2;
  return;
}


// Reference entry 1126bb20; body size 23 bytes.
#line 1 "ENTRY_1126bb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1126bb20(char *param_2)
{
  int param_1 = (int )this;
  char *pcVar1;
  
  pcVar1 = (char *)("Sonos");
  if (param_2 != (char *)0x0) {
    pcVar1 = (char *)(param_2);
  }
  *(char **)(param_1 + 0x8570) = pcVar1;
  return;
}


// Reference entry 1126bb40; body size 91 bytes.
#line 1 "ENTRY_1126bb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1126bb40(char *param_1,char *param_2)

{
  char cVar1;
  
  if ((((param_1 != (char *)0x0) && (*param_1 != '\0')) && (param_2 != (char *)0x0)) &&
     (*param_2 != '\0')) {
    cVar1 = (char)(thunk_FUN_112a7f50(&DAT_122f5da0));
    thunk_FUN_1145c250(&DAT_122f5da8,param_1,0x21);
    thunk_FUN_1145c250(&DAT_122f5dcc,param_2,0x11);
    if (cVar1 != '\0') {
      thunk_FUN_112a8010(&DAT_122f5da0);
    }
  }
  return;
}


// Reference entry 1126bbc0; body size 24 bytes.
#line 1 "ENTRY_1126bbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1126bbc0(undefined4 param_2,undefined1 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined1 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 8) = param_4;
  return;
}


// Reference entry 1126bbe0; body size 79 bytes.
#line 1 "ENTRY_1126bbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1126bbe0(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined2 param_6,undefined2 param_7)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x4010) = 0;
  uVar1 = (undefined4)(*param_4);
  *(undefined4 *)(param_1 + 0xc) = param_4[1];
  *(undefined4 *)(param_1 + 0x4014) = param_3;
  *(undefined4 *)(param_1 + 0x4018) = param_5;
  *(undefined2 *)(param_1 + 0x401c) = param_6;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined2 *)(param_1 + 0x401e) = param_7;
  return;
}


// Reference entry 1126bf00; body size 339 bytes.
#line 1 "ENTRY_1126bf00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1126bf00(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uStack_108;
  int iStack_104;
  uint uStack_4;
  
  iVar4 = (int)(param_1 + 4);
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_108);
  if (*(int *)(param_1 + 0x430) != 0) {
    uVar1 = (undefined4)(thunk_FUN_112967e0());
    iVar2 = (int)(thunk_FUN_113e30a0(uVar1));
    if (iVar2 != 0) {
      while (iVar2 != -0x50) {
        if (iVar2 == -0x6900) {
          iVar2 = (int)(*(int *)(param_1 + 0x428));
          if (iVar2 == -1) break;
          uStack_108 = (undefined4)(1);
          iStack_104 = (int)(iVar2);
          iVar2 = (int)(thunk_FUN_1126b550(iVar2 + 1,&uStack_108,0,param_2));
          if (iVar2 < 1) break;
        }
        else {
          if (iVar2 != -0x6880) {
            piVar3 = (int *)(_errno());
            uVar5 = (uint)((uint)*(ushort *)(param_1 + 0x424));
            thunk_FUN_112b0270(&DAT_119df9ec,4,"SSL %s error -0x%x %d to %s with local port %u",
                               "shutdown",-iVar2,*piVar3,iVar4,*(undefined2 *)(param_1 + 0x420));
            if (iVar2 == -0x7780) {
              thunk_FUN_11298430(iVar4,uVar5);
              thunk_FUN_11298190(iVar4,uVar5);
            }
            break;
          }
          iStack_104 = (int)(*(int *)(param_1 + 0x428));
          uStack_108 = (undefined4)(1);
          iVar2 = (int)(thunk_FUN_1126b550(iStack_104 + 1,0,&uStack_108,param_2));
          if (iVar2 != 1) break;
        }
        uVar1 = (undefined4)(thunk_FUN_112967e0());
        iVar2 = (int)(thunk_FUN_113e30a0(uVar1));
        if (iVar2 == 0) break;
      }
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1126bf10; body size 415 bytes.
#line 1 "ENTRY_1126bf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1126bf10(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uStack_108;
  int iStack_104;
  uint uStack_4;
  
  iVar4 = (int)(param_1 + 4);
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_108);
  if (*(int *)(param_1 + 0x430) != 0) {
    uVar1 = (undefined4)(thunk_FUN_112967e0());
    iVar2 = (int)(thunk_FUN_113e30a0(uVar1));
    if (iVar2 != 0) {
      while (iVar2 != -0x50) {
        if (iVar2 == -0x6900) {
          iVar2 = (int)(*(int *)(param_1 + 0x428));
          if (iVar2 == -1) break;
          uStack_108 = (undefined4)(1);
          iStack_104 = (int)(iVar2);
          iVar2 = (int)(thunk_FUN_1126b550(iVar2 + 1,&uStack_108,0,param_2));
          if (iVar2 < 1) break;
        }
        else {
          if (iVar2 != -0x6880) {
            piVar3 = (int *)(_errno());
            uVar5 = (uint)((uint)*(ushort *)(param_1 + 0x424));
            thunk_FUN_112b0270(&DAT_119df9ec,4,"SSL %s error -0x%x %d to %s with local port %u",
                               "shutdown",-iVar2,*piVar3,iVar4,*(undefined2 *)(param_1 + 0x420));
            if (iVar2 == -0x7780) {
              thunk_FUN_11298430(iVar4,uVar5);
              thunk_FUN_11298190(iVar4,uVar5);
            }
            break;
          }
          iStack_104 = (int)(*(int *)(param_1 + 0x428));
          uStack_108 = (undefined4)(1);
          iVar2 = (int)(thunk_FUN_1126b550(iStack_104 + 1,0,&uStack_108,param_2));
          if (iVar2 != 1) break;
        }
        uVar1 = (undefined4)(thunk_FUN_112967e0());
        iVar2 = (int)(thunk_FUN_113e30a0(uVar1));
        if (iVar2 == 0) break;
      }
    }
  }
  iVar4 = (int)(*(int *)(param_1 + 0x430));
  if (iVar4 != 0) {
    thunk_FUN_11294d60();
    thunk_FUN_1148a50e(iVar4,0xc);
    *(undefined4 *)(param_1 + 0x430) = 0;
  }
  if (*(int *)(param_1 + 0x428) != -1) {
    Ordinal_3(*(int *)(param_1 + 0x428));
    *(undefined4 *)(param_1 + 0x428) = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x40c) = 0;
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1126c470; body size 8 bytes.
#line 1 "ENTRY_1126c470"

/* WARNING: Removing unreachable block (ram,0x112875b3) */
/* WARNING: Removing unreachable block (ram,0x112875bd) */
/* WARNING: Removing unreachable block (ram,0x112875f7) */
/* WARNING: Removing unreachable block (ram,0x1128760e) */
/* WARNING: Removing unreachable block (ram,0x1128760a) */
/* WARNING: Removing unreachable block (ram,0x1128761f) */
/* WARNING: Removing unreachable block (ram,0x1128763c) */
/* WARNING: Removing unreachable block (ram,0x11287646) */
/* WARNING: Removing unreachable block (ram,0x11287676) */
/* WARNING: Removing unreachable block (ram,0x1128768c) */
/* WARNING: Removing unreachable block (ram,0x112876a9) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1126c470(int param_1)

{
  undefined4 auStack_20 [7];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)auStack_20);
  auStack_20[0] = (undefined4)(4);
  Ordinal_7(*(undefined4 *)(param_1 + 0x428),0xffff);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1126ce20; body size 37 bytes.
#line 1 "ENTRY_1126ce20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1126ce20(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = (undefined4)(param_2[1]);
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(uVar1);
  uVar1 = (undefined4)(param_2[3]);
  uVar2 = (undefined4)(param_2[4]);
  uVar3 = (undefined4)(param_2[5]);
  param_1[2] = (undefined4)(param_2[2]);
  param_1[3] = (undefined4)(uVar1);
  param_1[4] = (undefined4)(uVar2);
  param_1[5] = (undefined4)(uVar3);
  uVar1 = (undefined4)(param_2[7]);
  uVar2 = (undefined4)(param_2[8]);
  uVar3 = (undefined4)(param_2[9]);
  param_1[6] = (undefined4)(param_2[6]);
  param_1[7] = (undefined4)(uVar1);
  param_1[8] = (undefined4)(uVar2);
  param_1[9] = (undefined4)(uVar3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1126ce50; body size 18 bytes.
#line 1 "ENTRY_1126ce50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1126ce50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1126cf40; body size 22 bytes.
#line 1 "ENTRY_1126cf40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1126cf40(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1126cf60; body size 65 bytes.
#line 1 "ENTRY_1126cf60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1126cf60(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_3);
  param_1[1] = (undefined4)(param_3[1]);
  *param_1 = (undefined4)(uVar1);
  param_1[2] = (undefined4)(0x7fffffff);
  param_1[3] = (undefined4)(0);
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = (undefined4)(&DAT_1186d2ee);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1126cfc0; body size 11 bytes.
#line 1 "ENTRY_1126cfc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1126cfc0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1126cfd0; body size 11 bytes.
#line 1 "ENTRY_1126cfd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1126cfd0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1126cfe0; body size 18 bytes.
#line 1 "ENTRY_1126cfe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1126cfe0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1126d0f0; body size 22 bytes.
#line 1 "ENTRY_1126d0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1126d0f0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1126d110; body size 11 bytes.
#line 1 "ENTRY_1126d110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1126d110(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1126d120; body size 67 bytes.
#line 1 "ENTRY_1126d120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1126d120(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = (undefined4)(((undefined4 *)*param_2)[1]);
  *param_1 = (undefined4)(uVar1);
  param_1[2] = (undefined4)(0x7fffffff);
  param_1[3] = (undefined4)(0);
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = (undefined4)(&DAT_1186d2ee);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1126d180; body size 3 bytes.
#line 1 "ENTRY_1126d180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1126d180(void)

{
  return;
}


// Reference entry 1126d190; body size 25 bytes.
#line 1 "ENTRY_1126d190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1126d190(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x38));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 1126d1b0; body size 13 bytes.
#line 1 "ENTRY_1126d1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1126d1b0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1126d1c0; body size 13 bytes.
#line 1 "ENTRY_1126d1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1126d1c0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1126d1d0; body size 3 bytes.
#line 1 "ENTRY_1126d1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1126d1d0(void)

{
  return;
}


// Reference entry 1126d740; body size 15 bytes.
#line 1 "ENTRY_1126d740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1126d740(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x38);
  return;
}


// Reference entry 1126d760; body size 15 bytes.
#line 1 "ENTRY_1126d760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1126d760(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x38);
  return;
}


// Reference entry 1126d780; body size 13 bytes.
#line 1 "ENTRY_1126d780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1126d780(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1126d790; body size 13 bytes.
#line 1 "ENTRY_1126d790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1126d790(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1126d7a0; body size 5 bytes.
#line 1 "ENTRY_1126d7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1126d7a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1126d7b0; body size 41 bytes.
#line 1 "ENTRY_1126d7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1126d7b0(int param_1,uint *param_2)

{
  if (*(char *)(param_1 + 0xd) == '\0') {
    if ((*(uint *)(param_1 + 0x10) <= *param_2) &&
       ((*param_2 != *(uint *)(param_1 + 0x10) || (*(uint *)(param_1 + 0x14) <= param_2[1])))) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 1126d7f0; body size 13 bytes.
#line 1 "ENTRY_1126d7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1126d7f0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1126d960; body size 7 bytes.
#line 1 "ENTRY_1126d960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1126d960(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 1126d970; body size 5 bytes.
#line 1 "ENTRY_1126d970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1126d970(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1126d980; body size 5 bytes.
#line 1 "ENTRY_1126d980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1126d980(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1126d990; body size 5 bytes.
#line 1 "ENTRY_1126d990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1126d990(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1126d9a0; body size 5 bytes.
#line 1 "ENTRY_1126d9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1126d9a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1126d9b0; body size 5 bytes.
#line 1 "ENTRY_1126d9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1126d9b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1126d9c0; body size 33 bytes.
#line 1 "ENTRY_1126d9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1126d9c0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = (undefined4)(param_3[1]);
  uVar2 = (undefined4)(param_3[2]);
  uVar3 = (undefined4)(param_3[3]);
  *param_2 = (undefined4)(*param_3);
  param_2[1] = (undefined4)(uVar1);
  param_2[2] = (undefined4)(uVar2);
  param_2[3] = (undefined4)(uVar3);
  uVar1 = (undefined4)(param_3[5]);
  uVar2 = (undefined4)(param_3[6]);
  uVar3 = (undefined4)(param_3[7]);
  param_2[4] = (undefined4)(param_3[4]);
  param_2[5] = (undefined4)(uVar1);
  param_2[6] = (undefined4)(uVar2);
  param_2[7] = (undefined4)(uVar3);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
  return;
}


// Reference entry 1126d9f0; body size 67 bytes.
#line 1 "ENTRY_1126d9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1126d9f0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((undefined4 *)*param_4)[1]);
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(uVar1);
  param_2[2] = (undefined4)(0x7fffffff);
  param_2[3] = (undefined4)(0);
  *(undefined1 *)(param_2 + 4) = 0;
  param_2[5] = (undefined4)(&DAT_1186d2ee);
  param_2[6] = (undefined4)(0);
  param_2[7] = (undefined4)(0);
  param_2[8] = (undefined4)(0);
  return;
}


// Reference entry 1126da50; body size 3 bytes.
#line 1 "ENTRY_1126da50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1126da50(void)

{
  return;
}


// Reference entry 1126dab0; body size 15 bytes.
#line 1 "ENTRY_1126dab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1126dab0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 1126dad0; body size 15 bytes.
#line 1 "ENTRY_1126dad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1126dad0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 1126db70; body size 5 bytes.
#line 1 "ENTRY_1126db70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1126db70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1126db80; body size 5 bytes.
#line 1 "ENTRY_1126db80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1126db80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1126db90; body size 5 bytes.
#line 1 "ENTRY_1126db90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1126db90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1126dba0; body size 5 bytes.
#line 1 "ENTRY_1126dba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1126dba0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1126dbb0; body size 5 bytes.
#line 1 "ENTRY_1126dbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1126dbb0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1126dbc0; body size 5 bytes.
#line 1 "ENTRY_1126dbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1126dbc0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1126dbd0; body size 5 bytes.
#line 1 "ENTRY_1126dbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1126dbd0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1126dbe0; body size 5 bytes.
#line 1 "ENTRY_1126dbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1126dbe0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1126dbf0; body size 11 bytes.
#line 1 "ENTRY_1126dbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1126dbf0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 1126dd60; body size 5 bytes.
#line 1 "ENTRY_1126dd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1126dd60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1126dd70; body size 18 bytes.
#line 1 "ENTRY_1126dd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1126dd70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1126ddd0; body size 11 bytes.
#line 1 "ENTRY_1126ddd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1126ddd0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1126dde0; body size 11 bytes.
#line 1 "ENTRY_1126dde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1126dde0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1126de70; body size 11 bytes.
#line 1 "ENTRY_1126de70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1126de70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1126de80; body size 11 bytes.
#line 1 "ENTRY_1126de80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1126de80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1126de90; body size 16 bytes.
#line 1 "ENTRY_1126de90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1126de90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1126deb0; body size 3 bytes.
#line 1 "ENTRY_1126deb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1126deb0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1126dec0; body size 52 bytes.
#line 1 "ENTRY_1126dec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1126dec0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x38));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1126df10; body size 13 bytes.
#line 1 "ENTRY_1126df10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1126df10(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1126e220; body size 48 bytes.
#line 1 "ENTRY_1126e220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1126e220(undefined4 *param_1)

{
  *param_1 = (undefined4)(0x7fffffff);
  param_1[1] = (undefined4)(0);
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = (undefined4)(&DAT_1186d2ee);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1126e260; body size 9 bytes.
#line 1 "ENTRY_1126e260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1126e260(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RTimedJobScheduler);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1126e2e0; body size 19 bytes.
#line 1 "ENTRY_1126e2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1126e2e0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x38);
  }
  return;
}


// Reference entry 1126e300; body size 19 bytes.
#line 1 "ENTRY_1126e300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1126e300(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x38);
  }
  return;
}


// Reference entry 1126e3d0; body size 3 bytes.
#line 1 "ENTRY_1126e3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1126e3d0(void)

{
  return;
}


// Reference entry 1126e420; body size 14 bytes.
#line 1 "ENTRY_1126e420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_1126e420(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 1126e440; body size 14 bytes.
#line 1 "ENTRY_1126e440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_1126e440(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 1126e5a0; body size 6 bytes.
#line 1 "ENTRY_1126e5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1126e5a0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 1126e5b0; body size 6 bytes.
#line 1 "ENTRY_1126e5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1126e5b0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 1126e5c0; body size 6 bytes.
#line 1 "ENTRY_1126e5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1126e5c0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 1126e5d0; body size 6 bytes.
#line 1 "ENTRY_1126e5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1126e5d0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 1126e5e0; body size 6 bytes.
#line 1 "ENTRY_1126e5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1126e5e0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 1126e7a0; body size 7 bytes.
#line 1 "ENTRY_1126e7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_1126e7a0(uint param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(~param_1);
}


// Reference entry 1126e810; body size 31 bytes.
#line 1 "ENTRY_1126e810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1126e810(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x38));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 1126e8c0; body size 5 bytes.
#line 1 "ENTRY_1126e8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1126e8c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1126ec20; body size 3 bytes.
#line 1 "ENTRY_1126ec20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1126ec20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1126ec30; body size 3 bytes.
#line 1 "ENTRY_1126ec30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1126ec30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1126ec40; body size 3 bytes.
#line 1 "ENTRY_1126ec40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1126ec40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1126ec50; body size 3 bytes.
#line 1 "ENTRY_1126ec50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1126ec50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1126ec60; body size 3 bytes.
#line 1 "ENTRY_1126ec60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1126ec60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1126ec70; body size 3 bytes.
#line 1 "ENTRY_1126ec70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1126ec70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1126ec80; body size 3 bytes.
#line 1 "ENTRY_1126ec80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1126ec80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1126ec90; body size 3 bytes.
#line 1 "ENTRY_1126ec90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1126ec90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1126f000; body size 3 bytes.
#line 1 "ENTRY_1126f000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1126f000(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 1126f010; body size 11 bytes.
#line 1 "ENTRY_1126f010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1126f010(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 1126f090; body size 9 bytes.
#line 1 "ENTRY_1126f090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1126f090(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 1126f0a0; body size 11 bytes.
#line 1 "ENTRY_1126f0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1126f0a0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 1126f570; body size 97 bytes.
#line 1 "ENTRY_1126f570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1126f570(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x4924925) {
    param_1 = (uint)(param_1 * 0x38);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 1126f5f0; body size 13 bytes.
#line 1 "ENTRY_1126f5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1126f5f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 1126f600; body size 11 bytes.
#line 1 "ENTRY_1126f600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1126f600(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 1126f670; body size 12 bytes.
#line 1 "ENTRY_1126f670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1126f670(uint param_2)
{
  int param_1 = (int )this;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & ~param_2;
  return;
}


// Reference entry 1126f6a0; body size 63 bytes.
#line 1 "ENTRY_1126f6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1126f6a0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 1126f6f0; body size 66 bytes.
#line 1 "ENTRY_1126f6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1126f6f0(int param_1,int param_2)

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


// Reference entry 1126f920; body size 11 bytes.
#line 1 "ENTRY_1126f920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1126f920(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 1126f930; body size 11 bytes.
#line 1 "ENTRY_1126f930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1126f930(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 1126fb70; body size 13 bytes.
#line 1 "ENTRY_1126fb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_1126fb70(uint param_2)
{
  int param_1 = (int )this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)((*(uint *)(param_1 + 0x18) & param_2) != 0);
}


// Reference entry 1126fd00; body size 6 bytes.
#line 1 "ENTRY_1126fd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1126fd00(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x4924924);
}


// Reference entry 1126fd10; body size 6 bytes.
#line 1 "ENTRY_1126fd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1126fd10(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x4924924);
}


// Reference entry 1126fd20; body size 5 bytes.
#line 1 "ENTRY_1126fd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1126fd20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11270280; body size 10 bytes.
#line 1 "ENTRY_11270280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11270280(uint param_2)
{
  int param_1 = (int )this;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | param_2;
  return;
}


// Reference entry 11270290; body size 10 bytes.
#line 1 "ENTRY_11270290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11270290(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1 *)(param_1 + 0x61) = param_2;
  return;
}


// Reference entry 112702f0; body size 12 bytes.
#line 1 "ENTRY_112702f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_112702f0(void)

{
  thunk_FUN_11270300();
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11270980; body size 6 bytes.
#line 1 "ENTRY_11270980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11270980(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x40);
}


// Reference entry 11270a20; body size 51 bytes.
#line 1 "ENTRY_11270a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11270a20(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0xffffffff);
  param_1[5] = (undefined4)(0xffffffff);
  param_1[6] = (undefined4)(0xffffffff);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11270ac0; body size 22 bytes.
#line 1 "ENTRY_11270ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11270ac0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMSearchNotifyHandler);
  if (param_1[3] != -1) {
    Ordinal_3(param_1[3]);
  }
  return;
}


// Reference entry 11270c40; body size 6 bytes.
#line 1 "ENTRY_11270c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void Ordinal_111_11270c40(void)

{
                    
                    
  Ordinal_111();
  return;
}


// Reference entry 11270cf0; body size 8 bytes.
#line 1 "ENTRY_11270cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11270cf0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(10 < *(int *)(param_1 + 0x14));
}


// Reference entry 11270d00; body size 8 bytes.
#line 1 "ENTRY_11270d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11270d00(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(0 < *(int *)(param_1 + 0x10));
}


// Reference entry 11272170; body size 21 bytes.
#line 1 "ENTRY_11272170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11272170(int *param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_1,0);
  }
  return;
}


// Reference entry 112723f0; body size 16 bytes.
#line 1 "ENTRY_112723f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_112723f0(int param_1)

{
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 8) + 8))(param_1);
  }
  return;
}


// Reference entry 11272420; body size 51 bytes.
#line 1 "ENTRY_11272420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11272420(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(1);
  param_1[2] = (undefined4)(1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Ref_count_obj2);
  thunk_FUN_11272ad0(*param_2,*param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11272460; body size 3 bytes.
#line 1 "ENTRY_11272460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11272460(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 11272470; body size 3 bytes.
#line 1 "ENTRY_11272470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11272470(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 11272480; body size 5 bytes.
#line 1 "ENTRY_11272480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11272480(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11272490; body size 5 bytes.
#line 1 "ENTRY_11272490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11272490(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 112724a0; body size 5 bytes.
#line 1 "ENTRY_112724a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_112724a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 112724b0; body size 5 bytes.
#line 1 "ENTRY_112724b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_112724b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 112724c0; body size 8 bytes.
#line 1 "ENTRY_112724c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 FUN_112724c0(undefined2 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2)(*param_1);
}


// Reference entry 112724d0; body size 10 bytes.
#line 1 "ENTRY_112724d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined8 FUN_112724d0(undefined8 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8)(*param_1);
}


// Reference entry 112724e0; body size 24 bytes.
#line 1 "ENTRY_112724e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112724e0(undefined4 param_1,undefined4 *param_2,undefined1 *param_3)

{
  thunk_FUN_11272ad0(*param_2,*param_3);
  return;
}


// Reference entry 11272500; body size 28 bytes.
#line 1 "ENTRY_11272500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11272500(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)((int *)(param_2[1] + 4));
    *piVar1 = (int)(*piVar1 + 1);
    UNLOCK();
  }
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  return;
}


// Reference entry 112726c0; body size 16 bytes.
#line 1 "ENTRY_112726c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_112726c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return;
}


// Reference entry 112726e0; body size 5 bytes.
#line 1 "ENTRY_112726e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_112726e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 112726f0; body size 5 bytes.
#line 1 "ENTRY_112726f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_112726f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11272700; body size 5 bytes.
#line 1 "ENTRY_11272700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11272700(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11272710; body size 5 bytes.
#line 1 "ENTRY_11272710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11272710(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11272980; body size 5 bytes.
#line 1 "ENTRY_11272980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11272980(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11272a50; body size 5 bytes.
#line 1 "ENTRY_11272a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11272a50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11272a60; body size 5 bytes.
#line 1 "ENTRY_11272a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11272a60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11272a70; body size 16 bytes.
#line 1 "ENTRY_11272a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_11272a70(int param_2)
{
  int param_1 = (int )this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(uint *)(param_1 + 4) < *(uint *)(param_2 + 4));
}


// Reference entry 11272a90; body size 19 bytes.
#line 1 "ENTRY_11272a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11272a90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 11272ab0; body size 16 bytes.
#line 1 "ENTRY_11272ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11272ab0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11272bd0; body size 43 bytes.
#line 1 "ENTRY_11272bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11272bd0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)((int *)(param_2[1] + 4));
    *piVar1 = (int)(*piVar1 + 1);
    UNLOCK();
  }
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11272c10; body size 16 bytes.
#line 1 "ENTRY_11272c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11272c10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11272c40; body size 7 bytes.
#line 1 "ENTRY_11272c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11272c40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Ref_count_obj2);
  return;
}


// Reference entry 11272d10; body size 7 bytes.
#line 1 "ENTRY_11272d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11272d10(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 11272d20; body size 35 bytes.
#line 1 "ENTRY_11272d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11272d20(void *param_1,size_t param_2,char param_3)

{
  memset(param_1,(int)param_3,param_2);
  *(undefined1 *)((int)param_1 + param_2) = 0;
  return;
}


// Reference entry 11272d80; body size 26 bytes.
#line 1 "ENTRY_11272d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11272d80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_1145c720(param_1,param_2,"<version>%u</version>",param_3);
  return;
}


// Reference entry 11272da0; body size 26 bytes.
#line 1 "ENTRY_11272da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11272da0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_1145c720(param_1,param_2,"<version>%s</version>",param_3);
  return;
}


// Reference entry 11273150; body size 24 bytes.
#line 1 "ENTRY_11273150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11273150(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1145c720(param_1,param_2,"<version>%u</version>",0);
  return;
}


// Reference entry 11273650; body size 28 bytes.
#line 1 "ENTRY_11273650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11273650(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = (undefined1)(0);
  thunk_FUN_1145c720(param_1,param_2,"<version>%u</version>",7);
  return;
}


// Reference entry 11273930; body size 28 bytes.
#line 1 "ENTRY_11273930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11273930(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = (undefined1)(0);
  thunk_FUN_1145c720(param_1,param_2,"<version>%u</version>",3);
  return;
}


// Reference entry 11273a20; body size 18 bytes.
#line 1 "ENTRY_11273a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_11273a20(char param_1)

{
  if ((param_1 != ' ') && (param_1 != '\t')) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
}


// Reference entry 11273a40; body size 155 bytes.
#line 1 "ENTRY_11273a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11273a40(char *param_1,undefined2 *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  
  cVar2 = (char)(*param_1);
  while ((cVar2 != '\0' && (iVar3 = isdigit((int)cVar2), iVar3 == 0))) {
    cVar2 = (char)(param_1[1]);
    param_1 = (char *)(param_1 + 1);
  }
  iVar3 = (int)(isdigit((int)*param_1));
  if (iVar3 != 0) {
    iVar3 = (int)(isdigit((int)*param_1));
    pcVar4 = (char *)(param_1);
    while (iVar3 != 0) {
      pcVar1 = (char *)(pcVar4 + 1);
      pcVar4 = (char *)(pcVar4 + 1);
      iVar3 = (int)(isdigit((int)*pcVar1));
    }
    for (; (cVar2 = (char)(*pcVar4, cVar2 == ' ' || (cVar2 == '\t'))); pcVar4 = pcVar4 + 1) {
    }
    if (cVar2 == ':') {
      do {
        do {
          pcVar1 = (char *)(pcVar4 + 1);
          pcVar4 = (char *)(pcVar4 + 1);
        } while (*pcVar1 == ' ');
      } while (*pcVar1 == '\t');
      cVar2 = (char)(thunk_FUN_1145a960(pcVar4));
      if (cVar2 != '\0') {
        iVar3 = (int)(atoi(param_1));
        *param_2 = (undefined2)((short)iVar3);
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
      }
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11273b10; body size 3 bytes.
#line 1 "ENTRY_11273b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11273b10(void)

{
  return;
}


// Reference entry 11273b20; body size 47 bytes.
#line 1 "ENTRY_11273b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11273b20(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(*(int **)(param_1 + 4));
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
        return;
      }
    }
  }
  return;
}


// Reference entry 11273be0; body size 12 bytes.
#line 1 "ENTRY_11273be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11273be0(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    LOCK();
    piVar1 = (int *)((int *)(*(int *)(param_1 + 4) + 4));
    *piVar1 = (int)(*piVar1 + 1);
    UNLOCK();
  }
  return;
}


// Reference entry 11273bf0; body size 17 bytes.
#line 1 "ENTRY_11273bf0"

/* WARNING: Switch with 1 destination removed at 0x11273bf9 : 6 cases all go to same destination */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11273bf0(void)

{
  return;
}


// Reference entry 11273d90; body size 47 bytes.
#line 1 "ENTRY_11273d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_11273d90(short *param_2,short param_3)
{
  short *param_1 = (short *)this;
  short sVar1;
  short sVar2;
  uint3 uVar3;
  
  sVar1 = (short)(*param_2);
  LOCK();
  sVar2 = (short)(*param_1);
  if (sVar1 == sVar2) {
    *param_1 = (short)(param_3);
    sVar2 = (short)(sVar1);
  }
  UNLOCK();
  uVar3 = (uint3)((uint3)(byte)((ushort)sVar2 >> 8));
  if (sVar2 != sVar1) {
    *param_2 = (short)(sVar2);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((uint)uVar3 << 8);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(((uint)(uVar3) << 8 | (uint)(1)));
}


// Reference entry 11273e30; body size 3 bytes.
#line 1 "ENTRY_11273e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11273e30(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 11273ee0; body size 7 bytes.
#line 1 "ENTRY_11273ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 __fastcall FUN_11273ee0(undefined2 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2)(*param_1);
}


// Reference entry 11274090; body size 55 bytes.
#line 1 "ENTRY_11274090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11274090(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)(param_3);
  param_1[1] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXmlChunkExtractor);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *(undefined1 *)(param_1 + 6) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 112741a0; body size 7 bytes.
#line 1 "ENTRY_112741a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_112741a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXmlWriter);
  return;
}


// Reference entry 11274360; body size 40 bytes.
#line 1 "ENTRY_11274360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11274360(int param_2)
{
  int *param_1 = (int *)this;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    (**(code **)(*param_1 + 4))(&DAT_11882ff0,1);
  }
  return;
}


// Reference entry 112744c0; body size 13 bytes.
#line 1 "ENTRY_112744c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_112744c0(int *param_1)

{
  (**(code **)(*param_1 + 4))(&DAT_11881ac8,1);
  return;
}


// Reference entry 11274780; body size 24 bytes.
#line 1 "ENTRY_11274780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11274780(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_112743a0(param_1,param_2,param_3,1,1);
  return;
}


// Reference entry 112747c0; body size 35 bytes.
#line 1 "ENTRY_112747c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_112747c0(char param_2)
{
  int *param_1 = (int *)this;
  if (param_2 != '\0') {
    (**(code **)(*param_1 + 4))(&DAT_119e4740,2);
    return;
  }
  (**(code **)(*param_1 + 4))(&DAT_1189dabc,1);
  return;
}


// Reference entry 112747f0; body size 115 bytes.
#line 1 "ENTRY_112747f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_112747f0(undefined8 param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  char *pcVar2;
  char acStack_43c [1080];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)acStack_43c);
  thunk_FUN_1145c720(acStack_43c,0x436,&DAT_119df290,param_2);
  pcVar2 = (char *)(acStack_43c);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  (**(code **)(*param_1 + 4))(acStack_43c,(int)pcVar2 - (int)(acStack_43c + 1));
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 112752e0; body size 3 bytes.
#line 1 "ENTRY_112752e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_112752e0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 112752f0; body size 50 bytes.
#line 1 "ENTRY_112752f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_112752f0(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(code **)(param_1 + 0x15c) != (code *)0x0) {
    (**(code **)(param_1 + 0x15c))();
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x160) + 0x18))
            (param_1 + 0x44,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x1c),param_2)
  ;
  return;
}


// Reference entry 11275330; body size 43 bytes.
#line 1 "ENTRY_11275330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11275330(int param_1)

{
  if (*(uint *)(param_1 + 0x34) != 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(uint *)(param_1 + 0x34) <
           (uint)(*(int *)(param_1 + 0x14) * 100) / *(uint *)(param_1 + 0x10));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(false);
}


// Reference entry 11275440; body size 9 bytes.
#line 1 "ENTRY_11275440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11275440(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*(int *)(param_1 + 4) + 0x1c + param_1);
}


// Reference entry 11275450; body size 4 bytes.
#line 1 "ENTRY_11275450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11275450(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x1c);
}


// Reference entry 112755b0; body size 4 bytes.
#line 1 "ENTRY_112755b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_112755b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xc));
}


// Reference entry 112755c0; body size 4 bytes.
#line 1 "ENTRY_112755c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_112755c0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 11275860; body size 13 bytes.
#line 1 "ENTRY_11275860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11275860(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x15c) = param_2;
  return;
}


// Reference entry 11275870; body size 5 bytes.
#line 1 "ENTRY_11275870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __thiscall Recovered_Bulk::FUN_11275870(char *param_2,undefined4 *param_3,uint param_4)
{
  int param_1 = (int )this;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  char cVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  uint uVar12;
  undefined4 *puVar13;
  
  thunk_FUN_11292b90();
  if ((*(char *)(param_1 + 0x43) == '\0') && (cVar6 = thunk_FUN_11292d70(), cVar6 == '\0')) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
  }
  iVar1 = (int)(param_1 + 0x164);
  cVar6 = (char)(thunk_FUN_112a7f50(iVar1));
  if ((*(uint *)(param_1 + 0x30) & param_4) == 0) {
    pcVar11 = (char *)("(none)");
    if (*param_2 != '\0') {
      pcVar11 = (char *)(param_2);
    }
    thunk_FUN_112b0270("reporting",7,"%s: %s dropped",param_1 + 0x134,pcVar11);
    if (cVar6 != '\0') {
      thunk_FUN_112a8010(iVar1);
    }
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
  }
  if (cVar6 != '\0') {
    thunk_FUN_112a8010(iVar1);
  }
  *(unsigned char *)((char *)&param_4 + 0) = 0;
  pcVar11 = (char *)("");
  if (param_2 != (char *)0x0) {
    pcVar11 = (char *)(param_2);
  }
  bVar5 = (bool)(false);
  pcVar8 = (char *)(pcVar11);
  do {
    cVar6 = (char)(*pcVar8);
    pcVar8 = (char *)(pcVar8 + 1);
  } while (cVar6 != '\0');
  pcVar9 = (char *)(pcVar8 + (1 - (int)(pcVar11 + 1)) + param_3[1] + 0x1c);
  uVar12 = (uint)((uint)(pcVar9 + 3) & 0xfffffffc);
  thunk_FUN_112a7f50(iVar1);
  pcVar7 = (char *)("(none)");
  if (*pcVar11 != '\0') {
    pcVar7 = (char *)(pcVar11);
  }
  thunk_FUN_112b0270("reporting",6,"%s: %s adding %zu bytes, %d free",param_1 + 0x134,pcVar7,uVar12,
                     *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x14));
  iVar10 = (int)(*(int *)(param_1 + 0x14));
  if ((uint)(*(int *)(param_1 + 0x10) - iVar10) < uVar12) {
    uVar12 = (uint)(*(int *)(param_1 + 0x28) + 1);
    *(uint *)(param_1 + 0x28) = uVar12;
    if (uVar12 % 0x14 == 1) {
      pcVar8 = (char *)("(none)");
      if (*pcVar11 != '\0') {
        pcVar8 = (char *)(pcVar11);
      }
      thunk_FUN_112b0270("reporting",5,"%s: Can\'t grow space. Losing event %s",param_1 + 0x134,
                         pcVar8);
      thunk_FUN_112a8010(iVar1);
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
    }
  }
  else {
    if (uVar12 - (int)pcVar9 != 0) {
      memset(pcVar9 + *(int *)(param_1 + 0xc) + iVar10,0,uVar12 - (int)pcVar9);
      iVar10 = (int)(*(int *)(param_1 + 0x14));
    }
    *(uint *)(param_1 + 0x14) = uVar12 + iVar10;
    puVar13 = (undefined4 *)((undefined4 *)(*(int *)(param_1 + 0xc) + iVar10));
    uVar2 = (undefined4)(param_3[1]);
    uVar3 = (undefined4)(param_3[2]);
    uVar4 = (undefined4)(param_3[3]);
    *puVar13 = (undefined4)(*param_3);
    puVar13[1] = (undefined4)(uVar2);
    puVar13[2] = (undefined4)(uVar3);
    puVar13[3] = (undefined4)(uVar4);
    *(undefined8 *)(puVar13 + 4) = *(undefined8 *)(param_3 + 4);
    memcpy(puVar13 + 7,(void *)param_3[3],param_3[1]);
    puVar13[3] = (undefined4)(0);
    thunk_FUN_1145c250(puVar13[1] + 0x1c + (int)puVar13,pcVar11,pcVar8 + (1 - (int)(pcVar11 + 1)));
    puVar13[6] = (undefined4)(uVar12);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    *(unsigned char *)((char *)&param_4 + 0) = 1;
    if ((((*(char *)(param_1 + 0x42) == '\0') && (*(uint *)(param_1 + 0x34) != 0)) &&
        (*(uint *)(param_1 + 0x34) <
         (uint)(*(int *)(param_1 + 0x14) * 100) / *(uint *)(param_1 + 0x10))) &&
       (*(char *)(param_1 + 0x40) != '\0')) {
      bVar5 = (bool)(true);
    }
  }
  thunk_FUN_112a8010(iVar1);
  if (((bVar5) && (*(int **)(param_1 + 0x38) != (int *)0x0)) && (*(int *)(param_1 + 0x3c) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x38) + 4))(*(int *)(param_1 + 0x3c),0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)((undefined1)param_4);
}


// Reference entry 11275c10; body size 412 bytes.
#line 1 "ENTRY_11275c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11275c10(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
 try {
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iStack_d4;
  void *pvStack_bc;
  undefined1 *puStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [40];
  undefined1 auStack_88 [128];
  uint uStack_8;


  uStack_8 = (uint)(DAT_12126b84 ^ (uint)auStack_b0);

  uVar3 = (undefined8)(thunk_FUN_112b0310(uStack_8));
  thunk_FUN_11262460(uVar3);
  (**(code **)(iStack_d4 + 0xc))(auStack_88,0x80,0);
  thunk_FUN_11274b50(&DAT_119e4828,auStack_88);
  thunk_FUN_1125bbd0(1);
  piVar1 = (int *)((int *)(param_1 + 0xc4));

  if (0xf < *(uint *)(param_1 + 0xd8)) {
    piVar1 = (int *)((int *)*piVar1);
  }
  thunk_FUN_11274b50(&DAT_11993584,piVar1);
  piVar1 = (int *)((int *)(param_1 + 0xdc));
  if (0xf < *(uint *)(param_1 + 0xf0)) {
    piVar1 = (int *)((int *)*piVar1);
  }
  thunk_FUN_11274b50(&DAT_119bf4bc,piVar1);
  piVar1 = (int *)((int *)(param_1 + 0xf4));
  if (0xf < *(uint *)(param_1 + 0x108)) {
    piVar1 = (int *)((int *)*piVar1);
  }
  thunk_FUN_11274b50(&DAT_119e482c,piVar1);
  if (*(int *)(param_1 + 0x11c) != 0) {
    piVar1 = (int *)((int *)(param_1 + 0x10c));
    if (0xf < *(uint *)(param_1 + 0x120)) {
      piVar1 = (int *)((int *)*piVar1);
    }
    thunk_FUN_11274b50("locid",piVar1);
  }
  thunk_FUN_11274b50(&DAT_1189ea64,auStack_b0);
  thunk_FUN_11455770();
  uVar2 = (undefined4)(thunk_FUN_114561d0());
  thunk_FUN_11274b50(&DAT_119dc7ec,uVar2);
  thunk_FUN_11274b50(&DAT_119dc90c,"release");
  if (*(int *)(param_1 + 0x158) != 0) {
    thunk_FUN_1145c720(auStack_88,0x80,&DAT_11884800,*(int *)(param_1 + 0x158));
    thunk_FUN_11274b50(&DAT_119e4838,auStack_88);
  }
  thunk_FUN_1125bca0();

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 11275ea0; body size 19 bytes.
#line 1 "ENTRY_11275ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11275ea0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_11274880(param_1 + 0x134);
  return;
}


// Reference entry 11275ec0; body size 72 bytes.
#line 1 "ENTRY_11275ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11275ec0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_112747a0(param_1 + 0x134,0,0);
  thunk_FUN_112747a0(&DAT_119e4814,0,0);
  thunk_FUN_11274ac0(*(undefined4 *)(param_1 + 0x154));
  thunk_FUN_11274880(&DAT_119e4814);
  return;
}


// Reference entry 112760c0; body size 10 bytes.
#line 1 "ENTRY_112760c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_112760c0(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1 *)(param_1 + 0x43) = param_2;
  return;
}


// Reference entry 11276130; body size 10 bytes.
#line 1 "ENTRY_11276130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11276130(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1 *)(param_1 + 0x41) = param_2;
  return;
}


// Reference entry 11276230; body size 10 bytes.
#line 1 "ENTRY_11276230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11276230(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1 *)(param_1 + 0x42) = param_2;
  return;
}


// Reference entry 11276240; body size 10 bytes.
#line 1 "ENTRY_11276240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11276240(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}


// Reference entry 11276250; body size 37 bytes.
#line 1 "ENTRY_11276250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11276250(int param_2,int param_3)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(20000);
  if (param_2 != 0) {
    iVar1 = (int)(param_2);
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  iVar1 = (int)(15000);
  if (param_3 != 0) {
    iVar1 = (int)(param_3);
  }
  *(int *)(param_1 + 0x20) = iVar1;
  return;
}


// Reference entry 112762e0; body size 3 bytes.
#line 1 "ENTRY_112762e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112762e0(void)

{
  return;
}


// Reference entry 112762f0; body size 3 bytes.
#line 1 "ENTRY_112762f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112762f0(void)

{
  return;
}


// Reference entry 11276310; body size 7 bytes.
#line 1 "ENTRY_11276310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11276310(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x14));
}


// Reference entry 11276400; body size 22 bytes.
#line 1 "ENTRY_11276400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11276400(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RReportCategoryInfo);
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 0x106) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11276510; body size 55 bytes.
#line 1 "ENTRY_11276510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11276510(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_1125b880(param_1,LAB_1005a4d9,LAB_1005a3da);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RReportFileParser);
  param_1[3] = (undefined4)(0);
  *(undefined1 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11276560; body size 9 bytes.
#line 1 "ENTRY_11276560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11276560(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RReportFileParserCB);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11276570; body size 37 bytes.
#line 1 "ENTRY_11276570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11276570(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RReportUploaderInfo);
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 0x85) = 0;
  *(undefined1 *)((int)param_1 + 0x106) = 0;
  param_1[0x142] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 112765a0; body size 7 bytes.
#line 1 "ENTRY_112765a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_112765a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RReportCategoryInfo);
  return;
}


// Reference entry 112765f0; body size 11 bytes.
#line 1 "ENTRY_112765f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_112765f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RReportFileParser);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXMLParserBase);
  thunk_FUN_112c8b80(param_1[1]);
  param_1[1] = (undefined4)(0);
  thunk_FUN_11285a90();
  return;
}


// Reference entry 11276610; body size 7 bytes.
#line 1 "ENTRY_11276610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11276610(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RReportUploaderInfo);
  return;
}


// Reference entry 112767f0; body size 62 bytes.
#line 1 "ENTRY_112767f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_112767f0(int param_2,int param_3)
{
  int param_1 = (int )this;
  if (param_2 != 0) {
    thunk_FUN_1145c250(param_1 + 4,param_2,0x81);
  }
  if (param_3 != 0) {
    thunk_FUN_1145c250(param_1 + 0x85,param_3,0x81);
  }
  return;
}


// Reference entry 11276920; body size 14 bytes.
#line 1 "ENTRY_11276920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11276920(int param_1)

{
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 0x106) = 0;
  return;
}


// Reference entry 11276940; body size 29 bytes.
#line 1 "ENTRY_11276940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11276940(int param_1)

{
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 0x85) = 0;
  *(undefined1 *)(param_1 + 0x106) = 0;
  *(undefined4 *)(param_1 + 0x508) = 0;
  return;
}


// Reference entry 11276ea0; body size 322 bytes.
#line 1 "ENTRY_11276ea0"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11276ea0(char *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined1 auStack_9590 [8];
  int iStack_9588;
  void *pvStack_9584;
  undefined1 *puStack_9580;
  undefined4 uStack_957c;
  undefined1 auStack_9578 [34160];
  undefined1 auStack_1008 [4096];
  uint uStack_8;


  uStack_8 = (uint)(DAT_12126b84 ^ (uint)auStack_9578);

  if ((param_2 != (char *)0x0) && (*(int *)(param_1 + 4) != 0)) {
    thunk_FUN_1145c930(auStack_9590,0,uStack_8);
    thunk_FUN_1145ad70(auStack_9590,param_3);
    pcVar3 = (char *)(param_2);
    do {
      cVar1 = (char)(*pcVar3);
      pcVar3 = (char *)(pcVar3 + 1);
    } while (cVar1 != '\0');
    if ((int)pcVar3 - (int)(param_2 + 1) < 0x401) {
      thunk_FUN_11266030();

      iVar2 = (int)(thunk_FUN_11269bc0(param_2,0,0,0,0,0,auStack_9590,&DAT_1188db18,0,0));
      if (iVar2 == 0) {
        do {
          iStack_9588 = (int)(0x1000);
          thunk_FUN_1126a130(auStack_1008,&iStack_9588,auStack_9590);
          (**(code **)(*(int *)(param_1 + 8) + 4))(auStack_1008,iStack_9588);
        } while (iStack_9588 != 0);
        thunk_FUN_11266650();
      }
      else {
        thunk_FUN_11266650();
      }
    }
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 112771b0; body size 13 bytes.
#line 1 "ENTRY_112771b0"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_112771b0(char *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  int _FileHandle;
  int iVar2;
  int *piVar3;
  undefined1 auStack_1004 [4096];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)auStack_1004);
  _FileHandle = (int)(_open(param_2,0));
  if (-1 < _FileHandle) {
    cVar1 = (char)('\x01');
    do {
      iVar2 = (int)(_read(_FileHandle,auStack_1004,0x1000));
      if (iVar2 < 0) {
        piVar3 = (int *)(_errno());
        if (*piVar3 != 4) goto LAB_1125bb6a;
        iVar2 = (int)(1);
      }
      else {
        cVar1 = (char)((**(code **)(*(int *)(param_1 + 8) + 4))(auStack_1004,iVar2));
      }
      if ((cVar1 == '\0') || (iVar2 == 0)) goto LAB_1125bb6a;
    } while( true );
  }
LAB_1125bb78:
  thunk_FUN_1148ac28();
  return;
LAB_1125bb6a:
  _close(_FileHandle);
  goto LAB_1125bb78;
}


// Reference entry 11277d40; body size 18 bytes.
#line 1 "ENTRY_11277d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11277d40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_11277620(param_2,param_3);
  return;
}


// Reference entry 11277e40; body size 9 bytes.
#line 1 "ENTRY_11277e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11277e40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RReportEventInterface);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11277e50; body size 9 bytes.
#line 1 "ENTRY_11277e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11277e50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RReportFileLoaderCB);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11277e60; body size 96 bytes.
#line 1 "ENTRY_11277e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11277e60(undefined4 *param_1)

{
  param_1[1] = (undefined4)((uint)&ghidra_vftable_RReportEventInterface);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RReportManager);
  param_1[1] = (undefined4)((uint)&ghidra_vftable_RReportManager);
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[3] = (undefined4)(0x78);
  param_1[4] = (undefined4)(0);
  param_1[0x46] = (undefined4)(0);
  param_1[0x47] = (undefined4)(0);
  *(undefined2 *)(param_1 + 0x48) = 0;
  param_1[0x51] = (undefined4)(0);
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x95) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11277ee0; body size 3 bytes.
#line 1 "ENTRY_11277ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11277ee0(void)

{
  return;
}


// Reference entry 11277ef0; body size 7 bytes.
#line 1 "ENTRY_11277ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11277ef0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RReportFileLoaderCB);
  return;
}


// Reference entry 11277f00; body size 14 bytes.
#line 1 "ENTRY_11277f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11277f00(undefined4 *param_1)

{
  param_1[1] = (undefined4)((uint)&ghidra_vftable_RReportManager);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RReportFileLoaderCB);
  return;
}


// Reference entry 11278280; body size 4 bytes.
#line 1 "ENTRY_11278280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11278280(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 112782a0; body size 4 bytes.
#line 1 "ENTRY_112782a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_112782a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x14);
}


// Reference entry 11278320; body size 7 bytes.
#line 1 "ENTRY_11278320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11278320(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x508));
}


// Reference entry 11278330; body size 4 bytes.
#line 1 "ENTRY_11278330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11278330(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 5);
}


// Reference entry 11278340; body size 4 bytes.
#line 1 "ENTRY_11278340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11278340(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 4);
}


// Reference entry 11278350; body size 7 bytes.
#line 1 "ENTRY_11278350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11278350(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x11c));
}


// Reference entry 11278360; body size 7 bytes.
#line 1 "ENTRY_11278360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11278360(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x95);
}


// Reference entry 11278370; body size 7 bytes.
#line 1 "ENTRY_11278370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11278370(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x106);
}


// Reference entry 11278380; body size 7 bytes.
#line 1 "ENTRY_11278380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11278380(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x106);
}


// Reference entry 112783a0; body size 4 bytes.
#line 1 "ENTRY_112783a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_112783a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 4));
}


// Reference entry 112783c0; body size 166 bytes.
#line 1 "ENTRY_112783c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_112783c0(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [260];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)auStack_110);
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) && (param_4 != 0)) {
    thunk_FUN_1145c720(auStack_108,0x101,"%s.%s.%s",param_1,param_2,param_3);
    thunk_FUN_112781b0(auStack_108,param_4,auStack_110);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 11278550; body size 73 bytes.
#line 1 "ENTRY_11278550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __thiscall Recovered_Bulk::FUN_11278550(int param_2,int param_3)
{
  int param_1 = (int )this;
  char cVar1;
  undefined1 uVar2;
  undefined1 auStack_8 [8];
  
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar2 = (undefined1)(*(undefined1 *)(param_1 + 0x120));
    cVar1 = (char)(thunk_FUN_112781b0(param_2,param_3,auStack_8));
    if (cVar1 != '\0') {
      uVar2 = (undefined1)(auStack_8[0]);
    }
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(uVar2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 112785b0; body size 74 bytes.
#line 1 "ENTRY_112785b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_112785b0(int param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 auStack_8 [4];
  int iStack_4;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    cVar1 = (char)(thunk_FUN_112781b0(param_1,param_2,auStack_8));
    if (cVar1 != '\0') {
      uVar2 = (undefined1)(0);
      if (iStack_4 == 1) {
        uVar2 = (undefined1)(auStack_8[0]);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(uVar2);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11278610; body size 49 bytes.
#line 1 "ENTRY_11278610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_11278610(undefined4 param_2)
{
  int param_1 = (int )this;
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(0);
  if ((*(int *)(param_1 + 0x118) != 0) && (*(char *)(param_1 + 0x120) != '\0')) {
    cVar1 = (char)(thunk_FUN_112755e0(param_2));
    if (cVar1 != '\0') {
      uVar2 = (undefined4)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar2);
}


// Reference entry 112789d0; body size 8 bytes.
#line 1 "ENTRY_112789d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_112789d0(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


// Reference entry 11278a60; body size 10 bytes.
#line 1 "ENTRY_11278a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11278a60(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}


// Reference entry 11278a70; body size 10 bytes.
#line 1 "ENTRY_11278a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11278a70(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}


// Reference entry 11278aa0; body size 29 bytes.
#line 1 "ENTRY_11278aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11278aa0(int param_2)
{
  int param_1 = (int )this;
  if (param_2 != 0) {
    thunk_FUN_1106a8d0(param_1 + 0x14,param_2,0x81);
  }
  return;
}


// Reference entry 11278ad0; body size 10 bytes.
#line 1 "ENTRY_11278ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11278ad0(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1 *)(param_1 + 8) = param_2;
  return;
}


// Reference entry 11278ae0; body size 13 bytes.
#line 1 "ENTRY_11278ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11278ae0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x11c) = param_2;
  return;
}


// Reference entry 11278af0; body size 32 bytes.
#line 1 "ENTRY_11278af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11278af0(int param_2)
{
  int param_1 = (int )this;
  if (param_2 != 0) {
    thunk_FUN_1106a8d0(param_1 + 0x95,param_2,0x81);
  }
  return;
}


// Reference entry 11278d90; body size 25 bytes.
#line 1 "ENTRY_11278d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11278d90(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11278db0; body size 13 bytes.
#line 1 "ENTRY_11278db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11278db0(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11278dc0; body size 19 bytes.
#line 1 "ENTRY_11278dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11278dc0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11278de0; body size 11 bytes.
#line 1 "ENTRY_11278de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11278de0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11278df0; body size 13 bytes.
#line 1 "ENTRY_11278df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11278df0(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_4);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11278e10; body size 43 bytes.
#line 1 "ENTRY_11278e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11278e10(int *param_1,int *param_2)

{
  for (; param_1 != (int *)(param_2); param_1 = param_1 + 1) {
    if (*param_1 != 0) {
      thunk_FUN_1148a50e(*param_1,8);
    }
  }
  return;
}


// Reference entry 11278e50; body size 26 bytes.
#line 1 "ENTRY_11278e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11278e50(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  uVar2 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *puVar1 = (undefined4)(uVar2);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}


// Reference entry 11278e70; body size 26 bytes.
#line 1 "ENTRY_11278e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11278e70(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  uVar2 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *puVar1 = (undefined4)(uVar2);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}


// Reference entry 112790c0; body size 7 bytes.
#line 1 "ENTRY_112790c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_112790c0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 112790d0; body size 5 bytes.
#line 1 "ENTRY_112790d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_112790d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 112790e0; body size 39 bytes.
#line 1 "ENTRY_112790e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112790e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  for (; param_1 != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    uVar1 = (undefined4)(*param_1);
    *param_1 = (undefined4)(0);
    *param_3 = (undefined4)(uVar1);
    param_3 = (undefined4 *)(param_3 + 1);
  }
  return;
}


// Reference entry 11279110; body size 19 bytes.
#line 1 "ENTRY_11279110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11279110(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_3);
  *param_3 = (undefined4)(0);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 11279160; body size 47 bytes.
#line 1 "ENTRY_11279160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11279160(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    uVar2 = (undefined4)(*param_2);
    *param_2 = (undefined4)(0);
    *puVar1 = (undefined4)(uVar2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_11278e90(puVar1,param_2);
  return;
}


// Reference entry 112791a0; body size 15 bytes.
#line 1 "ENTRY_112791a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_112791a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 112791c0; body size 5 bytes.
#line 1 "ENTRY_112791c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_112791c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 112791d0; body size 5 bytes.
#line 1 "ENTRY_112791d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_112791d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 112791e0; body size 5 bytes.
#line 1 "ENTRY_112791e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_112791e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 112791f0; body size 5 bytes.
#line 1 "ENTRY_112791f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_112791f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11279200; body size 37 bytes.
#line 1 "ENTRY_11279200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11279200(undefined4 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(operator_new(8));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = (undefined8)(0);
    *param_1 = (undefined4)(puVar1);
    return;
  }
  *param_1 = (undefined4)(0);
  return;
}


// Reference entry 11279230; body size 5 bytes.
#line 1 "ENTRY_11279230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11279230(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11279240; body size 21 bytes.
#line 1 "ENTRY_11279240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11279240(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11279260; body size 23 bytes.
#line 1 "ENTRY_11279260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11279260(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11279280; body size 3 bytes.
#line 1 "ENTRY_11279280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11279280(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11279290; body size 23 bytes.
#line 1 "ENTRY_11279290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11279290(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 112793b0; body size 9 bytes.
#line 1 "ENTRY_112793b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_112793b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RReportCategoryStore);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 112793c0; body size 43 bytes.
#line 1 "ENTRY_112793c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_112793c0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  for (piVar2 = (int *)((int *)*param_1); (int *)(piVar2) != piVar1; piVar2 = piVar2 + 1) {
    if (*piVar2 != 0) {
      thunk_FUN_1148a50e(*piVar2,8);
    }
  }
  return;
}


// Reference entry 11279550; body size 7 bytes.
#line 1 "ENTRY_11279550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11279550(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 11279560; body size 17 bytes.
#line 1 "ENTRY_11279560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11279560(undefined4 param_1)

{
  thunk_FUN_1148a50e(param_1,8);
  return;
}


// Reference entry 11279680; body size 49 bytes.
#line 1 "ENTRY_11279680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_11279680(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 2);
  if (0x3fffffff - (uVar1 >> 1) < uVar1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0x3fffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 11279760; body size 45 bytes.
#line 1 "ENTRY_11279760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11279760(int *param_1,int *param_2)

{
  for (; param_1 != (int *)(param_2); param_1 = param_1 + 1) {
    if (*param_1 != 0) {
      thunk_FUN_1148a50e(*param_1,8);
    }
  }
  return;
}


// Reference entry 112797a0; body size 3 bytes.
#line 1 "ENTRY_112797a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_112797a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 112797b0; body size 3 bytes.
#line 1 "ENTRY_112797b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_112797b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 112797c0; body size 3 bytes.
#line 1 "ENTRY_112797c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_112797c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 112797d0; body size 3 bytes.
#line 1 "ENTRY_112797d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_112797d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 112797e0; body size 3 bytes.
#line 1 "ENTRY_112797e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_112797e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 112797f0; body size 3 bytes.
#line 1 "ENTRY_112797f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_112797f0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 11279800; body size 6 bytes.
#line 1 "ENTRY_11279800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11279800(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 112798b0; body size 41 bytes.
#line 1 "ENTRY_112798b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_112798b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  for (; param_1 != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    uVar1 = (undefined4)(*param_1);
    *param_1 = (undefined4)(0);
    *param_3 = (undefined4)(uVar1);
    param_3 = (undefined4 *)(param_3 + 1);
  }
  return;
}


// Reference entry 112798f0; body size 41 bytes.
#line 1 "ENTRY_112798f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_112798f0(undefined4 *param_1, undefined4 *param_2, int param_3, unsigned int recovered_unused_stack_0)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)(param_2)) {
    param_3 = (int)(param_3 - (int)param_1);
    do {
      uVar1 = (undefined4)(*param_1);
      *param_1 = (undefined4)(0);
      *(undefined4 *)(param_3 + (int)param_1) = uVar1;
      param_1 = (undefined4 *)(param_1 + 1);
    } while (param_1 != (undefined4 *)(param_2));
  }
  return;
}


// Reference entry 11279930; body size 41 bytes.
#line 1 "ENTRY_11279930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11279930(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)(param_2)) {
    param_3 = (int)(param_3 - (int)param_1);
    do {
      uVar1 = (undefined4)(*param_1);
      *param_1 = (undefined4)(0);
      *(undefined4 *)(param_3 + (int)param_1) = uVar1;
      param_1 = (undefined4 *)(param_1 + 1);
    } while (param_1 != (undefined4 *)(param_2));
  }
  return;
}


// Reference entry 11279ae0; body size 87 bytes.
#line 1 "ENTRY_11279ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_11279ae0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x40000000) {
    param_1 = (uint)(param_1 * 4);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 11279b50; body size 3 bytes.
#line 1 "ENTRY_11279b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11279b50(void)

{
  return;
}


// Reference entry 11279b60; body size 9 bytes.
#line 1 "ENTRY_11279b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11279b60(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 11279bc0; body size 61 bytes.
#line 1 "ENTRY_11279bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11279bc0(int param_1,int param_2)

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


// Reference entry 11279c10; body size 31 bytes.
#line 1 "ENTRY_11279c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_11279c10(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_112b07a0(param_1 + 0x54,param_2));
  if (iVar1 != 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(iVar1 + 8));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11279c40; body size 3 bytes.
#line 1 "ENTRY_11279c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11279c40(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 11279dc0; body size 3 bytes.
#line 1 "ENTRY_11279dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11279dc0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11279e20; body size 6 bytes.
#line 1 "ENTRY_11279e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11279e20(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 11279e30; body size 6 bytes.
#line 1 "ENTRY_11279e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11279e30(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 11279e40; body size 47 bytes.
#line 1 "ENTRY_11279e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11279e40(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    uVar2 = (undefined4)(*param_2);
    *param_2 = (undefined4)(0);
    *puVar1 = (undefined4)(uVar2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_11278e90(puVar1,param_2);
  return;
}


// Reference entry 11279e80; body size 9 bytes.
#line 1 "ENTRY_11279e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11279e80(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 11279f40; body size 6 bytes.
#line 1 "ENTRY_11279f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11279f40(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xd);
}


// Reference entry 11279f50; body size 112 bytes.
#line 1 "ENTRY_11279f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_11279f50(undefined4 *param_2,int param_3)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = (int)(param_3 - (int)param_2 >> 2);
  if (iVar4 < 0xe) {
    if (iVar4 < 1) goto LAB_11279f9d;
  }
  else {
    thunk_FUN_112b0270("chanmapset",4,"Initializer List is too large: %d > %d, truncating to %d",
                       iVar4,0xd,0xd);
    iVar4 = (int)(0xd);
  }
  iVar2 = (int)(0);
  do {
    uVar1 = (undefined4)(*param_2);
    param_2 = (undefined4 *)(param_2 + 1);
    *(undefined4 *)(param_1 + iVar2 * 4) = uVar1;
    iVar2 = (int)(iVar2 + 1);
  } while (iVar2 < iVar4);
LAB_11279f9d:
  if (iVar4 < 0xd) {
    puVar5 = (undefined4 *)((undefined4 *)(iVar4 * 4 + param_1));
    for (uVar3 = (uint)(iVar4 * -4 + 0x34U >> 2); uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = (undefined4)(0xffffffff);
      puVar5 = (undefined4 *)(puVar5 + 1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 1127a190; body size 4 bytes.
#line 1 "ENTRY_1127a190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1127a190(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x14));
}


// Reference entry 1127a1a0; body size 3 bytes.
#line 1 "ENTRY_1127a1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1127a1a0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 1127a350; body size 106 bytes.
#line 1 "ENTRY_1127a350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_1127a350(undefined1 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined *puVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar4 = (undefined4)(0);
  uVar5 = (uint)(0);
  *param_2 = (undefined1)(0);
  do {
    uVar1 = (uint)(*(uint *)(param_1 + uVar5 * 4));
    if (uVar1 != 0xffffffff) {
      if (uVar1 < 0x12) {
        puVar2 = (undefined *)((&PTR_DAT_12120e30)[uVar1]);
      }
      else {
        puVar2 = (undefined *)((undefined *)0x0);
      }
      puVar3 = (undefined2 *)(&DAT_118850bc);
      if (uVar5 == 0) {
        puVar3 = (undefined2 *)((undefined2 *)&DAT_1186d2ee);
      }
      uVar4 = (undefined4)(thunk_FUN_11460230(param_2,uVar4,param_3,&DAT_1188e99c,puVar3,puVar2));
    }
    uVar5 = (uint)(uVar5 + 1);
  } while (uVar5 < 0xd);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar4);
}


// Reference entry 1127a3e0; body size 21 bytes.
#line 1 "ENTRY_1127a3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_1127a3e0(uint param_2)
{
  int param_1 = (int )this;
  if (param_2 < 0xd) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + param_2 * 4));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffffff);
}


// Reference entry 1127a420; body size 57 bytes.
#line 1 "ENTRY_1127a420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_1127a420(undefined4 param_2)
{
  int param_1 = (int )this;
  char cVar1;
  int iStack_4;
  
  iStack_4 = (int)(0);
  cVar1 = (char)(thunk_FUN_1127a2b0(param_2,&iStack_4));
  if (cVar1 != '\0') {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iStack_4 * 0x50 + 8 + param_1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
}


// Reference entry 1127a6f0; body size 19 bytes.
#line 1 "ENTRY_1127a6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_1127a6f0(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(0);
  do {
    if (*(uint *)(param_1 + uVar1 * 4) != uVar1) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1 & 0xffffff00);
    }
    uVar1 = (uint)(uVar1 + 1);
  } while (uVar1 < 0xd);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)(1)));
}


// Reference entry 1127a710; body size 44 bytes.
#line 1 "ENTRY_1127a710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_1127a710(int param_2)
{
  int *param_1 = (int *)this;
  uint3 uVar1;
  uint uVar2;
  
  uVar2 = (uint)(0);
  param_2 = (int)(param_2 - (int)param_1);
  do {
    uVar1 = (uint3)((uint3)((uint)*param_1 >> 8));
    if (*param_1 != *(int *)(param_2 + (int)param_1)) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((uint)uVar1 << 8);
    }
    uVar2 = (uint)(uVar2 + 1);
    param_1 = (int *)(param_1 + 1);
  } while (uVar2 < 0xd);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(((uint)(uVar1) << 8 | (uint)(1)));
}


// Reference entry 1127a7d0; body size 239 bytes.
#line 1 "ENTRY_1127a7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1127a7d0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int aiStack_a18 [2];
  uint uStack_a10;
  undefined1 auStack_a0c [1284];
  int iStack_508;
  undefined1 auStack_480 [1148];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)aiStack_a18);
  thunk_FUN_1127a020();
  thunk_FUN_1127a020();
  cVar1 = (char)(thunk_FUN_1127b390(param_1));
  if (cVar1 != '\0') {
    cVar1 = (char)(thunk_FUN_1127b390(param_2));
    if (((cVar1 != '\0') && (iStack_508 == 2)) && (1 < uStack_a10)) {
      cVar1 = (char)(thunk_FUN_1127a090(auStack_a0c));
      if (cVar1 != '\0') {
        cVar1 = (char)(thunk_FUN_1127a2b0(auStack_480,aiStack_a18));
        if (cVar1 != '\0') {
          cVar1 = (char)(thunk_FUN_1127a090(auStack_a0c + aiStack_a18[0] * 0x50));
          if (cVar1 != '\0') {
            thunk_FUN_1148ac28();
            return;
          }
        }
      }
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1127a900; body size 26 bytes.
#line 1 "ENTRY_1127a900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_1127a900(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(0);
  while ((iVar1 = *(int *)(param_1 + uVar2 * 4), iVar1 != 0 && (iVar1 != 1))) {
    uVar2 = (uint)(uVar2 + 1);
    if (0xc < uVar2) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar2 & 0xffffff00);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((int3)(uVar2 >> 8)) << 8 | (uint)(1)));
}


// Reference entry 1127adc0; body size 41 bytes.
#line 1 "ENTRY_1127adc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1127adc0(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = (char *)(param_1);
  do {
    pcVar2 = (char *)(pcVar1);
    pcVar1 = (char *)(pcVar2 + 1);
  } while (*pcVar2 != '\0');
  thunk_FUN_1127ac70(param_1,pcVar2);
  return;
}


// Reference entry 1127ae00; body size 92 bytes.
#line 1 "ENTRY_1127ae00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_1127ae00(void *param_2,int param_3)
{
  int param_1 = (int )this;
  char cVar1;
  void *pvVar2;
  
  pvVar2 = (void *)(memchr(param_2,0x3a,param_3 - (int)param_2));
  if ((pvVar2 != (void *)0x0) && ((int)pvVar2 - (int)param_2 == 0x18)) {
    thunk_FUN_1145c250(param_1 + 0x34,param_2,0x19);
    cVar1 = (char)(thunk_FUN_1127ac70((int)pvVar2 + 1,param_3));
    if (cVar1 != '\0') {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 1127aff0; body size 50 bytes.
#line 1 "ENTRY_1127aff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_1127aff0(undefined4 *param_2,int param_3)
{
  undefined1 *param_1 = (undefined1 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = (undefined4)(param_2[1]);
  uVar2 = (undefined4)(param_2[2]);
  uVar3 = (undefined4)(param_2[3]);
  *(undefined4 *)(param_1 + param_3 * 0x50 + 8) = *param_2;
  *(undefined4 *)(param_1 + param_3 * 0x50 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + param_3 * 0x50 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + param_3 * 0x50 + 0x14) = uVar3;
  uVar1 = (undefined4)(param_2[5]);
  uVar2 = (undefined4)(param_2[6]);
  uVar3 = (undefined4)(param_2[7]);
  *(undefined4 *)(param_1 + param_3 * 0x50 + 0x18) = param_2[4];
  *(undefined4 *)(param_1 + param_3 * 0x50 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + param_3 * 0x50 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + param_3 * 0x50 + 0x24) = uVar3;
  uVar1 = (undefined4)(param_2[9]);
  uVar2 = (undefined4)(param_2[10]);
  uVar3 = (undefined4)(param_2[0xb]);
  *(undefined4 *)(param_1 + param_3 * 0x50 + 0x28) = param_2[8];
  *(undefined4 *)(param_1 + param_3 * 0x50 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + param_3 * 0x50 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + param_3 * 0x50 + 0x34) = uVar3;
  uVar1 = (undefined4)(param_2[0xc]);
  *(undefined4 *)(param_1 + param_3 * 0x50 + 0x38) = uVar1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(((uint)((int3)((uint)uVar1 >> 8)) << 8 | (uint)(*param_1)));
}


// Reference entry 1127b5f0; body size 277 bytes.
#line 1 "ENTRY_1127b5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1127b5f0(undefined4 param_2,undefined4 param_3)
{
  undefined1 *param_1 = (undefined1 *)this;
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_a14 [4];
  uint uStack_a10;
  undefined4 auStack_a0c [321];
  uint uStack_508;
  undefined1 auStack_504 [1280];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)auStack_a14);
  thunk_FUN_1127a020();
  thunk_FUN_1127a020();
  *param_1 = (undefined1)(0);
  *(undefined4 *)(param_1 + 4) = 0;
  cVar6 = (char)(thunk_FUN_1127b390(param_2));
  if (((cVar6 != '\0') && (cVar6 = thunk_FUN_1127b390(param_3), cVar6 != '\0')) &&
     (uVar7 = 0, uStack_a10 != 0)) {
    iVar8 = (int)(0);
    do {
      if (uStack_508 <= uVar7) break;
      cVar6 = (char)(thunk_FUN_1127a090(auStack_504 + iVar8));
      if (cVar6 == '\0') break;
      uVar2 = (uint)(*(uint *)(param_1 + 4));
      if (uVar2 < 0x10) {
        uVar3 = (undefined4)(*(undefined4 *)((int)auStack_a0c + iVar8 + 4));
        uVar4 = (undefined4)(*(undefined4 *)((int)auStack_a0c + iVar8 + 8));
        uVar5 = (undefined4)(*(undefined4 *)((int)auStack_a0c + iVar8 + 0xc));
        puVar1 = (undefined4 *)((undefined4 *)(param_1 + uVar2 * 0x50 + 8));
        *puVar1 = (undefined4)(*(undefined4 *)((int)auStack_a0c + iVar8));
        puVar1[1] = (undefined4)(uVar3);
        puVar1[2] = (undefined4)(uVar4);
        puVar1[3] = (undefined4)(uVar5);
        uVar3 = (undefined4)(*(undefined4 *)((int)auStack_a0c + iVar8 + 0x14));
        uVar4 = (undefined4)(*(undefined4 *)((int)auStack_a0c + iVar8 + 0x18));
        uVar5 = (undefined4)(*(undefined4 *)((int)auStack_a0c + iVar8 + 0x1c));
        puVar1 = (undefined4 *)((undefined4 *)(param_1 + uVar2 * 0x50 + 0x18));
        *puVar1 = (undefined4)(*(undefined4 *)((int)auStack_a0c + iVar8 + 0x10));
        puVar1[1] = (undefined4)(uVar3);
        puVar1[2] = (undefined4)(uVar4);
        puVar1[3] = (undefined4)(uVar5);
        uVar3 = (undefined4)(*(undefined4 *)((int)auStack_a0c + iVar8 + 0x24));
        uVar4 = (undefined4)(*(undefined4 *)((int)auStack_a0c + iVar8 + 0x28));
        uVar5 = (undefined4)(*(undefined4 *)((int)auStack_a0c + iVar8 + 0x2c));
        puVar1 = (undefined4 *)((undefined4 *)(param_1 + uVar2 * 0x50 + 0x28));
        *puVar1 = (undefined4)(*(undefined4 *)((int)auStack_a0c + iVar8 + 0x20));
        puVar1[1] = (undefined4)(uVar3);
        puVar1[2] = (undefined4)(uVar4);
        puVar1[3] = (undefined4)(uVar5);
        uVar3 = (undefined4)(*(undefined4 *)((int)auStack_a0c + iVar8 + 0x34));
        uVar4 = (undefined4)(*(undefined4 *)((int)auStack_a0c + iVar8 + 0x38));
        uVar5 = (undefined4)(*(undefined4 *)((int)auStack_a0c + iVar8 + 0x3c));
        puVar1 = (undefined4 *)((undefined4 *)(param_1 + uVar2 * 0x50 + 0x38));
        *puVar1 = (undefined4)(*(undefined4 *)((int)auStack_a0c + iVar8 + 0x30));
        puVar1[1] = (undefined4)(uVar3);
        puVar1[2] = (undefined4)(uVar4);
        puVar1[3] = (undefined4)(uVar5);
        uVar3 = (undefined4)(*(undefined4 *)((int)auStack_a0c + iVar8 + 0x44));
        uVar4 = (undefined4)(*(undefined4 *)((int)auStack_a0c + iVar8 + 0x48));
        uVar5 = (undefined4)(*(undefined4 *)((int)auStack_a0c + iVar8 + 0x4c));
        puVar1 = (undefined4 *)((undefined4 *)(param_1 + uVar2 * 0x50 + 0x48));
        *puVar1 = (undefined4)(*(undefined4 *)((int)auStack_a0c + iVar8 + 0x40));
        puVar1[1] = (undefined4)(uVar3);
        puVar1[2] = (undefined4)(uVar4);
        puVar1[3] = (undefined4)(uVar5);
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
        *param_1 = (undefined1)(1 < *(uint *)(param_1 + 4));
      }
      uVar7 = (uint)(uVar7 + 1);
      iVar8 = (int)(iVar8 + 0x50);
    } while (uVar7 < uStack_a10);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1127b750; body size 234 bytes.
#line 1 "ENTRY_1127b750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1127b750(undefined4 param_2,undefined4 param_3)
{
  undefined1 *param_1 = (undefined1 *)this;
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined1 auStack_50c [4];
  uint uStack_508;
  undefined1 auStack_504 [80];
  undefined4 auStack_4b4 [300];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)auStack_50c);
  thunk_FUN_1127a020();
  *param_1 = (undefined1)(0);
  *(undefined4 *)(param_1 + 4) = 0;
  cVar6 = (char)(thunk_FUN_1127b390(param_2));
  if (((cVar6 == '\0') || (cVar6 = thunk_FUN_1127b390(param_3), cVar6 == '\0')) ||
     (cVar6 = thunk_FUN_1127a090(auStack_504), cVar6 == '\0')) {
    *param_1 = (undefined1)(0);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else if (1 < uStack_508) {
    puVar7 = (undefined4 *)(auStack_4b4);
    iVar8 = (int)(uStack_508 - 1);
    do {
      uVar2 = (uint)(*(uint *)(param_1 + 4));
      if (uVar2 < 0x10) {
        uVar3 = (undefined4)(puVar7[1]);
        uVar4 = (undefined4)(puVar7[2]);
        uVar5 = (undefined4)(puVar7[3]);
        puVar1 = (undefined4 *)((undefined4 *)(param_1 + uVar2 * 0x50 + 8));
        *puVar1 = (undefined4)(*puVar7);
        puVar1[1] = (undefined4)(uVar3);
        puVar1[2] = (undefined4)(uVar4);
        puVar1[3] = (undefined4)(uVar5);
        uVar3 = (undefined4)(puVar7[5]);
        uVar4 = (undefined4)(puVar7[6]);
        uVar5 = (undefined4)(puVar7[7]);
        puVar1 = (undefined4 *)((undefined4 *)(param_1 + uVar2 * 0x50 + 0x18));
        *puVar1 = (undefined4)(puVar7[4]);
        puVar1[1] = (undefined4)(uVar3);
        puVar1[2] = (undefined4)(uVar4);
        puVar1[3] = (undefined4)(uVar5);
        uVar3 = (undefined4)(puVar7[9]);
        uVar4 = (undefined4)(puVar7[10]);
        uVar5 = (undefined4)(puVar7[0xb]);
        puVar1 = (undefined4 *)((undefined4 *)(param_1 + uVar2 * 0x50 + 0x28));
        *puVar1 = (undefined4)(puVar7[8]);
        puVar1[1] = (undefined4)(uVar3);
        puVar1[2] = (undefined4)(uVar4);
        puVar1[3] = (undefined4)(uVar5);
        uVar3 = (undefined4)(puVar7[0xd]);
        uVar4 = (undefined4)(puVar7[0xe]);
        uVar5 = (undefined4)(puVar7[0xf]);
        puVar1 = (undefined4 *)((undefined4 *)(param_1 + uVar2 * 0x50 + 0x38));
        *puVar1 = (undefined4)(puVar7[0xc]);
        puVar1[1] = (undefined4)(uVar3);
        puVar1[2] = (undefined4)(uVar4);
        puVar1[3] = (undefined4)(uVar5);
        uVar3 = (undefined4)(puVar7[0x11]);
        uVar4 = (undefined4)(puVar7[0x12]);
        uVar5 = (undefined4)(puVar7[0x13]);
        puVar1 = (undefined4 *)((undefined4 *)(param_1 + uVar2 * 0x50 + 0x48));
        *puVar1 = (undefined4)(puVar7[0x10]);
        puVar1[1] = (undefined4)(uVar3);
        puVar1[2] = (undefined4)(uVar4);
        puVar1[3] = (undefined4)(uVar5);
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
        *param_1 = (undefined1)(1 < *(uint *)(param_1 + 4));
      }
      puVar7 = (undefined4 *)(puVar7 + 0x14);
      iVar8 = (int)(iVar8 + -1);
    } while (iVar8 != 0);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1127b8c0; body size 9 bytes.
#line 1 "ENTRY_1127b8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1127b8c0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 1127b9b0; body size 68 bytes.
#line 1 "ENTRY_1127b9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_1127b9b0(int *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  bool bVar2;
  
  if (param_2 == (int *)0x0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(false);
  }
  thunk_FUN_11274a70(param_1 + 0x34);
  (**(code **)(*param_2 + 4))(&DAT_11884554,1);
  cVar1 = (char)(thunk_FUN_1127bac0(param_2));
  bVar2 = (bool)(false);
  if (cVar1 != '\0') {
    bVar2 = (bool)((char)param_2[5] == '\0');
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(bVar2);
}


// Reference entry 1127bba0; body size 5 bytes.
#line 1 "ENTRY_1127bba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1127bba0(char *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  (**(code **)(*param_1 + 4))(param_2,(int)pcVar2 - (int)(param_2 + 1));
  return;
}


// Reference entry 1127bea0; body size 5 bytes.
#line 1 "ENTRY_1127bea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1127bea0(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


// Reference entry 1127bf40; body size 28 bytes.
#line 1 "ENTRY_1127bf40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __thiscall Recovered_Bulk::FUN_1127bf40(uint param_2)
{
  char *param_1 = (char *)this;
  if ((*param_1 != '\0') && (param_2 < *(uint *)(param_1 + 4))) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)(param_1 + param_2 * 0x50 + 8);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)((char *)0x0);
}


// Reference entry 1127bf80; body size 98 bytes.
#line 1 "ENTRY_1127bf80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_1127bf80(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uStack_4;
  
  uVar2 = (uint)(0);
  uStack_4 = (uint)(0);
  uVar3 = (uint)(0);
  do {
    uVar4 = (uint)(0);
    iVar5 = (int)(0);
    if (*(int *)(param_1 + 4) != 0) {
      do {
        thunk_FUN_1127a400(uVar4);
        cVar1 = (char)(thunk_FUN_1127a280(uVar3));
        uVar2 = (uint)(uStack_4);
        if ((cVar1 != '\0') && (iVar5 = iVar5 + 1, iVar5 == 1)) {
          if (-1 < (int)uVar4) {
            uStack_4 = (uint)(uStack_4 | 1 << (uVar3 & 0x1f));
            uVar2 = (uint)(uStack_4);
          }
          break;
        }
        uVar4 = (uint)(uVar4 + 1);
      } while (uVar4 < *(uint *)(param_1 + 4));
    }
    uVar3 = (uint)(uVar3 + 1);
    if (0x11 < uVar3) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar2);
    }
  } while( true );
}


// Reference entry 1127c000; body size 51 bytes.
#line 1 "ENTRY_1127c000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __stdcall FUN_1127c000(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)(0);
  iVar2 = (int)(func_0x1001afaf(param_1));
  if (iVar2 != 0) {
    uVar3 = (uint)(0);
    do {
      cVar1 = (char)(thunk_FUN_1127a280(uVar3));
      if (cVar1 != '\0') {
        uVar4 = (uint)(uVar4 | 1 << (uVar3 & 0x1f));
      }
      uVar3 = (uint)(uVar3 + 1);
    } while (uVar3 < 0x12);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar4);
}


// Reference entry 1127c040; body size 16 bytes.
#line 1 "ENTRY_1127c040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1127c040(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  thunk_FUN_1127a510(*(int *)(param_1 + 4) + -1);
  return;
}


// Reference entry 1127c060; body size 62 bytes.
#line 1 "ENTRY_1127c060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_1127c060(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)(0);
  iVar3 = (int)(0);
  if (*(int *)(param_1 + 4) != 0) {
    do {
      thunk_FUN_1127a400(uVar2);
      cVar1 = (char)(thunk_FUN_1127a280(0));
      if ((cVar1 != '\0') && (iVar3 = iVar3 + 1, iVar3 == 1)) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar2);
      }
      uVar2 = (uint)(uVar2 + 1);
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0xffffffff);
}


// Reference entry 1127c0b0; body size 62 bytes.
#line 1 "ENTRY_1127c0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_1127c0b0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)(0);
  iVar3 = (int)(0);
  if (*(int *)(param_1 + 4) != 0) {
    do {
      thunk_FUN_1127a400(uVar2);
      cVar1 = (char)(thunk_FUN_1127a280(4));
      if ((cVar1 != '\0') && (iVar3 = iVar3 + 1, iVar3 == 1)) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar2);
      }
      uVar2 = (uint)(uVar2 + 1);
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0xffffffff);
}


// Reference entry 1127c250; body size 22 bytes.
#line 1 "ENTRY_1127c250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1127c250(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (uint)(*(int *)(param_1 + 0x508) + 1);
  if (uVar1 < *(uint *)(param_1 + 4)) {
    uVar2 = (undefined4)(thunk_FUN_1127a510(uVar1));
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 1127c370; body size 50 bytes.
#line 1 "ENTRY_1127c370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1127c370(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)(0);
  iVar3 = (int)(0);
  if (*(int *)(param_1 + 4) != 0) {
    do {
      thunk_FUN_1127a400(uVar2);
      cVar1 = (char)(thunk_FUN_1127a280(3));
      if (cVar1 != '\0') {
        iVar3 = (int)(iVar3 + 1);
      }
      uVar2 = (uint)(uVar2 + 1);
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar3);
}


// Reference entry 1127c550; body size 62 bytes.
#line 1 "ENTRY_1127c550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_1127c550(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)(0);
  iVar3 = (int)(0);
  if (*(int *)(param_1 + 4) != 0) {
    do {
      thunk_FUN_1127a400(uVar2);
      cVar1 = (char)(thunk_FUN_1127a280(1));
      if ((cVar1 != '\0') && (iVar3 = iVar3 + 1, iVar3 == 1)) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar2);
      }
      uVar2 = (uint)(uVar2 + 1);
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0xffffffff);
}


// Reference entry 1127c5a0; body size 62 bytes.
#line 1 "ENTRY_1127c5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_1127c5a0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)(0);
  iVar3 = (int)(0);
  if (*(int *)(param_1 + 4) != 0) {
    do {
      thunk_FUN_1127a400(uVar2);
      cVar1 = (char)(thunk_FUN_1127a280(5));
      if ((cVar1 != '\0') && (iVar3 = iVar3 + 1, iVar3 == 1)) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar2);
      }
      uVar2 = (uint)(uVar2 + 1);
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0xffffffff);
}


// Reference entry 1127c710; body size 132 bytes.
#line 1 "ENTRY_1127c710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1127c710(int param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  
  bVar2 = (bool)(false);
  uVar4 = (uint)(0);
  bVar1 = (bool)(false);
  if (*(int *)(param_1 + 4) != 0) {
    do {
      thunk_FUN_1127a400(uVar4);
      cVar3 = (char)(thunk_FUN_1127a280(0));
      if ((cVar3 != '\0') && (uVar4 != *(uint *)(param_1 + 0x508))) {
        bVar2 = (bool)(true);
      }
      cVar3 = (char)(thunk_FUN_1127a280(1));
      if ((cVar3 != '\0') && (uVar4 != *(uint *)(param_1 + 0x508))) {
        bVar1 = (bool)(true);
      }
      if ((bVar2) && (bVar1)) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
      }
      uVar4 = (uint)(uVar4 + 1);
    } while (uVar4 < *(uint *)(param_1 + 4));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 1127c820; body size 118 bytes.
#line 1 "ENTRY_1127c820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_1127c820(int param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint in_EAX;
  uint uVar4;
  uint uVar5;
  
  uVar4 = (uint)(in_EAX & 0xffffff00);
  bVar2 = (bool)(false);
  uVar5 = (uint)(0);
  bVar1 = (bool)(false);
  if (*(int *)(param_1 + 4) != 0) {
    do {
      thunk_FUN_1127a400(uVar5);
      cVar3 = (char)(thunk_FUN_1127a280(4));
      if (cVar3 != '\0') {
        bVar2 = (bool)(true);
      }
      uVar4 = (uint)(0);
      cVar3 = (char)(thunk_FUN_1127a280(5));
      if (cVar3 != '\0') {
        bVar1 = (bool)(true);
      }
      if ((bVar2) && (bVar1)) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(1);
      }
      uVar5 = (uint)(uVar5 + 1);
    } while (uVar5 < *(uint *)(param_1 + 4));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar4);
}


// Reference entry 1127c8c0; body size 66 bytes.
#line 1 "ENTRY_1127c8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1127c8c0(int param_1)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  
  if (*(uint *)(param_1 + 4) < 2) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  }
  uVar2 = (uint)(0);
  while( true ) {
    piVar1 = (int *)((int *)thunk_FUN_1127a400(uVar2));
    if (*piVar1 == 0) {
      bVar3 = (bool)(piVar1[1] == 1);
    }
    else {
      if (*piVar1 != 1) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
      }
      bVar3 = (bool)(piVar1[1] == 0);
    }
    if (!bVar3) break;
    uVar2 = (uint)(uVar2 + 1);
    if (*(uint *)(param_1 + 4) <= uVar2) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 1127cb10; body size 21 bytes.
#line 1 "ENTRY_1127cb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1127cb10(int param_1)

{
  thunk_FUN_1127a400(*(undefined4 *)(param_1 + 0x508));
  thunk_FUN_1127a280(3);
  return;
}


// Reference entry 1127cc50; body size 31 bytes.
#line 1 "ENTRY_1127cc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_1127cc50(uint param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (param_2 < *(uint *)(param_1 + 4)) {
    func_0x1008e90f(param_3,param_2);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 1127cd30; body size 23 bytes.
#line 1 "ENTRY_1127cd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1127cd30(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("HORIZONTAL");
  case 1:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("VERTICAL_ABOVE");
  case 2:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("VERTICAL_BELOW");
  case 3:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("VERTICAL_TAG_LEFT");
  case 4:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("VERTICAL_TAG_RIGHT");
  case 5:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("HORIZONTAL_WALL_MOUNTED");
  case 6:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("HORIZONTAL_LEFT");
  case 7:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("HORIZONTAL_RIGHT");
  case 8:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("VERTICAL_WALL_MOUNTED");
  case 9:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("VERTICAL_WALL_LEFT");
  case 10:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("VERTICAL_WALL_RIGHT");
  case 0xb:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("FACEDOWN");
  case 0xc:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("INVERTED");
  case 0xd:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("INVALID");
  case 0xffffffff:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("UNDEFINED");
  default:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("UNSUPPORTED");
  }
}


// Reference entry 1127d010; body size 47 bytes.
#line 1 "ENTRY_1127d010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1127d010(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  *(undefined1 *)((int)param_1 + 0x84b) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 0x49) = 0;
  param_1[0x223] = (undefined4)(0);
  *(undefined1 *)((int)param_1 + 0x44a) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1127d090; body size 46 bytes.
#line 1 "ENTRY_1127d090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1127d090(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_1125b7a0(param_1,0x7c,LAB_10032394,LAB_10041673);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpdateItemParser);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1127d0d0; body size 9 bytes.
#line 1 "ENTRY_1127d0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1127d0d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpdateItemParserCallback);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1127d0e0; body size 70 bytes.
#line 1 "ENTRY_1127d0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1127d0e0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpdateItemXmlParserCB);
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = (undefined4)(0);
  *(undefined1 *)(param_2 + 8) = 0;
  *(undefined1 *)(param_2 + 0x49) = 0;
  *(undefined4 *)(param_2 + 0x88c) = 0;
  *(undefined1 *)(param_2 + 0x44a) = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined1 *)(param_2 + 0x84b) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1127d1f0; body size 33 bytes.
#line 1 "ENTRY_1127d1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1127d1f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpdateItemsXmlParserCB);
  *(undefined1 *)(param_1 + 2) = 0;
  *param_2 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1127d230; body size 7 bytes.
#line 1 "ENTRY_1127d230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1127d230(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpdateItemParserCallback);
  return;
}


// Reference entry 1127d760; body size 3 bytes.
#line 1 "ENTRY_1127d760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1127d760(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 1127d770; body size 3 bytes.
#line 1 "ENTRY_1127d770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1127d770(void)

{
  return;
}


// Reference entry 1127d980; body size 38 bytes.
#line 1 "ENTRY_1127d980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * __fastcall FUN_1127d980(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  if (iVar1 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("");
  }
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)((char *)0x0);
    }
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("RadioList");
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("Software");
}


// Reference entry 1127d9b0; body size 4 bytes.
#line 1 "ENTRY_1127d9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1127d9b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 8));
}


// Reference entry 1127d9c0; body size 4 bytes.
#line 1 "ENTRY_1127d9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1127d9c0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 8));
}


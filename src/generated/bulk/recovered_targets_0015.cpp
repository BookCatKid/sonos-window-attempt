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
extern int FUN_10065348(...);
extern int FUN_10070892(...);
extern int FUN_1116f660(...);
extern int FUN_111ac200(...);
extern int FUN_111acdd0(...);
extern int FUN_111adbe0(...);
extern int FUN_111af250(...);
extern int FUN_111af570(...);
extern __declspec(dllimport) int _CxxThrowException(...);
extern __declspec(dllimport) int _Xlength_error(...);
extern __declspec(dllimport) int __std_exception_destroy(...);
extern __declspec(dllimport) int __stdio_common_vfprintf(...);
extern __declspec(dllimport) int __stdio_common_vsprintf(...);
extern int _eh_vector_constructor_iterator_(...);
extern int _eh_vector_destructor_iterator_(...);
extern __declspec(dllimport) int _finite(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int _isnan(...);
extern __declspec(dllimport) int _strdup(...);
extern __declspec(dllimport) int _time64(...);
extern __declspec(dllimport) int atoi(...);
extern int browse(...);
extern int d(...);
extern int find(...);
extern int func_0x1001456f(...);
extern int func_0x10019baf(...);
extern int func_0x100319ee(...);
extern int func_0x100392ac(...);
extern int func_0x10045142(...);
extern int func_0x10047ea6(...);
extern int func_0x100553bc(...);
extern int func_0x1005b4e7(...);
extern int func_0x1005edae(...);
extern int func_0x10060406(...);
extern int func_0x100628e6(...);
extern int func_0x1006774c(...);
extern int func_0x10070f4a(...);
extern int func_0x10072a48(...);
extern int func_0x10087362(...);
extern int func_0x1008c65f(...);
extern int func_0x100905a2(...);
extern int func_0x1009078c(...);
extern int func_0x100937b1(...);
extern int func_0x100975aa(...);
extern int func_0x11199650(...);
extern int func_0x111abd80(...);
extern __declspec(dllimport) int iscntrl(...);
extern __declspec(dllimport) int isdigit(...);
extern __declspec(dllimport) int isspace(...);
extern __declspec(dllimport) int memmove(...);
extern int operator_new(...);
extern int s(...);
extern __declspec(dllimport) int strchr(...);
extern __declspec(dllimport) int strncmp(...);
extern int thunk_FUN_10118c40(...);
extern int thunk_FUN_1011bdc0(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_1012d130(...);
extern int thunk_FUN_101a6c80(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101ba530(...);
extern int thunk_FUN_101c3fc0(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_102a2fd0(...);
extern int thunk_FUN_102bce30(...);
extern int thunk_FUN_104086f0(...);
extern int thunk_FUN_1051d480(...);
extern int thunk_FUN_10c66110(...);
extern int thunk_FUN_11069bc0(...);
extern int thunk_FUN_1106a250(...);
extern int thunk_FUN_1106a270(...);
extern int thunk_FUN_1106a8d0(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_1109ac00(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_110a1280(...);
extern int thunk_FUN_110adba0(...);
extern int thunk_FUN_110ae540(...);
extern int thunk_FUN_110aeb40(...);
extern int thunk_FUN_110b13d0(...);
extern int thunk_FUN_110b19f0(...);
extern int thunk_FUN_110b48e0(...);
extern int thunk_FUN_110b56c0(...);
extern int thunk_FUN_110cb840(...);
extern int thunk_FUN_110e83d0(...);
extern int thunk_FUN_111401c0(...);
extern int thunk_FUN_11140420(...);
extern int thunk_FUN_1114a810(...);
extern int thunk_FUN_1115cfe0(...);
extern int thunk_FUN_1115d440(...);
extern int thunk_FUN_11160050(...);
extern int thunk_FUN_11160980(...);
extern int thunk_FUN_11161e50(...);
extern int thunk_FUN_11161ed0(...);
extern int thunk_FUN_11169d70(...);
extern int thunk_FUN_1116a470(...);
extern int thunk_FUN_11170100(...);
extern int thunk_FUN_111705c0(...);
extern int thunk_FUN_11170d50(...);
extern int thunk_FUN_11171150(...);
extern int thunk_FUN_11172590(...);
extern int thunk_FUN_111747c0(...);
extern int thunk_FUN_11174dd0(...);
extern int thunk_FUN_111750d0(...);
extern int thunk_FUN_111780a0(...);
extern int thunk_FUN_11178a60(...);
extern int thunk_FUN_11178c10(...);
extern int thunk_FUN_11178dc0(...);
extern int thunk_FUN_1117b9b0(...);
extern int thunk_FUN_1117bea0(...);
extern int thunk_FUN_1117f820(...);
extern int thunk_FUN_11184c40(...);
extern int thunk_FUN_11184c70(...);
extern int thunk_FUN_111886c0(...);
extern int thunk_FUN_1119c480(...);
extern int thunk_FUN_1119d3b0(...);
extern int thunk_FUN_111a0940(...);
extern int thunk_FUN_111a1220(...);
extern int thunk_FUN_111a2bd0(...);
extern int thunk_FUN_111a2cf0(...);
extern int thunk_FUN_111a2df0(...);
extern int thunk_FUN_111a2ec0(...);
extern int thunk_FUN_111a32a0(...);
extern int thunk_FUN_111a3630(...);
extern int thunk_FUN_111a36f0(...);
extern int thunk_FUN_111a4bc0(...);
extern int thunk_FUN_111a4d30(...);
extern int thunk_FUN_111a4f00(...);
extern int thunk_FUN_111a5a20(...);
extern int thunk_FUN_111a5f10(...);
extern int thunk_FUN_111a6f10(...);
extern int thunk_FUN_111a7100(...);
extern int thunk_FUN_111a74d0(...);
extern int thunk_FUN_111a7d40(...);
extern int thunk_FUN_111a7f80(...);
extern int thunk_FUN_111a86c0(...);
extern int thunk_FUN_111a8920(...);
extern int thunk_FUN_111a8930(...);
extern int thunk_FUN_111aaf90(...);
extern int thunk_FUN_111ab150(...);
extern int thunk_FUN_111bd390(...);
extern int thunk_FUN_111bdc10(...);
extern int thunk_FUN_111bf100(...);
extern int thunk_FUN_111c0760(...);
extern int thunk_FUN_111c32e0(...);
extern int thunk_FUN_111c3ae0(...);
extern int thunk_FUN_111c3d40(...);
extern int thunk_FUN_111c5fc0(...);
extern int thunk_FUN_111c6450(...);
extern int thunk_FUN_111c7b30(...);
extern int thunk_FUN_111c7c50(...);
extern int thunk_FUN_111c7e10(...);
extern int thunk_FUN_111c7eb0(...);
extern int thunk_FUN_111c7f50(...);
extern int thunk_FUN_111c9080(...);
extern int thunk_FUN_111c93e0(...);
extern int thunk_FUN_111c9460(...);
extern int thunk_FUN_111c94e0(...);
extern int thunk_FUN_111ca460(...);
extern int thunk_FUN_111ca9f0(...);
extern int thunk_FUN_111d0010(...);
extern int thunk_FUN_111d0130(...);
extern int thunk_FUN_111d2fc0(...);
extern int thunk_FUN_111d34c0(...);
extern int thunk_FUN_111d35e0(...);
extern int thunk_FUN_111d7620(...);
extern int thunk_FUN_111da060(...);
extern int thunk_FUN_111da770(...);
extern int thunk_FUN_111db390(...);
extern int thunk_FUN_111dbec0(...);
extern int thunk_FUN_111dc0c0(...);
extern int thunk_FUN_111dd660(...);
extern int thunk_FUN_111e5150(...);
extern int thunk_FUN_111e7a30(...);
extern int thunk_FUN_111e7cb0(...);
extern int thunk_FUN_111e7df0(...);
extern int thunk_FUN_111e86b0(...);
extern int thunk_FUN_111eb4e0(...);
extern int thunk_FUN_111f0050(...);
extern int thunk_FUN_111f4d20(...);
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
extern int thunk_FUN_11203a80(...);
extern int thunk_FUN_11203e10(...);
extern int thunk_FUN_11207ab0(...);
extern int thunk_FUN_112084f0(...);
extern int thunk_FUN_1122af30(...);
extern int thunk_FUN_1122e2b0(...);
extern int thunk_FUN_11230380(...);
extern int thunk_FUN_11230ea0(...);
extern int thunk_FUN_11232e50(...);
extern int thunk_FUN_112332a0(...);
extern int thunk_FUN_11234290(...);
extern int thunk_FUN_11234340(...);
extern int thunk_FUN_11234420(...);
extern int thunk_FUN_112366e0(...);
extern int thunk_FUN_112372f0(...);
extern int thunk_FUN_112378c0(...);
extern int thunk_FUN_11237dd0(...);
extern int thunk_FUN_11238060(...);
extern int thunk_FUN_11238320(...);
extern int thunk_FUN_1123a890(...);
extern int thunk_FUN_1123bf80(...);
extern int thunk_FUN_1123ec00(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11240560(...);
extern int thunk_FUN_11240650(...);
extern int thunk_FUN_112407b0(...);
extern int thunk_FUN_112408cb(...);
extern int thunk_FUN_11240e60(...);
extern int thunk_FUN_11241fb0(...);
extern int thunk_FUN_112437d0(...);
extern int thunk_FUN_11243860(...);
extern int thunk_FUN_11244840(...);
extern int thunk_FUN_11247d40(...);
extern int thunk_FUN_11247e90(...);
extern int thunk_FUN_11249110(...);
extern int thunk_FUN_11249fe0(...);
extern int thunk_FUN_1124a090(...);
extern int thunk_FUN_1124a380(...);
extern int thunk_FUN_1124a3a0(...);
extern int thunk_FUN_1124a3f0(...);
extern int thunk_FUN_1124a5e0(...);
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
extern int thunk_FUN_1124f350(...);
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
extern int thunk_FUN_1125acd0(...);
extern int thunk_FUN_1125b6a0(...);
extern int thunk_FUN_1125b810(...);
extern int thunk_FUN_11261e50(...);
extern int thunk_FUN_11261f10(...);
extern int thunk_FUN_11262240(...);
extern int thunk_FUN_11262fc0(...);
extern int thunk_FUN_11265090(...);
extern int thunk_FUN_11274120(...);
extern int thunk_FUN_112741c0(...);
extern int thunk_FUN_112747a0(...);
extern int thunk_FUN_11274880(...);
extern int thunk_FUN_11281ab0(...);
extern int thunk_FUN_11283280(...);
extern int thunk_FUN_11285a10(...);
extern int thunk_FUN_11285a90(...);
extern int thunk_FUN_11285d80(...);
extern int thunk_FUN_11286490(...);
extern int thunk_FUN_112869b0(...);
extern int thunk_FUN_11287ab0(...);
extern int thunk_FUN_1128f070(...);
extern int thunk_FUN_1128f080(...);
extern int thunk_FUN_1128f090(...);
extern int thunk_FUN_1128f0e0(...);
extern int thunk_FUN_1128f0f0(...);
extern int thunk_FUN_1128f100(...);
extern int thunk_FUN_1128f150(...);
extern int thunk_FUN_1128f1a0(...);
extern int thunk_FUN_1128f1f0(...);
extern int thunk_FUN_1128f240(...);
extern int thunk_FUN_11293e20(...);
extern int thunk_FUN_112996f0(...);
extern int thunk_FUN_112a7b70(...);
extern int thunk_FUN_112a7ca0(...);
extern int thunk_FUN_112a7ea0(...);
extern int thunk_FUN_112a7f20(...);
extern int thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_112a9cf0(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_112b0270(...);
extern int thunk_FUN_112b5970(...);
extern int thunk_FUN_112c8b80(...);
extern int thunk_FUN_112c8c00(...);
extern int thunk_FUN_112c8cb0(...);
extern int thunk_FUN_112ea860(...);
extern int thunk_FUN_113b9f60(...);
extern int thunk_FUN_113bf660(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_113d15c0(...);
extern int thunk_FUN_113d1d90(...);
extern int thunk_FUN_113daf30(...);
extern int thunk_FUN_1145a960(...);
extern int thunk_FUN_1145abd0(...);
extern int thunk_FUN_1145ad70(...);
extern int thunk_FUN_1145c250(...);
extern int thunk_FUN_1145c720(...);
extern int thunk_FUN_1145c930(...);
extern int thunk_FUN_1145d640(...);
extern int thunk_FUN_1145e260(...);
extern int thunk_FUN_1145eb60(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148b586(...);
extern int timeout(...);
extern int u(...);
extern int DAT_1186d2ee;
extern int DAT_1187b440;
extern int DAT_1187b694;
extern int DAT_1187d828;
extern int DAT_11880fb0;
extern int DAT_11881ac8;
extern int DAT_11882ff0;
extern int DAT_11884554;
extern int DAT_118850bc;
extern int DAT_118872c0;
extern int DAT_11889d24;
extern int DAT_1188a1d4;
extern int DAT_1188bc94;
extern int DAT_118947c0;
extern int DAT_11895278;
extern int DAT_1189f4a8;
extern int DAT_118a1550;
extern int DAT_118bb268;
extern int DAT_118c8074;
extern int DAT_118c9974;
extern int DAT_119caf48;
extern int DAT_119cea34;
extern int DAT_119d00b0;
extern int DAT_119d25d0;
extern int DAT_119d5cb0;
extern int DAT_119d7cb0;
extern int DAT_119d7e24;
extern int DAT_119da770;
extern int DAT_119da77c;
extern int DAT_119dc9cc;
extern int DAT_11d330dc;
extern int DAT_1211fcf8;
extern int DAT_12126b84;
extern int DAT_122e8b78;
extern int DAT_122e8cf8;
extern int DAT_122e8d30;
extern int DAT_122e8d34;
extern int DAT_122e8d38;
extern int DAT_122f1250;
extern int DAT_122f55e4;
extern int DAT_122f5600;
extern int DAT_122f564c;
extern int UNK_10009a07;
extern int UNK_1000ca45;
extern int UNK_1001167b;
extern int UNK_1006ada2;
extern int UNK_1008f657;
extern int UNK_1009a890;
extern int UNK_119cdf64;
extern int UNK_119d0548;
extern int UNK_119d0648;
extern int UNK_119d458c;
extern int UNK_1205cea8;
extern int _UNK_118a1554;
extern int ghidra_vftable_AVTransportClient;
extern int ghidra_vftable_AlarmClockClient;
extern int ghidra_vftable_AudioInClient;
extern int ghidra_vftable_ConnectionManagerClient;
extern int ghidra_vftable_ContentDirectoryClient;
extern int ghidra_vftable_DevicePropertiesClient;
extern int ghidra_vftable_GroupManagementClient;
extern int ghidra_vftable_GroupRenderingControlClient;
extern int ghidra_vftable_HTControlClient;
extern int ghidra_vftable_MediaReceiverRegistrarClient;
extern int ghidra_vftable_MusicServicesDirectoryClient;
extern int ghidra_vftable_QueueClient;
extern int ghidra_vftable_RAsyncGETIOOperation;
extern int ghidra_vftable_RBrowseContentProviderWithCD;
extern int ghidra_vftable_RCDAlbumArtCallback;
extern int ghidra_vftable_RCDAlbumIdCallback;
extern int ghidra_vftable_RCDClient;
extern int ghidra_vftable_RCDMimeTypeCallback;
extern int ghidra_vftable_RCDStationInfoCallback;
extern int ghidra_vftable_RCDTitleCallback;
extern int ghidra_vftable_RCDUpdateProcessor;
extern int ghidra_vftable_RCPSonosGenericOperation;
extern int ghidra_vftable_RCPValidateOperation;
extern int ghidra_vftable_RClient;
extern int ghidra_vftable_RContentKeyParam;
extern int ghidra_vftable_RContentKeysParam;
extern int ghidra_vftable_RContentProvider;
extern int ghidra_vftable_RControlAIOOp;
extern int ghidra_vftable_RControlAIOOpImpl;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_RDateTime;
extern int ghidra_vftable_RHTTPDataIO;
extern int ghidra_vftable_RHouseholdListenerBase;
extern int ghidra_vftable_RHttpHeadersParam;
extern int ghidra_vftable_RLFMGetSessionCB;
extern int ghidra_vftable_RLastFMClient;
extern int ghidra_vftable_RLastFMContentProvider;
extern int ghidra_vftable_RMSQuickSkip;
extern int ghidra_vftable_RNotifyBodyParser;
extern int ghidra_vftable_RPresentationMapLoader;
extern int ghidra_vftable_RPresentationMapParser;
extern int ghidra_vftable_RRTFXmlWriter;
extern int ghidra_vftable_RRateItemAsyncOp;
extern int ghidra_vftable_RRestoreOneAVTStateAIOOp;
extern int ghidra_vftable_RSCPBrowseContainerCallback;
extern int ghidra_vftable_RSCPPropNameTranslator;
extern int ghidra_vftable_RSCPSearchContainerCallback;
extern int ghidra_vftable_RSOAPFaultHandler;
extern int ghidra_vftable_RSearchContentProviderWithCD;
extern int ghidra_vftable_RSocketTxn;
extern int ghidra_vftable_RSonosCPFaultHandler;
extern int ghidra_vftable_RSonosContentProviderImpl;
extern int ghidra_vftable_RSonosContentProviderMediaSessions;
extern int ghidra_vftable_RSonosGetUserIdOp;
extern int ghidra_vftable_RSonosParamRX;
extern int ghidra_vftable_RSonosRateItemOp;
extern int ghidra_vftable_RSonosRelatedInfoParam;
extern int ghidra_vftable_RSonosRelatedPlayParam;
extern int ghidra_vftable_RSonosSegmentMetadataParam;
extern int ghidra_vftable_RSonosUserInfoParam;
extern int ghidra_vftable_RSubmitUsageMetrics;
extern int ghidra_vftable_RSubscriptionRenewal;
extern int ghidra_vftable_RSvcContentProvider;
extern int ghidra_vftable_RSystemTime;
extern int ghidra_vftable_RTrackMetaDataObjCB;
extern int ghidra_vftable_RTrackPositionCallback;
extern int ghidra_vftable_RTrackRatingsModel;
extern int ghidra_vftable_RUpnpAVTGetCrossfadeModeAIOOp;
extern int ghidra_vftable_RUpnpAVTGetTransportInfoAIOOp;
extern int ghidra_vftable_RUpnpAVTGetTransportSettingsAIOOp;
extern int ghidra_vftable_RUpnpAsyncIOOperation;
extern int ghidra_vftable_RUpnpCDRequestResortAIOOp;
extern int ghidra_vftable_RUpnpZGTReportUnresponsiveDeviceAIOOp;
extern int ghidra_vftable_RXMLParserBase;
extern int ghidra_vftable_RXMLRPCFaultResultCB;
extern int ghidra_vftable_RXMLRPCResultParser;
extern int ghidra_vftable_RenderingControlClient;
extern int ghidra_vftable_SwfObjArrayIter;
extern int ghidra_vftable_SwfObjDP;
extern int ghidra_vftable_SwfObjHouseholdListenerProxy;
extern int ghidra_vftable_SwfObjRC;
extern int ghidra_vftable_SwfObjString;
extern int ghidra_vftable_SwfObjSymbolTableIter;
extern int ghidra_vftable_SwfObjUpnpService;
extern int ghidra_vftable_SwfUpnpEventHandler;
extern int ghidra_vftable_SystemPropertiesClient;
extern int ghidra_vftable_VirtualLineInClient;
extern int ghidra_vftable_ZPConnRec;
extern int ghidra_vftable_ZoneGroupTopologyClient;
extern int ghidra_vftable_nonstd_expected_lite_bad_expected_access;
extern int ghidra_vftable_nonstd_variants_bad_variant_access;
extern int ghidra_vftable_std_exception;
extern int in_EAX;
extern int uRam00000000;
extern int uStack_1;
extern int uStack_108;
extern int uStack_10c;
extern int uStack_110;
extern int uStack_118;
extern int uStack_1194;
extern int uStack_1198;
extern int uStack_11d38;
extern int uStack_11db;
extern int uStack_11f4;
extern int uStack_120ec;
extern int uStack_12398;
extern int uStack_124;
extern int uStack_12d;
extern int uStack_134;
extern int uStack_13c0;
extern int uStack_13e2;
extern int uStack_1423;
extern int uStack_1440;
extern int uStack_1444;
extern int uStack_1487;
extern int uStack_14a0;
extern int uStack_14c0;
extern int uStack_14c4;
extern int uStack_1507;
extern int uStack_1520;
extern int uStack_1524;
extern int uStack_15dd4;
extern int uStack_15de8;
extern int uStack_15dec;
extern int uStack_15df4;
extern int uStack_15dfc;
extern int uStack_15e00;
extern int uStack_15e04;
extern int uStack_15e08;
extern int uStack_15e0c;
extern int uStack_18;
extern int uStack_19f7;
extern int uStack_1ca3;
extern int uStack_1d23;
extern int uStack_2;
extern int uStack_21f8;
extern int uStack_2218;
extern int uStack_221c;
extern int uStack_24a4;
extern int uStack_24c4;
extern int uStack_24c8;
extern int uStack_2524;
extern int uStack_2544;
extern int uStack_2548;
extern int uStack_296a;
extern int uStack_3340;
extern int uStack_3344;
extern int uStack_3387;
extern int uStack_33a0;
extern int uStack_3ba3;
extern int uStack_3dd4;
extern int uStack_4;
extern int uStack_4080;
extern int uStack_4100;
extern int uStack_42c;
extern int uStack_43a4;
extern int uStack_43c4;
extern int uStack_43c8;
extern int uStack_4a;
extern int uStack_4d30;
extern int uStack_4d3c;
extern int uStack_4d40;
extern int uStack_4d44;
extern int uStack_4d48;
extern int uStack_4d4c;
extern int uStack_4d50;
extern int uStack_4d54;
extern int uStack_4d58;
extern int uStack_4d5c;
extern int uStack_55f8;
extern int uStack_598c;
extern int uStack_5c38;
extern int uStack_5cb8;
extern int uStack_5ce4;
extern int uStack_5ce8;
extern int uStack_5cec;
extern int uStack_5cf0;
extern int uStack_5cf4;
extern int uStack_6c;
extern int uStack_73f0;
extern int uStack_77a4;
extern int uStack_7a50;
extern int uStack_8;
extern int uStack_8c;
extern int uStack_964e;
extern int uStack_a;
extern int uStack_b0;
extern int uStack_b48c;
extern int uStack_c;
extern undefined1 LAB_1000b0f5[];
extern undefined1 LAB_1001d089[];
extern undefined1 LAB_10029f1e[];
extern undefined1 LAB_1003a0c1[];
extern undefined1 LAB_10050d62[];
extern undefined1 LAB_100689f3[];
extern undefined1 LAB_100730c4[];
extern undefined1 LAB_10075388[];
extern undefined1 LAB_1007f71b[];
extern undefined1 LAB_1008bb79[];
extern undefined1 LAB_1009234d[];
extern undefined1 LAB_1009926a[];
extern undefined1 LAB_1116039a[];
extern undefined1 LAB_11160529[];
extern undefined1 LAB_1118f650[];
extern undefined1 LAB_1118f655[];
extern undefined1 LAB_1118f6f0[];
extern undefined1 LAB_1118f6f5[];
extern undefined1 LAB_1118f9e0[];
extern undefined1 LAB_1118f9e5[];
extern undefined1 LAB_1118fa50[];
extern undefined1 LAB_1118fa55[];
extern undefined1 LAB_111901e0[];
extern undefined1 LAB_111901e5[];
extern undefined1 LAB_111905d0[];
extern undefined1 LAB_111905d5[];
extern undefined1 LAB_11199477[];
extern undefined1 LAB_1119947c[];
extern undefined1 LAB_1119d060[];
extern undefined1 LAB_1119d065[];
extern undefined1 LAB_111abc71[];
extern undefined1 LAB_111abdd1[];
extern undefined1 LAB_111ac5ef[];
extern undefined1 LAB_111ae8dc[];
extern undefined1 LAB_111d3547[];
extern undefined1 LAB_111e3d40[];
extern undefined1 LAB_111e3d6a[];
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
extern undefined1 LAB_111f6ef0[];
extern undefined1 LAB_111f6ef5[];
extern undefined1 LAB_111f6f45[];
extern undefined1 LAB_111f6f4a[];
extern undefined1 LAB_111f7c46[];
extern undefined1 LAB_111f7c4b[];
extern undefined1 LAB_111f9190[];
extern undefined1 LAB_111f9195[];
extern undefined1 LAB_111f91f0[];
extern undefined1 LAB_111f91f5[];
extern undefined1 LAB_111f9220[];
extern undefined1 LAB_111f9225[];
extern undefined1 LAB_111f9250[];
extern undefined1 LAB_111f9255[];
extern undefined1 LAB_111f9363[];
extern undefined1 LAB_111f9368[];
extern undefined1 LAB_111f9392[];
extern undefined1 LAB_111f9397[];
extern undefined1 LAB_111f93d1[];
extern undefined1 LAB_111f93d6[];
extern undefined1 LAB_111f9493[];
extern undefined1 LAB_111f9498[];
extern undefined1 LAB_111f94c2[];
extern undefined1 LAB_111f94c7[];
extern undefined1 LAB_111f9500[];
extern undefined1 LAB_111f9505[];
extern undefined1 LAB_111f96f5[];
extern undefined1 LAB_111f96fa[];
extern undefined1 LAB_111f9770[];
extern undefined1 LAB_111f9775[];
extern undefined1 LAB_111f97b0[];
extern undefined1 LAB_111f97b5[];
extern undefined1 LAB_111f9a14[];
extern undefined1 LAB_111f9a19[];
extern undefined1 LAB_111f9a50[];
extern undefined1 LAB_111f9a55[];
extern undefined1 LAB_111f9a87[];
extern undefined1 LAB_111f9a8c[];
extern undefined1 LAB_111f9ad1[];
extern undefined1 LAB_111f9ad6[];
extern undefined1 LAB_111f9b17[];
extern undefined1 LAB_111f9b1c[];
extern undefined1 LAB_111f9ce4[];
extern undefined1 LAB_111f9d50[];
extern undefined1 LAB_111f9d55[];
extern undefined1 LAB_111fb1a0[];
extern undefined1 LAB_111fb1a5[];
extern undefined1 LAB_111fb1e0[];
extern undefined1 LAB_111fb1e5[];
extern undefined1 LAB_111fb217[];
extern undefined1 LAB_111fb21c[];
extern undefined1 LAB_111fb267[];
extern undefined1 LAB_111fb300[];
extern undefined1 LAB_111fb305[];
extern undefined1 LAB_111fb340[];
extern undefined1 LAB_111fb345[];
extern undefined1 LAB_111fb377[];
extern undefined1 LAB_111fb37c[];
extern undefined1 LAB_111fb3c7[];
extern undefined1 LAB_111fb878[];
extern undefined1 LAB_111fb87d[];
extern undefined1 LAB_111fb8c0[];
extern undefined1 LAB_111fb8c5[];
extern undefined1 LAB_1122e8ed[];
extern undefined1 LAB_11230994[];
extern undefined1 LAB_11230999[];
extern undefined1 LAB_112309d1[];
extern undefined1 LAB_112309d6[];
extern undefined1 LAB_11230af4[];
extern undefined1 LAB_11230af9[];
extern undefined1 LAB_11230b32[];
extern undefined1 LAB_11230b37[];
extern undefined1 LAB_11232bc0[];
extern undefined1 LAB_11232bc5[];
extern undefined1 LAB_11232c55[];
extern undefined1 LAB_11232c5a[];
extern undefined1 LAB_11232c6a[];
extern undefined1 LAB_112339c0[];
extern undefined1 LAB_112339c5[];
extern undefined1 LAB_11233a05[];
extern undefined1 LAB_11233a0a[];
extern undefined1 LAB_11233a36[];
extern undefined1 LAB_11233a3b[];
extern undefined1 LAB_11233aa3[];
extern undefined1 LAB_11233aa8[];
extern undefined1 LAB_11233ae5[];
extern undefined1 LAB_11233aea[];
extern undefined1 LAB_11238566[];
extern undefined1 LAB_112385c0[];
extern undefined1 LAB_1123b485[];
extern undefined1 LAB_1123b48a[];
extern undefined1 LAB_1123b4e7[];
extern undefined1 LAB_1123b4ec[];
extern undefined1 LAB_1123b517[];
extern undefined1 LAB_1123b566[];
extern undefined1 LAB_1123b5f3[];
extern undefined1 LAB_114f5ce0[];
extern undefined1 LAB_117b7210[];
extern undefined1 LAB_117b7775[];
extern undefined1 LAB_117ba5e1[];
extern undefined1 LAB_117bbd5d[];
extern undefined1 LAB_117c4020[];
extern undefined1 LAB_117c4a43[];
extern undefined1 LAB_117c4fdf[];
extern undefined1 LAB_117c59e5[];
extern undefined1 LAB_117c5b34[];
extern undefined1 LAB_117c5bcf[];
extern undefined1 LAB_117c5c64[];
extern undefined1 LAB_117c5cf4[];
extern undefined1 LAB_117c5e54[];
extern undefined1 LAB_117c5efd[];
extern undefined1 LAB_117cc0cd[];
extern undefined1 LAB_117cc668[];
extern undefined1 LAB_117ccfe0[];
extern int *PTR_DAT_12126b6c;
extern int *PTR_s_AddTrackToFavorites_1211fcfc;
extern int *stack0xfffffffc;
extern int *stack0xffffffff;
extern void *ExceptionList;
namespace std { template<class... A> static int _Xlength_error(A...);}
struct RBrowseCacheMgr { char _pad; RBrowseCacheMgr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); template<class... A> static int browse(A...); };
typedef void *AVT;
typedef void *DNS;
typedef void *DTLS;
typedef void *E9;
typedef void *HTTP;
typedef void *HTTP_GONE;
typedef void *HWND;
typedef void *LPARAM;
typedef void *LPCSTR;
typedef void *LPLONG;
typedef void *LPSECURITY_ATTRIBUTES;
typedef void *OOS;
typedef void *RCS;
typedef void *SID;
typedef void *SWF;
typedef void *UNKNOWN;
typedef void *WARNING;
typedef void *_Memory;
typedef void *_Str;
typedef void *_func_void_void_ptr;
struct AVTransport { char _pad; AVTransport(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Alarm { char _pad; Alarm(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Alarms { char _pad; Alarms(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct CachedState { char _pad; CachedState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Children { char _pad; Children(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct CloseHandle { char _pad; CloseHandle(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Content { char _pad; Content(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct CreateSemaphoreA { char _pad; CreateSemaphoreA(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct DebugUndefinedVars { char _pad; DebugUndefinedVars(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Defaulting { char _pad; Defaulting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Do { char _pad; Do(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Event { char _pad; Event(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct FlashTraceBrowse { char _pad; FlashTraceBrowse(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Function { char _pad; Function(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct GetCrossfadeMode { char _pad; GetCrossfadeMode(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct GetSessionId { char _pad; GetSessionId(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct GetTransportInfo { char _pad; GetTransportInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct GetTransportSettings { char _pad; GetTransportSettings(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Globals { char _pad; Globals(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct HeadphoneConnected { char _pad; HeadphoneConnected(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct InstanceID { char _pad; InstanceID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct LastChange { char _pad; LastChange(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Length { char _pad; Length(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Master { char _pad; Master(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct MediaServer { char _pad; MediaServer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct MediaServers { char _pad; MediaServers(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct MusicServices { char _pad; MusicServices(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Mute { char _pad; Mute(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Node { char _pad; Node(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Null { char _pad; Null(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct OAuth { char _pad; OAuth(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct On { char _pad; On(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Ordinal_14 { char _pad; Ordinal_14(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct OutputFixed { char _pad; OutputFixed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct PostMessageA { char _pad; PostMessageA(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct QuarantinedDevices { char _pad; QuarantinedDevices(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Queue { char _pad; Queue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct QueueID { char _pad; QueueID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Received { char _pad; Received(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct ReleaseSemaphore { char _pad; ReleaseSemaphore(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct ReportUnresponsiveDevice { char _pad; ReportUnresponsiveDevice(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct RequestResort { char _pad; RequestResort(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Sanity { char _pad; Sanity(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Satellite { char _pad; Satellite(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Service { char _pad; Service(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Services { char _pad; Services(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Sleep { char _pad; Sleep(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct String { char _pad; String(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SwfObjHouseholdListenerProxy { char _pad; SwfObjHouseholdListenerProxy(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct ThrowInfo { char _pad; ThrowInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Type { char _pad; Type(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct UNK_10009a07 { char _pad; UNK_10009a07(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct UNK_1000ca45 { char _pad; UNK_1000ca45(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct UNK_1001167b { char _pad; UNK_1001167b(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct UNK_1006ada2 { char _pad; UNK_1006ada2(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct UNK_1008f657 { char _pad; UNK_1008f657(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct UNK_1009a890 { char _pad; UNK_1009a890(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct UNK_119cdf64 { char _pad; UNK_119cdf64(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct UNK_119d0548 { char _pad; UNK_119d0548(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct UNK_119d0648 { char _pad; UNK_119d0648(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct UNK_119d458c { char _pad; UNK_119d458c(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct UNK_1205cea8 { char _pad; UNK_1205cea8(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct UPnP { char _pad; UPnP(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Unable { char _pad; Unable(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Unexpected { char _pad; Unexpected(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct VanishedDevices { char _pad; VanishedDevices(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Volume { char _pad; Volume(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct WSAEventSelect { char _pad; WSAEventSelect(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct ZoneGroup { char _pad; ZoneGroup(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct ZoneGroupMember { char _pad; ZoneGroupMember(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct ZoneGroupTopology { char _pad; ZoneGroupTopology(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Recovered_Bulk { char _pad; /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1115e390(int *param_2,int param_3); template<class... A> int FUN_1115e390(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_1115e6a0(uint param_2); template<class... A> int FUN_1115e6a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1115e8a0(undefined4 *param_2,int param_3); template<class... A> int FUN_1115e8a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11160020(int param_2); template<class... A> int FUN_11160020(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111608e0(uint param_2); template<class... A> int FUN_111608e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111619a0(undefined1 *param_2); template<class... A> int FUN_111619a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11166110(undefined4 *param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_11166110(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11169460(undefined4 param_2,char param_3); template<class... A> int FUN_11169460(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11169490(undefined4 param_2,char param_3); template<class... A> int FUN_11169490(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111694d0(undefined4 param_2,char param_3); template<class... A> int FUN_111694d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11169520(undefined4 param_2,char param_3); template<class... A> int FUN_11169520(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111695b0(undefined4 param_2,char param_3); template<class... A> int FUN_111695b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111695f0(undefined4 param_2,char param_3); template<class... A> int FUN_111695f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_111699d0(undefined4 param_2,int *param_3); template<class... A> int FUN_111699d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_11169b90(undefined4 *param_2); template<class... A> int FUN_11169b90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1116ac30(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int FUN_1116ac30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1116ade0(char *param_2); template<class... A> int FUN_1116ade0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1116bcc0(int *param_2,int param_3); template<class... A> int FUN_1116bcc0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1116c030(uint param_2,int param_3,int *param_4); template<class... A> int FUN_1116c030(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1116e5e0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int FUN_1116e5e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1116f620(int param_2); template<class... A> int FUN_1116f620(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1116fa20(undefined4 param_2,int *param_3); template<class... A> int FUN_1116fa20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1116fe90(undefined4 *param_2); template<class... A> int FUN_1116fe90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111710f0(undefined4 param_2); template<class... A> int FUN_111710f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_11171c70(int *param_2); template<class... A> int FUN_11171c70(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_11173150(uint param_2); template<class... A> int FUN_11173150(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11173950(undefined4 *param_2); template<class... A> int FUN_11173950(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11173990(undefined4 *param_2); template<class... A> int FUN_11173990(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_11174090(undefined4 param_2); template<class... A> int FUN_11174090(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11174d40(undefined4 *param_2); template<class... A> int FUN_11174d40(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11175420(undefined4 param_2,undefined4 param_3,undefined4 *param_4); template<class... A> int FUN_11175420(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11175570(undefined4 param_2); template<class... A> int FUN_11175570(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_11175ec0(int param_2); template<class... A> int FUN_11175ec0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_11175f00(int param_2); template<class... A> int FUN_11175f00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __thiscall FUN_111760e0(undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,int param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10); template<class... A> int FUN_111760e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11177140(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_11177140(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_11177d00(undefined4 param_2,int *param_3); template<class... A> int FUN_11177d00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_11177d50(undefined4 param_2,int *param_3); template<class... A> int FUN_11177d50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_11177da0(undefined4 param_2,int *param_3); template<class... A> int FUN_11177da0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11177e10(undefined4 param_2,undefined4 *param_3); template<class... A> int FUN_11177e10(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_11177f40(undefined4 *param_2); template<class... A> int FUN_11177f40(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_11177f90(undefined4 *param_2); template<class... A> int FUN_11177f90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_11177fe0(undefined4 *param_2); template<class... A> int FUN_11177fe0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11178050(undefined4 *param_2); template<class... A> int FUN_11178050(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11178690(undefined4 param_2); template<class... A> int FUN_11178690(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111786b0(int *param_2); template<class... A> int FUN_111786b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11178820(int *param_2); template<class... A> int FUN_11178820(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11178950(undefined4 param_2); template<class... A> int FUN_11178950(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11178970(int *param_2); template<class... A> int FUN_11178970(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1117d690(undefined4 *param_2); template<class... A> int FUN_1117d690(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1117d6c0(undefined4 *param_2); template<class... A> int FUN_1117d6c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1117d6f0(undefined4 param_2); template<class... A> int FUN_1117d6f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1117dfc0(int *param_2); template<class... A> int FUN_1117dfc0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1117e9c0(undefined4 *param_2); template<class... A> int FUN_1117e9c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1117ec20(undefined4 param_2); template<class... A> int FUN_1117ec20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1117ec90(int *param_2); template<class... A> int FUN_1117ec90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1117f7a0(undefined4 *param_2); template<class... A> int FUN_1117f7a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1117f970(undefined4 param_2,char *param_3); template<class... A> int FUN_1117f970(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11180d30(undefined4 *param_2); template<class... A> int FUN_11180d30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11180d60(undefined4 *param_2); template<class... A> int FUN_11180d60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11180d90(undefined4 *param_2); template<class... A> int FUN_11180d90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_11181d70(byte param_2); template<class... A> int FUN_11181d70(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11182580(int param_2); template<class... A> int FUN_11182580(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_111825b0(uint param_2); template<class... A> int FUN_111825b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_111825f0(uint param_2); template<class... A> int FUN_111825f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_11182630(uint param_2); template<class... A> int FUN_11182630(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_11182680(uint param_2); template<class... A> int FUN_11182680(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_111826c0(uint param_2); template<class... A> int FUN_111826c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11182a50(uint param_2); template<class... A> int FUN_11182a50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_11188820(uint param_2); template<class... A> int FUN_11188820(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11189950(int param_2); template<class... A> int FUN_11189950(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1118b480(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_1118b480(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_1118b4d0(int param_2); template<class... A> int FUN_1118b4d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1118c610(undefined4 *param_2); template<class... A> int FUN_1118c610(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1118c640(undefined4 *param_2); template<class... A> int FUN_1118c640(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1118c670(undefined4 param_2); template<class... A> int FUN_1118c670(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1118c820(int *param_2); template<class... A> int FUN_1118c820(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1118cbb0(int *param_2); template<class... A> int FUN_1118cbb0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1118d1c0(int *param_2); template<class... A> int FUN_1118d1c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1118d1d0(int *param_2); template<class... A> int FUN_1118d1d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1118d2c0(undefined4 param_2,undefined4 *param_3); template<class... A> int FUN_1118d2c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1118d430(undefined4 *param_2); template<class... A> int FUN_1118d430(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1118d550(int *param_2,uint *param_3); template<class... A> int FUN_1118d550(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_1118f9b0(int param_2); template<class... A> int FUN_1118f9b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_1118fa20(int param_2); template<class... A> int FUN_1118fa20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_1118fa90(int param_2); template<class... A> int FUN_1118fa90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_1118fcb0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_1118fcb0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_1118fcf0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_1118fcf0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_1118fe20(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_1118fe20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_111905a0(int param_2); template<class... A> int FUN_111905a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11190a20(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_11190a20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11190f90(undefined4 param_2,undefined4 param_3,undefined4 *param_4); template<class... A> int FUN_11190f90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11191050(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_11191050(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11192ed0(undefined4 param_2); template<class... A> int FUN_11192ed0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_11192f60(int *param_2); template<class... A> int FUN_11192f60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11193af0(undefined4 param_2,undefined4 param_3,undefined4 *param_4); template<class... A> int FUN_11193af0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11194140(undefined4 param_2); template<class... A> int FUN_11194140(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11194f00(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_11194f00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111951f0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int FUN_111951f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111952a0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int FUN_111952a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11195360(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int FUN_11195360(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11197ca0(undefined4 param_2,char *param_3); template<class... A> int FUN_11197ca0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_111995e0(uint param_2,undefined1 *param_3,int param_4); template<class... A> int FUN_111995e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1119be40(undefined4 param_2); template<class... A> int FUN_1119be40(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1119be60(undefined4 param_2); template<class... A> int FUN_1119be60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1119ff50(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_1119ff50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111a13b0(int param_2,char param_3); template<class... A> int FUN_111a13b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_111a1680(undefined4 *param_2); template<class... A> int FUN_111a1680(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_111a17f0(void *param_2,size_t param_3); template<class... A> int FUN_111a17f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111a1f90(undefined4 param_2); template<class... A> int FUN_111a1f90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111a2000(char *param_2); template<class... A> int FUN_111a2000(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_111a2780(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_111a2780(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111a4320(int param_2); template<class... A> int FUN_111a4320(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111a4dd0(undefined4 *param_2); template<class... A> int FUN_111a4dd0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111a65a0(undefined4 param_2,int param_3); template<class... A> int FUN_111a65a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111a7f00(uint param_2,undefined4 param_3); template<class... A> int FUN_111a7f00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111a8190(undefined4 *param_2); template<class... A> int FUN_111a8190(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111a8320(undefined4 param_2); template<class... A> int FUN_111a8320(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111a84f0(int *param_2,int param_3); template<class... A> int FUN_111a84f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111a8510(int *param_2,int param_3); template<class... A> int FUN_111a8510(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_111a8680(uint param_2); template<class... A> int FUN_111a8680(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111a8750(int *param_2,int param_3); template<class... A> int FUN_111a8750(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111a8e30(undefined4 *param_2,void *param_3,void *param_4); template<class... A> int FUN_111a8e30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_111a9d50(undefined4 param_2,undefined4 param_3,undefined4 *param_4); template<class... A> int FUN_111a9d50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_111a9dc0(undefined4 param_2,undefined4 param_3,undefined4 *param_4); template<class... A> int FUN_111a9dc0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111ab0a0(undefined4 *param_2); template<class... A> int FUN_111ab0a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111ab0d0(uint param_2); template<class... A> int FUN_111ab0d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111bcf80(undefined4 param_2); template<class... A> int FUN_111bcf80(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111bcfa0(undefined4 param_2); template<class... A> int FUN_111bcfa0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_111beaf0(int param_2); template<class... A> int FUN_111beaf0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111c0550(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_111c0550(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall FUN_111c2130(char *param_2,undefined2 *param_3); template<class... A> int FUN_111c2130(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111c22d0(undefined4 *param_2,undefined2 *param_3); template<class... A> int FUN_111c22d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_111c3110(int param_2); template<class... A> int FUN_111c3110(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111c5670(char *param_2,int param_3); template<class... A> int FUN_111c5670(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111c5ed0(int param_2); template<class... A> int FUN_111c5ed0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_111c6d70(undefined4 param_2,undefined4 *param_3); template<class... A> int FUN_111c6d70(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111c6dd0(undefined4 *param_2,undefined4 param_3); template<class... A> int FUN_111c6dd0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_111c72b0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_111c72b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_111c72e0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_111c72e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_111c76a0(undefined4 *param_2); template<class... A> int FUN_111c76a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_111c76d0(undefined4 *param_2); template<class... A> int FUN_111c76d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111c7740(undefined4 *param_2); template<class... A> int FUN_111c7740(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_111c7d70(int *param_2,undefined4 *param_3); template<class... A> int FUN_111c7d70(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111c9560(int *param_2,undefined4 *param_3); template<class... A> int FUN_111c9560(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_111ca2e0(int param_2); template<class... A> int FUN_111ca2e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111ca340(undefined4 *param_2); template<class... A> int FUN_111ca340(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111ca620(undefined1 *param_2,undefined4 param_3); template<class... A> int FUN_111ca620(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111ca660(undefined1 *param_2,undefined4 param_3); template<class... A> int FUN_111ca660(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111ca6a0(undefined1 *param_2,undefined4 param_3); template<class... A> int FUN_111ca6a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111ca6e0(undefined1 *param_2,undefined4 param_3,undefined1 *param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13,undefined4 param_14); template<class... A> int FUN_111ca6e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111ca7d0(undefined1 *param_2,undefined4 param_3); template<class... A> int FUN_111ca7d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111cacf0(undefined4 param_2,undefined4 *param_3,int param_4,
            undefined4 param_5); template<class... A> int FUN_111cacf0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111cad50(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_111cad50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111caeb0(undefined4 param_2,int param_3,undefined4 param_4); template<class... A> int FUN_111caeb0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __thiscall FUN_111caf50(undefined4 param_2); template<class... A> int FUN_111caf50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111cb750(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8,
            undefined4 param_9); template<class... A> int FUN_111cb750(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111cb7b0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6,undefined4 param_7); template<class... A> int FUN_111cb7b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111d10d0(undefined4 param_2,char *param_3,undefined4 param_4); template<class... A> int FUN_111d10d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111d1120(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6); template<class... A> int FUN_111d1120(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111d2320(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_111d2320(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111d2a00(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_111d2a00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111d2d30(undefined1 *param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_111d2d30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111d83e0(int *param_2,int param_3); template<class... A> int FUN_111d83e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_111d9000(uint param_2,int param_3,int *param_4); template<class... A> int FUN_111d9000(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_111d9080(uint param_2,int param_3,int *param_4); template<class... A> int FUN_111d9080(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_111d9100(uint param_2,int param_3,int *param_4); template<class... A> int FUN_111d9100(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111d9ac0(undefined4 *param_2); template<class... A> int FUN_111d9ac0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111d9b00(undefined4 *param_2); template<class... A> int FUN_111d9b00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_111da510(int *param_2); template<class... A> int FUN_111da510(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_111da6e0(int param_2,int *param_3); template<class... A> int FUN_111da6e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111dab00(int param_2); template<class... A> int FUN_111dab00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_111dab30(undefined4 param_2); template<class... A> int FUN_111dab30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_111dab40(undefined4 param_2); template<class... A> int FUN_111dab40(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111dab50(int param_2); template<class... A> int FUN_111dab50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_111db270(undefined4 *param_2); template<class... A> int FUN_111db270(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_111db2c0(undefined4 *param_2); template<class... A> int FUN_111db2c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_111db310(undefined4 *param_2); template<class... A> int FUN_111db310(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111db4d0(undefined4 *param_2); template<class... A> int FUN_111db4d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_111dc3e0(char *param_2,int *param_3); template<class... A> int FUN_111dc3e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_111e01c0(undefined4 *param_2); template<class... A> int FUN_111e01c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111edfc0(int *param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6); template<class... A> int FUN_111edfc0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111eec40(char param_2); template<class... A> int FUN_111eec40(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111eed20(undefined4 param_2); template<class... A> int FUN_111eed20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111ef160(undefined4 param_2,char *param_3,undefined4 *param_4,undefined4 *param_5); template<class... A> int FUN_111ef160(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111ef700(undefined4 param_2,char *param_3,undefined4 *param_4); template<class... A> int FUN_111ef700(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111efc00(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_111efc00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111f0ab0(undefined4 param_2,char *param_3,undefined4 *param_4); template<class... A> int FUN_111f0ab0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111f3300(uint *param_2); template<class... A> int FUN_111f3300(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111f5100(uint param_2); template<class... A> int FUN_111f5100(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111f5120(uint param_2); template<class... A> int FUN_111f5120(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111f5320(undefined4 param_2); template<class... A> int FUN_111f5320(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_111f6fd0(byte *param_2,byte *param_3); template<class... A> int FUN_111f6fd0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ short __thiscall FUN_111f7180(undefined4 param_2); template<class... A> int FUN_111f7180(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111f7700(undefined4 param_2); template<class... A> int FUN_111f7700(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111f7c10(undefined4 *param_2); template<class... A> int FUN_111f7c10(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111f9160(byte *param_2); template<class... A> int FUN_111f9160(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111f91c0(byte *param_2); template<class... A> int FUN_111f91c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111f92c0(void *param_2,size_t param_3); template<class... A> int FUN_111f92c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111f92f0(byte *param_2); template<class... A> int FUN_111f92f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111f9ca0(int param_2); template<class... A> int FUN_111f9ca0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111f9d20(byte *param_2); template<class... A> int FUN_111f9d20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_111fb170(undefined4 param_2,byte *param_3); template<class... A> int FUN_111fb170(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111fbd30(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9); template<class... A> int FUN_111fbd30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111fe3a0(undefined4 param_2); template<class... A> int FUN_111fe3a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111fe440(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_111fe440(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111fe910(undefined4 param_2,undefined4 param_3,undefined1 param_4); template<class... A> int FUN_111fe910(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111fe9d0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_111fe9d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_111fea90(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_111fea90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11202250(char *param_2); template<class... A> int FUN_11202250(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11202520(undefined4 param_2); template<class... A> int FUN_11202520(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11202db0(char *param_2); template<class... A> int FUN_11202db0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_11203ed0(int param_2); template<class... A> int FUN_11203ed0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_112142a0(int param_2,int param_3); template<class... A> int FUN_112142a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_1122a790(undefined4 param_2); template<class... A> int FUN_1122a790(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_1122a7a0(undefined4 param_2); template<class... A> int FUN_1122a7a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1122bd50(int *param_2,int *param_3); template<class... A> int FUN_1122bd50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1122df50(undefined4 param_2); template<class... A> int FUN_1122df50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1122eed0(int *param_2); template<class... A> int FUN_1122eed0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1122fec0(int *param_2); template<class... A> int FUN_1122fec0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11230b70(undefined1 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5); template<class... A> int FUN_11230b70(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11230c30(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9); template<class... A> int FUN_11230c30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11230d20(undefined4 param_2); template<class... A> int FUN_11230d20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint * __thiscall FUN_112329b0(void *param_2,size_t param_3); template<class... A> int FUN_112329b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_112333f0(undefined4 param_2,int param_3); template<class... A> int FUN_112333f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11233970(byte *param_2,undefined4 *param_3); template<class... A> int FUN_11233970(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint * __thiscall FUN_112341d0(char *param_2); template<class... A> int FUN_112341d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112343a0(int param_2,char param_3); template<class... A> int FUN_112343a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11235be0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_11235be0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_11236550(undefined4 param_2); template<class... A> int FUN_11236550(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_11236720(int param_2,int param_3,int *param_4); template<class... A> int FUN_11236720(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_11236c80(int param_2,int param_3,int *param_4); template<class... A> int FUN_11236c80(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_11237130(int param_2,int param_3,int *param_4); template<class... A> int FUN_11237130(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11237fd0(char *param_2); template<class... A> int FUN_11237fd0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __thiscall FUN_112382a0(undefined4 param_2,int param_3); template<class... A> int FUN_112382a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_11239b70(int *param_2); template<class... A> int FUN_11239b70(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1123ad50(undefined4 *param_2,undefined4 param_3); template<class... A> int FUN_1123ad50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1123b0c0(int *param_2,char param_3); template<class... A> int FUN_1123b0c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_1123b200(int param_2); template<class... A> int FUN_1123b200(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1123b2f0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined1 param_6,undefined4 param_7,undefined4 param_8); template<class... A> int FUN_1123b2f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __thiscall FUN_1123b430(byte *param_2,char *param_3,undefined4 param_4,undefined4 param_5); template<class... A> int FUN_1123b430(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11240440(code *param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_11240440(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11240470(undefined4 param_2); template<class... A> int FUN_11240470(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_112408d0(byte param_2); template<class... A> int FUN_112408d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11240b70(undefined4 param_2,char param_3,char param_4); template<class... A> int FUN_11240b70(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11241820(undefined4 *param_2,undefined4 *param_3); template<class... A> int FUN_11241820(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11241a90(undefined4 param_2); template<class... A> int FUN_11241a90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_11241c40(int param_2); template<class... A> int FUN_11241c40(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11243c10(undefined4 *param_2); template<class... A> int FUN_11243c10(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11243eb0(undefined4 param_2,undefined4 *param_3); template<class... A> int FUN_11243eb0(A...); };
using namespace std;
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_1115e870(void *param_1, int param_2, unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1115e870(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_1115f300(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_1115f300(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1115f320(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1115f320(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_1115fee0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_1115fee0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1115ff30(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1115ff30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_11160110(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_11160110(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11160660(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11160660(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111616d0(uint param_1,int param_2,int *param_3,int param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111616d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __fastcall FUN_11163160(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __fastcall FUN_11163160(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_11163eb0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11163eb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111653c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111653c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111653f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111653f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111664e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111664e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11166e30(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11166e30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1116a5a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1116a5a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1116a5d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1116a5d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1116a600(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1116a600(...);
/* WARNING: Removing unreachable block (ram,0x101ba14a) */ void __fastcall FUN_1116ae60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1116b2c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1116b2c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1116bb90(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1116bb90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1116bbb0(float *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1116bbb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1116c520(int param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1116c520(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1116c560(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1116c560(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1116c5d0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1116c5d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1116c770(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1116c770(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1116c800(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1116c800(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1116c850(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1116c850(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1116c8a0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1116c8a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_1116e290(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1116e290(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_1116e2b0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1116e2b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1116e690(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1116e690(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1116f100(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1116f100(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1116f110(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1116f110(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1116f2d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1116f2d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1116f3c0(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1116f3c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1116f950(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1116f950(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1116ff50(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1116ff50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11170f20(undefined4 param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11170f20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111715e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111715e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111718f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111718f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11173260(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11173260(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11173280(float *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11173280(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11173ea0(int param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11173ea0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_11173ef0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_11173ef0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_11173f60(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_11173f60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_11173fd0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_11173fd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111741c0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111741c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11174430(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11174430(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11174480(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11174480(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111744d0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111744d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11175470(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11175470(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111756b0(byte param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111756b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111756e0(byte param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111756e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111761c0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111761c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_111767f0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_111767f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111770b0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111770b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_111771f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111771f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11177220(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11177220(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11177480(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11177480(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11178280(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11178280(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111782a0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111782a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111782c0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111782c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111782e0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111782e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11178300(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11178300(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_111783c0(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_111783c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_111783f0(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_111783f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1117a110(undefined4 param_1,void *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1117a110(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1117a700(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1117a700(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1117a730(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1117a730(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1117a760(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1117a760(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_1117a790(int param_1,uint *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_1117a790(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_1117a7c0(int param_1,uint *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_1117a7c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * FUN_1117ab40(int param_1,int param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * FUN_1117ab40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1117bae0(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1117bae0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1117bc80(int param_1,int param_2,int param_3,undefined4 *param_4,code *param_5);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1117bc80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1117c9c0(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1117c9c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1117c9f0(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1117c9f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1117ced0(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1117ced0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *
FUN_1117cff0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * FUN_1117cff0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1117d010(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1117d010(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1117d030(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1117d030(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1117d520(undefined4 param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1117d520(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1117ddd0(int param_1,int param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1117ddd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1117df90(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1117df90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1117e7e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1117e7e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1117e830(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1117e830(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1117e880(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1117e880(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1117e8d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1117e8d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1117e920(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1117e920(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1117ea40(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1117ea40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1117fe50(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1117fe50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11180230(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11180230(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111823f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111823f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11182420(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11182420(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11182450(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11182450(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11182480(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11182480(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111824b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111824b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111829b0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111829b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111829d0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111829d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111829f0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111829f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11182a10(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11182a10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11182a30(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11182a30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11182ba0(undefined4 *param_1, unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11182ba0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_11184470(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_11184470(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_111844a0(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111844a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11184790(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11184790(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111847c0(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111847c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111849d0(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111849d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11184a00(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11184a00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_11188360(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_11188360(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111883d0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111883d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_11188440(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_11188440(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111884c0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111884c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_11188540(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_11188540(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111885c0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111885c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_11188640(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_11188640(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_11188740(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_11188740(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111887b0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111887b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111894f0(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111894f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11189540(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11189540(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11189590(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11189590(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111895e0(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111895e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11189630(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11189630(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11189680(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11189680(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111896d0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111896d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11189720(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11189720(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11189770(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11189770(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111897c0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111897c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11189810(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11189810(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11189860(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11189860(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_1118c800(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1118c800(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1118d470(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1118d470(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_1118d600(int param_1,uint *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_1118d600(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1118d820(undefined4 param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1118d820(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1118d8a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1118d8a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1118da10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1118da10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1118da60(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1118da60(...);
/* WARNING: Removing unreachable block_1118dcb0 (ram,0x101ba14a) */ void __fastcall FUN_1118dcb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1118dd90(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1118dd90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1118e6f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1118e6f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1118e740(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1118e740(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1118eba0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1118eba0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1118ecf0(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1118ecf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1118ed40(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1118ed40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1118f260(int param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1118f260(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1118f520(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1118f520(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_1118f5c0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_1118f5c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1118f5f0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1118f5f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_1118f620(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_1118f620(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1118f690(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1118f690(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_1118f6c0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_1118f6c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1118f7b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1118f7b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1118f870(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1118f870(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1118f8c0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1118f8c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1118f8f0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1118f8f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1118f920(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1118f920(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_11190180(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_11190180(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_111901b0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_111901b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111903b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111903b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_111904a0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_111904a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11190570(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11190570(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __fastcall FUN_11191900(void *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __fastcall FUN_11191900(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11192e60(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11192e60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11192f30(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11192f30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11192fa0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11192fa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_111937e0(undefined4 param_1, undefined4 *param_2, unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111937e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_11193be0(undefined4 param_1, undefined4 *param_2, unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11193be0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11194120(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11194120(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11194d10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11194d10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11194d40(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11194d40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11194d70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11194d70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11194da0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11194da0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11194dd0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11194dd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11194e00(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11194e00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11194e30(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11194e30(...);
/* WARNING: Removing unreachable block_11195410 (ram,0x101ba14a) */ void __fastcall FUN_11195410(undefined4 *param_1);
/* WARNING: Removing unreachable block_11195460 (ram,0x101ba14a) */ void __fastcall FUN_11195460(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11195680(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11195680(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111956b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111956b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111956e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111956e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11197c60(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11197c60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_11198a20(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11198a20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_11198a40(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11198a40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_11198a60(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11198a60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_11198a80(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11198a80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_11198aa0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11198aa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_11198ac0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11198ac0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_11198ae0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11198ae0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_11198b00(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11198b00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_11198b20(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11198b20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_11198b40(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11198b40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4
FUN_11199390(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11199390(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4
FUN_11199420(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            int param_5,uint param_6);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11199420(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4
FUN_11199510(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11199510(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_111995a0(int param_1,uint param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_111995a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111996e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111996e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11199710(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11199710(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11199900(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11199900(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11199930(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11199930(...);
/* WARNING: Removing unreachable block_11199b00 (ram,0x101ba14a) */ void __fastcall FUN_11199b00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1119ce40(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1119ce40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1119d020(byte *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1119d020(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1119ff30(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1119ff30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111a0420(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111a0420(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111a0430(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111a0430(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111a0440(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111a0440(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111a05a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111a05a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111a05b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111a05b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111a09b0(int *param_1,uint param_2,uint *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111a09b0(...);
/* WARNING: Type propagation algorithm not settling */ void FUN_111a0aa0(char *param_1,char *param_2,undefined4 *param_3);
extern /* WARNING: Type propagation algorithm not settling */ /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111a0aa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111a1610(undefined4 *param_1,int *param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111a1610(...);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ bool FUN_111a2750(undefined8 param_1);
extern /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_111a2750(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111a2820(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111a2820(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111a2850(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111a2850(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __fastcall FUN_111a3650(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __fastcall FUN_111a3650(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111a47c0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111a47c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111a4b70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111a4b70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111a56c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111a56c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111a5720(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111a5720(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111a59b0(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111a59b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111a5f00(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111a5f00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111a73b0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111a73b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111a7ca0(void *param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111a7ca0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_111a7cd0(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_111a7cd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111a7e80(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111a7e80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111a7ea0(void *param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111a7ea0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_111a7ed0(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_111a7ed0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_111a8050(int *param_1,int param_2,int *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_111a8050(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111a80c0(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111a80c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_111a8850(void *param_1, int param_2, unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111a8850(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_111a8880(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111a8880(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111a88b0(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111a88b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111a88e0(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111a88e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111a9320(int param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111a9320(...);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ undefined4 FUN_111a9830(undefined4 param_1,int *param_2);
extern /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111a9830(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111a9a00(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111a9a00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111a9c70(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111a9c70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111a9cc0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111a9cc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_111a9e70(undefined4 *param_1, int param_2, unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111a9e70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_111aa2e0(undefined4 *param_1, undefined4 param_2, unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111aa2e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_111aa410(undefined4 param_1, undefined4 param_2, unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111aa410(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_111ab300(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_111ab300(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111ab3c0(undefined4 *param_1,ushort *param_2,uint *param_3,uint *param_4,int param_5);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111ab3c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111ab6d0(uint *param_1,uint *param_2,undefined4 *param_3,short *param_4,int param_5);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111ab6d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111abbb0(undefined4 *param_1,byte *param_2,int *param_3,uint *param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111abbb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_111abe30(byte *param_1,byte *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_111abe30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111abeb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111abeb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_111abee0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_111abee0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_111ac5b0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_111ac5b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111ac7b0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111ac7b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111ac800(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111ac800(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111ac9d0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111ac9d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_111aca90(int *param_1,undefined4 param_2,uint param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_111aca90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111acd50(int *param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111acd50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111ae830(int *param_1,int param_2,uint param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111ae830(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111ae940(int *param_1,int param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111ae940(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111bb3f0(int param_1,int param_2,short *param_3,int param_4,int param_5);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111bb3f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111bba30(int param_1,int param_2,short *param_3,int param_4,int param_5);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111bba30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111bc820(int param_1,int param_2,int param_3,int param_4,int param_5);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111bc820(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111bd2f0(int param_1,undefined4 param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111bd2f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_111bd5c0(int param_1,void *param_2,uint param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_111bd5c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111be890(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111be890(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111bea80(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111bea80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_111c04c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_111c04c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111c2380(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111c2380(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c2420(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c2420(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c2ab0(undefined4 param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c2ab0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111c2b40(int param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111c2b40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c2bd0(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c2bd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c2ed0(undefined4 *param_1,undefined4 *param_2,undefined2 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c2ed0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111c3930(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111c3930(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111c3aa0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111c3aa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111c3d10(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c3d10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111c4330(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111c4330(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111c4380(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111c4380(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_111c4750(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_111c4750(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111c49c0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111c49c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c4ae0(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c4ae0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111c4b30(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c4b30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111c4cf0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111c4cf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111c4d20(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111c4d20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_111c5100(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_111c5100(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c77a0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c77a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c7ff0(undefined4 param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c7ff0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c8150(undefined4 param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c8150(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c8190(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c8190(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_111c81b0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_111c81b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_111c81d0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_111c81d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_111c8200(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_111c8200(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111c8290(int param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111c8290(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c8d50(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c8d50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c8d80(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c8d80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c8dc0(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c8dc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c8ff0(undefined4 param_1,int *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c8ff0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c9070(undefined4 param_1,int *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c9070(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c9860(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c9860(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c9890(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c9890(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c98c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111c98c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111c98f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111c98f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111c9b60(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111c9b60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111c9b90(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111c9b90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111ca290(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111ca290(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111cacc0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111cacc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111cc510(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111cc510(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111cf8e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111cf8e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111cf9c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111cf9c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_111d22e0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_111d22e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111d3e10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111d3e10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111d3e70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111d3e70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111d46c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111d46c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111d47f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111d47f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111d4e20(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111d4e20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111d4ea0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111d4ea0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111d4eb0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111d4eb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111d50d0(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111d50d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111d5200(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111d5200(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111d7a70(char *param_1,char *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111d7a70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111d7ad0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111d7ad0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111d7b40(uint *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111d7b40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111d8030(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111d8030(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111d8050(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111d8050(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111d8070(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111d8070(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111d8090(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111d8090(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_111d80b0(float *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_111d80b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_111d8110(float *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_111d8110(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_111d8170(float *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_111d8170(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111da570(int param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111da570(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111da5b0(int param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111da5b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111da5f0(int param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111da5f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111dadb0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111dadb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111dae30(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111dae30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111daea0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111daea0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111daf20(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111daf20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111dafa0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111dafa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111db010(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111db010(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111db080(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_111db080(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111db100(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111db100(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111db1b0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111db1b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111dbe40(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111dbe40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111dbf40(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111dbf40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111dc170(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111dc170(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111decb0(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111decb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111ded00(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111ded00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111ded50(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111ded50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111deda0(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111deda0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111dedf0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111dedf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111dee40(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111dee40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111dee90(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111dee90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111deee0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111deee0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111def30(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111def30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111def80(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111def80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111defd0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111defd0(...);
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void FUN_111e3830(int param_1,undefined4 param_2,undefined4 param_3,char *param_4,char *param_5,
                 char *param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,char *param_12,char *param_13,
                 undefined4 param_14);
extern /* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111e3830(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_111e40c0(undefined2 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_111e40c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ short __stdcall FUN_111e40e0(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ short FUN_111e40e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111e6f70(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111e6f70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_111e7810(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_111e7810(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111e78b0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111e78b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_111e85c0(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111e85c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111eebe0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111eebe0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111f1870(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111f1870(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_111f18c0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_111f18c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_111f1960(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_111f1960(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111f2d00(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111f2d00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111f44a0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111f44a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ short __stdcall FUN_111f45a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ short FUN_111f45a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_111f64c0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_111f64c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_111f6760(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_111f6760(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_111f6770(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_111f6770(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_111f6780(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_111f6780(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_111f6790(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_111f6790(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111f67b0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111f67b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111f6e20(char *param_1,char *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_111f6e20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_111f7190(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_111f7190(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_111f71c0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_111f71c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111f7200(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111f7200(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111f7230(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111f7230(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111f92d0(int param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111f92d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111f9420(int param_1,byte *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111f9420(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111f9550(int param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111f9550(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111f96c0(uint param_1,byte *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111f96c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111f99d0(int param_1,byte *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111f99d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111fb2d0(int param_1,undefined4 param_2,byte *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111fb2d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111fb6f0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111fb6f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111fb710(int param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111fb710(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111fb840(int param_1,byte *param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111fb840(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111fbcc0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111fbcc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111fc980(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_111fc980(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111fe160(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111fe160(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111fe8f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_111fe8f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111feb10(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_111feb10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_111fed50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_111fed50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11202360(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11202360(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112023f0(char *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112023f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_112025a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_112025a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11202d30(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11202d30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11202d80(int param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11202d80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11202e90(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11202e90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11203650(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11203650(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112041c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112041c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112047a0(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112047a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11204a10(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11204a10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11205200(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11205200(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_112059d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_112059d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11208210(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11208210(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11208c70(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11208c70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11208c90(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11208c90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1120b970(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1120b970(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1120c9b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1120c9b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11214260(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11214260(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11214280(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11214280(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11214500(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11214500(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11214530(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11214530(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_112173a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_112173a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11217dd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11217dd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11218ac0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11218ac0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11219a90(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11219a90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1121ae30(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1121ae30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1121b780(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1121b780(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1121dc70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1121dc70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11222080(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11222080(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11223550(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11223550(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11223570(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11223570(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11223800(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11223800(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11223840(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11223840(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_112278c0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112278c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11227e90(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11227e90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11227eb0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11227eb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11227ef0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11227ef0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11227f30(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11227f30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1122aed0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1122aed0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1122b1e0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1122b1e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1122b930(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1122b930(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1122b950(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1122b950(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_1122c9c0(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1122c9c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_1122df80(undefined1 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_1122df80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1122e2a0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1122e2a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1122e880(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1122e880(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ short * FUN_1122e890(short *param_1,int param_2,short param_3,int param_4,int param_5);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ short * FUN_1122e890(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11230960(int param_1,byte *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11230960(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11230ac0(int param_1,byte *param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11230ac0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112319d0(char *param_1,char *param_2,undefined4 *param_3,int param_4,int param_5);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112319d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11231ab0(char *param_1,char *param_2,undefined4 *param_3,int param_4,int param_5);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11231ab0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11231ad0(undefined4 param_1,undefined4 param_2,char *param_3,int param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11231ad0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112329c0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112329c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11232b70(int param_1,byte *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11232b70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11233e90(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11233e90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11235940(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11235940(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11235da0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11235da0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11236090(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11236090(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11237820(int param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11237820(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11237b80(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11237b80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_11237d30(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_11237d30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11237d40(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11237d40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11237ef0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11237ef0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11238050(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11238050(...);
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void __fastcall FUN_11238470(int param_1);
extern /* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11238470(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11239550(undefined1 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11239550(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1123a130(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1123a130(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1123b240(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1123b240(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __stdcall FUN_1123b250(int *param_1,undefined1 param_2,char param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * FUN_1123b250(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1123b800(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1123b800(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1123d2a0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1123d2a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1123d510(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1123d510(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1123f100(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1123f100(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1123f3a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1123f3a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11240630(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11240630(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112411d0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112411d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112413e0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112413e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11241800(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11241800(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11241900(int *param_1,int param_2,undefined4 param_3,int *param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11241900(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11241af0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11241af0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_11241c90(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_11241c90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11241d00(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11241d00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11241d20(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11241d20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11241fa0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11241fa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11242fa0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11242fa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11242ff0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11242ff0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11243040(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11243040(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11243090(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11243090(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11243120(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11243120(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11243130(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11243130(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11243330(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11243330(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_112433c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_112433c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_112433e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_112433e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11243530(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11243530(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11243830(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11243830(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11243bb0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11243bb0(...);
// Reference entry 1115e390; body size 18 bytes.
#line 1 "ENTRY_1115e390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1115e390(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 4);
  return;
}


// Reference entry 1115e6a0; body size 49 bytes.
#line 1 "ENTRY_1115e6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_1115e6a0(uint param_2)
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


// Reference entry 1115e870; body size 37 bytes.
#line 1 "ENTRY_1115e870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_1115e870(void *param_1, int param_2, unsigned int recovered_unused_stack_0)

{
  memset(param_1,0,param_2 * 4);
  return (void *)((void *)(param_2 * 4 + (int)param_1));
}


// Reference entry 1115e8a0; body size 47 bytes.
#line 1 "ENTRY_1115e8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1115e8a0(undefined4 *param_2,int param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_2);
  if (param_3 != 0) {
    puVar1 = (undefined4 *)(param_2 + param_3);
    for (; param_3 != 0; param_3 = param_3 + -1) {
      *param_2 = (undefined4)(0);
      param_2 = (undefined4 *)(param_2 + 1);
    }
  }
  thunk_FUN_1115cfe0(puVar1,puVar1,param_1);
  return (undefined4 *)(puVar1);
}


// Reference entry 1115f300; body size 19 bytes.
#line 1 "ENTRY_1115f300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_1115f300(int param_1)

{
  uint in_EAX;
  
  if (*(int *)(param_1 + 0x3c) == -1) {
    return (uint)(in_EAX & 0xffffff00);
  }
  return (uint)((uint)(*(int *)(param_1 + 0x3c) != 0));
}


// Reference entry 1115f320; body size 12 bytes.
#line 1 "ENTRY_1115f320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1115f320(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (*(int *)(param_1 + 0x38) != -1) {
    iVar1 = (int)(*(int *)(param_1 + 0x38));
  }
  return (int)(iVar1);
}


// Reference entry 1115fee0; body size 28 bytes.
#line 1 "ENTRY_1115fee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_1115fee0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_11160050(param_1));
  if (iVar1 != 0) {
    return (bool)(*(int *)(iVar1 + 0x3c) != -1);
  }
  return (bool)(false);
}


// Reference entry 1115ff30; body size 35 bytes.
#line 1 "ENTRY_1115ff30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1115ff30(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_11160050(param_1));
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x38) != -1)) && (*(int *)(iVar1 + 0x40) < 1)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 11160020; body size 36 bytes.
#line 1 "ENTRY_11160020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_11160020(int param_2)
{
  int param_1 = (int )this;
  if (((*(int *)((param_1 + 0x50)) <= *(int *)((param_1 + 0x38))) || (0 < param_2)) &&
     ((*(int *)((param_1 + 0x38)) <= *(int *)((param_1 + 0x50) || (param_2 < 0))))) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 11160110; body size 1087 bytes.
#line 1 "ENTRY_11160110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_11160110(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
 try {
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 auStack_94 [4];
  undefined4 auStack_84 [4];
  void *pvStack_74;
  undefined1 *puStack_70;
  undefined4 uStack_6c;
  undefined4 auStack_68 [4];
  undefined4 auStack_58 [4];
  undefined4 auStack_48 [4];
  undefined4 auStack_38 [4];
  undefined4 auStack_28 [2];
  double dStack_20;
  undefined4 uStack_18;
  int iStack_10;
  uint uStack_8;


  uVar2 = (uint)(DAT_12126b84 ^ (uint)auStack_68);

  iVar3 = (int)(thunk_FUN_111a2ec0(uVar2));
  if (iVar3 == 0) {

    return (uint)(0);
  }
  auStack_94[0] = (undefined4)(0);

  iVar3 = (int)(0);
  cVar1 = (char)(thunk_FUN_111a5f10("LastChange",auStack_94));
  if (cVar1 != '\0') {
    iVar4 = (int)(thunk_FUN_111a2ec0(uVar2));
    auStack_38[0] = (undefined4)(0);
    *(unsigned char *)((char *)&uStack_6c + 0) = 1;
    if ((iVar4 != 0) && (cVar1 = thunk_FUN_111a5f10(&DAT_118872c0,auStack_38), cVar1 != '\0')) {
      iVar3 = (int)(thunk_FUN_111a2ec0(uVar2));
    }
    *(unsigned char *)((char *)&uStack_6c + 0) = 2;
    thunk_FUN_111a36f0();
    if (iVar3 != 0) {
      auStack_84[0] = (undefined4)(0);
      *(unsigned char *)((char *)&uStack_6c + 0) = 4;
      cVar1 = (char)(thunk_FUN_111a5f10("OutputFixed",auStack_84));
      if (cVar1 != '\0') {
        iVar4 = (int)(thunk_FUN_111a2bd0());
        iVar3 = (int)(*(int *)(param_1 + 0x40));
        *(int*)(param_1 + 0x40) = (int)(iVar4);
        if (iVar4 != iVar3) {
          thunk_FUN_11161ed0();
          _eh_vector_constructor_iterator_
                    (auStack_28,0x10,2,(_func_void_void_ptr *)LAB_10050d62,thunk_FUN_1051d480);
          *(unsigned char *)((char *)&uStack_6c + 0) = 5;
          thunk_FUN_111a36f0();
          iStack_10 = (int)(param_1 + 0x1c);

          thunk_FUN_111a36f0();
          auStack_28[0] = (undefined4)(5);
          dStack_20 = (double)((double)((unsigned long long)(*(uint *)((char *)&dStack_20 + 4)) << 32 | (unsigned long long)((uint)(iVar4 != 0))));
          uStack_8 = (uint)(thunk_FUN_111a7100("onFixedVolumeChanged",2,auStack_28));
          *(unsigned char *)((char *)&uStack_6c + 0) = 4;
          _eh_vector_destructor_iterator_(auStack_28,0x10,2,thunk_FUN_1051d480);
        }
      }
      auStack_68[0] = (undefined4)(0);
      *(unsigned char *)((char *)&uStack_6c + 0) = 6;
      cVar1 = (char)(thunk_FUN_111a5f10("HeadphoneConnected",auStack_68));
      if (cVar1 != '\0') {
        iVar4 = (int)(thunk_FUN_111a2bd0());
        iVar3 = (int)(*(int *)(param_1 + 0x44));
        *(int*)(param_1 + 0x44) = (int)(iVar4);
        if (iVar4 != iVar3) {
          thunk_FUN_11161ed0();
          _eh_vector_constructor_iterator_
                    (auStack_28,0x10,2,(_func_void_void_ptr *)LAB_10050d62,thunk_FUN_1051d480);
          *(unsigned char *)((char *)&uStack_6c + 0) = 7;
          thunk_FUN_111a36f0();
          iStack_10 = (int)(param_1 + 0x1c);

          thunk_FUN_111a36f0();
          auStack_28[0] = (undefined4)(5);
          dStack_20 = (double)((double)((unsigned long long)(*(uint *)((char *)&dStack_20 + 4)) << 32 | (unsigned long long)((uint)(iVar4 != 0))));
          uVar2 = (uint)(thunk_FUN_111a7100("onHeadphoneConnectedChanged",2,auStack_28));
          *(unsigned char *)((char *)&uStack_6c + 0) = 6;
          _eh_vector_destructor_iterator_(auStack_28,0x10,2,thunk_FUN_1051d480);
          uStack_8 = (uint)(uStack_8 | uVar2);
        }
      }
      auStack_58[0] = (undefined4)(0);
      *(unsigned char *)((char *)&uStack_6c + 0) = 8;
      cVar1 = (char)(thunk_FUN_111a5f10("Volume/Master",auStack_58));
      if (cVar1 != '\0') {
        iVar4 = (int)(thunk_FUN_111a2df0());
        iVar3 = (int)(*(int *)(param_1 + 0x38));
        if (*(int *)(param_1 + 0x50) == (int)(iVar3)) {
          if ((*(int *)(param_1 + 0x4c) == (int)(iVar3)) || (iVar4 == iVar3)) {
            *(int*)(param_1 + 0x38) = (int)(iVar4);
            *(int*)(param_1 + 0x50) = (int)(iVar4);
            *(int*)(param_1 + 0x4c) = (int)(iVar4);
            thunk_FUN_11161ed0();
            _eh_vector_constructor_iterator_
                      (auStack_28,0x10,2,(_func_void_void_ptr *)LAB_10050d62,thunk_FUN_1051d480);
            *(unsigned char *)((char *)&uStack_6c + 0) = 9;
            thunk_FUN_111a36f0();
            iStack_10 = (int)(param_1 + 0x1c);

            thunk_FUN_111a36f0();
            dStack_20 = (double)((double)iVar4);
            auStack_28[0] = (undefined4)(4);
            uVar2 = (uint)(thunk_FUN_111a7100("onVolumeChanged",2,auStack_28));
            *(unsigned char *)((char *)&uStack_6c + 0) = 8;
            _eh_vector_destructor_iterator_(auStack_28,0x10,2,thunk_FUN_1051d480);
            uStack_8 = (uint)(uStack_8 | uVar2);
            goto LAB_1116039a;
          }
          thunk_FUN_11160980(iVar3);
        }
        *(int*)(param_1 + 0x4c) = (int)(iVar4);
      }
LAB_1116039a:
      auStack_48[0] = (undefined4)(0);
      *(unsigned char *)((char *)&uStack_6c + 0) = 10;
      cVar1 = (char)(thunk_FUN_111a5f10("Mute/Master",auStack_48));
      uVar2 = (uint)(uStack_8);
      if (cVar1 != '\0') {
        iVar3 = (int)(thunk_FUN_111a2bd0());
        if (*(int *)((param_1 + 0x3c)) == *(int *)((param_1 + 0x70))) {
          *(int*)(param_1 + 0x70) = (int)(iVar3);
        }
        *(int*)(param_1 + 0x3c) = (int)(iVar3);
        thunk_FUN_11161e50();
        _eh_vector_constructor_iterator_
                  (auStack_28,0x10,2,(_func_void_void_ptr *)LAB_10050d62,thunk_FUN_1051d480);
        *(unsigned char *)((char *)&uStack_6c + 0) = 0xb;
        thunk_FUN_111a36f0();
        iStack_10 = (int)(param_1 + 0x1c);

        thunk_FUN_111a36f0();
        auStack_28[0] = (undefined4)(5);
        dStack_20 = (double)((double)((unsigned long long)(*(uint *)((char *)&dStack_20 + 4)) << 32 | (unsigned long long)((uint)(iVar3 != 0))));
        uVar2 = (uint)(thunk_FUN_111a7100("onMuteChanged",2,auStack_28));
        *(unsigned char *)((char *)&uStack_6c + 0) = 10;
        _eh_vector_destructor_iterator_(auStack_28,0x10,2,thunk_FUN_1051d480);
        uVar2 = (uint)(uStack_8 | uVar2);
      }
      *(unsigned char *)((char *)&uStack_6c + 0) = 0xc;
      thunk_FUN_111a36f0();
      *(unsigned char *)((char *)&uStack_6c + 0) = 0xd;
      thunk_FUN_111a36f0();
      *(unsigned char *)((char *)&uStack_6c + 0) = 0xe;
      thunk_FUN_111a36f0();
      uStack_6c = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_6c + 1)) << 8 | (uint)(0xf)));
      thunk_FUN_111a36f0();
      goto LAB_11160529;
    }
  }
  uVar2 = (uint)(0);
LAB_11160529:

  thunk_FUN_111a36f0();

  return (uint)(uVar2);

 } catch (...) { }
}


// Reference entry 11160660; body size 8 bytes.
#line 1 "ENTRY_11160660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11160660(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  func_0x10072a48();
  return;
}


// Reference entry 111608e0; body size 119 bytes.
#line 1 "ENTRY_111608e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111608e0(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)((undefined4 *)param_1[1]);
  iVar2 = (int)(*param_1);
  uVar1 = (uint)((int)puVar4 - iVar2 >> 2);
  if (param_2 < uVar1) {
    iVar2 = (int)(iVar2 + param_2 * 4);
    thunk_FUN_1115cfe0(iVar2,puVar4,param_1);
    param_1[1] = (int)(iVar2);
    return;
  }
  if (uVar1 < param_2) {
    if ((uint)(param_1[2] - iVar2 >> 2) < param_2) {
      thunk_FUN_1115d440(param_2,&param_2);
      return;
    }
    iVar2 = (int)(param_2 - uVar1);
    puVar3 = (undefined4 *)(puVar4);
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)(puVar4 + iVar2);
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = (undefined4)(0);
        puVar4 = (undefined4 *)(puVar4 + 1);
      }
    }
    thunk_FUN_1115cfe0(puVar3,puVar3,param_1);
    param_1[1] = (int)((int)puVar3);
  }
  return;
}


// Reference entry 111616d0; body size 130 bytes.
#line 1 "ENTRY_111616d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_111616d0(uint param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)(0);
  if (param_1 != 0) {
    param_2 = (int)(param_2 - (int)param_3);
    do {
      iVar3 = (int)(thunk_FUN_11160050(*(undefined4 *)(param_2 + (int)param_3)));
      if (iVar3 != 0) {
        iVar1 = (int)(*param_3);
        if (*(int *)(iVar3 + 0x18) == 0) {
          uVar2 = (undefined1)(0);
        }
        else if ((int)(iVar1) == *(int *)(iVar3 + 0x38)) {
          uVar2 = (undefined1)(0);
        }
        else {
          if (*(int *)((iVar3 + 0x50)) == *(int *)((iVar3 + 0x38))) {
            thunk_FUN_11160980(iVar1);
          }
          *(int*)(iVar3 + 0x38) = (int)(iVar1);
          uVar2 = (undefined1)(1);
        }
        *(undefined1*)(uVar4 + param_4) = (undefined1)(uVar2);
      }
      uVar4 = (uint)(uVar4 + 1);
      param_3 = (int *)(param_3 + 1);
    } while (uVar4 < param_1);
  }
  thunk_FUN_11161ed0();
  return;
}


// Reference entry 111619a0; body size 43 bytes.
#line 1 "ENTRY_111619a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111619a0(undefined1 *param_2)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)(param_2) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(param_2);
  }
  thunk_FUN_1145c250(param_1 + 0x17,puVar1,0x24);
  func_0x10072a48();
  return;
}


// Reference entry 11163160; body size 14 bytes.
#line 1 "ENTRY_11163160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * __fastcall FUN_11163160(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)(param_1 + 0xc36c));
  if (*pcVar1 == '\0') {
    pcVar1 = (char *)((char *)0x0);
  }
  return (char *)(pcVar1);
}


// Reference entry 11163eb0; body size 24 bytes.
#line 1 "ENTRY_11163eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_11163eb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 111653c0; body size 28 bytes.
#line 1 "ENTRY_111653c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111653c0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 111653f0; body size 31 bytes.
#line 1 "ENTRY_111653f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111653f0(undefined4 *param_1)

{
  thunk_FUN_11261e50();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RRateItemAsyncOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RRateItemAsyncOp);
  return (undefined4 *)(param_1);
}


// Reference entry 11166110; body size 11 bytes.
#line 1 "ENTRY_11166110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_11166110(undefined4 *param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uVar6 = (undefined4)(param_4);
  piVar1 = (int *)(*(int **)(param_1 + 0x1688));


  uVar2 = (uint)(DAT_12126b84);

  pvVar3 = (void *)(operator_new(0x11e50));

  if ((void *)(pvVar3) == (void *)0x0) {
    param_4 = (undefined4)(0);
  }
  else {
    iVar8 = (int)(piVar1[2]);
    uVar5 = (undefined4)(param_3);
    uVar4 = (undefined4)((**(code **)(*piVar1 + 8))(param_3,param_4,iVar8,uVar2));
    param_4 = (undefined4)(thunk_FUN_111d0130(uVar4,uVar5,param_4,iVar8));
  }

  pvVar3 = (void *)(operator_new(0x11e50));

  if ((void *)(pvVar3) == (void *)0x0) {
    uVar6 = (undefined4)(0);
  }
  else {
    iVar8 = (int)(piVar1[2]);
    uVar5 = (undefined4)((**(code **)(*piVar1 + 8))(param_3,uVar6,iVar8));
    uVar6 = (undefined4)(thunk_FUN_111d0130(uVar5,param_3,uVar6,iVar8));
  }

  uVar5 = (undefined4)(thunk_FUN_111dd660());
  uVar4 = (undefined4)((**(code **)(*piVar1 + 0xc))());
  puVar7 = (undefined4 *)(operator_new(0x168));

  if ((undefined4 *)(puVar7) == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    thunk_FUN_111ca9f0(param_4,uVar6,uVar5,uVar4,&DAT_122f1250);
    uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(3)));
    *puVar7 = (undefined4)((uint)&ghidra_vftable_RSonosRateItemOp);
    puVar7[2] = (undefined4)((uint)&ghidra_vftable_RSonosRateItemOp);
    puVar7[7] = (undefined4)((uint)&ghidra_vftable_RSonosRateItemOp);
    thunk_FUN_111f4d20(puVar7 + 0x19,(int)puVar7 + 0x65,0x101);
    thunk_FUN_111f4d20(puVar7 + 0x19,(int)puVar7 + 0x65,0x101);
  }
  *param_2 = (undefined4)(puVar7);

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 111664e0; body size 28 bytes.
#line 1 "ENTRY_111664e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111664e0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 11166e30; body size 21 bytes.
#line 1 "ENTRY_11166e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11166e30(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0x24) + 1);
  if (*(uint *)((param_1 + 0x20)) <= *(uint *)((param_1 + 0x24))) {
    uVar1 = (uint)(*(uint *)(param_1 + 0x20));
  }
  return (int)(uVar1 * 2000);
}


// Reference entry 11169460; body size 39 bytes.
#line 1 "ENTRY_11169460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11169460(undefined4 param_2,char param_3)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_3 != '\0') {
    thunk_FUN_1145c250();
    return;
  }
  thunk_FUN_1106a8d0(param_1,param_2,0x81);
  return;
}


// Reference entry 11169490; body size 42 bytes.
#line 1 "ENTRY_11169490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11169490(undefined4 param_2,char param_3)
{
  int param_1 = (int )this;
  if (param_3 != '\0') {
    thunk_FUN_1145c250();
    return;
  }
  thunk_FUN_1106a8d0(param_1 + 8,param_2,0x81);
  return;
}


// Reference entry 111694d0; body size 52 bytes.
#line 1 "ENTRY_111694d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111694d0(undefined4 param_2,char param_3)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x81) = (undefined1)(0x31);
  if (param_3 != '\0') {
    thunk_FUN_1145c250();
    return;
  }
  thunk_FUN_1106a8d0(param_1 + 0x82,param_2,0x80);
  return;
}


// Reference entry 11169520; body size 52 bytes.
#line 1 "ENTRY_11169520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11169520(undefined4 param_2,char param_3)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x89) = (undefined1)(0x31);
  if (param_3 != '\0') {
    thunk_FUN_1145c250();
    return;
  }
  thunk_FUN_1106a8d0(param_1 + 0x8a,param_2,0x80);
  return;
}


// Reference entry 111695b0; body size 42 bytes.
#line 1 "ENTRY_111695b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111695b0(undefined4 param_2,char param_3)
{
  int param_1 = (int )this;
  if (param_3 != '\0') {
    thunk_FUN_1145c250();
    return;
  }
  thunk_FUN_1106a8d0(param_1 + 0x102,param_2,0x41);
  return;
}


// Reference entry 111695f0; body size 42 bytes.
#line 1 "ENTRY_111695f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111695f0(undefined4 param_2,char param_3)
{
  int param_1 = (int )this;
  if (param_3 != '\0') {
    thunk_FUN_1145c250();
    return;
  }
  thunk_FUN_1106a8d0(param_1 + 0x10a,param_2,0x41);
  return;
}


// Reference entry 111699d0; body size 54 bytes.
#line 1 "ENTRY_111699d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_111699d0(undefined4 param_2,int *param_3)
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


// Reference entry 11169b90; body size 56 bytes.
#line 1 "ENTRY_11169b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_11169b90(undefined4 *param_2)
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


// Reference entry 1116a5a0; body size 30 bytes.
#line 1 "ENTRY_1116a5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1116a5a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 1116a5d0; body size 28 bytes.
#line 1 "ENTRY_1116a5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1116a5d0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 1116a600; body size 28 bytes.
#line 1 "ENTRY_1116a600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1116a600(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 1116ac30; body size 127 bytes.
#line 1 "ENTRY_1116ac30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1116ac30(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:ZoneGroupTopology:1",
                     "ReportUnresponsiveDevice",uVar3,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpZGTReportUnresponsiveDeviceAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpZGTReportUnresponsiveDeviceAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpZGTReportUnresponsiveDeviceAIOOp);
  return (undefined4 *)(param_1);
}


// Reference entry 1116ade0; body size 84 bytes.
#line 1 "ENTRY_1116ade0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1116ade0(char *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  char *pcVar1;
  
  thunk_FUN_11240650();
  *param_1 = (undefined4)((uint)&ghidra_vftable_ZPConnRec);
  param_1[2] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  pcVar1 = (char *)(_strdup(param_2));
  param_1[1] = (undefined4)(pcVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 1116ae60; body size 11 bytes.
#line 1 "ENTRY_1116ae60"

/* WARNING: Removing unreachable block (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1116ae60(undefined4 *param_1)

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
  if ((int *)(int *)(param_1[1]) != (int *)(0x0)) {
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


// Reference entry 1116b2c0; body size 28 bytes.
#line 1 "ENTRY_1116b2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1116b2c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpZGTReportUnresponsiveDeviceAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpZGTReportUnresponsiveDeviceAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpZGTReportUnresponsiveDeviceAIOOp);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  if ((undefined4 *)(undefined4 *)(param_1[0x2a5e]) != (undefined4 *)(0x0)) {
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


// Reference entry 1116bb90; body size 20 bytes.
#line 1 "ENTRY_1116bb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1116bb90(int param_1)

{
  if (*(int *)(param_1 + 8) != 0xfffffff) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 1116bbb0; body size 66 bytes.
#line 1 "ENTRY_1116bbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1116bbb0(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) +
                 (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (bool)(*param_1 <= fVar1 && fVar1 != *param_1);
}


// Reference entry 1116bcc0; body size 54 bytes.
#line 1 "ENTRY_1116bcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1116bcc0(int *param_2,int param_3)
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


// Reference entry 1116c030; body size 92 bytes.
#line 1 "ENTRY_1116c030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_1116c030(uint param_2,int param_3,int *param_4)
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


// Reference entry 1116c520; body size 43 bytes.
#line 1 "ENTRY_1116c520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1116c520(int param_1,int param_2,int param_3)

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


// Reference entry 1116c560; body size 87 bytes.
#line 1 "ENTRY_1116c560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1116c560(uint param_1)

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


// Reference entry 1116c5d0; body size 87 bytes.
#line 1 "ENTRY_1116c5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1116c5d0(uint param_1)

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


// Reference entry 1116c770; body size 68 bytes.
#line 1 "ENTRY_1116c770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1116c770(int param_1)

{
  int *piVar1;
  int iStack_4;
  
  if (*(int *)(param_1 + 8) != 0) {
    piVar1 = (int *)((int *)(param_1 + 4));
    iStack_4 = (int)(param_1);
    thunk_FUN_11169d70(piVar1,*(undefined4 *)(param_1 + 4));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
    iStack_4 = (int)(*piVar1);
    thunk_FUN_1116a470(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&iStack_4);
  }
  return;
}


// Reference entry 1116c800; body size 54 bytes.
#line 1 "ENTRY_1116c800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1116c800(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 1116c850; body size 57 bytes.
#line 1 "ENTRY_1116c850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1116c850(int param_1,int param_2)

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


// Reference entry 1116c8a0; body size 61 bytes.
#line 1 "ENTRY_1116c8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1116c8a0(int param_1,int param_2)

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


// Reference entry 1116e290; body size 24 bytes.
#line 1 "ENTRY_1116e290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_1116e290(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 1116e2b0; body size 24 bytes.
#line 1 "ENTRY_1116e2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_1116e2b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 1116e5e0; body size 140 bytes.
#line 1 "ENTRY_1116e5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1116e5e0(int param_2,undefined4 param_3,undefined4 param_4,
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
  pcVar5 = (char *)("RequestResort");
  uVar4 = (undefined4)((**(code **)(*(int *)(param_2 + iVar1 + 4) + 0x68))("RequestResort",uVar3));
  thunk_FUN_111c0760(uVar2,uVar4,pcVar5,uVar3,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCDRequestResortAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpCDRequestResortAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpCDRequestResortAIOOp);
  return (undefined4 *)(param_1);
}


// Reference entry 1116e690; body size 28 bytes.
#line 1 "ENTRY_1116e690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1116e690(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCDRequestResortAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpCDRequestResortAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpCDRequestResortAIOOp);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  if ((undefined4 *)(undefined4 *)(param_1[0x2a5e]) != (undefined4 *)(0x0)) {
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


// Reference entry 1116f100; body size 10 bytes.
#line 1 "ENTRY_1116f100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1116f100(undefined4 param_1)

{
  thunk_FUN_1145e260(param_1);
  return;
}


// Reference entry 1116f110; body size 10 bytes.
#line 1 "ENTRY_1116f110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1116f110(undefined4 param_1)

{
  thunk_FUN_1145eb60(param_1);
  return;
}


// Reference entry 1116f2d0; body size 24 bytes.
#line 1 "ENTRY_1116f2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1116f2d0(undefined4 *param_1)

{
  thunk_FUN_11274120();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RRTFXmlWriter);
  return (undefined4 *)(param_1);
}


// Reference entry 1116f3c0; body size 358 bytes.
#line 1 "ENTRY_1116f3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1116f3c0(undefined4 param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  int iVar2;
  undefined *puStack_444;
  undefined1 *puStack_440;
  undefined **ppuStack_43c;
  int iStack_438;
  void *pvStack_434;
  undefined1 *puStack_430;
  undefined4 uStack_42c;
  undefined1 auStack_428 [1024];
  undefined1 auStack_28 [32];
  uint uStack_8;


  uStack_8 = (uint)(DAT_12126b84 ^ (uint)auStack_428);

  thunk_FUN_1145c720(auStack_428,0x400,&DAT_1188bc94,param_2,uStack_8);
  uVar1 = (undefined4)(func_0x100628e6());
  thunk_FUN_1145c720(auStack_28,0x1e,&DAT_118c8074,uVar1);
  thunk_FUN_11274120();
  ppuStack_43c = (undefined **)((uint)&ghidra_vftable_RRTFXmlWriter);
  puStack_440 = (undefined1 *)(auStack_28);

  puStack_444 = (undefined *)(&UNK_119cdf64);
  for (iVar2 = (int)(iStack_438 * 4); iVar2 != 0; iVar2 = iVar2 + -1) {
    (*(code *)ppuStack_43c[1])(&DAT_11882ff0,1);
  }
  thunk_FUN_112747a0(auStack_428,&puStack_444,1);
  (*(code *)ppuStack_43c[1])(&DAT_11881ac8,1);
  FUN_1116f660(&ppuStack_43c,param_1);
  for (iVar2 = (int)(iStack_438 * 4 + -4); iVar2 != 0; iVar2 = iVar2 + -1) {
    (*(code *)ppuStack_43c[1])(&DAT_11882ff0,1);
  }
  thunk_FUN_11274880(auStack_428);
  (*(code *)ppuStack_43c[1])(&DAT_11881ac8,1);
  ppuStack_43c = (undefined **)((uint)&ghidra_vftable_RRTFXmlWriter);
  thunk_FUN_112741c0();

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 1116f620; body size 43 bytes.
#line 1 "ENTRY_1116f620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1116f620(int param_2)
{
  int *param_1 = (int *)this;
  for (param_2 = (int)(param_2 * 4); param_2 != 0; param_2 = param_2 + -1) {
    (**(code **)(*param_1 + 4))(&DAT_11882ff0,1);
  }
  return;
}


// Reference entry 1116f950; body size 13 bytes.
#line 1 "ENTRY_1116f950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1116f950(int *param_1)

{
  (**(code **)(*param_1 + 4))(&DAT_11881ac8,1);
  return;
}


// Reference entry 1116fa20; body size 51 bytes.
#line 1 "ENTRY_1116fa20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_1116fa20(undefined4 param_2,int *param_3)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_3);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  *(undefined1*)(param_1 + 1) = (undefined1)(0);
  return (int *)(param_1);
}


// Reference entry 1116fe90; body size 53 bytes.
#line 1 "ENTRY_1116fe90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_1116fe90(undefined4 *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*(int *)*param_2);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  *(undefined1*)(param_1 + 1) = (undefined1)(0);
  return (int *)(param_1);
}


// Reference entry 1116ff50; body size 34 bytes.
#line 1 "ENTRY_1116ff50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1116ff50(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x24) {
    thunk_FUN_11172590();
  }
  return;
}


// Reference entry 11170f20; body size 12 bytes.
#line 1 "ENTRY_11170f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11170f20(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = (int)(*(int *)(param_2 + 0x10));
  uVar3 = (uint)(*(int *)(param_2 + 0x14) - iVar1 & 0xfffffffc);
  iVar2 = (int)(iVar1);
  if (0xfff < uVar3) {
    iVar2 = (int)(*(int *)(iVar1 + -4));
    uVar3 = (uint)(uVar3 + 0x23);
    if (0x1f < (iVar1 - iVar2) - 4U) {
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1148a50e(iVar2,uVar3);
  *(undefined4*)(param_2 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x18) = (undefined4)(0);
  puVar4 = (undefined4 *)((undefined4 *)(param_2 + 8));
  thunk_FUN_111705c0(puVar4,*puVar4);
  thunk_FUN_1148a50e(*puVar4,0x10);
  return;
}


// Reference entry 111710f0; body size 42 bytes.
#line 1 "ENTRY_111710f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111710f0(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)((param_1 + 4)) != *(int *)((param_1 + 8))) {
    thunk_FUN_11170d50(param_1);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x24);
    return;
  }
  thunk_FUN_11170100(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 111715e0; body size 30 bytes.
#line 1 "ENTRY_111715e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111715e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 111718f0; body size 14 bytes.
#line 1 "ENTRY_111718f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111718f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 11171c70; body size 55 bytes.
#line 1 "ENTRY_11171c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_11171c70(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  *(char*)(param_1 + 1) = (char)((char)param_2[1]);
  return (int *)(param_1);
}


// Reference entry 11173150; body size 63 bytes.
#line 1 "ENTRY_11173150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_11173150(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)((param_1[2] - *param_1) / 0x24);
  if (0x71c71c7 - (uVar1 >> 1) < uVar1) {
    return (uint)(0x71c71c7);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 11173260; body size 20 bytes.
#line 1 "ENTRY_11173260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11173260(int param_1)

{
  if (*(int *)(param_1 + 8) != 0xfffffff) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 11173280; body size 66 bytes.
#line 1 "ENTRY_11173280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11173280(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) +
                 (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (bool)(*param_1 <= fVar1 && fVar1 != *param_1);
}


// Reference entry 11173950; body size 45 bytes.
#line 1 "ENTRY_11173950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11173950(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  uVar1 = (undefined4)(param_1[1]);
  param_1[1] = (undefined4)(param_2[1]);
  param_2[1] = (undefined4)(uVar1);
  uVar1 = (undefined4)(param_1[2]);
  param_1[2] = (undefined4)(param_2[2]);
  param_2[2] = (undefined4)(uVar1);
  return;
}


// Reference entry 11173990; body size 33 bytes.
#line 1 "ENTRY_11173990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11173990(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  uVar1 = (undefined4)(param_1[1]);
  param_1[1] = (undefined4)(param_2[1]);
  param_2[1] = (undefined4)(uVar1);
  return;
}


// Reference entry 11173ea0; body size 43 bytes.
#line 1 "ENTRY_11173ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11173ea0(int param_1,int param_2,int param_3)

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


// Reference entry 11173ef0; body size 87 bytes.
#line 1 "ENTRY_11173ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_11173ef0(uint param_1)

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


// Reference entry 11173f60; body size 87 bytes.
#line 1 "ENTRY_11173f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_11173f60(uint param_1)

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


// Reference entry 11173fd0; body size 90 bytes.
#line 1 "ENTRY_11173fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_11173fd0(uint param_1)

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


// Reference entry 11174090; body size 19 bytes.
#line 1 "ENTRY_11174090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_11174090(undefined4 param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(thunk_FUN_101c3fc0(param_2));
  return (uint)(uVar1 & *(uint *)(param_1 + 0x18));
}


// Reference entry 111741c0; body size 68 bytes.
#line 1 "ENTRY_111741c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111741c0(int param_1)

{
  int *piVar1;
  int iStack_4;
  
  if (*(int *)(param_1 + 8) != 0) {
    piVar1 = (int *)((int *)(param_1 + 4));
    iStack_4 = (int)(param_1);
    thunk_FUN_111705c0(piVar1,*(undefined4 *)(param_1 + 4));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
    iStack_4 = (int)(*piVar1);
    thunk_FUN_11171150(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&iStack_4);
  }
  return;
}


// Reference entry 11174430; body size 54 bytes.
#line 1 "ENTRY_11174430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11174430(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 11174480; body size 57 bytes.
#line 1 "ENTRY_11174480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11174480(int param_1,int param_2)

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


// Reference entry 111744d0; body size 61 bytes.
#line 1 "ENTRY_111744d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_111744d0(int param_1,int param_2)

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


// Reference entry 11174d40; body size 105 bytes.
#line 1 "ENTRY_11174d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11174d40(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *_Dst;
  char cVar1;
  char *_Src;
  undefined4 *puVar2;
  char *pcVar3;
  size_t _Size;
  
  _Src = (char *)(*(char **)(param_1 + 0x14));
  if (((char *)(_Src) != (char *)0x0) && (*_Src != '\0')) {
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
    *(undefined1*)((int)_Dst + _Size) = (undefined1)(0);
    *param_2 = (undefined4)(_Dst);
    return;
  }
  *param_2 = (undefined4)(0);
  return;
}


// Reference entry 11175420; body size 53 bytes.
#line 1 "ENTRY_11175420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_11175420(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
{
  int param_1 = (int )this;
  ushort uVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar1 = (ushort)(thunk_FUN_111747c0());
    thunk_FUN_111a36f0();
    *param_4 = (undefined4)(4);
    *(double*)(param_4 + 2) = (double)((double)uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 11175470; body size 200 bytes.
#line 1 "ENTRY_11175470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11175470(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  undefined4 uStack_118;
  char *pcStack_114;
  undefined4 uStack_110;
  undefined1 auStack_108 [260];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&puStack_120);
  uVar3 = (undefined4)(thunk_FUN_111a32a0());
  thunk_FUN_1145c250(auStack_108,uVar3,0x101);
  puStack_120 = (undefined1 *)(auStack_108);
  uVar4 = (uint)(0);
  puStack_11c = (undefined1 *)(puStack_120);
  cVar1 = (char)(thunk_FUN_111750d0(&puStack_11c,&puStack_120,&uStack_118));
  if (cVar1 != '\0') {
    if ((*pcStack_114 == '*') && (pcStack_114[1] == '\0')) {
      bVar2 = (byte)(thunk_FUN_11174dd0(uStack_118,uStack_110));
      uVar4 = (uint)((uint)bVar2);
    }
    else {
      uVar4 = (uint)(0);
    }
  }
  thunk_FUN_111a36f0();
  param_3[2] = (undefined4)(uVar4);
  *param_3 = (undefined4)(5);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 11175570; body size 42 bytes.
#line 1 "ENTRY_11175570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11175570(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)((param_1 + 4)) != *(int *)((param_1 + 8))) {
    thunk_FUN_11170d50(param_1);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x24);
    return;
  }
  thunk_FUN_11170100(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 111756b0; body size 38 bytes.
#line 1 "ENTRY_111756b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_111756b0(byte param_1)

{
  int iVar1;
  
  if ((~(param_1 >> 7) & 1) != 0) {
    iVar1 = (int)(iscntrl((uint)param_1));
    if (iVar1 != 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 111756e0; body size 38 bytes.
#line 1 "ENTRY_111756e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_111756e0(byte param_1)

{
  int iVar1;
  
  if ((~(param_1 >> 7) & 1) != 0) {
    iVar1 = (int)(isspace((uint)param_1));
    if (iVar1 != 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 11175ec0; body size 44 bytes.
#line 1 "ENTRY_11175ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_11175ec0(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(*(uint *)(param_1 + 8));
  uVar2 = (uint)(param_2 + 3U & 0xfffffffc);
  if (uVar2 <= uVar1) {
    *(uint*)(param_1 + 8) = (uint)(uVar1 - uVar2);
    return (int)((*(int *)(param_1 + 0xc) - uVar2) + uVar1);
  }
  *(undefined1*)(param_1 + 0x10) = (undefined1)(1);
  return (int)(0);
}


// Reference entry 11175f00; body size 53 bytes.
#line 1 "ENTRY_11175f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_11175f00(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 + 3U & 0xfffffffc);
  if ((uint)(uVar2) <= *(uint *)(param_1 + 8)) {
    iVar1 = (int)(*(int *)(param_1 + 0xc));
    *(uint*)(param_1 + 8) = (uint)(*(uint *)(param_1 + 8) - uVar2);
    *(uint*)(param_1 + 0xc) = (uint)(iVar1 + uVar2);
    return (int)(iVar1);
  }
  *(undefined1*)(param_1 + 0x10) = (undefined1)(1);
  return (int)(0);
}


// Reference entry 111760e0; body size 135 bytes.
#line 1 "ENTRY_111760e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __thiscall Recovered_Bulk::FUN_111760e0(undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,int param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10)
{
  int param_1 = (int )this;
  undefined2 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)("Children");
  if (param_7 != 0) {
    pcVar2 = (char *)("Node");
  }
  thunk_FUN_112af4e0("FlashTraceBrowse",10,
                     "((RBrowseCacheMgr *)(\n\tcontainerId=*%s*\n\tixStart=%d\n\trequestedCount=%d\n\tbrowseFlag=%s))->browse()"
                     ,param_4,param_5,param_6,pcVar2);
  if (*(int **)(param_1 + 4) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 4) + 4))(param_4);
  }
  uVar1 = (undefined2)((**(code **)(*param_3 + 4))
                    (param_2,param_7,param_4,
                     "dc:title,res,dc:creator,upnp:artist,upnp:album,upnp:albumArtURI",param_5,
                     param_6,param_8,param_9,param_10));
  if (*(int **)(param_1 + 4) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 4) + 8))(param_4);
  }
  return (undefined2)(uVar1);
}


// Reference entry 111761c0; body size 12 bytes.
#line 1 "ENTRY_111761c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111761c0(int *param_1)

{
  *(undefined2*)(*param_1 + 0xd0) = (undefined2)(0);
  return;
}


// Reference entry 111767f0; body size 12 bytes.
#line 1 "ENTRY_111767f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 __fastcall FUN_111767f0(int *param_1)

{
  return (undefined2)(*(undefined2 *)(*param_1 + 0xd0));
}


// Reference entry 111770b0; body size 61 bytes.
#line 1 "ENTRY_111770b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_111770b0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = (int)(*(int *)(param_1 + 8));
  iVar2 = (int)(*(int *)(param_1 + 200));
  uVar3 = (uint)(*(uint *)(iVar1 + 8));
  if ((uint)(iVar2 * 4) <= uVar3) {
    iVar4 = (int)(*(int *)(iVar1 + 0xc) + iVar2 * -4 + uVar3);
    *(uint*)(iVar1 + 8) = (uint)(uVar3 + iVar2 * -4);
    *(int*)(param_1 + 0x18) = (int)(iVar4);
    return (undefined4)(((uint)((int3)((uint)iVar4 >> 8)) << 8 | (uint)(iVar4 != 0)));
  }
  *(undefined1*)(iVar1 + 0x10) = (undefined1)(1);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  return (undefined4)(0);
}


// Reference entry 11177140; body size 7 bytes.
#line 1 "ENTRY_11177140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11177140(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  int iVar3;
  int iStack_4;
  
  iVar1 = (int)(*param_1);
  iStack_4 = (int)(iVar1);
  iVar3 = (int)(thunk_FUN_110b13d0(param_2,param_3,param_4));
  if ((iVar3 == 0) && (*(char *)(iVar1 + 0x14) != '\0')) {
    thunk_FUN_112af4e0("FlashTraceBrowse",2,"browse cache allocator full - resetting to empty");
    iVar3 = (int)(*(int *)(iVar1 + 0xc4));
    while (iVar2 = iVar3, iVar2 != 0) {
      iVar3 = (int)(*(int *)(iVar2 + 0x3c));
      if (*(char *)(iVar2 + 0x31) == '\0') {
        thunk_FUN_110aeb40(*(undefined4 *)(iVar2 + 0x1c),*(undefined4 *)(iVar2 + 0x20),0x3ec,0,0);
        thunk_FUN_110adba0();
      }
    }
    iStack_4 = (int)(iVar1);
    thunk_FUN_112a7f50(iVar1 + 0x1c);
    thunk_FUN_110b48e0(&iStack_4);
    thunk_FUN_112a8010(iVar1 + 0x1c);
    iStack_4 = (int)(iVar1 + 0x4c);
    thunk_FUN_112a7f50(iVar1 + 0x68);
    thunk_FUN_110b48e0(&iStack_4);
    thunk_FUN_112a8010(iVar1 + 0x68);
    thunk_FUN_110ae540();
    thunk_FUN_110b13d0(param_2,param_3,param_4);
  }
  return;
}


// Reference entry 111771f0; body size 32 bytes.
#line 1 "ENTRY_111771f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_111771f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x1001456f(param_1,param_2,param_3,param_4,0);
  return (undefined4)(param_2);
}


// Reference entry 11177220; body size 12 bytes.
#line 1 "ENTRY_11177220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11177220(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_4;
  
  uStack_4 = (undefined4)(0);
  thunk_FUN_110b19f0(param_1,param_2,param_3,0,&uStack_4,0);
  return (undefined4)(uStack_4);
}


// Reference entry 11177480; body size 141 bytes.
#line 1 "ENTRY_11177480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11177480(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  size_t _Size;
  
  iVar1 = (int)(*(int *)(param_1 + 200));
  iVar4 = (int)(*(int *)(param_1 + 8));
  if (*(char *)(param_1 + 0xc4) == '\0') {
    iVar2 = (int)(*(int *)(param_1 + 0x1c));
    _Size = (size_t)(iVar2 * 4);
    uVar5 = (uint)(_Size + 0x10);
    if (*(uint *)(iVar4 + 8) < uVar5) {
      *(undefined1*)(iVar4 + 0x10) = (undefined1)(1);
    }
    else {
      puVar3 = (undefined4 *)(*(undefined4 **)(iVar4 + 0xc));
      *(int*)(iVar4 + 8) = (int)(*(int *)(iVar4 + 8) - uVar5);
      *(undefined4**)(iVar4 + 0xc) = (undefined4 *)(puVar3 + iVar2 + 4);
      if ((undefined4 *)(puVar3) != (undefined4 *)0x0) {
        puVar3[3] = (undefined4)(puVar3 + 4);
        *puVar3 = (undefined4)(*(undefined4 *)(param_1 + 0x10));
        puVar3[1] = (undefined4)(*(undefined4 *)(param_1 + 0x1c));
        puVar3[2] = (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10));
        *(undefined4**)(*(int *)(param_1 + 0xc) + 0x10) = (undefined4 *)(puVar3);
        memcpy((void *)puVar3[3],*(void **)(param_1 + 0x18),_Size);
      }
    }
    iVar4 = (int)(*(int *)(param_1 + 8));
  }
  *(int*)(iVar4 + 8) = (int)((*(int *)(param_1 + 0x18) - *(int *)(iVar4 + 0xc)) + iVar1 * 4);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  return;
}


// Reference entry 11177d00; body size 54 bytes.
#line 1 "ENTRY_11177d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_11177d00(undefined4 param_2,int *param_3)
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


// Reference entry 11177d50; body size 54 bytes.
#line 1 "ENTRY_11177d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_11177d50(undefined4 param_2,int *param_3)
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


// Reference entry 11177da0; body size 54 bytes.
#line 1 "ENTRY_11177da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_11177da0(undefined4 param_2,int *param_3)
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


// Reference entry 11177e10; body size 31 bytes.
#line 1 "ENTRY_11177e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11177e10(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  thunk_FUN_110b56c0();
  return (undefined4 *)(param_1);
}


// Reference entry 11177f40; body size 56 bytes.
#line 1 "ENTRY_11177f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_11177f40(undefined4 *param_2)
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


// Reference entry 11177f90; body size 56 bytes.
#line 1 "ENTRY_11177f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_11177f90(undefined4 *param_2)
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


// Reference entry 11177fe0; body size 56 bytes.
#line 1 "ENTRY_11177fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_11177fe0(undefined4 *param_2)
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


// Reference entry 11178050; body size 33 bytes.
#line 1 "ENTRY_11178050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11178050(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  thunk_FUN_110b56c0();
  return (undefined4 *)(param_1);
}


// Reference entry 11178280; body size 25 bytes.
#line 1 "ENTRY_11178280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11178280(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 111782a0; body size 25 bytes.
#line 1 "ENTRY_111782a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111782a0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 111782c0; body size 25 bytes.
#line 1 "ENTRY_111782c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111782c0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 111782e0; body size 25 bytes.
#line 1 "ENTRY_111782e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111782e0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 11178300; body size 25 bytes.
#line 1 "ENTRY_11178300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11178300(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x24));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 111783c0; body size 33 bytes.
#line 1 "ENTRY_111783c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_111783c0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 111783f0; body size 33 bytes.
#line 1 "ENTRY_111783f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_111783f0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 11178690; body size 23 bytes.
#line 1 "ENTRY_11178690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11178690(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1117f820(param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x14);
  return;
}


// Reference entry 111786b0; body size 56 bytes.
#line 1 "ENTRY_111786b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111786b0(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(*param_2);
  piVar2 = (int *)(*(int **)(param_1 + 4));
  *piVar2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  *(char*)(piVar2 + 1) = (char)((char)param_2[1]);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 11178820; body size 56 bytes.
#line 1 "ENTRY_11178820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11178820(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(*param_2);
  piVar2 = (int *)(*(int **)(param_1 + 4));
  *piVar2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  *(char*)(piVar2 + 1) = (char)((char)param_2[1]);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 11178950; body size 23 bytes.
#line 1 "ENTRY_11178950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11178950(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1117f820(param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x14);
  return;
}


// Reference entry 11178970; body size 56 bytes.
#line 1 "ENTRY_11178970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11178970(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(*param_2);
  piVar2 = (int *)(*(int **)(param_1 + 4));
  *piVar2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  *(char*)(piVar2 + 1) = (char)((char)param_2[1]);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 1117a110; body size 28 bytes.
#line 1 "ENTRY_1117a110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1117a110(undefined4 param_1,void *param_2)

{
  param_1 = (undefined4)(param_2);
  *(undefined***)((int)param_2 + 0x14) = (undefined **)((uint)&ghidra_vftable_RMSQuickSkip);
  free(param_2);
  return;
}


// Reference entry 1117a700; body size 37 bytes.
#line 1 "ENTRY_1117a700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1117a700(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar1 = (char)(thunk_FUN_111a0940(param_1 + 0x10));
    if (cVar1 == '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 1117a730; body size 37 bytes.
#line 1 "ENTRY_1117a730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1117a730(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar1 = (char)(thunk_FUN_111a0940(param_1 + 0x10));
    if (cVar1 == '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 1117a760; body size 37 bytes.
#line 1 "ENTRY_1117a760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1117a760(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar1 = (char)(thunk_FUN_111a0940(param_1 + 0x10));
    if (cVar1 == '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 1117a790; body size 31 bytes.
#line 1 "ENTRY_1117a790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_1117a790(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (in_EAX = *param_2, *(int *)(param_1 + 0x10) <= (int)in_EAX)) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 1117a7c0; body size 31 bytes.
#line 1 "ENTRY_1117a7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_1117a7c0(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (in_EAX = *param_2, *(int *)(param_1 + 0x10) <= (int)in_EAX)) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 1117ab40; body size 59 bytes.
#line 1 "ENTRY_1117ab40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * FUN_1117ab40(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  if (param_2 == param_1) {
    return (undefined4 *)(param_3);
  }
  do {
    iVar1 = (int)(param_2 + -8);
    param_3 = (undefined4 *)(param_3 + -2);
    *param_3 = (undefined4)(*(undefined4 *)(param_2 + -8));
    thunk_FUN_101ba530(param_2 + -4);
    param_2 = (int)(iVar1);
  } while (iVar1 != param_1);
  return (undefined4 *)(param_3);
}


// Reference entry 1117bae0; body size 56 bytes.
#line 1 "ENTRY_1117bae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1117bae0(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  *param_3 = (undefined4)(*param_1);
  thunk_FUN_101ba530(param_1 + 1);
  thunk_FUN_1117b9b0(param_1,0,param_2 - (int)param_1 >> 3,param_4,param_5);
  return;
}


// Reference entry 1117bc80; body size 107 bytes.
#line 1 "ENTRY_1117bc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1117bc80(int param_1,int param_2,int param_3,undefined4 *param_4,code *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  
  while (param_3 < param_2) {
    iVar2 = (int)(param_2 + -1 >> 1);
    puVar3 = (undefined4 *)((undefined4 *)(iVar2 * 8 + param_1));
    cVar1 = (char)((*param_5)(puVar3,param_4));
    if (cVar1 == '\0') break;
    *(undefined4*)(param_1 + param_2 * 8) = (undefined4)(*puVar3);
    thunk_FUN_101ba530(puVar3 + 1);
    param_2 = (int)(iVar2);
  }
  *(undefined4*)(param_1 + param_2 * 8) = (undefined4)(*param_4);
  thunk_FUN_101ba530(param_4 + 1);
  return;
}


// Reference entry 1117c9c0; body size 36 bytes.
#line 1 "ENTRY_1117c9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1117c9c0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 1117c9f0; body size 36 bytes.
#line 1 "ENTRY_1117c9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1117c9f0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 1117ced0; body size 20 bytes.
#line 1 "ENTRY_1117ced0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1117ced0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_111780a0(param_1,param_2,param_2);
  return;
}


// Reference entry 1117cff0; body size 22 bytes.
#line 1 "ENTRY_1117cff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *
FUN_1117cff0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)((uint)&ghidra_vftable_RMSQuickSkip);
  param_2[2] = (undefined4)(0xff);
  param_2[3] = (undefined4)(0xffffffff);
  param_2[4] = (undefined4)(0xffffffff);
  return (undefined4 *)(param_2 + 1);
}


// Reference entry 1117d010; body size 14 bytes.
#line 1 "ENTRY_1117d010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1117d010(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_1117f820(param_3);
  return;
}


// Reference entry 1117d030; body size 14 bytes.
#line 1 "ENTRY_1117d030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1117d030(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_1117f820(param_3);
  return;
}


// Reference entry 1117d520; body size 12 bytes.
#line 1 "ENTRY_1117d520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1117d520(undefined4 param_1,int param_2)

{
  *(undefined***)(param_2 + 4) = (undefined **)((uint)&ghidra_vftable_RMSQuickSkip);
  return;
}


// Reference entry 1117d690; body size 36 bytes.
#line 1 "ENTRY_1117d690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1117d690(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_11178a60(puVar1,param_2);
  return;
}


// Reference entry 1117d6c0; body size 36 bytes.
#line 1 "ENTRY_1117d6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1117d6c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_11178c10(puVar1,param_2);
  return;
}


// Reference entry 1117d6f0; body size 40 bytes.
#line 1 "ENTRY_1117d6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1117d6f0(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)((param_1 + 4)) != *(int *)((param_1 + 8))) {
    thunk_FUN_1117f820(param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x14);
    return;
  }
  thunk_FUN_11178dc0(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 1117ddd0; body size 31 bytes.
#line 1 "ENTRY_1117ddd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1117ddd0(int param_1,int param_2,undefined4 param_3)

{
  thunk_FUN_1117bea0(param_1,param_2,param_2 - param_1 >> 3,param_3);
  return;
}


// Reference entry 1117df90; body size 28 bytes.
#line 1 "ENTRY_1117df90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1117df90(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 1117dfc0; body size 49 bytes.
#line 1 "ENTRY_1117dfc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_1117dfc0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  *param_1 = (int)(0);
  if ((int *)(param_1) != (int *)(param_2)) {
    iVar1 = (int)(*param_2);
    *param_1 = (int)(iVar1);
    if (iVar1 != 0) {
      thunk_FUN_1123fce0(iVar1 + 4);
    }
  }
  return (int *)(param_1);
}


// Reference entry 1117e7e0; body size 52 bytes.
#line 1 "ENTRY_1117e7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1117e7e0(undefined4 *param_1)

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


// Reference entry 1117e830; body size 52 bytes.
#line 1 "ENTRY_1117e830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1117e830(undefined4 *param_1)

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


// Reference entry 1117e880; body size 52 bytes.
#line 1 "ENTRY_1117e880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1117e880(undefined4 *param_1)

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


// Reference entry 1117e8d0; body size 52 bytes.
#line 1 "ENTRY_1117e8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1117e8d0(undefined4 *param_1)

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


// Reference entry 1117e920; body size 52 bytes.
#line 1 "ENTRY_1117e920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1117e920(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x24));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 1117e9c0; body size 49 bytes.
#line 1 "ENTRY_1117e9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1117e9c0(undefined4 *param_2)
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
  return (undefined4 *)(param_1);
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
  return (undefined4 *)(param_1);
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
  *(char*)(param_1 + 1) = (char)((char)param_2[1]);
  return (int *)(param_1);
}


// Reference entry 1117f7a0; body size 94 bytes.
#line 1 "ENTRY_1117f7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1117f7a0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = (undefined4)(*param_2);
  iVar1 = (int)(param_2[1]);
  param_1[1] = (undefined4)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  uVar2 = (undefined4)(param_2[2]);
  uVar3 = (undefined4)(param_2[4]);
  uVar4 = (undefined4)(param_2[3]);
  param_2[4] = (undefined4)(0);
  param_2[3] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  param_1[2] = (undefined4)(uVar2);
  param_1[3] = (undefined4)(uVar4);
  param_1[4] = (undefined4)(uVar3);
  return (undefined4 *)(param_1);
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
  if (((char *)(param_3) == (char *)0x0) || (*param_3 == '\0')) {
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
    *(undefined1*)(_Size + (int)_Dst) = (undefined1)(0);
  }
  param_1[1] = (undefined4)(_Dst);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1117fe50; body size 33 bytes.
#line 1 "ENTRY_1117fe50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1117fe50(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined***)(*(int *)(param_1 + 4) + 0x14) = (undefined **)((uint)&ghidra_vftable_RMSQuickSkip);
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x24);
    }
  }
  return;
}


// Reference entry 11180230; body size 8 bytes.
#line 1 "ENTRY_11180230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11180230(int param_1)

{
  *(undefined***)(param_1 + 4) = (undefined **)((uint)&ghidra_vftable_RMSQuickSkip);
  return;
}


// Reference entry 11180d30; body size 31 bytes.
#line 1 "ENTRY_11180d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11180d30(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    thunk_FUN_111780a0(*param_2,param_2[1],param_2);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11180d60; body size 29 bytes.
#line 1 "ENTRY_11180d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11180d60(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  thunk_FUN_101ba530(param_2 + 1);
  return (undefined4 *)(param_1);
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
  return (undefined4 *)(param_1);
}


// Reference entry 11181d70; body size 34 bytes.
#line 1 "ENTRY_11181d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_11181d70(byte param_2)
{
  int param_1 = (int )this;
  *(undefined***)(param_1 + 4) = (undefined **)((uint)&ghidra_vftable_RMSQuickSkip);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (int)(param_1);
}


// Reference entry 111823f0; body size 31 bytes.
#line 1 "ENTRY_111823f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111823f0(undefined4 *param_1)

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


// Reference entry 11182420; body size 31 bytes.
#line 1 "ENTRY_11182420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11182420(undefined4 *param_1)

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


// Reference entry 11182450; body size 31 bytes.
#line 1 "ENTRY_11182450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11182450(undefined4 *param_1)

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


// Reference entry 11182480; body size 31 bytes.
#line 1 "ENTRY_11182480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11182480(undefined4 *param_1)

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


// Reference entry 111824b0; body size 31 bytes.
#line 1 "ENTRY_111824b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111824b0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x24));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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
    return (uint)(0x3fffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 111825f0; body size 49 bytes.
#line 1 "ENTRY_111825f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_111825f0(uint param_2)
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


// Reference entry 11182630; body size 63 bytes.
#line 1 "ENTRY_11182630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_11182630(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)((param_1[2] - *param_1) / 0x14);
  if (0xccccccc - (uVar1 >> 1) < uVar1) {
    return (uint)(0xccccccc);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 11182680; body size 49 bytes.
#line 1 "ENTRY_11182680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_11182680(uint param_2)
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


// Reference entry 111826c0; body size 49 bytes.
#line 1 "ENTRY_111826c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_111826c0(uint param_2)
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


// Reference entry 111829b0; body size 14 bytes.
#line 1 "ENTRY_111829b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111829b0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 111829d0; body size 14 bytes.
#line 1 "ENTRY_111829d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111829d0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 111829f0; body size 14 bytes.
#line 1 "ENTRY_111829f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111829f0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 11182a10; body size 14 bytes.
#line 1 "ENTRY_11182a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11182a10(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 11182a30; body size 14 bytes.
#line 1 "ENTRY_11182a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11182a30(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x71c71c7) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
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


// Reference entry 11182ba0; body size 21 bytes.
#line 1 "ENTRY_11182ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11182ba0(undefined4 *param_1, unsigned int recovered_unused_stack_0)

{
  thunk_FUN_111780a0(*param_1,param_1[1],param_1);
  return;
}


// Reference entry 11184470; body size 38 bytes.
#line 1 "ENTRY_11184470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_11184470(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 111844a0; body size 38 bytes.
#line 1 "ENTRY_111844a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_111844a0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
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


// Reference entry 11188820; body size 48 bytes.
#line 1 "ENTRY_11188820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_11188820(uint param_2)
{
  int *param_1 = (int *)this;
  if (param_2 < (uint)((param_1[1] - *param_1) / 0x14)) {
    return (int)(*param_1 + param_2 * 0x14);
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
    for (uVar1 = (uint)(0); (param_2 = (int)(param_2 + -1), param_2 != 0 && (uVar1 < 5)); uVar1 = uVar1 + 1) {
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
  *(undefined4*)(param_1 + 0x40) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0x44) = (undefined4)(param_4);
  thunk_FUN_101ba530(param_3);
  *(undefined4*)(param_1 + 0x6c) = (undefined4)(0);
  return;
}


// Reference entry 1118b4d0; body size 47 bytes.
#line 1 "ENTRY_1118b4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_1118b4d0(int param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if (*(char *)(param_1 + 0x68) != '\0') {
    for (piVar1 = (int *)(*(int **)(param_1 + 4));(int *)( piVar1) != *(int **)(param_1 + 8); piVar1 = piVar1 + 1) {
      if (*(int *)(*piVar1 + 0x10) == (int)(param_2)) {
        return (int)(*piVar1);
      }
    }
  }
  return (int)(0);
}


// Reference entry 1118c610; body size 36 bytes.
#line 1 "ENTRY_1118c610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1118c610(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
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
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
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
  if (*(int *)((param_1 + 4)) != *(int *)((param_1 + 8))) {
    thunk_FUN_1117f820(param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x14);
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
  return (undefined4)(param_1);
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


// Reference entry 1118cbb0; body size 8 bytes.
#line 1 "ENTRY_1118cbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_1118cbb0(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)((int *)(param_1 + 0x10));
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


// Reference entry 1118d1c0; body size 8 bytes.
#line 1 "ENTRY_1118d1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_1118d1c0(int *param_2)
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


// Reference entry 1118d1d0; body size 8 bytes.
#line 1 "ENTRY_1118d1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_1118d1d0(int *param_2)
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
  return (undefined4 *)(param_1);
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
  return (undefined4 *)(param_1);
}


// Reference entry 1118d470; body size 25 bytes.
#line 1 "ENTRY_1118d470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1118d470(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x24));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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
  return (int *)(param_2);
}


// Reference entry 1118d600; body size 31 bytes.
#line 1 "ENTRY_1118d600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_1118d600(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') && (in_EAX = *param_2, *(uint *)(param_1 + 0x10) <= (uint)(in_EAX))
     ) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
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
    *(undefined4*)(param_2 + 8) = (undefined4)(0);
    *(undefined4*)(param_2 + 0xc) = (undefined4)(0);
    *(undefined4*)(param_2 + 0x10) = (undefined4)(0);
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
  return (undefined4 *)(param_1);
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
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
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
  return (undefined4 *)(param_1);
}


// Reference entry 1118dcb0; body size 11 bytes.
#line 1 "ENTRY_1118dcb0"

/* WARNING: Removing unreachable block_1118dcb0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1118dcb0(undefined4 *param_1)

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
  if ((int *)(int *)(param_1[1]) != (int *)(0x0)) {
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
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
    *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
    *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
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
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 1118e740; body size 14 bytes.
#line 1 "ENTRY_1118e740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1118e740(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x71c71c7) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
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
  for (puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 4));(undefined4 *)((puVar2)) != (undefined4 *)(puVar1); puVar2 = puVar2 + 1) {
    (**(code **)(*(int *)*puVar2 + 4))(param_2,param_3);
  }
  return;
}


// Reference entry 1118f520; body size 117 bytes.
#line 1 "ENTRY_1118f520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1118f520(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined1 auStack_104 [256];
  uint uStack_4;
  
  uStack_10c = (undefined4)(auStack_104);
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)auStack_104);
  uStack_108 = (undefined4)(0x100);
  pcVar2 = (char *)((char *)&uStack_10c);
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x10))();
  pcVar3 = (char *)("On");
  do {
    if (((*pcVar3 != *pcVar2) || (*pcVar3 == '\0')) || (pcVar1 = pcVar3 + 1, (char *)(*pcVar1) != (char *)(pcVar2)[1]))
    break;
    pcVar3 = (char *)(pcVar3 + 2);
    pcVar2 = (char *)(pcVar2 + 2);
  } while (*pcVar1 != '\0');
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1118f5c0; body size 27 bytes.
#line 1 "ENTRY_1118f5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_1118f5c0(int param_1,int param_2)

{
  short sVar1;
  
  sVar1 = (short)((**(code **)(**(int **)(param_1 + 0x2c) + 0xc))(*(undefined4 *)(param_2 + 4)));
  return (bool)(sVar1 == 0);
}


// Reference entry 1118f5f0; body size 32 bytes.
#line 1 "ENTRY_1118f5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1118f5f0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x28))(&param_1);
  return (undefined4)(0);
}


// Reference entry 1118f620; body size 87 bytes.
#line 1 "ENTRY_1118f620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_1118f620(int param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  bool bVar6;
  
  pbVar3 = (byte *)(&DAT_118947c0);
  pbVar4 = (byte *)(*(byte **)(param_2 + 4));
  do {
    bVar1 = (byte)(*pbVar4);
    bVar6 = (bool)(bVar1 < *pbVar3);
    if (bVar1 != *pbVar3) {
LAB_1118f650:
      uVar5 = (uint)(-(uint)bVar6 | 1);
      goto LAB_1118f655;
    }
    if (bVar1 == 0) break;
    bVar1 = (byte)(pbVar4[1]);
    bVar6 = (bool)(bVar1 < pbVar3[1]);
    if ((byte *)((bVar1)) != (byte *)(pbVar3[1])) goto LAB_1118f650;
    pbVar4 = (byte *)(pbVar4 + 2);
    pbVar3 = (byte *)(pbVar3 + 2);
  } while (bVar1 != 0);
  uVar5 = (uint)(0);
LAB_1118f655:
  sVar2 = (short)((**(code **)(**(int **)(param_1 + 0x2c) + 0x24))(uVar5 == 0,&DAT_118bb268));
  return (bool)(sVar2 == 0);
}


// Reference entry 1118f690; body size 32 bytes.
#line 1 "ENTRY_1118f690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1118f690(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x40))(&param_1);
  return (undefined4)(0);
}


// Reference entry 1118f6c0; body size 87 bytes.
#line 1 "ENTRY_1118f6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_1118f6c0(int param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  bool bVar6;
  
  pbVar3 = (byte *)(&DAT_118947c0);
  pbVar4 = (byte *)(*(byte **)(param_2 + 4));
  do {
    bVar1 = (byte)(*pbVar4);
    bVar6 = (bool)(bVar1 < *pbVar3);
    if (bVar1 != *pbVar3) {
LAB_1118f6f0:
      uVar5 = (uint)(-(uint)bVar6 | 1);
      goto LAB_1118f6f5;
    }
    if (bVar1 == 0) break;
    bVar1 = (byte)(pbVar4[1]);
    bVar6 = (bool)(bVar1 < pbVar3[1]);
    if ((byte *)((bVar1)) != (byte *)(pbVar3[1])) goto LAB_1118f6f0;
    pbVar4 = (byte *)(pbVar4 + 2);
    pbVar3 = (byte *)(pbVar3 + 2);
  } while (bVar1 != 0);
  uVar5 = (uint)(0);
LAB_1118f6f5:
  sVar2 = (short)((**(code **)(**(int **)(param_1 + 0x2c) + 0x3c))(uVar5 == 0,&DAT_118bb268));
  return (bool)(sVar2 == 0);
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
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[9]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[8]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
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
    if ((int)(param_1) == *(int *)(*(int *)(uVar1 + 0x1211f6c0) + 4)) {
      return (int)(*(int *)(uVar1 + 0x1211f6c0));
    }
    uVar1 = (uint)(uVar1 + 4);
  } while (uVar1 < 0xc);
  return (int)(0);
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
  return (bool)((char)((uint)puVar1 >> 0x18) == '\0');

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
  return (bool)((char)((uint)puVar1 >> 0x18) == '\0');

 } catch (...) { }
}


// Reference entry 1118f920; body size 113 bytes.
#line 1 "ENTRY_1118f920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1118f920(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined1 auStack_104 [256];
  uint uStack_4;
  
  uStack_10c = (undefined4)(auStack_104);
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)auStack_104);
  uStack_108 = (undefined4)(0x100);
  pcVar2 = (char *)((char *)&uStack_10c);
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x10))();
  pcVar3 = (char *)("On");
  do {
    if (((*pcVar3 != *pcVar2) || (*pcVar3 == '\0')) || (pcVar1 = pcVar3 + 1, (char *)(*pcVar1) != (char *)(pcVar2)[1]))
    break;
    pcVar3 = (char *)(pcVar3 + 2);
    pcVar2 = (char *)(pcVar2 + 2);
  } while (*pcVar1 != '\0');
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1118f9b0; body size 85 bytes.
#line 1 "ENTRY_1118f9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_1118f9b0(int param_2)
{
  int param_1 = (int )this;
  byte bVar1;
  short sVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  bool bVar6;
  
  pbVar3 = (byte *)(&DAT_118947c0);
  pbVar5 = (byte *)(*(byte **)(param_2 + 4));
  do {
    bVar1 = (byte)(*pbVar5);
    bVar6 = (bool)(bVar1 < *pbVar3);
    if (bVar1 != *pbVar3) {
LAB_1118f9e0:
      uVar4 = (uint)(-(uint)bVar6 | 1);
      goto LAB_1118f9e5;
    }
    if (bVar1 == 0) break;
    bVar1 = (byte)(pbVar5[1]);
    bVar6 = (bool)(bVar1 < pbVar3[1]);
    if ((byte *)((bVar1)) != (byte *)(pbVar3[1])) goto LAB_1118f9e0;
    pbVar5 = (byte *)(pbVar5 + 2);
    pbVar3 = (byte *)(pbVar3 + 2);
  } while (bVar1 != 0);
  uVar4 = (uint)(0);
LAB_1118f9e5:
  sVar2 = (short)((**(code **)(**(int **)(param_1 + 0x2c) + 0x24))(uVar4 == 0,&DAT_118bb268));
  return (bool)(sVar2 == 0);
}


// Reference entry 1118fa20; body size 85 bytes.
#line 1 "ENTRY_1118fa20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_1118fa20(int param_2)
{
  int param_1 = (int )this;
  byte bVar1;
  short sVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  bool bVar6;
  
  pbVar3 = (byte *)(&DAT_118947c0);
  pbVar5 = (byte *)(*(byte **)(param_2 + 4));
  do {
    bVar1 = (byte)(*pbVar5);
    bVar6 = (bool)(bVar1 < *pbVar3);
    if (bVar1 != *pbVar3) {
LAB_1118fa50:
      uVar4 = (uint)(-(uint)bVar6 | 1);
      goto LAB_1118fa55;
    }
    if (bVar1 == 0) break;
    bVar1 = (byte)(pbVar5[1]);
    bVar6 = (bool)(bVar1 < pbVar3[1]);
    if ((byte *)((bVar1)) != (byte *)(pbVar3[1])) goto LAB_1118fa50;
    pbVar5 = (byte *)(pbVar5 + 2);
    pbVar3 = (byte *)(pbVar3 + 2);
  } while (bVar1 != 0);
  uVar4 = (uint)(0);
LAB_1118fa55:
  sVar2 = (short)((**(code **)(**(int **)(param_1 + 0x2c) + 0x3c))(uVar4 == 0,&DAT_118bb268));
  return (bool)(sVar2 == 0);
}


// Reference entry 1118fa90; body size 24 bytes.
#line 1 "ENTRY_1118fa90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_1118fa90(int param_2)
{
  int param_1 = (int )this;
  short sVar1;
  
  sVar1 = (short)((**(code **)(**(int **)(param_1 + 0x2c) + 0xc))(*(undefined4 *)(param_2 + 4)));
  return (bool)(sVar1 == 0);
}


// Reference entry 1118fcb0; body size 45 bytes.
#line 1 "ENTRY_1118fcb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_1118fcb0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    return (undefined4)(0);
  }
  uVar1 = (undefined4)(func_0x1005edae(param_2,param_3,param_4,param_1,*(undefined4 *)(param_1 + 0xc),0x1211f6c0,
                          3));
  return (undefined4)(uVar1);
}


// Reference entry 1118fcf0; body size 42 bytes.
#line 1 "ENTRY_1118fcf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_1118fcf0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    return (undefined4)(0);
  }
  uVar1 = (undefined4)(func_0x10045142(param_2,param_3,param_4,param_1,0x1211f6c0,3));
  return (undefined4)(uVar1);
}


// Reference entry 1118fe20; body size 42 bytes.
#line 1 "ENTRY_1118fe20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_1118fe20(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    return (undefined4)(0);
  }
  uVar1 = (undefined4)(func_0x10019baf(param_2,param_3,param_4,param_1,0x1211f6c0,3));
  return (undefined4)(uVar1);
}


// Reference entry 11190180; body size 34 bytes.
#line 1 "ENTRY_11190180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_11190180(int param_1)

{
  char cVar1;
  
  cVar1 = (char)('4');
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x44))(0,"Master",&param_1);
  return (bool)(cVar1 == '\0');
}


// Reference entry 111901b0; body size 89 bytes.
#line 1 "ENTRY_111901b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_111901b0(int param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  bool bVar6;
  
  pbVar4 = (byte *)(&DAT_119cea34);
  pbVar3 = (byte *)(*(byte **)(param_2 + 4));
  do {
    bVar1 = (byte)(*pbVar4);
    bVar6 = (bool)(bVar1 < *pbVar3);
    if (bVar1 != *pbVar3) {
LAB_111901e0:
      uVar5 = (uint)(-(uint)bVar6 | 1);
      goto LAB_111901e5;
    }
    if (bVar1 == 0) break;
    bVar1 = (byte)(pbVar4[1]);
    bVar6 = (bool)(bVar1 < pbVar3[1]);
    if ((byte *)((bVar1)) != (byte *)(pbVar3[1])) goto LAB_111901e0;
    pbVar4 = (byte *)(pbVar4 + 2);
    pbVar3 = (byte *)(pbVar3 + 2);
  } while (bVar1 != 0);
  uVar5 = (uint)(0);
LAB_111901e5:
  sVar2 = (short)((**(code **)(**(int **)(param_1 + 0x2c) + 0x48))(0,"Master",uVar5 == 0));
  return (bool)(sVar2 == 0);
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
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[9]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[8]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
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
    if ((int)(param_1) == *(int *)(*(int *)(uVar1 + 0x1211f908) + 4)) {
      return (int)(*(int *)(uVar1 + 0x1211f908));
    }
    uVar1 = (uint)(uVar1 + 4);
  } while (uVar1 < 4);
  return (int)(0);
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
  return (bool)(cVar1 == '\0');

 } catch (...) { }
}


// Reference entry 111905a0; body size 87 bytes.
#line 1 "ENTRY_111905a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_111905a0(int param_2)
{
  int param_1 = (int )this;
  byte bVar1;
  short sVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  bool bVar6;
  
  pbVar5 = (byte *)(&DAT_119cea34);
  pbVar3 = (byte *)(*(byte **)(param_2 + 4));
  do {
    bVar1 = (byte)(*pbVar5);
    bVar6 = (bool)(bVar1 < *pbVar3);
    if (bVar1 != *pbVar3) {
LAB_111905d0:
      uVar4 = (uint)(-(uint)bVar6 | 1);
      goto LAB_111905d5;
    }
    if (bVar1 == 0) break;
    bVar1 = (byte)(pbVar5[1]);
    bVar6 = (bool)(bVar1 < pbVar3[1]);
    if ((byte *)((bVar1)) != (byte *)(pbVar3[1])) goto LAB_111905d0;
    pbVar5 = (byte *)(pbVar5 + 2);
    pbVar3 = (byte *)(pbVar3 + 2);
  } while (bVar1 != 0);
  uVar4 = (uint)(0);
LAB_111905d5:
  sVar2 = (short)((**(code **)(**(int **)(param_1 + 0x2c) + 0x48))(0,"Master",uVar4 == 0));
  return (bool)(sVar2 == 0);
}


// Reference entry 11190a20; body size 45 bytes.
#line 1 "ENTRY_11190a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_11190a20(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    return (undefined4)(0);
  }
  uVar1 = (undefined4)(func_0x1005edae(param_2,param_3,param_4,param_1,*(undefined4 *)(param_1 + 0xc),0x1211f908,
                          1));
  return (undefined4)(uVar1);
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
    uVar1 = (undefined8)(DAT_119caf48);
    *param_4 = (undefined4)(4);
    *(undefined8*)(param_4 + 2) = (undefined8)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 11191050; body size 42 bytes.
#line 1 "ENTRY_11191050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_11191050(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    return (undefined4)(0);
  }
  uVar1 = (undefined4)(func_0x10019baf(param_2,param_3,param_4,param_1,0x1211f908,1));
  return (undefined4)(uVar1);
}


// Reference entry 11191900; body size 33 bytes.
#line 1 "ENTRY_11191900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __fastcall FUN_11191900(void *param_1)

{
  _eh_vector_constructor_iterator_
            (param_1,0x6c,4,(_func_void_void_ptr *)LAB_1003a0c1,
             (_func_void_void_ptr *)LAB_10029f1e);
  return (void *)(param_1);
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
    thunk_FUN_1109f7f0(1,DAT_12126b84 ^ (uint)&stack0xfffffffc);
    cVar2 = (char)(thunk_FUN_110a1280(uVar9));
    if (cVar2 != '\0') {
      puVar3 = (undefined4 *)((undefined4 *)(**(code **)**(undefined4 **)(iVar1 + 0x14))(&iStack_18));

      puVar4 = (undefined4 *)((undefined4 *)(**(code **)(**(int **)(iVar1 + 0x14) + 4))(&iStack_14));
      puVar8 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)(undefined1 *)(*puVar3) != (undefined1 *)(0x0)) {
        puVar8 = (undefined1 *)((undefined1 *)*puVar3);
      }
      puVar7 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)(undefined1 *)(*puVar4) != (undefined1 *)(0x0)) {
        puVar7 = (undefined1 *)((undefined1 *)*puVar4);
      }
      thunk_FUN_112af4e0(&DAT_118c9974,3,"SWF UPnP: unsubscribing from %s - sid=%s\n",puVar7,puVar8)
      ;
      uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(1)));
      if ((iStack_14 != 0) && (*(int *)(iStack_14 + -0x10) < 0xffff)) {
        iVar5 = (int)(thunk_FUN_1123fcd0((void *)(iStack_14 + -0x10)));
        if (iVar5 == 0) {
          *(undefined4*)(iStack_14 + -8) = (undefined4)(0);
          *(undefined4*)(iStack_14 + -0xc) = (undefined4)(0);
          thunk_FUN_113cfb70(iStack_14,*(undefined4 *)(iStack_14 + -4));
          free((void *)(iStack_14 + -0x10));
        }
      }

      if ((iStack_18 != 0) && (*(int *)(iStack_18 + -0x10) < 0xffff)) {
        iVar5 = (int)(thunk_FUN_1123fcd0((void *)(iStack_18 + -0x10)));
        if (iVar5 == 0) {
          *(undefined4*)(iStack_18 + -8) = (undefined4)(0);
          *(undefined4*)(iStack_18 + -0xc) = (undefined4)(0);
          thunk_FUN_113cfb70(iStack_18,*(undefined4 *)(iStack_18 + -4));
          free((void *)(iStack_18 + -0x10));
        }
      }

    }
    piVar6 = (int *)((int *)thunk_FUN_1114a810());
    puVar3 = (undefined4 *)((undefined4 *)(**(code **)**(undefined4 **)(iVar1 + 0x14))(&iStack_1c));

    puVar8 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)(undefined1 *)(*puVar3) != (undefined1 *)(0x0)) {
      puVar8 = (undefined1 *)((undefined1 *)*puVar3);
    }
    (**(code **)(*piVar6 + 0x18))(puVar8,param_2);

    if ((iStack_1c != 0) && (*(int *)(iStack_1c + -0x10) < 0xffff)) {
      iVar5 = (int)(thunk_FUN_1123fcd0((void *)(iStack_1c + -0x10)));
      if (iVar5 == 0) {
        *(undefined4*)(iStack_1c + -8) = (undefined4)(0);
        *(undefined4*)(iStack_1c + -0xc) = (undefined4)(0);
        thunk_FUN_113cfb70(iStack_1c,*(undefined4 *)(iStack_1c + -4));
        free((void *)(iStack_1c + -0x10));
      }
    }

    *(undefined4*)(iVar1 + 0x14) = (undefined4)(0);
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
  return (undefined4 *)(param_1);
}


// Reference entry 11192f60; body size 49 bytes.
#line 1 "ENTRY_11192f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_11192f60(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  *param_1 = (int)(0);
  if ((int *)(param_1) != (int *)(param_2)) {
    iVar1 = (int)(*param_2);
    *param_1 = (int)(iVar1);
    if (iVar1 != 0) {
      thunk_FUN_1123fce0(iVar1 + 4);
    }
  }
  return (int *)(param_1);
}


// Reference entry 11192fa0; body size 14 bytes.
#line 1 "ENTRY_11192fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11192fa0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
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
  return (undefined4)(0);
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
    if ((int *)(piVar4) != (int *)0x0) {
      if (*(int *)(param_1 + 0x34) != 0) {
        (**(code **)(*piVar4 + 0x10))();
        piVar4 = (int *)(*(int **)(param_1 + 0x30));
      }
      if ((int *)(piVar4) != (int *)0x0) {
        iVar3 = (int)(thunk_FUN_1123fcd0(piVar4 + 1));
        if (iVar3 == 0) {
          (**(code **)*piVar4)(1);
        }
      }
      *(undefined4*)(param_1 + 0x34) = (undefined4)(0);
    }
    *(int*)(param_1 + 0x30) = (int)(iVar2);
    if (iVar2 != 0) {
      thunk_FUN_1123fce0(iVar2 + 4);
      if (*(int **)(param_1 + 0x30) != (int *)((0x0))) {
        uVar5 = (undefined4)((**(code **)(**(int **)(param_1 + 0x30) + 4))(param_1 + 0x14,0));
        *(undefined4*)(param_1 + 0x34) = (undefined4)(uVar5);
      }
    }
    *(undefined4*)(param_1 + 0x38) = (undefined4)(uVar1);
    uVar5 = (undefined4)(1);
  }
  thunk_FUN_111a36f0();
  param_4[2] = (undefined4)(uVar5);
  *param_4 = (undefined4)(5);
  return (undefined4)(0);
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
  return (undefined4)(0);
}


// Reference entry 11194120; body size 14 bytes.
#line 1 "ENTRY_11194120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11194120(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
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
  return (undefined4 *)(param_1);
}


// Reference entry 11194d10; body size 28 bytes.
#line 1 "ENTRY_11194d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11194d10(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 11194d40; body size 28 bytes.
#line 1 "ENTRY_11194d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11194d40(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 11194d70; body size 28 bytes.
#line 1 "ENTRY_11194d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11194d70(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 11194da0; body size 28 bytes.
#line 1 "ENTRY_11194da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11194da0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 11194dd0; body size 28 bytes.
#line 1 "ENTRY_11194dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11194dd0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 11194e00; body size 28 bytes.
#line 1 "ENTRY_11194e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11194e00(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 11194e30; body size 28 bytes.
#line 1 "ENTRY_11194e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11194e30(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
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
  return (undefined4 *)(param_1);
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
  *(undefined1*)(param_1 + 0x35f4) = (undefined1)(0);
  return (undefined4 *)(param_1);
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
  *(undefined1*)(param_1 + 0x35f4) = (undefined1)(0);
  *(undefined1*)(param_1 + 0x36f4) = (undefined1)(0);
  *(undefined1*)(param_1 + 0x37f4) = (undefined1)(0);
  return (undefined4 *)(param_1);
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
  *(undefined1*)(param_1 + 0x35f4) = (undefined1)(0);
  *(undefined1*)(param_1 + 0x36f4) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 11195410; body size 11 bytes.
#line 1 "ENTRY_11195410"

/* WARNING: Removing unreachable block_11195410 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11195410(undefined4 *param_1)

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
  if ((int *)(int *)(param_1[1]) != (int *)(0x0)) {
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


// Reference entry 11195460; body size 11 bytes.
#line 1 "ENTRY_11195460"

/* WARNING: Removing unreachable block_11195460 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11195460(undefined4 *param_1)

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
  if ((int *)(int *)(param_1[1]) != (int *)(0x0)) {
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
  if ((undefined4 *)(undefined4 *)(param_1[0x2a5e]) != (undefined4 *)(0x0)) {
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
  if ((undefined4 *)(undefined4 *)(param_1[0x2a5e]) != (undefined4 *)(0x0)) {
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
  if ((undefined4 *)(undefined4 *)(param_1[0x2a5e]) != (undefined4 *)(0x0)) {
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
      return (undefined4)(*(undefined4 *)(iVar1 + 0x2c));
    }
  }
  return (undefined4)(0);
}


// Reference entry 11197ca0; body size 63 bytes.
#line 1 "ENTRY_11197ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_11197ca0(undefined4 param_2,char *param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined4 uVar2;
  
  if (((char *)(param_3) != (char *)0x0) && (*param_3 != '\0')) {
    iVar1 = (int)((**(code **)(*(int *)(*(int *)(param_1 + 0x1c) + 0x1c) + 4))(param_3,1));
    if ((iVar1 != 0) && (*(int **)(iVar1 + 0x1c) != (int *)((0x0)))) {
      uVar2 = (undefined4)((**(code **)(**(int **)(iVar1 + 0x1c) + 0x1c))());
      thunk_FUN_1145a960(uVar2);
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 11198a20; body size 24 bytes.
#line 1 "ENTRY_11198a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_11198a20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 11198a40; body size 24 bytes.
#line 1 "ENTRY_11198a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_11198a40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 11198a60; body size 24 bytes.
#line 1 "ENTRY_11198a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_11198a60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 11198a80; body size 24 bytes.
#line 1 "ENTRY_11198a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_11198a80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 11198aa0; body size 24 bytes.
#line 1 "ENTRY_11198aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_11198aa0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 11198ac0; body size 24 bytes.
#line 1 "ENTRY_11198ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_11198ac0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 11198ae0; body size 24 bytes.
#line 1 "ENTRY_11198ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_11198ae0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 11198b00; body size 24 bytes.
#line 1 "ENTRY_11198b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_11198b00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 11198b20; body size 24 bytes.
#line 1 "ENTRY_11198b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_11198b20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 11198b40; body size 24 bytes.
#line 1 "ENTRY_11198b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_11198b40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
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
  *(double*)(param_3 + 2) = (double)((double)iVar3);
  return (undefined4)(0);
}


// Reference entry 11199420; body size 186 bytes.
#line 1 "ENTRY_11199420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4
FUN_11199420(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            int param_5,uint param_6)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  byte *pbVar9;
  uint uVar10;
  bool bVar11;
  
  pbVar4 = (byte *)((byte *)thunk_FUN_111a32a0());
  uVar10 = (uint)(0);
  if (param_6 == 0) {
    return (undefined4)(0);
  }
  do {
    puVar2 = (undefined4 *)(*(undefined4 **)(param_5 + uVar10 * 4));
    pbVar5 = (byte *)((byte *)*puVar2);
    pbVar9 = (byte *)(pbVar4);
    do {
      bVar1 = (byte)(*pbVar9);
      bVar11 = (bool)(bVar1 < *pbVar5);
      if (bVar1 != *pbVar5) {
LAB_11199477:
        uVar6 = (uint)(-(uint)bVar11 | 1);
        goto LAB_1119947c;
      }
      if (bVar1 == 0) break;
      bVar1 = (byte)(pbVar9[1]);
      bVar11 = (bool)(bVar1 < pbVar5[1]);
      if ((byte *)((bVar1)) != (byte *)(pbVar5[1])) goto LAB_11199477;
      pbVar9 = (byte *)(pbVar9 + 2);
      pbVar5 = (byte *)(pbVar5 + 2);
    } while (bVar1 != 0);
    uVar6 = (uint)(0);
LAB_1119947c:
    if (uVar6 == 0) {
      iVar7 = (int)((*(code *)puVar2[5])(param_4));
      iVar3 = (int)(puVar2[2]);
      if (puVar2[4] == 0) {
        uVar8 = (undefined4)(thunk_FUN_1109aba0(*(undefined4 *)(iVar3 + 8 + iVar7 * 0x14),
                                   *(undefined4 *)(iVar3 + 0xc + iVar7 * 0x14)));
      }
      else {
        uVar8 = (undefined4)(*(undefined4 *)(iVar3 + iVar7 * 0x14));
      }
      thunk_FUN_111a36f0();
      *param_3 = (undefined4)(3);
      param_3[2] = (undefined4)(uVar8);
      return (undefined4)(0);
    }
    uVar10 = (uint)(uVar10 + 1);
    if (param_6 <= uVar10) {
      return (undefined4)(0);
    }
  } while( true );
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
  return (undefined4)(0);
}


// Reference entry 111995a0; body size 41 bytes.
#line 1 "ENTRY_111995a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_111995a0(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  
  if (param_2 < *(uint *)(param_1 + 0xc)) {
    uVar1 = (uint)((**(code **)(param_1 + 0x18))(param_3,*(int *)(param_1 + 8) + param_2 * 0x14));
    return (uint)(uVar1);
  }
  return (uint)(param_2 & 0xffffff00);
}


// Reference entry 111995e0; body size 89 bytes.
#line 1 "ENTRY_111995e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_111995e0(uint param_2,undefined1 *param_3,int param_4)
{
  int param_1 = (int )this;
  int iVar1;
  
  if (*(uint *)(param_1 + 0xc) <= (uint)(param_2)) {
    if (param_4 != 0) {
      *param_3 = (undefined1)(0);
    }
    return (undefined4)(0);
  }
  iVar1 = (int)(*(int *)(param_1 + 8));
  if (*(int *)(param_1 + 0x10) == 1) {
    thunk_FUN_1145c250(param_3,*(undefined4 *)(iVar1 + param_2 * 0x14));
    return (undefined4)(1);
  }
  thunk_FUN_1109ac00(*(undefined4 *)(iVar1 + 8 + param_2 * 0x14),
                     *(undefined4 *)(iVar1 + 0xc + param_2 * 0x14),param_3,param_4);
  return (undefined4)(1);
}


// Reference entry 111996e0; body size 28 bytes.
#line 1 "ENTRY_111996e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111996e0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 11199710; body size 14 bytes.
#line 1 "ENTRY_11199710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11199710(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 11199900; body size 21 bytes.
#line 1 "ENTRY_11199900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11199900(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHouseholdListenerBase);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 11199930; body size 21 bytes.
#line 1 "ENTRY_11199930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11199930(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RTrackRatingsModel);
  return (undefined4 *)(param_1);
}


// Reference entry 11199b00; body size 11 bytes.
#line 1 "ENTRY_11199b00"

/* WARNING: Removing unreachable block_11199b00 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11199b00(undefined4 *param_1)

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
  if ((int *)(int *)(param_1[1]) != (int *)(0x0)) {
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


// Reference entry 1119be40; body size 23 bytes.
#line 1 "ENTRY_1119be40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1119be40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RPresentationMapLoader);
  return (undefined4 *)(param_1);
}


// Reference entry 1119be60; body size 162 bytes.
#line 1 "ENTRY_1119be60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1119be60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_1125b810(param_1,LAB_10075388,LAB_1007f71b,LAB_1001d089);
  param_1[0xa3] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RPresentationMapParser);
  *(undefined2*)(param_1 + 2) = (undefined2)(0);
  param_1[3] = (undefined4)(0xb);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0x1010000);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  *(undefined2*)(param_1 + 9) = (undefined2)(0);
  param_1[0xa4] = (undefined4)(0);
  *(undefined1*)((int)param_1 + 0x26) = (undefined1)(0);
  *(undefined1*)((int)param_1 + 0x126) = (undefined1)(0);
  *(undefined1*)((int)param_1 + 0xa6) = (undefined1)(0);
  *(undefined1*)((int)param_1 + 0x1a6) = (undefined1)(0);
  *(undefined1*)(param_1 + 0x7a) = (undefined1)(0);
  *(undefined1*)((int)param_1 + 0x1c7) = (undefined1)(0);
  *(undefined1*)((int)param_1 + 0x209) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1119ce40; body size 14 bytes.
#line 1 "ENTRY_1119ce40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1119ce40(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1119c480(param_2);
  return;
}


// Reference entry 1119d020; body size 101 bytes.
#line 1 "ENTRY_1119d020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1119d020(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  bool bVar6;
  
  uVar5 = (uint)(0);
  do {
    pbVar2 = (byte *)((&PTR_s_AddTrackToFavorites_1211fcfc)[uVar5 * 2]);
    pbVar4 = (byte *)(param_1);
    do {
      bVar1 = (byte)(*pbVar4);
      bVar6 = (bool)(bVar1 < *pbVar2);
      if (bVar1 != *pbVar2) {
LAB_1119d060:
        uVar3 = (uint)(-(uint)bVar6 | 1);
        goto LAB_1119d065;
      }
      if (bVar1 == 0) break;
      bVar1 = (byte)(pbVar4[1]);
      bVar6 = (bool)(bVar1 < pbVar2[1]);
      if ((byte *)((bVar1)) != (byte *)(pbVar2[1])) goto LAB_1119d060;
      pbVar4 = (byte *)(pbVar4 + 2);
      pbVar2 = (byte *)(pbVar2 + 2);
    } while (bVar1 != 0);
    uVar3 = (uint)(0);
LAB_1119d065:
    if (uVar3 == 0) {
      return (undefined4)((&DAT_1211fcf8)[uVar5 * 2]);
    }
    uVar5 = (uint)(uVar5 + 1);
    if (4 < uVar5) {
      return (undefined4)(0xd);
    }
  } while( true );
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
  *(undefined1*)(param_1 + 7) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 111a0420; body size 13 bytes.
#line 1 "ENTRY_111a0420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_111a0420(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x14) + 0xc))();
  return (undefined4)(0);
}


// Reference entry 111a0430; body size 13 bytes.
#line 1 "ENTRY_111a0430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_111a0430(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x14) + 0x14))();
  return (undefined4)(0);
}


// Reference entry 111a0440; body size 13 bytes.
#line 1 "ENTRY_111a0440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_111a0440(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x14) + 0x18))();
  return (undefined4)(0);
}


// Reference entry 111a05a0; body size 13 bytes.
#line 1 "ENTRY_111a05a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_111a05a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x14) + 8))();
  return (undefined4)(0);
}


// Reference entry 111a05b0; body size 13 bytes.
#line 1 "ENTRY_111a05b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_111a05b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x14) + 4))();
  return (undefined4)(0);
}


// Reference entry 111a09b0; body size 192 bytes.
#line 1 "ENTRY_111a09b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111a09b0(int *param_1,uint param_2,uint *param_3)

{
  uint *_Memory;
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piStack_4;
  
  puVar1 = (uint *)(param_3);
  iVar3 = (int)(param_2);
  if (param_2 == 0) {
    iVar3 = (int)(*param_1);
    piVar2 = (int *)(param_1);
    while (iVar3 != 0) {
      piVar2 = (int *)(piVar2 + 1);
      iVar3 = (int)(*piVar2);
    }
    iVar3 = (int)((int)piVar2 - (int)param_1 >> 2);
  }
  piStack_4 = (int *)(param_1);
  uVar4 = (uint)(iVar3 * 4 + 1);
  if (*param_3 < uVar4) {
    uVar5 = (uint)(*param_3 * 2);
    if (uVar5 <= uVar4) {
      uVar5 = (uint)(uVar4);
    }
    uVar4 = (uint)(thunk_FUN_1148b586(uVar5));
    *puVar1 = (uint)(uVar5);
    _Memory = (uint *)((uint *)puVar1[2]);
    thunk_FUN_1145c250(uVar4,_Memory,uVar5);
    puVar1[2] = (uint)(uVar4);
    if ((uint *)(_Memory) == (uint *)(puVar1) + 3) {
      *(undefined1*)(puVar1 + 3) = (undefined1)(0);
    }
    else {
      free(_Memory);
    }
  }
  uVar4 = (uint)(puVar1[2]);
  param_2 = (uint)(uVar4);
  func_0x100392ac(&piStack_4,param_1 + iVar3,&param_2,uVar4 + iVar3 * 4,1);
  puVar1[1] = (uint)(param_2 - uVar4);
  *(undefined1*)((param_2 - uVar4) + puVar1[2]) = (undefined1)(0);
  return;
}


// Reference entry 111a0aa0; body size 241 bytes.
#line 1 "ENTRY_111a0aa0"

/* WARNING: Type propagation algorithm not settling */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111a0aa0(char *param_1,char *param_2,undefined4 *param_3)

{
  char *pcVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char cVar4;
  undefined4 *_Memory;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcStack_4;
  
  puVar6 = (undefined4 *)(param_3);
  pcVar8 = (char *)(param_2);
  if ((char *)(param_2) == (char *)0x0) {
    pcVar8 = (char *)(param_1);
    do {
      cVar4 = (char)(*pcVar8);
      pcVar8 = (char *)(pcVar8 + 1);
    } while (cVar4 != '\0');
    pcVar8 = (char *)(pcVar8 + -(int)(param_1 + 1));
  }
  pcVar3 = (char *)(param_1 + (int)pcVar8);
  pcVar1 = (char *)(pcVar8 + 1);
  pcStack_4 = (char *)(param_1);
  if ((char *)*param_3 < pcVar1) {
    pcVar9 = (char *)((char *)((int)*param_3 * 2));
    if (pcVar9 <= pcVar1) {
      pcVar9 = (char *)(pcVar1);
    }
    param_2 = (char *)((char *)thunk_FUN_1148b586(-(uint)((int)((unsigned long long)(pcVar9) * 4 >> 0x20) != 0) |
                                         (uint)((unsigned long long)(pcVar9) * 4)));
    _Memory = (undefined4 *)((undefined4 *)puVar6[2]);
    *puVar6 = (undefined4)(pcVar9);
    puVar2 = (undefined4 *)(_Memory);
    pcVar5 = (char *)(param_2);
    pcVar1 = (char *)(pcVar9);
    while ((char *)(pcVar1) != (char *)0x0) {
      pcVar9 = (char *)(pcVar9 + -1);
      if ((char *)(pcVar9) == (char *)0x0) {
        param_2[0] = (char)('\0');
        param_2[1] = (char)('\0');
        param_2[2] = (char)('\0');
        param_2[3] = (char)('\0');
        break;
      }
      pcVar1 = (char *)((char *)*puVar2);
      *(char**)pcVar5 = (char *)((char *)(pcVar1));
      puVar2 = (undefined4 *)(puVar2 + 1);
      pcVar5 = (char *)(pcVar5 + 4);
    }
    puVar6[2] = (undefined4)(param_2);
    if ((undefined4 *)(_Memory) == (undefined4 *)(puVar6) + 3) {
      puVar6[3] = (undefined4)(0);
    }
    else {
      free(_Memory);
    }
  }
  iVar7 = (int)(puVar6[2]);
  param_1 = (char *)((char *)iVar7);
  func_0x100937b1(&pcStack_4,pcVar3,&param_1,iVar7 + (int)pcVar8 * 4,1);
  iVar7 = (int)((int)param_1 - iVar7 >> 2);
  puVar6[1] = (undefined4)(iVar7);
  *(undefined4*)(puVar6[2] + iVar7 * 4) = (undefined4)(0);
  return;
}


// Reference entry 111a13b0; body size 151 bytes.
#line 1 "ENTRY_111a13b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111a13b0(int param_2,char param_3)
{
  uint *param_1 = (uint *)this;
  uint *_Memory;
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  
  uVar3 = (uint)(param_2 + 1);
  if (*param_1 < uVar3) {
    uVar5 = (uint)(*param_1 * 2);
    if (uVar5 <= uVar3) {
      uVar5 = (uint)(uVar3);
    }
    puVar4 = (uint *)((uint *)thunk_FUN_1148b586(-(uint)((int)((ulonglong)uVar5 * 4 >> 0x20) != 0) |
                                        (uint)((ulonglong)uVar5 * 4)));
    _Memory = (uint *)((uint *)param_1[2]);
    *param_1 = (uint)(uVar5);
    puVar1 = (uint *)(_Memory);
    puVar2 = (uint *)(puVar4);
    uVar3 = (uint)(uVar5);
    if (param_3 != '\0') {
      while (uVar3 != 0) {
        uVar5 = (uint)(uVar5 - 1);
        if (uVar5 == 0) {
          *puVar4 = (uint)(0);
          break;
        }
        uVar3 = (uint)(*puVar1);
        *puVar2 = (uint)(uVar3);
        puVar1 = (uint *)(puVar1 + 1);
        puVar2 = (uint *)(puVar2 + 1);
      }
    }
    param_1[2] = (uint)((uint)puVar4);
    if ((uint *)(_Memory) != (uint *)(param_1) + 3) {
      free(_Memory);
      return;
    }
    param_1[3] = (uint)(0);
  }
  return;
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
        *(int*)((int)param_1 + (-4 - (int)param_2) + (int)piVar2) = (int)(iVar1);
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
  if ((char *)(pcVar2) == (char *)0x0) {
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
      *(size_t*)(pcVar2 + -0xc) = (size_t)(_Size);
    }
  }
  pcVar2 = (char *)((char *)*param_1);
  if ((char *)(pcVar2) == (char *)0x0) {
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
      *(int*)(pcVar2 + -0xc) = (int)(iVar3);
    }
  }
  _Src = (void *)((void *)thunk_FUN_111a1220(_Size + iVar3));
  memmove((void *)((int)_Src + _Size),_Src,iVar3 + 1);
  _Src_00 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)(undefined1 *)(*param_2) != (undefined1 *)(0x0)) {
    _Src_00 = (undefined1 *)((undefined1 *)*param_2);
  }
  memcpy(_Src,_Src_00,_Size);
  *(size_t*)(*param_1 + -0xc) = (size_t)(_Size + iVar3);
  return (int *)(param_1);
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
  if ((char *)(pcVar2) == (char *)0x0) {
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
      *(int*)(pcVar2 + -0xc) = (int)(iVar4);
    }
  }
  _Src = (void *)((void *)thunk_FUN_111a1220(iVar4 + param_3));
  memmove((void *)((int)_Src + param_3),_Src,iVar4 + 1);
  memcpy(_Src,param_2,param_3);
  *(size_t*)(*param_1 + -0xc) = (size_t)(iVar4 + param_3);
  return (int *)(param_1);
}


// Reference entry 111a1f90; body size 42 bytes.
#line 1 "ENTRY_111a1f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111a1f90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111a4bc0(param_2,"String");
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjString);
  param_1[5] = (undefined4)(0);
  return (undefined4 *)(param_1);
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
  return (undefined4 *)(param_1);
}


// Reference entry 111a2750; body size 29 bytes.
#line 1 "ENTRY_111a2750"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_111a2750(undefined8 param_1)

{
  return (bool)((double)((unsigned long long)((uint)((ulonglong)param_1 >> 0x20) & _UNK_118a1554) << 32 | (unsigned long long)((uint)param_1 & DAT_118a1550)) < DAT_119d00b0);
}


// Reference entry 111a2780; body size 91 bytes.
#line 1 "ENTRY_111a2780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_111a2780(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x1c));
  *(int*)(param_1 + 0x1c) = (int)(iVar1 + 1);
  puVar2 = (undefined4 *)(operator_new(0x10));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    puVar2[1] = (undefined4)(param_2);
    puVar2[2] = (undefined4)(param_3);
    puVar2[3] = (undefined4)(iVar1);
    *puVar2 = (undefined4)(0);
    *puVar2 = (undefined4)(*(undefined4 *)(param_1 + 0x18));
    *(undefined4**)(param_1 + 0x18) = (undefined4 *)(puVar2);
    return (int)(iVar1);
  }
  uRam00000000 = (int)(*(undefined4 *)(param_1 + 0x18));
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  return (int)(iVar1);
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
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
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
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 111a3650; body size 20 bytes.
#line 1 "ENTRY_111a3650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * __fastcall FUN_111a3650(undefined4 *param_1)

{
  int iVar1;
  
  switch(*param_1) {
  case 0:
    return (char *)("undefined");
  default:
    return (char *)("null");
  case 2:
  case 3:
    return (char *)("string");
  case 4:
    return (char *)("number");
  case 5:
    return (char *)("boolean");
  case 6:
    break;
  case 7:
    return (char *)("function");
  }
  if (((int *)(int *)(param_1[2]) != (int *)(0x0)) &&
     (iVar1 = (**(code **)(*(int *)param_1[2] + 0x20))(), iVar1 == 8)) {
    return (char *)("movieclip");
  }
  return (char *)("object");
}


// Reference entry 111a4320; body size 37 bytes.
#line 1 "ENTRY_111a4320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111a4320(int param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x18));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    if (puVar1[3] != param_2) {
      do {
                    
      } while( true );
    }
    *(undefined4*)(param_1 + 0x18) = (undefined4)(*puVar1);
    thunk_FUN_1148a50e(puVar1,0x10);
  }
  return;
}


// Reference entry 111a47c0; body size 25 bytes.
#line 1 "ENTRY_111a47c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111a47c0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 111a4dd0; body size 25 bytes.
#line 1 "ENTRY_111a4dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111a4dd0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjSymbolTableIter);
  param_1[1] = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 111a56c0; body size 31 bytes.
#line 1 "ENTRY_111a56c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111a56c0(undefined4 *param_1)

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
    if ((undefined1 *)(puVar1) != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(puVar1);
    }
    uVar2 = (undefined4)(func_0x1005b4e7());
    thunk_FUN_111a74d0("DebugUndefinedVars",4,
                       "\n *** attempt to call non-function member %s of object of class %s (type = %s) ***\n"
                       ,param_2,puVar3,uVar2);
    return;
  }
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)(puVar1) != (undefined1 *)0x0) {
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
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (int)(*piVar1);
    return (undefined4)(piVar1[1]);
  }
  return (undefined4)(0);
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
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 111a7e80; body size 24 bytes.
#line 1 "ENTRY_111a7e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_111a7e80(int *param_1)

{
  return (undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*param_1 == 0)));
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
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 111a7f00; body size 98 bytes.
#line 1 "ENTRY_111a7f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111a7f00(uint param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  void *_Dst;
  int iVar1;
  uint uVar2;
  size_t _Size;
  
  _Dst = (void *)((void *)param_1[1]);
  iVar1 = (int)(*param_1);
  uVar2 = (uint)((int)_Dst - iVar1 >> 2);
  if (param_2 < uVar2) {
    param_1[1] = (int)(iVar1 + param_2 * 4);
    return;
  }
  if (uVar2 < param_2) {
    if ((uint)(param_1[2] - iVar1 >> 2) < param_2) {
      thunk_FUN_111a7f80(param_2,param_3);
      return;
    }
    _Size = (size_t)((param_2 - uVar2) * 4);
    memset(_Dst,0,_Size);
    param_1[1] = (int)((int)(_Size + (int)_Dst));
  }
  return;
}


// Reference entry 111a8050; body size 86 bytes.
#line 1 "ENTRY_111a8050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_111a8050(int *param_1,int param_2,int *param_3)

{
  if (*param_3 == 0) {
    memset(param_1,0,param_2 * 4);
    return (int *)(param_1 + param_2);
  }
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = (int)(*param_3);
    param_1 = (int *)(param_1 + 1);
  }
  return (int *)(param_1);
}


// Reference entry 111a80c0; body size 36 bytes.
#line 1 "ENTRY_111a80c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_111a80c0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 111a8190; body size 36 bytes.
#line 1 "ENTRY_111a8190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111a8190(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_111a7d40(puVar1,param_2);
  return;
}


// Reference entry 111a8320; body size 37 bytes.
#line 1 "ENTRY_111a8320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111a8320(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111a4d30(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjArrayIter);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
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
    return (uint)(0x3fffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 111a8750; body size 18 bytes.
#line 1 "ENTRY_111a8750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111a8750(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 4);
  return;
}


// Reference entry 111a8850; body size 37 bytes.
#line 1 "ENTRY_111a8850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_111a8850(void *param_1, int param_2, unsigned int recovered_unused_stack_0)

{
  memset(param_1,0,param_2 * 4);
  return (void *)((void *)(param_2 * 4 + (int)param_1));
}


// Reference entry 111a8880; body size 38 bytes.
#line 1 "ENTRY_111a8880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_111a8880(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
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


// Reference entry 111a8e30; body size 51 bytes.
#line 1 "ENTRY_111a8e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111a8e30(undefined4 *param_2,void *param_3,void *param_4)
{
  int param_1 = (int )this;
  size_t _Size;
  
  if ((void *)(param_3) != (void *)(param_4)) {
    _Size = (size_t)(*(int *)(param_1 + 4) - (int)param_4);
    memmove(param_3,param_4,_Size);
    *(size_t*)(param_1 + 4) = (size_t)((int)param_3 + _Size);
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


// Reference entry 111a9830; body size 128 bytes.
#line 1 "ENTRY_111a9830"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_111a9830(undefined4 param_1,int *param_2)

{
  int iVar1;
  float10 fVar2;
  double dVar3;
  
  iVar1 = (int)(thunk_FUN_111a3630());
  if (((iVar1 == 4) || (iVar1 == 2)) || (iVar1 == 6)) {
    fVar2 = (float10)((float10)thunk_FUN_111a2cf0());
    iVar1 = (int)(_isnan((double)fVar2));
    if ((iVar1 == 0) &&
       (dVar3 = (double)(int)fVar2 - (double)fVar2,
       (double)((unsigned long long)((uint)((ulonglong)dVar3 >> 0x20) & _UNK_118a1554) << 32 | (unsigned long long)((uint)((*(unsigned long long *)&(dVar3)) >> ((0) * 8)) & DAT_118a1550)) < DAT_119d00b0)) {
      *param_2 = (int)((int)fVar2);
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
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
    *(undefined4*)(iVar1 + -4 + iVar3 * 4) = (undefined4)(0);
    thunk_FUN_111ab150(iVar3 + -1);
    return (undefined4)(uVar2);
  }
  return (undefined4)(0);
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
  if (*(undefined1 **)(param_1 + 0x14) != (undefined1 *)((0x0))) {
    puVar3 = (undefined1 *)(*(undefined1 **)(param_1 + 0x14));
  }
  iVar2 = (int)(thunk_FUN_1106a270(puVar3,uVar1,0));
  thunk_FUN_111a36f0();
  *param_4 = (undefined4)(4);
  *(double*)(param_4 + 2) = (double)((double)iVar2);
  return (undefined4)(0);
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
  if (*(undefined1 **)(param_1 + 0x14) != (undefined1 *)((0x0))) {
    puVar3 = (undefined1 *)(*(undefined1 **)(param_1 + 0x14));
  }
  iVar2 = (int)(thunk_FUN_1106a250(puVar3,uVar1,0));
  if (iVar2 == 0) {
    iVar2 = (int)(thunk_FUN_1106a270(puVar3,uVar1,0));
  }
  thunk_FUN_111a36f0();
  *param_4 = (undefined4)(4);
  *(double*)(param_4 + 2) = (double)((double)iVar2);
  return (undefined4)(0);
}


// Reference entry 111a9e70; body size 77 bytes.
#line 1 "ENTRY_111a9e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_111a9e70(undefined4 *param_1, int param_2, unsigned int recovered_unused_stack_0)

{
  int iVar1;
  
  if ((undefined4 *)(param_1) == (undefined4 *)0x1) {
    iVar1 = (int)(param_2);
    param_2 = (int)(0);
  }
  else {
    if ((undefined4 *)(param_1) != (undefined4 *)0x2) {
      return (undefined4)(0);
    }
    iVar1 = (int)(param_2 + 0x10);
  }
  iVar1 = (int)(func_0x100975aa(iVar1,param_2));
  thunk_FUN_111a36f0();
  *param_1 = (undefined4)(4);
  *(double*)(param_1 + 2) = (double)((double)iVar1);
  return (undefined4)(0);
}


// Reference entry 111aa2e0; body size 91 bytes.
#line 1 "ENTRY_111aa2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_111aa2e0(undefined4 *param_1, undefined4 param_2, unsigned int recovered_unused_stack_0)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(thunk_FUN_111a32a0());
  if ((undefined4 *)(param_1) == (undefined4 *)0x1) {
    param_2 = (undefined4)(0);
  }
  else if ((undefined4 *)(param_1) != (undefined4 *)0x2) {
    return (undefined4)(0);
  }
  iVar2 = (int)(func_0x1009078c(uVar1,param_2));
  thunk_FUN_111a36f0();
  *param_1 = (undefined4)(4);
  *(double*)(param_1 + 2) = (double)((double)iVar2);
  return (undefined4)(0);
}


// Reference entry 111aa410; body size 18 bytes.
#line 1 "ENTRY_111aa410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_111aa410(undefined4 param_1, undefined4 param_2, unsigned int recovered_unused_stack_0)

{
  thunk_FUN_111aaf90(param_1,param_2);
  return (undefined4)(0);
}


// Reference entry 111ab0a0; body size 36 bytes.
#line 1 "ENTRY_111ab0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111ab0a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
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
      *(int*)(iVar1 + -8) = (int)(iVar2);
      return (int)(iVar2);
    }
  }
  return (int)(iVar2);
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
      return (undefined4)(0);
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
        return (undefined4)(3);
      }
    }
    else if ((param_5 == 0) && ((0xdbff < uVar3 && (uVar3 < 0xe000)))) {
      *param_1 = (undefined4)(puVar1);
      *param_3 = (uint)((uint)puVar4);
      return (undefined4)(3);
    }
    if (param_4 <= puVar4) {
      *param_1 = (undefined4)(puVar1);
      *param_3 = (uint)((uint)puVar4);
      return (undefined4)(2);
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
          return (undefined4)(3);
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
        return (undefined4)(uVar3);
      }
    }
    uVar3 = (undefined4)(2);
  }
  *param_1 = (uint)((uint)puVar6);
  *param_3 = (undefined4)(psVar2);
  return (undefined4)(uVar3);
}


// Reference entry 111abbb0; body size 254 bytes.
#line 1 "ENTRY_111abbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_111abbb0(undefined4 *param_1,byte *param_2,int *param_3,uint *param_4)

{
  uint *puVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  
  uVar4 = (undefined4)(0);
  puVar7 = (uint *)((uint *)*param_3);
  pbVar9 = (byte *)((byte *)*param_1);
  if (pbVar9 < param_2) {
    while( true ) {
      bVar3 = (byte)(*pbVar9);
      iVar11 = (int)(0);
      uVar5 = (uint)((uint)bVar3);
      uVar6 = (uint)((uint)(ushort)(short)(char)(&UNK_119d0548)[uVar5]);
      if (param_2 <= pbVar9 + uVar6) break;
      cVar2 = (char)(func_0x111abd80(pbVar9,uVar6 + 1));
      if (cVar2 == '\0') {
        *param_1 = (undefined4)(pbVar9);
        *param_3 = (int)((int)puVar7);
        return (undefined4)(3);
      }
      switch(uVar6) {
      case 0:
        break;
      case 1:
        pbVar9 = (byte *)(pbVar9 + 1);
        iVar11 = (int)((uint)bVar3 << 6);
        bVar3 = (byte)(*pbVar9);
        break;
      case 2:
        pbVar10 = (byte *)(pbVar9 + 1);
        pbVar9 = (byte *)(pbVar9 + 2);
        iVar11 = (int)(((uint)bVar3 * 0x40 + (uint)*pbVar10) * 0x40);
        bVar3 = (byte)(*pbVar9);
        break;
      case 3:
        pbVar10 = (byte *)(pbVar9 + 1);
        pbVar8 = (byte *)(pbVar9 + 2);
        pbVar9 = (byte *)(pbVar9 + 3);
        bVar3 = (byte)(*pbVar9);
        iVar11 = (int)(((uVar5 * 0x40 + (uint)*pbVar10) * 0x40 + (uint)*pbVar8) * 0x40);
        break;
      default:
        goto LAB_111abc71;
      }
      iVar11 = (int)(iVar11 + (uint)bVar3);
      pbVar9 = (byte *)(pbVar9 + 1);
LAB_111abc71:
      if (param_4 <= puVar7) {
        *param_1 = (undefined4)(pbVar9 + (-1 - uVar6));
        *param_3 = (int)((int)puVar7);
        return (undefined4)(2);
      }
      puVar1 = (uint *)(puVar7 + 1);
      uVar5 = (uint)(0xfffd);
      if ((uint)(iVar11 - *(int *)(&UNK_119d0648 + uVar6 * 4)) < 0x80000000) {
        uVar5 = (uint)(iVar11 - *(int *)(&UNK_119d0648 + uVar6 * 4));
      }
      *puVar7 = (uint)(uVar5);
      puVar7 = (uint *)(puVar1);
      if (param_2 <= pbVar9) {
        *param_1 = (undefined4)(pbVar9);
        *param_3 = (int)((int)puVar1);
        return (undefined4)(0);
      }
    }
    uVar4 = (undefined4)(1);
  }
  *param_1 = (undefined4)(pbVar9);
  *param_3 = (int)((int)puVar7);
  return (undefined4)(uVar4);
}


// Reference entry 111abe30; body size 67 bytes.
#line 1 "ENTRY_111abe30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_111abe30(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = (uint)((uint)(char)(&UNK_119d0548)[*param_1]);
  if (param_2 < param_1 + uVar3 + 1) {
    return (uint)((uint)(param_1 + uVar3 + 1) & 0xffffff00);
  }
  pbVar2 = (byte *)(param_1 + uVar3 + 1);
  switch(uVar3) {
  case 0:
    goto code_r0x111abde6;
  case 1:
    goto code_r0x111abdb0;
  case 2:
    break;
  case 3:
    bVar1 = (byte)(pbVar2[-1]);
    uVar3 = (uint)(((uint)((char)(&UNK_119d0548)[*param_1] >> 7) << 8 | (uint)(bVar1)));
    pbVar2 = (byte *)(pbVar2 + -1);
    if ((bVar1 < 0x80) || (0xbf < bVar1)) goto LAB_111abdd1;
    break;
  default:
    goto LAB_111abdd1;
  }
  bVar1 = (byte)(pbVar2[-1]);
  uVar3 = (uint)(((uint)((int3)(uVar3 >> 8)) << 8 | (uint)(bVar1)));
  pbVar2 = (byte *)(pbVar2 + -1);
  if ((bVar1 < 0x80) || (0xbf < bVar1)) goto LAB_111abdd1;
code_r0x111abdb0:
  bVar1 = (byte)(pbVar2[-1]);
  pbVar2 = (byte *)((byte *)((uint)((int3)((uint)pbVar2 >> 8)) << 8 | (uint)(bVar1)));
  if (0xbf < bVar1) goto LAB_111abdd1;
  uVar3 = (uint)((uint)*param_1);
  if (uVar3 == 0xe0) {
    uVar3 = (uint)(0);
    if (bVar1 < 0xa0) goto LAB_111abdd1;
  }
  else {
    if (uVar3 == 0xf0) {
      bVar4 = (bool)(bVar1 < 0x90);
      uVar3 = (uint)(0);
    }
    else {
      uVar3 = (uint)(uVar3 - 0xf4);
      if (uVar3 == 0) {
        if (0x8f < bVar1) {
          return (uint)(0);
        }
        goto code_r0x111abde6;
      }
      bVar4 = (bool)(bVar1 < 0x80);
    }
    if (bVar4) goto LAB_111abdd1;
  }
code_r0x111abde6:
  uVar3 = (uint)(((uint)((int3)((uint)pbVar2 >> 8)) << 8 | (uint)(*param_1)) - 0x80);
  if ((0x41 < (byte)uVar3) && (*param_1 < 0xf5)) {
    return (uint)(((uint)((int3)(uVar3 >> 8)) << 8 | (uint)(1)));
  }
LAB_111abdd1:
  return (uint)(uVar3 & 0xffffff00);
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
  return (int)(iVar2);
}


// Reference entry 111ac5b0; body size 63 bytes.
#line 1 "ENTRY_111ac5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_111ac5b0(int *param_1)

{
  int iVar1;
  
  switch(param_1[5]) {
  case 200:
    (**(code **)(param_1[100] + 4))(param_1);
    (**(code **)(param_1[6] + 8))(param_1);
    param_1[5] = (int)(0xc9);
LAB_111ac5ef:
    iVar1 = (int)((**(code **)param_1[100])(param_1));
    if (iVar1 == 1) {
      FUN_111ac200(param_1);
      param_1[5] = (int)(0xca);
    }
    return (int)(iVar1);
  case 0xc9:
    goto LAB_111ac5ef;
  case 0xca:
    return (int)(1);
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd2:
    iVar1 = (int)((**(code **)param_1[100])(param_1));
    return (int)(iVar1);
  default:
    *(undefined4*)(*param_1 + 0x14) = (undefined4)(0x14);
    *(int*)(*param_1 + 0x18) = (int)(param_1[5]);
    (**(code **)*param_1)(param_1);
    return (int)(0);
  }
}


// Reference entry 111ac7b0; body size 60 bytes.
#line 1 "ENTRY_111ac7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_111ac7b0(int *param_1)

{
  if ((param_1[5] < 0xca) || (0xd2 < param_1[5])) {
    *(undefined4*)(*param_1 + 0x14) = (undefined4)(0x14);
    *(int*)(*param_1 + 0x18) = (int)(param_1[5]);
    (**(code **)*param_1)(param_1);
  }
  return (undefined4)(((uint)((int3)((uint)param_1[100] >> 8)) << 8 | (uint)(*(undefined1 *)(param_1[100] + 0x10))));
}


// Reference entry 111ac800; body size 60 bytes.
#line 1 "ENTRY_111ac800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_111ac800(int *param_1)

{
  if ((param_1[5] < 200) || (0xd2 < param_1[5])) {
    *(undefined4*)(*param_1 + 0x14) = (undefined4)(0x14);
    *(int*)(*param_1 + 0x18) = (int)(param_1[5]);
    (**(code **)*param_1)(param_1);
  }
  return (undefined4)(((uint)((int3)((uint)param_1[100] >> 8)) << 8 | (uint)(*(undefined1 *)(param_1[100] + 0x11))));
}


// Reference entry 111ac9d0; body size 146 bytes.
#line 1 "ENTRY_111ac9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_111ac9d0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = (int)(param_1[5]);
  if (((iVar1 == 0xcd) || (iVar1 == 0xce)) && ((char)param_1[0x10] != '\0')) {
    (**(code **)(param_1[0x60] + 4))(param_1);
    param_1[5] = (int)(0xd0);
  }
  else if (iVar1 != 0xd0) {
    *(undefined4*)(*param_1 + 0x14) = (undefined4)(0x14);
    *(int*)(*param_1 + 0x18) = (int)(param_1[5]);
    (**(code **)*param_1)(param_1);
  }
  puVar2 = (undefined4 *)((undefined4 *)param_1[0x1f]);
  if ((int)puVar2 <= param_1[0x21]) {
    do {
      puVar2 = (undefined4 *)((undefined4 *)param_1[100]);
      if (*(char *)((int)puVar2 + 0x11) != '\0') break;
      iVar1 = (int)((*(code *)*puVar2)(param_1));
      if (iVar1 == 0) {
        return (undefined4)(0);
      }
      puVar2 = (undefined4 *)((undefined4 *)param_1[0x1f]);
    } while ((int)puVar2 <= param_1[0x21]);
  }
  param_1[5] = (int)(0xcf);
  return (undefined4)(((uint)((int3)((uint)puVar2 >> 8)) << 8 | (uint)(1)));
}


// Reference entry 111aca90; body size 178 bytes.
#line 1 "ENTRY_111aca90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_111aca90(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_1[5] != 0xce) {
    *(undefined4*)(*param_1 + 0x14) = (undefined4)(0x14);
    *(int*)(*param_1 + 0x18) = (int)(param_1[5]);
    (**(code **)*param_1)(param_1);
  }
  if ((uint)param_1[0x18] <= (uint)param_1[0x1e]) {
    *(undefined4*)(*param_1 + 0x14) = (undefined4)(0x7b);
    (**(code **)(*param_1 + 4))(param_1,0xffffffff);
    return (uint)(0);
  }
  if (param_1[2] != 0) {
    *(int*)(param_1[2] + 4) = (int)(param_1[0x1e]);
    *(int*)(param_1[2] + 8) = (int)(param_1[0x18]);
    (**(code **)param_1[2])(param_1);
  }
  uVar2 = (uint)(param_1[0x46] * param_1[0x45]);
  if (param_3 < uVar2) {
    *(undefined4*)(*param_1 + 0x14) = (undefined4)(0x17);
    (**(code **)*param_1)(param_1);
  }
  iVar1 = (int)((**(code **)(param_1[0x62] + 0xc))(param_1,param_2));
  if (iVar1 == 0) {
    return (uint)(0);
  }
  param_1[0x1e] = (int)(param_1[0x1e] + uVar2);
  return (uint)(uVar2);
}


// Reference entry 111acd50; body size 99 bytes.
#line 1 "ENTRY_111acd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111acd50(int *param_1,int param_2)

{
  int iVar1;
  
  if ((param_1[5] != 0xcf) && (param_1[5] != 0xcc)) {
    *(undefined4*)(*param_1 + 0x14) = (undefined4)(0x14);
    *(int*)(*param_1 + 0x18) = (int)(param_1[5]);
    (**(code **)*param_1)(param_1);
  }
  iVar1 = (int)(1);
  if (0 < param_2) {
    iVar1 = (int)(param_2);
  }
  if ((*(char *)(param_1[100] + 0x11) != '\0') && (param_1[0x1f] < iVar1)) {
    iVar1 = (int)(param_1[0x1f]);
  }
  param_1[0x21] = (int)(iVar1);
  FUN_111acdd0(param_1);
  return;
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
        *(code**)(iVar1 + 0x1c) = (code *)(FUN_111af250);
        *(undefined4*)(iVar1 + 0x60) = (undefined4)(0xe);
        return;
      }
      goto LAB_111ae8dc;
    }
    if (param_2 == 0xee) {
      if (param_3 < 0xc) {
        *(code**)(iVar1 + 0x54) = (code *)(FUN_111af250);
        *(undefined4*)(iVar1 + 0x98) = (undefined4)(0xc);
        return;
      }
      goto LAB_111ae8dc;
    }
  }
  if (param_2 == 0xfe) {
    *(code**)(iVar1 + 0x18) = (code *)(pcVar3);
    *(uint*)(iVar1 + 0x5c) = (uint)(param_3);
    return;
  }
  if ((param_2 < 0xe0) || (0xef < param_2)) {
    *(undefined4*)(*param_1 + 0x14) = (undefined4)(0x44);
    *(int*)(*param_1 + 0x18) = (int)(param_2);
    (**(code **)*param_1)(param_1);
    return;
  }
LAB_111ae8dc:
  *(code**)(iVar1 + -0x364 + param_2 * 4) = (code *)(pcVar3);
  *(uint*)(iVar1 + -800 + param_2 * 4) = (uint)(param_3);
  return;
}


// Reference entry 111ae940; body size 82 bytes.
#line 1 "ENTRY_111ae940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111ae940(int *param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0xfe) {
    *(undefined4*)(param_1[0x65] + 0x18) = (undefined4)(param_3);
    return;
  }
  if (param_2 - 0xe0U < 0x10) {
    *(undefined4*)(param_1[0x65] + -0x364 + param_2 * 4) = (undefined4)(param_3);
    return;
  }
  *(undefined4*)(*param_1 + 0x14) = (undefined4)(0x44);
  *(int*)(*param_1 + 0x18) = (int)(param_2);
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


// Reference entry 111bc820; body size 801 bytes.
#line 1 "ENTRY_111bc820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111bc820(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iStack_a4;
  short *psStack_a0;
  undefined1 *puStack_9c;
  int *piStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int aiStack_84 [32];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&iStack_a4);
  piVar2 = (int *)(aiStack_84 + 8);
  iStack_8c = (int)(param_4);
  iStack_88 = (int)(param_5);
  iStack_94 = (int)(*(int *)(param_1 + 0x120) + 0x80);
  iStack_a4 = (int)(8);
  psStack_a0 = (short *)((short *)(param_3 + 0x20));
  piStack_98 = (int *)(*(int **)(param_2 + 0x50));
  do {
    if (iStack_a4 != 4) {
      if ((((psStack_a0[-8] == 0) && (*psStack_a0 == 0)) && (psStack_a0[8] == 0)) &&
         (((psStack_a0[0x18] == 0 && (psStack_a0[0x20] == 0)) && (psStack_a0[0x28] == 0)))) {
        iVar1 = (int)((int)psStack_a0[-0x10] * *piStack_98 * 4);
        piVar2[-8] = (int)(iVar1);
        piVar2[8] = (int)(iVar1);
        piVar2[0x10] = (int)(iVar1);
      }
      else {
        iStack_90 = (int)((int)psStack_a0[-0x10] * *piStack_98 * 0x4000);
        iVar4 = (int)((int)*psStack_a0 * piStack_98[0x10] * 0x3b21 +
                (int)psStack_a0[0x20] * piStack_98[0x30] * -0x187e);
        iVar1 = (int)(iVar4 + iStack_90);
        iStack_90 = (int)(iStack_90 - iVar4);
        iVar5 = (int)((int)psStack_a0[0x18] * piStack_98[0x28] * 0x2e75 +
                (int)psStack_a0[8] * piStack_98[0x18] * -0x4587 +
                (int)psStack_a0[-8] * piStack_98[8] * 0x21f9 +
                (int)psStack_a0[0x28] * piStack_98[0x38] * -0x6c2);
        iVar4 = (int)((int)psStack_a0[-8] * piStack_98[8] * 0x5203 +
                (int)psStack_a0[8] * piStack_98[0x18] * 0x1ccd +
                (int)psStack_a0[0x18] * piStack_98[0x28] * -0x133e +
                (int)psStack_a0[0x28] * piStack_98[0x38] * -0x1050);
        piVar2[-8] = (int)(iVar1 + 0x800 + iVar4 >> 0xc);
        piVar2[0x10] = (int)((iVar1 - iVar4) + 0x800 >> 0xc);
        iVar1 = (int)(iStack_90 + 0x800 + iVar5 >> 0xc);
        piVar2[8] = (int)((iStack_90 - iVar5) + 0x800 >> 0xc);
      }
      *piVar2 = (int)(iVar1);
    }
    iStack_a4 = (int)(iStack_a4 + -1);
    psStack_a0 = (short *)(psStack_a0 + 1);
    piStack_98 = (int *)(piStack_98 + 1);
    piVar2 = (int *)(piVar2 + 1);
  } while (0 < iStack_a4);
  piVar2 = (int *)(aiStack_84);
  iStack_a4 = (int)(0);
  do {
    iVar1 = (int)(piVar2[1]);
    puStack_9c = (undefined1 *)((undefined1 *)(param_5 + *(int *)(param_4 + iStack_a4 * 4)));
    if (((iVar1 == 0) && (piVar2[2] == 0)) &&
       ((piVar2[3] == 0 && (((piVar2[5] == 0 && (piVar2[6] == 0)) && (piVar2[7] == 0)))))) {
      uVar3 = (undefined1)(*(undefined1 *)((*piVar2 + 0x10 >> 5 & 0x3ffU) + iStack_94));
      *puStack_9c = (undefined1)(uVar3);
      puStack_9c[1] = (undefined1)(uVar3);
      puStack_9c[3] = (undefined1)(uVar3);
    }
    else {
      iVar4 = (int)(piVar2[2] * 0x3b21 + piVar2[6] * -0x187e);
      iStack_90 = (int)(iVar4 + *piVar2 * 0x4000);
      psStack_a0 = (short *)((short *)(*piVar2 * 0x4000 - iVar4));
      iVar4 = (int)(piVar2[5] * 0x2e75 + piVar2[3] * -0x4587 + iVar1 * 0x21f9 + piVar2[7] * -0x6c2);
      iVar1 = (int)(iVar1 * 0x5203 + piVar2[3] * 0x1ccd + piVar2[5] * -0x133e + piVar2[7] * -0x1050);
      *puStack_9c = (undefined1)(*(undefined1 *)((iStack_90 + 0x40000 + iVar1 >> 0x13 & 0x3ffU) + iStack_94));
      puStack_9c[3] = (undefined1)(*(undefined1 *)(((iStack_90 - iVar1) + 0x40000 >> 0x13 & 0x3ffU) + iStack_94));
      puStack_9c[1] = (undefined1)(*(undefined1 *)(((int)psStack_a0 + iVar4 + 0x40000 >> 0x13 & 0x3ffU) + iStack_94));
      uVar3 = (undefined1)(*(undefined1 *)(((int)psStack_a0 + (0x40000 - iVar4) >> 0x13 & 0x3ffU) + iStack_94));
    }
    puStack_9c[2] = (undefined1)(uVar3);
    piVar2 = (int *)(piVar2 + 8);
    iStack_a4 = (int)(iStack_a4 + 1);
  } while (iStack_a4 < 4);
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
  *(undefined4*)(param_1 + 0x208) = (undefined4)(0xffffffff);
  puVar1 = (undefined8 *)((undefined8 *)(param_1 + 0x20c));
  *puVar1 = (undefined8)(0);
  (**(code **)(**(int **)(param_1 + 0x10) + 0x20))();
  if (param_3 != 0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x1c))(param_2);
    *(undefined4*)(param_1 + 0x208) = (undefined4)(0);
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
    return (uint)(0xffff9600);
  }
  memcpy((void *)(*(int *)(param_1 + 0x804) + param_1 + 0x808),param_2,param_3);
  *(int*)(param_1 + 0x804) = (int)(*(int *)(param_1 + 0x804) + param_3);
  return (uint)(param_3);
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
    *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  }
  if (*(int *)(param_1 + 0x218) != 0) {
    thunk_FUN_111bf100(*(int *)(param_1 + 0x218));
    *(undefined4*)(param_1 + 0x218) = (undefined4)(0);
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
  if (*(int *)(param_1 + 0x10) == (int)(param_2)) {
    *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
    return (int)(((uint)(uVar1) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar1 << 8);
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
  return (int)(iVar2);
}


// Reference entry 111c0550; body size 57 bytes.
#line 1 "ENTRY_111c0550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111c0550(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11240560(param_2,param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpImpl);
  *(undefined2*)(param_1 + 0x17) = (undefined2)(1000);
  param_1[0x15] = (undefined4)(0);
  param_1[0x16] = (undefined4)(0xffffffff);
  return (undefined4 *)(param_1);
}


// Reference entry 111c2130; body size 72 bytes.
#line 1 "ENTRY_111c2130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::FUN_111c2130(char *param_2,undefined2 *param_3)
{
  undefined1 *param_1 = (undefined1 *)this;
  char cVar1;
  char *pcVar2;
  
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0xf);
  *param_1 = (undefined1)(0);
  pcVar2 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  thunk_FUN_1012d130(param_2,(int)pcVar2 - (int)(param_2 + 1));
  *(undefined2*)(param_1 + 0x18) = (undefined2)(*param_3);
  return (undefined1 *)(param_1);
}


// Reference entry 111c22d0; body size 67 bytes.
#line 1 "ENTRY_111c22d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111c22d0(undefined4 *param_2,undefined2 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  uVar1 = (undefined4)(param_2[1]);
  uVar2 = (undefined4)(param_2[2]);
  uVar3 = (undefined4)(param_2[3]);
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(uVar1);
  param_1[2] = (undefined4)(uVar2);
  param_1[3] = (undefined4)(uVar3);
  *(undefined8*)(param_1 + 4) = (undefined8)(*(undefined8 *)(param_2 + 4));
  param_2[4] = (undefined4)(0);
  param_2[5] = (undefined4)(0xf);
  *(undefined1*)param_2 = (undefined1)((undefined4 *)(0));
  *(undefined2*)(param_1 + 6) = (undefined2)(*param_3);
  return (undefined4 *)(param_1);
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
    if ((iVar2 < 0) || (*(ushort *)((param_2 + 6)) <= *(ushort *)((param_1 + 6)))) {
      return (undefined4)(0);
    }
  }
  return (undefined4)(1);
}


// Reference entry 111c2420; body size 25 bytes.
#line 1 "ENTRY_111c2420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111c2420(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x2c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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
  *(undefined4*)(param_2 + 0x20) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x24) = (undefined4)(0xf);
  *(undefined1*)(param_2 + 0x10) = (undefined1)(0);
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
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 111c2bd0; body size 29 bytes.
#line 1 "ENTRY_111c2bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111c2bd0(undefined4 param_1,int param_2,int param_3)

{
  thunk_FUN_10118c40(param_3);
  *(undefined2*)(param_2 + 0x18) = (undefined2)(*(undefined2 *)(param_3 + 0x18));
  return;
}


// Reference entry 111c2ed0; body size 67 bytes.
#line 1 "ENTRY_111c2ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111c2ed0(undefined4 *param_1,undefined4 *param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  uVar1 = (undefined4)(param_2[1]);
  uVar2 = (undefined4)(param_2[2]);
  uVar3 = (undefined4)(param_2[3]);
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(uVar1);
  param_1[2] = (undefined4)(uVar2);
  param_1[3] = (undefined4)(uVar3);
  *(undefined8*)(param_1 + 4) = (undefined8)(*(undefined8 *)(param_2 + 4));
  param_2[4] = (undefined4)(0);
  param_2[5] = (undefined4)(0xf);
  *(undefined1*)param_2 = (undefined1)((undefined4 *)(0));
  *(undefined2*)(param_1 + 6) = (undefined2)(*param_3);
  return;
}


// Reference entry 111c3110; body size 35 bytes.
#line 1 "ENTRY_111c3110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_111c3110(int param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10118c40(param_2);
  *(undefined2*)(param_1 + 0x18) = (undefined2)(*(undefined2 *)(param_2 + 0x18));
  return (int)(param_1);
}


// Reference entry 111c3930; body size 34 bytes.
#line 1 "ENTRY_111c3930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111c3930(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSocketTxn);
  param_1[2] = (undefined4)(0);
  thunk_FUN_11286490();
  return (undefined4 *)(param_1);
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
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 111c4380; body size 14 bytes.
#line 1 "ENTRY_111c4380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111c4380(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x5d1745d) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
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
  return (int)(param_1);
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
  return (undefined4)(*(undefined4 *)(param_1 + 0x414));
}


// Reference entry 111c4d20; body size 8 bytes.
#line 1 "ENTRY_111c4d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_111c4d20(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x430));
}


// Reference entry 111c5100; body size 8 bytes.
#line 1 "ENTRY_111c5100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 __fastcall FUN_111c5100(int param_1)

{
  return (undefined2)(*(undefined2 *)(param_1 + 0x42c));
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
        *(char*)(uVar2 + 0x2398 + param_1) = (char)(*param_2);
        *(int*)(param_1 + 0x2798) = (int)(*(int *)(param_1 + 0x2798) + 1);
        uVar2 = (uint)(*(uint *)(param_1 + 0x2798));
      }
      if (*param_2 == '\n') {
        *(uint*)(param_1 + 0x2798) = (uint)(uVar2 - 1);
        *(undefined1*)(uVar2 + 0x2397 + param_1) = (undefined1)(0);
        iVar1 = (int)(*(int *)(param_1 + 0x2798));
        if ((iVar1 != 0) && (*(char *)(iVar1 + 0x2397 + param_1) == '\r')) {
          *(int*)(param_1 + 0x2798) = (int)(iVar1 + -1);
          *(undefined1*)(iVar1 + 0x2397 + param_1) = (undefined1)(0);
        }
        if (*(int *)(param_1 + 0x2394) == 0) {
          iVar1 = (int)(strncmp((char *)(param_1 + 0x2398),"HTTP/1.0",8));
          if ((iVar1 != 0) && (iVar1 = strncmp((char *)(param_1 + 0x2398),"HTTP/1.1",8), iVar1 != 0)
             ) {
            *(undefined4*)(param_1 + 4) = (undefined4)(0xffffffff);
            return;
          }
        }
        else if (*(int *)(param_1 + 0x2798) == 0) {
          *(undefined1*)(param_1 + 0x27a0) = (undefined1)(1);
        }
        else {
          iVar1 = (int)(thunk_FUN_113b9f60(param_1 + 0x2398,"Content-Length:",0xf));
          if (iVar1 == 0) {
            iVar1 = (int)(atoi((char *)(param_1 + 0x23a7)));
            *(int*)(param_1 + 0x279c) = (int)(iVar1);
          }
        }
        *(int*)(param_1 + 0x2394) = (int)(*(int *)(param_1 + 0x2394) + 1);
        *(undefined4*)(param_1 + 0x2798) = (undefined4)(0);
      }
    }
    else if ((uVar2 < 0x400) && (uVar2 < *(uint *)(param_1 + 0x279c))) {
      *(char*)(uVar2 + 0x2398 + param_1) = (char)(*param_2);
      *(int*)(param_1 + 0x2798) = (int)(*(int *)(param_1 + 0x2798) + 1);
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
  *(undefined4*)(param_1 + 0x18) = (undefined4)(*param_3);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(uVar1);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(uVar2);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar3);
  uVar1 = (undefined4)(param_3[5]);
  uVar2 = (undefined4)(param_3[6]);
  uVar3 = (undefined4)(param_3[7]);
  *(undefined4*)(param_1 + 0x28) = (undefined4)(param_3[4]);
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(uVar1);
  *(undefined4*)(param_1 + 0x30) = (undefined4)(uVar2);
  *(undefined4*)(param_1 + 0x34) = (undefined4)(uVar3);
  uVar1 = (undefined4)(param_3[9]);
  uVar2 = (undefined4)(param_3[10]);
  uVar3 = (undefined4)(param_3[0xb]);
  *(undefined4*)(param_1 + 0x38) = (undefined4)(param_3[8]);
  *(undefined4*)(param_1 + 0x3c) = (undefined4)(uVar1);
  *(undefined4*)(param_1 + 0x40) = (undefined4)(uVar2);
  *(undefined4*)(param_1 + 0x44) = (undefined4)(uVar3);
  *(undefined8*)(param_1 + 0x48) = (undefined8)(*(undefined8 *)(param_3 + 0xc));
  *(undefined4*)(param_1 + 0x50) = (undefined4)(param_3[0xe]);
  return (int)(param_1);
}


// Reference entry 111c6dd0; body size 35 bytes.
#line 1 "ENTRY_111c6dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111c6dd0(undefined4 *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  thunk_FUN_10118c40(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 111c72b0; body size 31 bytes.
#line 1 "ENTRY_111c72b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_111c72b0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  thunk_FUN_10118c40(param_3);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 111c72e0; body size 49 bytes.
#line 1 "ENTRY_111c72e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_111c72e0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  thunk_FUN_10118c40(param_3);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x30) = (undefined4)(0xf);
  *(undefined1*)(param_1 + 0x1c) = (undefined1)(0);
  return (int)(param_1);
}


// Reference entry 111c76a0; body size 33 bytes.
#line 1 "ENTRY_111c76a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_111c76a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10118c40(*param_2);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 111c76d0; body size 51 bytes.
#line 1 "ENTRY_111c76d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_111c76d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10118c40(*param_2);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x30) = (undefined4)(0xf);
  *(undefined1*)(param_1 + 0x1c) = (undefined1)(0);
  return (int)(param_1);
}


// Reference entry 111c7740; body size 29 bytes.
#line 1 "ENTRY_111c7740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111c7740(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  thunk_FUN_104086f0(param_2 + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 111c77a0; body size 25 bytes.
#line 1 "ENTRY_111c77a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111c77a0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x44));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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
  return (int *)(param_2);
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
    return (int)(param_1 * 0x1888);
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
    return (int)(param_1 * 0x44);
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
    return (int)(param_1 * 0x5c);
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
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 111c8d50; body size 27 bytes.
#line 1 "ENTRY_111c8d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111c8d50(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  thunk_FUN_10118c40(*param_4);
  *(undefined4*)(param_2 + 0x18) = (undefined4)(0);
  return;
}


// Reference entry 111c8d80; body size 45 bytes.
#line 1 "ENTRY_111c8d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111c8d80(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  thunk_FUN_10118c40(*param_4);
  *(undefined4*)(param_2 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x2c) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x30) = (undefined4)(0xf);
  *(undefined1*)(param_2 + 0x1c) = (undefined1)(0);
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
  *(undefined4*)(param_2 + 0x18) = (undefined4)(*(undefined4 *)(param_3 + 0x18));
  *(undefined4*)(param_2 + 0x1c) = (undefined4)(uVar1);
  *(undefined4*)(param_2 + 0x20) = (undefined4)(uVar2);
  *(undefined4*)(param_2 + 0x24) = (undefined4)(uVar3);
  uVar1 = (undefined4)(*(undefined4 *)(param_3 + 0x2c));
  uVar2 = (undefined4)(*(undefined4 *)(param_3 + 0x30));
  uVar3 = (undefined4)(*(undefined4 *)(param_3 + 0x34));
  *(undefined4*)(param_2 + 0x28) = (undefined4)(*(undefined4 *)(param_3 + 0x28));
  *(undefined4*)(param_2 + 0x2c) = (undefined4)(uVar1);
  *(undefined4*)(param_2 + 0x30) = (undefined4)(uVar2);
  *(undefined4*)(param_2 + 0x34) = (undefined4)(uVar3);
  uVar1 = (undefined4)(*(undefined4 *)(param_3 + 0x3c));
  uVar2 = (undefined4)(*(undefined4 *)(param_3 + 0x40));
  uVar3 = (undefined4)(*(undefined4 *)(param_3 + 0x44));
  *(undefined4*)(param_2 + 0x38) = (undefined4)(*(undefined4 *)(param_3 + 0x38));
  *(undefined4*)(param_2 + 0x3c) = (undefined4)(uVar1);
  *(undefined4*)(param_2 + 0x40) = (undefined4)(uVar2);
  *(undefined4*)(param_2 + 0x44) = (undefined4)(uVar3);
  *(undefined8*)(param_2 + 0x48) = (undefined8)(*(undefined8 *)(param_3 + 0x48));
  *(undefined4*)(param_2 + 0x50) = (undefined4)(*(undefined4 *)(param_3 + 0x50));
  return;
}


// Reference entry 111c8ff0; body size 9 bytes.
#line 1 "ENTRY_111c8ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111c8ff0(undefined4 param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = (uint)(param_2[0xc]);
  if (0xf < uVar1) {
    iVar2 = (int)(param_2[7]);
    uVar4 = (uint)(uVar1 + 1);
    iVar3 = (int)(iVar2);
    if (0xfff < uVar4) {
      iVar3 = (int)(*(int *)(iVar2 + -4));
      uVar4 = (uint)(uVar1 + 0x24);
      if (0x1f < (iVar2 - iVar3) - 4U) goto LAB_111d3547;
    }
    thunk_FUN_1148a50e(iVar3,uVar4);
  }
  param_2[0xb] = (int)(0);
  param_2[0xc] = (int)(0xf);
  *(undefined1*)(param_2 + 7) = (undefined1)(0);
  uVar1 = (uint)(param_2[5]);
  if (0xf < uVar1) {
    iVar2 = (int)(*param_2);
    uVar4 = (uint)(uVar1 + 1);
    iVar3 = (int)(iVar2);
    if (0xfff < uVar4) {
      iVar3 = (int)(*(int *)(iVar2 + -4));
      uVar4 = (uint)(uVar1 + 0x24);
      if (0x1f < (iVar2 - iVar3) - 4U) {
LAB_111d3547:
                    
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


// Reference entry 111c9070; body size 9 bytes.
#line 1 "ENTRY_111c9070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111c9070(undefined4 param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  param_2[6] = (int)((int)(uint)&ghidra_vftable_RSonosContentProviderMediaSessions);
  thunk_FUN_112a7f20(param_2 + 8);
  thunk_FUN_111d2fc0();
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
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 111c9890; body size 30 bytes.
#line 1 "ENTRY_111c9890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111c9890(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 111c98c0; body size 30 bytes.
#line 1 "ENTRY_111c98c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111c98c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
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
  return (undefined4 *)(param_1);
}


// Reference entry 111c9b60; body size 28 bytes.
#line 1 "ENTRY_111c9b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111c9b60(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 111c9b90; body size 28 bytes.
#line 1 "ENTRY_111c9b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111c9b90(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
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
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
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
  *(undefined4*)(param_1 + 0x18) = (undefined4)(*(undefined4 *)(param_2 + 0x18));
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(uVar1);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(uVar2);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar3);
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0x2c));
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0x30));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 0x34));
  *(undefined4*)(param_1 + 0x28) = (undefined4)(*(undefined4 *)(param_2 + 0x28));
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(uVar1);
  *(undefined4*)(param_1 + 0x30) = (undefined4)(uVar2);
  *(undefined4*)(param_1 + 0x34) = (undefined4)(uVar3);
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0x3c));
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0x40));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 0x44));
  *(undefined4*)(param_1 + 0x38) = (undefined4)(*(undefined4 *)(param_2 + 0x38));
  *(undefined4*)(param_1 + 0x3c) = (undefined4)(uVar1);
  *(undefined4*)(param_1 + 0x40) = (undefined4)(uVar2);
  *(undefined4*)(param_1 + 0x44) = (undefined4)(uVar3);
  *(undefined8*)(param_1 + 0x48) = (undefined8)(*(undefined8 *)(param_2 + 0x48));
  *(undefined4*)(param_1 + 0x50) = (undefined4)(*(undefined4 *)(param_2 + 0x50));
  return (int)(param_1);
}


// Reference entry 111ca340; body size 35 bytes.
#line 1 "ENTRY_111ca340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111ca340(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  thunk_FUN_10118c40(param_2 + 1);
  return (undefined4 *)(param_1);
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
  return (undefined4 *)(param_1);
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
  return (undefined4 *)(param_1);
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
  return (undefined4 *)(param_1);
}


// Reference entry 111ca6e0; body size 187 bytes.
#line 1 "ENTRY_111ca6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111ca6e0(undefined1 *param_2,undefined4 param_3,undefined1 *param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13,undefined4 param_14)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11202480();
  param_1[2] = (undefined4)(param_3);
  param_1[4] = (undefined4)(param_5);
  param_1[5] = (undefined4)(param_6);
  param_1[6] = (undefined4)(param_7);
  param_1[7] = (undefined4)(param_8);
  param_1[8] = (undefined4)(param_9);
  param_1[9] = (undefined4)(param_10);
  param_1[10] = (undefined4)(param_11);
  param_1[0xb] = (undefined4)(param_12);
  param_1[0xc] = (undefined4)(param_13);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCDStationInfoCallback);
  param_1[1] = (undefined4)(param_2);
  param_1[3] = (undefined4)(param_4);
  param_1[0xd] = (undefined4)(param_14);
  if ((undefined1 *)(param_2) != (undefined1 *)0x0) {
    *param_2 = (undefined1)(0);
    param_4 = (undefined1 *)((undefined1 *)param_1[3]);
  }
  if ((undefined1 *)(param_4) != (undefined1 *)0x0) {
    *param_4 = (undefined1)(0);
  }
  if ((undefined1 *)(undefined1 *)(param_1[5]) != (undefined1 *)(0x0)) {
    *(undefined1*)param_1[5] = (undefined1)((undefined4)(0));
  }
  if ((undefined1 *)(undefined1 *)(param_1[7]) != (undefined1 *)(0x0)) {
    *(undefined1*)param_1[7] = (undefined1)((undefined4)(0));
  }
  if ((undefined1 *)(undefined1 *)(param_1[9]) != (undefined1 *)(0x0)) {
    *(undefined1*)param_1[9] = (undefined1)((undefined4)(0));
  }
  if ((undefined1 *)(undefined1 *)(param_1[0xb]) != (undefined1 *)(0x0)) {
    *(undefined1*)param_1[0xb] = (undefined1)((undefined4)(0));
  }
  if ((undefined4 *)(undefined4 *)(param_1[0xd]) != (undefined4 *)(0x0)) {
    *(undefined4*)param_1[0xd] = (undefined4)((undefined4)(0xffffffff));
  }
  return (undefined4 *)(param_1);
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
  return (undefined4 *)(param_1);
}


// Reference entry 111cacc0; body size 31 bytes.
#line 1 "ENTRY_111cacc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111cacc0(undefined4 *param_1)

{
  thunk_FUN_11261e50();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCPValidateOperation);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RCPValidateOperation);
  return (undefined4 *)(param_1);
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
  *(undefined2*)(param_1 + 5) = (undefined2)(1);
  if (param_4 == 0) {
    param_1[4] = (undefined4)(0);
  }
  *param_3 = (undefined4)(0);
  return (undefined4 *)(param_1);
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
  *(undefined2*)(param_1 + 0x104) = (undefined2)(0);
  *(undefined1*)((int)param_1 + 0x412) = (undefined1)(0);
  param_1[0x109] = (undefined4)(0);
  param_1[0x10a] = (undefined4)(0xf);
  *(undefined1*)(param_1 + 0x105) = (undefined1)(0);
  return (undefined4 *)(param_1);
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
  *(undefined2*)(param_1 + 0x105) = (undefined2)(0);
  if (param_3 != 0) {
    *(undefined1*)(param_3 + 1) = (undefined1)(0);
    *(undefined1*)param_1[0x103] = (undefined1)((undefined4)(0));
  }
  return (undefined4 *)(param_1);
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
  *(int*)(param_1 + 0x404) = (int)((int)pcVar2 - (int)(param_1 + 1));
  return (char *)(param_1);
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
  *(undefined1*)(param_1 + 6) = (undefined1)(param_8);
  param_1[7] = (undefined4)(param_9);
  param_1[3] = (undefined4)(param_5);
  param_1[5] = (undefined4)(param_7);
  param_1[8] = (undefined4)(0);
  return (undefined4 *)(param_1);
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
  *(undefined1*)(param_1 + 6) = (undefined1)(param_6);
  param_1[8] = (undefined4)(param_7);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[5] = (undefined4)(param_5);
  param_1[7] = (undefined4)(0);
  return (undefined4 *)(param_1);
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
  *(undefined1*)(param_1 + 8) = (undefined1)(0);
  *(undefined1*)((int)param_1 + 0x821) = (undefined1)(0);
  param_1[0x309] = (undefined4)(0);
  param_1[0x30a] = (undefined4)(0);
  param_1[0x30b] = (undefined4)(0);
  param_1[0x30c] = (undefined4)(0);
  *(undefined1*)(param_1 + 0x30d) = (undefined1)(0);
  *(undefined1*)((int)param_1 + 0x1435) = (undefined1)(0);
  if (cVar2 != '\0') {
    thunk_FUN_112a8010(puVar1);
  }
  param_1[0x60e] = (undefined4)(0);
  param_1[0x60f] = (undefined4)(0);
  param_1[0x610] = (undefined4)(0);
  param_1[0x611] = (undefined4)(0);
  return (undefined4 *)(param_1);
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
  *(undefined1*)((int)param_1 + 0xd951) = (undefined1)(0);
  param_1[0x3655] = (undefined4)((uint)&ghidra_vftable_RSonosCPFaultHandler);
  param_1[0x3656] = (undefined4)(0);
  *(undefined1*)(param_1 + 0x3657) = (undefined1)(0);
  *(undefined1*)(param_1 + 0x365f) = (undefined1)(0);
  *(undefined1*)((int)param_1 + 0xe17d) = (undefined1)(0);
  *(undefined1*)(param_1 + 0x3a60) = (undefined1)(0);
  *(undefined1*)((int)param_1 + 0xe999) = (undefined1)(0);
  param_1[0x3a77] = (undefined4)(0);
  *(undefined1*)(param_1 + 0x3a78) = (undefined1)(0);
  return (undefined4 *)(param_1);
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
  *(undefined1*)((int)param_1 + 0xd951) = (undefined1)(0);
  param_1[0x3655] = (undefined4)((uint)&ghidra_vftable_RSonosCPFaultHandler);
  param_1[0x3656] = (undefined4)(0);
  *(undefined1*)(param_1 + 0x3657) = (undefined1)(0);
  *(undefined1*)(param_1 + 0x365f) = (undefined1)(0);
  *(undefined1*)((int)param_1 + 0xe17d) = (undefined1)(0);
  *(undefined1*)(param_1 + 0x3a60) = (undefined1)(0);
  *(undefined1*)((int)param_1 + 0xe999) = (undefined1)(0);
  param_1[0x3a77] = (undefined4)(0);
  *(undefined1*)(param_1 + 0x3a78) = (undefined1)(0);
  return (undefined4 *)(param_1);
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
  return (undefined4 *)(param_1);
}


// Reference entry 111d1120; body size 126 bytes.
#line 1 "ENTRY_111d1120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111d1120(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111d0010(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosRelatedPlayParam);
  *(undefined1*)((int)param_1 + 0x1611) = (undefined1)(1);
  param_1[0x585] = (undefined4)(0);
  *(undefined1*)(param_1 + 0x587) = (undefined1)(0);
  param_1[0x62a] = (undefined4)(0);
  thunk_FUN_111e7a30(param_3);
  param_1[0x62b] = (undefined4)(param_4);
  param_1[0x62c] = (undefined4)(param_5);
  param_1[0x62e] = (undefined4)(param_6);
  param_1[0x62d] = (undefined4)(8);
  *(undefined1*)(param_1 + 0x524) = (undefined1)(0);
  *(undefined1*)((int)param_1 + 0x1591) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 111d22e0; body size 45 bytes.
#line 1 "ENTRY_111d22e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_111d22e0(int param_1)

{
  *(undefined***)(param_1 + 0x250c) = (undefined **)((uint)&ghidra_vftable_RDateTime);
  *(undefined4*)(param_1 + 0x2510) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x2514) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x2518) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x251c) = (undefined4)(0);
  *(undefined1*)(param_1 + 0x2520) = (undefined1)(0);
  return (int)(param_1);
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
  *(undefined1*)(param_1 + 0xe6d) = (undefined1)(0);
  param_1[0xe68] = (undefined4)((uint)&ghidra_vftable_RDateTime);
  return (undefined4 *)(param_1);
}


// Reference entry 111d2a00; body size 61 bytes.
#line 1 "ENTRY_111d2a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111d2a00(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111d0010(param_2);
  param_1[0x57d] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosUserInfoParam);
  *(undefined1*)(param_1 + 0x524) = (undefined1)(0);
  *(undefined1*)((int)param_1 + 0x1591) = (undefined1)(0);
  *(undefined1*)((int)param_1 + 0x15d2) = (undefined1)(0);
  return (undefined4 *)(param_1);
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
  *(undefined4*)param_1[3] = (undefined4)((undefined4)(0));
  return (undefined4 *)(param_1);
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
  if ((undefined4 *)(undefined4 *)(param_1[0x2a5e]) != (undefined4 *)(0x0)) {
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


// Reference entry 111d47f0; body size 25 bytes.
#line 1 "ENTRY_111d47f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111d47f0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosRateItemOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RSonosRateItemOp);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_RSonosRateItemOp);


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RCPSonosGenericOperation);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RCPSonosGenericOperation);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_RCPSonosGenericOperation);
  if ((undefined4 *)(undefined4 *)(param_1[8]) != (undefined4 *)(0x0)) {
    (*(code *)**(undefined4 **)param_1[8])(1,uVar1);
    param_1[8] = (undefined4)(0);
  }
  if ((int *)(DAT_122e8d30) != (int *)0x0) {
    (**(code **)(*(int *)(uint)(DAT_122e8d30) + 8))(param_1 + 7);
  }
  param_1[0x13] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  param_1[0x10] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  param_1[0xd] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  param_1[10] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  thunk_FUN_11261f10();

  return;

 } catch (...) { }
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
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(iVar2 + 8) = (undefined4)(0);
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
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(iVar2 + 8) = (undefined4)(0);
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
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(iVar2 + 8) = (undefined4)(0);
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


// Reference entry 111d5200; body size 12 bytes.
#line 1 "ENTRY_111d5200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_111d5200(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*(char *)(*param_1 + 0xd) == '\0')));
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
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 111d7ad0; body size 31 bytes.
#line 1 "ENTRY_111d7ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111d7ad0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x44));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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
  if ((void *)(pvVar1) != (void *)0x0) {
    uVar2 = (uint)((int)pvVar1 + 0x23U & 0xffffffe0);
    *(void**)(uVar2 - 4) = (void *)(pvVar1);
    *(uint*)uVar2 = (uint)((uint)(uVar2));
    *(uint*)(uVar2 + 4) = (uint)(uVar2);
    *param_1 = (uint)(uVar2);
    return;
  }
                    
  _invalid_parameter_noinfo_noreturn();
}


// Reference entry 111d8030; body size 14 bytes.
#line 1 "ENTRY_111d8030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111d8030(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x3c3c3c3) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 111d8050; body size 20 bytes.
#line 1 "ENTRY_111d8050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111d8050(int param_1)

{
  if (*(int *)(param_1 + 8) != 0x71c71c7) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 111d8070; body size 20 bytes.
#line 1 "ENTRY_111d8070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111d8070(int param_1)

{
  if (*(int *)(param_1 + 8) != 0x2c8590b) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 111d8090; body size 20 bytes.
#line 1 "ENTRY_111d8090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111d8090(int param_1)

{
  if (*(int *)(param_1 + 8) != 0xa6f87) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
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
  return (bool)(*param_1 <= fVar1 && fVar1 != *param_1);
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
  return (bool)(*param_1 <= fVar1 && fVar1 != *param_1);
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
  return (bool)(*param_1 <= fVar1 && fVar1 != *param_1);
}


// Reference entry 111d83e0; body size 54 bytes.
#line 1 "ENTRY_111d83e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111d83e0(int *param_2,int param_3)
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


// Reference entry 111d9000; body size 92 bytes.
#line 1 "ENTRY_111d9000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_111d9000(uint param_2,int param_3,int *param_4)
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


// Reference entry 111d9080; body size 92 bytes.
#line 1 "ENTRY_111d9080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_111d9080(uint param_2,int param_3,int *param_4)
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


// Reference entry 111d9100; body size 92 bytes.
#line 1 "ENTRY_111d9100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_111d9100(uint param_2,int param_3,int *param_4)
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


// Reference entry 111d9ac0; body size 45 bytes.
#line 1 "ENTRY_111d9ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111d9ac0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  uVar1 = (undefined4)(param_1[1]);
  param_1[1] = (undefined4)(param_2[1]);
  param_2[1] = (undefined4)(uVar1);
  uVar1 = (undefined4)(param_1[2]);
  param_1[2] = (undefined4)(param_2[2]);
  param_2[2] = (undefined4)(uVar1);
  return;
}


// Reference entry 111d9b00; body size 33 bytes.
#line 1 "ENTRY_111d9b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111d9b00(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  uVar1 = (undefined4)(param_1[1]);
  param_1[1] = (undefined4)(param_2[1]);
  param_2[1] = (undefined4)(uVar1);
  return;
}


// Reference entry 111da510; body size 70 bytes.
#line 1 "ENTRY_111da510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_111da510(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + -1);
  *(int*)param_2[1] = (int)((int)(iVar1));
  *(int*)(iVar1 + 4) = (int)(param_2[1]);
  thunk_FUN_111d35e0();
  if (0x1f < (uint)((int)param_2 + (-4 - param_2[-1]))) {
                    
    _invalid_parameter_noinfo_noreturn();
  }
  thunk_FUN_1148a50e(param_2[-1],0x18ab);
  return (int)(iVar1);
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
  *(int**)(param_1 + 4) = (int *)(piVar2);
  *(int**)(param_3 + 4) = (int *)(piVar1);
  *(int**)(param_2 + 4) = (int *)(piVar3);
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
  *(int**)(param_1 + 4) = (int *)(piVar2);
  *(int**)(param_3 + 4) = (int *)(piVar1);
  *(int**)(param_2 + 4) = (int *)(piVar3);
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
  *(int**)(param_1 + 4) = (int *)(piVar2);
  *(int**)(param_3 + 4) = (int *)(piVar1);
  *(int**)(param_2 + 4) = (int *)(piVar3);
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
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 111dab00; body size 34 bytes.
#line 1 "ENTRY_111dab00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111dab00(int param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1124fe70(param_2);
  *(undefined4*)(param_2 + 4) = (undefined4)(*(undefined4 *)(param_1 + 0xa98c));
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
    *(uint*)(param_1 + 0xa948) = (uint)(uVar1 + 1);
  }
  else {
    uVar1 = (uint)(uVar1 - 1);
  }
  *(int*)(param_1 + 0xbab8) = (int)(*(int *)(param_1 + 0xbab8) + 1);
  iVar2 = (int)(uVar1 * 0x60 + param_1 + 0xa940);
  (**(code **)(*(int *)(iVar2 + 0x1180) + 4))(param_2);
  *(undefined1*)(iVar2 + 0x11d4) = (undefined1)((undefined1)param_2);
  return (int)(iVar2 + 0x1180);
}


// Reference entry 111dab40; body size 11 bytes.
#line 1 "ENTRY_111dab40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_111dab40(undefined4 param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0xc0c4));
  if (uVar1 < 0x10) {
    *(uint*)(param_1 + 0xc0c4) = (uint)(uVar1 + 1);
  }
  else {
    uVar1 = (uint)(uVar1 - 1);
  }
  *(int*)(param_1 + 0xc0c8) = (int)(*(int *)(param_1 + 0xc0c8) + 1);
  (**(code **)(*(int *)(param_1 + 0xc3a8 + uVar1 * 0x38) + 4))(param_2);
  return (int)(param_1 + uVar1 * 0x38 + 0xc3a8);
}


// Reference entry 111dab50; body size 34 bytes.
#line 1 "ENTRY_111dab50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111dab50(int param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1124fe20(param_2);
  *(undefined4*)(param_2 + 4) = (undefined4)(*(undefined4 *)(param_1 + 0xa944));
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


// Reference entry 111db100; body size 14 bytes.
#line 1 "ENTRY_111db100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_111db100(int param_1)

{
  return (undefined4)(((uint)((int3)((uint)*(int *)(param_1 + 8) >> 8)) << 8 | (uint)(*(int *)(*(int *)(param_1 + 8) + 0x166c) == 2)));
}


// Reference entry 111db1b0; body size 6 bytes.
#line 1 "ENTRY_111db1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_111db1b0(int param_1)

{
  return (undefined4)(((uint)((int3)((uint)*(undefined1 **)(param_1 + 8) >> 8)) << 8 | (uint)(**(undefined1 **)(param_1 + 8))));
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
  return (uint)(*(uint *)(param_1 + 0x18) & uVar3);
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
  return (uint)(*(uint *)(param_1 + 0x18) & uVar3);
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
  return (uint)(*(uint *)(param_1 + 0x18) & uVar3);
}


// Reference entry 111db4d0; body size 171 bytes.
#line 1 "ENTRY_111db4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111db4d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  char cVar2;
  
  cVar2 = (char)(thunk_FUN_112a7f50(param_1 + 8));
  thunk_FUN_112b0270("sonoscp_crypto",7,"replacing multi-key dict");
  if ((undefined4 *)((param_1 + 0x1848)) != (undefined4 *)(param_2)) {
    thunk_FUN_111dbec0();
    *(undefined4*)(param_1 + 0x1848) = (undefined4)(*param_2);
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x184c));
    *(undefined4*)(param_1 + 0x184c) = (undefined4)(param_2[1]);
    param_2[1] = (undefined4)(uVar1);
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x1850));
    *(undefined4*)(param_1 + 0x1850) = (undefined4)(param_2[2]);
    param_2[2] = (undefined4)(uVar1);
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x1854));
    *(undefined4*)(param_1 + 0x1854) = (undefined4)(param_2[3]);
    param_2[3] = (undefined4)(uVar1);
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x1858));
    *(undefined4*)(param_1 + 0x1858) = (undefined4)(param_2[4]);
    param_2[4] = (undefined4)(uVar1);
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x185c));
    *(undefined4*)(param_1 + 0x185c) = (undefined4)(param_2[5]);
    param_2[5] = (undefined4)(uVar1);
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x1860));
    *(undefined4*)(param_1 + 0x1860) = (undefined4)(param_2[6]);
    param_2[6] = (undefined4)(uVar1);
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x1864));
    *(undefined4*)(param_1 + 0x1864) = (undefined4)(param_2[7]);
    param_2[7] = (undefined4)(uVar1);
  }
  if (cVar2 != '\0') {
    thunk_FUN_112a8010(param_1 + 8);
  }
  return;
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
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
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
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
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
      return (int)((uint)uVar2 << 8);
    }
    piVar3 = (int *)(piVar3 + 1);
    param_3 = (int *)(param_3 + 1);
    bVar6 = (bool)(3 < uVar5);
    uVar5 = (uint)(uVar5 - 4);
  } while (bVar6);
  return (int)(((uint)(uVar2) << 8 | (uint)(1)));
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


// Reference entry 111e01c0; body size 206 bytes.
#line 1 "ENTRY_111e01c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_111e01c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  byte *pbVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined1 auStack_8 [8];
  
  puVar6 = (undefined4 *)(param_2);
  if (0xf < (uint)param_2[5]) {
    puVar6 = (undefined4 *)((undefined4 *)*param_2);
  }
  uVar5 = (uint)(0);
  uVar7 = (uint)(0x811c9dc5);
  if (param_2[4] != 0) {
    do {
      pbVar1 = (byte *)((byte *)(uVar5 + (int)puVar6));
      uVar5 = (uint)(uVar5 + 1);
      uVar7 = (uint)((*pbVar1 ^ uVar7) * 0x1000193);
    } while (uVar5 < (uint)param_2[4]);
  }
  iVar4 = (int)(thunk_FUN_111c7c50(auStack_8,param_2,uVar7));
  piVar3 = (int *)(*(int **)(iVar4 + 4));
  if ((int *)(piVar3) == (int *)0x0) {
    return (undefined4)(0);
  }
  piVar2 = (int *)((int *)(*(int *)(param_1 + 0xc) + (*(uint *)(param_1 + 0x18) & uVar7) * 8));
  if ((int *)(int *)(piVar2[1]) == (int *)(piVar3)) {
    if ((int *)(int *)(*piVar2) == (int *)((piVar3))) {
      iVar4 = (int)(*(int *)(param_1 + 4));
      *piVar2 = (int)(iVar4);
      piVar2[1] = (int)(iVar4);
    }
    else {
      piVar2[1] = (int)(piVar3[1]);
    }
  }
  else if ((int *)(int *)(*piVar2) == (int *)((piVar3))) {
    *piVar2 = (int)(*piVar3);
  }
  iVar4 = (int)(*piVar3);
  *(int*)(param_1 + 8) = (int)(*(int *)(param_1 + 8) + -1);
  *(int*)piVar3[1] = (int)((int)(iVar4));
  *(int*)(iVar4 + 4) = (int)(piVar3[1]);
  thunk_FUN_111d35e0();
  if (0x1f < (uint)((int)piVar3 + (-4 - piVar3[-1]))) {
                    
    _invalid_parameter_noinfo_noreturn();
  }
  thunk_FUN_1148a50e(piVar3[-1],0x18ab);
  return (undefined4)(1);
}


// Reference entry 111e3830; body size 244 bytes.
#line 1 "ENTRY_111e3830"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111e3830(int param_1,undefined4 param_2,undefined4 param_3,char *param_4,char *param_5,
                 char *param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,char *param_12,char *param_13,
                 undefined4 param_14)

{
 try {
  short sVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined ***pppuVar5;
  undefined1 *puVar6;
  void *pvStack_11d40;
  undefined1 *puStack_11d3c;
  undefined4 uStack_11d38;
  undefined1 auStack_11d34 [1040];
  undefined1 auStack_11924 [1281];
  undefined1 auStack_11423 [299];
  int iStack_112f8;
  undefined4 uStack_73f0;
  undefined1 auStack_55fc [4];
  undefined4 uStack_55f8;
  undefined **ppuStack_43cc;
  undefined4 uStack_43c8;
  undefined1 uStack_43c4;
  undefined1 uStack_43a4;
  undefined1 uStack_3ba3;
  undefined1 uStack_33a0;
  undefined1 uStack_3387;
  undefined4 uStack_3344;
  undefined1 uStack_3340;
  undefined1 auStack_333c [2440];
  undefined **ppuStack_29b4;
  char cStack_29b0;
  undefined1 auStack_2970 [6];
  undefined2 uStack_296a;
  char acStack_2930 [1028];
  int iStack_252c;
  char cStack_1527;
  undefined1 uStack_1524;
  undefined1 uStack_1423;
  undefined1 uStack_13e2;
  undefined4 uStack_13c0;
  undefined1 auStack_13bc [684];
  undefined1 auStack_1110 [4100];
  undefined1 auStack_10c [128];
  undefined1 auStack_8c [132];
  uint uStack_8;


  uStack_8 = (uint)(DAT_12126b84 ^ (uint)auStack_11d34);

  switch(*(undefined1 *)(param_1 + 300)) {
  case 0:
  case 1:
                    
                    
    switch(*(undefined1 *)(param_1 + 300)) {
    default:
      uVar3 = (undefined4)(3);
      break;
    case 2:
      goto LAB_111e3d40;
    case 3:
    case 4:
      uVar3 = (undefined4)(2);
    }
    break;
  case 2:
LAB_111e3d40:
    uVar3 = (undefined4)(1);
    break;
  case 3:
  case 4:
    thunk_FUN_11283280(auStack_10c,0x80);
    thunk_FUN_1124e950("http://www.sonos.com/Services/1.1","credentials");

    sVar1 = (short)(thunk_FUN_111e7cb0(param_1,auStack_55fc,param_3,auStack_1110,0x1001));
    if (sVar1 == 0) {
      thunk_FUN_1124e200();
      uStack_11d38 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_11d38 + 1)) << 8 | (uint)(1)));
      if (((((char *)(param_12) != (char *)0x0) && (*param_12 != '\0')) && ((char *)(param_13) != (char *)0x0)) &&
         (*param_13 != '\0')) {
        piVar2 = (int *)((int *)thunk_FUN_1124fec0("username"));
        (**(code **)(*piVar2 + 0xc))(param_12);
        piVar2 = (int *)((int *)thunk_FUN_1124fec0("password"));
        (**(code **)(*piVar2 + 0xc))(param_13);
        puVar6 = (undefined1 *)(auStack_333c);
        thunk_FUN_11250060("login");
        thunk_FUN_1124f4c0(puVar6);
      }
      auStack_8c[0] = (undefined1)(0);
      if (((*(uint *)(param_1 + 0x130) >> 0x16 & 1) != 0) && ((int *)(DAT_122e8d30) != (int *)0x0)) {
        (**(code **)(*(int *)(uint)(DAT_122e8d30) + 0x24))(*(int *)(param_1 + 0x134) << 8 | 7,auStack_8c,0x81);
      }
      ppuStack_43cc = (undefined **)((uint)&ghidra_vftable_RSonosCPFaultHandler);








      *(unsigned char *)((char *)&uStack_11d38 + 0) = 2;
      thunk_FUN_111c32e0(auStack_10c,"http://www.sonos.com/Services/1.1","getDeviceAuthToken",0,
                         20000,10000,1,&ppuStack_43cc);
      uStack_11d38 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_11d38 + 1)) << 8 | (uint)(3)));
      thunk_FUN_111c6450(param_14);
      thunk_FUN_111da770(auStack_11d34,param_1,0,0,auStack_8c,0,0,0,0);
      *(undefined4*)(iStack_112f8 + 4) = (undefined4)(1);
      thunk_FUN_1124fe20(auStack_55fc);
      uStack_55f8 = (undefined4)(uStack_73f0);
      if (((char *)(param_4) != (char *)0x0) && (*param_4 != '\0')) {
        piVar2 = (int *)((int *)thunk_FUN_11250000("linkCode",0));
        (**(code **)(*piVar2 + 0xc))(param_4);
      }
      piVar2 = (int *)((int *)thunk_FUN_11250000("householdId",0));
      (**(code **)(*piVar2 + 0xc))(param_2);
      if (((char *)(param_5) != (char *)0x0) && (*param_5 != '\0')) {
        piVar2 = (int *)((int *)thunk_FUN_11250000("linkDeviceId",0));
        (**(code **)(*piVar2 + 0xc))(param_5);
      }
      if (((char *)(param_6) != (char *)0x0) && (*param_6 != '\0')) {
        piVar2 = (int *)((int *)thunk_FUN_11250000("callbackPath",0));
        (**(code **)(*piVar2 + 0xc))(param_6);
      }
      thunk_FUN_1124eaa0();
      *(unsigned char *)((char *)&uStack_11d38 + 0) = 4;
      thunk_FUN_112500b0("http://www.sonos.com/Services/1.1|authToken");
      thunk_FUN_112503c0(param_7,param_8);
      thunk_FUN_112500b0("http://www.sonos.com/Services/1.1|privateKey");
      thunk_FUN_112503c0(param_9,param_10);
      thunk_FUN_1124dd60();
      *(unsigned char *)((char *)&uStack_11d38 + 0) = 5;
      ppuStack_29b4 = (undefined **)((uint)&ghidra_vftable_RSonosParamRX);

      thunk_FUN_1124dee0();
      thunk_FUN_1106a8d0(acStack_2930,"http://www.sonos.com/Services/1.1",0x401);
      pcVar4 = (char *)(acStack_2930);
      do {
        cStack_29b0 = (char)(*pcVar4);
        pcVar4 = (char *)(pcVar4 + 1);
      } while (cStack_29b0 != '\0');
      iStack_252c = (int)((int)pcVar4 - (int)(acStack_2930 + 1));
      cStack_1527 = (char)(cStack_29b0);
      thunk_FUN_1145c250(auStack_2970,&DAT_1188a1d4,6);
      ppuStack_29b4 = (undefined **)((uint)&ghidra_vftable_RSonosUserInfoParam);
      uStack_13c0 = (undefined4)(param_11);



      pppuVar5 = (undefined ***)(&ppuStack_29b4);
      uStack_11d38 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_11d38 + 1)) << 8 | (uint)(6)));
      thunk_FUN_112500b0("http://www.sonos.com/Services/1.1|userInfo");
      thunk_FUN_112504f0(pppuVar5);
      puVar6 = (undefined1 *)(auStack_13bc);
      thunk_FUN_1124ff50("http://www.sonos.com/Services/1.1|getDeviceAuthTokenResult");
      thunk_FUN_112504f0(puVar6);
      sVar1 = (short)(thunk_FUN_111c5fc0());
      if (sVar1 != 0) {
        thunk_FUN_112b0270("sonoscp",(sVar1 == 0x40d) * '\x02' + '\x03',
                           "%s: %s#%s failed, ret = %hu",param_1,auStack_11924,auStack_11423,sVar1);
      }
      ppuStack_29b4 = (undefined **)((uint)&ghidra_vftable_RSonosParamRX);
      thunk_FUN_1124ecb0();
      thunk_FUN_1124eb30();
      thunk_FUN_1124f230();
      thunk_FUN_111c3ae0();
      ppuStack_43cc = (undefined **)((uint)&ghidra_vftable_RSOAPFaultHandler);
      thunk_FUN_1124eda0();
    }
    thunk_FUN_1124f190();
    goto LAB_111e3d6a;
  default:
    uVar3 = (undefined4)(0);
  }
  thunk_FUN_112b0270("sonoscp",3,
                     "WARNING! getDeviceAuthToken was called for %s (%u), which has credentialType = %u (not OAuth)"
                     ,param_1,*(undefined4 *)(param_1 + 0x134),uVar3,uStack_8);
LAB_111e3d6a:

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 111e40c0; body size 4 bytes.
#line 1 "ENTRY_111e40c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 __fastcall FUN_111e40c0(undefined2 *param_1)

{
  return (undefined2)(*param_1);
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
  return (short)(sVar1);
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
  if (((char *)(pcVar1) != (char *)0x0) && (*pcVar1 != '\0')) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 111e78b0; body size 75 bytes.
#line 1 "ENTRY_111e78b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111e78b0(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 1);
  if (*(int *)(param_1 + 4) == -1) {
    *(undefined4*)(param_1 + 4) = (undefined4)(3);
    uVar1 = (uint)(*(uint *)(param_1 + 0x10));
    uVar2 = (uint)(*(uint *)(param_1 + 0xc24));
    if (uVar2 < uVar1) {
      *(undefined4*)(param_1 + 0x10) = (undefined4)(2);
      *(uint*)(param_1 + 0xc24) = (uint)((uint)(uVar2 != 0));
      return;
    }
    if (uVar1 < uVar2) {
      *(undefined4*)(param_1 + 0xc24) = (undefined4)(2);
      *(uint*)(param_1 + 0x10) = (uint)((uint)(uVar1 != 0));
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
  return (undefined4)(param_1);
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
  *(undefined4*)(iStack_15394 + 4) = (undefined4)(1);
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


// Reference entry 111eebe0; body size 70 bytes.
#line 1 "ENTRY_111eebe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111eebe0(int param_1)

{
  *(undefined1*)(param_1 + 0x104) = (undefined1)(0);
  *(undefined1*)(param_1 + 0x1494) = (undefined1)(0);
  if (((*(uint *)(param_1 + 0x1658) >> 0x16 & 1) != 0) && ((int *)(DAT_122e8d30) != (int *)0x0)) {
    (**(code **)(*(int *)(uint)(DAT_122e8d30) + 0x24))
              (*(int *)(param_1 + 0x165c) << 8 | 7,(undefined1 *)(param_1 + 0x1494),0x81);
  }
  return;
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
  *(int*)(param_1 + 0x1688) = (int)(param_1 + 0x168c);
  if (param_2 != '\0') {
    cVar2 = (char)(thunk_FUN_112a7f50(&DAT_122e8d38));
    *(int*)(param_1 + 0x16c4) = (int)(DAT_122e8d34);
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
  *(undefined4*)(iStack_116ac + 4) = (undefined4)(1);
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
  *(undefined4*)(iStack_11958 + 4) = (undefined4)(1);
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
  if ((((char *)(param_3) != (char *)0x0) && (*param_3 != '\0')) &&
     ((*(uint *)(param_1[2] + 0x1658) >> 0x13 & 1) != 0)) {
    piVar4 = (int *)((int *)thunk_FUN_11250000("contextId",0));
    (**(code **)(*piVar4 + 0xc))(param_3);
  }
  if (((char *)(char *)(param_4[7]) != (char *)(0x0)) && (*(char *)param_4[7] != '\0')) {
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
  *(undefined4*)(iStack_116ac + 4) = (undefined4)(1);
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
  if ((((char *)(param_3) != (char *)0x0) && (*param_3 != '\0')) &&
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
  *(undefined4*)(iStack_116ac + 4) = (undefined4)(1);
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
  *(undefined4*)(iStack_116ac + 4) = (undefined4)(1);
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
  if ((((char *)(param_3) != (char *)0x0) && (*param_3 != '\0')) &&
     ((*(uint *)(param_1[2] + 0x1658) >> 0x13 & 1) != 0)) {
    piVar4 = (int *)((int *)thunk_FUN_11250000("contextId",0));
    (**(code **)(*piVar4 + 0xc))(param_3);
  }
  if (((char *)(char *)(param_4[7]) != (char *)(0x0)) && (*(char *)param_4[7] != '\0')) {
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
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
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
      return (int)(((uint)(uVar2) << 8 | (uint)(1)));
    }
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 111f1960; body size 19 bytes.
#line 1 "ENTRY_111f1960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_111f1960(int param_1)

{
  uint in_EAX;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    return (uint)(((uint)((int3)((uint)*(int *)(param_1 + 0x2c) >> 8)) << 8 | (uint)(*(undefined1 *)(*(int *)(param_1 + 0x2c) + 0xd951))));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 111f2d00; body size 100 bytes.
#line 1 "ENTRY_111f2d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111f2d00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_408 [1028];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)auStack_408);
  thunk_FUN_11247e90(param_1,auStack_408,0x401);
  thunk_FUN_1145c720(param_2,param_3,&UNK_119d458c,auStack_408);
  thunk_FUN_1148ac28();
  return;
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
  *(undefined4*)(param_1 + 0x8508) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x850c) = (undefined4)(0);

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
  *(undefined4*)(param_1 + 0xa9bc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xa9c0) = (undefined4)(0);
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
  return (short)(sVar1);
}


// Reference entry 111f5100; body size 23 bytes.
#line 1 "ENTRY_111f5100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111f5100(uint param_2)
{
  int param_1 = (int )this;
  *(byte*)(param_1 + 0x222) = (byte)(*(byte *)(param_1 + 0x222) | (byte)(1 << (param_2 & 0x1f)));
  return;
}


// Reference entry 111f5120; body size 23 bytes.
#line 1 "ENTRY_111f5120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111f5120(uint param_2)
{
  int param_1 = (int )this;
  *(byte*)(param_1 + 0x323) = (byte)(*(byte *)(param_1 + 0x323) | (byte)(1 << (param_2 & 0x1f)));
  return;
}


// Reference entry 111f5320; body size 35 bytes.
#line 1 "ENTRY_111f5320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111f5320(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_11281ab0(param_2);
  *(uint*)(param_1 + 0x166c) = (uint)((uint)*(byte *)(param_1 + 0x1654));
  return;
}


// Reference entry 111f64c0; body size 38 bytes.
#line 1 "ENTRY_111f64c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_111f64c0(undefined4 param_1)

{
  switch(param_1) {
  case 2:
    return (char *)("search");
  case 3:
    return (char *)("track");
  case 4:
    return (char *)("album");
  case 5:
    return (char *)("artist");
  case 6:
    return (char *)("playlist");
  case 7:
    return (char *)("genre");
  case 8:
    return (char *)("other");
  case 9:
    return (char *)("stream");
  case 10:
    return (char *)("favorite");
  case 0xb:
    return (char *)("show");
  case 0xc:
    return (char *)("program");
  case 0xd:
    return (char *)("albumList");
  case 0xe:
    return (char *)("trackList");
  case 0xf:
    return (char *)("artistTrackList");
  case 0x10:
    return (char *)("folder");
  case 0x11:
    return (char *)("compilationAlbum");
  default:
    return (char *)("");
  case 0x13:
    return (char *)("audiobook");
  case 0x14:
    return (char *)("podcast");
  case 0x15:
    return (char *)("episode.podcast");
  case 0x16:
    return (char *)("episode.show");
  case 0xfe:
    return (char *)("container");
  }
}


// Reference entry 111f6760; body size 12 bytes.
#line 1 "ENTRY_111f6760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_111f6760(int param_1)

{
  return (uint)(*(uint *)(param_1 + 0x130) >> 3 & 0xffffff01);
}


// Reference entry 111f6770; body size 12 bytes.
#line 1 "ENTRY_111f6770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_111f6770(int param_1)

{
  return (uint)(*(uint *)(param_1 + 0x130) >> 0x13 & 0xffffff01);
}


// Reference entry 111f6780; body size 12 bytes.
#line 1 "ENTRY_111f6780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_111f6780(int param_1)

{
  return (uint)(*(uint *)(param_1 + 0x130) >> 0x11 & 0xffffff01);
}


// Reference entry 111f6790; body size 12 bytes.
#line 1 "ENTRY_111f6790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_111f6790(int param_1)

{
  return (uint)(*(uint *)(param_1 + 0x130) >> 0x12 & 0xffffff01);
}


// Reference entry 111f67b0; body size 7 bytes.
#line 1 "ENTRY_111f67b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_111f67b0(int param_1)

{
  return (undefined4)(((uint)((int3)((uint)*(int *)(param_1 + 8) >> 8)) << 8 | (uint)(*(undefined1 *)(*(int *)(param_1 + 8) + 1))));
}


// Reference entry 111f6e20; body size 72 bytes.
#line 1 "ENTRY_111f6e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_111f6e20(char *param_1,char *param_2)

{
  if (((((char *)(param_1) != (char *)0x0) && ((char *)(param_2) != (char *)0x0)) && (*param_1 != '\0')) &&
     (*param_2 != '\0')) {
    thunk_FUN_111f6fe0(param_1,param_2);
    return (undefined4)(0x40d);
  }
  thunk_FUN_112b0270("sonoscp",3,"Null or empty token/key for token refrsh - ignored");
  return (undefined4)(0x192);
}


// Reference entry 111f6fd0; body size 8 bytes.
#line 1 "ENTRY_111f6fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_111f6fd0(byte *param_2,byte *param_3)
{
  int param_1 = (int )this;
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  bool bVar6;
  
  pbVar2 = (byte *)((byte *)(param_1 + 0x13c));
  pbVar5 = (byte *)(param_2);
  do {
    bVar1 = (byte)(*pbVar2);
    bVar6 = (bool)(bVar1 < *pbVar5);
    if (bVar1 != *pbVar5) {
LAB_111f6ef0:
      uVar3 = (uint)(-(uint)bVar6 | 1);
      goto LAB_111f6ef5;
    }
    if (bVar1 == 0) break;
    bVar1 = (byte)(pbVar2[1]);
    bVar6 = (bool)(bVar1 < pbVar5[1]);
    if ((byte *)((bVar1)) != (byte *)(pbVar5[1])) goto LAB_111f6ef0;
    pbVar2 = (byte *)(pbVar2 + 2);
    pbVar5 = (byte *)(pbVar5 + 2);
  } while (bVar1 != 0);
  uVar3 = (uint)(0);
LAB_111f6ef5:
  if (uVar3 != 0) {
    thunk_FUN_1145c250((byte *)(param_1 + 0x13c),param_2,0x801);
    thunk_FUN_111db390();
  }
  pbVar2 = (byte *)((byte *)(param_1 + 0x93d));
  pbVar5 = (byte *)(param_3);
  do {
    bVar1 = (byte)(*pbVar2);
    bVar6 = (bool)(bVar1 < *pbVar5);
    if (bVar1 != *pbVar5) {
LAB_111f6f45:
      uVar4 = (uint)(-(uint)bVar6 | 1);
      goto LAB_111f6f4a;
    }
    if (bVar1 == 0) break;
    bVar1 = (byte)(pbVar2[1]);
    bVar6 = (bool)(bVar1 < pbVar5[1]);
    if ((byte *)((bVar1)) != (byte *)(pbVar5[1])) goto LAB_111f6f45;
    pbVar2 = (byte *)(pbVar2 + 2);
    pbVar5 = (byte *)(pbVar5 + 2);
  } while (bVar1 != 0);
  uVar4 = (uint)(0);
LAB_111f6f4a:
  if (uVar4 == 0) {
    return (bool)(uVar3 != 0);
  }
  thunk_FUN_1145c250((byte *)(param_1 + 0x93d),param_3,0x801);
  *(undefined1*)(param_1 + 0x19) = (undefined1)(1);
  thunk_FUN_112b0270("sonoscp",6,"setting token key to %s for sid: %u","valid",
                     *(undefined4 *)(param_1 + 0x1674));
  return (bool)(true);
}


// Reference entry 111f7180; body size 8 bytes.
#line 1 "ENTRY_111f7180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ short __thiscall Recovered_Bulk::FUN_111f7180(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  short sVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0xc));
  sVar2 = (short)(0x1f5);
  if ((((int *)(DAT_122f55e4) != (int *)0x0) &&
      (sVar2 = (**(code **)(*(int *)(uint)(DAT_122f55e4) + 0x18))
                         (*(int *)(iVar1 + 0x1674) << 8 | 7,*(undefined4 *)(iVar1 + 0x1534),param_2)
      , sVar2 != 0)) && (sVar2 != 0x323)) {
    thunk_FUN_112b0270("sonoscp",3,"Unable to update accountTier res=%d (%u)",sVar2,
                       *(undefined4 *)(iVar1 + 0x1530));
  }
  return (short)(sVar2);
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
    return (int)((uint)uVar2 << 8);
  }
  return (int)(((uint)(uVar2) << 8 | (uint)(1)));
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
    return (int)((uint)uVar2 << 8);
  }
  return (int)(((uint)(uVar2) << 8 | (uint)(1)));
}


// Reference entry 111f7200; body size 31 bytes.
#line 1 "ENTRY_111f7200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_111f7200(int param_1)

{
  if ((*(short *)(param_1 + 0x120) == 1) && (*(short *)(param_1 + 0x122) == 0)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 111f7230; body size 11 bytes.
#line 1 "ENTRY_111f7230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111f7230(int param_1)

{
                    
                    
  (**(code **)(**(int **)(param_1 + 0x1688) + 4))();
  return;
}


// Reference entry 111f7700; body size 93 bytes.
#line 1 "ENTRY_111f7700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111f7700(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_1125b6a0(param_1,0x7c,&UNK_1001167b,&UNK_1000ca45,&UNK_1009a890);
  param_1[2] = (undefined4)(param_2);
  param_1[0x304] = (undefined4)((int)param_1 + 0x40f);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RNotifyBodyParser);
  *(undefined2*)(param_1 + 3) = (undefined2)(0);
  *(undefined1*)((int)param_1 + 0xe) = (undefined1)(0);
  param_1[0x305] = (undefined4)(0x800);
  param_1[0x306] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 111f7c10; body size 91 bytes.
#line 1 "ENTRY_111f7c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111f7c10(undefined4 *param_2)
{
  int param_1 = (int )this;
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  bool bVar6;
  
  uVar5 = (undefined4)(0);
  pbVar2 = (byte *)((byte *)*param_2);
  do {
    if ((byte *)(pbVar2) == (byte *)0x0) {
      (**(code **)(**(int **)(param_1 + 8) + 4))(uVar5);
      return;
    }
    pbVar4 = (byte *)(&DAT_119d7cb0);
    do {
      bVar1 = (byte)(*pbVar2);
      bVar6 = (bool)(bVar1 < *pbVar4);
      if (bVar1 != *pbVar4) {
LAB_111f7c46:
        uVar3 = (uint)(-(uint)bVar6 | 1);
        goto LAB_111f7c4b;
      }
      if (bVar1 == 0) break;
      bVar1 = (byte)(pbVar2[1]);
      bVar6 = (bool)(bVar1 < pbVar4[1]);
      if ((byte *)((bVar1)) != (byte *)(pbVar4[1])) goto LAB_111f7c46;
      pbVar2 = (byte *)(pbVar2 + 2);
      pbVar4 = (byte *)(pbVar4 + 2);
    } while (bVar1 != 0);
    uVar3 = (uint)(0);
LAB_111f7c4b:
    if (uVar3 == 0) {
      uVar5 = (undefined4)(param_2[1]);
    }
    pbVar2 = (byte *)((byte *)param_2[2]);
    param_2 = (undefined4 *)(param_2 + 2);
  } while( true );
}


// Reference entry 111f9160; body size 74 bytes.
#line 1 "ENTRY_111f9160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111f9160(byte *param_2)
{
  int param_1 = (int )this;
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  bool bVar4;
  
  pcVar2 = (char *)("MediaServers");
  do {
    bVar1 = (byte)(*param_2);
    bVar4 = (bool)(bVar1 < (byte)*pcVar2);
    if (bVar1 != *pcVar2) {
LAB_111f9190:
      uVar3 = (uint)(-(uint)bVar4 | 1);
      goto LAB_111f9195;
    }
    if (bVar1 == 0) break;
    bVar1 = (byte)(param_2[1]);
    bVar4 = (bool)(bVar1 < (byte)pcVar2[1]);
    if ((char *)((bVar1)) != (char *)(pcVar2[1])) goto LAB_111f9190;
    param_2 = (byte *)(param_2 + 2);
    pcVar2 = (char *)(pcVar2 + 2);
  } while (bVar1 != 0);
  uVar3 = (uint)(0);
LAB_111f9195:
  if (uVar3 == 0) {
    *(undefined4*)(param_1 + 0x210) = (undefined4)(0);
    *(undefined4*)(param_1 + 0x214) = (undefined4)(0);
  }
  return;
}


// Reference entry 111f91c0; body size 169 bytes.
#line 1 "ENTRY_111f91c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111f91c0(byte *param_2)
{
  int param_1 = (int )this;
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  char *pcVar5;
  bool bVar6;
  
  pcVar5 = (char *)("MediaServer");
  pbVar2 = (byte *)(param_2);
  do {
    bVar1 = (byte)(*pbVar2);
    bVar6 = (bool)(bVar1 < (byte)*pcVar5);
    if (bVar1 != *pcVar5) {
LAB_111f91f0:
      uVar3 = (uint)(-(uint)bVar6 | 1);
      goto LAB_111f91f5;
    }
    if (bVar1 == 0) break;
    bVar1 = (byte)(pbVar2[1]);
    bVar6 = (bool)(bVar1 < (byte)pcVar5[1]);
    if ((char *)((bVar1)) != (char *)(pcVar5[1])) goto LAB_111f91f0;
    pbVar2 = (byte *)(pbVar2 + 2);
    pcVar5 = (char *)(pcVar5 + 2);
  } while (bVar1 != 0);
  uVar3 = (uint)(0);
LAB_111f91f5:
  if (uVar3 != 0) {
    pbVar4 = (byte *)(&DAT_119d7e24);
    pbVar2 = (byte *)(param_2);
    do {
      bVar1 = (byte)(*pbVar2);
      bVar6 = (bool)(bVar1 < *pbVar4);
      if (bVar1 != *pbVar4) {
LAB_111f9220:
        uVar3 = (uint)(-(uint)bVar6 | 1);
        goto LAB_111f9225;
      }
      if (bVar1 == 0) break;
      bVar1 = (byte)(pbVar2[1]);
      bVar6 = (bool)(bVar1 < pbVar4[1]);
      if ((byte *)((bVar1)) != (byte *)(pbVar4[1])) goto LAB_111f9220;
      pbVar2 = (byte *)(pbVar2 + 2);
      pbVar4 = (byte *)(pbVar4 + 2);
    } while (bVar1 != 0);
    uVar3 = (uint)(0);
LAB_111f9225:
    if (uVar3 != 0) {
      pcVar5 = (char *)("Service");
      do {
        bVar1 = (byte)(*param_2);
        bVar6 = (bool)(bVar1 < (byte)*pcVar5);
        if (bVar1 != *pcVar5) {
LAB_111f9250:
          uVar3 = (uint)(-(uint)bVar6 | 1);
          goto LAB_111f9255;
        }
        if (bVar1 == 0) break;
        bVar1 = (byte)(param_2[1]);
        bVar6 = (bool)(bVar1 < (byte)pcVar5[1]);
        if ((char *)((bVar1)) != (char *)(pcVar5[1])) goto LAB_111f9250;
        param_2 = (byte *)(param_2 + 2);
        pcVar5 = (char *)(pcVar5 + 2);
      } while (bVar1 != 0);
      uVar3 = (uint)(0);
LAB_111f9255:
      if (uVar3 != 0) {
        return;
      }
    }
  }
  *(undefined1**)(param_1 + 0x214) = (undefined1 *)(LAB_1009234d);
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
    *(uint*)(param_1 + 0xc14) = (uint)(uVar1);
    _Dst = (void *)((void *)thunk_FUN_1148b586(uVar1));
    memcpy(_Dst,*(void **)(param_1 + 0xc10),*(size_t *)(param_1 + 0xc18));
    if (*(void **)(param_1 + 0xc10) != (void *)(((param_1 + 0x40f)))) {
      free(*(void **)(param_1 + 0xc10));
    }
    iVar2 = (int)(*(int *)(param_1 + 0xc18));
    *(void**)(param_1 + 0xc10) = (void *)(_Dst);
  }
  else {
    _Dst = (void *)(*(void **)(param_1 + 0xc10));
  }
  memcpy((void *)((int)_Dst + iVar2),param_2,param_3);
  *(int*)(param_1 + 0xc18) = (int)(*(int *)(param_1 + 0xc18) + param_3);
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


// Reference entry 111f92f0; body size 242 bytes.
#line 1 "ENTRY_111f92f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111f92f0(byte *param_2)
{
  int param_1 = (int )this;
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  char *pcVar6;
  bool bVar7;
  
  iVar2 = (int)(strncmp((char *)param_2,(char *)(param_1 + 0x14),*(size_t *)(param_1 + 0x414)));
  pbVar3 = (byte *)(param_2);
  if (iVar2 == 0) {
    pbVar3 = (byte *)(param_2 + *(int *)(param_1 + 0x414));
  }
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined1*)(param_1 + 0xe) = (undefined1)(0);
    return;
  }
  if (*(char *)(param_1 + 0xc) != '\0') {
    if (*(char *)(param_1 + 0xd) != '\0') {
      pcVar6 = (char *)("InstanceID");
      pbVar4 = (byte *)(pbVar3);
      do {
        bVar1 = (byte)(*pbVar4);
        bVar7 = (bool)(bVar1 < (byte)*pcVar6);
        if (bVar1 != *pcVar6) {
LAB_111f9363:
          uVar5 = (uint)(-(uint)bVar7 | 1);
          goto LAB_111f9368;
        }
        if (bVar1 == 0) break;
        bVar1 = (byte)(pbVar4[1]);
        bVar7 = (bool)(bVar1 < (byte)pcVar6[1]);
        if ((char *)((bVar1)) != (char *)(pcVar6[1])) goto LAB_111f9363;
        pbVar4 = (byte *)(pbVar4 + 2);
        pcVar6 = (char *)(pcVar6 + 2);
      } while (bVar1 != 0);
      uVar5 = (uint)(0);
LAB_111f9368:
      if (uVar5 != 0) {
        pcVar6 = (char *)("QueueID");
        do {
          bVar1 = (byte)(*pbVar3);
          bVar7 = (bool)(bVar1 < (byte)*pcVar6);
          if (bVar1 != *pcVar6) {
LAB_111f9392:
            uVar5 = (uint)(-(uint)bVar7 | 1);
            goto LAB_111f9397;
          }
          if (bVar1 == 0) break;
          bVar1 = (byte)(pbVar3[1]);
          bVar7 = (bool)(bVar1 < (byte)pcVar6[1]);
          if ((char *)((bVar1)) != (char *)(pcVar6[1])) goto LAB_111f9392;
          pbVar3 = (byte *)(pbVar3 + 2);
          pcVar6 = (char *)(pcVar6 + 2);
        } while (bVar1 != 0);
        uVar5 = (uint)(0);
LAB_111f9397:
        if (uVar5 != 0) {
          return;
        }
      }
      (**(code **)(**(int **)(param_1 + 8) + 0x10))();
      *(undefined1*)(param_1 + 0xd) = (undefined1)(0);
      return;
    }
    pcVar6 = (char *)("Event");
    do {
      bVar1 = (byte)(*param_2);
      bVar7 = (bool)(bVar1 < (byte)*pcVar6);
      if (bVar1 != *pcVar6) {
LAB_111f93d1:
        uVar5 = (uint)(-(uint)bVar7 | 1);
        goto LAB_111f93d6;
      }
      if (bVar1 == 0) break;
      bVar1 = (byte)(param_2[1]);
      bVar7 = (bool)(bVar1 < (byte)pcVar6[1]);
      if ((char *)((bVar1)) != (char *)(pcVar6[1])) goto LAB_111f93d1;
      param_2 = (byte *)(param_2 + 2);
      pcVar6 = (char *)(pcVar6 + 2);
    } while (bVar1 != 0);
    uVar5 = (uint)(0);
LAB_111f93d6:
    if (uVar5 == 0) {
      *(undefined1*)(param_1 + 0xc) = (undefined1)(0);
    }
  }
  return;
}


// Reference entry 111f9420; body size 239 bytes.
#line 1 "ENTRY_111f9420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111f9420(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  char *pcVar6;
  bool bVar7;
  
  iVar2 = (int)(strncmp((char *)param_2,(char *)(param_1 + 0x14),*(size_t *)(param_1 + 0x414)));
  pbVar3 = (byte *)(param_2);
  if (iVar2 == 0) {
    pbVar3 = (byte *)(param_2 + *(int *)(param_1 + 0x414));
  }
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined1*)(param_1 + 0xe) = (undefined1)(0);
    return;
  }
  if (*(char *)(param_1 + 0xc) != '\0') {
    if (*(char *)(param_1 + 0xd) != '\0') {
      pcVar6 = (char *)("InstanceID");
      pbVar4 = (byte *)(pbVar3);
      do {
        bVar1 = (byte)(*pbVar4);
        bVar7 = (bool)(bVar1 < (byte)*pcVar6);
        if (bVar1 != *pcVar6) {
LAB_111f9493:
          uVar5 = (uint)(-(uint)bVar7 | 1);
          goto LAB_111f9498;
        }
        if (bVar1 == 0) break;
        bVar1 = (byte)(pbVar4[1]);
        bVar7 = (bool)(bVar1 < (byte)pcVar6[1]);
        if ((char *)((bVar1)) != (char *)(pcVar6[1])) goto LAB_111f9493;
        pbVar4 = (byte *)(pbVar4 + 2);
        pcVar6 = (char *)(pcVar6 + 2);
      } while (bVar1 != 0);
      uVar5 = (uint)(0);
LAB_111f9498:
      if (uVar5 != 0) {
        pcVar6 = (char *)("QueueID");
        do {
          bVar1 = (byte)(*pbVar3);
          bVar7 = (bool)(bVar1 < (byte)*pcVar6);
          if (bVar1 != *pcVar6) {
LAB_111f94c2:
            uVar5 = (uint)(-(uint)bVar7 | 1);
            goto LAB_111f94c7;
          }
          if (bVar1 == 0) break;
          bVar1 = (byte)(pbVar3[1]);
          bVar7 = (bool)(bVar1 < (byte)pcVar6[1]);
          if ((char *)((bVar1)) != (char *)(pcVar6[1])) goto LAB_111f94c2;
          pbVar3 = (byte *)(pbVar3 + 2);
          pcVar6 = (char *)(pcVar6 + 2);
        } while (bVar1 != 0);
        uVar5 = (uint)(0);
LAB_111f94c7:
        if (uVar5 != 0) {
          return;
        }
      }
      (**(code **)(**(int **)(param_1 + 8) + 0x10))();
      *(undefined1*)(param_1 + 0xd) = (undefined1)(0);
      return;
    }
    pcVar6 = (char *)("Event");
    do {
      bVar1 = (byte)(*param_2);
      bVar7 = (bool)(bVar1 < (byte)*pcVar6);
      if (bVar1 != *pcVar6) {
LAB_111f9500:
        uVar5 = (uint)(-(uint)bVar7 | 1);
        goto LAB_111f9505;
      }
      if (bVar1 == 0) break;
      bVar1 = (byte)(param_2[1]);
      bVar7 = (bool)(bVar1 < (byte)pcVar6[1]);
      if ((char *)((bVar1)) != (char *)(pcVar6[1])) goto LAB_111f9500;
      param_2 = (byte *)(param_2 + 2);
      pcVar6 = (char *)(pcVar6 + 2);
    } while (bVar1 != 0);
    uVar5 = (uint)(0);
LAB_111f9505:
    if (uVar5 == 0) {
      *(undefined1*)(param_1 + 0xc) = (undefined1)(0);
    }
  }
  return;
}


// Reference entry 111f9550; body size 21 bytes.
#line 1 "ENTRY_111f9550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111f9550(int param_1,undefined4 param_2)

{
  if (*(code **)(param_1 + 0x214) != (code *)((0x0))) {
    (**(code **)(param_1 + 0x214))(param_2);
  }
  return;
}


// Reference entry 111f96c0; body size 254 bytes.
#line 1 "ENTRY_111f96c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111f96c0(uint param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  byte *pbVar6;
  byte *_Str;
  bool bVar7;
  
  uVar5 = (uint)(param_1);
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xd) == '\0') {
      if (*(char *)(param_1 + 0xc) != '\0') {
        pcVar4 = (char *)("urn:schemas-upnp-org:event-1-0|propertyset");
        do {
          bVar1 = (byte)(*param_2);
          bVar7 = (bool)(bVar1 < (byte)*pcVar4);
          if (bVar1 != *pcVar4) {
LAB_111f97b0:
            uVar5 = (uint)(-(uint)bVar7 | 1);
            goto LAB_111f97b5;
          }
          if (bVar1 == 0) break;
          bVar1 = (byte)(param_2[1]);
          bVar7 = (bool)(bVar1 < (byte)pcVar4[1]);
          if ((char *)((bVar1)) != (char *)(pcVar4[1])) goto LAB_111f97b0;
          param_2 = (byte *)(param_2 + 2);
          pcVar4 = (char *)(pcVar4 + 2);
        } while (bVar1 != 0);
        uVar5 = (uint)(0);
LAB_111f97b5:
        if (uVar5 == 0) {
          *(undefined1*)(param_1 + 0xc) = (undefined1)(0);
          return;
        }
      }
    }
    else {
      pcVar4 = (char *)("urn:schemas-upnp-org:event-1-0|property");
      do {
        bVar1 = (byte)(*param_2);
        bVar7 = (bool)(bVar1 < (byte)*pcVar4);
        if (bVar1 != *pcVar4) {
LAB_111f9770:
          uVar5 = (uint)(-(uint)bVar7 | 1);
          goto LAB_111f9775;
        }
        if (bVar1 == 0) break;
        bVar1 = (byte)(param_2[1]);
        bVar7 = (bool)(bVar1 < (byte)pcVar4[1]);
        if ((char *)((bVar1)) != (char *)(pcVar4[1])) goto LAB_111f9770;
        param_2 = (byte *)(param_2 + 2);
        pcVar4 = (char *)(pcVar4 + 2);
      } while (bVar1 != 0);
      uVar5 = (uint)(0);
LAB_111f9775:
      if (uVar5 == 0) {
        *(undefined1*)(param_1 + 0xd) = (undefined1)(0);
        return;
      }
    }
  }
  else {
    _Str = (byte *)((byte *)(param_1 + 0xf));
    pbVar2 = (byte *)(param_2);
    pbVar6 = (byte *)(_Str);
    do {
      bVar1 = (byte)(*pbVar2);
      bVar7 = (bool)(bVar1 < *pbVar6);
      if (bVar1 != *pbVar6) {
LAB_111f96f5:
        uVar3 = (uint)(-(uint)bVar7 | 1);
        goto LAB_111f96fa;
      }
      if (bVar1 == 0) break;
      bVar1 = (byte)(pbVar2[1]);
      bVar7 = (bool)(bVar1 < pbVar6[1]);
      if ((byte *)((bVar1)) != (byte *)(pbVar6[1])) goto LAB_111f96f5;
      pbVar2 = (byte *)(pbVar2 + 2);
      pbVar6 = (byte *)(pbVar6 + 2);
    } while (bVar1 != 0);
    uVar3 = (uint)(0);
LAB_111f96fa:
    if (uVar3 == 0) {
      param_1 = (uint)(param_1 & 0xffffff00);
      thunk_FUN_111f7a60(&param_1,1);
      pcVar4 = (char *)(strchr((char *)_Str,0x7c));
      if ((char *)(pcVar4) != (char *)0x0) {
        _Str = (byte *)((byte *)(pcVar4 + 1));
      }
      (**(code **)(**(int **)(uVar5 + 8) + 4))(_Str,*(undefined4 *)(uVar5 + 0xc10));
      *(undefined1*)(uVar5 + 0xe) = (undefined1)(0);
    }
  }
  return;
}


// Reference entry 111f99d0; body size 350 bytes.
#line 1 "ENTRY_111f99d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111f99d0(int param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  bool bVar4;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    if (*(char *)(param_1 + 0xf) == '\0') {
      if (*(char *)(param_1 + 0x10) != '\0') {
        pcVar3 = (char *)("QuarantinedDevices");
        do {
          bVar1 = (byte)(*param_2);
          bVar4 = (bool)(bVar1 < (byte)*pcVar3);
          if (bVar1 != *pcVar3) {
LAB_111f9b17:
            uVar2 = (uint)(-(uint)bVar4 | 1);
            goto LAB_111f9b1c;
          }
          if (bVar1 == 0) break;
          bVar1 = (byte)(param_2[1]);
          bVar4 = (bool)(bVar1 < (byte)pcVar3[1]);
          if ((char *)((bVar1)) != (char *)(pcVar3[1])) goto LAB_111f9b17;
          param_2 = (byte *)(param_2 + 2);
          pcVar3 = (char *)(pcVar3 + 2);
        } while (bVar1 != 0);
        uVar2 = (uint)(0);
LAB_111f9b1c:
        if (uVar2 == 0) {
          (**(code **)(**(int **)(param_1 + 8) + 0x28))();
          *(undefined1*)(param_1 + 0x10) = (undefined1)(0);
        }
      }
    }
    else {
      pcVar3 = (char *)("VanishedDevices");
      do {
        bVar1 = (byte)(*param_2);
        bVar4 = (bool)(bVar1 < (byte)*pcVar3);
        if (bVar1 != *pcVar3) {
LAB_111f9ad1:
          uVar2 = (uint)(-(uint)bVar4 | 1);
          goto LAB_111f9ad6;
        }
        if (bVar1 == 0) break;
        bVar1 = (byte)(param_2[1]);
        bVar4 = (bool)(bVar1 < (byte)pcVar3[1]);
        if ((char *)((bVar1)) != (char *)(pcVar3[1])) goto LAB_111f9ad1;
        param_2 = (byte *)(param_2 + 2);
        pcVar3 = (char *)(pcVar3 + 2);
      } while (bVar1 != 0);
      uVar2 = (uint)(0);
LAB_111f9ad6:
      if (uVar2 == 0) {
        (**(code **)(**(int **)(param_1 + 8) + 0x18))();
        *(undefined1*)(param_1 + 0xf) = (undefined1)(0);
        return;
      }
    }
  }
  else if (*(char *)(param_1 + 0xd) == '\0') {
    pcVar3 = (char *)("ZoneGroup");
    do {
      bVar1 = (byte)(*param_2);
      bVar4 = (bool)(bVar1 < (byte)*pcVar3);
      if (bVar1 != *pcVar3) {
LAB_111f9a87:
        uVar2 = (uint)(-(uint)bVar4 | 1);
        goto LAB_111f9a8c;
      }
      if (bVar1 == 0) break;
      bVar1 = (byte)(param_2[1]);
      bVar4 = (bool)(bVar1 < (byte)pcVar3[1]);
      if ((char *)((bVar1)) != (char *)(pcVar3[1])) goto LAB_111f9a87;
      param_2 = (byte *)(param_2 + 2);
      pcVar3 = (char *)(pcVar3 + 2);
    } while (bVar1 != 0);
    uVar2 = (uint)(0);
LAB_111f9a8c:
    if (uVar2 == 0) {
      (**(code **)(**(int **)(param_1 + 8) + 0xc))();
      *(undefined1*)(param_1 + 0xc) = (undefined1)(0);
      return;
    }
  }
  else if (*(char *)(param_1 + 0xe) == '\0') {
    pcVar3 = (char *)("ZoneGroupMember");
    do {
      bVar1 = (byte)(*param_2);
      bVar4 = (bool)(bVar1 < (byte)*pcVar3);
      if (bVar1 != *pcVar3) {
LAB_111f9a50:
        uVar2 = (uint)(-(uint)bVar4 | 1);
        goto LAB_111f9a55;
      }
      if (bVar1 == 0) break;
      bVar1 = (byte)(param_2[1]);
      bVar4 = (bool)(bVar1 < (byte)pcVar3[1]);
      if ((char *)((bVar1)) != (char *)(pcVar3[1])) goto LAB_111f9a50;
      param_2 = (byte *)(param_2 + 2);
      pcVar3 = (char *)(pcVar3 + 2);
    } while (bVar1 != 0);
    uVar2 = (uint)(0);
LAB_111f9a55:
    if (uVar2 == 0) {
      *(undefined1*)(param_1 + 0xd) = (undefined1)(0);
      return;
    }
  }
  else {
    pcVar3 = (char *)("Satellite");
    do {
      bVar1 = (byte)(*param_2);
      bVar4 = (bool)(bVar1 < (byte)*pcVar3);
      if (bVar1 != *pcVar3) {
LAB_111f9a14:
        uVar2 = (uint)(-(uint)bVar4 | 1);
        goto LAB_111f9a19;
      }
      if (bVar1 == 0) break;
      bVar1 = (byte)(param_2[1]);
      bVar4 = (bool)(bVar1 < (byte)pcVar3[1]);
      if ((char *)((bVar1)) != (char *)(pcVar3[1])) goto LAB_111f9a14;
      param_2 = (byte *)(param_2 + 2);
      pcVar3 = (char *)(pcVar3 + 2);
    } while (bVar1 != 0);
    uVar2 = (uint)(0);
LAB_111f9a19:
    if (uVar2 == 0) {
      *(undefined1*)(param_1 + 0xe) = (undefined1)(0);
      return;
    }
  }
  return;
}


// Reference entry 111f9ca0; body size 99 bytes.
#line 1 "ENTRY_111f9ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111f9ca0(int param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  
  if (param_2 == 1) {
    pcVar2 = (char *)("urn:schemas-upnp-org:metadata-1-0/AVT/|");
  }
  else if (param_2 == 2) {
    pcVar2 = (char *)("urn:schemas-upnp-org:metadata-1-0/RCS/|");
  }
  else {
    if (param_2 != 3) goto LAB_111f9ce4;
    pcVar2 = (char *)("urn:schemas-sonos-com:metadata-1-0/Queue/|");
  }
  thunk_FUN_1145c250(param_1 + 0x14,pcVar2,0x400);
LAB_111f9ce4:
  pcVar2 = (char *)((char *)(param_1 + 0x14));
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  *(int*)(param_1 + 0x414) = (int)((int)pcVar2 - (param_1 + 0x15));
  return;
}


// Reference entry 111f9d20; body size 82 bytes.
#line 1 "ENTRY_111f9d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111f9d20(byte *param_2)
{
  int param_1 = (int )this;
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  bool bVar4;
  
  pcVar2 = (char *)("MediaServers");
  do {
    bVar1 = (byte)(*param_2);
    bVar4 = (bool)(bVar1 < (byte)*pcVar2);
    if (bVar1 != *pcVar2) {
LAB_111f9d50:
      uVar3 = (uint)(-(uint)bVar4 | 1);
      goto LAB_111f9d55;
    }
    if (bVar1 == 0) break;
    bVar1 = (byte)(param_2[1]);
    bVar4 = (bool)(bVar1 < (byte)pcVar2[1]);
    if ((char *)((bVar1)) != (char *)(pcVar2[1])) goto LAB_111f9d50;
    param_2 = (byte *)(param_2 + 2);
    pcVar2 = (char *)(pcVar2 + 2);
  } while (bVar1 != 0);
  uVar3 = (uint)(0);
LAB_111f9d55:
  if (uVar3 == 0) {
    *(undefined1**)(param_1 + 0x210) = (undefined1 *)(LAB_100689f3);
    *(undefined1**)(param_1 + 0x214) = (undefined1 *)(LAB_1009234d);
  }
  return;
}


// Reference entry 111fb170; body size 277 bytes.
#line 1 "ENTRY_111fb170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_111fb170(undefined4 param_2,byte *param_3)
{
  int param_1 = (int )this;
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  char *pcVar6;
  bool bVar7;
  
  pcVar6 = (char *)("urn:schemas-upnp-org:metadata-1-0/RCS/");
  pbVar4 = (byte *)(param_3);
  do {
    bVar1 = (byte)(*pbVar4);
    bVar7 = (bool)(bVar1 < (byte)*pcVar6);
    if (bVar1 != *pcVar6) {
LAB_111fb1a0:
      uVar5 = (uint)(-(uint)bVar7 | 1);
      goto LAB_111fb1a5;
    }
    if (bVar1 == 0) break;
    bVar1 = (byte)(pbVar4[1]);
    bVar7 = (bool)(bVar1 < (byte)pcVar6[1]);
    if ((char *)((bVar1)) != (char *)(pcVar6[1])) goto LAB_111fb1a0;
    pbVar4 = (byte *)(pbVar4 + 2);
    pcVar6 = (char *)(pcVar6 + 2);
  } while (bVar1 != 0);
  uVar5 = (uint)(0);
LAB_111fb1a5:
  if (uVar5 == 0) {
    *(undefined4*)(param_1 + 0x10) = (undefined4)(2);
  }
  else {
    pcVar6 = (char *)("urn:schemas-upnp-org:metadata-1-0/AVT/");
    pbVar4 = (byte *)(param_3);
    do {
      bVar1 = (byte)(*pbVar4);
      bVar7 = (bool)(bVar1 < (byte)*pcVar6);
      if (bVar1 != *pcVar6) {
LAB_111fb1e0:
        uVar5 = (uint)(-(uint)bVar7 | 1);
        goto LAB_111fb1e5;
      }
      if (bVar1 == 0) break;
      bVar1 = (byte)(pbVar4[1]);
      bVar7 = (bool)(bVar1 < (byte)pcVar6[1]);
      if ((char *)((bVar1)) != (char *)(pcVar6[1])) goto LAB_111fb1e0;
      pbVar4 = (byte *)(pbVar4 + 2);
      pcVar6 = (char *)(pcVar6 + 2);
    } while (bVar1 != 0);
    uVar5 = (uint)(0);
LAB_111fb1e5:
    if (uVar5 == 0) {
      *(undefined4*)(param_1 + 0x10) = (undefined4)(1);
    }
    else {
      pcVar6 = (char *)("urn:schemas-sonos-com:metadata-1-0/Queue/");
      do {
        bVar1 = (byte)(*param_3);
        bVar7 = (bool)(bVar1 < (byte)*pcVar6);
        if (bVar1 != *pcVar6) {
LAB_111fb217:
          uVar5 = (uint)(-(uint)bVar7 | 1);
          goto LAB_111fb21c;
        }
        if (bVar1 == 0) break;
        bVar1 = (byte)(param_3[1]);
        bVar7 = (bool)(bVar1 < (byte)pcVar6[1]);
        if ((char *)((bVar1)) != (char *)(pcVar6[1])) goto LAB_111fb217;
        param_3 = (byte *)(param_3 + 2);
        pcVar6 = (char *)(pcVar6 + 2);
      } while (bVar1 != 0);
      uVar5 = (uint)(0);
LAB_111fb21c:
      if (uVar5 == 0) {
        *(undefined4*)(param_1 + 0x10) = (undefined4)(3);
      }
    }
  }
  iVar3 = (int)(*(int *)(param_1 + 0x10));
  if (iVar3 == 1) {
    pcVar6 = (char *)("urn:schemas-upnp-org:metadata-1-0/AVT/|");
  }
  else if (iVar3 == 2) {
    pcVar6 = (char *)("urn:schemas-upnp-org:metadata-1-0/RCS/|");
  }
  else {
    if (iVar3 != 3) goto LAB_111fb267;
    pcVar6 = (char *)("urn:schemas-sonos-com:metadata-1-0/Queue/|");
  }
  thunk_FUN_1145c250(param_1 + 0x14,pcVar6,0x400);
LAB_111fb267:
  pcVar6 = (char *)((char *)(param_1 + 0x14));
  do {
    cVar2 = (char)(*pcVar6);
    pcVar6 = (char *)(pcVar6 + 1);
  } while (cVar2 != '\0');
  *(int*)(param_1 + 0x414) = (int)((int)pcVar6 - (param_1 + 0x15));
  return;
}


// Reference entry 111fb2d0; body size 274 bytes.
#line 1 "ENTRY_111fb2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111fb2d0(int param_1,undefined4 param_2,byte *param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  char *pcVar6;
  bool bVar7;
  
  pcVar6 = (char *)("urn:schemas-upnp-org:metadata-1-0/RCS/");
  pbVar4 = (byte *)(param_3);
  do {
    bVar1 = (byte)(*pbVar4);
    bVar7 = (bool)(bVar1 < (byte)*pcVar6);
    if (bVar1 != *pcVar6) {
LAB_111fb300:
      uVar5 = (uint)(-(uint)bVar7 | 1);
      goto LAB_111fb305;
    }
    if (bVar1 == 0) break;
    bVar1 = (byte)(pbVar4[1]);
    bVar7 = (bool)(bVar1 < (byte)pcVar6[1]);
    if ((char *)((bVar1)) != (char *)(pcVar6[1])) goto LAB_111fb300;
    pbVar4 = (byte *)(pbVar4 + 2);
    pcVar6 = (char *)(pcVar6 + 2);
  } while (bVar1 != 0);
  uVar5 = (uint)(0);
LAB_111fb305:
  if (uVar5 == 0) {
    *(undefined4*)(param_1 + 0x10) = (undefined4)(2);
  }
  else {
    pcVar6 = (char *)("urn:schemas-upnp-org:metadata-1-0/AVT/");
    pbVar4 = (byte *)(param_3);
    do {
      bVar1 = (byte)(*pbVar4);
      bVar7 = (bool)(bVar1 < (byte)*pcVar6);
      if (bVar1 != *pcVar6) {
LAB_111fb340:
        uVar5 = (uint)(-(uint)bVar7 | 1);
        goto LAB_111fb345;
      }
      if (bVar1 == 0) break;
      bVar1 = (byte)(pbVar4[1]);
      bVar7 = (bool)(bVar1 < (byte)pcVar6[1]);
      if ((char *)((bVar1)) != (char *)(pcVar6[1])) goto LAB_111fb340;
      pbVar4 = (byte *)(pbVar4 + 2);
      pcVar6 = (char *)(pcVar6 + 2);
    } while (bVar1 != 0);
    uVar5 = (uint)(0);
LAB_111fb345:
    if (uVar5 == 0) {
      *(undefined4*)(param_1 + 0x10) = (undefined4)(1);
    }
    else {
      pcVar6 = (char *)("urn:schemas-sonos-com:metadata-1-0/Queue/");
      do {
        bVar1 = (byte)(*param_3);
        bVar7 = (bool)(bVar1 < (byte)*pcVar6);
        if (bVar1 != *pcVar6) {
LAB_111fb377:
          uVar5 = (uint)(-(uint)bVar7 | 1);
          goto LAB_111fb37c;
        }
        if (bVar1 == 0) break;
        bVar1 = (byte)(param_3[1]);
        bVar7 = (bool)(bVar1 < (byte)pcVar6[1]);
        if ((char *)((bVar1)) != (char *)(pcVar6[1])) goto LAB_111fb377;
        param_3 = (byte *)(param_3 + 2);
        pcVar6 = (char *)(pcVar6 + 2);
      } while (bVar1 != 0);
      uVar5 = (uint)(0);
LAB_111fb37c:
      if (uVar5 == 0) {
        *(undefined4*)(param_1 + 0x10) = (undefined4)(3);
      }
    }
  }
  iVar3 = (int)(*(int *)(param_1 + 0x10));
  if (iVar3 == 1) {
    pcVar6 = (char *)("urn:schemas-upnp-org:metadata-1-0/AVT/|");
  }
  else if (iVar3 == 2) {
    pcVar6 = (char *)("urn:schemas-upnp-org:metadata-1-0/RCS/|");
  }
  else {
    if (iVar3 != 3) goto LAB_111fb3c7;
    pcVar6 = (char *)("urn:schemas-sonos-com:metadata-1-0/Queue/|");
  }
  thunk_FUN_1145c250(param_1 + 0x14,pcVar6,0x400);
LAB_111fb3c7:
  pcVar6 = (char *)((char *)(param_1 + 0x14));
  do {
    cVar2 = (char)(*pcVar6);
    pcVar6 = (char *)(pcVar6 + 1);
  } while (cVar2 != '\0');
  *(int*)(param_1 + 0x414) = (int)((int)pcVar6 - (param_1 + 0x15));
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
  if (*(code **)(param_1 + 0x210) != (code *)((0x0))) {
    (**(code **)(param_1 + 0x210))(param_2,param_3);
  }
  return;
}


// Reference entry 111fb840; body size 208 bytes.
#line 1 "ENTRY_111fb840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111fb840(int param_1,byte *param_2,undefined4 param_3)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  char *pcVar5;
  bool bVar6;
  
  cVar1 = (char)(*(char *)(param_1 + 0xc));
  if (cVar1 == '\0') {
    pcVar5 = (char *)("urn:schemas-upnp-org:event-1-0|propertyset");
    pbVar3 = (byte *)(param_2);
    do {
      bVar2 = (byte)(*pbVar3);
      bVar6 = (bool)(bVar2 < (byte)*pcVar5);
      if (bVar2 != *pcVar5) {
LAB_111fb878:
        uVar4 = (uint)(-(uint)bVar6 | 1);
        goto LAB_111fb87d;
      }
      if (bVar2 == 0) break;
      bVar2 = (byte)(pbVar3[1]);
      bVar6 = (bool)(bVar2 < (byte)pcVar5[1]);
      if ((char *)((bVar2)) != (char *)(pcVar5[1])) goto LAB_111fb878;
      pbVar3 = (byte *)(pbVar3 + 2);
      pcVar5 = (char *)(pcVar5 + 2);
    } while (bVar2 != 0);
    uVar4 = (uint)(0);
LAB_111fb87d:
    if (uVar4 == 0) {
      *(undefined1*)(param_1 + 0xc) = (undefined1)(1);
      return;
    }
  }
  if ((*(char *)(param_1 + 0xd) == '\0') && (cVar1 != '\0')) {
    pcVar5 = (char *)("urn:schemas-upnp-org:event-1-0|property");
    pbVar3 = (byte *)(param_2);
    do {
      bVar2 = (byte)(*pbVar3);
      bVar6 = (bool)(bVar2 < (byte)*pcVar5);
      if (bVar2 != *pcVar5) {
LAB_111fb8c0:
        uVar4 = (uint)(-(uint)bVar6 | 1);
        goto LAB_111fb8c5;
      }
      if (bVar2 == 0) break;
      bVar2 = (byte)(pbVar3[1]);
      bVar6 = (bool)(bVar2 < (byte)pcVar5[1]);
      if ((char *)((bVar2)) != (char *)(pcVar5[1])) goto LAB_111fb8c0;
      pbVar3 = (byte *)(pbVar3 + 2);
      pcVar5 = (char *)(pcVar5 + 2);
    } while (bVar2 != 0);
    uVar4 = (uint)(0);
LAB_111fb8c5:
    if (uVar4 == 0) {
      *(undefined1*)(param_1 + 0xd) = (undefined1)(1);
      return;
    }
  }
  if (((*(char *)(param_1 + 0xe) == '\0') && (cVar1 != '\0')) && (*(char *)(param_1 + 0xd) != '\0'))
  {
    thunk_FUN_1145c250(param_1 + 0xf,param_2,0x400);
    (**(code **)(**(int **)(param_1 + 8) + 8))(param_2,param_3);
    *(undefined4*)(param_1 + 0xc18) = (undefined4)(0);
    *(undefined1*)(param_1 + 0xe) = (undefined1)(1);
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
  *(undefined1*)(param_1 + 0x3019) = (undefined1)(param_6);
  param_1[0x301a] = (undefined4)(param_7);
  param_1[0x301b] = (undefined4)(param_8);
  param_1[0x3020] = (undefined4)(param_9);
  param_1[0x14] = (undefined4)(0);
  param_1[0x301c] = (undefined4)(0);
  param_1[0x301d] = (undefined4)(0);
  *(undefined1*)(param_1 + 0x301e) = (undefined1)(0);
  param_1[0x301f] = (undefined4)(0);
  thunk_FUN_1106a8d0((int)param_1 + 0x4056,param_2,0x4002);
  thunk_FUN_1106a8d0(param_1 + 0x15,param_2,0x4002);
  thunk_FUN_1106a8d0(param_1 + 0x2016,param_3,0x4002);
  return (undefined4 *)(param_1);
}


// Reference entry 111fc980; body size 10 bytes.
#line 1 "ENTRY_111fc980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_111fc980(int param_1)

{
  return (undefined4)(((uint)((int3)((uint)*(int *)(param_1 + 0x24) >> 8)) << 8 | (uint)(*(undefined1 *)(*(int *)(param_1 + 0x24) + 0x4490))));
}


// Reference entry 111fe160; body size 47 bytes.
#line 1 "ENTRY_111fe160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_111fe160(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  *param_1 = (undefined4)(0xffffffff);
  iVar1 = (int)(0x10);
  *(undefined2*)(param_1 + 1) = (undefined2)(0xffff);
  do {
    *(undefined4*)((int)param_1 + 6) = (undefined4)(*param_2);
    *(undefined2*)((int)param_1 + 10) = (undefined2)(*(undefined2 *)(param_2 + 1));
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
  *(undefined1*)(param_1 + 4) = (undefined1)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RBrowseContentProviderWithCD);
  param_1[6] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 111fe440; body size 85 bytes.
#line 1 "ENTRY_111fe440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111fe440(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11202480();
  param_1[0x102] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSCPBrowseContainerCallback);
  *(undefined1*)(param_1 + 0x143) = (undefined1)(0);
  thunk_FUN_1106a8d0(param_1 + 1,param_2,0x401);
  thunk_FUN_1106a8d0(param_1 + 0x103,param_4,0x100);
  return (undefined4 *)(param_1);
}


// Reference entry 111fe8f0; body size 24 bytes.
#line 1 "ENTRY_111fe8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_111fe8f0(undefined4 *param_1)

{
  thunk_FUN_11202500();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSCPPropNameTranslator);
  return (undefined4 *)(param_1);
}


// Reference entry 111fe910; body size 76 bytes.
#line 1 "ENTRY_111fe910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111fe910(undefined4 param_2,undefined4 param_3,undefined1 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11202480();
  param_1[0x102] = (undefined4)(param_3);
  *(undefined1*)((int)param_1 + 0x40e) = (undefined1)(param_4);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSCPSearchContainerCallback);
  *(undefined2*)(param_1 + 0x103) = (undefined2)(0);
  thunk_FUN_1106a8d0(param_1 + 1,param_2,0x401);
  return (undefined4 *)(param_1);
}


// Reference entry 111fe9d0; body size 118 bytes.
#line 1 "ENTRY_111fe9d0"

/* WARNING: Removing unreachable block_111fe9d0 (ram,0x111fea38) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111fe9d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RContentProvider);
  param_1[1] = (undefined4)(0);
  thunk_FUN_1145c930(param_1 + 2,0);
  *(undefined1*)(param_1 + 4) = (undefined1)(0);
  param_1[5] = (undefined4)(param_2);
  param_1[6] = (undefined4)(param_1 + 9);
  param_1[7] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSearchContentProviderWithCD);
  param_1[8] = (undefined4)(param_2);
  thunk_FUN_1106a8d0(param_1 + 9,param_3,0x401);
  return (undefined4 *)(param_1);
}


// Reference entry 111fea90; body size 91 bytes.
#line 1 "ENTRY_111fea90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_111fea90(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RContentProvider);
  param_1[1] = (undefined4)(0);
  thunk_FUN_1145c930(param_1 + 2,0);
  *(undefined1*)(param_1 + 4) = (undefined1)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSvcContentProvider);
  thunk_FUN_1106a8d0(param_1 + 5,param_2,0x81);
  thunk_FUN_1106a8d0((int)param_1 + 0x95,param_3,0x81);
  return (undefined4 *)(param_1);
}


// Reference entry 111feb10; body size 13 bytes.
#line 1 "ENTRY_111feb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_111feb10(int *param_1)

{
  if ((undefined4 *)(undefined4 *)(*param_1) != (undefined4 *)(0x0)) {
    (*(code *)**(undefined4 **)*param_1)(1);
  }
  return;
}


// Reference entry 111fed50; body size 23 bytes.
#line 1 "ENTRY_111fed50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_111fed50(undefined4 *param_1)

{
  if ((undefined4 *)(param_1) != (undefined4 *)0x0) {
                    
                    
    (**(code **)*param_1)();
    return;
  }
  return;
}


// Reference entry 11202250; body size 53 bytes.
#line 1 "ENTRY_11202250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11202250(char *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  
  uVar1 = (uint)(0);
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  do {
    param_1[uVar1 + 2] = (undefined4)(param_2);
    param_1[1] = (undefined4)(param_1[1] + 1);
    param_2 = (char *)(strchr(param_2,0x2f));
    if ((char *)(param_2) == (char *)0x0) {
      return;
    }
    uVar1 = (uint)(param_1[1]);
    param_2 = (char *)(param_2 + 1);
  } while (uVar1 < 8);
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
    return (undefined4)(1);
  }
  while ((iVar2 = isdigit((int)cVar1), iVar2 != 0 || (*param_1 == ','))) {
    cVar1 = (char)(param_1[1]);
    param_1 = (char *)(param_1 + 1);
    if (cVar1 == '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 11202520; body size 60 bytes.
#line 1 "ENTRY_11202520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11202520(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_1125b810(param_1,&UNK_1006ada2,&UNK_1008f657,&UNK_10009a07);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCDUpdateProcessor);
  *(undefined1*)(param_1 + 0x103) = (undefined1)(0);
  *(undefined1*)(param_1 + 3) = (undefined1)(0);
  return (undefined4 *)(param_1);
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
  *(undefined1*)(param_1 + 0x40c) = (undefined1)(0);
  return;
}


// Reference entry 11202db0; body size 173 bytes.
#line 1 "ENTRY_11202db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_11202db0(char *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  while( true ) {
    if ((char *)(param_2) == (char *)0x0) {
      return (undefined4)(1);
    }
    pcVar4 = (char *)(param_2);
    do {
      cVar1 = (char)(*pcVar4);
      pcVar4 = (char *)(pcVar4 + 1);
    } while (cVar1 != '\0');
    cVar1 = (char)((**(code **)(*param_1 + 4))(param_2,(int)pcVar4 - (int)(param_2 + 1)));
    if ((cVar1 != '\0') && (cVar1 = (**(code **)(*param_1 + 4))(0,0), cVar1 != '\0')) {
      return (undefined4)(1);
    }
    iVar2 = (int)(func_0x1008c65f(param_1[1]));
    if ((iVar2 != 9) && (iVar2 != 2)) {
      if (iVar2 == 3) {
        return (undefined4)(1);
      }
      return (undefined4)(0);
    }
    uVar3 = (uint)(thunk_FUN_112c8c00(param_1[1]));
    if ((uint)((int)pcVar4 - (int)(param_2 + 1)) <= uVar3) {
      return (undefined4)(0);
    }
    if (param_2[uVar3] != ',') break;
    *(undefined1*)(param_1 + 3) = (undefined1)(0);
    thunk_FUN_112c8cb0(param_1[1],param_1,&UNK_1006ada2,&UNK_1008f657,&UNK_10009a07,0,0,0);
    param_2 = (char *)(param_2 + uVar3 + 1);
  }
  return (undefined4)(0);
}


// Reference entry 11202e90; body size 38 bytes.
#line 1 "ENTRY_11202e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11202e90(int param_1)

{
  *(undefined1*)(param_1 + 0xc) = (undefined1)(0);
  thunk_FUN_112c8cb0(*(undefined4 *)(param_1 + 4),param_1,&UNK_1006ada2,&UNK_1008f657,&UNK_10009a07,
                     0,0,0);
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
  *(undefined4*)(param_1 + 0x64c) = (undefined4)(*(undefined4 *)(param_2 + 0x64c));
  uVar3 = (uint)(0);
  *(undefined4*)(param_1 + 0x644) = (undefined4)(*(undefined4 *)(param_2 + 0x644));
  *(undefined4*)(param_1 + 0x648) = (undefined4)(*(undefined4 *)(param_2 + 0x648));
  *(undefined4*)(param_1 + 0x334) = (undefined4)(*(undefined4 *)(param_2 + 0x334));
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
  *(uint*)(param_1 + 0x640) = (uint)(uVar1);
  *(undefined1*)(param_1 + 0x668) = (undefined1)(1);
  *(undefined1*)(param_1 + 0x1a5) = (undefined1)(0);
  *(undefined1*)(param_1 + 0x265) = (undefined1)(0);
  *(undefined1*)(param_1 + 0x325) = (undefined1)(0);
  return (int)(param_1);
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


// Reference entry 112059d0; body size 40 bytes.
#line 1 "ENTRY_112059d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_112059d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_11287ab0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_ZoneGroupTopologyClient);
  *(undefined***)(*(int *)(param_1[1] + 4) + 4 + (int)param_1) = (undefined **)((uint)&ghidra_vftable_ZoneGroupTopologyClient);
  return (undefined4 *)(param_1);
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


// Reference entry 11208c90; body size 40 bytes.
#line 1 "ENTRY_11208c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11208c90(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_11262240();
  *param_1 = (undefined4)((uint)&ghidra_vftable_AlarmClockClient);
  *(undefined***)(*(int *)(param_1[1] + 4) + 4 + (int)param_1) = (undefined **)((uint)&ghidra_vftable_AlarmClockClient);
  return (undefined4 *)(param_1);
}


// Reference entry 1120b970; body size 40 bytes.
#line 1 "ENTRY_1120b970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1120b970(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_1128f100();
  *param_1 = (undefined4)((uint)&ghidra_vftable_AudioInClient);
  *(undefined***)(*(int *)(param_1[1] + 4) + 4 + (int)param_1) = (undefined **)((uint)&ghidra_vftable_AudioInClient);
  return (undefined4 *)(param_1);
}


// Reference entry 1120c9b0; body size 40 bytes.
#line 1 "ENTRY_1120c9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1120c9b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_1128f090();
  *param_1 = (undefined4)((uint)&ghidra_vftable_AVTransportClient);
  *(undefined***)(*(int *)(param_1[1] + 4) + 4 + (int)param_1) = (undefined **)((uint)&ghidra_vftable_AVTransportClient);
  return (undefined4 *)(param_1);
}


// Reference entry 11214260; body size 25 bytes.
#line 1 "ENTRY_11214260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11214260(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_ContentDirectoryClient);
  *(undefined***)(*(int *)(param_1[1] + 4) + 4 + (int)param_1) = (undefined **)((uint)&ghidra_vftable_ContentDirectoryClient);
  return (undefined4 *)(param_1);
}


// Reference entry 11214280; body size 25 bytes.
#line 1 "ENTRY_11214280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11214280(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_ContentDirectoryClient);
  *(undefined***)(*(int *)(param_1[1] + 4) + 4 + (int)param_1) = (undefined **)((uint)&ghidra_vftable_ContentDirectoryClient);
  return (undefined4 *)(param_1);
}


// Reference entry 112142a0; body size 147 bytes.
#line 1 "ENTRY_112142a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_112142a0(int param_2,int param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_3 == 0) {
    puVar1 = (undefined *)((undefined *)param_1[1]);
  }
  else {
    param_1[1] = (undefined4)(&DAT_119da770);
    puVar1 = (undefined *)(&DAT_119da770);
    param_1[2] = (undefined4)(&DAT_119da77c);
    param_1[0x1d2] = (undefined4)((uint)&ghidra_vftable_RClient);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_ContentDirectoryClient);
  *(undefined***)(*(int *)(puVar1 + 4) + 4 + (int)param_1) = (undefined **)((uint)&ghidra_vftable_ContentDirectoryClient);
  thunk_FUN_11203a80(param_2 + 8,0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCDClient);
  *(undefined***)(*(int *)(param_1[1] + 4) + 4 + (int)param_1) = (undefined **)((uint)&ghidra_vftable_RCDClient);
  *(undefined4*)((int)param_1 + *(int *)(param_1[1] + 4)) = (undefined4)(0);
  puVar3 = (undefined4 *)((undefined4 *)(param_2 + 0x684));
  puVar4 = (undefined4 *)(param_1 + 0x1a1);
  for (iVar2 = (int)(0x30); iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = (undefined4)(*puVar3);
    puVar3 = (undefined4 *)(puVar3 + 1);
    puVar4 = (undefined4 *)(puVar4 + 1);
  }
  return (undefined4 *)(param_1);
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


// Reference entry 112173a0; body size 40 bytes.
#line 1 "ENTRY_112173a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_112173a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_1128f150();
  *param_1 = (undefined4)((uint)&ghidra_vftable_ConnectionManagerClient);
  *(undefined***)(*(int *)(param_1[1] + 4) + 4 + (int)param_1) = (undefined **)((uint)&ghidra_vftable_ConnectionManagerClient);
  return (undefined4 *)(param_1);
}


// Reference entry 11217dd0; body size 40 bytes.
#line 1 "ENTRY_11217dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11217dd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_1128f1a0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_GroupManagementClient);
  *(undefined***)(*(int *)(param_1[1] + 4) + 4 + (int)param_1) = (undefined **)((uint)&ghidra_vftable_GroupManagementClient);
  return (undefined4 *)(param_1);
}


// Reference entry 11218ac0; body size 40 bytes.
#line 1 "ENTRY_11218ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11218ac0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_1128f1f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_GroupRenderingControlClient);
  *(undefined***)(*(int *)(param_1[1] + 4) + 4 + (int)param_1) = (undefined **)((uint)&ghidra_vftable_GroupRenderingControlClient);
  return (undefined4 *)(param_1);
}


// Reference entry 11219a90; body size 30 bytes.
#line 1 "ENTRY_11219a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11219a90(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_HTControlClient);
  *(undefined***)(*(int *)(param_1[1] + 4) + 4 + (int)param_1) = (undefined **)((uint)&ghidra_vftable_HTControlClient);
  return (undefined4 *)(param_1);
}


// Reference entry 1121ae30; body size 30 bytes.
#line 1 "ENTRY_1121ae30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1121ae30(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_MusicServicesDirectoryClient);
  *(undefined***)(*(int *)(param_1[1] + 4) + 4 + (int)param_1) = (undefined **)((uint)&ghidra_vftable_MusicServicesDirectoryClient);
  return (undefined4 *)(param_1);
}


// Reference entry 1121b780; body size 25 bytes.
#line 1 "ENTRY_1121b780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1121b780(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_QueueClient);
  *(undefined***)(*(int *)(param_1[1] + 4) + 4 + (int)param_1) = (undefined **)((uint)&ghidra_vftable_QueueClient);
  return (undefined4 *)(param_1);
}


// Reference entry 1121dc70; body size 40 bytes.
#line 1 "ENTRY_1121dc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1121dc70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_1128f240();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RenderingControlClient);
  *(undefined***)(*(int *)(param_1[1] + 4) + 4 + (int)param_1) = (undefined **)((uint)&ghidra_vftable_RenderingControlClient);
  return (undefined4 *)(param_1);
}


// Reference entry 11222080; body size 25 bytes.
#line 1 "ENTRY_11222080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11222080(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_VirtualLineInClient);
  *(undefined***)(*(int *)(param_1[1] + 4) + 4 + (int)param_1) = (undefined **)((uint)&ghidra_vftable_VirtualLineInClient);
  return (undefined4 *)(param_1);
}


// Reference entry 11223550; body size 25 bytes.
#line 1 "ENTRY_11223550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11223550(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_DevicePropertiesClient);
  *(undefined***)(*(int *)(param_1[1] + 4) + 4 + (int)param_1) = (undefined **)((uint)&ghidra_vftable_DevicePropertiesClient);
  return (undefined4 *)(param_1);
}


// Reference entry 11223570; body size 40 bytes.
#line 1 "ENTRY_11223570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11223570(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_1128f0e0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_DevicePropertiesClient);
  *(undefined***)(*(int *)(param_1[1] + 4) + 4 + (int)param_1) = (undefined **)((uint)&ghidra_vftable_DevicePropertiesClient);
  return (undefined4 *)(param_1);
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
  *(undefined1*)(iVar1 + 0x30) = (undefined1)(1);
  return;
}


// Reference entry 11227e90; body size 25 bytes.
#line 1 "ENTRY_11227e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11227e90(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SystemPropertiesClient);
  *(undefined***)(*(int *)(param_1[1] + 4) + 4 + (int)param_1) = (undefined **)((uint)&ghidra_vftable_SystemPropertiesClient);
  return (undefined4 *)(param_1);
}


// Reference entry 11227eb0; body size 40 bytes.
#line 1 "ENTRY_11227eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11227eb0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_1128f070();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SystemPropertiesClient);
  *(undefined***)(*(int *)(param_1[1] + 4) + 4 + (int)param_1) = (undefined **)((uint)&ghidra_vftable_SystemPropertiesClient);
  return (undefined4 *)(param_1);
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


// Reference entry 1122a790; body size 11 bytes.
#line 1 "ENTRY_1122a790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_1122a790(undefined4 param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0xa948));
  if (uVar1 < 0x10) {
    *(uint*)(param_1 + 0xa948) = (uint)(uVar1 + 1);
  }
  else {
    uVar1 = (uint)(uVar1 - 1);
  }
  *(int*)(param_1 + 0xbab8) = (int)(*(int *)(param_1 + 0xbab8) + 1);
  iVar2 = (int)(uVar1 * 0x60 + param_1 + 0xa940);
  (**(code **)(*(int *)(iVar2 + 0x1180) + 4))(param_2);
  *(undefined1*)(iVar2 + 0x11d4) = (undefined1)(0);
  *(int*)(iVar2 + 0x11d0) = (int)(param_1 + 0xb59c);
  return (int)(iVar2 + 0x1180);
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
    *(uint*)(param_1 + 0xc0c4) = (uint)(uVar2 + 1);
  }
  else {
    uVar2 = (uint)(uVar2 - 1);
  }
  *(int*)(param_1 + 0xc0c8) = (int)(*(int *)(param_1 + 0xc0c8) + 1);
  iVar1 = (int)(param_1 + 0xc0c0 + uVar2 * 0x38);
  (**(code **)(*(int *)(param_1 + 0xc3a8 + uVar2 * 0x38) + 4))(param_2);
  *(undefined1*)(iVar1 + 0x31a) = (undefined1)(1);
  return (int)(iVar1 + 0x2e8);
}


// Reference entry 1122aed0; body size 56 bytes.
#line 1 "ENTRY_1122aed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1122aed0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_2[4] = (undefined4)(0);
  param_2[5] = (undefined4)(0);
  uVar1 = (undefined4)(param_3[1]);
  uVar2 = (undefined4)(param_3[2]);
  uVar3 = (undefined4)(param_3[3]);
  *param_2 = (undefined4)(*param_3);
  param_2[1] = (undefined4)(uVar1);
  param_2[2] = (undefined4)(uVar2);
  param_2[3] = (undefined4)(uVar3);
  *(undefined8*)(param_2 + 4) = (undefined8)(*(undefined8 *)(param_3 + 4));
  param_3[4] = (undefined4)(0);
  param_3[5] = (undefined4)(0xf);
  *(undefined1*)param_3 = (undefined1)((undefined4 *)(0));
  return;
}


// Reference entry 1122b1e0; body size 7 bytes.
#line 1 "ENTRY_1122b1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1122b1e0(undefined4 param_1)

{
  undefined1 uStack_1;
  
  uStack_1 = (undefined1)((undefined1)((uint)param_1 >> 0x18));
  return (undefined1)(uStack_1);
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


// Reference entry 1122bd50; body size 142 bytes.
#line 1 "ENTRY_1122bd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_1122bd50(int *param_2,int *param_3)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if ((int *)(param_2) != (int *)(param_3)) {
    puVar1 = (undefined4 *)((undefined4 *)param_2[1]);
    iVar7 = (int)(0);
    *puVar1 = (undefined4)(param_3);
    param_3[1] = (int)((int)puVar1);
    do {
      uVar2 = (uint)(param_2[7]);
      piVar3 = (int *)((int *)*param_2);
      if (0xf < uVar2) {
        iVar4 = (int)(param_2[2]);
        uVar6 = (uint)(uVar2 + 1);
        iVar5 = (int)(iVar4);
        if (0xfff < uVar6) {
          iVar5 = (int)(*(int *)(iVar4 + -4));
          uVar6 = (uint)(uVar2 + 0x24);
          if (0x1f < (iVar4 - iVar5) - 4U) {
                    
            _invalid_parameter_noinfo_noreturn();
          }
        }
        thunk_FUN_1148a50e(iVar5,uVar6);
      }
      param_2[6] = (int)(0);
      param_2[7] = (int)(0xf);
      *(undefined1*)(param_2 + 2) = (undefined1)(0);
      thunk_FUN_1148a50e(param_2,0x20);
      iVar7 = (int)(iVar7 + 1);
      param_2 = (int *)(piVar3);
    } while ((int *)(piVar3) != (int *)(param_3));
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) - iVar7);
  }
  return (int *)(param_3);
}


// Reference entry 1122c9c0; body size 20 bytes.
#line 1 "ENTRY_1122c9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_1122c9c0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1122af30(param_1,param_2);
  return (undefined4)(param_1);
}


// Reference entry 1122df50; body size 36 bytes.
#line 1 "ENTRY_1122df50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1122df50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_1123ec00();
  param_1[0x3162] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSubmitUsageMetrics);
  return (undefined4 *)(param_1);
}


// Reference entry 1122df80; body size 291 bytes.
#line 1 "ENTRY_1122df80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_1122df80(undefined1 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4*)(param_1 + 0x134) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x158) = (undefined4)(0);
  *(undefined***)(param_1 + 0x774) = (undefined **)((uint)&ghidra_vftable_RSystemTime);
  *(undefined4*)(param_1 + 0x778) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x77c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x780) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x784) = (undefined4)(0);
  param_1[0x788] = (undefined1)(0);
  *param_1 = (undefined1)(0);
  param_1[0x11] = (undefined1)(0);
  *(undefined2*)(param_1 + 0x32) = (undefined2)(0);
  param_1[0xb3] = (undefined1)(0);
  *(undefined4*)(param_1 + 0x138) = (undefined4)(0x7fffffff);
  *(undefined4*)(param_1 + 0x13c) = (undefined4)(200);
  *(undefined4*)(param_1 + 0x140) = (undefined4)(0x32);
  *(undefined4*)(param_1 + 0x144) = (undefined4)(0x1e);
  iVar1 = (int)(atoi("48"));
  *(int*)(param_1 + 0x148) = (int)(iVar1);
  *(undefined4*)(param_1 + 0x14c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x15c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x160) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x164) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x770) = (undefined4)(0);
  *(undefined2*)(param_1 + 0x78c) = (undefined2)(0);
  thunk_FUN_112a9cf0(param_1 + 0x150);
  iVar1 = (int)(0x60);
  puVar2 = (undefined4 *)((undefined4 *)(param_1 + 0x16c));
  do {
    *(undefined2*)(puVar2 + -1) = (undefined2)(0xffff);
    *puVar2 = (undefined4)(0);
    puVar2[1] = (undefined4)(0);
    puVar2[2] = (undefined4)(0);
    iVar1 = (int)(iVar1 + -1);
    puVar2 = (undefined4 *)(puVar2 + 4);
  } while (iVar1 != 0);
  *(undefined8*)(param_1 + 0x768) = (undefined8)(0);
  *(undefined4*)(param_1 + 0x790) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x794) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x798) = (undefined4)(0);
  return (undefined1 *)(param_1);
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
      if (((param_3 == *psVar2) && ((int)(param_4) == *(int *)(psVar2 + 2))) &&
         ((int)(param_5) == *(int *)(psVar2 + 4))) {
        pcVar3 = (char *)("find(%d,%u,%u) -> existing %d");
LAB_1122e8ed:
        thunk_FUN_112b0270("usagemetrics",8,pcVar3,(int)param_3,param_4,param_5,iVar1);
        return (short *)(psVar2);
      }
      if (*psVar2 == -1) {
        psVar2 = (short *)(param_1 + iVar1 * 8);
        pcVar3 = (char *)("find(%d,%u,%u) -> new %d");
        *psVar2 = (short)(param_3);
        *(int*)(psVar2 + 2) = (int)(param_4);
        *(int*)(psVar2 + 4) = (int)(param_5);
        psVar2[6] = (short)(0);
        psVar2[7] = (short)(0);
        goto LAB_1122e8ed;
      }
      iVar1 = (int)(iVar1 + 1);
      psVar2 = (short *)(psVar2 + 8);
    } while (iVar1 < param_2);
  }
  return (short *)((short *)0x0);
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
    if ((int *)(param_2) == (int *)0x0) {
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
      if ((int *)(param_2) == (int *)0x0) {
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
    if ((int)(iStack_ac) == *(int *)(param_1 + 0x134)) {
      *(undefined4*)(param_1 + 0x13c) = (undefined4)(uStack_b0);
      *(int*)(param_1 + 0x138) = (int)(iVar4);
      *(int*)(param_1 + 0x140) = (int)(iVar3);
      *(int*)(param_1 + 0x134) = (int)(*(int *)(param_1 + 0x134) + 1);
    }
    if (cVar2 != '\0') {
      thunk_FUN_112a8010(pcVar1);
    }
  }
  thunk_FUN_1148ac28();
  return;
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


// Reference entry 11230960; body size 127 bytes.
#line 1 "ENTRY_11230960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11230960(int param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  bool bVar4;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    if (*(char *)(param_1 + 0x10) != '\0') {
      pcVar3 = (char *)("Alarms");
      do {
        bVar1 = (byte)(*param_2);
        bVar4 = (bool)(bVar1 < (byte)*pcVar3);
        if (bVar1 != *pcVar3) {
LAB_112309d1:
          uVar2 = (uint)(-(uint)bVar4 | 1);
          goto LAB_112309d6;
        }
        if (bVar1 == 0) break;
        bVar1 = (byte)(param_2[1]);
        bVar4 = (bool)(bVar1 < (byte)pcVar3[1]);
        if ((char *)((bVar1)) != (char *)(pcVar3[1])) goto LAB_112309d1;
        param_2 = (byte *)(param_2 + 2);
        pcVar3 = (char *)(pcVar3 + 2);
      } while (bVar1 != 0);
      uVar2 = (uint)(0);
LAB_112309d6:
      if (uVar2 == 0) {
        *(undefined1*)(param_1 + 0x10) = (undefined1)(0);
      }
    }
  }
  else {
    pcVar3 = (char *)("Alarm");
    do {
      bVar1 = (byte)(*param_2);
      bVar4 = (bool)(bVar1 < (byte)*pcVar3);
      if (bVar1 != *pcVar3) {
LAB_11230994:
        uVar2 = (uint)(-(uint)bVar4 | 1);
        goto LAB_11230999;
      }
      if (bVar1 == 0) break;
      bVar1 = (byte)(param_2[1]);
      bVar4 = (bool)(bVar1 < (byte)pcVar3[1]);
      if ((char *)((bVar1)) != (char *)(pcVar3[1])) goto LAB_11230994;
      param_2 = (byte *)(param_2 + 2);
      pcVar3 = (char *)(pcVar3 + 2);
    } while (bVar1 != 0);
    uVar2 = (uint)(0);
LAB_11230999:
    if (uVar2 == 0) {
      *(undefined1*)(param_1 + 0x11) = (undefined1)(0);
      return;
    }
  }
  return;
}


// Reference entry 11230ac0; body size 140 bytes.
#line 1 "ENTRY_11230ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11230ac0(int param_1,byte *param_2,undefined4 param_3)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  bool bVar4;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    pcVar3 = (char *)("Alarms");
    do {
      bVar1 = (byte)(*param_2);
      bVar4 = (bool)(bVar1 < (byte)*pcVar3);
      if (bVar1 != *pcVar3) {
LAB_11230af4:
        uVar2 = (uint)(-(uint)bVar4 | 1);
        goto LAB_11230af9;
      }
      if (bVar1 == 0) break;
      bVar1 = (byte)(param_2[1]);
      bVar4 = (bool)(bVar1 < (byte)pcVar3[1]);
      if ((char *)((bVar1)) != (char *)(pcVar3[1])) goto LAB_11230af4;
      param_2 = (byte *)(param_2 + 2);
      pcVar3 = (char *)(pcVar3 + 2);
    } while (bVar1 != 0);
    uVar2 = (uint)(0);
LAB_11230af9:
    if (uVar2 == 0) {
      *(undefined1*)(param_1 + 0x10) = (undefined1)(1);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x11) == '\0') {
    pcVar3 = (char *)("Alarm");
    do {
      bVar1 = (byte)(*param_2);
      bVar4 = (bool)(bVar1 < (byte)*pcVar3);
      if (bVar1 != *pcVar3) {
LAB_11230b32:
        uVar2 = (uint)(-(uint)bVar4 | 1);
        goto LAB_11230b37;
      }
      if (bVar1 == 0) break;
      bVar1 = (byte)(param_2[1]);
      bVar4 = (bool)(bVar1 < (byte)pcVar3[1]);
      if ((char *)((bVar1)) != (char *)(pcVar3[1])) goto LAB_11230b32;
      param_2 = (byte *)(param_2 + 2);
      pcVar3 = (char *)(pcVar3 + 2);
    } while (bVar1 != 0);
    uVar2 = (uint)(0);
LAB_11230b37:
    if (uVar2 == 0) {
      *(undefined1*)(param_1 + 0x11) = (undefined1)(1);
      thunk_FUN_11230380(param_3);
    }
  }
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
  *(undefined2*)(param_1 + 3) = (undefined2)(0);
  *param_2 = (undefined1)(0);
  if ((undefined1 *)(undefined1 *)(param_1[4]) != (undefined1 *)(0x0)) {
    *(undefined1*)param_1[4] = (undefined1)((undefined4)(0));
  }
  return (undefined4 *)(param_1);
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
  *(undefined1*)(param_1 + 0x1c67) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 11230d20; body size 18 bytes.
#line 1 "ENTRY_11230d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_11230d20(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_112332a0(param_2);
  return (undefined4)(param_1);
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
  
  if ((char *)(param_2) != (char *)0x0) {
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
      *(undefined4*)(param_1 + 0x54) = (undefined4)(uVar2);
      if ((undefined1 *)(_Memory) == (undefined1 *)(param_1 + 0x58)) {
        *(undefined1*)(param_1 + 0x58) = (undefined1)(0);
      }
      else {
        free(_Memory);
      }
    }
    memcpy((void *)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x50)),param_2,param_3);
    *(undefined1*)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x50) + param_3) = (undefined1)(0);
    *(int*)(param_1 + 0x50) = (int)(*(int *)(param_1 + 0x50) + param_3);
  }
  return (uint *)(puVar3);
}


// Reference entry 112329c0; body size 21 bytes.
#line 1 "ENTRY_112329c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112329c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_11234290(param_2,param_3);
  return;
}


// Reference entry 11232b70; body size 294 bytes.
#line 1 "ENTRY_11232b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11232b70(int param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  
  if (*(char *)(param_1 + 0x460) == '\0') {
    if (*(int *)(param_1 + 0x45c) != 0) {
      if (*(int *)(param_1 + 0x45c) == 1) {
        pbVar4 = (byte *)(&DAT_119dc9cc);
        do {
          bVar1 = (byte)(*param_2);
          bVar6 = (bool)(bVar1 < *pbVar4);
          if (bVar1 != *pbVar4) {
LAB_11232bc0:
            uVar3 = (uint)(-(uint)bVar6 | 1);
            goto LAB_11232bc5;
          }
          if (bVar1 == 0) break;
          bVar1 = (byte)(param_2[1]);
          bVar6 = (bool)(bVar1 < pbVar4[1]);
          if ((byte *)((bVar1)) != (byte *)(pbVar4[1])) goto LAB_11232bc0;
          param_2 = (byte *)(param_2 + 2);
          pbVar4 = (byte *)(pbVar4 + 2);
        } while (bVar1 != 0);
        uVar3 = (uint)(0);
LAB_11232bc5:
        if (uVar3 != 0) {
          *(undefined1*)(param_1 + 0x460) = (undefined1)(1);
        }
        *(undefined1*)(param_1 + 0x462) = (undefined1)(0);
        *(undefined4*)(param_1 + 0x45c) = (undefined4)(0);
        return;
      }
      cVar2 = (char)((**(code **)(**(int **)(param_1 + 8) + 0x18))(param_2));
      if (cVar2 != '\0') {
        thunk_FUN_11234420(1,0);
        if (**(char **)(param_1 + 0x54) == '<') {
          thunk_FUN_11234420(0,1);
        }
      }
      (**(code **)(**(int **)(param_1 + 8) + 0xc))(*(undefined4 *)(param_1 + 0x54));
      if (*(char *)(param_1 + 0x462) == '\0') {
LAB_11232c6a:
        (**(code **)(**(int **)(param_1 + 8) + 0x10))(param_2);
        *(undefined1*)(param_1 + 0x462) = (undefined1)(0);
        *(int*)(param_1 + 0x45c) = (int)(*(int *)(param_1 + 0x45c) + -1);
        return;
      }
      pbVar4 = (byte *)(param_2);
      pbVar5 = (byte *)((byte *)(param_1 + 0xc));
      do {
        bVar1 = (byte)(*pbVar4);
        bVar6 = (bool)(bVar1 < *pbVar5);
        if (bVar1 != *pbVar5) {
LAB_11232c55:
          uVar3 = (uint)(-(uint)bVar6 | 1);
          goto LAB_11232c5a;
        }
        if (bVar1 == 0) break;
        bVar1 = (byte)(pbVar4[1]);
        bVar6 = (bool)(bVar1 < pbVar5[1]);
        if ((byte *)((bVar1)) != (byte *)(pbVar5[1])) goto LAB_11232c55;
        pbVar4 = (byte *)(pbVar4 + 2);
        pbVar5 = (byte *)(pbVar5 + 2);
      } while (bVar1 != 0);
      uVar3 = (uint)(0);
LAB_11232c5a:
      if (uVar3 == 0) {
        (**(code **)(**(int **)(param_1 + 8) + 8))
                  ((byte *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x54));
        goto LAB_11232c6a;
      }
    }
    *(undefined1*)(param_1 + 0x460) = (undefined1)(1);
  }
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
  return (undefined4)(uVar1);
}


// Reference entry 11233970; body size 477 bytes.
#line 1 "ENTRY_11233970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11233970(byte *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  byte *pbVar7;
  bool bVar8;
  
  if (*(char *)(param_1 + 0x460) == '\0') {
    if (*(int *)(param_1 + 0x45c) == 0) {
      pbVar5 = (byte *)(&DAT_119dc9cc);
      do {
        bVar2 = (byte)(*param_2);
        bVar8 = (bool)(bVar2 < *pbVar5);
        if (bVar2 != *pbVar5) {
LAB_112339c0:
          uVar3 = (uint)(-(uint)bVar8 | 1);
          goto LAB_112339c5;
        }
        if (bVar2 == 0) break;
        bVar2 = (byte)(param_2[1]);
        bVar8 = (bool)(bVar2 < pbVar5[1]);
        if ((byte *)((bVar2)) != (byte *)(pbVar5[1])) goto LAB_112339c0;
        param_2 = (byte *)(param_2 + 2);
        pbVar5 = (byte *)(pbVar5 + 2);
      } while (bVar2 != 0);
      uVar3 = (uint)(0);
LAB_112339c5:
      if (uVar3 == 0) {
        pbVar5 = (byte *)((byte *)*param_3);
        while ((byte *)(pbVar5) != (byte *)0x0) {
          pcVar6 = (char *)("status");
          do {
            bVar2 = (byte)(*pbVar5);
            bVar8 = (bool)(bVar2 < (byte)*pcVar6);
            if (bVar2 != *pcVar6) {
LAB_11233a05:
              uVar3 = (uint)(-(uint)bVar8 | 1);
              goto LAB_11233a0a;
            }
            if (bVar2 == 0) break;
            bVar2 = (byte)(pbVar5[1]);
            bVar8 = (bool)(bVar2 < (byte)pcVar6[1]);
            if ((char *)((bVar2)) != (char *)(pcVar6[1])) goto LAB_11233a05;
            pbVar5 = (byte *)(pbVar5 + 2);
            pcVar6 = (char *)(pcVar6 + 2);
          } while (bVar2 != 0);
          uVar3 = (uint)(0);
LAB_11233a0a:
          if (uVar3 == 0) {
            pbVar5 = (byte *)((byte *)param_3[1]);
            pbVar7 = (byte *)(&DAT_1189f4a8);
            do {
              bVar2 = (byte)(*pbVar5);
              bVar8 = (bool)(bVar2 < *pbVar7);
              if (bVar2 != *pbVar7) {
LAB_11233a36:
                uVar3 = (uint)(-(uint)bVar8 | 1);
                goto LAB_11233a3b;
              }
              if (bVar2 == 0) break;
              bVar2 = (byte)(pbVar5[1]);
              bVar8 = (bool)(bVar2 < pbVar7[1]);
              if ((byte *)((bVar2)) != (byte *)(pbVar7[1])) goto LAB_11233a36;
              pbVar5 = (byte *)(pbVar5 + 2);
              pbVar7 = (byte *)(pbVar7 + 2);
            } while (bVar2 != 0);
            uVar3 = (uint)(0);
LAB_11233a3b:
            *(bool*)(param_1 + 0x461) = (bool)(uVar3 != 0);
          }
          puVar1 = (undefined4 *)(param_3 + 2);
          param_3 = (undefined4 *)(param_3 + 2);
          pbVar5 = (byte *)((byte *)*puVar1);
        }
      }
      else {
        *(undefined1*)(param_1 + 0x460) = (undefined1)(1);
      }
    }
    else {
      if ((*(char *)(param_1 + 0x461) == '\0') || (*(int *)(param_1 + 0x45c) != 1)) {
        (**(code **)(**(int **)(param_1 + 8) + 4))(param_2,param_3);
      }
      else {
        pcVar6 = (char *)("error");
        pbVar5 = (byte *)(param_2);
        do {
          bVar2 = (byte)(*pbVar5);
          bVar8 = (bool)(bVar2 < (byte)*pcVar6);
          if (bVar2 != *pcVar6) {
LAB_11233aa3:
            uVar3 = (uint)(-(uint)bVar8 | 1);
            goto LAB_11233aa8;
          }
          if (bVar2 == 0) break;
          bVar2 = (byte)(pbVar5[1]);
          bVar8 = (bool)(bVar2 < (byte)pcVar6[1]);
          if ((char *)((bVar2)) != (char *)(pcVar6[1])) goto LAB_11233aa3;
          pbVar5 = (byte *)(pbVar5 + 2);
          pcVar6 = (char *)(pcVar6 + 2);
        } while (bVar2 != 0);
        uVar3 = (uint)(0);
LAB_11233aa8:
        if (uVar3 == 0) {
          pbVar5 = (byte *)((byte *)*param_3);
          while ((byte *)(pbVar5) != (byte *)0x0) {
            pbVar7 = (byte *)(&DAT_1187d828);
            do {
              bVar2 = (byte)(*pbVar5);
              bVar8 = (bool)(bVar2 < *pbVar7);
              if (bVar2 != *pbVar7) {
LAB_11233ae5:
                uVar3 = (uint)(-(uint)bVar8 | 1);
                goto LAB_11233aea;
              }
              if (bVar2 == 0) break;
              bVar2 = (byte)(pbVar5[1]);
              bVar8 = (bool)(bVar2 < pbVar7[1]);
              if ((byte *)((bVar2)) != (byte *)(pbVar7[1])) goto LAB_11233ae5;
              pbVar5 = (byte *)(pbVar5 + 2);
              pbVar7 = (byte *)(pbVar7 + 2);
            } while (bVar2 != 0);
            uVar3 = (uint)(0);
LAB_11233aea:
            if (uVar3 == 0) {
              iVar4 = (int)(atoi((char *)param_3[1]));
              *(int*)(param_1 + 0x458) = (int)(iVar4);
            }
            puVar1 = (undefined4 *)(param_3 + 2);
            param_3 = (undefined4 *)(param_3 + 2);
            pbVar5 = (byte *)((byte *)*puVar1);
          }
        }
      }
      thunk_FUN_1106a8d0(param_1 + 0xc,param_2,0x40);
    }
    *(undefined1*)(param_1 + 0x462) = (undefined1)(1);
    thunk_FUN_11234340();
    *(int*)(param_1 + 0x45c) = (int)(*(int *)(param_1 + 0x45c) + 1);
  }
  return;
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
  if ((char *)(pcVar2) != (char *)0x0) {
    do {
      iVar3 = (int)(iVar3 + 1);
      if (pcVar2 + 1 == (char *)0x0) break;
      pcVar2 = (char *)(strchr(pcVar2 + 1,0x40));
    } while ((char *)(pcVar2) != (char *)0x0);
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


// Reference entry 112341d0; body size 149 bytes.
#line 1 "ENTRY_112341d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint * __thiscall Recovered_Bulk::FUN_112341d0(char *param_2)
{
  uint *param_1 = (uint *)this;
  char cVar1;
  uint *_Memory;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  size_t _Size;
  
  pcVar4 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar4);
    pcVar4 = (char *)(pcVar4 + 1);
  } while (cVar1 != '\0');
  _Size = (size_t)((int)pcVar4 - (int)(param_2 + 1));
  if (_Size != 0) {
    uVar2 = (uint)(param_1[1] + 1 + _Size);
    if (*param_1 < uVar2) {
      uVar3 = (uint)(*param_1 * 2);
      if (uVar3 <= uVar2) {
        uVar3 = (uint)(uVar2);
      }
      uVar2 = (uint)(thunk_FUN_1148b586(uVar3));
      *param_1 = (uint)(uVar3);
      _Memory = (uint *)((uint *)param_1[2]);
      thunk_FUN_1145c250(uVar2,_Memory,uVar3);
      param_1[2] = (uint)(uVar2);
      if ((uint *)(_Memory) == (uint *)(param_1) + 3) {
        *(undefined1*)(param_1 + 3) = (undefined1)(0);
      }
      else {
        free(_Memory);
      }
    }
    memcpy((void *)(param_1[2] + param_1[1]),param_2,_Size);
    *(undefined1*)(param_1[2] + param_1[1] + _Size) = (undefined1)(0);
    param_1[1] = (uint)(param_1[1] + _Size);
  }
  return (uint *)(param_1);
}


// Reference entry 112343a0; body size 94 bytes.
#line 1 "ENTRY_112343a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_112343a0(int param_2,char param_3)
{
  uint *param_1 = (uint *)this;
  uint *_Memory;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(param_2 + 1);
  if (*param_1 < uVar1) {
    uVar2 = (uint)(*param_1 * 2);
    if (uVar2 <= uVar1) {
      uVar2 = (uint)(uVar1);
    }
    uVar1 = (uint)(thunk_FUN_1148b586(uVar2));
    _Memory = (uint *)((uint *)param_1[2]);
    *param_1 = (uint)(uVar2);
    if (param_3 != '\0') {
      thunk_FUN_1145c250(uVar1,_Memory,uVar2);
    }
    param_1[2] = (uint)(uVar1);
    if ((uint *)(_Memory) != (uint *)(param_1) + 3) {
      free(_Memory);
      return;
    }
    *(undefined1*)(param_1 + 3) = (undefined1)(0);
  }
  return;
}


// Reference entry 11235940; body size 30 bytes.
#line 1 "ENTRY_11235940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11235940(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXMLRPCFaultResultCB);
  *(undefined2*)(param_1 + 1) = (undefined2)(0);
  *(undefined1*)((int)param_1 + 6) = (undefined1)(0);
  *(undefined2*)(param_1 + 3) = (undefined2)(0);
  return (undefined4 *)(param_1);
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
  return (undefined4 *)(param_1);
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
  *(undefined1*)(param_1 + 10) = (undefined1)(0);
  return (undefined4 *)(param_1);
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


// Reference entry 11236550; body size 31 bytes.
#line 1 "ENTRY_11236550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_11236550(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x5c0) * 0x5c);
  *(int*)(param_1 + 0x5c0) = (int)(*(int *)(param_1 + 0x5c0) + 1);
  *(undefined4*)(iVar1 + param_1) = (undefined4)(param_2);
  return (int)(param_1 + 4 + iVar1);
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
        *(undefined4*)(param_1 + 900) = (undefined4)(1);
        (**(code **)(*(int *)(param_1 + 0x388) + 4))("<array><data>",0xd,0);
        break;
      case 1:
        if (*(int *)(param_1 + 0x380) == 0) {
code_r0x11236808:
          *(undefined4*)(param_1 + 900) = (undefined4)(3);
          (**(code **)(*(int *)(param_1 + 0x388) + 4))("</data></array>",0xf,0);
        }
        else {
          *(undefined4*)(param_1 + 900) = (undefined4)(2);
        }
        break;
      case 2:
        *(int*)(param_1 + 0x3a4) = (int)(*(int *)(param_1 + 0x3a4) + 1);
        if (*(uint *)((param_1 + 0x380)) <= *(uint *)((param_1 + 0x3a4))) goto code_r0x11236808;
        break;
      default:
        *(undefined4*)(param_1 + 900) = (undefined4)(4);
      }
    }
    iVar3 = (int)(*(int *)(param_1 + 900));
    bVar6 = (bool)(iVar1 != iVar3);
    iVar1 = (int)(iVar3);
  } while ((bVar6) || (iVar5 != 0));
  if ((int *)(param_4) != (int *)0x0) {
    *param_4 = (int)(iVar4);
    iVar3 = (int)(*(int *)(param_1 + 900));
  }
  return (bool)(iVar3 != 4);
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
        *(undefined4*)(param_1 + 0x3c) = (undefined4)(1);
        (**(code **)(*(int *)(param_1 + 0x40) + 4))("<param>",7,0);
        break;
      case 1:
        *(undefined4*)(param_1 + 0x3c) = (undefined4)(2);
        break;
      case 2:
        *(undefined4*)(param_1 + 0x3c) = (undefined4)(3);
        (**(code **)(*(int *)(param_1 + 0x40) + 4))("</param>",8,0);
        break;
      default:
        *(undefined4*)(param_1 + 0x3c) = (undefined4)(4);
      }
    }
    iVar3 = (int)(*(int *)(param_1 + 0x3c));
    bVar6 = (bool)(iVar1 != iVar3);
    iVar1 = (int)(iVar3);
  } while ((bVar6) || (iVar5 != 0));
  if ((int *)(param_4) != (int *)0x0) {
    *param_4 = (int)(iVar4);
    iVar3 = (int)(*(int *)(param_1 + 0x3c));
  }
  return (bool)(iVar3 != 4);
}


// Reference entry 11237130; body size 326 bytes.
#line 1 "ENTRY_11237130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_11237130(int param_2,int param_3,int *param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  char *pcVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar6 = (int)(0);
  iVar2 = (int)(param_1[0xf]);
  iVar7 = (int)(param_3);
  do {
    iVar5 = (int)(iVar2);
    if (iVar2 == 6) break;
    if (iVar2 == 4) {
      cVar3 = (char)(thunk_FUN_112372f0(param_2,iVar7,&param_3));
    }
    else {
      cVar3 = (char)((**(code **)(param_1[0x10] + 8))(param_2,iVar7,&param_3));
    }
    iVar6 = (int)(iVar6 + param_3);
    param_2 = (int)(param_2 + param_3);
    iVar7 = (int)(iVar7 - param_3);
    if (cVar3 == '\0') {
      switch(param_1[0xf]) {
      case 0:
        param_1[0xf] = (undefined4)(1);
        (**(code **)(param_1[0x10] + 4))("<member><name>",0xe,0);
        break;
      case 1:
        pcVar4 = (char *)((char *)*param_1);
        param_1[0xf] = (undefined4)(2);
        pcVar1 = (char *)(pcVar4 + 1);
        do {
          cVar3 = (char)(*pcVar4);
          pcVar4 = (char *)(pcVar4 + 1);
        } while (cVar3 != '\0');
        (**(code **)(param_1[0x10] + 4))(*param_1,(int)pcVar4 - (int)pcVar1,1);
        break;
      case 2:
        param_1[0xf] = (undefined4)(3);
        (**(code **)(param_1[0x10] + 4))("</name>",7,0);
        break;
      case 3:
        param_1[0xf] = (undefined4)(4);
        break;
      case 4:
        param_1[0xf] = (undefined4)(5);
        (**(code **)(param_1[0x10] + 4))("</member>",9,0);
        break;
      default:
        param_1[0xf] = (undefined4)(6);
      }
    }
    iVar5 = (int)(param_1[0xf]);
    bVar8 = (bool)(iVar2 != iVar5);
    iVar2 = (int)(iVar5);
  } while ((bVar8) || (iVar7 != 0));
  if ((int *)(param_4) != (int *)0x0) {
    *param_4 = (int)(iVar6);
    iVar5 = (int)(param_1[0xf]);
  }
  return (bool)(iVar5 != 6);
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
      *(undefined1*)(param_1 + 0x14) = (undefined1)(1);
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


// Reference entry 11237d30; body size 12 bytes.
#line 1 "ENTRY_11237d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_11237d30(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_11237dd0());
  return (int)(iVar1 + 0xf);
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
  return (int)(iVar4);
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
  return (int)(iVar1 + iVar2 + 0x58);
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
  if ((char *)(param_2) != (char *)0x0) {
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
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 11238470; body size 497 bytes.
#line 1 "ENTRY_11238470"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11238470(int param_1)

{
 try {
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uStack_4d5c;
  undefined4 uStack_4d58;
  undefined4 uStack_4d54;
  undefined4 uStack_4d50;
  undefined4 uStack_4d4c;
  undefined4 uStack_4d48;
  undefined4 uStack_4d44;
  undefined4 uStack_4d40;
  uint uStack_4d3c;
  void *pvStack_4d38;
  undefined1 *puStack_4d34;
  undefined4 uStack_4d30;
  undefined1 auStack_4d2c [17544];
  undefined1 auStack_8a4 [2204];
  uint uStack_8;


  uVar2 = (uint)(DAT_12126b84 ^ (uint)auStack_4d2c);

  uStack_8 = (uint)(uVar2);
  if (*(char *)(param_1 + 0xa354) != '\0') {
    thunk_FUN_1145c930(&uStack_4d5c,0,uVar2);
  }
  thunk_FUN_11293e20(&uStack_4d44,*(undefined4 *)(param_1 + 0xa358),&uStack_4d4c,
                     *(undefined4 *)(param_1 + 0xa35c));
  iVar3 = (int)(thunk_FUN_11238320(0));
  if (iVar3 != 0) {
    uVar4 = (uint)(0x3e9);

    goto LAB_112385c0;
  }
  thunk_FUN_1124a090(param_1);

  thunk_FUN_11249fe0(auStack_8a4);
  uStack_4d30 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_4d30 + 1)) << 8 | (uint)(1)));
  thunk_FUN_1124a5e0(auStack_4d2c,&uStack_4d44,&uStack_4d4c);
  if (*(char *)(param_1 + 0x434c) == '\0') {
    uVar4 = (uint)(0x3e9);
  }
  else {
    cVar1 = (char)((**(code **)(*(int *)(param_1 + 0xf00) + 0x2c))());
    if (cVar1 == '\0') {
      if (((*(char *)(param_1 + 0x1324) != '\0') || (*(char *)(param_1 + 0x1325) == '\0')) ||
         (cVar1 = (**(code **)(**(int **)(param_1 + 0xefc) + 0x2c))(), cVar1 == '\0'))
      goto LAB_11238566;
      uVar4 = (uint)(0);
    }
    else {
      iVar3 = (int)(*(int *)(param_1 + 0xf08));
      if ((iVar3 < 1) || (9999 < iVar3)) {
LAB_11238566:
        uVar4 = (uint)(1000);
      }
      else {
        uVar4 = (uint)(iVar3 + 10000U & 0xffff);
      }
    }
  }
  uStack_4d3c = (uint)(uVar4);
  thunk_FUN_1124a380();

  thunk_FUN_1124a3a0();
LAB_112385c0:
  if ((*(char *)(param_1 + 0xa354) != '\0') && ((short)uVar4 != 0)) {
    thunk_FUN_1145c930(&uStack_4d54,0,uVar2);
    thunk_FUN_112b0270("xmlrpc",3,
                       "%s failed, ret = %hu, tvStart = %d s %d us, m_tvConnectDone = %d s %d us, m_tvDone = %d s %d us, tvNow = %d s %d us"
                       ,param_1 + 0x80d,uVar4,uStack_4d5c,uStack_4d58,uStack_4d4c,uStack_4d48,
                       uStack_4d44,uStack_4d40,uStack_4d54,uStack_4d50);
    uVar2 = (uint)(0);
    if (*(int *)(param_1 + 0xed4) != 0) {
      do {
        thunk_FUN_11238060(0);
        uVar2 = (uint)(uVar2 + 1);
      } while (uVar2 < *(uint *)(param_1 + 0xed4));
    }
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
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


// Reference entry 11239b70; body size 71 bytes.
#line 1 "ENTRY_11239b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_11239b70(int *param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  if ((int *)(param_1) != (int *)(param_2)) {
    puVar1 = (undefined4 *)((undefined4 *)*param_1);
    if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
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
  return (int *)(param_1);
}


// Reference entry 1123a130; body size 91 bytes.
#line 1 "ENTRY_1123a130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1123a130(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  *(undefined2*)(param_1 + 4) = (undefined2)(0);
  param_1[9] = (undefined4)(0);
  *(undefined1*)(param_1 + 5) = (undefined1)(0);
  param_1[0xb] = (undefined4)(0);
  *(undefined1*)(param_1 + 0xc) = (undefined1)(0);
  param_1[0x36] = (undefined4)(0);
  param_1[0x37] = (undefined4)(0);
  param_1[0x3c] = (undefined4)(0);
  *(undefined1*)(param_1 + 0x38) = (undefined1)(0);
  param_1[0x3e] = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[10] = (undefined4)(0xf);
  param_1[0x3d] = (undefined4)(0xf);
  return (undefined4 *)(param_1);
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
        *(__time64_t*)(param_2 + 0x34) = (__time64_t)(_Var4 + ((unsigned long long)(iVar3) << 32 | (unsigned long long)(uVar1)));
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
  return (uint)(uVar1);
}


// Reference entry 1123b240; body size 8 bytes.
#line 1 "ENTRY_1123b240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1123b240(int param_1)

{
  return (int)(param_1 + 0x410);
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
  if ((undefined4 *)(puVar2) == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    *(undefined1*)(puVar2 + 0x31) = (undefined1)(0);
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
  *(undefined1*)(puVar2 + 0x31) = (undefined1)(param_2);
  puVar2[0x32] = (undefined4)(0);
  return (undefined4 *)(puVar2);
}


// Reference entry 1123b2f0; body size 241 bytes.
#line 1 "ENTRY_1123b2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1123b2f0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined1 param_6,undefined4 param_7,undefined4 param_8)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x494));
  if ((undefined4 *)(puVar1) == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(operator_new(0x100));
    if ((undefined4 *)(puVar1) == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      *(undefined2*)(puVar1 + 4) = (undefined2)(0);
      puVar1[9] = (undefined4)(0);
      puVar1[10] = (undefined4)(0xf);
      *(undefined1*)(puVar1 + 5) = (undefined1)(0);
      puVar1[0x36] = (undefined4)(0);
      puVar1[0x37] = (undefined4)(0);
      puVar1[0x3c] = (undefined4)(0);
      puVar1[0x3d] = (undefined4)(0xf);
      *(undefined1*)(puVar1 + 0x38) = (undefined1)(0);
      puVar1[0x3e] = (undefined4)(0);
    }
  }
  else {
    *(undefined4*)(param_1 + 0x494) = (undefined4)(puVar1[0x36]);
  }
  *puVar1 = (undefined4)(param_2);
  puVar1[1] = (undefined4)(param_3);
  puVar1[2] = (undefined4)(param_4);
  *(undefined2*)(puVar1 + 3) = (undefined2)(0);
  *(undefined1*)((int)puVar1 + 0xf) = (undefined1)(0);
  *(undefined1*)((int)puVar1 + 0xe) = (undefined1)(param_6);
  puVar1[0xb] = (undefined4)(0);
  *(undefined1*)(puVar1 + 0xc) = (undefined1)(0);
  thunk_FUN_1145c250((int)puVar1 + 0x31,param_5,0x81);
  puVar1[0x34] = (undefined4)(param_7);
  puVar1[0x35] = (undefined4)(param_8);
  puVar1[0x36] = (undefined4)(0);
  puVar1[0x37] = (undefined4)(0);
  return (undefined4 *)(puVar1);
}


// Reference entry 1123b430; body size 494 bytes.
#line 1 "ENTRY_1123b430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __thiscall Recovered_Bulk::FUN_1123b430(byte *param_2,char *param_3,undefined4 param_4,undefined4 param_5)
{
  int param_1 = (int )this;
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  byte *pbVar7;
  int *piVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uStack_2;
  
  uStack_2 = (undefined1)(0);
  bVar10 = (bool)(false);
  iVar5 = (int)(param_1 + 8);
  thunk_FUN_112a7f50(iVar5);
  for (piVar8 = (int *)(*(int **)(param_1 + 0x490));(int *)( piVar8) != (int *)0x0; piVar8 = (int *)piVar8[0x36]) {
    pbVar7 = (byte *)((byte *)((int)piVar8 + 0x31));
    pbVar2 = (byte *)(param_2);
    do {
      bVar1 = (byte)(*pbVar2);
      bVar9 = (bool)(bVar1 < *pbVar7);
      if (bVar1 != *pbVar7) {
LAB_1123b485:
        uVar3 = (uint)(-(uint)bVar9 | 1);
        goto LAB_1123b48a;
      }
      if (bVar1 == 0) break;
      bVar1 = (byte)(pbVar2[1]);
      bVar9 = (bool)(bVar1 < pbVar7[1]);
      if ((byte *)((bVar1)) != (byte *)(pbVar7[1])) goto LAB_1123b485;
      pbVar2 = (byte *)(pbVar2 + 2);
      pbVar7 = (byte *)(pbVar7 + 2);
    } while (bVar1 != 0);
    uVar3 = (uint)(0);
LAB_1123b48a:
    if (uVar3 == 0) goto LAB_1123b517;
  }
  if (*(char *)(param_1 + 0x6c) != '\0') {
    thunk_FUN_112a7ca0(param_1 + 0x44,iVar5,2000);
    piVar8 = (int *)(*(int **)(param_1 + 0x490));
    if ((int *)(piVar8) != (int *)0x0) {
      do {
        pbVar7 = (byte *)((byte *)((int)piVar8 + 0x31));
        pbVar2 = (byte *)(param_2);
        do {
          bVar1 = (byte)(*pbVar2);
          bVar10 = (bool)(bVar1 < *pbVar7);
          if (bVar1 != *pbVar7) {
LAB_1123b4e7:
            uVar3 = (uint)(-(uint)bVar10 | 1);
            goto LAB_1123b4ec;
          }
          if (bVar1 == 0) break;
          bVar1 = (byte)(pbVar2[1]);
          bVar10 = (bool)(bVar1 < pbVar7[1]);
          if ((byte *)((bVar1)) != (byte *)(pbVar7[1])) goto LAB_1123b4e7;
          pbVar2 = (byte *)(pbVar2 + 2);
          pbVar7 = (byte *)(pbVar7 + 2);
        } while (bVar1 != 0);
        uVar3 = (uint)(0);
LAB_1123b4ec:
        if (uVar3 == 0) goto LAB_1123b517;
        piVar8 = (int *)((int *)piVar8[0x36]);
        if ((int *)(piVar8) == (int *)0x0) {
          thunk_FUN_112a8010(iVar5);
          return (undefined1)(0);
        }
      } while( true );
    }
  }
  goto LAB_1123b5f3;
LAB_1123b517:
  thunk_FUN_112a7f50(param_1 + 0x10);
  piVar6 = (int *)(*(int **)(param_1 + 0x49c));
  if ((int *)(piVar6) != (int *)0x0) {
    do {
      if (*piVar6 == *piVar8) {
        thunk_FUN_112b0270(&DAT_118c9974,6,"Received SID %s for deleted client.",param_2);
        uStack_2 = (undefined1)(0);
        goto LAB_1123b566;
      }
      piVar6 = (int *)((int *)piVar6[0x32]);
    } while ((int *)(piVar6) != (int *)0x0);
  }
  uVar4 = (undefined4)((**(code **)(*(int *)(*piVar8 + *(int *)(*(int *)*piVar8 + 4)) + 0x38))(param_5));
  thunk_FUN_1145c250(param_4,uVar4);
  uStack_2 = (undefined1)(1);
LAB_1123b566:
  bVar10 = (bool)(false);
  thunk_FUN_112a8010(param_1 + 0x10);
  iVar5 = (int)(atoi(param_3));
  if (piVar8[0xb] != iVar5) {
    piVar6 = (int *)(piVar8 + 5);
    *(undefined1*)(piVar8 + 0xc) = (undefined1)(1);
    piVar8[0x34] = (int)(0);
    piVar8[0x35] = (int)(0);
    bVar10 = (bool)(true);
    if (0xf < (uint)piVar8[10]) {
      piVar6 = (int *)((int *)*piVar6);
    }
    thunk_FUN_112b0270(&DAT_118c9974,6,"Received OOS %u / %u for SID %s (%s)",piVar8[0xb],iVar5,
                       param_2,piVar6);
  }
  if (iVar5 == -1) {
    piVar8[0xb] = (int)(1);
  }
  else {
    piVar8[0xb] = (int)(iVar5 + 1);
  }
LAB_1123b5f3:
  thunk_FUN_112a8010(param_1 + 8);
  if (bVar10) {
    (**(code **)(**(int **)(param_1 + 4) + 4))(LAB_1000b0f5,0);
  }
  return (undefined1)(uStack_2);
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
      *(undefined4*)(iVar4 + 0xdc) = (undefined4)(0);
      iVar1 = (int)(*(int *)(iVar4 + 0xd8));
    } while (*(int *)(iVar4 + 0xd8) != 0);
    if (iVar4 != 0) {
      *(undefined4*)(iVar4 + 0xd8) = (undefined4)(*(undefined4 *)(param_1 + 0x490));
      *(undefined4*)(param_1 + 0x490) = (undefined4)(*(undefined4 *)(param_1 + 0x498));
      *(undefined4*)(param_1 + 0x498) = (undefined4)(0);
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
  *(undefined1*)(param_1 + 0x4a0) = (undefined1)(0);
  (**(code **)(**(int **)(param_1 + 4) + 4))(LAB_1000b0f5,0);
  return;
}


// Reference entry 1123d510; body size 224 bytes.
#line 1 "ENTRY_1123d510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1123d510(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x4ac));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    *puVar1 = (undefined4)((uint)&ghidra_vftable_RSubscriptionRenewal);
    puVar1[1] = (undefined4)(0);
    *(undefined1*)(puVar1 + 0x10) = (undefined1)(0);
    *(undefined1*)(puVar1 + 0x1b) = (undefined1)(0);
    puVar1[0x123] = (undefined4)(0);
    puVar1[0x124] = (undefined4)(0);
    puVar1[0x125] = (undefined4)(0);
    puVar1[0x126] = (undefined4)(0);
    puVar1[0x127] = (undefined4)(0);
    *(undefined2*)(puVar1 + 0x128) = (undefined2)(0);
    puVar1[0x129] = (undefined4)(0);
    puVar1[0x12a] = (undefined4)(0);
    thunk_FUN_112a7ea0(puVar1 + 2,"active_record");
    thunk_FUN_112a7ea0(puVar1 + 4,"network_safe");
    thunk_FUN_112a7b70(puVar1 + 6,"subrenew_del");
    thunk_FUN_112a7b70(puVar1 + 0x11,"subrenew_sub");
    *(undefined4*)((int)puVar1 + 0x86) = (undefined4)(0);
    *(undefined1*)((int)puVar1 + 0x8a) = (undefined1)(0);
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
  *(undefined4*)(param_1 + 0xc570) = (undefined4)(0);
  *(int*)(param_1 + 0xc568) = (int)(param_1 + 0x8568);
  *(int*)(param_1 + 0xc574) = (int)(param_1 + 0x8568);
  *(int*)(param_1 + 0xc56c) = (int)(param_1 + 0xc567);
  *(undefined4*)(param_1 + 0xc578) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xc57c) = (undefined4)(0);
  *(undefined2*)(param_1 + 0xc580) = (undefined2)(0);
  return;
}


// Reference entry 1123f3a0; body size 40 bytes.
#line 1 "ENTRY_1123f3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1123f3a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_112996f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_MediaReceiverRegistrarClient);
  *(undefined***)(*(int *)(param_1[1] + 4) + 4 + (int)param_1) = (undefined **)((uint)&ghidra_vftable_MediaReceiverRegistrarClient);
  return (undefined4 *)(param_1);
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


// Reference entry 11240470; body size 191 bytes.
#line 1 "ENTRY_11240470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11240470(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  HANDLE pvVar1;
  void *pvVar2;
  
  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[9] = (undefined4)(0);
  *(undefined1*)(param_1 + 0xb) = (undefined1)(0);
  thunk_FUN_112a9cf0(param_1 + 0x12);
  pvVar1 = (HANDLE)(CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0,0x7fffffff,(LPCSTR)0x0));
  param_1[2] = (undefined4)(pvVar1);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  if ((void *)(DAT_122f564c) == (void *)0x0) {
    pvVar2 = (void *)(operator_new(0x14));
    if ((void *)(pvVar2) == (void *)0x0) {
      DAT_122f564c = (int)((void *)0x0);
    }
    else {
      *(undefined4*)((int)pvVar2 + 8) = (undefined4)(1);
      *(undefined4*)((int)pvVar2 + 0xc) = (undefined4)(0x7fffffff);
      *(undefined4*)((int)pvVar2 + 0x10) = (undefined4)(0);
      thunk_FUN_112a9cf0(pvVar2);
      DAT_122f564c = (int)(pvVar2);
    }
  }
  thunk_FUN_1123fce0((int)DAT_122f564c + 0x10);
  return (undefined4 *)(param_1);
}


// Reference entry 11240630; body size 21 bytes.
#line 1 "ENTRY_11240630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11240630(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOp);
  return (undefined4 *)(param_1);
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

  while (ExceptionList = ppvVar3,(undefined4 *)( _Memory) != (undefined4 *)0x0) {
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

  return (int)(param_1);

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
  *(undefined4*)(param_1 + 0x210 + *(int *)(param_1 + 0x1210) * 4) = (undefined4)(param_2);
  *(int*)(param_1 + 0x1210) = (int)(*(int *)(param_1 + 0x1210) + 1);
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


// Reference entry 112413e0; body size 87 bytes.
#line 1 "ENTRY_112413e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112413e0(void)

{
  void *pvVar1;
  
  if ((void *)(DAT_122f564c) == (void *)0x0) {
    pvVar1 = (void *)(operator_new(0x14));
    if ((void *)(pvVar1) == (void *)0x0) {
      DAT_122f564c = (int)((void *)0x0);
    }
    else {
      *(undefined4*)((int)pvVar1 + 8) = (undefined4)(1);
      *(undefined4*)((int)pvVar1 + 0xc) = (undefined4)(0x7fffffff);
      *(undefined4*)((int)pvVar1 + 0x10) = (undefined4)(0);
      thunk_FUN_112a9cf0(pvVar1);
      DAT_122f564c = (int)(pvVar1);
    }
  }
  thunk_FUN_1123fce0((int)DAT_122f564c + 0x10);
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


// Reference entry 11241900; body size 174 bytes.
#line 1 "ENTRY_11241900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11241900(int *param_1,int param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  piVar1 = (int *)(param_1);
  if (param_2 != 0x10) {
    if (((param_2 == 0) && ((int *)(param_4) != (int *)0x0)) &&
       (*(undefined4 **)(undefined4 *)(param_4[3]) != (undefined4 *)(0x0))) {
      param_1 = (int *)((int *)Ordinal_14(**(undefined4 **)param_4[3]));
      iVar2 = (int)((**(code **)(*piVar1 + 0x30))(&param_1));
      if (iVar2 == 0) {
        piVar1[4] = (int)(2);
        return;
      }
    }
    else {
      iVar2 = (int)(-0x7efffffd);
      if (param_2 == 0) {
        if (((int *)(param_4) == (int *)0x0) || (pcVar4 = (char *)*param_4,(char *)( pcVar4) == (char *)0x0)) {
          pcVar4 = (char *)("UNKNOWN");
        }
        pcVar3 = (char *)("pEntry is null");
        if ((int *)(param_4) != (int *)0x0) {
          pcVar3 = (char *)("pEntry->h_addr is 0");
        }
        thunk_FUN_112b0270("asynciomgr",4,
                           "cares returned success for DNS lookup with bad data for %s: %s",pcVar4,
                           pcVar3);
      }
    }
    if ((char)piVar1[0x10] != '\0') {
      *(undefined1*)((int)piVar1 + 0x41) = (undefined1)(1);
      return;
    }
    (**(code **)(*piVar1 + 0x34))(iVar2);
    piVar1[4] = (int)(3);
  }
  return;
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
    if ((undefined4 *)(undefined4 *)(param_1[2]) != (undefined4 *)(0x0)) {
      (*(code *)**(undefined4 **)param_1[2])(1);
      param_1[2] = (int)(0);
    }
  }
  param_1[4] = (int)(3);
  return;
}


// Reference entry 11241af0; body size 174 bytes.
#line 1 "ENTRY_11241af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11241af0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)(param_1[9]);
  piVar1 = (int *)(param_1 + 0xb);
  iVar2 = (int)(param_1[10]);
  thunk_FUN_1145c930(piVar1,0);
  param_1[0xd] = (int)(*piVar1);
  param_1[0xe] = (int)(param_1[0xc]);
  thunk_FUN_1145ad70(piVar1,iVar3);
  thunk_FUN_1145ad70(param_1 + 0xd,iVar2);
  iVar3 = (int)((**(code **)(*param_1 + 0x2c))());
  if (iVar3 == 0) {
    param_1[4] = (int)(2);
    return (int)(0);
  }
  if (iVar3 == 0xb) {
    param_1[4] = (int)(1);
    return (int)(0);
  }
  (**(code **)(*param_1 + 0x34))(iVar3);
  if (param_1[0xf] != 0) {
    thunk_FUN_112b5970(param_1[0xf]);
    param_1[0xf] = (int)(0);
  }
  if ((undefined4 *)(undefined4 *)(param_1[2]) != (undefined4 *)(0x0)) {
    (*(code *)**(undefined4 **)param_1[2])(1);
    param_1[2] = (int)(0);
  }
  param_1[4] = (int)(3);
  return (int)(iVar3);
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
    if ((*(int *)(iVar4 + 0xc) == (int)(param_2)) || (param_2 == 0)) {
      *piVar3 = (int)(*(int *)(iVar4 + 0x18));
      *(int*)(iVar4 + 0x18) = (int)(iVar1);
    }
    else {
      piVar3 = (int *)((int *)(iVar4 + 0x18));
      iVar4 = (int)(iVar1);
    }
    iVar1 = (int)(iVar4);
    iVar2 = (int)(*piVar3);
  }
  return (int)(iVar1);
}


// Reference entry 11241c90; body size 12 bytes.
#line 1 "ENTRY_11241c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_11241c90(uint param_1)

{
  return (bool)(0x7ffffffe < param_1);
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
  if (*(code **)(param_1 + 0x14) != (code *)((0x0))) {
    (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 4));
    return;
  }
  if (*(HWND *)(param_1 + 0xc) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0xc),*(UINT *)(param_1 + 0x10),0,*(LPARAM *)(param_1 + 4));
  }
  return;
}


// Reference entry 11241fa0; body size 12 bytes.
#line 1 "ENTRY_11241fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11241fa0(void)

{
  thunk_FUN_11241fb0();
  return (undefined4)(0);
}


// Reference entry 11242fa0; body size 59 bytes.
#line 1 "ENTRY_11242fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11242fa0(int param_1)

{
  undefined8 uStack_c;
  undefined4 uStack_4;
  
  if ((*(char *)(param_1 + 0x18) != -1) && (*(char *)(param_1 + 0x18) == '\x01')) {
    return (int)(param_1);
  }
  uStack_4 = (undefined4)(0);
  uStack_c = (undefined8)(0);
  func_0x100905a2();
                    
  _CxxThrowException(&uStack_c,(ThrowInfo *)&UNK_1205cea8);
}


// Reference entry 11242ff0; body size 63 bytes.
#line 1 "ENTRY_11242ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11242ff0(int param_1)

{
  undefined8 uStack_c;
  undefined4 uStack_4;
  
  if ((*(char *)(param_1 + 0x18) != -1) && (*(char *)(param_1 + 0x18) == '\x01')) {
    return;
  }
  uStack_4 = (undefined4)(0);
  uStack_c = (undefined8)(0);
  func_0x100905a2();
                    
  _CxxThrowException(&uStack_c,(ThrowInfo *)&UNK_1205cea8);
}


// Reference entry 11243040; body size 59 bytes.
#line 1 "ENTRY_11243040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11243040(int param_1)

{
  undefined8 uStack_c;
  undefined4 uStack_4;
  
  if ((*(char *)(param_1 + 0x18) != -1) && (*(char *)(param_1 + 0x18) == '\0')) {
    return (int)(param_1);
  }
  uStack_4 = (undefined4)(0);
  uStack_c = (undefined8)(0);
  func_0x100905a2();
                    
  _CxxThrowException(&uStack_c,(ThrowInfo *)&UNK_1205cea8);
}


// Reference entry 11243090; body size 62 bytes.
#line 1 "ENTRY_11243090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11243090(int param_1)

{
  undefined8 uStack_c;
  undefined4 uStack_4;
  
  if ((*(char *)(param_1 + 0x18) != -1) && (*(char *)(param_1 + 0x18) == '\0')) {
    return;
  }
  uStack_4 = (undefined4)(0);
  uStack_c = (undefined8)(0);
  func_0x100905a2();
                    
  _CxxThrowException(&uStack_c,(ThrowInfo *)&UNK_1205cea8);
}


// Reference entry 11243120; body size 7 bytes.
#line 1 "ENTRY_11243120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11243120(undefined4 param_1)

{
  undefined1 uStack_1;
  
  uStack_1 = (undefined1)((undefined1)((uint)param_1 >> 0x18));
  return (undefined1)(uStack_1);
}


// Reference entry 11243130; body size 7 bytes.
#line 1 "ENTRY_11243130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11243130(undefined4 param_1)

{
  undefined1 uStack_1;
  
  uStack_1 = (undefined1)((undefined1)((uint)param_1 >> 0x18));
  return (undefined1)(uStack_1);
}


// Reference entry 11243330; body size 22 bytes.
#line 1 "ENTRY_11243330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11243330(undefined4 *param_1)

{
  *(undefined8*)(param_1 + 1) = (undefined8)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_nonstd_expected_lite_bad_expected_access);
  return (undefined4 *)(param_1);
}


// Reference entry 112433c0; body size 17 bytes.
#line 1 "ENTRY_112433c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_112433c0(undefined4 *param_1)

{
  *(undefined8*)(param_1 + 1) = (undefined8)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_nonstd_variants_bad_variant_access);
  return (undefined4 *)(param_1);
}


// Reference entry 112433e0; body size 17 bytes.
#line 1 "ENTRY_112433e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_112433e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_exception);
  *(undefined8*)(param_1 + 1) = (undefined8)(0);
  return (undefined4 *)(param_1);
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


// Reference entry 11243830; body size 12 bytes.
#line 1 "ENTRY_11243830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11243830(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x24) + -1);
  if (-1 < iVar1) {
    *(int*)(param_1 + 0x24) = (int)(iVar1);
  }
  return;
}


// Reference entry 11243bb0; body size 20 bytes.
#line 1 "ENTRY_11243bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11243bb0(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    return (int)(param_1);
  }
  uVar1 = (undefined4)(thunk_FUN_112437d0());
                    
  thunk_FUN_11243860(uVar1);
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
  *(undefined1*)(param_1[9] + 4 + (int)param_1) = (undefined1)(0);
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
    *(undefined1*)(param_1[9] + 4 + (int)param_1) = (undefined1)(0);
  }
  thunk_FUN_11244840(param_2,0xffffffff,1,1);
  (**(code **)(*param_1 + 4))(&DAT_11884554,1);
  thunk_FUN_11244840(param_3,0xffffffff,1,1);
  return;
}


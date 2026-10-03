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
extern int FUN_1005ed27(...);
extern int FUN_11261ab0(...);
extern int FUN_1129fee0(...);
extern int FUN_112a4ce0(...);
extern int FUN_112acc60(...);
extern __declspec(dllimport) int __std_exception_destroy(...);
extern __declspec(dllimport) int __stdio_common_vfprintf(...);
extern __declspec(dllimport) int _close(...);
extern __declspec(dllimport) int _errno(...);
extern __declspec(dllimport) int _fdopen(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int _open(...);
extern __declspec(dllimport) int _read(...);
extern __declspec(dllimport) int _time64(...);
extern __declspec(dllimport) int abort(...);
extern __declspec(dllimport) int atoi(...);
extern __declspec(dllimport) int fflush(...);
extern int find(...);
extern int func_0x1001ac08(...);
extern int func_0x1001afaf(...);
extern int func_0x1001ba3b(...);
extern int func_0x1001c058(...);
extern int func_0x10032434(...);
extern int func_0x1003418a(...);
extern int func_0x10041443(...);
extern int func_0x100473bb(...);
extern int func_0x1004964d(...);
extern int func_0x1004c857(...);
extern int func_0x1005d4ef(...);
extern int func_0x10061ec8(...);
extern int func_0x100630b6(...);
extern int func_0x10076477(...);
extern int func_0x1007ed66(...);
extern int func_0x1008c65f(...);
extern int func_0x1008e90f(...);
extern int func_0x10093199(...);
extern int func_0x100965bf(...);
extern int func_0x112907e0(...);
extern int func_0x112909d0(...);
extern __declspec(dllimport) int isdigit(...);
extern __declspec(dllimport) int isprint(...);
extern __declspec(dllimport) int isspace(...);
extern __declspec(dllimport) int memchr(...);
extern __declspec(dllimport) int memmove(...);
extern int operator_new(...);
extern int s(...);
extern __declspec(dllimport) int signal(...);
extern __declspec(dllimport) int strchr(...);
extern int stream(...);
extern __declspec(dllimport) int strerror_s(...);
extern __declspec(dllimport) int strncmp(...);
extern __declspec(dllimport) int strrchr(...);
extern __declspec(dllimport) int strtol(...);
extern __declspec(dllimport) int strtoul(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_1012a4c0(...);
extern int thunk_FUN_1012cab0(...);
extern int thunk_FUN_1012d130(...);
extern int thunk_FUN_101a6c80(...);
extern int thunk_FUN_101b9160(...);
extern int thunk_FUN_10405e20(...);
extern int thunk_FUN_10c66110(...);
extern int thunk_FUN_11069420(...);
extern int thunk_FUN_1106a8d0(...);
extern int thunk_FUN_111c0480(...);
extern int thunk_FUN_111d7620(...);
extern int thunk_FUN_111f75b0(...);
extern int thunk_FUN_11203e10(...);
extern int thunk_FUN_1122af30(...);
extern int thunk_FUN_1122e2b0(...);
extern int thunk_FUN_11230ea0(...);
extern int thunk_FUN_112332a0(...);
extern int thunk_FUN_11234290(...);
extern int thunk_FUN_112366e0(...);
extern int thunk_FUN_112372f0(...);
extern int thunk_FUN_112378c0(...);
extern int thunk_FUN_11237dd0(...);
extern int thunk_FUN_11238060(...);
extern int thunk_FUN_1123ec00(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
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
extern int thunk_FUN_11249230(...);
extern int thunk_FUN_1124ab00(...);
extern int thunk_FUN_1124c380(...);
extern int thunk_FUN_112517c0(...);
extern int thunk_FUN_11251ae0(...);
extern int thunk_FUN_11252830(...);
extern int thunk_FUN_11252970(...);
extern int thunk_FUN_11252ac0(...);
extern int thunk_FUN_11253130(...);
extern int thunk_FUN_11253f10(...);
extern int thunk_FUN_11254de0(...);
extern int thunk_FUN_11255740(...);
extern int thunk_FUN_11255ba0(...);
extern int thunk_FUN_112588d0(...);
extern int thunk_FUN_112599f0(...);
extern int thunk_FUN_1125b4a0(...);
extern int thunk_FUN_1125b7a0(...);
extern int thunk_FUN_1125b810(...);
extern int thunk_FUN_1125b880(...);
extern int thunk_FUN_1125bbd0(...);
extern int thunk_FUN_1125bca0(...);
extern int thunk_FUN_11260290(...);
extern int thunk_FUN_11262460(...);
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
extern int thunk_FUN_1127eb60(...);
extern int thunk_FUN_1127fa70(...);
extern int thunk_FUN_11280440(...);
extern int thunk_FUN_11282620(...);
extern int thunk_FUN_11282a50(...);
extern int thunk_FUN_11283480(...);
extern int thunk_FUN_112844e0(...);
extern int thunk_FUN_11285a10(...);
extern int thunk_FUN_11285a90(...);
extern int thunk_FUN_11285ab0(...);
extern int thunk_FUN_11285d80(...);
extern int thunk_FUN_11286980(...);
extern int thunk_FUN_11286990(...);
extern int thunk_FUN_112869a0(...);
extern int thunk_FUN_11286a60(...);
extern int thunk_FUN_11287890(...);
extern int thunk_FUN_1128b0e0(...);
extern int thunk_FUN_1128c260(...);
extern int thunk_FUN_1128c370(...);
extern int thunk_FUN_1128c630(...);
extern int thunk_FUN_1128d490(...);
extern int thunk_FUN_1128d660(...);
extern int thunk_FUN_1128f080(...);
extern int thunk_FUN_11292b90(...);
extern int thunk_FUN_11292d70(...);
extern int thunk_FUN_11293330(...);
extern int thunk_FUN_11293bf0(...);
extern int thunk_FUN_11294d60(...);
extern int thunk_FUN_112951e0(...);
extern int thunk_FUN_11295de0(...);
extern int thunk_FUN_112967e0(...);
extern int thunk_FUN_11298190(...);
extern int thunk_FUN_11298310(...);
extern int thunk_FUN_11298430(...);
extern int thunk_FUN_11299700(...);
extern int thunk_FUN_11299c80(...);
extern int thunk_FUN_1129b3f0(...);
extern int thunk_FUN_1129e3b0(...);
extern int thunk_FUN_1129e450(...);
extern int thunk_FUN_1129e4e0(...);
extern int thunk_FUN_1129e8e0(...);
extern int thunk_FUN_1129fcc0(...);
extern int thunk_FUN_112a09f0(...);
extern int thunk_FUN_112a0ac0(...);
extern int thunk_FUN_112a0b40(...);
extern int thunk_FUN_112a1350(...);
extern int thunk_FUN_112a2890(...);
extern int thunk_FUN_112a28d0(...);
extern int thunk_FUN_112a2b10(...);
extern int thunk_FUN_112a2b80(...);
extern int thunk_FUN_112a32b0(...);
extern int thunk_FUN_112a3470(...);
extern int thunk_FUN_112a5390(...);
extern int thunk_FUN_112a7b20(...);
extern int thunk_FUN_112a7b70(...);
extern int thunk_FUN_112a7d20(...);
extern int thunk_FUN_112a7da0(...);
extern int thunk_FUN_112a7ea0(...);
extern int thunk_FUN_112a7f20(...);
extern int thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_112a97e0(...);
extern int thunk_FUN_112a9cf0(...);
extern int thunk_FUN_112a9da0(...);
extern int thunk_FUN_112aa2e0(...);
extern int thunk_FUN_112aa500(...);
extern int thunk_FUN_112aa790(...);
extern int thunk_FUN_112aa9f0(...);
extern int thunk_FUN_112ac820(...);
extern int thunk_FUN_112af4a0(...);
extern int thunk_FUN_112afbd0(...);
extern int thunk_FUN_112b0270(...);
extern int thunk_FUN_112b02d0(...);
extern int thunk_FUN_112b0310(...);
extern int thunk_FUN_112b0610(...);
extern int thunk_FUN_112b07a0(...);
extern int thunk_FUN_112b5970(...);
extern int thunk_FUN_112c35f0(...);
extern int thunk_FUN_112c48e0(...);
extern int thunk_FUN_112c49f0(...);
extern int thunk_FUN_112c4a90(...);
extern int thunk_FUN_112c7f50(...);
extern int thunk_FUN_112c7fc0(...);
extern int thunk_FUN_112c8b80(...);
extern int thunk_FUN_112c8cb0(...);
extern int thunk_FUN_112ea860(...);
extern int thunk_FUN_113b9ec0(...);
extern int thunk_FUN_113b9f60(...);
extern int thunk_FUN_113c7f60(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_113cfdb0(...);
extern int thunk_FUN_113cfe40(...);
extern int thunk_FUN_113cfe50(...);
extern int thunk_FUN_113cff40(...);
extern int thunk_FUN_113d0870(...);
extern int thunk_FUN_113d15c0(...);
extern int thunk_FUN_113d1a60(...);
extern int thunk_FUN_113d1ae0(...);
extern int thunk_FUN_113d1d90(...);
extern int thunk_FUN_113d39f0(...);
extern int thunk_FUN_113d43f0(...);
extern int thunk_FUN_113d4750(...);
extern int thunk_FUN_113d47c0(...);
extern int thunk_FUN_113d47d0(...);
extern int thunk_FUN_113d49e0(...);
extern int thunk_FUN_113d5510(...);
extern int thunk_FUN_113d6b60(...);
extern int thunk_FUN_113d6f50(...);
extern int thunk_FUN_113dde70(...);
extern int thunk_FUN_113ddee0(...);
extern int thunk_FUN_113deb50(...);
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
extern int thunk_FUN_1145d170(...);
extern int thunk_FUN_1145dd30(...);
extern int thunk_FUN_1145ddd0(...);
extern int thunk_FUN_1145de30(...);
extern int thunk_FUN_1145de60(...);
extern int thunk_FUN_1145eab0(...);
extern int thunk_FUN_1145eb70(...);
extern int thunk_FUN_1145ede0(...);
extern int thunk_FUN_1145f2e0(...);
extern int thunk_FUN_1145f8f0(...);
extern int thunk_FUN_1145f900(...);
extern int thunk_FUN_1145f920(...);
extern int thunk_FUN_1145f930(...);
extern int thunk_FUN_1145fa40(...);
extern int thunk_FUN_114601a0(...);
extern int thunk_FUN_11460230(...);
extern int thunk_FUN_11460290(...);
extern int thunk_FUN_11460420(...);
extern int thunk_FUN_114604d0(...);
extern int thunk_FUN_11460550(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148b586(...);
extern int thunk_FUN_1148b596(...);
extern int thunk_FUN_1148bc65(...);
extern __declspec(dllimport) int tolower(...);
extern int DAT_1186d2ee;
extern int DAT_1187d7f4;
extern int DAT_11881128;
extern int DAT_11881ac8;
extern int DAT_11882ff0;
extern int DAT_11883704;
extern int DAT_11884554;
extern int DAT_11884800;
extern int DAT_118850bc;
extern int DAT_118872c0;
extern int DAT_11889d24;
extern int DAT_1188db18;
extern int DAT_1188e99c;
extern int DAT_11895278;
extern int DAT_1189dabc;
extern int DAT_1189ea64;
extern int DAT_118bd5c0;
extern int DAT_118c9974;
extern int DAT_11921cf0;
extern int DAT_11993584;
extern int DAT_119bf4bc;
extern int DAT_119c36c8;
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
extern int DAT_119e4c18;
extern int DAT_119e8d20;
extern int DAT_121205b0;
extern int DAT_12120fe4;
extern int DAT_12120fe8;
extern int DAT_12120fec;
extern int DAT_12126b84;
extern int DAT_122f5600;
extern int DAT_122f563c;
extern int DAT_122f563d;
extern int DAT_122f564c;
extern int DAT_122f5674;
extern int DAT_122f5698;
extern int DAT_122f5840;
extern int DAT_122f5844;
extern int DAT_122f5c4c;
extern int DAT_122f5d24;
extern int DAT_122f5d98;
extern int DAT_122f5da0;
extern int DAT_122f5da8;
extern int DAT_122f5dcc;
extern int DAT_122f5de0;
extern int DAT_122f5e94;
extern int DAT_122f5ea4;
extern int DAT_122f5eac;
extern int DAT_122f5ebc;
extern int DAT_122f5ec8;
extern int DAT_122f6974;
extern int DAT_122f6978;
extern int DAT_122f697c;
extern int DAT_122f6b78;
extern int DAT_122f6b7c;
extern int DAT_122fb090;
extern int DAT_122fb0a0;
extern int _DAT_12120fd8;
extern int _DAT_12120fdc;
extern int _DAT_12120fe0;
extern int _DAT_122f5ea0;
extern int _DAT_122f69a8;
extern int _DAT_122f6b74;
extern int ghidra_vftable_DoublyLinkedListNode;
extern int ghidra_vftable_KeyValueCB;
extern int ghidra_vftable_KeyValueTagBodyCB;
extern int ghidra_vftable_MusicPlaybackQuality;
extern int ghidra_vftable_RAccountsVectorClock;
extern int ghidra_vftable_RAlarmClockListAlarms;
extern int ghidra_vftable_RAsyncSocketIOSessionCB;
extern int ghidra_vftable_RCRInParam;
extern int ghidra_vftable_RCRInParamDeepCopy;
extern int ghidra_vftable_RCRInParamShallowCopy;
extern int ghidra_vftable_RCROutParam;
extern int ghidra_vftable_RCROutParamDeepCopy;
extern int ghidra_vftable_RCRStreamParamRX;
extern int ghidra_vftable_RCRStringEmitter;
extern int ghidra_vftable_RCRStripNewlineParamRX;
extern int ghidra_vftable_RChunkedSocketWriter;
extern int ghidra_vftable_RControlAIOOp;
extern int ghidra_vftable_RCountWritableStream;
extern int ghidra_vftable_RDateTime;
extern int ghidra_vftable_RHTTPChunkedClient;
extern int ghidra_vftable_RHTTPRequestHeadersBuilder;
extern int ghidra_vftable_RIPNetStartListenerBase;
extern int ghidra_vftable_RIPNetStartListenerResponse;
extern int ghidra_vftable_RJsonDataBinding;
extern int ghidra_vftable_RJsonDataBindingInterface;
extern int ghidra_vftable_RJsonHandlerInterface;
extern int ghidra_vftable_RKVReport;
extern int ghidra_vftable_RKVReportDataAppenderCB;
extern int ghidra_vftable_RKeyValueEnumCB;
extern int ghidra_vftable_RKeyValuePairsQueryParams;
extern int ghidra_vftable_RKeyValueUrlPairs;
extern int ghidra_vftable_RLastFMClient;
extern int ghidra_vftable_RLastFMResultCB;
extern int ghidra_vftable_RMSRating;
extern int ghidra_vftable_RMSearchNotifyHandler;
extern int ghidra_vftable_RMediaReceiverRegistrar;
extern int ghidra_vftable_RReportCategoryInfo;
extern int ghidra_vftable_RReportCategoryStore;
extern int ghidra_vftable_RReportEventInterface;
extern int ghidra_vftable_RReportFileLoaderCB;
extern int ghidra_vftable_RReportFileParser;
extern int ghidra_vftable_RReportFileParserCB;
extern int ghidra_vftable_RReportManager;
extern int ghidra_vftable_RReportUploaderInfo;
extern int ghidra_vftable_RSOAPHeaderWriter;
extern int ghidra_vftable_RSOAPParametersWriter;
extern int ghidra_vftable_RSOAPWriter;
extern int ghidra_vftable_RSSLClientCacheEntry;
extern int ghidra_vftable_RSelectThread;
extern int ghidra_vftable_RSelectThreadInterface;
extern int ghidra_vftable_RSelectThreadUser;
extern int ghidra_vftable_RServicesDescriptorsDeserializer;
extern int ghidra_vftable_RSocketWriter;
extern int ghidra_vftable_RSubmitUsageMetrics;
extern int ghidra_vftable_RSubscriptionRenewal;
extern int ghidra_vftable_RSystemProperties;
extern int ghidra_vftable_RSystemTime;
extern int ghidra_vftable_RTimedJobScheduler;
extern int ghidra_vftable_RUpdateItemParser;
extern int ghidra_vftable_RUpdateItemParserCallback;
extern int ghidra_vftable_RUpdateItemXmlParserCB;
extern int ghidra_vftable_RUsageDataSharing;
extern int ghidra_vftable_RWritableStream;
extern int ghidra_vftable_RWritableStreamWithHeaders;
extern int ghidra_vftable_RXMLParserBase;
extern int ghidra_vftable_RXMLRPCFaultResultCB;
extern int ghidra_vftable_RXMLRPCResultCB;
extern int ghidra_vftable_RXMLRPCResultParser;
extern int ghidra_vftable_RXmlChunkExtractor;
extern int ghidra_vftable_RXmlWriter;
extern int ghidra_vftable_nonstd_expected_lite_bad_expected_access;
extern int ghidra_vftable_nonstd_variants_bad_variant_access;
extern int ghidra_vftable_sonos_time_BootClock;
extern int ghidra_vftable_sonos_time_IClock;
extern int ghidra_vftable_std_Ref_count_obj2;
extern int ghidra_vftable_std_exception;
extern int in_EAX;
extern int in_stack_00000018;
extern int unaff_EDI;
extern undefined1 LAB_1000b0f5[];
extern undefined1 LAB_10021cba[];
extern undefined1 LAB_10032394[];
extern undefined1 LAB_10041673[];
extern undefined1 LAB_1005a3da[];
extern undefined1 LAB_1005a4d9[];
extern undefined1 LAB_100730c4[];
extern undefined1 LAB_1007cb1f[];
extern undefined1 LAB_10087e25[];
extern undefined1 LAB_1008bb79[];
extern undefined1 LAB_10092f14[];
extern undefined1 LAB_1009926a[];
extern undefined1 LAB_1122e8ed[];
extern undefined1 LAB_1124887e[];
extern undefined1 LAB_11253733[];
extern undefined1 LAB_1125bb6a[];
extern undefined1 LAB_1125bb78[];
extern undefined1 LAB_1126491f[];
extern undefined1 LAB_11264df1[];
extern undefined1 LAB_11279f9d[];
extern undefined1 LAB_11289859[];
extern undefined1 LAB_1128a38a[];
extern undefined1 LAB_112995cd[];
extern undefined1 LAB_112a51d5[];
extern undefined1 LAB_112a6305[];
extern undefined1 LAB_112ab8bb[];
extern undefined1 LAB_117ccfe0[];
extern undefined1 LAB_117cdc8d[];
extern undefined1 LAB_117cdcdd[];
extern undefined1 LAB_117cf0cd[];
extern undefined1 LAB_117cf1dd[];
extern int *PTR_DAT_12120e30;
extern int *PTR_LAB_119e5a68;
extern int *PTR_s_https___www__119e5428;
extern int *PTR_s_invalid_119e5a00;
extern int *PTR_vftable_12120e90;
extern int *stack0x00000008;
extern int *stack0xfffffff4;
extern int *stack0xfffffffc;
extern void *ExceptionList;
struct s { char _pad; s(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int urn; };
typedef void *BLAHBLAHBLAH;
typedef void *CONTENT;
typedef void *DELETE;
typedef void *DOCTYPE;
typedef void *DTD;
typedef void *E9;
typedef void *EN;
typedef void *ERROR;
typedef void *FACEDOWN;
typedef void *GET;
typedef void *HEAD;
typedef void *HORIZONTAL;
typedef void *HORIZONTAL_LEFT;
typedef void *HORIZONTAL_RIGHT;
typedef void *HORIZONTAL_WALL_MOUNTED;
typedef void *HTML;
typedef void *HTTP_GONE;
typedef void *HWND;
typedef void *INVALID;
typedef void *INVERTED;
typedef void *LOCK;
typedef void *LPARAM;
typedef void *LPLONG;
typedef void *NOTIFY;
typedef void *OPTIONS;
typedef void *PATCH;
typedef void *POST;
typedef void *PUBLIC;
typedef void *PUT;
typedef void *RTF;
typedef void *SEARCH;
typedef void *SONOSMULTIPARTBOUNDARY;
typedef void *SSL;
typedef void *TRACE;
typedef void *TYPE;
typedef void *UNDEFINED;
typedef void *UNKNOWN;
typedef void *UNLOCK;
typedef void *UNSUBSCRIBE;
typedef void *UNSUPPORTED;
typedef void *VERTICAL_ABOVE;
typedef void *VERTICAL_BELOW;
typedef void *VERTICAL_TAG_LEFT;
typedef void *VERTICAL_TAG_RIGHT;
typedef void *VERTICAL_WALL_LEFT;
typedef void *VERTICAL_WALL_MOUNTED;
typedef void *VERTICAL_WALL_RIGHT;
typedef void *W3C;
typedef void *WARNING;
typedef void *WD100;
typedef void *X;
typedef void *X_;
struct Adding { char _pad; Adding(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct After { char _pad; After(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Anonymous { char _pad; Anonymous(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AppLink { char _pad; AppLink(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AutoUpdate { char _pad; AutoUpdate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Body { char _pad; Body(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Can { char _pad; Can(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct CloseHandle { char _pad; CloseHandle(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Content { char _pad; Content(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Corr { char _pad; Corr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct CurrentURIMetaData { char _pad; CurrentURIMetaData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DeviceLink { char _pad; DeviceLink(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Diagnostics { char _pad; Diagnostics(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct EnqueuedURIMetaData { char _pad; EnqueuedURIMetaData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct EnqueuedURIsMetaData { char _pad; EnqueuedURIsMetaData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Envelope { char _pad; Envelope(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ErrorType { char _pad; ErrorType(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct File { char _pad; File(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Function { char _pad; Function(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Globals { char _pad; Globals(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Header { char _pad; Header(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Id { char _pad; Id(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Initializer { char _pad; Initializer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct List { char _pad; List(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Losing { char _pad; Losing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct MService { char _pad; MService(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct NetInit { char _pad; NetInit(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Ordinal_111 { char _pad; Ordinal_111(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Ordinal_3 { char _pad; Ordinal_3(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Ordinal_7 { char _pad; Ordinal_7(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct PostMessageA { char _pad; PostMessageA(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Preinstall { char _pad; Preinstall(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Preload { char _pad; Preload(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RadioList { char _pad; RadioList(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Received { char _pad; Received(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ReleaseSemaphore { char _pad; ReleaseSemaphore(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Retry { char _pad; Retry(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Scheduling { char _pad; Scheduling(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ServerNetInit { char _pad; ServerNetInit(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SetEvent { char _pad; SetEvent(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Setting { char _pad; Setting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Sleep { char _pad; Sleep(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Software { char _pad; Software(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Sonos { char _pad; Sonos(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SoundLab { char _pad; SoundLab(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Stateless { char _pad; Stateless(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Success { char _pad; Success(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Svc { char _pad; Svc(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Switch { char _pad; Switch(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct System { char _pad; System(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct TServer { char _pad; TServer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct TerminateThread { char _pad; TerminateThread(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Transitional { char _pad; Transitional(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct UserId { char _pad; UserId(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WSAEventSelect { char _pad; WSAEventSelect(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ZPSupportInfo { char _pad; ZPSupportInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ZPSupportItem { char _pad; ZPSupportItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ZonePlayer { char _pad; ZonePlayer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered_Bulk { char _pad; /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11227a70(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11227a80(undefined4 param_2,undefined4 param_3,undefined4 *param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11227a90(undefined4 param_2,undefined4 param_3,undefined4 *param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11227ab0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_1122a790(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_1122a7a0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall FUN_1122a900(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __thiscall FUN_1122a920(char *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1122a940(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_1122ae20(int param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1122af20(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1122b1f0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1122bd30(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1122bd40(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1122bd50(int *param_2,int *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1122c2d0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1122df50(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1122e230(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1122e240(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1122eed0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1122f160(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1122f170(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1122f180(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1122fec0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11230bc0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11230c30(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11230d20(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint * __thiscall FUN_112329b0(void *param_2,size_t param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_112333f0(undefined4 param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_11233860(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_11233870(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint * __thiscall FUN_112341d0(char *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112343a0(int param_2,char param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11235520(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11235be0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11236140(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11236170(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11236190(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112361b0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112361d0(char param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_11236550(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_11236720(int param_2,int param_3,int *param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_11236c80(int param_2,int param_3,int *param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_11237130(int param_2,int param_3,int *param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11237fd0(char *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __thiscall FUN_112382a0(undefined4 param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_11239b70(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1123ad50(undefined4 *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1123b0c0(int *param_2,char param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_1123b200(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1123b2f0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined1 param_6,undefined4 param_7,undefined4 param_8); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1123d4b0(undefined4 param_2,undefined2 param_3,undefined2 param_4,undefined4 param_5); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11240440(code *param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_112408d0(byte param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11240b70(undefined4 param_2,char param_3,char param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11241820(undefined4 *param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11241a90(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_11241c40(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11241e70(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11241ea0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11242d10(undefined4 param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11243c10(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11243eb0(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11244c00(char *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11244d40(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11244da0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112487f0(undefined1 *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11248fc0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11248fe0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_112490b0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1124a300(char *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1124b740(int param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_1124c530(char *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_1124c6b0(char *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1124cef0(undefined4 *param_2,undefined2 *param_3,undefined4 param_4,
            undefined4 param_5,undefined1 *param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1124d220(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_1124d650(int param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ size_t __thiscall FUN_1124d6c0(void *param_2,uint param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1124d8f0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1124e8d0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1124ea80(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1124f380(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1124f4a0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_1124ff00(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_11250100(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112502a0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112502c0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11250570(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11252890(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11252f30(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11253d90(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11253db0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11253dc0(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11253dd0(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11255a10(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11255ab0(uint *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11255cd0(uint *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11256980(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11256c00(uint *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint * __thiscall FUN_11257340(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_112575a0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11257940(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11257bd0(int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11257cb0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11257e40(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11257fd0(uint param_2,char *param_3,char *param_4,char *param_5); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11258240(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11258ac0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_11258f00(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11259370(undefined4 param_2,undefined4 param_3,int param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1125a240(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1125bef0(char *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1125c810(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1125cbe0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_1125cc00(uint *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_1125cc30(uint *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1125d830(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1125d8c0(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall FUN_11262350(ushort param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11262390(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11262900(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ ushort __thiscall FUN_112629e0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ short __thiscall FUN_11262b20(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ ushort __thiscall FUN_11264210(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11264640(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __thiscall FUN_11264860(char *param_2,char *param_3,uint param_4,undefined1 param_5); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11264c70(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11264cc0(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11264d70(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11264da0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11264e60(byte param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11265e80(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_112663b0(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined2 param_6,undefined2 param_7); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112673f0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_112674a0(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11267500(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11268070(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112691a0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112691c0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_11269420(ushort param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_112696e0(int param_2,int *param_3,int *param_4,int param_5,int param_6,char param_7); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1126b600(undefined *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1126b630(ushort param_2,char param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1126bad0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1126bae0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1126bb00(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1126bb20(char *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1126bbc0(undefined4 param_2,undefined1 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1126bbe0(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined2 param_6,undefined2 param_7); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1126bf00(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1126bf10(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1126ce20(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1126cf40(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1126cfc0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1126cfd0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1126d0f0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1126d110(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1126dd70(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1126ddd0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1126dde0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1126de70(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1126de80(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1126df10(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_1126e420(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_1126e440(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1126f090(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1126f0a0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1126f5f0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1126f600(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1126f670(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1126f920(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1126f930(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_1126fb70(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11270280(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11270290(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11272170(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11272420(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11272500(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112725a0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_112725d0(uint param_2,undefined4 param_3,char param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112726c0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_11272a70(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11272b90(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11272bd0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11272ca0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11273c30(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_11273d90(short *param_2,short param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11273f50(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11274090(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11274360(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112747c0(char param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112747f0(undefined8 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112752f0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11275860(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __thiscall FUN_11275870(char *param_2,undefined4 *param_3,uint param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112760c0(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11276130(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11276230(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11276240(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11276250(int param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11276510(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112767f0(int param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11276ea0(char *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112771b0(char *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __thiscall FUN_11278550(int param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11278610(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11278a60(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11278a70(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11278aa0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11278ad0(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11278ae0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11278af0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11278db0(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11278dc0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11278de0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11278df0(undefined4 param_2,undefined4 param_3,undefined4 *param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11278e50(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11278e70(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11279160(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11279240(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_11279680(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11279c10(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11279e40(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_11279f50(undefined4 *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_1127a350(undefined1 *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_1127a3e0(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_1127a420(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_1127a710(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_1127ae00(void *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_1127ae80(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_1127aff0(undefined4 *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1127b5f0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1127b750(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_1127b9b0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1127bba0(char *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __thiscall FUN_1127bf40(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_1127cc50(uint param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1127d010(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1127d090(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1127d0e0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1127d9d0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined2 param_7,undefined2 param_8,
            undefined4 param_9); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1127da70(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined2 param_7,undefined2 param_8,
            undefined4 param_9); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1127e6a0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1127eae0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112801b0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11280270(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112802c0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11280340(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11280380(undefined2 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11280390(undefined2 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112803b0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112803f0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11281990(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_112831e0(ushort param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11283300(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined1 *param_5); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11283910(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11283b00(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11283cd0(short param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11283fa0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11283fb0(char *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined ** __thiscall FUN_11284430(undefined1 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11285890(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11285920(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_112859c0(undefined4 param_2,undefined4 param_3,undefined1 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11285a50(int param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112870b0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112870c0(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11287730(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11288800(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11288f50(void *param_2,size_t param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11289130(int param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11289160(int param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_11289740(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11289930(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_1128a2a0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall FUN_1128a430(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1128a450(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall FUN_1128a460(undefined8 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8 * __thiscall FUN_1128a480(undefined4 param_2,undefined8 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall FUN_1128a4a0(undefined1 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall FUN_1128a4c0(undefined4 param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall FUN_1128a4d0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1128a4f0(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __thiscall FUN_1128a5c0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1128a620(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1128a630(undefined8 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1128a650(undefined1 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1128a660(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1128a6c0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1128a6e0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1128a700(undefined8 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1128a770(undefined1 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __thiscall FUN_1128ac40(char *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __thiscall FUN_1128aca0(char *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __thiscall FUN_1128ad00(char *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __thiscall FUN_1128ad60(char *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_1128adc0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1128b550(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1128b560(undefined8 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1128b5d0(undefined1 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_1128b5e0(int param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1128bd90(int param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1128bfd0(undefined4 *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1128c170(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1128ca30(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1128cd30(char param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1128cd70(byte param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1128d3e0(int param_2,uint param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1128d570(undefined4 *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1128d9d0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1128de10(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1128e0f0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1128f290(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1128f2d0(undefined4 param_2,undefined4 param_3,undefined1 param_4,
            undefined1 param_5,undefined1 param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_1128f350(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_1128f500(undefined4 param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11291e30(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_11291e80(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11293f50(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11293f90(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11294150(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11294170(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11294180(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11294190(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_112941b0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_112941c0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_112941d0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_112941f0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11294210(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11294220(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11294800(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_112948e0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_112948f0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11294980(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11294990(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11294a40(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11294a60(int param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11295710(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112957d0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11295840(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11296670(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_112966c0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_11297c40(byte param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_11297ce0(byte param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11297e80(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11297fc0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11298510(int param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11298560(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_11298650(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11298b50(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11299590(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11299d70(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11299d80(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1129a520(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1129a560(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1129a750(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_1129b750(uint param_2,uint param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1129bcf0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1129bd90(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_1129c3d0(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_1129c3e0(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1129c3f0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1129c500(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1129c580(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1129c600(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_1129ca10(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1129cea0(undefined4 *param_2); };
using namespace std;
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11227aa0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11227ad0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11227af0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11227b00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11227b10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11227b20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11227e80(undefined4 *param_1);
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
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_1122b210(undefined1 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1122b7e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1122b7f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1122b930(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1122b950(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1122bd00(void);
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
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_1122f190(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11230890(void);
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
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11234380(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11234500(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __cdecl strrchr(char *_Str,int _Ch);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11235940(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11235bd0(undefined4 *param_1);
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
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11241af0(int *param_1);
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
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_112534c0(int *param_1);
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
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_11267480(void);
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
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1126ce50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1126cfe0(undefined4 *param_1);
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
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1126f000(void);
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
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112752e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11275330(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11275440(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11275450(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_112755b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_112755c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11275c10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11275ea0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11275ec0(int param_1);
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
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11278d90(undefined4 *param_1);
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
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112797f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11279800(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_112798b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112798f0(undefined4 *param_1,undefined4 *param_2,int param_3);
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
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1127d760(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1127d770(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __fastcall FUN_1127d980(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1127d9b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1127d9c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1127dcd0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_1127dfd0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1127e3c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1127e7b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1127eb20(int param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1127f170(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_1127f2a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1127fb80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11280430(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112810a0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11281170(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_11281340(undefined1 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_112817e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112818b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_112818c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __fastcall FUN_11281e00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __fastcall FUN_11281f40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11282d40(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11282f70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_11283180(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11283210(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_112833a0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11283470(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112856a0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11285ac0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11286540(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11286570(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_112869d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112869f0(undefined4 param_1,undefined1 *param_2,undefined4 param_3,undefined2 param_4,
                 int param_5,undefined4 param_6);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_11287090(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112870d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_112878a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_112878f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11287b00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11287c80(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11287c90(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_11287ca0(byte *param_1,byte *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined * FUN_112884b0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined * __fastcall FUN_11288da0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined * __fastcall FUN_11288dc0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11288de0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11288e00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11288f30(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11288f40(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11289190(void *param_1,uint param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_112891d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1128a260(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1128a280(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1128a420(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1128a5e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1128a5f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1128a600(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1128a610(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1128a670(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1128a680(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1128a690(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1128a6a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1128a6b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1128a790(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1128a7a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1128aa20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1128aa70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1128ab80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1128ac00(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1128ac10(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1128ac20(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1128ae30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1128ae40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1128ae50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1128ae60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1128ae70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1128ae80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte __fastcall FUN_1128af20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1128b700(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1128b710(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1128b780(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1128b8d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1128bb80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1128bbb0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1128bbe0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1128bbf0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1128bde0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1128bdf0(undefined1 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1128be00(undefined1 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1128be10(undefined1 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1128be20(undefined1 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1128be30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte __fastcall FUN_1128c1a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte __fastcall FUN_1128c1b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_1128c1c0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_1128c210(undefined4 *param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte __fastcall FUN_1128c270(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1128c280(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte __fastcall FUN_1128c2a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1128c320(undefined4 param_1,undefined4 param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1128c5f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1128c600(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1128c610(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1128c620(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1128ca60(undefined1 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1128ca70(undefined1 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1128ca80(undefined1 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1128cb00(undefined1 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1128cd60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte __fastcall FUN_1128cda0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1128d800(undefined4 param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1128d820(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1128d830(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1128d840(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1128d850(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1128d860(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1128d870(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1128d880(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1128d890(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1128d9c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1128dc00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte __fastcall FUN_1128e080(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1128e090(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1128ea70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1128f460(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_112910d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_112910f0(undefined4 param_1,uint param_2,uint *param_3,int param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11291170(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11292b30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11292d30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_11292d60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11292f60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11292fb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11292fc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11292fe0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11293200(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11293320(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_11293940(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11293ae0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11293b10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11293bc0(char *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11293df0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11293f70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11293fb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11294230(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11294250(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11294260(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11294270(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11294390(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112943b0(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112943d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_112943e0(int param_1,uint *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11294630(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11294640(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11294650(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11294660(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11294670(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11294680(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11294690(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112946a0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112946c0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112946e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112946f0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11294710(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11294730(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11294740(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11294750(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11294760(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11294770(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11294780(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11294790(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112947a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112947b0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112947c0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112947d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112947e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112947f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11294900(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11294920(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11294930(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11294b50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11294b70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11294e20(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11295010(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11295020(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_11295110(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11295390(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11295400(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11295410(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11295420(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11295430(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11295440(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11295450(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11295460(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11295470(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_11295780(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112957b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_112957c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11295850(undefined1 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11295860(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11295880(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112958a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_112958c0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * FUN_11295fd0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11296240(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_11296290(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_112967c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_112967d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_112967f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11296800(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11296c80(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11296c90(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11297690(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_112976c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_112976e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_112976f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11297850(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_112979b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112979c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112979d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_112979e0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11297a60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11297a70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11298400(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11298410(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11298420(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11298440(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11298640(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11298b40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11298cd0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_11299810(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_11299820(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11299c70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11299cb0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_11299cc0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_11299ce0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_11299d00(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_11299d20(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11299d60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11299d90(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11299da0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11299db0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1129a4e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_1129a4f0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1129a530(undefined1 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1129a540(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1129a550(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129a570(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1129a580(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129a930(char *param_1,undefined4 param_2,undefined4 param_3,uint *param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1129ad30(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1129b350(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1129b3c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1129b830(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129be70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129be80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129be90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129bea0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129beb0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129bec0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129bed0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129bee0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129bef0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129bf00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129bf10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129bf20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129bf30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129bf40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129bf50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129bf60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129bf70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129bf80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129bf90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129bfa0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129bfb0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129bfc0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129bfd0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129bfe0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129bff0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129c000(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129c010(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129c020(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129c030(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129c040(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1129c050(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129c060(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129c070(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1129c080(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129c090(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ ushort FUN_1129c0b0(undefined4 *param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129c270(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129c280(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129c290(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1129c2a0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129c2b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129c2c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129c2d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129c2e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129c2f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129c300(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129c310(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129c320(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129c330(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129c340(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129c350(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129c360(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129c370(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129c380(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129c390(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129c3a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129c3b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129c3c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1129c4d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1129c7a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1129c7b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1129c7c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1129c7d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1129ca80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1129ca90(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1129ce30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ ushort FUN_1129cf70(byte param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_1129d220(undefined1 param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1129d3b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1129d3c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1129d410(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1129d420(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1129d430(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1129d450(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1129d460(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1129d470(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1129d480(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ ushort FUN_1129d490(byte param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1129da10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_1129da20(undefined1 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1129da30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1129da50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1129da70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1129da80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1129da90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1129daa0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129ddd0(byte *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_1129de20(int *param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1129df50(int *param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * FUN_1129e080(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_1129e5b0(int param_1,uint param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1129ee40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_1129f180(int *param_1,int param_2,uint param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8 FUN_1129f3d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1129f4c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129f680(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1129f690(void *param_1,void *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_1129f830(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1129fb80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1129fbc0(int param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1129fbe0(int param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1129fc00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1129ff40(int param_1,void *param_2,uint param_3,undefined4 param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char FUN_1129ffe0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112a0030(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112a09f0(int param_1,undefined1 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_112a0a00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112a0d50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112a1030(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112a2220(undefined4 *param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_112a3310(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112a3330(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112a3390(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112a33b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112a33d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112a33f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112a3400(int param_1,int param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112a34a0(int param_1,int *param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112a34e0(int param_1,int *param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112a3530(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_112a4000(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112a4280(int param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_112a43b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_112a4560(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_112a4c60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112a4e60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112a5100(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112a5160(int param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112a5180(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112a51a0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112a61a0(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_112a6230(undefined4 *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_112a62a0(undefined4 *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112a6330(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_112a6430(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_112a6460(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_112a6490(ushort *param_1,ushort *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_112a64c0(ushort *param_1,ushort *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112a64f0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112a6520(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112a6550(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112a6560(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_112a6630(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_112a6670(int param_1,undefined1 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_112a66d0(char *param_1,long *param_2,int param_3,int param_4);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ undefined4 FUN_112a76d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112a7e20(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112a7e30(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112a8260(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_112a8c50(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112a8c60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_112a9150(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112a9620(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112a9760(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112a9b80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112a9d80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112a9de0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_112a9e30(char *param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112aa040(int param_1,undefined1 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112aa050(int param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112aa090(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,char *param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112aa2a0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112aa2b0(int param_1,char *param_2,char *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112aa820(int param_1,char *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112aa900(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112aa990(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112aa9b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112aa9d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_112aa9e0(void);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_112aae60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112ab3f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112ab410(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_112ab730(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112ab760(undefined4 param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112ab780(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112ab9d0(undefined4 param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_112abdb0(int param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_112ac150(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_112ac180(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_112ac380(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_112ac490(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_112ac6b0(int param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_112ac8c0(undefined4 param_1,size_t param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_112ac9c0(undefined4 param_1,void *param_2,size_t param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_112ad180(undefined4 param_1,int *param_2);
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

undefined4 __fastcall FUN_11227aa0(undefined4 param_1)

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

undefined4 * __fastcall FUN_11227e80(undefined4 *param_1)

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
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1122b210; body size 15 bytes.
#line 1 "ENTRY_1122b210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_1122b210(undefined1 *param_1)

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

void FUN_1122bd00(void)

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
  
  if (param_2 != (int *)(param_3)) {
    puVar1 = (undefined4 *)((undefined4 *)param_2[1]);
    iVar7 = (int)(0);
    *puVar1 = (undefined4)(param_3);
    param_3[1] = (int)puVar1;
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
      param_2[6] = 0;
      param_2[7] = 0xf;
      *(undefined1 *)(param_2 + 2) = 0;
      thunk_FUN_1148a50e(param_2,0x20);
      iVar7 = (int)(iVar7 + 1);
      param_2 = (int *)(piVar3);
    } while (piVar3 != (int *)(param_3));
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - iVar7;
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_3);
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
  param_1[0x3162] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSubmitUsageMetrics);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1122e0f0; body size 30 bytes.
#line 1 "ENTRY_1122e0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1122e0f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
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
        psVar2[6] = 0;
        psVar2[7] = 0;
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

undefined1 FUN_1122f190(void)

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

void FUN_11230890(void)

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


// Reference entry 11230bc0; body size 81 bytes.
#line 1 "ENTRY_11230bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11230bc0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
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
  param_1[0x1c68] = param_7;
  param_1[0x1c69] = param_8;
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
      param_1[2] = uVar2;
      if (_Memory == (uint *)(param_1) + 3) {
        *(undefined1 *)(param_1 + 3) = 0;
      }
      else {
        free(_Memory);
      }
    }
    memcpy((void *)(param_1[2] + param_1[1]),param_2,_Size);
    *(undefined1 *)(param_1[2] + param_1[1] + _Size) = 0;
    param_1[1] = param_1[1] + _Size;
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint *)(param_1);
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
    param_1[2] = uVar1;
    if (_Memory != (uint *)(param_1) + 3) {
      free(_Memory);
      return;
    }
    *(undefined1 *)(param_1 + 3) = 0;
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
  param_1[3] = param_2;
  param_1[4] = param_3;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXMLRPCResultParser);
  param_1[2] = 0;
  param_1[5] = 0xff0000;
  param_1[0xc0e] = 0;
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
  param_1[1] = 0;
  thunk_FUN_11285a90();
  return;
}


// Reference entry 11236140; body size 36 bytes.
#line 1 "ENTRY_11236140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11236140(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
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
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}


// Reference entry 11236190; body size 20 bytes.
#line 1 "ENTRY_11236190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11236190(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(3);
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}


// Reference entry 112361b0; body size 20 bytes.
#line 1 "ENTRY_112361b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_112361b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(2);
  param_1[1] = param_2;
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
        param_1[0xf] = 1;
        (**(code **)(param_1[0x10] + 4))("<member><name>",0xe,0);
        break;
      case 1:
        pcVar4 = (char *)((char *)*param_1);
        param_1[0xf] = 2;
        pcVar1 = (char *)(pcVar4 + 1);
        do {
          cVar3 = (char)(*pcVar4);
          pcVar4 = (char *)(pcVar4 + 1);
        } while (cVar3 != '\0');
        (**(code **)(param_1[0x10] + 4))(*param_1,(int)pcVar4 - (int)pcVar1,1);
        break;
      case 2:
        param_1[0xf] = 3;
        (**(code **)(param_1[0x10] + 4))("</name>",7,0);
        break;
      case 3:
        param_1[0xf] = 4;
        break;
      case 4:
        param_1[0xf] = 5;
        (**(code **)(param_1[0x10] + 4))("</member>",9,0);
        break;
      default:
        param_1[0xf] = 6;
      }
    }
    iVar5 = (int)(param_1[0xf]);
    bVar8 = (bool)(iVar2 != iVar5);
    iVar2 = (int)(iVar5);
  } while ((bVar8) || (iVar7 != 0));
  if (param_4 != (int *)0x0) {
    *param_4 = (int)(iVar6);
    iVar5 = (int)(param_1[0xf]);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(iVar5 != 6);
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
  param_1[0x2042] = 0;
  param_1[0x4084] = 0;
  param_1[0x2001] = 0;
  param_1[0x4043] = 0;
  thunk_FUN_111d7620(param_1 + 0x40c5);
  param_1[0x4cca] = 0;
  return;
}


// Reference entry 112395a0; body size 29 bytes.
#line 1 "ENTRY_112395a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112395a0(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  param_1[0x2001] = 0;
  param_1[0x2042] = 0;
  param_1[0x2083] = 0;
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
  param_1[0x32] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1123a130; body size 91 bytes.
#line 1 "ENTRY_1123a130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1123a130(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x3c] = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  param_1[0x3e] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[10] = 0xf;
  param_1[0x3d] = 0xf;
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
        param_2[0x34] = 0x7fffffff;
        param_2[0x35] = 0;
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
    puVar2[0x32] = 0;
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
  puVar2[0x32] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(puVar2);
}


// Reference entry 1123b2f0; body size 241 bytes.
#line 1 "ENTRY_1123b2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1123b2f0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined1 param_6,undefined4 param_7,undefined4 param_8)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x494));
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(operator_new(0x100));
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      *(undefined2 *)(puVar1 + 4) = 0;
      puVar1[9] = 0;
      puVar1[10] = 0xf;
      *(undefined1 *)(puVar1 + 5) = 0;
      puVar1[0x36] = 0;
      puVar1[0x37] = 0;
      puVar1[0x3c] = 0;
      puVar1[0x3d] = 0xf;
      *(undefined1 *)(puVar1 + 0x38) = 0;
      puVar1[0x3e] = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x494) = puVar1[0x36];
  }
  *puVar1 = (undefined4)(param_2);
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  *(undefined2 *)(puVar1 + 3) = 0;
  *(undefined1 *)((int)puVar1 + 0xf) = 0;
  *(undefined1 *)((int)puVar1 + 0xe) = param_6;
  puVar1[0xb] = 0;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  thunk_FUN_1145c250((int)puVar1 + 0x31,param_5,0x81);
  puVar1[0x34] = param_7;
  puVar1[0x35] = param_8;
  puVar1[0x36] = 0;
  puVar1[0x37] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(puVar1);
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
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 0x10) = 0;
    *(undefined1 *)(puVar1 + 0x1b) = 0;
    puVar1[0x123] = 0;
    puVar1[0x124] = 0;
    puVar1[0x125] = 0;
    puVar1[0x126] = 0;
    puVar1[0x127] = 0;
    *(undefined2 *)(puVar1 + 0x128) = 0;
    puVar1[0x129] = 0;
    puVar1[0x12a] = 0;
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
  param_1[1] = 0;
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
  undefined4 *puVar1;
  undefined4 *_Memory;
  int iVar2;
  void **ppvVar3;
  uint uVar4;
  int iVar5;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = (undefined1 *)(LAB_117ccfe0);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  uStack_8 = (undefined4)(0);
  ppvVar3 = (void **)(&pvStack_10);
  _Memory = (undefined4 *)(*(undefined4 **)(param_1 + 0x1c));
  pvStack_10 = (void *)(ExceptionList);
  while (ExceptionList = ppvVar3, _Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)*_Memory);
    free(_Memory);
    ppvVar3 = (void **)(ExceptionList);
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
  ExceptionList = (void *)(pvStack_10);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
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
      param_1[0xf] = 0;
    }
    if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[2])(1);
      param_1[2] = 0;
    }
  }
  param_1[4] = 3;
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
  param_1[0xd] = *piVar1;
  param_1[0xe] = param_1[0xc];
  thunk_FUN_1145ad70(piVar1,iVar3);
  thunk_FUN_1145ad70(param_1 + 0xd,iVar2);
  iVar3 = (int)((**(code **)(*param_1 + 0x2c))());
  if (iVar3 == 0) {
    param_1[4] = 2;
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
  }
  if (iVar3 == 0xb) {
    param_1[4] = 1;
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
  }
  (**(code **)(*param_1 + 0x34))(iVar3);
  if (param_1[0xf] != 0) {
    thunk_FUN_112b5970(param_1[0xf]);
    param_1[0xf] = 0;
  }
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1);
    param_1[2] = 0;
  }
  param_1[4] = 3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar3);
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
  param_1[1] = 0;
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
  param_1[1] = 0;
  thunk_FUN_11247c50(param_2,param_3,param_4);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11244dd0; body size 16 bytes.
#line 1 "ENTRY_11244dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11244dd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RKeyValueUrlPairs);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11244df0; body size 13 bytes.
#line 1 "ENTRY_11244df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11244df0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
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
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
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
  param_1[2] = 0;
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
  param_1[1] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_KeyValueCB);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11248fe0; body size 23 bytes.
#line 1 "ENTRY_11248fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11248fe0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_KeyValueTagBodyCB);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11249000; body size 16 bytes.
#line 1 "ENTRY_11249000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11249000(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11249020; body size 51 bytes.
#line 1 "ENTRY_11249020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11249020(undefined4 *param_1)

{
  thunk_FUN_11273f80();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RKVReport);
  param_1[4] = 0;
  param_1[5] = 0;
  thunk_FUN_1145c930(param_1 + 4,0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 112490b0; body size 27 bytes.
#line 1 "ENTRY_112490b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_112490b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
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
  param_1[1] = 0;
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
  param_1[1] = (uint)&ghidra_vftable_RAsyncSocketIOSessionCB;
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
  param_1[0x1841] = 0;
  param_1[0x1842] = 0;
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
  param_1[6] = 0;
  thunk_FUN_11285a10();
  param_1[0x14] = 0;
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
  param_1[6] = 0;
  thunk_FUN_11285a10();
  param_1[0x14] = 0;
  *(undefined2 *)((int)param_1 + 0x55) = 0x100;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCRInParamDeepCopy);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1124de30; body size 72 bytes.
#line 1 "ENTRY_1124de30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1124de30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCRInParam);
  param_1[6] = 0;
  thunk_FUN_11285a10();
  param_1[0x14] = 0;
  *(undefined2 *)((int)param_1 + 0x55) = 0x100;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCRInParamShallowCopy);
  param_1[0x16] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1124de90; body size 26 bytes.
#line 1 "ENTRY_1124de90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1124de90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCROutParam);
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0x32) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1124deb0; body size 38 bytes.
#line 1 "ENTRY_1124deb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1124deb0(undefined4 *param_1)

{
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0x32) = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCROutParamDeepCopy);
  param_1[0xd] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1124e8d0; body size 96 bytes.
#line 1 "ENTRY_1124e8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1124e8d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[8] = param_2;
  param_1[9] = param_3;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSOAPHeaderWriter);
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0x30b) = 0x101;
  *(undefined1 *)(param_1 + 0xb) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1124ea30; body size 60 bytes.
#line 1 "ENTRY_1124ea30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1124ea30(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSOAPParametersWriter);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1124ea80; body size 18 bytes.
#line 1 "ENTRY_1124ea80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1124ea80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSOAPWriter);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1124eb40; body size 14 bytes.
#line 1 "ENTRY_1124eb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1124eb40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCRInParam);
  param_1[7] = (uint)&ghidra_vftable_RCRStringEmitter;
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
  param_1[uVar5] = '\0';
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
}


// Reference entry 112532d0; body size 7 bytes.
#line 1 "ENTRY_112532d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_112532d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x2d0));
}


// Reference entry 112534c0; body size 653 bytes.
#line 1 "ENTRY_112534c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_112534c0(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  char acStack_44c [68];
  char acStack_408 [1028];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)acStack_44c);
  if ((((param_1[0x14] == 0) && ((char)param_1[0x15] == '\0')) &&
      (cVar1 = thunk_FUN_11252970(), cVar1 == '\0')) &&
     (cVar1 = thunk_FUN_11252ac0(), cVar1 == '\0')) {
    uVar3 = (undefined4)((**(code **)(*param_1 + 8))("CurrentURIMetaData",0x12));
    iVar4 = (int)(thunk_FUN_113b9f60(uVar3));
    if (iVar4 != 0) {
      uVar3 = (undefined4)((**(code **)(*param_1 + 8))("EnqueuedURIMetaData",0x13));
      iVar4 = (int)(thunk_FUN_113b9f60(uVar3));
      if (iVar4 != 0) {
        uVar3 = (undefined4)((**(code **)(*param_1 + 8))("EnqueuedURIsMetaData",0x14));
        iVar4 = (int)(thunk_FUN_113b9f60(uVar3));
        if (iVar4 != 0) {
          uVar3 = (undefined4)(thunk_FUN_11252830());
          uVar5 = (undefined4)((**(code **)(*param_1 + 8))(uVar3));
          thunk_FUN_11249230(uVar5,uVar3);
          goto LAB_11253733;
        }
      }
    }
    pcVar6 = (char *)((char *)thunk_FUN_11252830());
    pcVar6 = (char *)(strstr(pcVar6,"parentID=\""));
    if (pcVar6 == (char *)0x0) {
      acStack_408[0] = '\0';
    }
    else {
      uVar7 = (uint)(0);
      pcVar8 = (char *)(pcVar6 + 0xc);
      do {
        cVar1 = (char)(pcVar8[-2]);
        if ((cVar1 == '\0') || (cVar1 == '\"')) break;
        acStack_408[uVar7] = cVar1;
        cVar1 = (char)(pcVar8[-1]);
        if ((cVar1 == '\0') || (cVar1 == '\"')) {
          uVar7 = (uint)(uVar7 + 1);
          break;
        }
        acStack_408[uVar7 + 1] = cVar1;
        cVar1 = (char)(*pcVar8);
        if ((cVar1 == '\0') || (cVar1 == '\"')) {
          uVar7 = (uint)(uVar7 + 2);
          break;
        }
        pcVar8[(int)(acStack_408 + -(int)(pcVar6 + 10))] = cVar1;
        cVar1 = (char)(pcVar8[1]);
        if ((cVar1 == '\0') || (cVar1 == '\"')) {
          uVar7 = (uint)(uVar7 + 3);
          break;
        }
        pcVar8[(int)(acStack_408 + (1 - (int)(pcVar6 + 10)))] = cVar1;
        uVar7 = (uint)(uVar7 + 4);
        pcVar8 = (char *)(pcVar8 + 4);
      } while (uVar7 < 0x400);
      acStack_408[uVar7] = '\0';
      pcVar6 = (char *)(strstr(acStack_408,"search"));
      if ((pcVar6 == (char *)0x0) && (pcVar6 = strstr(acStack_408,"SEARCH"), pcVar6 == (char *)0x0))
      {
        pcVar6 = (char *)("false");
      }
      else {
        pcVar6 = (char *)("true");
      }
      thunk_FUN_11249230("parentIsSearch",pcVar6);
    }
    pcVar6 = (char *)((char *)thunk_FUN_11252830());
    pcVar6 = (char *)(strstr(pcVar6,"<upnp:class>"));
    if (pcVar6 != (char *)0x0) {
      uVar7 = (uint)(0);
      pcVar8 = (char *)(pcVar6 + 0xe);
      do {
        cVar1 = (char)(pcVar8[-2]);
        if ((cVar1 == '\0') || (cVar1 == '<')) break;
        acStack_44c[uVar7] = cVar1;
        cVar1 = (char)(pcVar8[-1]);
        if ((cVar1 == '\0') || (cVar1 == '<')) {
          uVar7 = (uint)(uVar7 + 1);
          break;
        }
        acStack_44c[uVar7 + 1] = cVar1;
        cVar1 = (char)(*pcVar8);
        if ((cVar1 == '\0') || (cVar1 == '<')) {
          uVar7 = (uint)(uVar7 + 2);
          break;
        }
        pcVar8[(int)(acStack_44c + -(int)(pcVar6 + 0xc))] = cVar1;
        cVar1 = (char)(pcVar8[1]);
        if ((cVar1 == '\0') || (cVar1 == '<')) {
          uVar7 = (uint)(uVar7 + 3);
          break;
        }
        pcVar8[(int)(acStack_44c + (1 - (int)(pcVar6 + 0xc)))] = cVar1;
        uVar7 = (uint)(uVar7 + 4);
        pcVar8 = (char *)(pcVar8 + 4);
      } while (uVar7 < 0x40);
      acStack_44c[uVar7] = '\0';
      thunk_FUN_11249230("upnpClass",acStack_44c);
    }
  }
  else {
    iVar4 = (int)(param_1[0x14]);
    uVar2 = (undefined1)(thunk_FUN_11252ac0());
    uVar2 = (undefined1)(thunk_FUN_11252970(uVar2));
    uVar3 = (undefined4)((**(code **)(*param_1 + 8))(iVar4 != 0,(char)param_1[0x15],uVar2));
    thunk_FUN_112b0270("reporter",8,
                       "not logging %s, secure %d, prevent %d, sensitive %d, trackIDing %d",uVar3);
  }
LAB_11253733:
  thunk_FUN_1148ac28();
  return;
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
  param_1[0x102] = 0;
  param_1[0x81] = 0;
  param_1[0x143] = 0;
  param_1[0x184] = 0;
  param_1[0x1c5] = 0;
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
  
  uStack_530 = (undefined4)(0xffffffff);
  puStack_534 = (undefined1 *)(LAB_117cdc8d);
  pvStack_538 = (void *)(ExceptionList);
  uStack_8 = (uint)(DAT_12126b84 ^ (uint)auStack_52c);
  ExceptionList = (void *)(&pvStack_538);
  uStack_53c = (uint)(param_1);
  if ((((*(uint *)(param_2 + 4) & 0x7f) - 1 & 0xfffffffe) == 10) &&
     (((*(uint *)(param_1 + 4) & 0x7f) - 1 & 0xfffffffe) == 10)) {
    thunk_FUN_11254de0(param_1);
    uStack_530 = (undefined4)(0);
    thunk_FUN_11254de0(param_2);
    uStack_53c = (uint)(0);
    puVar1 = (undefined1 *)(&DAT_1186d2ee);
    if (cStack_4a3 == '1') {
      puVar1 = (undefined1 *)(auStack_4a2);
    }
    thunk_FUN_101b9160(puVar1,&DAT_119e0b2c,&uStack_53c);
    thunk_FUN_1145c720(auStack_8c,0x81,&DAT_119e0b2c,(uStack_53c >> 1 & 1) * 2);
    cStack_4a3 = (char)('1');
    thunk_FUN_1106a8d0(auStack_4a2,auStack_8c,0x80);
    uStack_53c = (uint)(0);
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
  ExceptionList = (void *)(pvStack_538);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 11256c00; body size 598 bytes.
#line 1 "ENTRY_11256c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11256c00(uint *param_2)
{
  uint *param_1 = (uint *)this;
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
  
  uStack_530 = (undefined4)(0xffffffff);
  puStack_534 = (undefined1 *)(LAB_117cdcdd);
  pvStack_538 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)auStack_52c);
  ExceptionList = (void *)(&pvStack_538);
  uStack_8 = (uint)(uVar2);
  if ((*param_1 == *param_2) && (uVar6 = 0, *param_2 != 0)) {
    puVar5 = (uint *)(param_1 + 1);
    iVar4 = (int)((int)param_2 - (int)param_1);
    do {
      if ((((*(uint *)(iVar4 + 4 + (int)puVar5) & 0x7f) - 1 & 0xfffffffe) == 10) &&
         (((puVar5[1] & 0x7f) - 1 & 0xfffffffe) == 10)) {
        thunk_FUN_11254de0(puVar5);
        uStack_530 = (undefined4)(0);
        thunk_FUN_11254de0(iVar4 + (int)puVar5);
        uStack_540 = (uint)(0);
        puVar3 = (undefined1 *)(&DAT_1186d2ee);
        if (cStack_4a3 == '1') {
          puVar3 = (undefined1 *)(auStack_4a2);
        }
        thunk_FUN_101b9160(puVar3,&DAT_119e0b2c,&uStack_540);
        thunk_FUN_1145c720(auStack_8c,0x81,&DAT_119e0b2c,(uStack_540 >> 1 & 1) * 2);
        cStack_4a3 = (char)('1');
        thunk_FUN_1106a8d0(auStack_4a2,auStack_8c,0x80);
        uStack_544 = (uint)(0);
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
        uStack_530 = (undefined4)(0xffffffff);
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
  ExceptionList = (void *)(pvStack_538);
  thunk_FUN_1148ac28();
  return;
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
          param_1[0x79] = (uint)pvVar3;
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
          param_1[0x7a] = (uint)pvVar3;
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
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
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
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RIPNetStartListenerBase);
  param_1[3] = 0xffffffff;
  param_1[4] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1125d8c0; body size 48 bytes.
#line 1 "ENTRY_1125d8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1125d8c0(undefined1 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *(undefined1 *)(param_1 + 5) = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0xffffffff;
  param_1[4] = 0;
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
  param_1[2] = 0;
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
  param_1[1] = (char)(uVar1 / 0x3c);
  param_1[2] = (char)(uVar1 % 0x3c);
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
    param_2[iVar2] = cVar1;
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
  param_1[1] = param_3;
  param_1[3] = param_4;
  param_1[2] = 0;
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
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11265e80; body size 80 bytes.
#line 1 "ENTRY_11265e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11265e80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11265ef0();
  param_1[0x215e] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHTTPChunkedClient);
  param_1[0x215a] = 0;
  *(undefined1 *)(param_1 + 0x215b) = 0;
  param_1[0x215c] = 0;
  param_1[0x215d] = 0;
  *(undefined1 *)((int)param_1 + 0x4a9) = 1;
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
  param_1[1] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSocketWriter);
  param_1[0x1004] = 0;
  uVar1 = (undefined4)(*param_4);
  param_1[3] = param_4[1];
  param_1[0x1005] = param_3;
  param_1[0x1006] = param_5;
  *(undefined2 *)(param_1 + 0x1007) = param_6;
  *(undefined2 *)((int)param_1 + 0x401e) = param_7;
  param_1[2] = uVar1;
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

bool FUN_11267480(void)

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
  param_2[1] = uVar1;
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
  param_2[1] = uVar1;
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
  param_1[0x113c] = *piVar3;
  param_1[0x113e] = param_5;
  param_1[0x113d] = iVar1;
  (**(code **)(*param_1 + 0x28))();
  if (param_7 != '\0') {
    *(undefined1 *)((int)param_1 + 0x4a9) = 1;
  }
  param_1[0x112c] = param_2;
  param_1[0x112f] = param_6;
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
      param_2[1] = 0;
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
  auStack_20[0] = 4;
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
  param_1[1] = uVar1;
  uVar1 = (undefined4)(param_2[3]);
  uVar2 = (undefined4)(param_2[4]);
  uVar3 = (undefined4)(param_2[5]);
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  uVar1 = (undefined4)(param_2[7]);
  uVar2 = (undefined4)(param_2[8]);
  uVar3 = (undefined4)(param_2[9]);
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  param_1[8] = uVar2;
  param_1[9] = uVar3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1126ce50; body size 18 bytes.
#line 1 "ENTRY_1126ce50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1126ce50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
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

undefined4 * __fastcall FUN_1126cfe0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
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
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = (undefined4)(param_3[5]);
  uVar2 = (undefined4)(param_3[6]);
  uVar3 = (undefined4)(param_3[7]);
  param_2[4] = param_3[4];
  param_2[5] = uVar1;
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
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
  param_1[1] = 0;
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
  param_1[1] = 0;
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
  param_1[1] = 0;
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

void FUN_1126f000(void)

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
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[6] = 0xffffffff;
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
  param_1[1] = 1;
  param_1[2] = 1;
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
  param_1[1] = param_2[1];
  return;
}


// Reference entry 112725a0; body size 30 bytes.
#line 1 "ENTRY_112725a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_112725a0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = param_2[1];
  *param_2 = (undefined4)(0);
  param_2[1] = 0;
  return;
}


// Reference entry 112725d0; body size 188 bytes.
#line 1 "ENTRY_112725d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_112725d0(uint param_2,undefined4 param_3,char param_4)
{
  int *param_1 = (int *)this;
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  uint uVar5;
  
  if (0x7fffffff < param_2) {
                    
    thunk_FUN_1012a4c0();
  }
  uVar2 = (uint)(param_1[5]);
  uVar5 = (uint)(param_2 | 0xf);
  if (uVar5 < 0x80000000) {
    if (0x7fffffff - (uVar2 >> 1) < uVar2) {
      uVar5 = (uint)(0x7fffffff);
    }
    else {
      uVar1 = (uint)((uVar2 >> 1) + uVar2);
      if (uVar5 < uVar1) {
        uVar5 = (uint)(uVar1);
      }
    }
  }
  else {
    uVar5 = (uint)(0x7fffffff);
  }
  _Dst = (void *)((void *)thunk_FUN_1012cab0(uVar5 + 1));
  param_1[4] = param_2;
  param_1[5] = uVar5;
  memset(_Dst,(int)param_4,param_2);
  *(undefined1 *)((int)_Dst + param_2) = 0;
  if (0xf < uVar2) {
    iVar3 = (int)(*param_1);
    uVar5 = (uint)(uVar2 + 1);
    iVar4 = (int)(iVar3);
    if (0xfff < uVar5) {
      iVar4 = (int)(*(int *)(iVar3 + -4));
      uVar5 = (uint)(uVar2 + 0x24);
      if (0x1f < (iVar3 - iVar4) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar5);
  }
  *param_1 = (int)((int)_Dst);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 112726c0; body size 16 bytes.
#line 1 "ENTRY_112726c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_112726c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_3;
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
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11272b90; body size 45 bytes.
#line 1 "ENTRY_11272b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11272b90(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = param_2[1];
  *param_2 = (undefined4)(0);
  param_2[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11272bd0; body size 43 bytes.
#line 1 "ENTRY_11272bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11272bd0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)((int *)(param_2[1] + 4));
    *piVar1 = (int)(*piVar1 + 1);
    UNLOCK();
  }
  *param_1 = (undefined4)(*param_2);
  param_1[1] = param_2[1];
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11272c10; body size 16 bytes.
#line 1 "ENTRY_11272c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11272c10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
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


// Reference entry 11272ca0; body size 85 bytes.
#line 1 "ENTRY_11272ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11272ca0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)(0);
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)((int *)(param_2[1] + 4));
    *piVar1 = (int)(*piVar1 + 1);
    UNLOCK();
    uVar4 = (undefined4)(param_2[1]);
  }
  piVar1 = (int *)((int *)param_1[1]);
  *param_1 = (undefined4)(*param_2);
  param_1[1] = uVar4;
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar3 = (int)(piVar1[1] + -1);
    piVar1[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      (**(code **)*piVar1)();
      LOCK();
      piVar2 = (int *)(piVar1 + 2);
      iVar3 = (int)(*piVar2);
      *piVar2 = (int)(*piVar2 + -1);
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
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


// Reference entry 11273c30; body size 33 bytes.
#line 1 "ENTRY_11273c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11273c30(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  uVar1 = (undefined4)(param_1[1]);
  param_1[1] = param_2[1];
  param_2[1] = uVar1;
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


// Reference entry 11273f50; body size 33 bytes.
#line 1 "ENTRY_11273f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11273f50(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  uVar1 = (undefined4)(param_1[1]);
  param_1[1] = param_2[1];
  param_2[1] = uVar1;
  return;
}


// Reference entry 11274090; body size 55 bytes.
#line 1 "ENTRY_11274090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11274090(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[1] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXmlChunkExtractor);
  param_1[4] = 0;
  param_1[5] = 0;
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

void FUN_112752e0(void)

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
    puVar13[1] = uVar2;
    puVar13[2] = uVar3;
    puVar13[3] = uVar4;
    *(undefined8 *)(puVar13 + 4) = *(undefined8 *)(param_3 + 4);
    memcpy(puVar13 + 7,(void *)param_3[3],param_3[1]);
    puVar13[3] = 0;
    thunk_FUN_1145c250(puVar13[1] + 0x1c + (int)puVar13,pcVar11,pcVar8 + (1 - (int)(pcVar11 + 1)));
    puVar13[6] = uVar12;
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

void __fastcall FUN_11275c10(int param_1)

{
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
  
  uStack_b4 = (undefined4)(0xffffffff);
  puStack_b8 = (undefined1 *)(LAB_117cf0cd);
  pvStack_bc = (void *)(ExceptionList);
  uStack_8 = (uint)(DAT_12126b84 ^ (uint)auStack_b0);
  ExceptionList = (void *)(&pvStack_bc);
  uVar3 = (undefined8)(thunk_FUN_112b0310(uStack_8));
  thunk_FUN_11262460(uVar3);
  (**(code **)(iStack_d4 + 0xc))(auStack_88,0x80,0);
  thunk_FUN_11274b50(&DAT_119e4828,auStack_88);
  thunk_FUN_1125bbd0(1);
  piVar1 = (int *)((int *)(param_1 + 0xc4));
  uStack_b4 = (undefined4)(0);
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
  ExceptionList = (void *)(pvStack_bc);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 11275ea0; body size 19 bytes.
#line 1 "ENTRY_11275ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11275ea0(int param_1)

{
  thunk_FUN_11274880(param_1 + 0x134);
  return;
}


// Reference entry 11275ec0; body size 72 bytes.
#line 1 "ENTRY_11275ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11275ec0(int param_1)

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
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RReportFileParser);
  param_1[3] = 0;
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
  param_1[0x142] = 0;
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
  param_1[1] = 0;
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
  
  uStack_957c = (undefined4)(0xffffffff);
  puStack_9580 = (undefined1 *)(LAB_117cf1dd);
  pvStack_9584 = (void *)(ExceptionList);
  uStack_8 = (uint)(DAT_12126b84 ^ (uint)auStack_9578);
  ExceptionList = (void *)(&pvStack_9584);
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
      uStack_957c = (undefined4)(0);
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
  ExceptionList = (void *)(pvStack_9584);
  thunk_FUN_1148ac28();
  return;
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
  param_1[1] = (uint)&ghidra_vftable_RReportEventInterface;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RReportManager);
  param_1[1] = (uint)&ghidra_vftable_RReportManager;
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[3] = 0x78;
  param_1[4] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined2 *)(param_1 + 0x48) = 0;
  param_1[0x51] = 0;
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
  param_1[1] = (uint)&ghidra_vftable_RReportManager;
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

undefined4 * __fastcall FUN_11278d90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
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
  param_1[1] = param_2;
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11279260; body size 23 bytes.
#line 1 "ENTRY_11279260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11279260(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
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
  param_1[1] = 0;
  param_1[2] = 0;
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

void FUN_112797f0(void)

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

void FUN_112798f0(undefined4 *param_1,undefined4 *param_2,int param_3)

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


// Reference entry 1127ae80; body size 125 bytes.
#line 1 "ENTRY_1127ae80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_1127ae80(int param_2)
{
  undefined1 *param_1 = (undefined1 *)this;
  char cVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)(param_1);
  cVar1 = (char)(thunk_FUN_1127a2b0(param_2 + 0x34,&puStack_4));
  if (cVar1 != '\0') {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
    puVar3 = (undefined1 *)(*(undefined1 **)(param_1 + 4));
    if (puStack_4 < puVar3) {
      puVar2 = (undefined4 *)((undefined4 *)(param_1 + (int)puStack_4 * 0x50 + 8));
      do {
        puStack_4 = (undefined1 *)(puStack_4 + 1);
        *puVar2 = (undefined4)(puVar2[0x14]);
        puVar2[1] = puVar2[0x15];
        puVar2[2] = puVar2[0x16];
        puVar2[3] = puVar2[0x17];
        puVar2[4] = puVar2[0x18];
        puVar2[5] = puVar2[0x19];
        puVar2[6] = puVar2[0x1a];
        puVar2[7] = puVar2[0x1b];
        puVar2[8] = puVar2[0x1c];
        puVar2[9] = puVar2[0x1d];
        puVar2[10] = puVar2[0x1e];
        puVar2[0xb] = puVar2[0x1f];
        puVar2[0xc] = puVar2[0x20];
        puVar2[0xd] = puVar2[0x21];
        puVar2[0xe] = puVar2[0x22];
        puVar2[0xf] = puVar2[0x23];
        puVar2[0x10] = puVar2[0x24];
        puVar2[0x11] = puVar2[0x25];
        puVar2[0x12] = puVar2[0x26];
        puVar2[0x13] = puVar2[0x27];
        puVar3 = (undefined1 *)(*(undefined1 **)(param_1 + 4));
        puVar2 = (undefined4 *)(puVar2 + 0x14);
      } while (puStack_4 < puVar3);
    }
    *param_1 = (undefined1)(puVar3 + -2 < (undefined1 *)0xf);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(puVar3 + -2 < (undefined1 *)0xf);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)((bool)*param_1);
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
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        uVar3 = (undefined4)(*(undefined4 *)((int)auStack_a0c + iVar8 + 0x14));
        uVar4 = (undefined4)(*(undefined4 *)((int)auStack_a0c + iVar8 + 0x18));
        uVar5 = (undefined4)(*(undefined4 *)((int)auStack_a0c + iVar8 + 0x1c));
        puVar1 = (undefined4 *)((undefined4 *)(param_1 + uVar2 * 0x50 + 0x18));
        *puVar1 = (undefined4)(*(undefined4 *)((int)auStack_a0c + iVar8 + 0x10));
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        uVar3 = (undefined4)(*(undefined4 *)((int)auStack_a0c + iVar8 + 0x24));
        uVar4 = (undefined4)(*(undefined4 *)((int)auStack_a0c + iVar8 + 0x28));
        uVar5 = (undefined4)(*(undefined4 *)((int)auStack_a0c + iVar8 + 0x2c));
        puVar1 = (undefined4 *)((undefined4 *)(param_1 + uVar2 * 0x50 + 0x28));
        *puVar1 = (undefined4)(*(undefined4 *)((int)auStack_a0c + iVar8 + 0x20));
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        uVar3 = (undefined4)(*(undefined4 *)((int)auStack_a0c + iVar8 + 0x34));
        uVar4 = (undefined4)(*(undefined4 *)((int)auStack_a0c + iVar8 + 0x38));
        uVar5 = (undefined4)(*(undefined4 *)((int)auStack_a0c + iVar8 + 0x3c));
        puVar1 = (undefined4 *)((undefined4 *)(param_1 + uVar2 * 0x50 + 0x38));
        *puVar1 = (undefined4)(*(undefined4 *)((int)auStack_a0c + iVar8 + 0x30));
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        uVar3 = (undefined4)(*(undefined4 *)((int)auStack_a0c + iVar8 + 0x44));
        uVar4 = (undefined4)(*(undefined4 *)((int)auStack_a0c + iVar8 + 0x48));
        uVar5 = (undefined4)(*(undefined4 *)((int)auStack_a0c + iVar8 + 0x4c));
        puVar1 = (undefined4 *)((undefined4 *)(param_1 + uVar2 * 0x50 + 0x48));
        *puVar1 = (undefined4)(*(undefined4 *)((int)auStack_a0c + iVar8 + 0x40));
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
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
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        uVar3 = (undefined4)(puVar7[5]);
        uVar4 = (undefined4)(puVar7[6]);
        uVar5 = (undefined4)(puVar7[7]);
        puVar1 = (undefined4 *)((undefined4 *)(param_1 + uVar2 * 0x50 + 0x18));
        *puVar1 = (undefined4)(puVar7[4]);
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        uVar3 = (undefined4)(puVar7[9]);
        uVar4 = (undefined4)(puVar7[10]);
        uVar5 = (undefined4)(puVar7[0xb]);
        puVar1 = (undefined4 *)((undefined4 *)(param_1 + uVar2 * 0x50 + 0x28));
        *puVar1 = (undefined4)(puVar7[8]);
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        uVar3 = (undefined4)(puVar7[0xd]);
        uVar4 = (undefined4)(puVar7[0xe]);
        uVar5 = (undefined4)(puVar7[0xf]);
        puVar1 = (undefined4 *)((undefined4 *)(param_1 + uVar2 * 0x50 + 0x38));
        *puVar1 = (undefined4)(puVar7[0xc]);
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        uVar3 = (undefined4)(puVar7[0x11]);
        uVar4 = (undefined4)(puVar7[0x12]);
        uVar5 = (undefined4)(puVar7[0x13]);
        puVar1 = (undefined4 *)((undefined4 *)(param_1 + uVar2 * 0x50 + 0x48));
        *puVar1 = (undefined4)(puVar7[0x10]);
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
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
  param_1[1] = 0;
  *(undefined1 *)((int)param_1 + 0x84b) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 0x49) = 0;
  param_1[0x223] = 0;
  *(undefined1 *)((int)param_1 + 0x44a) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1127d090; body size 46 bytes.
#line 1 "ENTRY_1127d090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1127d090(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_1125b7a0(param_1,0x7c,LAB_10032394,LAB_10041673);
  param_1[2] = param_2;
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
  param_1[1] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpdateItemXmlParserCB);
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_2 + 8) = 0;
  *(undefined1 *)(param_2 + 0x49) = 0;
  *(undefined4 *)(param_2 + 0x88c) = 0;
  *(undefined1 *)(param_2 + 0x44a) = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined1 *)(param_2 + 0x84b) = 0;
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

void FUN_1127d760(void)

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


// Reference entry 1127d9d0; body size 116 bytes.
#line 1 "ENTRY_1127d9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1127d9d0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined2 param_7,undefined2 param_8,
            undefined4 param_9)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  thunk_FUN_1145c250(param_1 + 2,param_3,0x41);
  thunk_FUN_1145c250((int)param_1 + 0x49,param_4,0x401);
  param_1[0x223] = param_5;
  thunk_FUN_1145c250((int)param_1 + 0x44a,param_6,0x401);
  *(undefined2 *)(param_1 + 1) = param_7;
  *(undefined2 *)((int)param_1 + 6) = param_8;
  thunk_FUN_1145c250((int)param_1 + 0x84b,param_9,0x41);
  return;
}


// Reference entry 1127da70; body size 123 bytes.
#line 1 "ENTRY_1127da70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1127da70(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined2 param_7,undefined2 param_8,
            undefined4 param_9)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  *param_1 = (undefined4)(1);
  thunk_FUN_1145c250(param_1 + 3,param_3,0x40);
  thunk_FUN_1145c250((int)param_1 + 0x4d,param_4,0x400);
  param_1[0x224] = param_5;
  thunk_FUN_1145c250((int)param_1 + 0x44e,param_6,0x400);
  *(undefined2 *)(param_1 + 2) = param_7;
  *(undefined2 *)((int)param_1 + 10) = param_8;
  thunk_FUN_1145c250((int)param_1 + 0x84f,param_9,0x40);
  return;
}


// Reference entry 1127dcd0; body size 8 bytes.
#line 1 "ENTRY_1127dcd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1127dcd0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(char *)(param_1 + 8) == '\0');
}


// Reference entry 1127dfd0; body size 5 bytes.
#line 1 "ENTRY_1127dfd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 __fastcall FUN_1127dfd0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2)(*(undefined2 *)(param_1 + 4));
}


// Reference entry 1127e3c0; body size 6 bytes.
#line 1 "ENTRY_1127e3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1127e3c0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x80);
}


// Reference entry 1127e6a0; body size 208 bytes.
#line 1 "ENTRY_1127e6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1127e6a0(int *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  if (*param_2 != -1) {
    iVar2 = (int)(param_2[2]);
    if (param_2[1] == -1) {
      if (iVar2 != -1) {
        return;
      }
    }
    else if (iVar2 == -1) {
      return;
    }
    if (((char)param_2[0x25] != '\0') || (*(char *)((int)param_2 + 0x53d) != '\0')) {
      thunk_FUN_112b0270("updsched",10,"manifest[%zu]: Adding %d.[%d,%d] [%s,%s] 0x%x %s %s %u",
                         *(undefined4 *)(param_1 + 0xd10),*param_2,param_2[1],iVar2,param_2 + 3,
                         (int)param_2 + 0x4d,param_2[0x24],param_2 + 0x25,(int)param_2 + 0x117,
                         param_2[0x146]);
      uVar1 = (uint)(*(uint *)(param_1 + 0xd10));
      if (uVar1 < 0x80) {
        *(uint *)(param_1 + 0xd10) = uVar1 + 1;
        piVar3 = (int *)((int *)(param_1 + 0xd14 + uVar1 * 0x580));
        for (iVar2 = (int)(0x160); iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar3 = (int)(*param_2);
          param_2 = (int *)(param_2 + 1);
          piVar3 = (int *)(piVar3 + 1);
        }
        return;
      }
      thunk_FUN_112b0270("updatesched",3,"too many manifest entries!");
    }
  }
  return;
}


// Reference entry 1127e7b0; body size 82 bytes.
#line 1 "ENTRY_1127e7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1127e7b0(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = (uint)(0);
  if (*(int *)(param_1 + 0x2cd18) != 0) {
    piVar2 = (int *)((int *)(param_1 + 0x2cd1c));
    do {
      iVar1 = (int)(*piVar2);
      if (iVar1 != 0) {
        thunk_FUN_1129b3f0();
        thunk_FUN_1148a50e(iVar1,8);
      }
      uVar3 = (uint)(uVar3 + 1);
      piVar2 = (int *)(piVar2 + 1);
    } while (uVar3 < *(uint *)(param_1 + 0x2cd18));
    *(undefined4 *)(param_1 + 0x2cd18) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x2cd18) = 0;
  return;
}


// Reference entry 1127eae0; body size 49 bytes.
#line 1 "ENTRY_1127eae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1127eae0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if ((*(char *)(param_1 + 0x9a4) == '\0') && (*(char *)(param_1 + 0x58c) != '\0')) {
    thunk_FUN_11247d40(param_1 + 0x58d,0x400,param_2,param_3);
  }
  return;
}


// Reference entry 1127eb20; body size 50 bytes.
#line 1 "ENTRY_1127eb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1127eb20(int param_1,undefined4 param_2,undefined4 param_3)

{
  if ((*(char *)(param_1 + 0x9a4) == '\0') && (*(char *)(param_1 + 0x58c) != '\0')) {
    thunk_FUN_11247d40(param_1 + 0x58d,0x400,param_2,param_3);
  }
  return;
}


// Reference entry 1127f170; body size 14 bytes.
#line 1 "ENTRY_1127f170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1127f170(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1127eb60(param_2);
  return;
}


// Reference entry 1127f2a0; body size 5 bytes.
#line 1 "ENTRY_1127f2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 __fastcall FUN_1127f2a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2)(*(undefined2 *)(param_1 + 4));
}


// Reference entry 1127fb80; body size 233 bytes.
#line 1 "ENTRY_1127fb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1127fb80(int param_1)

{
  thunk_FUN_112c8cb0(*(undefined4 *)(param_1 + 4),param_1,LAB_1007cb1f,LAB_10021cba,LAB_10092f14,
                     0,0,0);
  *(undefined4 *)(param_1 + 0x990) = 0;
  *(undefined4 *)(param_1 + 0x994) = 0;
  *(undefined1 *)(param_1 + 0x9a4) = 0;
  *(undefined2 *)(param_1 + 0x58c) = 0;
  *(undefined2 *)(param_1 + 0x998) = 0;
  *(undefined2 *)(param_1 + 0x99b) = 0;
  *(undefined4 *)(param_1 + 0x9a0) = 0;
  *(undefined1 *)(param_1 + 0x99a) = 0;
  *(undefined1 *)(param_1 + 0xa18) = 0;
  *(undefined4 *)(param_1 + 0xa1c) = 0;
  *(undefined1 *)(param_1 + 0xa20) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined1 *)(param_1 + 0x549) = 0;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined1 *)(param_1 + 0xe1) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x524) = 0;
  *(undefined1 *)(param_1 + 0x528) = 0;
  thunk_FUN_113d1ae0(param_1 + 0x9a8,1);
  return;
}


// Reference entry 112801b0; body size 49 bytes.
#line 1 "ENTRY_112801b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_112801b0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_112b0270("updsched",10,"manifest: AutoUpdate min version=%s",param_2);
  thunk_FUN_1145c250(param_1 + 0x884,param_2,0x41);
  return;
}


// Reference entry 11280270; body size 52 bytes.
#line 1 "ENTRY_11280270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11280270(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_112b0270("updsched",10,"manifest: Setting descr=%s",param_2);
  thunk_FUN_1145c250(param_1 + 0x8c5,param_2,0x401);
  return;
}


// Reference entry 112802c0; body size 32 bytes.
#line 1 "ENTRY_112802c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_112802c0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  thunk_FUN_1127fa70(param_2,param_3,&DAT_1186d2ee);
  *(undefined1 *)(param_1 + 0xd0c) = 1;
  return;
}


// Reference entry 11280340; body size 49 bytes.
#line 1 "ENTRY_11280340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11280340(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_112b0270("updsched",10,"manifest: Setting revision=%s",param_2);
  thunk_FUN_1145c250(param_1 + 0xcc6,param_2,0x41);
  return;
}


// Reference entry 11280380; body size 12 bytes.
#line 1 "ENTRY_11280380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11280380(undefined2 param_2)
{
  int param_1 = (int )this;
  *(undefined2 *)(param_1 + 4) = param_2;
  return;
}


// Reference entry 11280390; body size 15 bytes.
#line 1 "ENTRY_11280390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11280390(undefined2 param_2)
{
  int param_1 = (int )this;
  *(undefined2 *)(param_1 + 0x2cd14) = param_2;
  return;
}


// Reference entry 112803b0; body size 40 bytes.
#line 1 "ENTRY_112803b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_112803b0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_112b0270("updsched",10,"manifest: System flags=0x%x",param_2);
  *(undefined4 *)(param_1 + 0xd08) = param_2;
  return;
}


// Reference entry 112803f0; body size 49 bytes.
#line 1 "ENTRY_112803f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_112803f0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_112b0270("updsched",10,"manifest: Setting system version=%s",param_2);
  thunk_FUN_1145c250(param_1 + 0x843,param_2,0x41);
  return;
}


// Reference entry 11280430; body size 8 bytes.
#line 1 "ENTRY_11280430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11280430(int param_1)

{
  *(undefined1 *)(param_1 + 0xd0c) = 1;
  return;
}


// Reference entry 112810a0; body size 18 bytes.
#line 1 "ENTRY_112810a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112810a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_11280440(param_2,param_3);
  return;
}


// Reference entry 11281170; body size 7 bytes.
#line 1 "ENTRY_11281170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11281170(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xd08));
}


// Reference entry 11281340; body size 6 bytes.
#line 1 "ENTRY_11281340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_11281340(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(param_1);
}


// Reference entry 112817e0; body size 165 bytes.
#line 1 "ENTRY_112817e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_112817e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RServicesDescriptorsDeserializer);
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined2 *)(param_1 + 0x51) = 0;
  *(undefined8 *)(param_1 + 0x4f) = 0;
  thunk_FUN_11283480(0xff,&DAT_1186d2ee,&DAT_1186d2ee,&DAT_1186d2ee,&DAT_1186d2ee,0);
  thunk_FUN_11282620();
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 112818b0; body size 3 bytes.
#line 1 "ENTRY_112818b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112818b0(void)

{
  return;
}


// Reference entry 112818c0; body size 7 bytes.
#line 1 "ENTRY_112818c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_112818c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMSRating);
  return;
}


// Reference entry 11281990; body size 39 bytes.
#line 1 "ENTRY_11281990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11281990(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = (undefined4)(param_2[1]);
  uVar2 = (undefined4)(param_2[2]);
  uVar3 = (undefined4)(param_2[3]);
  *param_1 = (undefined4)(*param_2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = (undefined4)(param_2[5]);
  uVar2 = (undefined4)(param_2[6]);
  uVar3 = (undefined4)(param_2[7]);
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar1 = (undefined4)(param_2[9]);
  uVar2 = (undefined4)(param_2[10]);
  uVar3 = (undefined4)(param_2[0xb]);
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  uVar1 = (undefined4)(param_2[0xd]);
  uVar2 = (undefined4)(param_2[0xe]);
  uVar3 = (undefined4)(param_2[0xf]);
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11281e00; body size 25 bytes.
#line 1 "ENTRY_11281e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * __fastcall FUN_11281e00(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)("UserId");
  switch(*(undefined1 *)(param_1 + 300)) {
  case 0:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("UserId");
  case 1:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("Stateless");
  case 2:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("Anonymous");
  case 3:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("DeviceLink");
  case 4:
    pcVar1 = (char *)("AppLink");
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)(pcVar1);
}


// Reference entry 11281f40; body size 25 bytes.
#line 1 "ENTRY_11281f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * __fastcall FUN_11281f40(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)("MService");
  switch(*(undefined1 *)(param_1 + 0x12d)) {
  case 0:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("MService");
  case 1:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SoundLab");
  case 2:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("Preload");
  case 3:
    pcVar1 = (char *)("Preinstall");
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)(pcVar1);
}


// Reference entry 11282d40; body size 14 bytes.
#line 1 "ENTRY_11282d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11282d40(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_11282a50(param_2);
  return;
}


// Reference entry 11282f70; body size 14 bytes.
#line 1 "ENTRY_11282f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11282f70(void)

{
  thunk_FUN_112a8010(&DAT_122f5e94);
  return;
}


// Reference entry 11283180; body size 8 bytes.
#line 1 "ENTRY_11283180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 __fastcall FUN_11283180(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2)(*(undefined2 *)(param_1 + 0x140));
}


// Reference entry 112831e0; body size 32 bytes.
#line 1 "ENTRY_112831e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_112831e0(ushort param_2)
{
  int param_1 = (int )this;
  if (*(ushort *)(param_1 + 0x140) <= param_2) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x138 + (uint)param_2 * 4));
}


// Reference entry 11283210; body size 4 bytes.
#line 1 "ENTRY_11283210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11283210(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 8);
}


// Reference entry 11283300; body size 118 bytes.
#line 1 "ENTRY_11283300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11283300(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined1 *param_5)
{
  int param_1 = (int )this;
  thunk_FUN_11282620();
  *(undefined4 *)(param_1 + 0x14c) = param_2;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x150) = param_3;
  if (param_4 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x154) = 0;
    *(undefined4 *)(param_1 + 0x158) = 0;
    *(undefined1 **)(param_1 + 0x15c) = param_5;
  }
  else {
    *(undefined4 *)(param_1 + 0x154) = *param_4;
    *(undefined4 **)(param_1 + 0x158) = param_4;
    *(undefined1 **)(param_1 + 0x15c) = param_5;
    *param_4 = (undefined4)(0);
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = (undefined1)(0);
  }
  return;
}


// Reference entry 112833a0; body size 9 bytes.
#line 1 "ENTRY_112833a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_112833a0(uint param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(param_1 < 6);
}


// Reference entry 11283470; body size 4 bytes.
#line 1 "ENTRY_11283470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11283470(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0xc));
}


// Reference entry 11283910; body size 13 bytes.
#line 1 "ENTRY_11283910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11283910(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x130) = param_2;
  return;
}


// Reference entry 11283b00; body size 18 bytes.
#line 1 "ENTRY_11283b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11283b00(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1106a8d0(param_1,param_2,0x20);
  return;
}


// Reference entry 11283cd0; body size 34 bytes.
#line 1 "ENTRY_11283cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11283cd0(short param_2)
{
  int param_1 = (int )this;
  short sVar1;
  
  sVar1 = (short)(0x1e);
  if (0x1c < (ushort)(param_2 - 1U)) {
    sVar1 = (short)(param_2);
  }
  *(short *)(param_1 + 0x12a) = sVar1;
  return;
}


// Reference entry 11283fa0; body size 13 bytes.
#line 1 "ENTRY_11283fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11283fa0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x134) = param_2;
  return;
}


// Reference entry 11283fb0; body size 8 bytes.
#line 1 "ENTRY_11283fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_11283fb0(char *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  undefined *puVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined **ppuVar6;
  
  ppuVar6 = (undefined **)(&PTR_s_https___www__119e5428);
  puVar2 = (undefined *)(PTR_s_https___www__119e5428);
  while( true ) {
    if (puVar2 == (undefined *)0x0) {
      pcVar4 = (char *)(param_2);
      do {
        cVar1 = (char)(*pcVar4);
        pcVar4 = (char *)(pcVar4 + 1);
      } while (cVar1 != '\0');
      if (0x3f < (uint)((int)pcVar4 - (int)(param_2 + 1))) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
      }
      thunk_FUN_1106a8d0((undefined1 *)(param_1 + 0x20),param_2,0x40);
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
    iVar3 = (int)(thunk_FUN_113b9f60(param_2,puVar2,ppuVar6[1]));
    if (iVar3 == 0) break;
    puVar2 = (undefined *)(ppuVar6[3]);
    ppuVar6 = (undefined **)(ppuVar6 + 3);
  }
  pcVar5 = (char *)(param_2 + (int)ppuVar6[1]);
  pcVar4 = (char *)(pcVar5 + 1);
  do {
    cVar1 = (char)(*pcVar5);
    pcVar5 = (char *)(pcVar5 + 1);
  } while (cVar1 != '\0');
  if (0x3e < (uint)((int)pcVar5 - (int)pcVar4)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  }
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(ppuVar6 + 2);
  thunk_FUN_1106a8d0(param_1 + 0x21,param_2 + (int)ppuVar6[1],0x3f);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
}


// Reference entry 11284430; body size 129 bytes.
#line 1 "ENTRY_11284430"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined ** __thiscall Recovered_Bulk::FUN_11284430(undefined1 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_112a7f50(&DAT_122f5e94);
  thunk_FUN_11282620();
  _DAT_12120fd8 = (int)(0);
  _DAT_12120fdc = (int)(param_1 + 1);
  _DAT_12120fe0 = (int)(0x100);
  DAT_12120fe8 = (int)(param_1);
  if (param_1 == (undefined4 *)0x0) {
    DAT_12120fe4 = (int)(0);
    DAT_12120fec = (int)(param_2);
  }
  else {
    DAT_12120fe4 = (int)(*param_1);
    DAT_12120fec = (int)(param_2);
    *param_1 = (undefined4)(0);
  }
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = (undefined1)(0);
  }
  return (/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined **)(&PTR_vftable_12120e90);
}


// Reference entry 112856a0; body size 18 bytes.
#line 1 "ENTRY_112856a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112856a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_112844e0(param_2,param_3);
  return;
}


// Reference entry 11285890; body size 28 bytes.
#line 1 "ENTRY_11285890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11285890(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1145ede0(param_1,param_2,param_3,param_4,param_5);
  return;
}


// Reference entry 11285920; body size 20 bytes.
#line 1 "ENTRY_11285920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11285920(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1145eb70(param_1,param_2,param_3);
  return;
}


// Reference entry 112859c0; body size 53 bytes.
#line 1 "ENTRY_112859c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_112859c0(undefined4 param_2,undefined4 param_3,undefined1 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 4) = param_4;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCRStringEmitter);
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11285a50; body size 42 bytes.
#line 1 "ENTRY_11285a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11285a50(int param_2,int param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[2] = param_3;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCRStripNewlineParamRX);
  param_1[1] = param_2;
  param_1[3] = 0;
  *(undefined1 *)(param_2 + -1 + param_3) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11285ac0; body size 7 bytes.
#line 1 "ENTRY_11285ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11285ac0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCRStreamParamRX);
  return;
}


// Reference entry 11286540; body size 31 bytes.
#line 1 "ENTRY_11286540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11286540(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  thunk_FUN_11295de0(param_1,param_2,param_3,param_4,DAT_122f5de0);
  return;
}


// Reference entry 11286570; body size 22 bytes.
#line 1 "ENTRY_11286570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11286570(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((uint)*(ushort *)(param_1 + 0x420));
  thunk_FUN_11298430(param_1,uVar1);
  thunk_FUN_11298190(param_1,uVar1);
  return;
}


// Reference entry 112869d0; body size 7 bytes.
#line 1 "ENTRY_112869d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_112869d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x428));
}


// Reference entry 112869f0; body size 90 bytes.
#line 1 "ENTRY_112869f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112869f0(undefined4 param_1,undefined1 *param_2,undefined4 param_3,undefined2 param_4,
                 int param_5,undefined4 param_6)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(param_2);
  }
  thunk_FUN_112b0270(&DAT_119df9ec,4,"SSL %s error -0x%x %d to %s with local port %u",param_1,
                     -param_5,param_6,puVar1,param_4);
  if ((param_5 == -0x7780) && (param_2 != (undefined1 *)0x0)) {
    thunk_FUN_11298430(param_2,param_3);
    thunk_FUN_11298190(param_2,param_3);
  }
  return;
}


// Reference entry 11287090; body size 19 bytes.
#line 1 "ENTRY_11287090"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11287090(undefined4 param_1,undefined4 param_2)

{
  _DAT_122f5ea0 = (int)(param_1);
  DAT_122f5ea4 = (int)(param_2);
  return;
}


// Reference entry 112870b0; body size 13 bytes.
#line 1 "ENTRY_112870b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_112870b0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x404) = param_2;
  return;
}


// Reference entry 112870c0; body size 13 bytes.
#line 1 "ENTRY_112870c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_112870c0(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1 *)(param_1 + 0x428) = param_2;
  return;
}


// Reference entry 112870d0; body size 3 bytes.
#line 1 "ENTRY_112870d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112870d0(void)

{
  return;
}


// Reference entry 11287730; body size 116 bytes.
#line 1 "ENTRY_11287730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11287730(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 uStack_108;
  int iStack_104;
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_108);
  iStack_104 = (int)(*(int *)(param_1 + 0x424));
  if (iStack_104 == -1) {
    thunk_FUN_1148ac28();
    return;
  }
  uStack_108 = (undefined4)(1);
  thunk_FUN_1126b550(iStack_104 + 1,&uStack_108,0,param_2);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 112878a0; body size 14 bytes.
#line 1 "ENTRY_112878a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_112878a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RWritableStreamWithHeaders);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 112878f0; body size 7 bytes.
#line 1 "ENTRY_112878f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_112878f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RWritableStream);
  return;
}


// Reference entry 11287b00; body size 20 bytes.
#line 1 "ENTRY_11287b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11287b00(int param_1)

{
  if ((param_1 != 1) && (param_1 != 2)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
}


// Reference entry 11287c80; body size 6 bytes.
#line 1 "ENTRY_11287c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11287c80(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x56);
}


// Reference entry 11287c90; body size 6 bytes.
#line 1 "ENTRY_11287c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11287c90(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x56);
}


// Reference entry 11287ca0; body size 192 bytes.
#line 1 "ENTRY_11287ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_11287ca0(byte *param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  
  iVar2 = (int)(2);
  pbVar3 = (byte *)(param_1 + 6);
  pbVar4 = (byte *)(param_2);
  if (*(int *)(param_1 + 6) == *(int *)param_2) {
    pbVar3 = (byte *)(param_1 + 10);
    iVar2 = (int)(-2);
    pbVar4 = (byte *)(param_2 + 4);
  }
  iVar1 = (int)((uint)*pbVar3 - (uint)*pbVar4);
  if ((((iVar1 == 0) && (iVar1 = (uint)pbVar3[1] - (uint)pbVar4[1], iVar1 == 0)) && (iVar2 != -2))
     && (iVar1 = (uint)pbVar3[2] - (uint)pbVar4[2], iVar1 == 0)) {
    iVar1 = (int)((uint)pbVar3[3] - (uint)pbVar4[3]);
  }
  if (iVar1 < 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0xffffffff);
  }
  pbVar3 = (byte *)(param_2 + 6);
  iVar2 = (int)(2);
  if (*(int *)param_1 == *(int *)pbVar3) {
    param_1 = (byte *)(param_1 + 4);
    iVar2 = (int)(-2);
    pbVar3 = (byte *)(param_2 + 10);
  }
  bVar5 = (bool)(*param_1 < *pbVar3);
  if (((*param_1 == *pbVar3) && (bVar5 = param_1[1] < pbVar3[1], param_1[1] == pbVar3[1])) &&
     ((iVar2 == -2 ||
      ((bVar5 = param_1[2] < pbVar3[2], param_1[2] == pbVar3[2] &&
       (bVar5 = param_1[3] < pbVar3[3], param_1[3] == pbVar3[3])))))) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)((uint)(0 < (int)(-(uint)bVar5 | 1)));
}


// Reference entry 112884b0; body size 23 bytes.
#line 1 "ENTRY_112884b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined * FUN_112884b0(uint param_1)

{
  if (param_1 < 4) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined *)((&PTR_s_invalid_119e5a00)[param_1]);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined *)(PTR_s_invalid_119e5a00);
}


// Reference entry 11288800; body size 40 bytes.
#line 1 "ENTRY_11288800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11288800(int param_2)
{
  int param_1 = (int )this;
  memmove((void *)(param_1 + 0x24),(void *)(param_2 + 0x24 + param_1),
          *(int *)(param_1 + 0x34) - param_2);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - param_2;
  return;
}


// Reference entry 11288da0; body size 16 bytes.
#line 1 "ENTRY_11288da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined * __fastcall FUN_11288da0(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined *)(*(undefined **)(param_1 + 4));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined *)(&DAT_122f5eac);
}


// Reference entry 11288dc0; body size 16 bytes.
#line 1 "ENTRY_11288dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined * __fastcall FUN_11288dc0(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined *)(*(undefined **)(param_1 + 4));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined *)(&DAT_122f5eac);
}


// Reference entry 11288de0; body size 14 bytes.
#line 1 "ENTRY_11288de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11288de0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(DAT_122f5ebc);
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = (int)(*(int *)(param_1 + 8));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1);
}


// Reference entry 11288e00; body size 14 bytes.
#line 1 "ENTRY_11288e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11288e00(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(DAT_122f5ebc);
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = (int)(*(int *)(param_1 + 8));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1);
}


// Reference entry 11288f30; body size 6 bytes.
#line 1 "ENTRY_11288f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11288f30(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(3);
}


// Reference entry 11288f40; body size 6 bytes.
#line 1 "ENTRY_11288f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11288f40(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(3);
}


// Reference entry 11288f50; body size 38 bytes.
#line 1 "ENTRY_11288f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11288f50(void *param_2,size_t param_3)
{
  int param_1 = (int )this;
  memcpy((void *)(*(int *)(param_1 + 0x34) + 0x24 + param_1),param_2,param_3);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + param_3;
  return;
}


// Reference entry 11289130; body size 29 bytes.
#line 1 "ENTRY_11289130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11289130(int param_2,int param_3)
{
  int param_1 = (int )this;
  if ((param_2 == 0) || (param_3 == 0)) {
    param_3 = (int)(0);
    param_2 = (int)(0);
  }
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 8) = param_3;
  return;
}


// Reference entry 11289160; body size 29 bytes.
#line 1 "ENTRY_11289160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11289160(int param_2,int param_3)
{
  int param_1 = (int )this;
  if ((param_2 == 0) || (param_3 == 0)) {
    param_3 = (int)(0);
    param_2 = (int)(0);
  }
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 8) = param_3;
  return;
}


// Reference entry 11289190; body size 41 bytes.
#line 1 "ENTRY_11289190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11289190(void *param_1,uint param_2)

{
  size_t _Size;
  
  _Size = (size_t)(0x10);
  if (param_2 < 0x11) {
    _Size = (size_t)(param_2);
  }
  memcpy(&DAT_122f5eac,param_1,_Size);
  DAT_122f5ebc = (int)(_Size);
  return;
}


// Reference entry 112891d0; body size 232 bytes.
#line 1 "ENTRY_112891d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_112891d0(int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined1 auStack_84 [112];
  undefined1 auStack_14 [16];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)auStack_84);
  thunk_FUN_113d1ae0(auStack_84,2);
  thunk_FUN_113d1d90(auStack_84,param_1 + 0xd,0x10);
  if (*(int *)(param_1 + 8) == 0) {
    puVar2 = (undefined *)(&DAT_122f5eac);
    iVar1 = (int)(DAT_122f5ebc);
  }
  else {
    puVar2 = (undefined *)(*(undefined **)(param_1 + 4));
    iVar1 = (int)(*(int *)(param_1 + 8));
  }
  thunk_FUN_113d1d90(auStack_84,puVar2,iVar1);
  thunk_FUN_113d1a60(auStack_84,auStack_14);
  iVar1 = (int)(thunk_FUN_113d39f0(param_1 + 0x38,1,auStack_14,0x10,param_1 + 0xd,0x10,0,0,0,0));
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0xc) = 0;
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_113d1ae0(param_1 + 0x98,2);
  thunk_FUN_113cfb70(auStack_14,0x10);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 11289740; body size 390 bytes.
#line 1 "ENTRY_11289740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_11289740(int param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined8 uStack_10;
  undefined1 uStack_8;
  
  iVar7 = (int)(0);
  if (param_2 == 0) {
    param_1 = (int)(param_1 + (*(int *)(param_1 + 0xc50) * 0xf + 0x10f) * 4);
    *(undefined1 *)(param_1 + 0x38) = 1;
    *(undefined4 *)(param_1 + 0x34) = 0;
    thunk_FUN_1128c630(param_1);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
  }
  if (param_2 != 1) {
    if (param_2 != 3) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
    }
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*(int *)(param_1 + 0xc38));
  }
  iVar3 = (int)(*(int *)(param_1 + 0xc50));
  piVar2 = (int *)((int *)(param_1 + 0x4a8 + iVar3 * 0x3c));
  *piVar2 = (int)(*piVar2 + 1);
  puVar1 = (undefined4 *)((undefined4 *)(param_1 + 0x43c + iVar3 * 0x3c));
  if (puVar1[2] == -1) {
LAB_11289859:
    thunk_FUN_1128c370(puVar1);
  }
  else {
    iVar7 = (int)((*(code *)**(undefined4 **)*puVar1)());
    if (*(int *)(*(int *)(iVar7 + 4) + 8 + puVar1[2] * 0xc) == 5) {
      iVar7 = (int)(thunk_FUN_1128b0e0(puVar1));
      if (iVar7 == 0) {
        piVar2 = (int *)((int *)*puVar1);
        iVar7 = (int)(puVar1[1]);
        uVar6 = (uint)(puVar1[0xd]);
        iVar3 = (int)(puVar1[2]);
        puVar4 = (uint *)(*(uint **)(iVar7 + 4 + iVar3 * 0x24));
        *(byte *)(iVar7 + 0x21 + iVar3 * 0x24) = *(byte *)(iVar7 + 0x21 + iVar3 * 0x24) & 0xf7 | 1;
        if ((puVar4 != (uint *)0x0) && (*(int *)(iVar7 + 0x1c + iVar3 * 0x24) == 8)) {
          uVar5 = (uint)((uint)*(byte *)(iVar7 + 0x1b + iVar3 * 0x24));
          if (uVar5 < uVar6) {
            uVar6 = (uint)(uVar5);
          }
          *puVar4 = (uint)(uVar6);
        }
        uStack_1c = (undefined4)(0);
        uStack_18 = (undefined4)(0);
        uStack_10 = (undefined8)(0);
        uStack_8 = (undefined1)(0);
        uStack_20 = (undefined4)(0);
        iVar7 = (int)(0);
        if (*(int *)(param_1 + 0xc50) != 0) {
          iVar7 = (int)(param_1 + 0x400 + *(int *)(param_1 + 0xc50) * 0x3c);
        }
        iVar7 = (int)((**(code **)(*piVar2 + 4))(puVar1,iVar7,&uStack_20));
        if (iVar7 == 0) goto LAB_11289859;
      }
    }
    else {
      iVar7 = (int)(9);
    }
    if (*(int *)(param_1 + 0xca4) == 0) {
      *(int *)(param_1 + 0xca4) = puVar1[1] + puVar1[2] * 0x24;
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar7);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar7);
}


// Reference entry 11289930; body size 96 bytes.
#line 1 "ENTRY_11289930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_11289930(int param_2)
{
  int param_1 = (int )this;
  if (param_2 == 1) {
    thunk_FUN_112c49f0(param_1 + 4,*(undefined4 *)(param_1 + 0xc38),*(undefined4 *)(param_1 + 0xc48)
                       ,0x436);
  }
  else {
    if (param_2 == 2) {
      thunk_FUN_112c48e0(param_1 + 4,*(undefined4 *)(param_1 + 0xc38),
                         *(undefined4 *)(param_1 + 0xc48),0x436);
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
    }
    if (param_2 == 3) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xc38));
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 1128a260; body size 14 bytes.
#line 1 "ENTRY_1128a260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1128a260(undefined4 param_1)

{
  thunk_FUN_1128d660(param_1,1);
  return;
}


// Reference entry 1128a280; body size 14 bytes.
#line 1 "ENTRY_1128a280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1128a280(undefined4 param_1)

{
  thunk_FUN_1128d660(param_1,0);
  return;
}


// Reference entry 1128a2a0; body size 298 bytes.
#line 1 "ENTRY_1128a2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_1128a2a0(int param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined8 uStack_10;
  undefined1 uStack_8;
  
  iVar4 = (int)(0);
  if (param_2 == 0) {
    param_1 = (int)(param_1 + (*(int *)(param_1 + 0xc50) * 0xf + 0x10f) * 4);
    *(undefined1 *)(param_1 + 0x39) = 1;
    thunk_FUN_1128c630(param_1);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
  }
  if (param_2 == 1) {
    iVar4 = (int)(*(int *)(param_1 + 0xc50));
    puVar1 = (undefined4 *)((undefined4 *)(param_1 + 0x43c + iVar4 * 0x3c));
    puVar3 = (undefined4 *)((undefined4 *)(-(uint)(iVar4 != 0) & param_1 + (iVar4 * 0xf + 0x100) * 4));
    if (puVar1[2] == -1) {
      if (((puVar3 == (undefined4 *)0x0) || (puVar1[1] == 0)) ||
         ((*(byte *)(puVar1[1] + 0x20) & 8) == 0)) goto LAB_1128a38a;
      piVar2 = (int *)((int *)*puVar3);
    }
    else {
      iVar4 = (int)((*(code *)**(undefined4 **)*puVar1)());
      iVar4 = (int)(*(int *)(*(int *)(iVar4 + 4) + 8 + puVar1[2] * 0xc));
      if ((iVar4 != 6) && (iVar4 != 0)) goto LAB_1128a38a;
      piVar2 = (int *)((int *)*puVar1);
    }
    uStack_1c = (undefined4)(0);
    uStack_18 = (undefined4)(0);
    uStack_10 = (undefined8)(0);
    uStack_8 = (undefined1)(0);
    uStack_20 = (undefined4)(5);
    iVar4 = (int)((**(code **)(*piVar2 + 4))(puVar1,puVar3,&uStack_20));
    if (iVar4 == 0) {
LAB_1128a38a:
      thunk_FUN_1128c370(puVar1);
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
    }
    if (*(int *)(param_1 + 0xca4) == 0) {
      *(int *)(param_1 + 0xca4) = puVar1[1] + puVar1[2] * 0x24;
    }
  }
  else if (param_2 == 3) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*(int *)(param_1 + 0xc38));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar4);
}


// Reference entry 1128a420; body size 9 bytes.
#line 1 "ENTRY_1128a420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1128a420(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xc38));
}


// Reference entry 1128a430; body size 17 bytes.
#line 1 "ENTRY_1128a430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::FUN_1128a430(undefined4 *param_2)
{
  undefined1 *param_1 = (undefined1 *)this;
  *param_1 = (undefined1)(1);
  *(undefined4 *)(param_1 + 4) = *param_2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(param_1);
}


// Reference entry 1128a450; body size 13 bytes.
#line 1 "ENTRY_1128a450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1128a450(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1128a460; body size 21 bytes.
#line 1 "ENTRY_1128a460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::FUN_1128a460(undefined8 *param_2)
{
  undefined1 *param_1 = (undefined1 *)this;
  *param_1 = (undefined1)(1);
  *(undefined8 *)(param_1 + 8) = *param_2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(param_1);
}


// Reference entry 1128a480; body size 17 bytes.
#line 1 "ENTRY_1128a480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8 * __thiscall Recovered_Bulk::FUN_1128a480(undefined4 param_2,undefined8 *param_3)
{
  undefined8 *param_1 = (undefined8 *)this;
  *param_1 = (undefined8)(*param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8 *)(param_1);
}


// Reference entry 1128a4a0; body size 17 bytes.
#line 1 "ENTRY_1128a4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::FUN_1128a4a0(undefined1 *param_2)
{
  undefined1 *param_1 = (undefined1 *)this;
  *param_1 = (undefined1)(1);
  param_1[1] = *param_2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(param_1);
}


// Reference entry 1128a4c0; body size 13 bytes.
#line 1 "ENTRY_1128a4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::FUN_1128a4c0(undefined4 param_2,undefined1 *param_3)
{
  undefined1 *param_1 = (undefined1 *)this;
  *param_1 = (undefined1)(*param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(param_1);
}


// Reference entry 1128a4d0; body size 17 bytes.
#line 1 "ENTRY_1128a4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::FUN_1128a4d0(undefined4 *param_2)
{
  undefined1 *param_1 = (undefined1 *)this;
  *param_1 = (undefined1)(1);
  *(undefined4 *)(param_1 + 4) = *param_2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(param_1);
}


// Reference entry 1128a4f0; body size 13 bytes.
#line 1 "ENTRY_1128a4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1128a4f0(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1128a5c0; body size 22 bytes.
#line 1 "ENTRY_1128a5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __thiscall Recovered_Bulk::FUN_1128a5c0(undefined4 *param_2)
{
  char *param_1 = (char *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_2);
  if (*param_1 == '\0') {
    *param_1 = (char)('\x01');
  }
  *(undefined4 *)(param_1 + 4) = uVar1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)(param_1);
}


// Reference entry 1128a5e0; body size 3 bytes.
#line 1 "ENTRY_1128a5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1128a5e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1128a5f0; body size 3 bytes.
#line 1 "ENTRY_1128a5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1128a5f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1128a600; body size 3 bytes.
#line 1 "ENTRY_1128a600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1128a600(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1128a610; body size 3 bytes.
#line 1 "ENTRY_1128a610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1128a610(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1128a620; body size 11 bytes.
#line 1 "ENTRY_1128a620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1128a620(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1128a630; body size 15 bytes.
#line 1 "ENTRY_1128a630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1128a630(undefined8 *param_2)
{
  undefined8 *param_1 = (undefined8 *)this;
  *param_1 = (undefined8)(*param_2);
  return;
}


// Reference entry 1128a650; body size 11 bytes.
#line 1 "ENTRY_1128a650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1128a650(undefined1 *param_2)
{
  undefined1 *param_1 = (undefined1 *)this;
  *param_1 = (undefined1)(*param_2);
  return;
}


// Reference entry 1128a660; body size 11 bytes.
#line 1 "ENTRY_1128a660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1128a660(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1128a670; body size 5 bytes.
#line 1 "ENTRY_1128a670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1128a670(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1128a680; body size 6 bytes.
#line 1 "ENTRY_1128a680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1128a680(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x10);
}


// Reference entry 1128a690; body size 7 bytes.
#line 1 "ENTRY_1128a690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1128a690(undefined4 param_1)

{
  undefined1 uStack_1;
  
  uStack_1 = (undefined1)((undefined1)((uint)param_1 >> 0x18));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(uStack_1);
}


// Reference entry 1128a6a0; body size 7 bytes.
#line 1 "ENTRY_1128a6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1128a6a0(undefined4 param_1)

{
  undefined1 uStack_1;
  
  uStack_1 = (undefined1)((undefined1)((uint)param_1 >> 0x18));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(uStack_1);
}


// Reference entry 1128a6b0; body size 7 bytes.
#line 1 "ENTRY_1128a6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1128a6b0(undefined4 param_1)

{
  undefined1 uStack_1;
  
  uStack_1 = (undefined1)((undefined1)((uint)param_1 >> 0x18));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(uStack_1);
}


// Reference entry 1128a6c0; body size 15 bytes.
#line 1 "ENTRY_1128a6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1128a6c0(undefined4 *param_2)
{
  undefined1 *param_1 = (undefined1 *)this;
  *(undefined4 *)(param_1 + 4) = *param_2;
  *param_1 = (undefined1)(1);
  return;
}


// Reference entry 1128a6e0; body size 15 bytes.
#line 1 "ENTRY_1128a6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1128a6e0(undefined4 *param_2)
{
  undefined1 *param_1 = (undefined1 *)this;
  *(undefined4 *)(param_1 + 4) = *param_2;
  *param_1 = (undefined1)(1);
  return;
}


// Reference entry 1128a700; body size 19 bytes.
#line 1 "ENTRY_1128a700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1128a700(undefined8 *param_2)
{
  undefined1 *param_1 = (undefined1 *)this;
  *(undefined8 *)(param_1 + 8) = *param_2;
  *param_1 = (undefined1)(1);
  return;
}


// Reference entry 1128a770; body size 15 bytes.
#line 1 "ENTRY_1128a770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1128a770(undefined1 *param_2)
{
  undefined1 *param_1 = (undefined1 *)this;
  param_1[1] = *param_2;
  *param_1 = (undefined1)(1);
  return;
}


// Reference entry 1128a790; body size 5 bytes.
#line 1 "ENTRY_1128a790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1128a790(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1128a7a0; body size 5 bytes.
#line 1 "ENTRY_1128a7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1128a7a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1128aa20; body size 56 bytes.
#line 1 "ENTRY_1128aa20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1128aa20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RJsonDataBinding);
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1128aa70; body size 9 bytes.
#line 1 "ENTRY_1128aa70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1128aa70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RJsonDataBindingInterface);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1128ab80; body size 62 bytes.
#line 1 "ENTRY_1128ab80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1128ab80(undefined4 *param_1)

{
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
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0x3a) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1128ac00; body size 3 bytes.
#line 1 "ENTRY_1128ac00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1128ac00(void)

{
  return;
}


// Reference entry 1128ac10; body size 3 bytes.
#line 1 "ENTRY_1128ac10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1128ac10(void)

{
  return;
}


// Reference entry 1128ac20; body size 3 bytes.
#line 1 "ENTRY_1128ac20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1128ac20(void)

{
  return;
}


// Reference entry 1128ac40; body size 65 bytes.
#line 1 "ENTRY_1128ac40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __thiscall Recovered_Bulk::FUN_1128ac40(char *param_2)
{
  char *param_1 = (char *)this;
  undefined4 uVar1;
  
  if (*param_1 == '\x01') {
    if (*param_2 == '\0') {
      *param_1 = (char)('\0');
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)(param_1);
    }
    if (*param_2 == '\x01') {
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)(param_1);
    }
  }
  else if ((*param_1 == '\0') && (*param_2 == '\x01')) {
    uVar1 = (undefined4)(*(undefined4 *)(param_2 + 4));
    *param_1 = (char)('\x01');
    *(undefined4 *)(param_1 + 4) = uVar1;
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)(param_1);
}


// Reference entry 1128aca0; body size 65 bytes.
#line 1 "ENTRY_1128aca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __thiscall Recovered_Bulk::FUN_1128aca0(char *param_2)
{
  char *param_1 = (char *)this;
  undefined4 uVar1;
  
  if (*param_1 == '\x01') {
    if (*param_2 == '\0') {
      *param_1 = (char)('\0');
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)(param_1);
    }
    if (*param_2 == '\x01') {
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)(param_1);
    }
  }
  else if ((*param_1 == '\0') && (*param_2 == '\x01')) {
    uVar1 = (undefined4)(*(undefined4 *)(param_2 + 4));
    *param_1 = (char)('\x01');
    *(undefined4 *)(param_1 + 4) = uVar1;
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)(param_1);
}


// Reference entry 1128ad00; body size 73 bytes.
#line 1 "ENTRY_1128ad00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __thiscall Recovered_Bulk::FUN_1128ad00(char *param_2)
{
  char *param_1 = (char *)this;
  if (*param_1 == '\x01') {
    if (*param_2 == '\0') {
      *param_1 = (char)('\0');
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)(param_1);
    }
    if (*param_2 == '\x01') {
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)(param_1);
    }
  }
  else if ((*param_1 == '\0') && (*param_2 == '\x01')) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *param_1 = (char)('\x01');
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)(param_1);
}


// Reference entry 1128ad60; body size 65 bytes.
#line 1 "ENTRY_1128ad60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __thiscall Recovered_Bulk::FUN_1128ad60(char *param_2)
{
  char *param_1 = (char *)this;
  char cVar1;
  
  if (*param_1 == '\x01') {
    if (*param_2 == '\0') {
      *param_1 = (char)('\0');
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)(param_1);
    }
    if (*param_2 == '\x01') {
      param_1[1] = param_2[1];
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)(param_1);
    }
  }
  else if ((*param_1 == '\0') && (*param_2 == '\x01')) {
    cVar1 = (char)(param_2[1]);
    *param_1 = (char)('\x01');
    param_1[1] = cVar1;
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)(param_1);
}


// Reference entry 1128adc0; body size 81 bytes.
#line 1 "ENTRY_1128adc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_1128adc0(int param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_2 + 0x1b);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 1128ae30; body size 5 bytes.
#line 1 "ENTRY_1128ae30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1128ae30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1128ae40; body size 4 bytes.
#line 1 "ENTRY_1128ae40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1128ae40(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 4);
}


// Reference entry 1128ae50; body size 4 bytes.
#line 1 "ENTRY_1128ae50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1128ae50(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 4);
}


// Reference entry 1128ae60; body size 4 bytes.
#line 1 "ENTRY_1128ae60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1128ae60(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 8);
}


// Reference entry 1128ae70; body size 4 bytes.
#line 1 "ENTRY_1128ae70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1128ae70(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 4);
}


// Reference entry 1128ae80; body size 4 bytes.
#line 1 "ENTRY_1128ae80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1128ae80(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 1);
}


// Reference entry 1128af20; body size 9 bytes.
#line 1 "ENTRY_1128af20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

byte __fastcall FUN_1128af20(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte)(*(byte *)(param_1 + 0x20) >> 3 & 1);
}


// Reference entry 1128b550; body size 11 bytes.
#line 1 "ENTRY_1128b550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1128b550(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1128b560; body size 15 bytes.
#line 1 "ENTRY_1128b560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1128b560(undefined8 *param_2)
{
  undefined8 *param_1 = (undefined8 *)this;
  *param_1 = (undefined8)(*param_2);
  return;
}


// Reference entry 1128b5d0; body size 11 bytes.
#line 1 "ENTRY_1128b5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1128b5d0(undefined1 *param_2)
{
  undefined1 *param_1 = (undefined1 *)this;
  *param_1 = (undefined1)(*param_2);
  return;
}


// Reference entry 1128b5e0; body size 44 bytes.
#line 1 "ENTRY_1128b5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_1128b5e0(int param_2,int param_3)
{
  int param_1 = (int )this;
  if (param_2 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
  }
  if ((*(byte *)(param_1 + 0x20) & 0x20) == 0) {
    switch(*(undefined4 *)(param_1 + 0x1c)) {
    case 1:
    case 0xc:
    case 0xd:
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_2 + param_3 * -8);
    case 2:
    case 3:
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_2 + param_3 * -4);
    case 4:
    case 9:
    case 10:
      param_2 = (int)(param_2 - (uint)*(ushort *)(param_1 + 0x18) * param_3);
      break;
    case 5:
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_2 + param_3 * -0x18);
    case 6:
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_2 - param_3);
    case 0xb:
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_2 + param_3 * -0x10);
    case 0xe:
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_2 + param_3 * -0x1c);
    case 0xf:
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_2 + param_3 * -2);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_2);
}


// Reference entry 1128b700; body size 3 bytes.
#line 1 "ENTRY_1128b700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1128b700(void)

{
  return;
}


// Reference entry 1128b710; body size 3 bytes.
#line 1 "ENTRY_1128b710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1128b710(void)

{
  return;
}


// Reference entry 1128b780; body size 3 bytes.
#line 1 "ENTRY_1128b780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1128b780(void)

{
  return;
}


// Reference entry 1128b8d0; body size 23 bytes.
#line 1 "ENTRY_1128b8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1128b8d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x43c + *(int *)(param_1 + 0xc50) * 0x3c);
}


// Reference entry 1128bb80; body size 29 bytes.
#line 1 "ENTRY_1128bb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1128bb80(int param_1)

{
  if (*(int *)(param_1 + 0xc50) == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + (*(int *)(param_1 + 0xc50) * 0xf + 0x100) * 4);
}


// Reference entry 1128bbb0; body size 29 bytes.
#line 1 "ENTRY_1128bbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1128bbb0(int param_1)

{
  if (*(int *)(param_1 + 0xc50) == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + (*(int *)(param_1 + 0xc50) * 0xf + 0x100) * 4);
}


// Reference entry 1128bbe0; body size 4 bytes.
#line 1 "ENTRY_1128bbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1128bbe0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x14));
}


// Reference entry 1128bbf0; body size 13 bytes.
#line 1 "ENTRY_1128bbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1128bbf0(int param_1)

{
  if (*(int *)(param_1 + 0x1c) == 7) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 1128bd90; body size 58 bytes.
#line 1 "ENTRY_1128bd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1128bd90(int param_2,int param_3)
{
  int param_1 = (int )this;
  if (param_2 == 0) {
    thunk_FUN_1128c370(param_3);
    return;
  }
  if (*(int *)(param_1 + 0xca4) == 0) {
    *(int *)(param_1 + 0xca4) = *(int *)(param_3 + 4) + *(int *)(param_3 + 8) * 0x24;
  }
  return;
}


// Reference entry 1128bde0; body size 7 bytes.
#line 1 "ENTRY_1128bde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1128bde0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xc38));
}


// Reference entry 1128bdf0; body size 3 bytes.
#line 1 "ENTRY_1128bdf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1128bdf0(undefined1 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*param_1);
}


// Reference entry 1128be00; body size 3 bytes.
#line 1 "ENTRY_1128be00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1128be00(undefined1 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*param_1);
}


// Reference entry 1128be10; body size 3 bytes.
#line 1 "ENTRY_1128be10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1128be10(undefined1 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*param_1);
}


// Reference entry 1128be20; body size 3 bytes.
#line 1 "ENTRY_1128be20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1128be20(undefined1 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*param_1);
}


// Reference entry 1128be30; body size 92 bytes.
#line 1 "ENTRY_1128be30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1128be30(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  uint *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  if (*(char *)(param_1 + 0x1a) != '\0') {
    cVar3 = (char)(*(char *)(param_1 + 0x1a) + -1);
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
    *(char *)(param_1 + 0x1a) = cVar3;
    if (cVar3 == '\0') {
      *(undefined4 **)(param_1 + 8) = puVar1;
      *(undefined1 *)(param_1 + 0x1a) = 1;
      *(undefined4 *)(param_1 + 4) = 0;
      return;
    }
    if (puVar1 == (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      return;
    }
    if ((*(byte *)(param_1 + 0x20) & 0x20) == 0) {
      switch(*(undefined4 *)(param_1 + 0x1c)) {
      case 1:
      case 0xc:
      case 0xd:
        *(undefined4 **)(param_1 + 4) = puVar1 + 2;
        return;
      case 2:
      case 3:
        *(undefined4 **)(param_1 + 4) = puVar1 + 1;
        return;
      case 4:
      case 9:
      case 10:
        *(uint *)(param_1 + 4) = (int)puVar1 + (uint)*(ushort *)(param_1 + 0x18);
        return;
      case 5:
        *(undefined4 **)(param_1 + 4) = puVar1 + 6;
        return;
      case 6:
        *(int *)(param_1 + 4) = (int)puVar1 + 1;
        return;
      case 7:
        puVar4 = (uint *)((uint *)(**(code **)*puVar1)());
        uVar7 = (uint)(0);
        if (*puVar4 != 0) {
          iVar6 = (int)(0);
          do {
            iVar2 = (int)(*(int *)(param_1 + 0x14));
            if (((*(char *)(iVar6 + 0x1b + iVar2) != '\0') &&
                (*(char *)(iVar6 + 0x1a + iVar2) == '\x01')) && (*(int *)(iVar6 + 4 + iVar2) == 0))
            {
              *(undefined4 *)(iVar6 + 4 + iVar2) = *(undefined4 *)(iVar6 + 8 + iVar2);
            }
            uVar5 = (undefined4)(thunk_FUN_1128d490(*(undefined2 *)(param_1 + 0x18)));
            uVar7 = (uint)(uVar7 + 1);
            *(undefined4 *)(iVar6 + 4 + *(int *)(param_1 + 0x14)) = uVar5;
            iVar6 = (int)(iVar6 + 0x24);
          } while (uVar7 < *puVar4);
        }
        break;
      case 0xb:
        *(undefined4 **)(param_1 + 4) = puVar1 + 4;
        return;
      case 0xe:
        *(undefined4 **)(param_1 + 4) = puVar1 + 7;
        return;
      case 0xf:
        *(int *)(param_1 + 4) = (int)puVar1 + 2;
        return;
      }
    }
    *(undefined4 **)(param_1 + 4) = puVar1;
  }
  return;
}


// Reference entry 1128bfd0; body size 56 bytes.
#line 1 "ENTRY_1128bfd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1128bfd0(undefined4 *param_2,int param_3)
{
  int param_1 = (int )this;
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  if (param_2 == (undefined4 *)0x0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)((undefined4 *)0x0);
  }
  if ((*(byte *)(param_1 + 0x20) & 0x20) == 0) {
    switch(*(undefined4 *)(param_1 + 0x1c)) {
    case 1:
    case 0xc:
    case 0xd:
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_2 + param_3 * 2);
    case 2:
    case 3:
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_2 + param_3);
    case 4:
    case 9:
    case 10:
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)((undefined4 *)((int)param_2 + (uint)*(ushort *)(param_1 + 0x18) * param_3));
    case 5:
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_2 + param_3 * 6);
    case 6:
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)((undefined4 *)((int)param_2 + param_3));
    case 7:
      puVar2 = (uint *)((uint *)(**(code **)*param_2)());
      uVar5 = (uint)(0);
      if (*puVar2 != 0) {
        iVar4 = (int)(0);
        do {
          iVar1 = (int)(*(int *)(param_1 + 0x14));
          if (((*(char *)(iVar4 + 0x1b + iVar1) != '\0') &&
              (*(char *)(iVar4 + 0x1a + iVar1) == '\x01')) && (*(int *)(iVar4 + 4 + iVar1) == 0)) {
            *(undefined4 *)(iVar4 + 4 + iVar1) = *(undefined4 *)(iVar4 + 8 + iVar1);
          }
          uVar3 = (undefined4)(thunk_FUN_1128d490(*(undefined2 *)(param_1 + 0x18)));
          uVar5 = (uint)(uVar5 + 1);
          *(undefined4 *)(iVar4 + 4 + *(int *)(param_1 + 0x14)) = uVar3;
          iVar4 = (int)(iVar4 + 0x24);
        } while (uVar5 < *puVar2);
      }
      break;
    case 0xb:
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_2 + param_3 * 4);
    case 0xe:
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_2 + param_3 * 7);
    case 0xf:
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)((undefined4 *)((int)param_2 + param_3 * 2));
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_2);
}


// Reference entry 1128c170; body size 27 bytes.
#line 1 "ENTRY_1128c170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1128c170(int param_2)
{
  int param_1 = (int )this;
  *(byte *)(param_1 + 0x20) =
       *(byte *)(param_1 + 0x20) |
       (*(int *)(param_1 + 0x1c) != 7) * '\b' - 0xcU & *(byte *)(param_2 + 0x20);
  return;
}


// Reference entry 1128c1a0; body size 9 bytes.
#line 1 "ENTRY_1128c1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

byte __fastcall FUN_1128c1a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte)(*(byte *)(param_1 + 0x20) >> 4 & 1);
}


// Reference entry 1128c1b0; body size 9 bytes.
#line 1 "ENTRY_1128c1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

byte __fastcall FUN_1128c1b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte)(*(byte *)(param_1 + 0x21) >> 3 & 1);
}


// Reference entry 1128c1c0; body size 57 bytes.
#line 1 "ENTRY_1128c1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __stdcall FUN_1128c1c0(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_1[1] != 0) && ((undefined4 *)*param_1 != (undefined4 *)0x0)) {
    puVar1 = (uint *)((uint *)(*(code *)**(undefined4 **)*param_1)());
    uVar3 = (uint)(0);
    if (*puVar1 != 0) {
      uVar2 = (uint)(puVar1[2]);
      do {
        if (((*(byte *)(uVar2 + 0x20) & 1) != 0) && ((*(byte *)(uVar2 + 0x21) & 9) == 0)) {
          return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar2);
        }
        uVar3 = (uint)(uVar3 + 1);
        uVar2 = (uint)(uVar2 + 0x24);
      } while (uVar3 < *puVar1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0);
}


// Reference entry 1128c210; body size 57 bytes.
#line 1 "ENTRY_1128c210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __stdcall FUN_1128c210(undefined4 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_2 != 0) && (param_1 != (undefined4 *)0x0)) {
    puVar1 = (uint *)((uint *)(**(code **)*param_1)());
    uVar3 = (uint)(0);
    if (*puVar1 != 0) {
      uVar2 = (uint)(puVar1[2]);
      do {
        if (((*(byte *)(uVar2 + 0x20) & 1) != 0) && ((*(byte *)(uVar2 + 0x21) & 9) == 0)) {
          return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar2);
        }
        uVar3 = (uint)(uVar3 + 1);
        uVar2 = (uint)(uVar2 + 0x24);
      } while (uVar3 < *puVar1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0);
}


// Reference entry 1128c270; body size 6 bytes.
#line 1 "ENTRY_1128c270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

byte __fastcall FUN_1128c270(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte)(*(byte *)(param_1 + 0x20) & 1);
}


// Reference entry 1128c280; body size 24 bytes.
#line 1 "ENTRY_1128c280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1128c280(int param_1)

{
  if (((*(char *)(param_1 + 0x1b) != '\0') && (*(char *)(param_1 + 0x1a) == '\x01')) &&
     (*(int *)(param_1 + 4) == 0)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 1128c2a0; body size 11 bytes.
#line 1 "ENTRY_1128c2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

byte __fastcall FUN_1128c2a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte)(~(*(byte *)(param_1 + 0x21) >> 2) & 1);
}


// Reference entry 1128c320; body size 30 bytes.
#line 1 "ENTRY_1128c320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1128c320(undefined4 param_1,undefined4 param_2,int *param_3)

{
  (*(code *)(&PTR_LAB_119e5a68)[*param_3])(param_2);
  return;
}


// Reference entry 1128c5f0; body size 3 bytes.
#line 1 "ENTRY_1128c5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1128c5f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1128c600; body size 3 bytes.
#line 1 "ENTRY_1128c600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1128c600(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1128c610; body size 3 bytes.
#line 1 "ENTRY_1128c610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1128c610(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1128c620; body size 3 bytes.
#line 1 "ENTRY_1128c620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1128c620(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1128ca30; body size 27 bytes.
#line 1 "ENTRY_1128ca30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1128ca30(int param_2)
{
  int param_1 = (int )this;
  *(int *)(param_1 + 0xca4) = *(int *)(param_2 + 4) + *(int *)(param_2 + 8) * 0x24;
  return;
}


// Reference entry 1128ca60; body size 4 bytes.
#line 1 "ENTRY_1128ca60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1128ca60(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  return;
}


// Reference entry 1128ca70; body size 4 bytes.
#line 1 "ENTRY_1128ca70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1128ca70(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  return;
}


// Reference entry 1128ca80; body size 4 bytes.
#line 1 "ENTRY_1128ca80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1128ca80(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  return;
}


// Reference entry 1128cb00; body size 4 bytes.
#line 1 "ENTRY_1128cb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1128cb00(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  return;
}


// Reference entry 1128cd30; body size 30 bytes.
#line 1 "ENTRY_1128cd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1128cd30(char param_2)
{
  int param_1 = (int )this;
  byte bVar1;
  
  bVar1 = (byte)(*(byte *)(param_1 + 0x21) | 8);
  if (param_2 == '\0') {
    bVar1 = (byte)(*(byte *)(param_1 + 0x21) & 0xf7);
  }
  *(byte *)(param_1 + 0x21) = bVar1;
  return;
}


// Reference entry 1128cd60; body size 11 bytes.
#line 1 "ENTRY_1128cd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1128cd60(int param_1)

{
  *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) & 0xf7 | 1;
  return;
}


// Reference entry 1128cd70; body size 10 bytes.
#line 1 "ENTRY_1128cd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1128cd70(byte param_2)
{
  int param_1 = (int )this;
  *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) | param_2;
  return;
}


// Reference entry 1128cda0; body size 9 bytes.
#line 1 "ENTRY_1128cda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

byte __fastcall FUN_1128cda0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte)(*(byte *)(param_1 + 0x20) >> 5 & 1);
}


// Reference entry 1128d3e0; body size 48 bytes.
#line 1 "ENTRY_1128d3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1128d3e0(int param_2,uint param_3)
{
  int param_1 = (int )this;
  *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) & 0xf7 | 1;
  if (((*(uint **)(param_1 + 4) != (uint *)0x0) && (*(int *)(param_1 + 0x1c) == 8)) &&
     (param_2 == 5)) {
    if (*(byte *)(param_1 + 0x1b) < param_3) {
      param_3 = (uint)((uint)*(byte *)(param_1 + 0x1b));
    }
    **(uint **)(param_1 + 4) = param_3;
  }
  return;
}


// Reference entry 1128d570; body size 55 bytes.
#line 1 "ENTRY_1128d570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1128d570(undefined4 *param_2,int param_3)
{
  int param_1 = (int )this;
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (param_2 != (undefined4 *)0x0) {
    if ((*(byte *)(param_1 + 0x20) & 0x20) == 0) {
      switch(*(undefined4 *)(param_1 + 0x1c)) {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)((undefined4 *)((int)param_2 + param_3));
      case 7:
        puVar1 = (uint *)((uint *)(**(code **)*param_2)());
        uVar5 = (uint)(0);
        if (*puVar1 != 0) {
          iVar4 = (int)(0);
          do {
            iVar3 = (int)(*(int *)(param_1 + 0x14));
            if (((*(char *)(iVar4 + 0x1b + iVar3) != '\0') &&
                (*(char *)(iVar4 + 0x1a + iVar3) == '\x01')) && (*(int *)(iVar4 + 4 + iVar3) == 0))
            {
              *(undefined4 *)(iVar4 + 4 + iVar3) = *(undefined4 *)(iVar4 + 8 + iVar3);
              iVar3 = (int)(*(int *)(param_1 + 0x14));
            }
            uVar2 = (undefined4)(func_0x1007ed66(*(undefined4 *)(iVar3 + iVar4 + 4),param_3));
            uVar5 = (uint)(uVar5 + 1);
            *(undefined4 *)(*(int *)(param_1 + 0x14) + 4 + iVar4) = uVar2;
            iVar4 = (int)(iVar4 + 0x24);
          } while (uVar5 < *puVar1);
        }
      }
    }
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1128d800; body size 22 bytes.
#line 1 "ENTRY_1128d800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1128d800(undefined4 param_1,int *param_2)

{
  (*(code *)(&PTR_LAB_119e5a68)[*param_2])(param_1);
  return;
}


// Reference entry 1128d820; body size 3 bytes.
#line 1 "ENTRY_1128d820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1128d820(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1128d830; body size 3 bytes.
#line 1 "ENTRY_1128d830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1128d830(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1128d840; body size 3 bytes.
#line 1 "ENTRY_1128d840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1128d840(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1128d850; body size 3 bytes.
#line 1 "ENTRY_1128d850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1128d850(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1128d860; body size 3 bytes.
#line 1 "ENTRY_1128d860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1128d860(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1128d870; body size 3 bytes.
#line 1 "ENTRY_1128d870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1128d870(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1128d880; body size 3 bytes.
#line 1 "ENTRY_1128d880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1128d880(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1128d890; body size 3 bytes.
#line 1 "ENTRY_1128d890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1128d890(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1128d9c0; body size 6 bytes.
#line 1 "ENTRY_1128d9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1128d9c0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(4);
}


// Reference entry 1128d9d0; body size 88 bytes.
#line 1 "ENTRY_1128d9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1128d9d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = param_2[1];
  thunk_FUN_1145c250(param_1 + 2,param_2 + 2,0x11);
  thunk_FUN_1145c250((int)param_1 + 0x19,(int)param_2 + 0x19,0x41);
  thunk_FUN_1145c250((int)param_1 + 0x5a,(int)param_2 + 0x5a,0x21);
  thunk_FUN_1145c250((int)param_1 + 0x7b,(int)param_2 + 0x7b,0x25);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1128dc00; body size 9 bytes.
#line 1 "ENTRY_1128dc00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1128dc00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RJsonHandlerInterface);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1128de10; body size 88 bytes.
#line 1 "ENTRY_1128de10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1128de10(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = param_2[1];
  thunk_FUN_1145c250(param_1 + 2,param_2 + 2,0x11);
  thunk_FUN_1145c250((int)param_1 + 0x19,(int)param_2 + 0x19,0x41);
  thunk_FUN_1145c250((int)param_1 + 0x5a,(int)param_2 + 0x5a,0x21);
  thunk_FUN_1145c250((int)param_1 + 0x7b,(int)param_2 + 0x7b,0x25);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1128e080; body size 8 bytes.
#line 1 "ENTRY_1128e080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

byte __fastcall FUN_1128e080(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte)(*(byte *)(param_1 + 0x21) >> 1 & 1);
}


// Reference entry 1128e090; body size 52 bytes.
#line 1 "ENTRY_1128e090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1128e090(int param_1)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  
  uVar3 = (uint)(0);
  pbVar2 = (byte *)((byte *)(param_1 + 0xcd9));
  while( true ) {
    cVar1 = (char)(thunk_FUN_1128c260());
    if ((cVar1 != '\0') && ((*pbVar2 & 2) != 0)) break;
    uVar3 = (uint)(uVar3 + 1);
    pbVar2 = (byte *)(pbVar2 + 0x24);
    if (3 < uVar3) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
}


// Reference entry 1128e0f0; body size 8 bytes.
#line 1 "ENTRY_1128e0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1128e0f0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  thunk_FUN_112c35f0(param_1 + 0x810,param_2,param_3);
  return;
}


// Reference entry 1128ea70; body size 4 bytes.
#line 1 "ENTRY_1128ea70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1128ea70(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x50));
}


// Reference entry 1128f290; body size 48 bytes.
#line 1 "ENTRY_1128f290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1128f290(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_MusicPlaybackQuality);
  param_1[1] = *(undefined4 *)(param_2 + 4);
  param_1[2] = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 0xc);
  *(undefined1 *)((int)param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  *(undefined1 *)((int)param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1128f2d0; body size 46 bytes.
#line 1 "ENTRY_1128f2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1128f2d0(undefined4 param_2,undefined4 param_3,undefined1 param_4,
            undefined1 param_5,undefined1 param_6)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 3) = param_4;
  *(undefined1 *)((int)param_1 + 0xd) = param_5;
  *(undefined1 *)((int)param_1 + 0xe) = param_6;
  *param_1 = (undefined4)((uint)&ghidra_vftable_MusicPlaybackQuality);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1128f350; body size 42 bytes.
#line 1 "ENTRY_1128f350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_1128f350(int param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 1128f460; body size 4 bytes.
#line 1 "ENTRY_1128f460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1128f460(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 1128f500; body size 62 bytes.
#line 1 "ENTRY_1128f500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_1128f500(undefined4 param_2,int param_3)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_111c0480(param_2,param_3,"bd:%u,sr:%u,c:%hhu,l:%hhu,d:%hhu",
                             *(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                             *(undefined1 *)(param_1 + 0xc),*(undefined1 *)(param_1 + 0xd),
                             *(undefined1 *)(param_1 + 0xe)));
  if ((-1 < iVar1) && (iVar1 < param_3)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 112910d0; body size 24 bytes.
#line 1 "ENTRY_112910d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_112910d0(void)

{
  undefined1 uVar1;
  
  if (DAT_122f5674 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
  }
  uVar1 = (undefined1)(thunk_FUN_11248b40(0x12));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(uVar1);
}


// Reference entry 112910f0; body size 103 bytes.
#line 1 "ENTRY_112910f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_112910f0(undefined4 param_1,uint param_2,uint *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_4 == 1) {
    iVar1 = (int)(func_0x112907e0(param_1,param_2,param_3));
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1);
  }
  if (param_4 == 5) {
    iVar1 = (int)(func_0x112909d0(param_1));
    if (iVar1 != 200) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1);
    }
    uVar2 = (uint)(thunk_FUN_1145c720(param_1,param_2,"Success"));
    if ((-1 < (int)uVar2) && (uVar2 < param_2)) {
      *param_3 = (uint)(uVar2);
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(200);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(500);
}


// Reference entry 11291170; body size 16 bytes.
#line 1 "ENTRY_11291170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11291170(int param_1)

{
  Sleep(param_1 * 1000);
  return;
}


// Reference entry 11291e30; body size 60 bytes.
#line 1 "ENTRY_11291e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11291e30(uint param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  int iStack_4;
  
  uVar1 = (uint)(2 - *(int *)(param_1 + 8));
  if (param_2 < uVar1) {
    uVar1 = (uint)(param_2);
  }
  iStack_4 = (int)(param_1);
  thunk_FUN_1145eab0(param_1 + 0x10,param_2 - uVar1,&iStack_4);
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))(iStack_4,1);
  return;
}


// Reference entry 11291e80; body size 77 bytes.
#line 1 "ENTRY_11291e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_11291e80(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  int iVar2;
  int unaff_EDI;
  
  uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x14) + 0x18))(param_2,1));
  iVar2 = (int)(0);
  if (*(char *)(param_1 + 5) != '\0') {
    iVar2 = (int)(2);
  }
  thunk_FUN_1145f2e0(param_1 + 8,uVar1,&stack0xfffffff4);
  if (param_1 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(unaff_EDI + iVar2);
}


// Reference entry 11292b30; body size 17 bytes.
#line 1 "ENTRY_11292b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11292b30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUsageDataSharing);
  thunk_FUN_112a7f20(param_1 + 0xc);
  return;
}


// Reference entry 11292d30; body size 30 bytes.
#line 1 "ENTRY_11292d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11292d30(int param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_112a7f50(param_1 + 0x30));
  if (cVar1 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x30);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11292d60; body size 3 bytes.
#line 1 "ENTRY_11292d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_11292d60(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11292f60; body size 6 bytes.
#line 1 "ENTRY_11292f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11292f60(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x12);
}


// Reference entry 11292fb0; body size 9 bytes.
#line 1 "ENTRY_11292fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11292fb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSelectThreadInterface);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11292fc0; body size 20 bytes.
#line 1 "ENTRY_11292fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11292fc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSelectThread);
  thunk_FUN_112a7f20(param_1 + 0x4f);
  return;
}


// Reference entry 11292fe0; body size 3 bytes.
#line 1 "ENTRY_11292fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11292fe0(void)

{
  return;
}


// Reference entry 11293200; body size 4 bytes.
#line 1 "ENTRY_11293200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11293200(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 4));
}


// Reference entry 11293320; body size 12 bytes.
#line 1 "ENTRY_11293320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11293320(void)

{
  thunk_FUN_11293330();
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11293940; body size 3 bytes.
#line 1 "ENTRY_11293940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_11293940(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11293ae0; body size 30 bytes.
#line 1 "ENTRY_11293ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11293ae0(int param_1)

{
  if (param_1 != -1) {
    DAT_122f5ec8 = (int)(_fdopen(param_1,"w"));
  }
  return;
}


// Reference entry 11293b10; body size 132 bytes.
#line 1 "ENTRY_11293b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11293b10(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  if (DAT_122f5ec8 == 0) {
    func_0x100473bb(&DAT_119e4c18,4,param_1,&stack0x00000008);
  }
  else {
    puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_101a6c80(DAT_122f5ec8,param_1,0,&stack0x00000008));
    iVar2 = (int)(__stdio_common_vfprintf(*puVar1,puVar1[1]));
    if (iVar2 < 0) {
      piVar3 = (int *)(_errno());
      thunk_FUN_111f75b0("\n*** error writing to RTF output stream (errno=%d) ***\n",*piVar3);
    }
    iVar2 = (int)(fflush((FILE *)DAT_122f5ec8));
    if (iVar2 == -1) {
      piVar3 = (int *)(_errno());
      thunk_FUN_111f75b0("\n*** error writing to RTF output stream (errno=%d) ***\n",*piVar3);
      return;
    }
  }
  return;
}


// Reference entry 11293bc0; body size 37 bytes.
#line 1 "ENTRY_11293bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11293bc0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_1);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  thunk_FUN_11293bf0(param_1,(int)pcVar2 - (int)(param_1 + 1));
  return;
}


// Reference entry 11293df0; body size 34 bytes.
#line 1 "ENTRY_11293df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11293df0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_101a6c80(param_1,param_2,0,param_3));
  __stdio_common_vfprintf(*puVar1,puVar1[1]);
  return;
}


// Reference entry 11293f50; body size 20 bytes.
#line 1 "ENTRY_11293f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11293f50(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11293f70; body size 18 bytes.
#line 1 "ENTRY_11293f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11293f70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11293f90; body size 22 bytes.
#line 1 "ENTRY_11293f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11293f90(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11293fb0; body size 18 bytes.
#line 1 "ENTRY_11293fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11293fb0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11294150; body size 20 bytes.
#line 1 "ENTRY_11294150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11294150(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11294170; body size 11 bytes.
#line 1 "ENTRY_11294170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11294170(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11294180; body size 11 bytes.
#line 1 "ENTRY_11294180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11294180(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11294190; body size 22 bytes.
#line 1 "ENTRY_11294190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11294190(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 112941b0; body size 11 bytes.
#line 1 "ENTRY_112941b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_112941b0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 112941c0; body size 11 bytes.
#line 1 "ENTRY_112941c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_112941c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 112941d0; body size 22 bytes.
#line 1 "ENTRY_112941d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_112941d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 112941f0; body size 22 bytes.
#line 1 "ENTRY_112941f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_112941f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11294210; body size 11 bytes.
#line 1 "ENTRY_11294210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11294210(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11294220; body size 11 bytes.
#line 1 "ENTRY_11294220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11294220(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11294230; body size 25 bytes.
#line 1 "ENTRY_11294230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11294230(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 11294250; body size 13 bytes.
#line 1 "ENTRY_11294250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11294250(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 11294260; body size 13 bytes.
#line 1 "ENTRY_11294260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11294260(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 11294270; body size 3 bytes.
#line 1 "ENTRY_11294270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11294270(void)

{
  return;
}


// Reference entry 11294390; body size 15 bytes.
#line 1 "ENTRY_11294390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11294390(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 112943b0; body size 15 bytes.
#line 1 "ENTRY_112943b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112943b0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 112943d0; body size 5 bytes.
#line 1 "ENTRY_112943d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_112943d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 112943e0; body size 31 bytes.
#line 1 "ENTRY_112943e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_112943e0(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (in_EAX = *param_2, *(int *)(param_1 + 0x10) <= (int)in_EAX)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(in_EAX & 0xffffff00);
}


// Reference entry 11294630; body size 7 bytes.
#line 1 "ENTRY_11294630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11294630(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 11294640; body size 7 bytes.
#line 1 "ENTRY_11294640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11294640(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 11294650; body size 5 bytes.
#line 1 "ENTRY_11294650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11294650(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11294660; body size 5 bytes.
#line 1 "ENTRY_11294660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11294660(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11294670; body size 5 bytes.
#line 1 "ENTRY_11294670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11294670(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11294680; body size 5 bytes.
#line 1 "ENTRY_11294680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11294680(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11294690; body size 5 bytes.
#line 1 "ENTRY_11294690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11294690(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 112946a0; body size 22 bytes.
#line 1 "ENTRY_112946a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112946a0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = 0;
  return;
}


// Reference entry 112946c0; body size 22 bytes.
#line 1 "ENTRY_112946c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112946c0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = 0;
  return;
}


// Reference entry 112946e0; body size 3 bytes.
#line 1 "ENTRY_112946e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112946e0(void)

{
  return;
}


// Reference entry 112946f0; body size 15 bytes.
#line 1 "ENTRY_112946f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_112946f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 11294710; body size 15 bytes.
#line 1 "ENTRY_11294710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11294710(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 11294730; body size 5 bytes.
#line 1 "ENTRY_11294730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11294730(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11294740; body size 5 bytes.
#line 1 "ENTRY_11294740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11294740(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11294750; body size 5 bytes.
#line 1 "ENTRY_11294750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11294750(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11294760; body size 5 bytes.
#line 1 "ENTRY_11294760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11294760(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11294770; body size 5 bytes.
#line 1 "ENTRY_11294770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11294770(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11294780; body size 5 bytes.
#line 1 "ENTRY_11294780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11294780(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11294790; body size 5 bytes.
#line 1 "ENTRY_11294790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11294790(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 112947a0; body size 5 bytes.
#line 1 "ENTRY_112947a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_112947a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 112947b0; body size 11 bytes.
#line 1 "ENTRY_112947b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112947b0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 112947c0; body size 11 bytes.
#line 1 "ENTRY_112947c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112947c0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 112947d0; body size 5 bytes.
#line 1 "ENTRY_112947d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_112947d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 112947e0; body size 5 bytes.
#line 1 "ENTRY_112947e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_112947e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 112947f0; body size 5 bytes.
#line 1 "ENTRY_112947f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_112947f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11294800; body size 18 bytes.
#line 1 "ENTRY_11294800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11294800(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 112948e0; body size 11 bytes.
#line 1 "ENTRY_112948e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_112948e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 112948f0; body size 11 bytes.
#line 1 "ENTRY_112948f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_112948f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11294900; body size 16 bytes.
#line 1 "ENTRY_11294900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11294900(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11294920; body size 3 bytes.
#line 1 "ENTRY_11294920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11294920(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11294930; body size 52 bytes.
#line 1 "ENTRY_11294930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11294930(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11294980; body size 13 bytes.
#line 1 "ENTRY_11294980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11294980(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11294990; body size 13 bytes.
#line 1 "ENTRY_11294990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11294990(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11294a40; body size 25 bytes.
#line 1 "ENTRY_11294a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11294a40(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_3;
  param_1[2] = param_4;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11294a60; body size 101 bytes.
#line 1 "ENTRY_11294a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11294a60(int param_2,int param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0x1000000);
  param_1[1] = param_3;
  param_1[2] = param_2;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  if (param_3 != 0) {
    thunk_FUN_113d4750(param_3);
    uVar1 = (undefined4)(thunk_FUN_113d47c0(param_1[1]));
    param_1[4] = uVar1;
    param_2 = (int)(param_1[2]);
  }
  if (param_2 != 0) {
    thunk_FUN_113cfdb0(param_2);
    uVar1 = (undefined4)(thunk_FUN_113cfe40(param_1[2]));
    param_1[3] = uVar1;
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11294b50; body size 19 bytes.
#line 1 "ENTRY_11294b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11294b50(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 11294b70; body size 19 bytes.
#line 1 "ENTRY_11294b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11294b70(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 11294e20; body size 12 bytes.
#line 1 "ENTRY_11294e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11294e20(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*(char *)(*param_1 + 0xd) == '\0')));
}


// Reference entry 11295010; body size 6 bytes.
#line 1 "ENTRY_11295010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11295010(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 11295020; body size 6 bytes.
#line 1 "ENTRY_11295020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11295020(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 11295110; body size 18 bytes.
#line 1 "ENTRY_11295110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_11295110(int *param_1,int *param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 < *param_2);
}


// Reference entry 11295390; body size 31 bytes.
#line 1 "ENTRY_11295390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11295390(undefined4 *param_1)

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


// Reference entry 11295400; body size 3 bytes.
#line 1 "ENTRY_11295400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11295400(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11295410; body size 3 bytes.
#line 1 "ENTRY_11295410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11295410(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11295420; body size 3 bytes.
#line 1 "ENTRY_11295420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11295420(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11295430; body size 3 bytes.
#line 1 "ENTRY_11295430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11295430(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11295440; body size 3 bytes.
#line 1 "ENTRY_11295440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11295440(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11295450; body size 3 bytes.
#line 1 "ENTRY_11295450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11295450(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11295460; body size 3 bytes.
#line 1 "ENTRY_11295460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11295460(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11295470; body size 3 bytes.
#line 1 "ENTRY_11295470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11295470(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11295710; body size 79 bytes.
#line 1 "ENTRY_11295710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11295710(int param_2)
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


// Reference entry 11295780; body size 31 bytes.
#line 1 "ENTRY_11295780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_11295780(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  cVar1 = (char)(*(char *)(*param_1 + 0xd));
  piVar2 = (int *)((int *)*param_1);
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)((int *)*piVar3);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
    param_1 = (int *)(piVar3);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 112957b0; body size 3 bytes.
#line 1 "ENTRY_112957b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112957b0(void)

{
  return;
}


// Reference entry 112957c0; body size 11 bytes.
#line 1 "ENTRY_112957c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_112957c0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 112957d0; body size 83 bytes.
#line 1 "ENTRY_112957d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_112957d0(int *param_2)
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


// Reference entry 11295840; body size 13 bytes.
#line 1 "ENTRY_11295840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11295840(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 11295850; body size 10 bytes.
#line 1 "ENTRY_11295850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11295850(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  return;
}


// Reference entry 11295860; body size 23 bytes.
#line 1 "ENTRY_11295860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11295860(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_114604d0(param_1));
  if (cVar1 == '\0') {
                    
                    
                    
    abort();
    return;
  }
  return;
}


// Reference entry 11295880; body size 23 bytes.
#line 1 "ENTRY_11295880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11295880(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_114604d0(param_1));
  if (cVar1 == '\0') {
                    
                    
                    
    abort();
    return;
  }
  return;
}


// Reference entry 112958a0; body size 23 bytes.
#line 1 "ENTRY_112958a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112958a0(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_114604d0(param_1));
  if (cVar1 == '\0') {
                    
                    
                    
    abort();
    return;
  }
  return;
}


// Reference entry 112958c0; body size 90 bytes.
#line 1 "ENTRY_112958c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_112958c0(uint param_1)

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


// Reference entry 11295fd0; body size 204 bytes.
#line 1 "ENTRY_11295fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * FUN_11295fd0(int param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = (undefined4 *)(operator_new(0x18));
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    *puVar2 = (undefined4)(0x1000000);
    puVar2[1] = param_2;
    puVar2[2] = param_1;
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[5] = 0;
    if (param_2 != 0) {
      thunk_FUN_113d4750(param_2);
      uVar3 = (undefined4)(thunk_FUN_113d47c0(puVar2[1]));
      puVar2[4] = uVar3;
      param_1 = (int)(puVar2[2]);
    }
    if (param_1 != 0) {
      thunk_FUN_113cfdb0(param_1);
      uVar3 = (undefined4)(thunk_FUN_113cfe40(puVar2[2]));
      puVar2[3] = uVar3;
    }
  }
  cVar1 = (char)(thunk_FUN_11460550(puVar2,1));
  if (cVar1 == '\0') {
    if (puVar2 != (undefined4 *)0x0) {
      if (puVar2[2] != 0) {
        thunk_FUN_113cfe50(puVar2[2]);
        puVar2[2] = 0;
      }
      if (puVar2[1] != 0) {
        thunk_FUN_113d47d0(puVar2[1]);
        puVar2[1] = 0;
      }
      thunk_FUN_1148a50e(puVar2,0x18);
    }
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)((undefined4 *)0x0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(puVar2);
}


// Reference entry 11296240; body size 57 bytes.
#line 1 "ENTRY_11296240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11296240(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 11296290; body size 60 bytes.
#line 1 "ENTRY_11296290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_11296290(int param_1,int param_2)

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


// Reference entry 11296670; body size 58 bytes.
#line 1 "ENTRY_11296670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11296670(int param_2)
{
  uint3 param_1 = (uint3 )this;
  char cVar1;
  undefined4 uStack_4;
  
  uStack_4 = (undefined4)((uint)param_1);
  cVar1 = (char)(thunk_FUN_11460420(param_2,(int)&uStack_4 + 3));
  if (cVar1 == '\0') {
                    
    abort();
  }
  if ((*(uint *)((char *)&uStack_4 + 3) != '\0') && (param_2 != 0)) {
    thunk_FUN_112951e0(1);
  }
  return;
}


// Reference entry 112966c0; body size 106 bytes.
#line 1 "ENTRY_112966c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_112966c0(int param_2)
{
  uint3 param_1 = (uint3 )this;
  char cVar1;
  undefined4 uStack_4;
  
  uStack_4 = (undefined4)((uint)param_1);
  cVar1 = (char)(thunk_FUN_11460420(param_2,(int)&uStack_4 + 3));
  if (cVar1 == '\0') {
                    
    abort();
  }
  if ((*(uint *)((char *)&uStack_4 + 3) != '\0') && (param_2 != 0)) {
    if (*(int *)(param_2 + 8) != 0) {
      thunk_FUN_113cfe50(*(int *)(param_2 + 8));
      *(undefined4 *)(param_2 + 8) = 0;
    }
    if (*(int *)(param_2 + 4) != 0) {
      thunk_FUN_113d47d0(*(int *)(param_2 + 4));
      *(undefined4 *)(param_2 + 4) = 0;
    }
    thunk_FUN_1148a50e(param_2,0x18);
  }
  return;
}


// Reference entry 112967c0; body size 4 bytes.
#line 1 "ENTRY_112967c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_112967c0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 112967d0; body size 4 bytes.
#line 1 "ENTRY_112967d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_112967d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 112967f0; body size 4 bytes.
#line 1 "ENTRY_112967f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_112967f0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0xc);
}


// Reference entry 11296800; body size 4 bytes.
#line 1 "ENTRY_11296800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11296800(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 11296c80; body size 6 bytes.
#line 1 "ENTRY_11296c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11296c80(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xaaaaaaa);
}


// Reference entry 11296c90; body size 6 bytes.
#line 1 "ENTRY_11296c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11296c90(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xaaaaaaa);
}


// Reference entry 11297690; body size 30 bytes.
#line 1 "ENTRY_11297690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11297690(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_DoublyLinkedListNode);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 112976c0; body size 23 bytes.
#line 1 "ENTRY_112976c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_112976c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 112976e0; body size 9 bytes.
#line 1 "ENTRY_112976e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_112976e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_sonos_time_BootClock);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 112976f0; body size 9 bytes.
#line 1 "ENTRY_112976f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_112976f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_sonos_time_IClock);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11297850; body size 88 bytes.
#line 1 "ENTRY_11297850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11297850(undefined4 *param_1)

{
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSSLClientCacheEntry);
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  thunk_FUN_113ddee0(param_1 + 0x4a);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 112979b0; body size 7 bytes.
#line 1 "ENTRY_112979b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_112979b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_DoublyLinkedListNode);
  return;
}


// Reference entry 112979c0; body size 3 bytes.
#line 1 "ENTRY_112979c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112979c0(void)

{
  return;
}


// Reference entry 112979d0; body size 3 bytes.
#line 1 "ENTRY_112979d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112979d0(void)

{
  return;
}


// Reference entry 112979e0; body size 103 bytes.
#line 1 "ENTRY_112979e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_112979e0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  
  iVar1 = (int)(*param_1);
  if (iVar1 != 0) {
    thunk_FUN_11298310();
    uVar3 = (uint)(0);
    if (*(int *)(iVar1 + 0x28) != 0) {
      piVar4 = (int *)((int *)(iVar1 + 0x14));
      do {
        puVar2 = (undefined4 *)((undefined4 *)*piVar4);
        if (puVar2 != (undefined4 *)0x0) {
          if (puVar2[-1] == 0) {
            thunk_FUN_1148b596(puVar2 + -1,4);
          }
          else {
            (**(code **)*puVar2)(3);
          }
        }
        uVar3 = (uint)(uVar3 + 1);
        piVar4 = (int *)(piVar4 + 1);
      } while (uVar3 < *(uint *)(iVar1 + 0x28));
    }
    thunk_FUN_1148a50e(iVar1,0x2c);
  }
  thunk_FUN_112a7f20(param_1 + 1);
  return;
}


// Reference entry 11297a60; body size 7 bytes.
#line 1 "ENTRY_11297a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11297a60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_DoublyLinkedListNode);
  return;
}


// Reference entry 11297a70; body size 67 bytes.
#line 1 "ENTRY_11297a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11297a70(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  
  thunk_FUN_11298310();
  uVar2 = (uint)(0);
  if (*(int *)(param_1 + 0x28) != 0) {
    piVar3 = (int *)((int *)(param_1 + 0x14));
    do {
      puVar1 = (undefined4 *)((undefined4 *)*piVar3);
      if (puVar1 != (undefined4 *)0x0) {
        if (puVar1[-1] == 0) {
          thunk_FUN_1148b596(puVar1 + -1,4);
        }
        else {
          (**(code **)*puVar1)(3);
        }
      }
      uVar2 = (uint)(uVar2 + 1);
      piVar3 = (int *)(piVar3 + 1);
    } while (uVar2 < *(uint *)(param_1 + 0x28));
  }
  return;
}


// Reference entry 11297c40; body size 125 bytes.
#line 1 "ENTRY_11297c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_11297c40(byte param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  
  iVar1 = (int)(*param_1);
  if (iVar1 != 0) {
    thunk_FUN_11298310();
    uVar3 = (uint)(0);
    if (*(int *)(iVar1 + 0x28) != 0) {
      piVar4 = (int *)((int *)(iVar1 + 0x14));
      do {
        puVar2 = (undefined4 *)((undefined4 *)*piVar4);
        if (puVar2 != (undefined4 *)0x0) {
          if (puVar2[-1] == 0) {
            thunk_FUN_1148b596(puVar2 + -1,4);
          }
          else {
            (**(code **)*puVar2)(3);
          }
        }
        uVar3 = (uint)(uVar3 + 1);
        piVar4 = (int *)(piVar4 + 1);
      } while (uVar3 < *(uint *)(iVar1 + 0x28));
    }
    thunk_FUN_1148a50e(iVar1,0x2c);
  }
  thunk_FUN_112a7f20(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 11297ce0; body size 89 bytes.
#line 1 "ENTRY_11297ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_11297ce0(byte param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  
  thunk_FUN_11298310();
  uVar2 = (uint)(0);
  if (*(int *)(param_1 + 0x28) != 0) {
    piVar3 = (int *)((int *)(param_1 + 0x14));
    do {
      puVar1 = (undefined4 *)((undefined4 *)*piVar3);
      if (puVar1 != (undefined4 *)0x0) {
        if (puVar1[-1] == 0) {
          thunk_FUN_1148b596(puVar1 + -1,4);
        }
        else {
          (**(code **)*puVar1)(3);
        }
      }
      uVar2 = (uint)(uVar2 + 1);
      piVar3 = (int *)(piVar3 + 1);
    } while (uVar2 < *(uint *)(param_1 + 0x28));
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x2c);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 11297e80; body size 47 bytes.
#line 1 "ENTRY_11297e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11297e80(int param_2)
{
  int *param_1 = (int *)this;
  if (*param_1 == 0) {
    *param_1 = (int)(param_2);
    param_1[1] = param_2;
    param_1[2] = param_1[2] + 1;
    *(int **)(param_2 + 0xc) = param_1;
    return;
  }
  *(int *)(param_2 + 8) = param_1[1];
  *(int *)(param_1[1] + 4) = param_2;
  param_1[1] = param_2;
  param_1[2] = param_1[2] + 1;
  *(int **)(param_2 + 0xc) = param_1;
  return;
}


// Reference entry 11297fc0; body size 23 bytes.
#line 1 "ENTRY_11297fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_11297fc0(int param_2)
{
  int param_1 = (int )this;
  if ((param_2 != 0) && (*(int *)(param_2 + 0xc) == param_1)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11298400; body size 7 bytes.
#line 1 "ENTRY_11298400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11298400(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)(*param_1);
  iVar3 = (int)(*(int *)(iVar2 + 8));
  while (iVar3 != 0) {
    iVar1 = (int)(*(int *)(iVar3 + 4));
    if (*(undefined4 **)(iVar3 + 0xc) == (undefined4 *)(iVar2 + 8)) {
      if (iVar1 == 0) {
        *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar3 + 8);
      }
      else {
        *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar3 + 8);
      }
      if (*(int *)(iVar3 + 8) == 0) {
        *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar3 + 4);
      }
      else {
        *(undefined4 *)(*(int *)(iVar3 + 8) + 4) = *(undefined4 *)(iVar3 + 4);
      }
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + -1;
      *(undefined4 *)(iVar3 + 8) = 0;
      *(undefined4 *)(iVar3 + 4) = 0;
      *(undefined4 *)(iVar3 + 0xc) = 0;
    }
    *(undefined2 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0x118) = 0;
    *(undefined4 *)(iVar3 + 0x11c) = 0;
    *(undefined4 *)(iVar3 + 0x120) = 0;
    *(undefined4 *)(iVar3 + 0x124) = 0;
    *(undefined1 *)(iVar3 + 0x12) = 0;
    thunk_FUN_113dde70(iVar3 + 0x128);
    iVar3 = (int)(iVar1);
  }
  return;
}


// Reference entry 11298410; body size 3 bytes.
#line 1 "ENTRY_11298410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11298410(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 11298420; body size 4 bytes.
#line 1 "ENTRY_11298420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11298420(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 11298440; body size 3 bytes.
#line 1 "ENTRY_11298440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11298440(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11298510; body size 53 bytes.
#line 1 "ENTRY_11298510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11298510(int param_2,int param_3)
{
  int *param_1 = (int *)this;
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_2 + 8);
  *(int *)(param_2 + 8) = param_3;
  *(int *)(param_3 + 4) = param_2;
  if (*(int *)(param_3 + 8) == 0) {
    param_1[2] = param_1[2] + 1;
    *param_1 = (int)(param_3);
    *(int **)(param_3 + 0xc) = param_1;
    return;
  }
  *(int *)(*(int *)(param_3 + 8) + 4) = param_3;
  param_1[2] = param_1[2] + 1;
  *(int **)(param_3 + 0xc) = param_1;
  return;
}


// Reference entry 11298560; body size 170 bytes.
#line 1 "ENTRY_11298560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_11298560(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  
  if (param_2[3] != 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  }
  iVar2 = (int)(*param_1);
  if (iVar2 == 0) {
    *param_1 = (int)((int)param_2);
    param_1[1] = (int)param_2;
    param_1[2] = param_1[2] + 1;
    param_2[3] = (int)param_1;
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
  }
  do {
    iVar1 = (int)((**(code **)(*param_2 + 4))(iVar2));
    if (-1 < iVar1) {
      param_2[2] = *(int *)(iVar2 + 8);
      *(int **)(iVar2 + 8) = param_2;
      param_2[1] = iVar2;
      if (param_2[2] == 0) {
        param_1[2] = param_1[2] + 1;
        *param_1 = (int)((int)param_2);
        param_2[3] = (int)param_1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
      }
      *(int **)(param_2[2] + 4) = param_2;
      param_1[2] = param_1[2] + 1;
      param_2[3] = (int)param_1;
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
    iVar2 = (int)(*(int *)(iVar2 + 4));
  } while (iVar2 != 0);
  if (*param_1 == 0) {
    *param_1 = (int)((int)param_2);
    param_1[1] = (int)param_2;
    param_1[2] = param_1[2] + 1;
    param_2[3] = (int)param_1;
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
  }
  param_2[2] = param_1[1];
  *(int **)(param_1[1] + 4) = param_2;
  param_1[1] = (int)param_2;
  param_1[2] = param_1[2] + 1;
  param_2[3] = (int)param_1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
}


// Reference entry 11298640; body size 8 bytes.
#line 1 "ENTRY_11298640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11298640(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0xc) != 0);
}


// Reference entry 11298650; body size 73 bytes.
#line 1 "ENTRY_11298650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_11298650(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0x118) = param_2;
  *(undefined4 *)(param_1 + 0x11c) = param_3;
  iVar1 = (int)(thunk_FUN_113deb50(param_4,param_1 + 0x128));
  if (iVar1 != 0) {
    uVar2 = (uint)(thunk_FUN_112b0270(&DAT_119df9ec,4,"set session failed"));
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar2 & 0xffffff00);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(1);
}


// Reference entry 11298b40; body size 4 bytes.
#line 1 "ENTRY_11298b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11298b40(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 11298b50; body size 84 bytes.
#line 1 "ENTRY_11298b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_11298b50(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((param_2 != 0) && (*(undefined4 **)(param_2 + 0xc) == param_1)) {
    if (*(int *)(param_2 + 4) == 0) {
      param_1[1] = *(undefined4 *)(param_2 + 8);
    }
    else {
      *(undefined4 *)(*(int *)(param_2 + 4) + 8) = *(undefined4 *)(param_2 + 8);
    }
    if (*(int *)(param_2 + 8) == 0) {
      *param_1 = (undefined4)(*(undefined4 *)(param_2 + 4));
    }
    else {
      *(undefined4 *)(*(int *)(param_2 + 8) + 4) = *(undefined4 *)(param_2 + 4);
    }
    param_1[2] = param_1[2] + -1;
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11298cd0; body size 47 bytes.
#line 1 "ENTRY_11298cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11298cd0(int param_1)

{
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  thunk_FUN_113dde70(param_1 + 0x128);
  return;
}


// Reference entry 11299590; body size 118 bytes.
#line 1 "ENTRY_11299590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_11299590(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  
  uVar1 = (uint)(*(uint *)(*(int *)(param_2 + 0x34) + 0x74));
  if ((uVar1 == 0) || (uVar1 != *(uint *)(param_1 + 0x19c))) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  }
  piVar3 = (int *)(*(int **)(*(int *)(param_2 + 0x34) + 0x70));
  piVar4 = (int *)(*(int **)(param_1 + 0x198));
  while (uVar2 = uVar1 - 4, 3 < uVar1) {
    if (*piVar3 != *piVar4) goto LAB_112995cd;
    piVar3 = (int *)(piVar3 + 1);
    piVar4 = (int *)(piVar4 + 1);
    uVar1 = (uint)(uVar2);
  }
  if (uVar2 != 0xfffffffc) {
LAB_112995cd:
    if ((char)*piVar3 != (char)*piVar4) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
    }
    if (uVar2 != 0xfffffffd) {
      if (*(char *)((int)piVar3 + 1) != *(char *)((int)piVar4 + 1)) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
      }
      if (uVar2 != 0xfffffffe) {
        if (*(char *)((int)piVar3 + 2) != *(char *)((int)piVar4 + 2)) {
          return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
        }
        if ((uVar2 != 0xffffffff) && (*(char *)((int)piVar3 + 3) != *(char *)((int)piVar4 + 3))) {
          return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
        }
      }
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
}


// Reference entry 11299810; body size 12 bytes.
#line 1 "ENTRY_11299810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_11299810(uint param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(0x7fffffff < param_1);
}


// Reference entry 11299820; body size 12 bytes.
#line 1 "ENTRY_11299820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_11299820(uint param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(param_1 < 0x80000000);
}


// Reference entry 11299c70; body size 6 bytes.
#line 1 "ENTRY_11299c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11299c70(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(10);
}


// Reference entry 11299cb0; body size 5 bytes.
#line 1 "ENTRY_11299cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11299cb0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = (int)(param_2 + -3);
  if (param_2 < 3) {
    iVar1 = (int)(0);
  }
  thunk_FUN_112afbd0(param_1,iVar1,param_3,param_4);
  return;
}


// Reference entry 11299cc0; body size 16 bytes.
#line 1 "ENTRY_11299cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_11299cc0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(param_1 + -3);
  if (param_1 < 3) {
    iVar1 = (int)(0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1);
}


// Reference entry 11299ce0; body size 19 bytes.
#line 1 "ENTRY_11299ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_11299ce0(void)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_11248b40(0x28));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(cVar1 != '\0');
}


// Reference entry 11299d00; body size 19 bytes.
#line 1 "ENTRY_11299d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_11299d00(void)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_11248b40(0x16));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(cVar1 != '\0');
}


// Reference entry 11299d20; body size 19 bytes.
#line 1 "ENTRY_11299d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_11299d20(void)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_11248b40(0x1b));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(cVar1 != '\0');
}


// Reference entry 11299d60; body size 5 bytes.
#line 1 "ENTRY_11299d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11299d60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 11299d70; body size 11 bytes.
#line 1 "ENTRY_11299d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11299d70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11299d80; body size 11 bytes.
#line 1 "ENTRY_11299d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11299d80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11299d90; body size 12 bytes.
#line 1 "ENTRY_11299d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11299d90(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*(char *)(*param_1 + 0xd) == '\0')));
}


// Reference entry 11299da0; body size 6 bytes.
#line 1 "ENTRY_11299da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11299da0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 11299db0; body size 6 bytes.
#line 1 "ENTRY_11299db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11299db0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 1129a4e0; body size 3 bytes.
#line 1 "ENTRY_1129a4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1129a4e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129a4f0; body size 31 bytes.
#line 1 "ENTRY_1129a4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_1129a4f0(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  cVar1 = (char)(*(char *)(*param_1 + 0xd));
  piVar2 = (int *)((int *)*param_1);
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)((int *)*piVar3);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
    param_1 = (int *)(piVar3);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 1129a520; body size 13 bytes.
#line 1 "ENTRY_1129a520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1129a520(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 1129a530; body size 10 bytes.
#line 1 "ENTRY_1129a530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1129a530(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  return;
}


// Reference entry 1129a540; body size 7 bytes.
#line 1 "ENTRY_1129a540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1129a540(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x867d);
}


// Reference entry 1129a550; body size 7 bytes.
#line 1 "ENTRY_1129a550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1129a550(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x867c));
}


// Reference entry 1129a560; body size 13 bytes.
#line 1 "ENTRY_1129a560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1129a560(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x490) = param_2;
  return;
}


// Reference entry 1129a570; body size 5 bytes.
#line 1 "ENTRY_1129a570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129a570(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129a580; body size 10 bytes.
#line 1 "ENTRY_1129a580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1129a580(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 1129a750; body size 76 bytes.
#line 1 "ENTRY_1129a750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1129a750(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_2[9]);
  if (piVar1 != (int *)0x0) {
    if (piVar1 == (int *)(param_2)) {
      uVar2 = (undefined4)((**(code **)(*piVar1 + 4))(param_1));
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)((int *)param_2[9]);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_2));
        param_2[9] = 0;
        return;
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return;
}


// Reference entry 1129a930; body size 68 bytes.
#line 1 "ENTRY_1129a930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129a930(char *param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  char cVar1;
  uint uVar2;
  __time64_t _Var3;
  
  cVar1 = (char)(*param_1);
  _Var3 = (__time64_t)(_time64((__time64_t *)0x0));
  if (((int)((ulonglong)_Var3 >> 0x20) == 0 || _Var3 < 0) &&
     ((_Var3 < 0 || ((uint)_Var3 < 0x69fcd446)))) {
    uVar2 = (uint)(*param_4);
    if ((uVar2 & 0x200) != 0) {
      uVar2 = (uint)(uVar2 & 0xfffffdff);
      *param_4 = (uint)(uVar2);
    }
    if ((cVar1 != '\0') && ((uVar2 & 1) != 0)) {
      *param_4 = (uint)(uVar2 & 0xfffffffe);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 1129ad30; body size 5 bytes.
#line 1 "ENTRY_1129ad30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1129ad30(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = (int)(param_2 + -3);
  if (param_2 < 3) {
    iVar1 = (int)(0);
  }
  thunk_FUN_112afbd0(param_1,iVar1,param_3,param_4);
  return;
}


// Reference entry 1129b350; body size 26 bytes.
#line 1 "ENTRY_1129b350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1129b350(undefined4 *param_1)

{
  switch(*param_1) {
  case 0:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("");
  case 1:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("optOutExempt");
  case 2:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("config");
  case 3:
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("unknown");
}


// Reference entry 1129b3c0; body size 30 bytes.
#line 1 "ENTRY_1129b3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1129b3c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0xffffffff);
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1129b750; body size 101 bytes.
#line 1 "ENTRY_1129b750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_1129b750(uint param_2,uint param_3)
{
  uint *param_1 = (uint *)this;
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint3 uVar5;
  uint uVar6;
  
  uVar6 = (uint)(param_1[2]);
  if (uVar6 == 0xffffffff) {
    uVar6 = (uint)(*param_1);
    param_1[2] = uVar6;
    if (param_1[3] == 0xffffffff) {
      param_1[3] = param_1[1];
    }
  }
  uVar3 = (uint)(*param_1);
  bVar1 = (bool)(false);
  if ((uVar3 < param_2) ||
     ((param_2 == uVar3 && ((uVar3 = param_1[1], uVar3 == 0xffffffff || (uVar3 <= param_3)))))) {
    bVar1 = (bool)(true);
  }
  uVar4 = (uint)(uVar3 & 0xffffff00);
  bVar2 = (bool)(false);
  if ((param_2 < uVar6) ||
     ((param_2 == uVar6 && ((param_1[3] == 0xffffffff || (param_3 <= param_1[3])))))) {
    uVar4 = (uint)(((uint)((int3)(uVar3 >> 8)) << 8 | (uint)(1)));
    bVar2 = (bool)(true);
  }
  uVar5 = (uint3)((uint3)(uVar4 >> 8));
  if ((bVar1) && (bVar2)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(((uint)(uVar5) << 8 | (uint)(1)));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((uint)uVar5 << 8);
}


// Reference entry 1129b830; body size 24 bytes.
#line 1 "ENTRY_1129b830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1129b830(undefined4 *param_1)

{
  if ((param_1[2] == -1) && (param_1[2] = *param_1, param_1[3] == -1)) {
    param_1[3] = param_1[1];
  }
  return;
}


// Reference entry 1129bcf0; body size 11 bytes.
#line 1 "ENTRY_1129bcf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1129bcf0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1129bd90; body size 44 bytes.
#line 1 "ENTRY_1129bd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1129bd90(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  switch(*(undefined1 *)(param_2 + 6)) {
  case 0:
    *param_1 = (undefined4)((uint)&ghidra_vftable_RSystemTime);
    *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
    *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)((int)param_2 + 6);
    *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
    *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)((int)param_2 + 10);
    *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
    *(undefined2 *)((int)param_1 + 0xe) = *(undefined2 *)((int)param_2 + 0xe);
    *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
    *(undefined2 *)((int)param_1 + 0x12) = *(undefined2 *)((int)param_2 + 0x12);
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    *param_1 = (undefined4)((uint)&ghidra_vftable_RDateTime);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
  case 1:
    uVar1 = (undefined4)(param_2[1]);
    *param_1 = (undefined4)(*param_2);
    param_1[1] = uVar1;
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1129be70; body size 5 bytes.
#line 1 "ENTRY_1129be70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129be70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129be80; body size 5 bytes.
#line 1 "ENTRY_1129be80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129be80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129be90; body size 5 bytes.
#line 1 "ENTRY_1129be90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129be90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129bea0; body size 5 bytes.
#line 1 "ENTRY_1129bea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129bea0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129beb0; body size 5 bytes.
#line 1 "ENTRY_1129beb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129beb0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129bec0; body size 5 bytes.
#line 1 "ENTRY_1129bec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129bec0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129bed0; body size 5 bytes.
#line 1 "ENTRY_1129bed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129bed0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129bee0; body size 5 bytes.
#line 1 "ENTRY_1129bee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129bee0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129bef0; body size 5 bytes.
#line 1 "ENTRY_1129bef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129bef0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129bf00; body size 5 bytes.
#line 1 "ENTRY_1129bf00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129bf00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129bf10; body size 5 bytes.
#line 1 "ENTRY_1129bf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129bf10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129bf20; body size 5 bytes.
#line 1 "ENTRY_1129bf20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129bf20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129bf30; body size 5 bytes.
#line 1 "ENTRY_1129bf30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129bf30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129bf40; body size 5 bytes.
#line 1 "ENTRY_1129bf40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129bf40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129bf50; body size 5 bytes.
#line 1 "ENTRY_1129bf50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129bf50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129bf60; body size 5 bytes.
#line 1 "ENTRY_1129bf60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129bf60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129bf70; body size 5 bytes.
#line 1 "ENTRY_1129bf70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129bf70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129bf80; body size 5 bytes.
#line 1 "ENTRY_1129bf80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129bf80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129bf90; body size 5 bytes.
#line 1 "ENTRY_1129bf90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129bf90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129bfa0; body size 5 bytes.
#line 1 "ENTRY_1129bfa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129bfa0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129bfb0; body size 5 bytes.
#line 1 "ENTRY_1129bfb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129bfb0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129bfc0; body size 5 bytes.
#line 1 "ENTRY_1129bfc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129bfc0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129bfd0; body size 5 bytes.
#line 1 "ENTRY_1129bfd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129bfd0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129bfe0; body size 5 bytes.
#line 1 "ENTRY_1129bfe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129bfe0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129bff0; body size 5 bytes.
#line 1 "ENTRY_1129bff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129bff0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129c000; body size 5 bytes.
#line 1 "ENTRY_1129c000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129c000(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129c010; body size 5 bytes.
#line 1 "ENTRY_1129c010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129c010(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129c020; body size 5 bytes.
#line 1 "ENTRY_1129c020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129c020(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129c030; body size 5 bytes.
#line 1 "ENTRY_1129c030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129c030(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129c040; body size 5 bytes.
#line 1 "ENTRY_1129c040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129c040(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129c050; body size 3 bytes.
#line 1 "ENTRY_1129c050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1129c050(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129c060; body size 5 bytes.
#line 1 "ENTRY_1129c060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129c060(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129c070; body size 5 bytes.
#line 1 "ENTRY_1129c070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129c070(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129c080; body size 3 bytes.
#line 1 "ENTRY_1129c080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1129c080(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129c090; body size 21 bytes.
#line 1 "ENTRY_1129c090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129c090(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(param_2[1]);
  *param_1 = (undefined4)(*param_2);
  param_1[1] = uVar1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
}


// Reference entry 1129c0b0; body size 93 bytes.
#line 1 "ENTRY_1129c0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

ushort FUN_1129c0b0(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSystemTime);
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 4);
  *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)(param_2 + 6);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 8);
  *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)(param_2 + 10);
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 0xc);
  *(undefined2 *)((int)param_1 + 0xe) = *(undefined2 *)(param_2 + 0xe);
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 0x10);
  uVar1 = (ushort)(*(ushort *)(param_2 + 0x12));
  *(ushort *)((int)param_1 + 0x12) = uVar1;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 0x14);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDateTime);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ ushort)(uVar1 & 0xff00);
}


// Reference entry 1129c270; body size 5 bytes.
#line 1 "ENTRY_1129c270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129c270(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129c280; body size 5 bytes.
#line 1 "ENTRY_1129c280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129c280(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129c290; body size 5 bytes.
#line 1 "ENTRY_1129c290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129c290(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129c2a0; body size 11 bytes.
#line 1 "ENTRY_1129c2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1129c2a0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 1129c2b0; body size 5 bytes.
#line 1 "ENTRY_1129c2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129c2b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129c2c0; body size 5 bytes.
#line 1 "ENTRY_1129c2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129c2c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129c2d0; body size 5 bytes.
#line 1 "ENTRY_1129c2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129c2d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129c2e0; body size 5 bytes.
#line 1 "ENTRY_1129c2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129c2e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129c2f0; body size 5 bytes.
#line 1 "ENTRY_1129c2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129c2f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129c300; body size 5 bytes.
#line 1 "ENTRY_1129c300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129c300(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129c310; body size 5 bytes.
#line 1 "ENTRY_1129c310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129c310(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129c320; body size 5 bytes.
#line 1 "ENTRY_1129c320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129c320(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129c330; body size 5 bytes.
#line 1 "ENTRY_1129c330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129c330(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129c340; body size 5 bytes.
#line 1 "ENTRY_1129c340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129c340(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129c350; body size 5 bytes.
#line 1 "ENTRY_1129c350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129c350(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129c360; body size 5 bytes.
#line 1 "ENTRY_1129c360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129c360(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129c370; body size 5 bytes.
#line 1 "ENTRY_1129c370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129c370(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129c380; body size 5 bytes.
#line 1 "ENTRY_1129c380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129c380(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129c390; body size 5 bytes.
#line 1 "ENTRY_1129c390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129c390(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129c3a0; body size 5 bytes.
#line 1 "ENTRY_1129c3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129c3a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129c3b0; body size 5 bytes.
#line 1 "ENTRY_1129c3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129c3b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129c3c0; body size 5 bytes.
#line 1 "ENTRY_1129c3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129c3c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129c3d0; body size 12 bytes.
#line 1 "ENTRY_1129c3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_1129c3d0(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1 *)(param_1 + 0x20) = param_2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 1129c3e0; body size 12 bytes.
#line 1 "ENTRY_1129c3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_1129c3e0(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1 *)(param_1 + 0x20) = param_2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 1129c3f0; body size 40 bytes.
#line 1 "ENTRY_1129c3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1129c3f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  switch(*(undefined1 *)(param_2 + 6)) {
  case 0:
    *param_1 = (undefined4)((uint)&ghidra_vftable_RSystemTime);
    *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
    *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)((int)param_2 + 6);
    *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
    *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)((int)param_2 + 10);
    *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
    *(undefined2 *)((int)param_1 + 0xe) = *(undefined2 *)((int)param_2 + 0xe);
    *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
    *(undefined2 *)((int)param_1 + 0x12) = *(undefined2 *)((int)param_2 + 0x12);
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    *param_1 = (undefined4)((uint)&ghidra_vftable_RDateTime);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
  case 1:
    uVar1 = (undefined4)(param_2[1]);
    *param_1 = (undefined4)(*param_2);
    param_1[1] = uVar1;
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1129c4d0; body size 33 bytes.
#line 1 "ENTRY_1129c4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1129c4d0(undefined4 *param_1)

{
  *(undefined4 *)((int)param_1 + 0x15) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDateTime);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1129c500; body size 91 bytes.
#line 1 "ENTRY_1129c500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1129c500(int param_2)
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDateTime);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1129c580; body size 91 bytes.
#line 1 "ENTRY_1129c580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1129c580(int param_2)
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDateTime);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1129c600; body size 85 bytes.
#line 1 "ENTRY_1129c600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1129c600(int param_2)
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


// Reference entry 1129c7a0; body size 3 bytes.
#line 1 "ENTRY_1129c7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1129c7a0(void)

{
  return;
}


// Reference entry 1129c7b0; body size 3 bytes.
#line 1 "ENTRY_1129c7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1129c7b0(void)

{
  return;
}


// Reference entry 1129c7c0; body size 3 bytes.
#line 1 "ENTRY_1129c7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1129c7c0(void)

{
  return;
}


// Reference entry 1129c7d0; body size 3 bytes.
#line 1 "ENTRY_1129c7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1129c7d0(void)

{
  return;
}


// Reference entry 1129ca10; body size 79 bytes.
#line 1 "ENTRY_1129ca10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_1129ca10(int param_2)
{
  int param_1 = (int )this;
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 10);
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_2 + 0xe);
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_2 + 0x12);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 1129ca80; body size 4 bytes.
#line 1 "ENTRY_1129ca80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1129ca80(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x18));
}


// Reference entry 1129ca90; body size 4 bytes.
#line 1 "ENTRY_1129ca90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1129ca90(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x20));
}


// Reference entry 1129ce30; body size 20 bytes.
#line 1 "ENTRY_1129ce30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1129ce30(int param_1)

{
  *(undefined1 *)(param_1 + 4) = 0;
  thunk_FUN_1012d130(&DAT_1186d2ee,0);
  return;
}


// Reference entry 1129cea0; body size 38 bytes.
#line 1 "ENTRY_1129cea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1129cea0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  switch(*(undefined1 *)(param_2 + 6)) {
  case 0:
    *param_1 = (undefined4)((uint)&ghidra_vftable_RSystemTime);
    *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
    *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)((int)param_2 + 6);
    *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
    *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)((int)param_2 + 10);
    *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
    *(undefined2 *)((int)param_1 + 0xe) = *(undefined2 *)((int)param_2 + 0xe);
    *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
    *(undefined2 *)((int)param_1 + 0x12) = *(undefined2 *)((int)param_2 + 0x12);
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    *param_1 = (undefined4)((uint)&ghidra_vftable_RDateTime);
    return;
  case 1:
    uVar1 = (undefined4)(param_2[1]);
    *param_1 = (undefined4)(*param_2);
    param_1[1] = uVar1;
  }
  return;
}


// Reference entry 1129cf70; body size 31 bytes.
#line 1 "ENTRY_1129cf70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

ushort FUN_1129cf70(byte param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  switch(param_1) {
  case 0:
    *(undefined2 *)(param_3 + 1) = *(undefined2 *)(param_2 + 1);
    *(undefined2 *)((int)param_3 + 6) = *(undefined2 *)((int)param_2 + 6);
    *(undefined2 *)(param_3 + 2) = *(undefined2 *)(param_2 + 2);
    *(undefined2 *)((int)param_3 + 10) = *(undefined2 *)((int)param_2 + 10);
    *(undefined2 *)(param_3 + 3) = *(undefined2 *)(param_2 + 3);
    *(undefined2 *)((int)param_3 + 0xe) = *(undefined2 *)((int)param_2 + 0xe);
    *(undefined2 *)(param_3 + 4) = *(undefined2 *)(param_2 + 4);
    uVar1 = (undefined2)(*(undefined2 *)((int)param_2 + 0x12));
    *(undefined2 *)((int)param_3 + 0x12) = uVar1;
    *(undefined1 *)(param_3 + 5) = *(undefined1 *)(param_2 + 5);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ ushort)(((uint)((char)((ushort)uVar1 >> 8)) << 8 | (uint)(param_1)));
  case 1:
    uVar2 = (undefined4)(*param_2);
    param_3[1] = param_2[1];
    *param_3 = (undefined4)(uVar2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ ushort)((ushort)param_1);
}


// Reference entry 1129d220; body size 31 bytes.
#line 1 "ENTRY_1129d220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_1129d220(undefined1 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0:
    func_0x1003418a(param_2);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(param_1);
  case 1:
    uVar1 = (undefined4)(*param_2);
    param_3[1] = param_2[1];
    *param_3 = (undefined4)(uVar1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(param_1);
}


// Reference entry 1129d3b0; body size 3 bytes.
#line 1 "ENTRY_1129d3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1129d3b0(void)

{
  return;
}


// Reference entry 1129d3c0; body size 30 bytes.
#line 1 "ENTRY_1129d3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1129d3c0(undefined4 *param_1)

{
  if (*(char *)(param_1 + 6) != -1) {
    switch(*(char *)(param_1 + 6)) {
    case '\0':
      (**(code **)*param_1)(0);
    }
  }
  return;
}


// Reference entry 1129d410; body size 3 bytes.
#line 1 "ENTRY_1129d410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1129d410(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129d420; body size 3 bytes.
#line 1 "ENTRY_1129d420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1129d420(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129d430; body size 4 bytes.
#line 1 "ENTRY_1129d430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1129d430(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 4);
}


// Reference entry 1129d450; body size 4 bytes.
#line 1 "ENTRY_1129d450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1129d450(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x18));
}


// Reference entry 1129d460; body size 4 bytes.
#line 1 "ENTRY_1129d460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1129d460(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x20));
}


// Reference entry 1129d470; body size 4 bytes.
#line 1 "ENTRY_1129d470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1129d470(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x18));
}


// Reference entry 1129d480; body size 4 bytes.
#line 1 "ENTRY_1129d480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1129d480(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x20));
}


// Reference entry 1129d490; body size 35 bytes.
#line 1 "ENTRY_1129d490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

ushort FUN_1129d490(byte param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  switch(param_1) {
  case 0:
    *param_3 = (undefined4)((uint)&ghidra_vftable_RSystemTime);
    *(undefined2 *)(param_3 + 1) = *(undefined2 *)(param_2 + 1);
    *(undefined2 *)((int)param_3 + 6) = *(undefined2 *)((int)param_2 + 6);
    *(undefined2 *)(param_3 + 2) = *(undefined2 *)(param_2 + 2);
    *(undefined2 *)((int)param_3 + 10) = *(undefined2 *)((int)param_2 + 10);
    *(undefined2 *)(param_3 + 3) = *(undefined2 *)(param_2 + 3);
    *(undefined2 *)((int)param_3 + 0xe) = *(undefined2 *)((int)param_2 + 0xe);
    *(undefined2 *)(param_3 + 4) = *(undefined2 *)(param_2 + 4);
    uVar1 = (undefined2)(*(undefined2 *)((int)param_2 + 0x12));
    *(undefined2 *)((int)param_3 + 0x12) = uVar1;
    *(undefined1 *)(param_3 + 5) = *(undefined1 *)(param_2 + 5);
    *param_3 = (undefined4)((uint)&ghidra_vftable_RDateTime);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ ushort)(((uint)((char)((ushort)uVar1 >> 8)) << 8 | (uint)(param_1)));
  case 1:
    uVar2 = (undefined4)(*param_2);
    param_3[1] = param_2[1];
    *param_3 = (undefined4)(uVar2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ ushort)((ushort)param_1);
}


// Reference entry 1129da10; body size 3 bytes.
#line 1 "ENTRY_1129da10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1129da10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129da20; body size 5 bytes.
#line 1 "ENTRY_1129da20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_1129da20(undefined1 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(param_1);
}


// Reference entry 1129da30; body size 20 bytes.
#line 1 "ENTRY_1129da30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1129da30(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
  }
  uVar1 = (undefined4)(func_0x1004964d());
                    
  thunk_FUN_11243860(uVar1);
}


// Reference entry 1129da50; body size 20 bytes.
#line 1 "ENTRY_1129da50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1129da50(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
  }
  uVar1 = (undefined4)(func_0x10076477());
                    
  thunk_FUN_11243860(uVar1);
}


// Reference entry 1129da70; body size 3 bytes.
#line 1 "ENTRY_1129da70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1129da70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129da80; body size 3 bytes.
#line 1 "ENTRY_1129da80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1129da80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129da90; body size 3 bytes.
#line 1 "ENTRY_1129da90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1129da90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1129daa0; body size 8 bytes.
#line 1 "ENTRY_1129daa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1129daa0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(char *)(param_1 + 0x18) == -1);
}


// Reference entry 1129ddd0; body size 64 bytes.
#line 1 "ENTRY_1129ddd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129ddd0(byte *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uStack_4;
  
  if ((*param_1 & 5) == 1) {
    thunk_FUN_113cff40(param_2,&uStack_4,&param_1);
    cVar1 = (char)(thunk_FUN_113d0870(uStack_4,param_1));
    if (cVar1 != '\0') {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 1129de20; body size 243 bytes.
#line 1 "ENTRY_1129de20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_1129de20(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *_Dst;
  int iVar5;
  int iVar6;
  
  if ((param_1 == (int *)0x0) || (param_2 == 0)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)((int *)0x0);
  }
  piVar4 = (int *)(malloc(0x10));
  if (piVar4 != (int *)0x0) {
    _Dst = (void *)((void *)param_1[3]);
    piVar4[3] = (int)_Dst;
    iVar1 = (int)(*param_1);
    *piVar4 = (int)(iVar1);
    iVar5 = (int)(param_1[2]);
    piVar4[2] = iVar5;
    iVar2 = (int)(param_1[2]);
    piVar4[1] = iVar2;
    iVar6 = (int)(*(int *)(param_2 + 8));
    if (iVar2 < iVar6 + iVar5) {
      iVar3 = (int)(1);
      if (0 < iVar2) {
        iVar3 = (int)(iVar2 * 2);
      }
      for (; iVar3 < iVar6 + iVar5; iVar3 = iVar3 * 2) {
      }
      _Dst = (void *)(malloc(iVar3 * iVar1));
      if (_Dst == (void *)0x0) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(piVar4);
      }
      if ((void *)piVar4[3] != (void *)0x0) {
        memcpy(_Dst,(void *)piVar4[3],piVar4[2] * iVar1);
        free((void *)piVar4[3]);
      }
      iVar5 = (int)(piVar4[2]);
      piVar4[3] = (int)_Dst;
      piVar4[1] = iVar3;
      iVar6 = (int)(*(int *)(param_2 + 8));
    }
    if (*(void **)(param_2 + 0xc) != (void *)0x0) {
      memcpy((void *)(iVar5 * iVar1 + (int)_Dst),*(void **)(param_2 + 0xc),iVar6 * iVar1);
      iVar5 = (int)(piVar4[2]);
      iVar6 = (int)(*(int *)(param_2 + 8));
    }
    piVar4[2] = iVar5 + iVar6;
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(piVar4);
}


// Reference entry 1129df50; body size 194 bytes.
#line 1 "ENTRY_1129df50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1129df50(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  int iVar5;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    iVar4 = (int)(param_1[2]);
    iVar5 = (int)(*(int *)(param_2 + 8));
    iVar1 = (int)(param_1[1]);
    iVar2 = (int)(*param_1);
    if (iVar1 < iVar5 + iVar4) {
      iVar3 = (int)(1);
      if (0 < iVar1) {
        iVar3 = (int)(iVar1 * 2);
      }
      for (; iVar3 < iVar5 + iVar4; iVar3 = iVar3 * 2) {
      }
      _Dst = (void *)(malloc(iVar3 * iVar2));
      if (_Dst == (void *)0x0) {
        return;
      }
      if ((void *)param_1[3] != (void *)0x0) {
        memcpy(_Dst,(void *)param_1[3],param_1[2] * iVar2);
        free((void *)param_1[3]);
      }
      iVar4 = (int)(param_1[2]);
      param_1[1] = iVar3;
      param_1[3] = (int)_Dst;
      iVar5 = (int)(*(int *)(param_2 + 8));
    }
    if (*(void **)(param_2 + 0xc) != (void *)0x0) {
      memcpy((void *)(iVar4 * iVar2 + param_1[3]),*(void **)(param_2 + 0xc),iVar5 * iVar2);
      iVar4 = (int)(param_1[2]);
      iVar5 = (int)(*(int *)(param_2 + 8));
    }
    param_1[2] = iVar4 + iVar5;
  }
  return;
}


// Reference entry 1129e080; body size 56 bytes.
#line 1 "ENTRY_1129e080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * FUN_1129e080(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)((undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)(malloc(0x10));
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[3] = param_1[3];
    *puVar1 = (undefined4)(*param_1);
    puVar1[2] = param_1[2];
    puVar1[1] = param_1[2];
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(puVar1);
}


// Reference entry 1129e5b0; body size 168 bytes.
#line 1 "ENTRY_1129e5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_1129e5b0(int param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = (int)(param_1 + 0xc);
    cVar3 = (char)(thunk_FUN_112a7f50(iVar1));
    if (cVar3 != '\0') {
      puVar2 = (uint *)(*(uint **)(param_1 + 4));
      piVar5 = (int *)((int *)*puVar2);
      uVar4 = (uint)((int)piVar5 + param_2);
      if (uVar4 < puVar2[1]) {
        *puVar2 = (uint)(uVar4);
        thunk_FUN_112a8010(iVar1);
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(piVar5);
      }
      uVar4 = (uint)(*(uint *)(param_1 + 8));
      if (*(uint *)(param_1 + 8) < param_2) {
        uVar4 = (uint)(param_2);
      }
      piVar5 = (int *)((int *)thunk_FUN_1129e8e0(uVar4));
      if (piVar5 != (int *)0x0) {
        piVar5[3] = (int)puVar2;
        piVar5[2] = puVar2[2];
        puVar2[2] = (uint)piVar5;
        *(int **)(param_1 + 4) = piVar5;
        *piVar5 = (int)(param_2 + 0x10 + (int)piVar5);
        thunk_FUN_112a8010(iVar1);
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(piVar5 + 4);
      }
      thunk_FUN_112a8010(iVar1);
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)((int *)0x0);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)((int *)0x0);
}


// Reference entry 1129ee40; body size 73 bytes.
#line 1 "ENTRY_1129ee40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1129ee40(int param_1)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  
  if (param_1 != 0) {
    _Memory = (undefined4 *)(*(undefined4 **)(param_1 + 8));
    if (_Memory != (undefined4 *)0x0) {
      for (puVar1 = (undefined4 *)((undefined4 *)*_Memory); puVar1 != (undefined4 *)0x0;
          puVar1 = (undefined4 *)*puVar1) {
        free(_Memory);
        _Memory = (undefined4 *)(puVar1);
      }
      *(undefined4 **)(param_1 + 8) = _Memory;
      *(undefined4 **)(param_1 + 0xc) = _Memory + 1;
      *(undefined4 **)(param_1 + 0x10) = _Memory + 0x801;
    }
    *(undefined2 *)(param_1 + 4) = 0;
  }
  return;
}


// Reference entry 1129f180; body size 83 bytes.
#line 1 "ENTRY_1129f180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_1129f180(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    iVar1 = (int)(thunk_FUN_1145d170(param_2,param_3 | 0x100,0x180));
    *param_1 = (int)(iVar1);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(iVar1 != -1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(false);
}


// Reference entry 1129f3d0; body size 11 bytes.
#line 1 "ENTRY_1129f3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined8 FUN_1129f3d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8)(((unsigned long long)(*(undefined4 *)(param_1 + 0x1c)) << 32 | (unsigned long long)(*(undefined4 *)(param_1 + 0x20))));
}


// Reference entry 1129f4c0; body size 24 bytes.
#line 1 "ENTRY_1129f4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1129f4c0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(uint *)(param_1 + 0x28) - *(uint *)(param_1 + 0x2c));
  if (*(uint *)(param_1 + 0x28) < *(uint *)(param_1 + 0x2c)) {
    iVar1 = (int)(0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1);
}


// Reference entry 1129f680; body size 11 bytes.
#line 1 "ENTRY_1129f680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129f680(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xc4));
}


// Reference entry 1129f690; body size 152 bytes.
#line 1 "ENTRY_1129f690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1129f690(void *param_1,void *param_2)

{
  memcpy(param_1,param_2,0x2130);
  if (*(int *)((int)param_2 + 0x24) != 0) {
    func_0x10093199(param_1,param_2);
  }
  *(undefined4 *)((int)param_2 + 8) = 0xffffffff;
  *(undefined4 *)((int)param_2 + 0x128) = 0;
  *(undefined4 *)((int)param_2 + 0x124) = 0;
  *(undefined4 *)((int)param_2 + 0x28) = 0;
  *(undefined4 *)((int)param_2 + 0x2c) = 0;
  *(undefined4 *)((int)param_2 + 0x38) = 0;
  *(undefined4 *)((int)param_2 + 0xac) = 0;
  *(undefined4 *)((int)param_2 + 0x30) = 0;
  *(undefined4 *)((int)param_2 + 0x34) = 0;
  *(undefined2 *)((int)param_2 + 0xaa) = 0;
  *(undefined4 *)((int)param_2 + 0xb8) = 0;
  *(undefined4 *)((int)param_2 + 0xbc) = 0;
  *(undefined4 *)((int)param_2 + 0xc0) = 0;
  *(undefined4 *)((int)param_2 + 0xc4) = 0;
  *(undefined4 *)((int)param_2 + 0x24) = 0;
  return;
}


// Reference entry 1129f830; body size 83 bytes.
#line 1 "ENTRY_1129f830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_1129f830(int param_1)

{
  uint uVar1;
  uint in_EAX;
  size_t _Size;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(in_EAX & 0xffffff00);
  }
  uVar1 = (uint)(*(uint *)(param_1 + 0x2c));
  if (uVar1 < *(uint *)(param_1 + 0x28)) {
    _Size = (size_t)(*(uint *)(param_1 + 0x28) - uVar1);
    *(size_t *)(param_1 + 0x28) = _Size;
    memmove(*(void **)(param_1 + 0x128),(void *)(uVar1 + (int)*(void **)(param_1 + 0x128)),_Size);
    uVar2 = (undefined4)(*(undefined4 *)(param_1 + 0x28));
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 0;
    uVar2 = (undefined4)(0);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((int3)((uint)uVar2 >> 8)) << 8 | (uint)(1)));
}


// Reference entry 1129fb80; body size 45 bytes.
#line 1 "ENTRY_1129fb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1129fb80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  *(undefined4 *)(param_1 + 0xc4) = param_2;
  *(undefined4 *)(param_1 + 0xb8) = param_3;
  *(undefined4 *)(param_1 + 0xbc) = param_4;
  *(undefined4 *)(param_1 + 0xc0) = param_5;
  return;
}


// Reference entry 1129fbc0; body size 15 bytes.
#line 1 "ENTRY_1129fbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1129fbc0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xe0) = param_2;
  return;
}


// Reference entry 1129fbe0; body size 26 bytes.
#line 1 "ENTRY_1129fbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1129fbe0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(param_2[1]);
  *(undefined4 *)(param_1 + 0xd8) = *param_2;
  *(undefined4 *)(param_1 + 0xdc) = uVar1;
  return;
}


// Reference entry 1129fc00; body size 21 bytes.
#line 1 "ENTRY_1129fc00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1129fc00(int param_1)

{
  if (param_1 != 0) {
    func_0x1001ac08(*(undefined4 *)(param_1 + 0x20),param_1);
  }
  return;
}


// Reference entry 1129ff40; body size 121 bytes.
#line 1 "ENTRY_1129ff40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1129ff40(int param_1,void *param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (param_2 == (void *)0x0)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  }
  if (0x1fff < *(int *)(param_1 + 0x38) + param_3) {
    thunk_FUN_1129fcc0(param_1);
  }
  if (0xfff < param_3) {
    if (*(int *)(param_1 + 0x38) != 0) {
      thunk_FUN_1129fcc0(param_1);
    }
    uVar1 = (undefined4)(FUN_1129fee0(param_1,param_2,param_3,param_4));
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
  }
  memmove((void *)(*(int *)(param_1 + 0x38) + 300 + param_1),param_2,param_3);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
}


// Reference entry 1129ffe0; body size 27 bytes.
#line 1 "ENTRY_1129ffe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char FUN_1129ffe0(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char)(((*(byte *)(param_1 + 0x48) & 1) != 0) + '\x01');
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char)('\0');
}


// Reference entry 112a0030; body size 15 bytes.
#line 1 "ENTRY_112a0030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112a0030(undefined4 param_1)

{
  thunk_FUN_1145c930(param_1,0);
  return;
}


// Reference entry 112a09f0; body size 12 bytes.
#line 1 "ENTRY_112a09f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112a09f0(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x60) = param_2;
  return;
}


// Reference entry 112a0a00; body size 23 bytes.
#line 1 "ENTRY_112a0a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_112a0a00(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("GET");
  case 2:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("PUT");
  case 3:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("PATCH");
  case 4:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("HEAD");
  case 5:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("POST");
  case 6:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("DELETE");
  case 7:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("TRACE");
  case 8:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("OPTIONS");
  case 9:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SEARCH");
  case 10:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("NOTIFY");
  case 0xb:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SUBSCRIBE");
  case 0xc:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("UNSUBSCRIBE");
  default:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("UNKNOWN");
  }
}


// Reference entry 112a0d50; body size 44 bytes.
#line 1 "ENTRY_112a0d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_112a0d50(undefined4 param_1)

{
  char cVar1;
  uint uStack_4;
  
  cVar1 = (char)(thunk_FUN_1129e3b0(&DAT_122fb090,param_1,&uStack_4));
  if (cVar1 == '\0') {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(DAT_122fb0a0 + (uStack_4 & 0xffff) * 4));
}


// Reference entry 112a1030; body size 35 bytes.
#line 1 "ENTRY_112a1030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112a1030(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  if ((param_1 != (undefined4 *)0x0) && (pcVar2 = (char *)*param_1, pcVar2 != (char *)0x0)) {
    cVar1 = (char)(*pcVar2);
    while (cVar1 != '\0') {
      pcVar2 = (char *)(pcVar2 + 1);
      *param_1 = (undefined4)(pcVar2);
      if (cVar1 == '\n') {
        return;
      }
      cVar1 = (char)(*pcVar2);
    }
  }
  return;
}


// Reference entry 112a2220; body size 246 bytes.
#line 1 "ENTRY_112a2220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112a2220(undefined4 *param_1,int param_2)

{
  if ((param_1 != (undefined4 *)0x0) && (param_2 != 0)) {
    *(undefined1 *)(param_1 + 0x18) = 0;
    *(undefined2 *)(param_1 + 0xb) = 0x50;
    *param_1 = (undefined4)(0);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    *(undefined2 *)(param_1 + 0x1d) = 0x101;
    param_1[0x1b] = *(undefined4 *)(param_2 + 0x20);
    param_1[8] = (int)param_1 + 0xb9;
    *(undefined2 *)(param_1 + 0xf) = 0;
    param_1[0x1c] = param_2;
    param_1[0x1a] = 0;
    *(undefined1 *)(param_1 + 0x2e) = 0;
    param_1[0x2d] = 0;
    thunk_FUN_1129e450(param_1 + 0xc);
    func_0x10032434(param_1 + 0x1e);
    func_0x10032434(param_1 + 0x23);
    func_0x10032434(param_1 + 0x28);
    thunk_FUN_1145de30(param_1 + 0x10);
    thunk_FUN_1145de30(param_1 + 0x14);
    param_1[0x130] = 0;
    param_1[0x12f] = 0;
    *(undefined1 *)(param_1 + 0x131) = 0;
  }
  return;
}


// Reference entry 112a3310; body size 10 bytes.
#line 1 "ENTRY_112a3310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_112a3310(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((uint3)(DAT_122f6974 >> 9)) << 8 | (uint)((char)(DAT_122f6974 >> 1))) & 0xffffff01);
}


// Reference entry 112a3330; body size 68 bytes.
#line 1 "ENTRY_112a3330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_112a3330(void)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  
  cVar3 = (char)('\0');
  iVar4 = (int)(0);
  while (uVar1 = (uint)DAT_122f697c, iVar4 < (int)uVar1) {
    iVar2 = (int)(thunk_FUN_1129e4e0(&DAT_122f6978,iVar4));
    iVar4 = (int)(iVar4 + 1);
    uVar1 = (uint)(0);
    if (iVar2 == 0) break;
    if ((cVar3 != '\0') || (*(int *)(iVar2 + 0x124) != 0)) {
      cVar3 = (char)('\x01');
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)(cVar3)));
}


// Reference entry 112a3390; body size 24 bytes.
#line 1 "ENTRY_112a3390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_112a3390(int param_1)

{
  if ((param_1 != 0) && (*(short *)(param_1 + 0xbc) != 0)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 112a33b0; body size 24 bytes.
#line 1 "ENTRY_112a33b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_112a33b0(int param_1)

{
  if ((param_1 != 0) && (*(short *)(param_1 + 0xba) != 0)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 112a33d0; body size 16 bytes.
#line 1 "ENTRY_112a33d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_112a33d0(int param_1)

{
  if (param_1 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x124));
}


// Reference entry 112a33f0; body size 6 bytes.
#line 1 "ENTRY_112a33f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_112a33f0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
}


// Reference entry 112a3400; body size 80 bytes.
#line 1 "ENTRY_112a3400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112a3400(int param_1,int param_2,int *param_3)

{
  if (param_1 != 0) {
    if ((*(short *)(param_1 + 0xba) != 0) && (*param_3 == *(int *)(param_1 + 0x38))) {
      *(int *)(param_2 + 0x24) = param_1 + 0x30;
      return;
    }
    if ((*(short *)(param_1 + 0xbc) != 0) && (*param_3 == *(int *)(param_1 + 0x68))) {
      *(int *)(param_2 + 0x24) = param_1 + 0x60;
      return;
    }
  }
  *(undefined4 *)(param_2 + 0x24) = 0;
  return;
}


// Reference entry 112a34a0; body size 49 bytes.
#line 1 "ENTRY_112a34a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112a34a0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0xe0));
  *param_2 = (int)(iVar1);
  param_2[1] = param_1 + 0xe0;
  *(int **)(iVar1 + 4) = param_2;
  *(int **)(param_1 + 0xe0) = param_2;
  param_2[0x2c] = param_3;
  *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + 1;
  return;
}


// Reference entry 112a34e0; body size 53 bytes.
#line 1 "ENTRY_112a34e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112a34e0(int param_1,int *param_2,int param_3)

{
  *(int *)(*param_2 + 4) = param_2[1];
  *(int *)param_2[1] = *param_2;
  param_2[0x2c] = param_3;
  param_2[1] = 0;
  *param_2 = (int)(0);
  *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + -1;
  return;
}


// Reference entry 112a3530; body size 26 bytes.
#line 1 "ENTRY_112a3530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_112a3530(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(*(int *)(param_1 + 0xcc) - *(int *)(param_1 + 0xd0));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)(*(uint *)(param_1 + 0xd4) < uVar1)));
}


// Reference entry 112a4000; body size 3 bytes.
#line 1 "ENTRY_112a4000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_112a4000(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
}


// Reference entry 112a4280; body size 67 bytes.
#line 1 "ENTRY_112a4280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112a4280(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)((int *)(param_1 + 0xd8));
  iVar1 = (int)(*piVar2);
  *param_2 = (int)(iVar1);
  param_2[1] = (int)piVar2;
  *(int **)(iVar1 + 4) = param_2;
  *piVar2 = (int)((int)param_2);
  param_2[0x2c] = 0;
  param_2[0x2d] = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  return;
}


// Reference entry 112a43b0; body size 30 bytes.
#line 1 "ENTRY_112a43b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_112a43b0(int param_1)

{
  if (param_1 != 0) {
    if (*(uint *)(param_1 + 0xd0) <= *(uint *)(param_1 + 0xcc)) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*(uint *)(param_1 + 0xcc) - *(uint *)(param_1 + 0xd0));
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
}


// Reference entry 112a4560; body size 62 bytes.
#line 1 "ENTRY_112a4560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_112a4560(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0xd8));
  if (piVar1 != (int *)(param_1 + 0xd8)) {
    *(int *)(*piVar1 + 4) = piVar1[1];
    *(int *)piVar1[1] = *piVar1;
    piVar1[1] = 0;
    *piVar1 = (int)(0);
    piVar1[0x2c] = 2;
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(piVar1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)((int *)0x0);
}


// Reference entry 112a4c60; body size 94 bytes.
#line 1 "ENTRY_112a4c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_112a4c60(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(thunk_FUN_112a32b0(param_1));
  if (*(char *)(param_1 + 0x120) != '\0') {
    thunk_FUN_112b0270("ana_server",7,
                       "%s - TServer [%zu] already NetInit, ignoring server-change event",
                       "ServerNetInit",uVar2);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
  }
  thunk_FUN_112a7f50(param_1);
  uVar1 = (undefined1)(FUN_112a4ce0(param_1,1));
  thunk_FUN_112a8010(param_1);
  *(undefined1 *)(param_1 + 0x120) = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(uVar1);
}


// Reference entry 112a4e60; body size 13 bytes.
#line 1 "ENTRY_112a4e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112a4e60(int param_1)

{
  if ((undefined4 *)(param_1 + 0x128) != (undefined4 *)0x0) {
    SetEvent(*(HANDLE *)(param_1 + 0x128));
  }
  return;
}


// Reference entry 112a5100; body size 3 bytes.
#line 1 "ENTRY_112a5100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112a5100(void)

{
  return;
}


// Reference entry 112a5160; body size 15 bytes.
#line 1 "ENTRY_112a5160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112a5160(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x108) = param_2;
  return;
}


// Reference entry 112a5180; body size 23 bytes.
#line 1 "ENTRY_112a5180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112a5180(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(int *)(param_1 + 0xb4) = param_2;
  }
  return;
}


// Reference entry 112a51a0; body size 85 bytes.
#line 1 "ENTRY_112a51a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112a51a0(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = (bool)(false);
  thunk_FUN_112a7f50(param_1 + 0x10);
  bVar2 = (bool)(false);
  if (*(int *)(param_2 + 0xb0) != 1) {
    if (*(int *)(param_2 + 0xb0) != 5) goto LAB_112a51d5;
    bVar2 = (bool)(true);
  }
  bVar1 = (bool)(bVar2);
  *(undefined4 *)(param_2 + 0xb4) = 1;
LAB_112a51d5:
  thunk_FUN_112a8010(param_1 + 0x10);
  if (bVar1) {
    thunk_FUN_112a97e0(param_1 + 0x128);
  }
  return;
}


// Reference entry 112a61a0; body size 21 bytes.
#line 1 "ENTRY_112a61a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112a61a0(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  *param_2 = (int)(iVar1);
  param_2[1] = (int)param_1;
  *(int **)(iVar1 + 4) = param_2;
  *param_1 = (int)((int)param_2);
  return;
}


// Reference entry 112a6230; body size 89 bytes.
#line 1 "ENTRY_112a6230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_112a6230(undefined4 *param_1,int *param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if ((((param_1 != (undefined4 *)0x0) && (pbVar1 = (byte *)*param_1, pbVar1 != (byte *)0x0)) &&
      (param_2 != (int *)0x0)) && ((uint *)*param_2 != (uint *)0x0)) {
    uVar2 = (uint)(*(uint *)*param_2 & 0x10);
    if ((*pbVar1 & 0x10) == 0) {
      if (uVar2 != 0) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(1);
      }
    }
    else if (uVar2 == 0) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(-1);
    }
    iVar3 = (int)(func_0x1005d4ef(pbVar1));
    iVar4 = (int)(func_0x1005d4ef(*param_2));
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar3 - iVar4);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
}


// Reference entry 112a62a0; body size 107 bytes.
#line 1 "ENTRY_112a62a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_112a62a0(undefined4 *param_1,int *param_2)

{
  ushort uVar1;
  byte *pbVar2;
  uint *puVar3;
  ushort *puVar4;
  bool bVar5;
  
  if ((((param_1 != (undefined4 *)0x0) && (pbVar2 = (byte *)*param_1, pbVar2 != (byte *)0x0)) &&
      (param_2 != (int *)0x0)) && (puVar3 = (uint *)*param_2, puVar3 != (uint *)0x0)) {
    if ((*pbVar2 & 0x10) == 0) {
      if ((*puVar3 & 0x10) != 0) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(1);
      }
    }
    else if ((*puVar3 & 0x10) == 0) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0xffffffff);
    }
    puVar3 = (uint *)(puVar3 + 0xb);
    puVar4 = (ushort *)((ushort *)(pbVar2 + 0x2c));
    do {
      uVar1 = (ushort)(*puVar4);
      bVar5 = (bool)(uVar1 < (ushort)*puVar3);
      if (uVar1 != (ushort)*puVar3) {
LAB_112a6305:
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(-(uint)bVar5 | 1);
      }
      if (uVar1 == 0) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0);
      }
      uVar1 = (ushort)(puVar4[1]);
      bVar5 = (bool)(uVar1 < *(ushort *)((int)puVar3 + 2));
      if (uVar1 != *(ushort *)((int)puVar3 + 2)) goto LAB_112a6305;
      puVar4 = (ushort *)(puVar4 + 2);
      puVar3 = (uint *)(puVar3 + 1);
    } while (uVar1 != 0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0);
}


// Reference entry 112a6330; body size 22 bytes.
#line 1 "ENTRY_112a6330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112a6330(undefined4 param_1)

{
  undefined4 in_stack_00000018;
  
  thunk_FUN_1145c250(param_1,&DAT_1186d2ee,in_stack_00000018);
  return;
}


// Reference entry 112a6430; body size 28 bytes.
#line 1 "ENTRY_112a6430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_112a6430(int *param_1,int *param_2)

{
  if (*param_1 < *param_2) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0xffffffff);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)((uint)(*param_2 < *param_1));
}


// Reference entry 112a6460; body size 31 bytes.
#line 1 "ENTRY_112a6460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_112a6460(int *param_1,int *param_2)

{
  if (*param_1 < *param_2) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((*param_1 <= *param_2) - 1);
}


// Reference entry 112a6490; body size 28 bytes.
#line 1 "ENTRY_112a6490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_112a6490(ushort *param_1,ushort *param_2)

{
  if (*param_1 < *param_2) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0xffffffff);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)((uint)(*param_2 < *param_1));
}


// Reference entry 112a64c0; body size 28 bytes.
#line 1 "ENTRY_112a64c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_112a64c0(ushort *param_1,ushort *param_2)

{
  if (*param_1 < *param_2) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(-(uint)(*param_2 < *param_1));
}


// Reference entry 112a64f0; body size 33 bytes.
#line 1 "ENTRY_112a64f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112a64f0(int *param_1)

{
  *(int *)(*param_1 + 4) = param_1[1];
  *(int *)param_1[1] = *param_1;
  param_1[1] = 0;
  *param_1 = (int)(0);
  return;
}


// Reference entry 112a6520; body size 85 bytes.
#line 1 "ENTRY_112a6520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112a6520(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack00000004;
  
  if ((DAT_122f6974 & 1) == 0) {
    DAT_122f6974 = (int)(DAT_122f6974 | 1);
  }
  uStack00000004 = (undefined4)(0);
  iVar3 = (int)(0);
  iVar2 = (int)(thunk_FUN_112a3470(0));
  uVar1 = (undefined4)(uStack00000004);
  while (iVar2 != 0) {
    iVar3 = (int)(iVar3 + 1);
    thunk_FUN_112a5390(iVar2,uVar1);
    iVar2 = (int)(thunk_FUN_112a3470(iVar3));
  }
  return;
}


// Reference entry 112a6550; body size 58 bytes.
#line 1 "ENTRY_112a6550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112a6550(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack00000004;
  
  uStack00000004 = (undefined4)(1);
  iVar3 = (int)(0);
  iVar2 = (int)(thunk_FUN_112a3470(0));
  uVar1 = (undefined4)(uStack00000004);
  while (iVar2 != 0) {
    iVar3 = (int)(iVar3 + 1);
    thunk_FUN_112a5390(iVar2,uVar1);
    iVar2 = (int)(thunk_FUN_112a3470(iVar3));
  }
  return;
}


// Reference entry 112a6560; body size 30 bytes.
#line 1 "ENTRY_112a6560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112a6560(void)

{
  signal(0xf);
  signal(2);
  return;
}


// Reference entry 112a6630; body size 44 bytes.
#line 1 "ENTRY_112a6630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_112a6630(int *param_1)

{
  char cVar1;
  char *pcVar2;
  uint in_EAX;
  
  if (param_1 != (int *)0x0) {
    pcVar2 = (char *)((char *)*param_1);
    in_EAX = (uint)(0);
    if (pcVar2 != (char *)0x0) {
      cVar1 = (char)(*pcVar2);
      in_EAX = (uint)(((uint)((int3)((uint)pcVar2 >> 8)) << 8 | (uint)(cVar1)));
      while (cVar1 != '\0') {
        if (((char)in_EAX != '\t') && ((char)in_EAX != ' ')) {
          return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
        }
        *param_1 = (int)(*param_1 + 1);
        cVar1 = (char)(*(char *)*param_1);
        in_EAX = (uint)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(cVar1)));
      }
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(in_EAX & 0xffffff00);
}


// Reference entry 112a6670; body size 74 bytes.
#line 1 "ENTRY_112a6670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_112a6670(int param_1,undefined1 *param_2)

{
  uint in_EAX;
  int iVar1;
  
  if ((param_1 != 0) && (param_2 != (undefined1 *)0x0)) {
    iVar1 = (int)(thunk_FUN_113b9ec0(param_1,&DAT_118bd5c0));
    if (iVar1 == 0) {
      *param_2 = (undefined1)(1);
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(1);
    }
    in_EAX = (uint)(thunk_FUN_113b9ec0(param_1,&DAT_11883704));
    if (in_EAX == 0) {
      *param_2 = (undefined1)(0);
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(in_EAX & 0xffffff00);
}


// Reference entry 112a66d0; body size 95 bytes.
#line 1 "ENTRY_112a66d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_112a66d0(char *param_1,long *param_2,int param_3,int param_4)

{
  long lVar1;
  char *pcStack_4;
  
  pcStack_4 = (char *)((char *)0x0);
  if ((param_1 != (char *)0x0) && (param_2 != (long *)0x0)) {
    lVar1 = (long)(strtol(param_1,&pcStack_4,10));
    *param_2 = (long)(lVar1);
    if (param_3 == param_4) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(pcStack_4 != (char *)(param_1));
    }
    if (((pcStack_4 != (char *)(param_1)) && (param_3 <= lVar1)) && (lVar1 <= param_4)) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(true);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(false);
}


// Reference entry 112a76d0; body size 6 bytes.
#line 1 "ENTRY_112a76d0"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_112a76d0(void)

{
  return (/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(_DAT_122f69a8);
}


// Reference entry 112a7e20; body size 3 bytes.
#line 1 "ENTRY_112a7e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112a7e20(void)

{
  return;
}


// Reference entry 112a7e30; body size 3 bytes.
#line 1 "ENTRY_112a7e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112a7e30(void)

{
  return;
}


// Reference entry 112a8260; body size 24 bytes.
#line 1 "ENTRY_112a8260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112a8260(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) && ((HANDLE)*param_1 != (HANDLE)0x0)) {
    TerminateThread((HANDLE)*param_1,0);
  }
  return;
}


// Reference entry 112a8c50; body size 9 bytes.
#line 1 "ENTRY_112a8c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_112a8c50(void)

{
  int *piVar1;
  
  piVar1 = (int *)(_errno());
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*piVar1);
}


// Reference entry 112a8c60; body size 6 bytes.
#line 1 "ENTRY_112a8c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_112a8c60(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
}


// Reference entry 112a9150; body size 3 bytes.
#line 1 "ENTRY_112a9150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_112a9150(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
}


// Reference entry 112a9620; body size 3 bytes.
#line 1 "ENTRY_112a9620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112a9620(void)

{
  return;
}


// Reference entry 112a9760; body size 3 bytes.
#line 1 "ENTRY_112a9760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112a9760(void)

{
  return;
}


// Reference entry 112a9b80; body size 39 bytes.
#line 1 "ENTRY_112a9b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112a9b80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
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


// Reference entry 112a9d80; body size 15 bytes.
#line 1 "ENTRY_112a9d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112a9d80(undefined4 param_1)

{
  func_0x100965bf(param_1,0x16);
  return;
}


// Reference entry 112a9de0; body size 15 bytes.
#line 1 "ENTRY_112a9de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112a9de0(undefined4 param_1)

{
  func_0x100965bf(param_1,0xf);
  return;
}


// Reference entry 112a9e30; body size 86 bytes.
#line 1 "ENTRY_112a9e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_112a9e30(char *param_1,int param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_1 + param_2 + -1);
  *pcVar2 = (char)('\0');
  if (param_3 == 0) {
    pcVar2[-1] = '0';
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)(pcVar2 + -1);
  }
  do {
    pcVar2 = (char *)(pcVar2 + -1);
    iVar1 = (int)(param_3 / 10);
    *pcVar2 = (char)((char)param_3 + (char)iVar1 * -10 + '0');
    if (pcVar2 == (char *)(param_1)) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)(pcVar2);
    }
    param_3 = (int)(iVar1);
  } while (iVar1 != 0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)(pcVar2);
}


// Reference entry 112aa040; body size 5 bytes.
#line 1 "ENTRY_112aa040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112aa040(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x60) = param_2;
  return;
}


// Reference entry 112aa050; body size 36 bytes.
#line 1 "ENTRY_112aa050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112aa050(int param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_112a0ac0(param_1,param_2,param_3,*(int *)(*(int *)(param_1 + 0x6c) + 0xc0) * 1000);
  return;
}


// Reference entry 112aa090; body size 251 bytes.
#line 1 "ENTRY_112aa090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112aa090(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,char *param_5
                 )

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcStack_10c;
  undefined4 uStack_108;
  char acStack_104 [256];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&pcStack_10c);
  uStack_108 = (undefined4)(param_3);
  pcStack_10c = (char *)(param_5);
  acStack_104[0xff] = 0;
  pcVar3 = (char *)(acStack_104 + 0xff);
  iVar2 = (int)(param_4);
  if (param_4 == 0) {
    pcVar3 = (char *)(acStack_104 + 0xfe);
    acStack_104[0xfe] = 0x30;
  }
  else {
    do {
      pcVar3 = (char *)(pcVar3 + -1);
      iVar1 = (int)(iVar2 / 10);
      *pcVar3 = (char)((char)iVar2 + (char)iVar1 * -10 + '0');
      if (pcVar3 == (char *)(acStack_104)) break;
      iVar2 = (int)(iVar1);
    } while (iVar1 != 0);
  }
  thunk_FUN_112a28d0(param_1);
  thunk_FUN_112a2b10(param_1,param_2);
  thunk_FUN_112a2890(param_1,"Content-length",pcVar3);
  pcVar3 = (char *)("text/html");
  if (param_5 != (char *)0x0) {
    pcVar3 = (char *)(param_5);
  }
  thunk_FUN_112a2890(param_1,"Content-type",pcVar3);
  thunk_FUN_112a2b80(param_1);
  thunk_FUN_112a0b40(param_1,uStack_108,param_4);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 112aa2a0; body size 10 bytes.
#line 1 "ENTRY_112aa2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_112aa2a0(int param_1,int param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  
  piVar1 = (int *)((int *)(param_1 + 0x78));
  if ((((piVar1 != (int *)0x0) && (param_2 != 0)) &&
      (sVar2 = thunk_FUN_112b0610(param_2), *piVar1 != 0)) && (*(short *)(param_1 + 0x7c) != 0)) {
    uVar5 = (ushort)(0);
    do {
      uVar4 = (uint)((uint)uVar5);
      if ((sVar2 == *(short *)(*piVar1 + 0xc + uVar4 * 0x10)) &&
         (iVar3 = thunk_FUN_113b9ec0(*(undefined4 *)(*piVar1 + uVar4 * 0x10),param_2), iVar3 == 0))
      {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(*piVar1 + 4 + uVar4 * 0x10));
      }
      uVar5 = (ushort)(uVar5 + 1);
    } while (uVar5 < *(ushort *)(param_1 + 0x7c));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 112aa2b0; body size 10 bytes.
#line 1 "ENTRY_112aa2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_112aa2b0(int param_1,char *param_2,char *param_3)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  ushort uVar4;
  undefined2 uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 *puVar10;
  
  piVar2 = (int *)((int *)(param_1 + 0x78));
  if (((piVar2 != (int *)0x0) && (param_2 != (char *)0x0)) && (param_3 != (char *)0x0)) {
    pcVar8 = (char *)(param_2);
    do {
      cVar3 = (char)(*pcVar8);
      pcVar8 = (char *)(pcVar8 + 1);
    } while (cVar3 != '\0');
    pcVar8 = (char *)(pcVar8 + (1 - (int)(param_2 + 1)));
    pcVar9 = (char *)(param_3);
    do {
      cVar3 = (char)(*pcVar9);
      pcVar9 = (char *)(pcVar9 + 1);
    } while (cVar3 != '\0');
    iVar1 = (int)(((int)pcVar9 - (int)(param_3 + 1)) + 1);
    if (*(ushort *)(param_1 + 0x7e) <= *(ushort *)(param_1 + 0x7c)) {
      uVar4 = (ushort)(*(ushort *)(param_1 + 0x7e) + 0x10);
      *(ushort *)(param_1 + 0x7e) = uVar4;
      pvVar6 = (void *)(realloc((void *)*piVar2,(uint)uVar4 << 4));
      if (pvVar6 == (void *)0x0) {
        *(short *)(param_1 + 0x7e) = *(short *)(param_1 + 0x7e) + -0x10;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
      }
      *piVar2 = (int)((int)pvVar6);
    }
    puVar10 = (undefined4 *)(*(undefined4 **)(param_1 + 0x84));
    if ((char *)(*(int *)(param_1 + 0x88) - (int)puVar10) < pcVar8 + iVar1) {
      if ((char *)0x1ffb < pcVar8 + iVar1) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
      }
      puVar7 = (undefined4 *)(malloc(0x2000));
      *puVar7 = (undefined4)(*(undefined4 *)(param_1 + 0x80));
      puVar10 = (undefined4 *)(puVar7 + 1);
      *(undefined4 **)(param_1 + 0x80) = puVar7;
      *(undefined4 **)(param_1 + 0x84) = puVar10;
      *(undefined4 **)(param_1 + 0x88) = puVar7 + 0x800;
    }
    *(undefined4 **)(*piVar2 + (uint)*(ushort *)(param_1 + 0x7c) * 0x10) = puVar10;
    thunk_FUN_1145c250(*(int *)(param_1 + 0x84),param_2,
                       *(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84));
    *(short *)(*piVar2 + 8 + (uint)*(ushort *)(param_1 + 0x7c) * 0x10) = (short)pcVar8 + -1;
    *(int *)(param_1 + 0x84) = (int)(pcVar8 + *(int *)(param_1 + 0x84));
    *(undefined4 *)(*piVar2 + 4 + (uint)*(ushort *)(param_1 + 0x7c) * 0x10) =
         *(undefined4 *)(param_1 + 0x84);
    thunk_FUN_1145c250(*(int *)(param_1 + 0x84),param_3,
                       *(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84));
    *(short *)(*piVar2 + 10 + (uint)*(ushort *)(param_1 + 0x7c) * 0x10) =
         (short)((int)pcVar9 - (int)(param_3 + 1));
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + iVar1;
    uVar5 = (undefined2)(thunk_FUN_112b0610(param_2));
    *(undefined2 *)(*piVar2 + 0xc + (uint)*(ushort *)(param_1 + 0x7c) * 0x10) = uVar5;
    *(short *)(param_1 + 0x7c) = *(short *)(param_1 + 0x7c) + 1;
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 112aa820; body size 178 bytes.
#line 1 "ENTRY_112aa820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112aa820(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint _Size;
  undefined1 auStack_404 [1024];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)auStack_404);
  pcVar2 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  uVar3 = (uint)((int)pcVar2 - (int)(param_2 + 1));
  while( true ) {
    if (uVar3 == 0) {
      thunk_FUN_1148ac28();
      return;
    }
    _Size = (uint)(uVar3);
    if (0x3ff < uVar3) {
      _Size = (uint)(0x3ff);
    }
    memcpy(auStack_404,param_2,_Size);
    if (0x3ff < _Size) break;
    auStack_404[_Size] = 0;
    param_2 = (char *)(param_2 + _Size);
    thunk_FUN_11069420(auStack_404,1);
    thunk_FUN_1145dd30(*(undefined4 *)(param_1 + 4),auStack_404);
    uVar3 = (uint)(uVar3 - _Size);
  }
                    
  thunk_FUN_1148bc65();
}


// Reference entry 112aa900; body size 113 bytes.
#line 1 "ENTRY_112aa900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_112aa900(undefined4 *param_1)

{
  undefined4 uVar1;
  
  thunk_FUN_112a2b10(*param_1,200);
  thunk_FUN_112a2890(*param_1,"CONTENT-TYPE","text/html");
  thunk_FUN_112aa2e0(*param_1);
  uVar1 = (undefined4)(thunk_FUN_1145ddd0(param_1[1],*(undefined4 *)(param_1[1] + 0xc)));
  thunk_FUN_112a0b40(*param_1,uVar1);
  thunk_FUN_1145de30(param_1[1]);
  thunk_FUN_112aa790(param_1,
                     "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01 Transitional//EN\">\n<head><title>Diagnostics</title></head>\n<body>\n"
                    );
  func_0x1001c058(param_1);
  thunk_FUN_112aa790(param_1,"</body></html>");
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xfffffffe);
}


// Reference entry 112aa990; body size 22 bytes.
#line 1 "ENTRY_112aa990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112aa990(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_112aa790(param_1,"<ZPSupportItem title=\"%s\">",param_2);
  return;
}


// Reference entry 112aa9b0; body size 18 bytes.
#line 1 "ENTRY_112aa9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112aa9b0(undefined4 param_1)

{
  thunk_FUN_112aa790(param_1,"</ZPSupportItem>");
  return;
}


// Reference entry 112aa9d0; body size 4 bytes.
#line 1 "ENTRY_112aa9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_112aa9d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffffff);
}


// Reference entry 112aa9e0; body size 4 bytes.
#line 1 "ENTRY_112aa9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_112aa9e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffffff);
}


// Reference entry 112aae60; body size 10 bytes.
#line 1 "ENTRY_112aae60"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112aae60(undefined4 param_1)

{
  _DAT_122f6b74 = (int)(param_1);
  return;
}


// Reference entry 112ab3f0; body size 18 bytes.
#line 1 "ENTRY_112ab3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112ab3f0(undefined4 param_1)

{
  thunk_FUN_112aa790(param_1,"<ZPSupportInfo>");
  return;
}


// Reference entry 112ab410; body size 18 bytes.
#line 1 "ENTRY_112ab410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112ab410(undefined4 param_1)

{
  thunk_FUN_112aa790(param_1,"</ZPSupportInfo>");
  return;
}


// Reference entry 112ab730; body size 27 bytes.
#line 1 "ENTRY_112ab730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_112ab730(int param_1,int param_2)

{
  uint uVar1;
  uint3 uVar2;
  
  uVar1 = (uint)(*(uint *)(param_2 + 4));
  uVar2 = (uint3)((uint3)(uVar1 >> 8));
  if (((*(uint *)(param_1 + 8) & uVar1) != 0) && ((*(uint *)(param_1 + 0xc) & uVar1) == 0)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((uint)uVar2 << 8);
}


// Reference entry 112ab760; body size 22 bytes.
#line 1 "ENTRY_112ab760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112ab760(undefined4 param_1,int param_2)

{
  thunk_FUN_112aa9f0(*(undefined4 *)(param_2 + 8),param_1,0);
  return;
}


// Reference entry 112ab780; body size 472 bytes.
#line 1 "ENTRY_112ab780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112ab780(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  char acStack_504 [256];
  char acStack_404 [1024];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)acStack_504);
  pcVar6 = (char *)(*(char **)(param_2 + 0xc));
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    thunk_FUN_112aa790(param_1,"<File name=\'");
    pcVar5 = (char *)(pcVar6);
    do {
      cVar1 = (char)(*pcVar5);
      pcVar5 = (char *)(pcVar5 + 1);
    } while (cVar1 != '\0');
    thunk_FUN_112aa500(param_1,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
    thunk_FUN_112aa790(param_1,&DAT_119e8d20);
  }
  iVar2 = (int)(thunk_FUN_1145d170(pcVar6,0));
  if (iVar2 == -1) {
    piVar4 = (int *)(_errno());
    iVar2 = (int)(*piVar4);
    strerror_s(acStack_504,0x100,iVar2);
    thunk_FUN_1145c720(acStack_404,0x400,"error opening file %s (errno=%d %s)",pcVar6,iVar2,
                       acStack_504);
    pcVar6 = (char *)(acStack_404);
    do {
      cVar1 = (char)(*pcVar6);
      pcVar6 = (char *)(pcVar6 + 1);
    } while (cVar1 != '\0');
    thunk_FUN_112aa500(param_1,acStack_404,(int)pcVar6 - (int)(acStack_404 + 1));
  }
  else {
    iVar3 = (int)(_read(iVar2,acStack_404,0x400));
    while (iVar3 != -1) {
      if (iVar3 == 0) goto LAB_112ab8bb;
      if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
        thunk_FUN_1145de60(*(undefined4 *)(param_1 + 4),acStack_404,iVar3);
      }
      else {
        thunk_FUN_112aa500(param_1);
      }
      iVar3 = (int)(_read(iVar2,acStack_404,0x400));
    }
    piVar4 = (int *)(_errno());
    iVar3 = (int)(*piVar4);
    strerror_s(acStack_504,0x100,iVar3);
    thunk_FUN_1145c720(acStack_404,0x400,"error reading file %s (errno=%d %s)",pcVar6,iVar3,
                       acStack_504);
    pcVar6 = (char *)(acStack_404);
    do {
      cVar1 = (char)(*pcVar6);
      pcVar6 = (char *)(pcVar6 + 1);
    } while (cVar1 != '\0');
    thunk_FUN_112aa500(param_1,acStack_404,(int)pcVar6 - (int)(acStack_404 + 1));
LAB_112ab8bb:
    _close(iVar2);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    thunk_FUN_112aa790(param_1,"</File>");
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 112ab9d0; body size 13 bytes.
#line 1 "ENTRY_112ab9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112ab9d0(undefined4 param_1,int param_2)

{
                    
                    
  (**(code **)(param_2 + 8))();
  return;
}


// Reference entry 112abdb0; body size 270 bytes.
#line 1 "ENTRY_112abdb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_112abdb0(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  void *_Dst;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  puVar1 = (uint *)(*(uint **)(param_1 + 4));
  piVar6 = (int *)((int *)puVar1[2]);
  if ((int *)*puVar1 < piVar6 + 6) {
    thunk_FUN_112af4a0();
    thunk_FUN_112a7f50(DAT_122f6b7c);
    iVar3 = (int)(FUN_112acc60(0x18));
    uVar2 = (undefined4)(DAT_122f6b7c);
    *(int *)(*(int *)(param_1 + 4) + 4) = iVar3;
    *(int *)(param_1 + 4) = iVar3;
    thunk_FUN_112a8010(uVar2);
    FUN_1005ed27();
    piVar6 = (int *)(*(int **)(iVar3 + 8));
    *(int **)(iVar3 + 8) = piVar6 + 6;
  }
  else {
    puVar1[2] = (uint)(piVar6 + 6);
  }
  *piVar6 = (int)(param_1);
  _Dst = (void *)(*(void **)(param_2 + 0x10));
  piVar6[4] = (int)_Dst;
  iVar3 = (int)(*(int *)(param_2 + 4));
  piVar6[1] = iVar3;
  iVar4 = (int)(*(int *)(param_2 + 8));
  piVar6[2] = iVar4;
  iVar7 = (int)(*(int *)(param_2 + 8));
  piVar6[3] = iVar7;
  iVar5 = (int)(*(int *)(param_3 + 8));
  iVar4 = (int)(iVar4 + iVar5);
  if (iVar7 < iVar4) {
    if (iVar7 < 1) {
      iVar7 = (int)(1);
    }
    else {
      iVar7 = (int)(iVar7 * 2);
    }
    for (; iVar7 < iVar4; iVar7 = iVar7 * 2) {
    }
    _Dst = (void *)((void *)thunk_FUN_112ac820(param_1,iVar7 * iVar3));
    memset(_Dst,0,iVar7 * iVar3);
    memcpy(_Dst,(void *)piVar6[4],piVar6[3] * iVar3);
    piVar6[4] = (int)_Dst;
    piVar6[3] = iVar7;
    iVar5 = (int)(*(int *)(param_3 + 8));
  }
  memcpy((void *)(piVar6[2] * iVar3 + (int)_Dst),*(void **)(param_3 + 0x10),iVar5 * iVar3);
  piVar6[2] = piVar6[2] + *(int *)(param_3 + 8);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(piVar6);
}


// Reference entry 112ac150; body size 33 bytes.
#line 1 "ENTRY_112ac150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_112ac150(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (int)(0);
  for (piVar1 = (int *)(DAT_122f6b78); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    iVar2 = (int)(iVar2 + -0x10 + (*piVar1 - (int)piVar1));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar2);
}


// Reference entry 112ac180; body size 33 bytes.
#line 1 "ENTRY_112ac180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_112ac180(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (int)(0);
  for (piVar1 = (int *)((int *)*param_1); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    iVar2 = (int)(iVar2 + -0x10 + (*piVar1 - (int)piVar1));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar2);
}


// Reference entry 112ac380; body size 214 bytes.
#line 1 "ENTRY_112ac380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_112ac380(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  void *_Dst;
  int iVar5;
  int *piVar6;
  size_t _Size;
  
  iVar1 = (int)(*(int *)(param_2 + 4));
  iVar5 = (int)(*(int *)(param_2 + 0xc));
  puVar2 = (uint *)(*(uint **)(param_1 + 4));
  piVar6 = (int *)((int *)puVar2[2]);
  if ((int *)*puVar2 < piVar6 + 6) {
    thunk_FUN_112af4a0();
    thunk_FUN_112a7f50(DAT_122f6b7c);
    iVar4 = (int)(FUN_112acc60(0x18));
    uVar3 = (undefined4)(DAT_122f6b7c);
    *(int *)(*(int *)(param_1 + 4) + 4) = iVar4;
    *(int *)(param_1 + 4) = iVar4;
    thunk_FUN_112a8010(uVar3);
    FUN_1005ed27();
    piVar6 = (int *)(*(int **)(iVar4 + 8));
    *(int **)(iVar4 + 8) = piVar6 + 6;
  }
  else {
    puVar2[2] = (uint)(piVar6 + 6);
  }
  if (iVar5 < 1) {
    iVar5 = (int)(1);
  }
  _Size = (size_t)(iVar5 * iVar1);
  _Dst = (void *)((void *)thunk_FUN_112ac820(param_1,_Size));
  memset(_Dst,0,_Size);
  *piVar6 = (int)(param_1);
  piVar6[1] = iVar1;
  piVar6[4] = (int)_Dst;
  piVar6[2] = 0;
  piVar6[3] = iVar5;
  memcpy(_Dst,*(void **)(param_2 + 0x10),*(int *)(param_2 + 8) * *(int *)(param_2 + 4));
  piVar6[2] = *(int *)(param_2 + 8);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(piVar6);
}


// Reference entry 112ac490; body size 123 bytes.
#line 1 "ENTRY_112ac490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_112ac490(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  puVar1 = (uint *)(*(uint **)(param_1 + 4));
  piVar4 = (int *)((int *)puVar1[2]);
  if ((int *)*puVar1 < piVar4 + 6) {
    thunk_FUN_112af4a0();
    thunk_FUN_112a7f50(DAT_122f6b7c);
    iVar3 = (int)(FUN_112acc60(0x18));
    uVar2 = (undefined4)(DAT_122f6b7c);
    *(int *)(*(int *)(param_1 + 4) + 4) = iVar3;
    *(int *)(param_1 + 4) = iVar3;
    thunk_FUN_112a8010(uVar2);
    FUN_1005ed27();
    piVar4 = (int *)(*(int **)(iVar3 + 8));
    *(int **)(iVar3 + 8) = piVar4 + 6;
  }
  else {
    puVar1[2] = (uint)(piVar4 + 6);
  }
  *piVar4 = (int)(param_1);
  piVar4[4] = *(int *)(param_2 + 0x10);
  piVar4[1] = *(int *)(param_2 + 4);
  piVar4[2] = *(int *)(param_2 + 8);
  piVar4[3] = *(int *)(param_2 + 8);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(piVar4);
}


// Reference entry 112ac6b0; body size 176 bytes.
#line 1 "ENTRY_112ac6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_112ac6b0(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  void *_Dst;
  int *piStack_4;
  
  puVar1 = (uint *)(*(uint **)(param_1 + 4));
  piStack_4 = (int *)((int *)puVar1[2]);
  if ((int *)*puVar1 < piStack_4 + 6) {
    thunk_FUN_112af4a0();
    thunk_FUN_112a7f50(DAT_122f6b7c);
    iVar3 = (int)(FUN_112acc60(0x18));
    uVar2 = (undefined4)(DAT_122f6b7c);
    *(int *)(*(int *)(param_1 + 4) + 4) = iVar3;
    *(int *)(param_1 + 4) = iVar3;
    thunk_FUN_112a8010(uVar2);
    FUN_1005ed27();
    piStack_4 = (int *)(*(int **)(iVar3 + 8));
    *(int **)(iVar3 + 8) = piStack_4 + 6;
  }
  else {
    puVar1[2] = (uint)(piStack_4 + 6);
  }
  iVar3 = (int)(1);
  if (0 < param_2) {
    iVar3 = (int)(param_2);
  }
  _Dst = (void *)((void *)thunk_FUN_112ac820(param_1,iVar3 * param_3));
  memset(_Dst,0,iVar3 * param_3);
  piStack_4[4] = (int)_Dst;
  piStack_4[3] = iVar3;
  piStack_4[1] = param_3;
  *piStack_4 = (int)(param_1);
  piStack_4[2] = 0;
  return;
}


// Reference entry 112ac8c0; body size 35 bytes.
#line 1 "ENTRY_112ac8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_112ac8c0(undefined4 param_1,size_t param_2)

{
  void *_Dst;
  
  _Dst = (void *)((void *)thunk_FUN_112ac820(param_1,param_2));
  memset(_Dst,0,param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(_Dst);
}


// Reference entry 112ac9c0; body size 54 bytes.
#line 1 "ENTRY_112ac9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_112ac9c0(undefined4 param_1,void *param_2,size_t param_3)

{
  void *_Dst;
  
  if (param_2 == (void *)0x0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
  }
  _Dst = (void *)((void *)thunk_FUN_112ac820(param_1,param_3 + 1));
  memcpy(_Dst,param_2,param_3);
  *(undefined1 *)((int)_Dst + param_3) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(_Dst);
}


// Reference entry 112ad180; body size 50 bytes.
#line 1 "ENTRY_112ad180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_112ad180(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (int)(*param_2);
  while( true ) {
    if (iVar1 == 0) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)((int *)0x0);
    }
    iVar1 = (int)(thunk_FUN_113b9ec0(param_1,iVar1));
    if (iVar1 == 0) break;
    iVar1 = (int)(param_2[6]);
    param_2 = (int *)(param_2 + 6);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_2);
}


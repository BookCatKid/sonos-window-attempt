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
extern int FUN_1005a7b3(...);
extern int FUN_10091f7e(...);
extern int FUN_10273f70(...);
extern int FUN_1031f610(...);
extern __declspec(dllimport) int _CxxThrowException(...);
extern __declspec(dllimport) int _Xbad_function_call(...);
extern __declspec(dllimport) int _Xlength_error(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int atoi(...);
extern int format(...);
extern int func_0x10001cda(...);
extern int func_0x10009b7e(...);
extern int func_0x1000ffdd(...);
extern int func_0x10011310(...);
extern int func_0x1001d494(...);
extern int func_0x1001f834(...);
extern int func_0x100243f7(...);
extern int func_0x1002ca7f(...);
extern int func_0x1003b7a5(...);
extern int func_0x1003eec8(...);
extern int func_0x10048f77(...);
extern int func_0x10054043(...);
extern int func_0x1005e6ce(...);
extern int func_0x10062418(...);
extern int func_0x10062eae(...);
extern int func_0x10067c8d(...);
extern int func_0x10076f76(...);
extern int func_0x1007df1f(...);
extern int func_0x1008a4d1(...);
extern int hash(...);
extern int int_addref(...);
extern int int_allocRep(...);
extern int int_release(...);
extern int isShuttingDown(...);
extern __declspec(dllimport) int memmove(...);
extern int op_ctor(...);
extern int op_eq(...);
extern int op_lt(...);
extern int operator_new(...);
extern int swi(...);
extern int thunk_FUN_10116710(...);
extern int thunk_FUN_10117000(...);
extern int thunk_FUN_101176e0(...);
extern int thunk_FUN_10118c40(...);
extern int thunk_FUN_1011bdc0(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_101a2c70(...);
extern int thunk_FUN_101a3180(...);
extern int thunk_FUN_101a3370(...);
extern int thunk_FUN_101a3700(...);
extern int thunk_FUN_101b94f0(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101d7220(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_102260c0(...);
extern int thunk_FUN_10226130(...);
extern int thunk_FUN_10227930(...);
extern int thunk_FUN_102279b0(...);
extern int thunk_FUN_10227a30(...);
extern int thunk_FUN_10227fb0(...);
extern int thunk_FUN_10254af0(...);
extern int thunk_FUN_10254c20(...);
extern int thunk_FUN_1025f3f0(...);
extern int thunk_FUN_1026eab0(...);
extern int thunk_FUN_102725d0(...);
extern int thunk_FUN_10272fd0(...);
extern int thunk_FUN_102782f0(...);
extern int thunk_FUN_10278390(...);
extern int thunk_FUN_1027ddb0(...);
extern int thunk_FUN_1027e130(...);
extern int thunk_FUN_1027e470(...);
extern int thunk_FUN_10280c80(...);
extern int thunk_FUN_10283f20(...);
extern int thunk_FUN_10284760(...);
extern int thunk_FUN_102871c0(...);
extern int thunk_FUN_1028bbd0(...);
extern int thunk_FUN_1028e330(...);
extern int thunk_FUN_102909a0(...);
extern int thunk_FUN_10292500(...);
extern int thunk_FUN_102a0500(...);
extern int thunk_FUN_102a2ce0(...);
extern int thunk_FUN_102a30a0(...);
extern int thunk_FUN_102a3140(...);
extern int thunk_FUN_102a3580(...);
extern int thunk_FUN_102a3810(...);
extern int thunk_FUN_102a71f0(...);
extern int thunk_FUN_102a9bb0(...);
extern int thunk_FUN_102adcd0(...);
extern int thunk_FUN_102ae180(...);
extern int thunk_FUN_102ae270(...);
extern int thunk_FUN_102bc730(...);
extern int thunk_FUN_102bce30(...);
extern int thunk_FUN_102d3db0(...);
extern int thunk_FUN_102d8b30(...);
extern int thunk_FUN_102daa60(...);
extern int thunk_FUN_102daa80(...);
extern int thunk_FUN_102e7730(...);
extern int thunk_FUN_102e8bc0(...);
extern int thunk_FUN_103039a0(...);
extern int thunk_FUN_10304120(...);
extern int thunk_FUN_10304a70(...);
extern int thunk_FUN_10309870(...);
extern int thunk_FUN_1030b1f0(...);
extern int thunk_FUN_1030d760(...);
extern int thunk_FUN_1030e0d0(...);
extern int thunk_FUN_1030e350(...);
extern int thunk_FUN_1030e6e0(...);
extern int thunk_FUN_1030e760(...);
extern int thunk_FUN_1030e7e0(...);
extern int thunk_FUN_1030f6e0(...);
extern int thunk_FUN_1030f760(...);
extern int thunk_FUN_1030f810(...);
extern int thunk_FUN_10312640(...);
extern int thunk_FUN_103265e0(...);
extern int thunk_FUN_103beae0(...);
extern int thunk_FUN_103d65f0(...);
extern int thunk_FUN_1059b760(...);
extern int thunk_FUN_1059c6f0(...);
extern int thunk_FUN_1059cad0(...);
extern int thunk_FUN_1059d0b0(...);
extern int thunk_FUN_1059d5a0(...);
extern int thunk_FUN_1059d940(...);
extern int thunk_FUN_106a2b90(...);
extern int thunk_FUN_106d5ce0(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_11082ef0(...);
extern int thunk_FUN_11082f10(...);
extern int thunk_FUN_11093c70(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_1109ac80(...);
extern int thunk_FUN_1109f750(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_110a0140(...);
extern int thunk_FUN_110d3140(...);
extern int thunk_FUN_110d9820(...);
extern int thunk_FUN_110d9b30(...);
extern int thunk_FUN_110f6450(...);
extern int thunk_FUN_110f69a0(...);
extern int thunk_FUN_110f7c60(...);
extern int thunk_FUN_1111d190(...);
extern int thunk_FUN_11131cc0(...);
extern int thunk_FUN_11138290(...);
extern int thunk_FUN_111a06b0(...);
extern int thunk_FUN_111a0720(...);
extern int thunk_FUN_111c05a0(...);
extern int thunk_FUN_111c06e0(...);
extern int thunk_FUN_111c0760(...);
extern int thunk_FUN_111f7820(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11240650(...);
extern int thunk_FUN_112407b0(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_11241ca0(...);
extern int thunk_FUN_11244ee0(...);
extern int thunk_FUN_11249110(...);
extern int thunk_FUN_1124a160(...);
extern int thunk_FUN_1124a3f0(...);
extern int thunk_FUN_1124d790(...);
extern int thunk_FUN_1124ef40(...);
extern int thunk_FUN_1124f060(...);
extern int thunk_FUN_11254de0(...);
extern int thunk_FUN_1125acd0(...);
extern int thunk_FUN_1125ba00(...);
extern int thunk_FUN_1125bbd0(...);
extern int thunk_FUN_1125bca0(...);
extern int thunk_FUN_1125bcf0(...);
extern int thunk_FUN_11261330(...);
extern int thunk_FUN_11278b20(...);
extern int thunk_FUN_1127a020(...);
extern int thunk_FUN_1127a510(...);
extern int thunk_FUN_1127c6b0(...);
extern int thunk_FUN_1127caf0(...);
extern int thunk_FUN_1127cb00(...);
extern int thunk_FUN_1127cd20(...);
extern int thunk_FUN_112a0c30(...);
extern int thunk_FUN_112a1350(...);
extern int thunk_FUN_112a2b10(...);
extern int thunk_FUN_112a7c30(...);
extern int thunk_FUN_112a7f20(...);
extern int thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_112a9cf0(...);
extern int thunk_FUN_112aa2e0(...);
extern int thunk_FUN_112aa310(...);
extern int thunk_FUN_112aa790(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_11456f80(...);
extern int thunk_FUN_11457240(...);
extern int thunk_FUN_11457320(...);
extern int thunk_FUN_11457fd0(...);
extern int thunk_FUN_11458800(...);
extern int thunk_FUN_11458a30(...);
extern int thunk_FUN_11458a40(...);
extern int thunk_FUN_11458e90(...);
extern int thunk_FUN_1145c250(...);
extern int thunk_FUN_1145c720(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int DAT_1186d2ee;
extern int DAT_1187d878;
extern int DAT_11880fb0;
extern int DAT_11882ff0;
extern int DAT_1188bc94;
extern int DAT_1188d004;
extern int DAT_1188feb0;
extern int DAT_118939bc;
extern int DAT_11d330dc;
extern int DAT_12119130;
extern int DAT_121192f0;
extern int DAT_12119348;
extern int DAT_1211934c;
extern int DAT_12119350;
extern int DAT_12119358;
extern int DAT_1211935c;
extern int DAT_12119360;
extern int DAT_12119364;
extern int DAT_12119368;
extern int DAT_1211936c;
extern int DAT_12119370;
extern int DAT_12119374;
extern int DAT_12119384;
extern int DAT_12119388;
extern int DAT_1211938c;
extern int DAT_12119390;
extern int DAT_12119394;
extern int DAT_12119398;
extern int DAT_1211939c;
extern int DAT_121193a0;
extern int DAT_121193b0;
extern int DAT_121193b4;
extern int DAT_121193b8;
extern int DAT_12126b84;
extern int DAT_121a0ae4;
extern int DAT_121a0b38;
extern int DAT_121a0be0;
extern int DAT_121a0c1c;
extern int DAT_121a0e70;
extern int DAT_121a1028;
extern int DAT_121a12cc;
extern int DAT_121a2778;
extern int DAT_122e8a18;
extern int DAT_122f5650;
extern int UNK_1188cfec;
extern int UNK_1188d034;
extern int g_lSCObjCount;
extern int ghidra_vftable_AnacapaLauncher;
extern int ghidra_vftable_ApplicationControllerAIOHelper;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpImpl;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_RDateTime;
extern int ghidra_vftable_RHTTPDataIO;
extern int ghidra_vftable_RHttpBaseNoRedirectAIOOp;
extern int ghidra_vftable_RHttpGetNoRedirectAIOOp;
extern int ghidra_vftable_RHttpPostNoRedirectAIOOp;
extern int ghidra_vftable_RKVReport;
extern int ghidra_vftable_RKVReportData;
extern int ghidra_vftable_RKeyValueBase;
extern int ghidra_vftable_RLookupV1CertInfoRequest;
extern int ghidra_vftable_RNSGetAliveOp;
extern int ghidra_vftable_RNSGetCurrentChannelOp;
extern int ghidra_vftable_RNetstartOp;
extern int ghidra_vftable_RNetstartScanListOp;
extern int ghidra_vftable_RReportUploaderClient;
extern int ghidra_vftable_RStereoPairZPCandidateEnumerator;
extern int ghidra_vftable_RSystemTime;
extern int ghidra_vftable_RUpnpAVTPauseAIOOp;
extern int ghidra_vftable_RUpnpAVTStopAIOOp;
extern int ghidra_vftable_RUpnpAsyncIOOperation;
extern int ghidra_vftable_RUpnpCMGetProtocolInfoAIOOp;
extern int ghidra_vftable_RUpnpDPGetButtonLockStateAIOOp;
extern int ghidra_vftable_RUpnpDPGetLEDStateAIOOp;
extern int ghidra_vftable_RUpnpDPRemoveBondedZonesAIOOp;
extern int ghidra_vftable_RUpnpDPSetButtonLockStateAIOOp;
extern int ghidra_vftable_RUpnpDPSetLEDStateAIOOp;
extern int ghidra_vftable_RUpnpDPSetZoneAttributesAIOOp;
extern int ghidra_vftable_SCActionStringInput;
extern int ghidra_vftable_SCArray;
extern int ghidra_vftable_SCBrowseManager;
extern int ghidra_vftable_SCCompoundActionImpl;
extern int ghidra_vftable_SCDisplaySubmitDiagnosticsMessageAction;
extern int ghidra_vftable_SCDisplaySubmitDiagnosticsMessageDescriptor;
extern int ghidra_vftable_SCEulaManager;
extern int ghidra_vftable_SCEventSubscriptionImpl_EventSink;
extern int ghidra_vftable_SCExperimentManager_EventSink;
extern int ghidra_vftable_SCIActionDelegate;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCIOwnedObjImpl;
extern int ghidra_vftable_SCITearOffObjImpl;
extern int ghidra_vftable_SCLogging;
extern int ghidra_vftable_SCOpConnectionManagerGetProtocolInfo;
extern int ghidra_vftable_SCOpDevicePropertiesGetButtonLockState;
extern int ghidra_vftable_SCOpDevicePropertiesGetLEDState;
extern int ghidra_vftable_SCOpDevicePropertiesSetButtonLockState;
extern int ghidra_vftable_SCOpDevicePropertiesSetLEDState;
extern int ghidra_vftable_SCOpImpl;
extern int ghidra_vftable_SCOpLookupV1CertInfoAIOOp;
extern int ghidra_vftable_SCOpRef;
extern int ghidra_vftable_SCRecurrence;
extern int ghidra_vftable_SCReportUploaderAIOClient;
extern int ghidra_vftable_SCSearchablesManager_EventSink;
extern int ghidra_vftable_SCServiceAccountFilter;
extern int ghidra_vftable_SCServiceDescriptorFilter;
extern int ghidra_vftable_SCShareNameInput;
extern int ghidra_vftable_SCStrProp;
extern int ghidra_vftable_SCStrStandaloneInputBase;
extern int ghidra_vftable_SCSystemTime;
extern int ghidra_vftable_SCTime;
extern int ghidra_vftable_SCWrapperHelper;
extern int ghidra_vftable_SCWrapperObj;
extern int ghidra_vftable_TestPointHandler;
extern int ghidra_vftable_TestPointHandlerSCLIB;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int in_EAX;
extern int uStack_10;
extern int uStack_14;
extern int uStack_18;
extern int uStack_1c28;
extern int uStack_24;
extern int uStack_30;
extern int uStack_34;
extern int uStack_4;
extern int uStack_438;
extern int uStack_8;
extern int uStack_c;
extern int uStack_ec;
extern int uStack_f0;
extern int uStack_f4;
extern int uStack_f8;
extern int unaff_EBX;
extern int unaff_ESI;
extern undefined1 LAB_1001a01e[];
extern undefined1 LAB_1004a205[];
extern undefined1 LAB_1004d0bd[];
extern undefined1 LAB_1007d114[];
extern undefined1 LAB_10279e04[];
extern undefined1 LAB_10279e09[];
extern undefined1 LAB_10279e32[];
extern undefined1 LAB_10279e37[];
extern undefined1 LAB_10279fb7[];
extern undefined1 LAB_102bea78[];
extern undefined1 LAB_102f0004[];
extern undefined1 LAB_102f002b[];
extern undefined1 LAB_1031ca82[];
extern undefined1 LAB_1031cafe[];
extern undefined1 LAB_1031cbf8[];
extern undefined1 LAB_1031f70f[];
extern undefined1 LAB_1059d6b4[];
extern undefined1 LAB_1059d8b2[];
extern undefined1 LAB_110d33c5[];
extern undefined1 LAB_110d33ca[];
extern undefined1 LAB_110d6634[];
extern undefined1 LAB_114f5ce0[];
extern undefined1 LAB_11519b75[];
extern undefined1 LAB_1151cecf[];
extern undefined1 LAB_1151d250[];
extern undefined1 LAB_11520420[];
extern undefined1 LAB_115276c0[];
extern undefined1 LAB_11532480[];
extern undefined1 LAB_115324b0[];
extern undefined1 LAB_115324e0[];
extern undefined1 LAB_11532510[];
extern undefined1 LAB_11532540[];
extern undefined1 LAB_1153354d[];
extern undefined1 LAB_115a67f4[];
extern undefined1 LAB_115a683d[];
extern undefined1 LAB_115a687d[];
extern undefined1 LAB_115d7e8d[];
extern undefined1 LAB_117adaf7[];
extern int *PTR_DAT_1211937c;
extern int *PTR_DAT_12119380;
extern int *PTR_LAB_121193a4;
extern int *PTR_LAB_121193a8;
extern int *PTR_LAB_121193ac;
extern int *PTR_PTR_12119378;
extern int *PTR_s_OnlineUpdateBaseURL_121190f8;
extern int *PTR_s__________sclib_sclib_core_sclib__12119354;
extern int *stack0x00000004;
extern int *stack0x00000008;
extern int *stack0xffffe3a0;
extern int *stack0xfffffffc;
extern char s__________sclib_sclib_core_sclib__1188c380[];
extern void *ExceptionList;
namespace std { template<class... A> static int _Xbad_function_call(A...); template<class... A> static int _Xlength_error(A...);}
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); template<class... A> static int isShuttingDown(A...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); template<class... A> static int format(A...); template<class... A> static int hash(A...); template<class... A> static int int_addref(A...); template<class... A> static int int_allocRep(A...); template<class... A> static int int_release(A...); int op_ctor(...); int op_eq(...); int op_lt(...); };
typedef void *E9;
typedef void *HH;
typedef void *LOCK;
typedef void *UNLOCK;
typedef void *WARNING;
typedef void *ZM_STATE_ALL_UNCONFIGURED;
typedef void *ZM_STATE_ALL_ZONES_HIDDEN;
typedef void *ZM_STATE_EOL_NO_UPDATES;
typedef void *ZM_STATE_GUEST_LC;
typedef void *ZM_STATE_INCOMPATIBLE;
typedef void *ZM_STATE_INSECURE_ACCOUNT;
typedef void *ZM_STATE_NORMAL;
typedef void *ZM_STATE_NO_PLAYERS;
typedef void *ZM_STATE_NO_ZONES_FOUND;
typedef void *ZM_STATE_NO_ZONES_FOUND_EXISTING_HH;
typedef void *ZM_STATE_NO_ZONES_FOUND_UNATTACHED_ZONES;
typedef void *ZM_STATE_NO_ZONES_FOUND_WRONG_AP;
typedef void *ZM_STATE_ORPHANED_PLAYERS;
typedef void *ZM_STATE_UPDATING;
struct AVTransport { char _pad; AVTransport(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct AnacapaLauncher { char _pad; AnacapaLauncher(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct App { char _pad; App(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Bridges { char _pad; Bridges(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Bundle { char _pad; Bundle(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Cert { char _pad; Cert(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Charger { char _pad; Charger(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Command { char _pad; Command(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Components { char _pad; Components(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct ConnectionManager { char _pad; ConnectionManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Demo { char _pad; Demo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct DeviceProperties { char _pad; DeviceProperties(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Factory { char _pad; Factory(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Forget { char _pad; Forget(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Found { char _pad; Found(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Function { char _pad; Function(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct GetButtonLockState { char _pad; GetButtonLockState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct GetLEDState { char _pad; GetLEDState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct GetProtocolInfo { char _pad; GetProtocolInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Globals { char _pad; Globals(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Household { char _pad; Household(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Info { char _pad; Info(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Invalid { char _pad; Invalid(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Kicking { char _pad; Kicking(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Legacy { char _pad; Legacy(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Mixed { char _pad; Mixed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Modern { char _pad; Modern(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Network { char _pad; Network(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct New { char _pad; New(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct No { char _pad; No(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct None { char _pad; None(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Nothing { char _pad; Nothing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Offline { char _pad; Offline(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Only { char _pad; Only(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Orientation { char _pad; Orientation(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Outdated { char _pad; Outdated(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Pause { char _pad; Pause(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Reset { char _pad; Reset(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Retail { char _pad; Retail(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Root { char _pad; Root(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCILandingPage { char _pad; SCILandingPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIMusicServiceMenu { char _pad; SCIMusicServiceMenu(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCReportManager { char _pad; SCReportManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SetButtonLockState { char _pad; SetButtonLockState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SetLEDState { char _pad; SetLEDState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SetZoneAttributes { char _pad; SetZoneAttributes(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct ThrowInfo { char _pad; ThrowInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct UNK_1188cfec { char _pad; UNK_1188cfec(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct UNK_1188d034 { char _pad; UNK_1188d034(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Unknown { char _pad; Unknown(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Unsupported { char _pad; Unsupported(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Updating { char _pad; Updating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Weak { char _pad; Weak(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Recovered_Bulk { char _pad; /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1022fe20(undefined4 param_2); template<class... A> int FUN_1022fe20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10233240(uint param_2,int param_3,int *param_4); template<class... A> int FUN_10233240(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_102332c0(uint param_2,int param_3,int *param_4); template<class... A> int FUN_102332c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10233340(uint param_2,int param_3,int *param_4); template<class... A> int FUN_10233340(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10233a30(int param_2); template<class... A> int FUN_10233a30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10233a50(int param_2); template<class... A> int FUN_10233a50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10233a70(int param_2); template<class... A> int FUN_10233a70(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10233a90(int param_2); template<class... A> int FUN_10233a90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10233ab0(int param_2); template<class... A> int FUN_10233ab0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10233ad0(int param_2); template<class... A> int FUN_10233ad0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10233af0(int param_2); template<class... A> int FUN_10233af0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10233b10(int param_2); template<class... A> int FUN_10233b10(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10233b30(int *param_2); template<class... A> int FUN_10233b30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10233b90(int *param_2); template<class... A> int FUN_10233b90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10233bf0(int *param_2); template<class... A> int FUN_10233bf0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10233ce0(undefined4 *param_2); template<class... A> int FUN_10233ce0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10235120(byte *param_2); template<class... A> int FUN_10235120(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10235180(byte *param_2); template<class... A> int FUN_10235180(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_102351e0(byte *param_2); template<class... A> int FUN_102351e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10236140(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10236140(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_1023c160(undefined4 *param_2,undefined4 *param_3); template<class... A> int FUN_1023c160(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte __thiscall FUN_10241e00(byte param_2,char param_3); template<class... A> int FUN_10241e00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10244ec0(undefined4 param_2); template<class... A> int FUN_10244ec0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10244ed0(uint param_2); template<class... A> int FUN_10244ed0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10245910(undefined4 *param_2); template<class... A> int FUN_10245910(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1024e5b0(int *param_2); template<class... A> int FUN_1024e5b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1024e900(int *param_2); template<class... A> int FUN_1024e900(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1024efc0(undefined4 param_2); template<class... A> int FUN_1024efc0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1024f000(undefined4 param_2); template<class... A> int FUN_1024f000(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1024f980(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_1024f980(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1024f9b0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_1024f9b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1024fe20(int param_2); template<class... A> int FUN_1024fe20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1024fe40(int param_2); template<class... A> int FUN_1024fe40(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1024fe60(int *param_2); template<class... A> int FUN_1024fe60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10250120(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10250120(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10253da0(undefined4 param_2,SCStr *param_3); template<class... A> int FUN_10253da0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10254690(undefined4 *param_2); template<class... A> int FUN_10254690(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_102596f0(undefined4 param_2); template<class... A> int FUN_102596f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_1025a0a0(uint param_2); template<class... A> int FUN_1025a0a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1025aee0(int param_2); template<class... A> int FUN_1025aee0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1025af00(int param_2); template<class... A> int FUN_1025af00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1025af20(int param_2); template<class... A> int FUN_1025af20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1025af40(int param_2); template<class... A> int FUN_1025af40(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1025af60(int param_2); template<class... A> int FUN_1025af60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1025af80(int *param_2); template<class... A> int FUN_1025af80(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1025afe0(int *param_2); template<class... A> int FUN_1025afe0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1025b040(int *param_2); template<class... A> int FUN_1025b040(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1025b0a0(int *param_2); template<class... A> int FUN_1025b0a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1025b7f0(undefined4 *param_2); template<class... A> int FUN_1025b7f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1025e200(int param_2); template<class... A> int FUN_1025e200(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1025f220(undefined4 param_2,undefined1 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined1 param_8); template<class... A> int FUN_1025f220(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10262f70(char *param_2,undefined4 *param_3); template<class... A> int FUN_10262f70(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10262fa0(char *param_2,undefined4 *param_3); template<class... A> int FUN_10262fa0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10262fd0(char *param_2,undefined4 *param_3); template<class... A> int FUN_10262fd0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10263000(char *param_2,undefined4 *param_3); template<class... A> int FUN_10263000(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10263030(char *param_2,undefined4 *param_3); template<class... A> int FUN_10263030(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10263060(char *param_2,undefined4 *param_3); template<class... A> int FUN_10263060(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10263090(char *param_2,undefined4 *param_3); template<class... A> int FUN_10263090(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_102630c0(char *param_2,undefined4 *param_3); template<class... A> int FUN_102630c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_102630f0(char *param_2,undefined4 *param_3); template<class... A> int FUN_102630f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10263120(char *param_2,undefined4 *param_3); template<class... A> int FUN_10263120(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10263150(char *param_2,undefined4 *param_3); template<class... A> int FUN_10263150(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10263180(char *param_2,undefined4 *param_3); template<class... A> int FUN_10263180(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_102631b0(char *param_2,undefined4 *param_3); template<class... A> int FUN_102631b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_102631e0(char *param_2,undefined4 *param_3); template<class... A> int FUN_102631e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10263210(char *param_2,undefined4 *param_3); template<class... A> int FUN_10263210(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10263240(char *param_2,undefined4 *param_3); template<class... A> int FUN_10263240(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10263270(char *param_2,undefined4 *param_3); template<class... A> int FUN_10263270(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_102632a0(char *param_2,undefined4 *param_3); template<class... A> int FUN_102632a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_102632d0(char *param_2,undefined4 *param_3); template<class... A> int FUN_102632d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10265db0(SCStr *param_2); template<class... A> int FUN_10265db0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10268380(uint param_2); template<class... A> int FUN_10268380(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_102683c0(uint param_2); template<class... A> int FUN_102683c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1026f2a0(undefined4 param_2); template<class... A> int FUN_1026f2a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10270650(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10270650(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10270ba0(int param_2); template<class... A> int FUN_10270ba0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10271290(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10271290(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10274de0(undefined4 param_2); template<class... A> int FUN_10274de0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_102760e0(undefined4 *param_2); template<class... A> int FUN_102760e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10276690(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10276690(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10276de0(uint param_2); template<class... A> int FUN_10276de0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10276e90(int param_2); template<class... A> int FUN_10276e90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10276ec0(uint param_2); template<class... A> int FUN_10276ec0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10276f10(uint param_2); template<class... A> int FUN_10276f10(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10277170(uint param_2); template<class... A> int FUN_10277170(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10277d30(int param_2); template<class... A> int FUN_10277d30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10278c60(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10278c60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10279910(int *param_2); template<class... A> int FUN_10279910(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1027eca0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_1027eca0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1027ef00(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_1027ef00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1027f3f0(undefined4 param_2); template<class... A> int FUN_1027f3f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1027fba0(int *param_2); template<class... A> int FUN_1027fba0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1027fbf0(int *param_2); template<class... A> int FUN_1027fbf0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1027fc40(undefined4 *param_2); template<class... A> int FUN_1027fc40(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10280d30(uint param_2); template<class... A> int FUN_10280d30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10282fe0(undefined4 *param_2); template<class... A> int FUN_10282fe0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10283e90(int *param_2,undefined4 param_3); template<class... A> int FUN_10283e90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_102846c0(int *param_2,uint *param_3); template<class... A> int FUN_102846c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10284860(int *param_2,uint *param_3); template<class... A> int FUN_10284860(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10285380(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10285380(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10285540(SCStr *param_2); template<class... A> int FUN_10285540(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_102856e0(undefined4 *param_2); template<class... A> int FUN_102856e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10285720(undefined4 *param_2); template<class... A> int FUN_10285720(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10286180(int *param_2); template<class... A> int FUN_10286180(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10286440(int param_2); template<class... A> int FUN_10286440(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10286470(uint param_2); template<class... A> int FUN_10286470(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_10289c30(int param_2); template<class... A> int FUN_10289c30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_1028b4d0(undefined4 param_2,SCStr *param_3); template<class... A> int FUN_1028b4d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_1028b6c0(undefined4 *param_2); template<class... A> int FUN_1028b6c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1028bb40(int *param_2,undefined4 param_3); template<class... A> int FUN_1028bb40(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1028c2d0(int *param_2,undefined4 *param_3); template<class... A> int FUN_1028c2d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1028ce40(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_1028ce40(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1028d060(undefined4 *param_2); template<class... A> int FUN_1028d060(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1028d230(undefined4 *param_2); template<class... A> int FUN_1028d230(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1028f3f0(undefined4 *param_2); template<class... A> int FUN_1028f3f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_102926b0(undefined4 param_2); template<class... A> int FUN_102926b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_10293480(int param_2); template<class... A> int FUN_10293480(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10293fc0(undefined4 param_2,SCStr *param_3); template<class... A> int FUN_10293fc0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10294230(undefined4 param_2,SCStr *param_3); template<class... A> int FUN_10294230(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10294290(undefined4 *param_2); template<class... A> int FUN_10294290(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_102942d0(undefined4 *param_2); template<class... A> int FUN_102942d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10295620(int *param_2); template<class... A> int FUN_10295620(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10295780(undefined4 *param_2,undefined4 param_3); template<class... A> int FUN_10295780(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_102957f0(undefined4 *param_2,undefined4 param_3); template<class... A> int FUN_102957f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_102958a0(undefined4 *param_2,undefined4 param_3,undefined1 param_4); template<class... A> int FUN_102958a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_1029ae00(undefined4 *param_2,int param_3); template<class... A> int FUN_1029ae00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1029ce20(int param_2); template<class... A> int FUN_1029ce20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1029da50(undefined4 *param_2); template<class... A> int FUN_1029da50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1029dee0(int param_2); template<class... A> int FUN_1029dee0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1029e760(undefined1 *param_2); template<class... A> int FUN_1029e760(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_1029ea20(undefined4 param_2,SCStr *param_3); template<class... A> int FUN_1029ea20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_1029ec10(undefined4 param_2,SCStr *param_3); template<class... A> int FUN_1029ec10(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_1029ec60(undefined4 *param_2); template<class... A> int FUN_1029ec60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_1029ec90(undefined4 *param_2); template<class... A> int FUN_1029ec90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_102a1c70(undefined4 param_2,SCStr *param_3); template<class... A> int FUN_102a1c70(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_102a1e30(undefined4 *param_2); template<class... A> int FUN_102a1e30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_102a3340(undefined4 param_2); template<class... A> int FUN_102a3340(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_102a3500(undefined4 param_2); template<class... A> int FUN_102a3500(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_102a5c50(undefined4 param_2); template<class... A> int FUN_102a5c50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_102a6c40(undefined4 *param_2); template<class... A> int FUN_102a6c40(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_102a6cf0(undefined4 *param_2); template<class... A> int FUN_102a6cf0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_102a70c0(undefined4 param_2); template<class... A> int FUN_102a70c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_102aa850(undefined4 *param_2); template<class... A> int FUN_102aa850(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_102ac4c0(int param_2); template<class... A> int FUN_102ac4c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_102ac4f0(int param_2); template<class... A> int FUN_102ac4f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_102ac520(uint param_2); template<class... A> int FUN_102ac520(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_102ac570(uint param_2); template<class... A> int FUN_102ac570(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_102ac5b0(uint param_2); template<class... A> int FUN_102ac5b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_102ac820(uint param_2); template<class... A> int FUN_102ac820(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_102ad470(undefined4 *param_2); template<class... A> int FUN_102ad470(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_102ad4a0(undefined4 *param_2); template<class... A> int FUN_102ad4a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_102adce0(undefined4 param_2); template<class... A> int FUN_102adce0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_102ae2e0(undefined4 *param_2); template<class... A> int FUN_102ae2e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_102b8290(uint param_2); template<class... A> int FUN_102b8290(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_102b8880(undefined4 param_2); template<class... A> int FUN_102b8880(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_102bc6a0(int *param_2,undefined4 param_3); template<class... A> int FUN_102bc6a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_102bd200(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_102bd200(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_102bddd0(int *param_2); template<class... A> int FUN_102bddd0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_102bead0(undefined4 *param_2); template<class... A> int FUN_102bead0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_102c1bc0(int param_2); template<class... A> int FUN_102c1bc0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_102c3ed0(undefined4 param_2); template<class... A> int FUN_102c3ed0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_102c5cd0(int param_2); template<class... A> int FUN_102c5cd0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_102c5cf0(int param_2); template<class... A> int FUN_102c5cf0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_102ca870(undefined4 param_2,undefined4 *param_3); template<class... A> int FUN_102ca870(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_102caa00(undefined4 *param_2); template<class... A> int FUN_102caa00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_102cc000(undefined4 param_2); template<class... A> int FUN_102cc000(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_102cc3e0(undefined4 param_2); template<class... A> int FUN_102cc3e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_102cdba0(uint param_2); template<class... A> int FUN_102cdba0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_102ce140(int param_2); template<class... A> int FUN_102ce140(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_102ce160(int param_2); template<class... A> int FUN_102ce160(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_102d1e40(undefined4 param_2,int *param_3); template<class... A> int FUN_102d1e40(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_102d2070(undefined4 *param_2); template<class... A> int FUN_102d2070(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_102d3390(undefined4 param_2); template<class... A> int FUN_102d3390(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_102d4430(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_102d4430(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_102d4d80(uint param_2,int param_3,int *param_4); template<class... A> int FUN_102d4d80(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_102d4fa0(int param_2); template<class... A> int FUN_102d4fa0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_102d5610(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_102d5610(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_102d89d0(void *param_2,int param_3); template<class... A> int FUN_102d89d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_102d8d70(void *param_2,int param_3); template<class... A> int FUN_102d8d70(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_102d8e90(undefined4 *param_2); template<class... A> int FUN_102d8e90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_102d8fd0(undefined4 *param_2); template<class... A> int FUN_102d8fd0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_102d9c30(int *param_2); template<class... A> int FUN_102d9c30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_102da640(int param_2); template<class... A> int FUN_102da640(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_102da670(uint param_2); template<class... A> int FUN_102da670(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_102da720(uint param_2); template<class... A> int FUN_102da720(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_102da7f0(undefined4 *param_2); template<class... A> int FUN_102da7f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_102db850(undefined4 *param_2); template<class... A> int FUN_102db850(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_102dc680(undefined4 param_2); template<class... A> int FUN_102dc680(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_102dc6c0(undefined4 param_2); template<class... A> int FUN_102dc6c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_102dd150(undefined4 *param_2); template<class... A> int FUN_102dd150(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_102dd6a0(undefined4 *param_2); template<class... A> int FUN_102dd6a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_102dd720(uint param_2); template<class... A> int FUN_102dd720(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_102ded70(int param_2); template<class... A> int FUN_102ded70(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_102df4a0(undefined4 *param_2); template<class... A> int FUN_102df4a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_102e4fd0(undefined4 param_2,SCStr *param_3); template<class... A> int FUN_102e4fd0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_102e53c0(undefined4 param_2,SCStr *param_3); template<class... A> int FUN_102e53c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_102e53f0(undefined4 param_2,SCStr *param_3); template<class... A> int FUN_102e53f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_102e54d0(undefined4 *param_2); template<class... A> int FUN_102e54d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_102e5500(undefined4 *param_2); template<class... A> int FUN_102e5500(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_102e5540(undefined4 *param_2); template<class... A> int FUN_102e5540(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8 * __thiscall FUN_102ea900(undefined8 *param_2); template<class... A> int FUN_102ea900(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_102ead30(undefined4 param_2); template<class... A> int FUN_102ead30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_102ee5e0(int *param_2,int param_3); template<class... A> int FUN_102ee5e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_102eff40(uint param_2,undefined4 param_3); template<class... A> int FUN_102eff40(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10301d00(undefined4 param_2,int param_3); template<class... A> int FUN_10301d00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10301da0(int *param_2); template<class... A> int FUN_10301da0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10301ec0(int *param_2); template<class... A> int FUN_10301ec0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_103031d0(SCStr *param_2,int param_3); template<class... A> int FUN_103031d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10303910(int *param_2,undefined4 param_3); template<class... A> int FUN_10303910(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10304ff0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10304ff0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8 * __thiscall FUN_10305120(undefined8 *param_2); template<class... A> int FUN_10305120(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10305370(SCStr *param_2); template<class... A> int FUN_10305370(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103054e0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8); template<class... A> int FUN_103054e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10305530(int param_2); template<class... A> int FUN_10305530(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10307920(uint param_2,int param_3,int *param_4); template<class... A> int FUN_10307920(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10308b50(undefined4 param_2); template<class... A> int FUN_10308b50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10310ce0(int *param_2,int param_3); template<class... A> int FUN_10310ce0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10310d30(int *param_2,int param_3); template<class... A> int FUN_10310d30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10310d80(int *param_2,int param_3); template<class... A> int FUN_10310d80(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10311510(uint param_2,int param_3,int *param_4); template<class... A> int FUN_10311510(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10311590(uint param_2,int param_3,int *param_4); template<class... A> int FUN_10311590(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10311610(uint param_2,int param_3,int *param_4); template<class... A> int FUN_10311610(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10311e60(int *param_2); template<class... A> int FUN_10311e60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10312a60(byte *param_2); template<class... A> int FUN_10312a60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10312ac0(byte *param_2); template<class... A> int FUN_10312ac0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10312b20(byte *param_2); template<class... A> int FUN_10312b20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint * __thiscall FUN_10314240(int *param_2); template<class... A> int FUN_10314240(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10316240(undefined4 param_2); template<class... A> int FUN_10316240(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103162f0(undefined4 *param_2); template<class... A> int FUN_103162f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10316390(undefined4 *param_2); template<class... A> int FUN_10316390(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10316420(undefined4 param_2,undefined4 param_3,undefined1 param_4); template<class... A> int FUN_10316420(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10316470(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int FUN_10316470(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10316510(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int FUN_10316510(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103165b0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int FUN_103165b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10316660(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int FUN_10316660(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10316710(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int FUN_10316710(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10316860(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int FUN_10316860(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10316900(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int FUN_10316900(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103169a0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int FUN_103169a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103190c0(int *param_2); template<class... A> int FUN_103190c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10319cf0(uint param_2); template<class... A> int FUN_10319cf0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1031c8a0(undefined4 *param_2,SCStr *param_3); template<class... A> int FUN_1031c8a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1031e6b0(undefined4 *param_2); template<class... A> int FUN_1031e6b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1031fd70(undefined4 *param_2); template<class... A> int FUN_1031fd70(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10321850(SCStr *param_2); template<class... A> int FUN_10321850(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10321a40(SCStr *param_2); template<class... A> int FUN_10321a40(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_103272e0(undefined4 *param_2); template<class... A> int FUN_103272e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10328f30(SCStr *param_2); template<class... A> int FUN_10328f30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_1032bf60(undefined4 param_2,SCStr *param_3); template<class... A> int FUN_1032bf60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1032bf90(undefined4 param_2,undefined4 *param_3); template<class... A> int FUN_1032bf90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1032ccb0(int *param_2); template<class... A> int FUN_1032ccb0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1032ce40(int *param_2); template<class... A> int FUN_1032ce40(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1032cfd0(int *param_2); template<class... A> int FUN_1032cfd0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1032d160(int *param_2); template<class... A> int FUN_1032d160(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1032d2f0(int *param_2); template<class... A> int FUN_1032d2f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_1032dc80(undefined4 *param_2); template<class... A> int FUN_1032dc80(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1032dcc0(undefined4 *param_2); template<class... A> int FUN_1032dcc0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1032dd50(undefined4 *param_2,int *param_3); template<class... A> int FUN_1032dd50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1032dda0(undefined4 *param_2,int *param_3); template<class... A> int FUN_1032dda0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1032ddf0(undefined4 *param_2); template<class... A> int FUN_1032ddf0(A...); };
using namespace std;
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022fda0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022fda0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022fdd0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022fdd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10231d90(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10231d90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10231db0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10231db0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10231dd0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10231dd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10231df0(float *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10231df0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10231e50(float *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10231e50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10231eb0(float *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10231eb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10234a90(int param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10234a90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10234ad0(int param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10234ad0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10234b10(int param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10234b10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10234e60(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10234e60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10234ee0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10234ee0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10234f50(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10234f50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10234fc0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10234fc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10235030(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10235030(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102350a0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102350a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10235290(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10235290(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10235310(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10235310(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10235390(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10235390(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10235a00(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10235a00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10235da0(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10235da0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10235df0(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10235df0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10235e40(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10235e40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10235e90(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10235e90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10235ee0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10235ee0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10235f30(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10235f30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10235fd0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10235fd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10236020(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10236020(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10236070(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10236070(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1023b270(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1023b270(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_1023b290(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1023b290(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10242a90(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10242a90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10245ef0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10245ef0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10245f10(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10245f10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_102465b0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_102465b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10246970(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10246970(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10246af0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10246af0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10247ce0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10247ce0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10247d10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10247d10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10248510(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10248510(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10248560(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10248560(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102485b0(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102485b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10249c10(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10249c10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10249c20(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10249c20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10249dc0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10249dc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1024c1f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1024c1f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1024c260(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1024c260(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1024e7a0(int param_1,undefined4 *param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1024e7a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1024ea00(int param_1,undefined4 *param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1024ea00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1024ecf0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1024ecf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1024f5b0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1024f5b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_102534f0(SCStr *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_102534f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10254800(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10254800(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_102551b0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_102551b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10255860(int param_1,SCStr *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10255860(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10255fc0(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10255fc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10256f50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10256f50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10256fa0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10256fa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10256fd0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10256fd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10257000(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10257000(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10257030(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10257030(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102578b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102578b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10257da0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10257da0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10259720(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10259720(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1025a050(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1025a050(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1025a170(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1025a170(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1025b710(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1025b710(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1025b780(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1025b780(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_1025b840(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_1025b840(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1025b870(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1025b870(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1025b9b0(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1025b9b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1025ba00(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1025ba00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025bac0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025bac0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1025c820(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1025c820(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025c880(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025c880(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1025d600(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1025d600(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1025e1a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1025e1a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1025e2a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1025e2a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1025ede0(int param_1,SCStr *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1025ede0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1025f0a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1025f0a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1025f0d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1025f0d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1025f390(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1025f390(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1025f3d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1025f3d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1025f6f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1025f6f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10260480(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10260480(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102609e0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102609e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10260da0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10260da0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102638e0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102638e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10264a10(int param_1,SCStr *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10264a10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10265760(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10265760(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10265790(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10265790(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102657c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102657c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10268330(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10268330(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10268520(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10268520(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10268c90(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10268c90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102694c0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102694c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10269540(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10269540(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102695b0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102695b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1026ad50(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1026ad50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1026ada0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1026ada0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1026aeb0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1026aeb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1026c880(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1026c880(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1026d830(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1026d830(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1026d8d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1026d8d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_1026e8e0(int *param_1,int *param_2,int *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_1026e8e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1026f090(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1026f090(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_102713f0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102713f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10271cd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10271cd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10271dd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10271dd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10271de0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10271de0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10273390(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10273390(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102736a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102736a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10273c70(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10273c70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10274a20(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10274a20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10277480(undefined4 *param_1, unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10277480(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10278310(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10278310(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10278b60(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10278b60(...);
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void FUN_10279d20(int *param_1);
extern /* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10279d20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1027d2c0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1027d2c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1027df70(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1027df70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1027e870(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1027e870(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1027ea90(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1027ea90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1027eb10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1027eb10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1027fb00(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1027fb00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10280e50(undefined4 *param_1, unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10280e50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10280f10(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10280f10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102811c0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102811c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10281260(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10281260(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102812b0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102812b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10281500(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10281500(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10282f80(undefined4 param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10282f80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10283d30(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10283d30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_102849a0(int param_1,uint *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_102849a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_102849d0(int *param_1,int *param_2,int *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_102849d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10284d80(int *param_1,int *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10284d80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10284f10(undefined4 *param_1,int *param_2,int *param_3,int *param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10284f10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102851a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102851a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10285690(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10285690(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10285b50(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10285b50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10285f90(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10285f90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10285fa0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10285fa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102863f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102863f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10286540(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10286540(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10287140(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10287140(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102872b0(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102872b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10287300(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10287300(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1028b960(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1028b960(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1028b980(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1028b980(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028c560(int param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028c560(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028c590(int param_1,SCStr *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1028c590(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1028cba0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1028cba0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1028cbd0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1028cbd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1028d010(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1028d010(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1028d1e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1028d1e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1028d3b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1028d3b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1028df70(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1028df70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1028e620(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1028e620(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1028e650(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1028e650(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1028e6c0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1028e6c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1028e6e0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1028e6e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10290110(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10290110(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10290210(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10290210(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10290260(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10290260(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102902b0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102902b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10290300(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10290300(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10291f60(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10291f60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10291f80(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10291f80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_10293440(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_10293440(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10293f60(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10293f60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102943d0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102943d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102948d0(int param_1,SCStr *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102948d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10294d00(int *param_1,int *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10294d00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10294e40(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10294e40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10294f00(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10294f00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10294f30(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10294f30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10294f60(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10294f60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10295350(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10295350(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10295860(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10295860(...);
/* WARNING: Removing unreachable block (ram,0x101ba14a) */ void __fastcall FUN_10296300(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10296730(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10296730(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102969d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102969d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10297e10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10297e10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10297e60(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10297e60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10298760(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10298760(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10299a30(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10299a30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10299a80(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10299a80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_1029c940(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1029c940(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1029cbf0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1029cbf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1029cc60(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1029cc60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1029cc80(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1029cc80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1029cf10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1029cf10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1029dc70(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1029dc70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1029de50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1029de50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 * __fastcall FUN_1029dec0(undefined2 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 * __fastcall FUN_1029dec0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1029dff0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1029dff0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1029ed50(int param_1,SCStr *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1029ed50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1029f0c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1029f0c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1029fa50(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1029fa50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1029fa70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1029fa70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1029fab0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1029fab0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1029fad0(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1029fad0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1029fb10(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1029fb10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1029ff50(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1029ff50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a2e50(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a2e50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a2e70(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a2e70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a2e90(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a2e90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a2fa0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a2fa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_102a4760(int param_1,uint *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_102a4760(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102a5650(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a5650(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102a5690(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a5690(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102a56d0(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a56d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102a5730(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a5730(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a57d0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a57d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a57f0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a57f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a5aa0(undefined4 param_1,int *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102a5aa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a6260(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a6260(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a6300(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a6300(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a6330(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a6330(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a6ca0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a6ca0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a6d50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a6d50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a6da0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a6da0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a6df0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102a6df0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ac3c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ac3c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ac3f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ac3f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ac420(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ac420(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ac450(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ac450(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ac7c0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ac7c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ac7e0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ac7e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ac800(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ac800(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102ac930(undefined4 *param_1, unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102ac930(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102add70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102add70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102ae090(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102ae090(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102ae110(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102ae110(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ae390(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102ae390(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102ae820(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102ae820(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102ae870(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102ae870(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102ae8c0(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102ae8c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102ae910(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102ae910(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102ae960(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102ae960(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102b82d0(uint param_1,uint param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102b82d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102b8310(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102b8310(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102b8350(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102b8350(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102bc520(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102bc520(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102bcdd0(int param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102bcdd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102bcf40(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102bcf40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102bcf60(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102bcf60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102bd130(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102bd130(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102bd470(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102bd470(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_102bddf0(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_102bddf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102be070(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102be070(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102be0c0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102be0c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_102be490(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_102be490(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102be9b0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102be9b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_102bea50(byte *param_1,byte *param_2,uint param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_102bea50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102befd0(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102befd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102bf020(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102bf020(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c0270(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c0270(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c1230(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c1230(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c1260(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c1260(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102c3840(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102c3840(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c38f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c38f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c3920(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c3920(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c3950(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c3950(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c3980(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c3980(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c39b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c39b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c3a10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c3a10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c3ca0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102c3ca0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_102c6ed0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_102c6ed0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_102c6f00(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_102c6f00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102cb040(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102cb040(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_102cb3e0(int param_1,uint *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_102cb3e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102cb900(undefined4 *param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102cb900(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102cbd90(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102cbd90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102cbdc0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102cbdc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102cbdf0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102cbdf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102cbe50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102cbe50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102cc350(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102cc350(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102cdb50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102cdb50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102cdc70(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102cdc70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102cf1b0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102cf1b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102cf230(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102cf230(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102cf3e0(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102cf3e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102cf430(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102cf430(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102d2550(undefined4 param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102d2550(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102d25b0(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102d25b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102d2970(undefined4 param_1,int *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102d2970(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102d2b70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102d2b70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102d2f20(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102d2f20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102d4820(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102d4820(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102d4840(float *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102d4840(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102d5130(int param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102d5130(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102d52c0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102d52c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102d5340(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102d5340(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102d5510(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102d5510(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102d5560(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102d5560(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102d55b0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102d55b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102d7330(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102d7330(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_102d8ad0(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_102d8ad0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_102d8cc0(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102d8cc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102d8d00(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102d8d00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102d8d30(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102d8d30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102d9680(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102d9680(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_102da9d0(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102da9d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102daa00(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102daa00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102daa30(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102daa30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102dae70(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102dae70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102dc650(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102dc650(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102dd5e0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102dd5e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102de610(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102de610(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102df520(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102df520(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e4e80(int *param_1,undefined4 param_2,float param_3,int param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e4e80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e6960(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e6960(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e6980(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e6980(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_102e69f0(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_102e69f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e70f0(int param_1,int param_2,int param_3,undefined4 param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e70f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e74c0(int param_1,SCStr *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102e74c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102e93d0(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e93d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102e9410(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e9410(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_102e94e0(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_102e94e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e9a10(int param_1,int param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e9a10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e9b50(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102e9b50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102e9df0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102e9df0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102e9e20(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102e9e20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102e9e50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102e9e50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102e9e80(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102e9e80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102eaa10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102eaa10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102eaa60(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102eaa60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ead60(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ead60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ead90(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102ead90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102eb040(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102eb040(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102eb0a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102eb0a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102efea0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102efea0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102efed0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102efed0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102f0070(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102f0070(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102f0780(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102f0780(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102f0bd0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102f0bd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102f0c50(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102f0c50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102f0cd0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102f0cd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102f0d50(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102f0d50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102f1220(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102f1220(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102f4320(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102f4320(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102f4370(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102f4370(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102f43c0(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102f43c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102f4410(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102f4410(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_102f4460(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102f4460(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102f73d0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102f73d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_102f9b60(undefined2 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_102f9b60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102fc8d0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102fc8d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_102fe1d0(uint *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_102fe1d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10301440(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10301440(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10301d30(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10301d30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10302490(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10302490(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103024c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103024c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10302900(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10302900(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103035d0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103035d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103042b0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103042b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10304300(int param_1,SCStr *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10304300(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10304660(undefined4 param_1,SCStr *param_2,SCStr *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10304660(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103046e0(undefined4 param_1,SCStr *param_2,SCStr *param_3,int param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103046e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10304c80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10304c80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10304cc0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10304cc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10304cf0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10304cf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint * __fastcall FUN_10305310(uint *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint * __fastcall FUN_10305310(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10305b60(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10305b60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103062c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103062c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10306e90(uint *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10306e90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10307080(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10307080(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103070a0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103070a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103070c0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103070c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10308040(int param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10308040(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103089f0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103089f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10308a60(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10308a60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10308ae0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10308ae0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10308d00(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10308d00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10309100(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10309100(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10309150(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10309150(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103091a0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103091a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103091f0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103091f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10309810(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10309810(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_1030b2f0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030b2f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_1030b310(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030b310(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030bb00(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030bb00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030d870(undefined4 param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030d870(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1030d8c0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1030d8c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030e090(undefined4 param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030e090(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030eab0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030eab0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030eae0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030eae0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030eb10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030eb10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1030fba0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1030fba0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1030fc90(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1030fc90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1030fd10(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1030fd10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1030fdc0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1030fdc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10310860(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10310860(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10310880(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10310880(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103108a0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103108a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103108c0(float *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103108c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10310920(float *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10310920(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10310980(float *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10310980(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103126b0(int param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103126b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103126f0(int param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103126f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10312730(int param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10312730(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10312770(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10312770(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103127f0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103127f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10312870(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10312870(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103128e0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103128e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10312950(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10312950(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103129c0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103129c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10312bb0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10312bb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10312c00(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10312c00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10312c80(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10312c80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10312d20(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10312d20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10312e90(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10312e90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10312ee0(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10312ee0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10312f30(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10312f30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10312f80(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10312f80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10312fd0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10312fd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10313020(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10313020(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10313070(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10313070(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103130c0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103130c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10313110(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10313110(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_103136e0(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103136e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10313700(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10313700(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103150f0(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103150f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10315630(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10315630(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10315660(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10315660(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10315690(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10315690(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103156c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103156c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103156f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103156f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10315720(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10315720(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10315750(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10315750(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103163f0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103163f0(...);
/* WARNING: Removing unreachable block_103177f0 (ram,0x101ba14a) */ void __fastcall FUN_103177f0(undefined4 *param_1);
/* WARNING: Removing unreachable block_10317800 (ram,0x101ba14a) */ void __fastcall FUN_10317800(undefined4 *param_1);
/* WARNING: Removing unreachable block_10317810 (ram,0x101ba14a) */ void __fastcall FUN_10317810(undefined4 *param_1);
/* WARNING: Removing unreachable block_10317820 (ram,0x101ba14a) */ void __fastcall FUN_10317820(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318910(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318910(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318940(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318940(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318970(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318970(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103189a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103189a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103189d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103189d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318a00(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318a00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318a30(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318a30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318a60(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318a60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318a90(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318a90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318e50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318e50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318e70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318e70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318e90(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318e90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318eb0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318eb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318ed0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318ed0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1031b140(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1031b140(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1031f6c0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1031f6c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1031f6e0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1031f6e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1031f980(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1031f980(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103206a0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103206a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10320870(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10320870(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10322d60(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10322d60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10325550(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10325550(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10325df0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10325df0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10327390(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10327390(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10327670(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10327670(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10327740(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10327740(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_10327f60(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_10327f60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_10328620(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_10328620(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_103286c0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_103286c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10328fd0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10328fd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1032b630(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1032b630(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1032b6f0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1032b6f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_1032b750(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_1032b750(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e3c0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e3c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e3e0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e3e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e400(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e400(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e420(int param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e420(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e450(int param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e450(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e480(int param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e480(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e4b0(int param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e4b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e4e0(int param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e4e0(...);
// Reference entry 1022fda0; body size 30 bytes.
#line 1 "ENTRY_1022fda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1022fda0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
 try {
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004,&stack0x00000008);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 1022fdd0; body size 27 bytes.
#line 1 "ENTRY_1022fdd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1022fdd0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
 try {
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 1022fe20; body size 35 bytes.
#line 1 "ENTRY_1022fe20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1022fe20(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 10231d90; body size 20 bytes.
#line 1 "ENTRY_10231d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10231d90(int param_1)

{
  if (*(int *)(param_1 + 8) != 0xccccccc) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 10231db0; body size 20 bytes.
#line 1 "ENTRY_10231db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10231db0(int param_1)

{
  if (*(int *)(param_1 + 8) != 0xfffffff) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 10231dd0; body size 20 bytes.
#line 1 "ENTRY_10231dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10231dd0(int param_1)

{
  if (*(int *)(param_1 + 8) != 0xfffffff) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 10231df0; body size 66 bytes.
#line 1 "ENTRY_10231df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10231df0(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) +
                 (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (bool)(*param_1 <= fVar1 && fVar1 != *param_1);
}


// Reference entry 10231e50; body size 66 bytes.
#line 1 "ENTRY_10231e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10231e50(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) +
                 (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (bool)(*param_1 <= fVar1 && fVar1 != *param_1);
}


// Reference entry 10231eb0; body size 66 bytes.
#line 1 "ENTRY_10231eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10231eb0(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) +
                 (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (bool)(*param_1 <= fVar1 && fVar1 != *param_1);
}


// Reference entry 10233240; body size 92 bytes.
#line 1 "ENTRY_10233240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10233240(uint param_2,int param_3,int *param_4)
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


// Reference entry 102332c0; body size 92 bytes.
#line 1 "ENTRY_102332c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_102332c0(uint param_2,int param_3,int *param_4)
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


// Reference entry 10233340; body size 92 bytes.
#line 1 "ENTRY_10233340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10233340(uint param_2,int param_3,int *param_4)
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


// Reference entry 10233a30; body size 26 bytes.
#line 1 "ENTRY_10233a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10233a30(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10233a50; body size 26 bytes.
#line 1 "ENTRY_10233a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10233a50(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10233a70; body size 26 bytes.
#line 1 "ENTRY_10233a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10233a70(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10233a90; body size 26 bytes.
#line 1 "ENTRY_10233a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10233a90(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10233ab0; body size 26 bytes.
#line 1 "ENTRY_10233ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10233ab0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10233ad0; body size 26 bytes.
#line 1 "ENTRY_10233ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10233ad0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10233af0; body size 26 bytes.
#line 1 "ENTRY_10233af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10233af0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10233b10; body size 26 bytes.
#line 1 "ENTRY_10233b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10233b10(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10233b30; body size 76 bytes.
#line 1 "ENTRY_10233b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10233b30(int *param_2)
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


// Reference entry 10233b90; body size 76 bytes.
#line 1 "ENTRY_10233b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10233b90(int *param_2)
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


// Reference entry 10233bf0; body size 76 bytes.
#line 1 "ENTRY_10233bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10233bf0(int *param_2)
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


// Reference entry 10233ce0; body size 33 bytes.
#line 1 "ENTRY_10233ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10233ce0(undefined4 *param_2)
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


// Reference entry 10234a90; body size 43 bytes.
#line 1 "ENTRY_10234a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10234a90(int param_1,int param_2,int param_3)

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


// Reference entry 10234ad0; body size 43 bytes.
#line 1 "ENTRY_10234ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10234ad0(int param_1,int param_2,int param_3)

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


// Reference entry 10234b10; body size 43 bytes.
#line 1 "ENTRY_10234b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10234b10(int param_1,int param_2,int param_3)

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


// Reference entry 10234e60; body size 90 bytes.
#line 1 "ENTRY_10234e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10234e60(uint param_1)

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


// Reference entry 10234ee0; body size 87 bytes.
#line 1 "ENTRY_10234ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10234ee0(uint param_1)

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


// Reference entry 10234f50; body size 87 bytes.
#line 1 "ENTRY_10234f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10234f50(uint param_1)

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


// Reference entry 10234fc0; body size 87 bytes.
#line 1 "ENTRY_10234fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10234fc0(uint param_1)

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


// Reference entry 10235030; body size 87 bytes.
#line 1 "ENTRY_10235030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10235030(uint param_1)

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


// Reference entry 102350a0; body size 87 bytes.
#line 1 "ENTRY_102350a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_102350a0(uint param_1)

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


// Reference entry 10235120; body size 68 bytes.
#line 1 "ENTRY_10235120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10235120(byte *param_2)
{
  int param_1 = (int )this;
  return (uint)(*(uint *)(param_1 + 0x18) &
         ((((*param_2 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_2[1]) * 0x1000193 ^ (uint)param_2[2])
          * 0x1000193 ^ (uint)param_2[3]) * 0x1000193);
}


// Reference entry 10235180; body size 68 bytes.
#line 1 "ENTRY_10235180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10235180(byte *param_2)
{
  int param_1 = (int )this;
  return (uint)(*(uint *)(param_1 + 0x18) &
         ((((*param_2 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_2[1]) * 0x1000193 ^ (uint)param_2[2])
          * 0x1000193 ^ (uint)param_2[3]) * 0x1000193);
}


// Reference entry 102351e0; body size 68 bytes.
#line 1 "ENTRY_102351e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_102351e0(byte *param_2)
{
  int param_1 = (int )this;
  return (uint)(*(uint *)(param_1 + 0x18) &
         ((((*param_2 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_2[1]) * 0x1000193 ^ (uint)param_2[2])
          * 0x1000193 ^ (uint)param_2[3]) * 0x1000193);
}


// Reference entry 10235290; body size 94 bytes.
#line 1 "ENTRY_10235290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10235290(int param_1)

{
  int *piVar1;
  int iStack_4;
  
  if (*(uint *)(param_1 + 8) != 0) {
    piVar1 = (int *)((int *)(param_1 + 4));
    iStack_4 = (int)(param_1);
    if (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 0x1c) >> 3) {
      func_0x10076f76(*(undefined4 *)*piVar1,(undefined4 *)*piVar1);
      return;
    }
    thunk_FUN_102260c0(piVar1,*piVar1);
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
    iStack_4 = (int)(*piVar1);
    thunk_FUN_10227930(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&iStack_4);
  }
  return;
}


// Reference entry 10235310; body size 94 bytes.
#line 1 "ENTRY_10235310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10235310(int param_1)

{
  int *piVar1;
  int iStack_4;
  
  if (*(uint *)(param_1 + 8) != 0) {
    piVar1 = (int *)((int *)(param_1 + 4));
    iStack_4 = (int)(param_1);
    if (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 0x1c) >> 3) {
      func_0x1007df1f(*(undefined4 *)*piVar1,(undefined4 *)*piVar1);
      return;
    }
    thunk_FUN_10226130(piVar1,*piVar1);
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
    iStack_4 = (int)(*piVar1);
    thunk_FUN_102279b0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&iStack_4);
  }
  return;
}


// Reference entry 10235390; body size 123 bytes.
#line 1 "ENTRY_10235390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10235390(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iStack_4;
  
  if (*(uint *)(param_1 + 8) != 0) {
    iStack_4 = (int)(param_1);
    if (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 0x1c) >> 3) {
      func_0x1001d494(**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
      return;
    }
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
    *(undefined4*)puVar1[1] = (undefined4)((undefined4)(0));
    puVar1 = (undefined4 *)((undefined4 *)*puVar1);
    while ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)((undefined4 *)*puVar1);
      thunk_FUN_1148a50e(puVar1,0x10);
      puVar1 = (undefined4 *)(puVar2);
    }
    *(undefined4 *)*(undefined4*)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_1 + 4));
    *(int*)(*(int *)(param_1 + 4) + 4) = (int)(*(int *)(param_1 + 4));
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
    iStack_4 = (int)(*(int *)(param_1 + 4));
    thunk_FUN_10227a30(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&iStack_4);
  }
  return;
}


// Reference entry 10235a00; body size 22 bytes.
#line 1 "ENTRY_10235a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10235a00(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return (char *)("None");
  case 1:
    return (char *)("No Network");
  case 2:
    return (char *)("Nothing Found");
  case 3:
    return (char *)("Only Bridges");
  case 4:
    return (char *)("Offline Components");
  case 5:
    return (char *)("Unknown Network");
  case 6:
    return (char *)("Legacy App Modern HH");
  case 7:
    return (char *)("Modern App Mixed HH");
  case 8:
    return (char *)("Modern App Legacy HH");
  case 9:
    return (char *)("Updating");
  case 10:
    return (char *)("Unsupported");
  case 0xb:
    return (char *)("Retail Demo");
  case 0xc:
    return (char *)("Factory Reset");
  case 0xd:
    return (char *)("Forget Household");
  case 0xe:
    return (char *)("Outdated App");
  case 0xf:
    return (char *)("Weak Charger");
  case 0x10:
    return (char *)("Invalid Orientation");
  case 0x11:
    return (char *)("New Household");
  default:
    return (char *)("");
  }
}


// Reference entry 10235da0; body size 57 bytes.
#line 1 "ENTRY_10235da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10235da0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10235df0; body size 54 bytes.
#line 1 "ENTRY_10235df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10235df0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10235e40; body size 54 bytes.
#line 1 "ENTRY_10235e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10235e40(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10235e90; body size 60 bytes.
#line 1 "ENTRY_10235e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10235e90(int param_1,int param_2)

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


// Reference entry 10235ee0; body size 57 bytes.
#line 1 "ENTRY_10235ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10235ee0(int param_1,int param_2)

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


// Reference entry 10235f30; body size 57 bytes.
#line 1 "ENTRY_10235f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10235f30(int param_1,int param_2)

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


// Reference entry 10235fd0; body size 61 bytes.
#line 1 "ENTRY_10235fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10235fd0(int param_1,int param_2)

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


// Reference entry 10236020; body size 61 bytes.
#line 1 "ENTRY_10236020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10236020(int param_1,int param_2)

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


// Reference entry 10236070; body size 61 bytes.
#line 1 "ENTRY_10236070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10236070(int param_1,int param_2)

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


// Reference entry 10236140; body size 32 bytes.
#line 1 "ENTRY_10236140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10236140(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x3c) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x3c) + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 1023b270; body size 16 bytes.
#line 1 "ENTRY_1023b270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1023b270(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_10227fb0(param_1,param_2);
  return;
}


// Reference entry 1023b290; body size 20 bytes.
#line 1 "ENTRY_1023b290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_1023b290(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_101176e0(param_1,param_2);
  return (undefined4)(param_1);
}


// Reference entry 1023c160; body size 39 bytes.
#line 1 "ENTRY_1023c160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_1023c160(undefined4 *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 0xec) != 0) {
    *param_2 = (undefined4)(2);
    *param_3 = (undefined4)(9);
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 10241e00; body size 156 bytes.
#line 1 "ENTRY_10241e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte __thiscall Recovered_Bulk::FUN_10241e00(byte param_2,char param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 == 0) && (*(int *)(param_1 + 0xec) == 0)) {
    return (byte)(0);
  }
  iVar1 = (int)(*(int *)(param_1 + 0xec));
  *(uint*)(param_1 + 0xec) = (uint)((param_2 ^ 1) + 1);
  if (*(int *)(param_1 + 0xf0) != 0) {
    thunk_FUN_1059d940(*(int *)(param_1 + 0xf0));
    *(undefined4*)(param_1 + 0xf0) = (undefined4)(0);
  }
  if (param_2 != 0) {
    uVar2 = (undefined4)(120000);
    if (param_3 != '\0') {
      uVar2 = (undefined4)(600000);
    }
    uVar2 = (undefined4)(thunk_FUN_1059d5a0(uVar2));
    *(undefined4*)(param_1 + 0xf0) = (undefined4)(uVar2);
    if (*(int *)(param_1 + 0xf4) == 0) {
      uVar2 = (undefined4)(thunk_FUN_1059d5a0(600000));
      *(undefined4*)(param_1 + 0xf4) = (undefined4)(uVar2);
    }
  }
  return (byte)(iVar1 == 1 ^ param_2);
}


// Reference entry 10242a90; body size 10 bytes.
#line 1 "ENTRY_10242a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10242a90(int param_1)

{
  return (undefined4)(((uint)((int3)((uint)*(int *)(param_1 + 4) >> 8)) << 8 | (uint)((int)((param_1 + 4)) != *(int *)(param_1 + 8))));
}


// Reference entry 10244ec0; body size 8 bytes.
#line 1 "ENTRY_10244ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10244ec0(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 *puStack_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 *puStack_1c;
  int iStack_18;
  uint uStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  iStack_18 = (int)(param_1 + 4);


  uVar3 = (uint)(DAT_12126b84);

  puStack_1c = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puStack_1c) == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    puStack_1c[1] = (undefined4)(0);
    puStack_1c[2] = (undefined4)(0);
    *puStack_1c = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
    puVar8 = (undefined4 *)(puStack_1c);
  }
  puStack_1c = (undefined4 *)(operator_new(0x6c));

  if ((void *)(puStack_1c) == (void *)0x0) {
    iVar4 = (int)(0);
  }
  else {
    iVar4 = (int)(thunk_FUN_111c06e0(param_2));
  }

  if ((int *)(int *)(puVar8[1]) != (int *)0x0) {
    if (puVar8[2] != 0) {
      (**(code **)(*(int *)puVar8[1] + 0x10))(uVar3);
    }
    puVar7 = (undefined4 *)((undefined4 *)puVar8[1]);
    if ((undefined4 *)(puVar7) != (undefined4 *)0x0) {
      iVar5 = (int)(thunk_FUN_1123fcd0(puVar7 + 1));
      if (iVar5 == 0) {
        (**(code **)*puVar7)(1);
      }
    }
    puVar8[1] = (undefined4)(0);
    puVar8[2] = (undefined4)(0);
  }
  puVar8[1] = (undefined4)(iVar4);
  if (iVar4 != 0) {
    thunk_FUN_1123fce0(iVar4 + 4);
    if ((int *)(int *)(puVar8[1]) != (int *)0x0) {
      uVar6 = (undefined4)((**(code **)(*(int *)puVar8[1] + 4))(iStack_18,0));
      puVar8[2] = (undefined4)(uVar6);
      if ((int *)(int *)(puVar8[1]) != (int *)0x0) {
        cVar1 = (char)((**(code **)(*(int *)puVar8[1] + 0xc))());
        if (cVar1 != '\0') {
          uStack_14 = (uint)((**(code **)(*(int *)puVar8[1] + 8))());
          goto LAB_1059d6b4;
        }
      }
    }
  }
  uStack_14 = (uint)(puVar8[2]);
LAB_1059d6b4:
  iVar4 = (int)(iStack_18);
  iStack_20 = (int)(iStack_18 + 0x10);
  uVar2 = (undefined1)(thunk_FUN_112a7f50(iStack_20));
  puStack_1c = (undefined4 *)((undefined4 *)((uint)(*(unsigned short *)((char *)&puStack_1c + 1)) << 8 | (uint)(uVar2)));

  puVar7 = (undefined4 *)((undefined4 *)(iVar4 + 8));
  thunk_FUN_1059b760(&uStack_34,&uStack_14);
  if ((*(char *)(iStack_2c + 0xd) != '\0') || (uStack_14 < *(uint *)(iStack_2c + 0x10))) {
    if (*(int *)(iVar4 + 0xc) == 0xaaaaaaa) {
                    
      thunk_FUN_101d7220();
    }
    uVar6 = (undefined4)(*puVar7);
    uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(2)));

    puStack_28 = (undefined4 *)(puVar7);
    puVar7 = (undefined4 *)(operator_new(0x18));
    puVar7[4] = (undefined4)(uStack_14);
    puVar7[5] = (undefined4)(0);
    *puVar7 = (undefined4)(uVar6);
    puVar7[1] = (undefined4)(uVar6);
    puVar7[2] = (undefined4)(uVar6);
    *(undefined2*)(puVar7 + 3) = (undefined2)(0);
    iStack_2c = (int)(thunk_FUN_1059cad0(uStack_34,uStack_30,puVar7));
  }
  uVar3 = (uint)(uStack_14);
  *(undefined4**)(iStack_2c + 0x14) = (undefined4 *)(puVar8);
  if ((char)puStack_1c != '\0') {
    thunk_FUN_112a8010(iStack_18 + 0x10);
  }

  return (uint)(uVar3);

 } catch (...) { }
}


// Reference entry 10244ed0; body size 8 bytes.
#line 1 "ENTRY_10244ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10244ed0(uint param_2)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  uint uVar2;
  undefined1 auStack_24 [8];
  int iStack_1c;
  int iStack_18;
  char cStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uVar2 = (uint)(param_2);


  if (param_2 != 0) {
    iVar1 = (int)(param_1 + 0x14);
    iStack_18 = (int)(iVar1);
    cStack_14 = (char)(thunk_FUN_112a7f50(iVar1,DAT_12126b84 ));

    thunk_FUN_1059b760(auStack_24,&param_2);
    if (((*(char *)(iStack_1c + 0xd) == '\0') && (*(uint *)(iStack_1c + 0x10) <= (uint)(uVar2))) &&
       ((int)(iStack_1c) != *(int *)(param_1 + 0xc))) {
      thunk_FUN_1059d0b0(iStack_1c);
    }
    if (cStack_14 != '\0') {
      thunk_FUN_112a8010(iVar1);
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10245910; body size 33 bytes.
#line 1 "ENTRY_10245910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10245910(undefined4 *param_2)
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


// Reference entry 10245ef0; body size 25 bytes.
#line 1 "ENTRY_10245ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10245ef0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x28));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 10245f10; body size 25 bytes.
#line 1 "ENTRY_10245f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10245f10(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 102465b0; body size 22 bytes.
#line 1 "ENTRY_102465b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_102465b0(uint param_1)

{
  undefined1 auStack_c [12];
  
  if (param_1 < 0x6666667) {
    return (int)(param_1 * 0x28);
  }
  thunk_FUN_1011bdc0();
                    
  _CxxThrowException(auStack_c,(ThrowInfo *)&DAT_11d330dc);
}


// Reference entry 10246970; body size 27 bytes.
#line 1 "ENTRY_10246970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10246970(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10246af0; body size 52 bytes.
#line 1 "ENTRY_10246af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10246af0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x28));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10247ce0; body size 31 bytes.
#line 1 "ENTRY_10247ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10247ce0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x28));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10247d10; body size 31 bytes.
#line 1 "ENTRY_10247d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10247d10(undefined4 *param_1)

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


// Reference entry 10248510; body size 57 bytes.
#line 1 "ENTRY_10248510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10248510(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10248560; body size 57 bytes.
#line 1 "ENTRY_10248560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10248560(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x28);
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


// Reference entry 102485b0; body size 57 bytes.
#line 1 "ENTRY_102485b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102485b0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10249c10; body size 8 bytes.
#line 1 "ENTRY_10249c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10249c10(int param_1)

{
 try {
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  cVar4 = (char)(thunk_FUN_112a7f50(param_1 + 0x14,DAT_12126b84 ));

  if (*(int *)(param_1 + 0x10) != 0) {
    do {
      iVar1 = (int)(**(int **)(param_1 + 0xc));
      puVar2 = (undefined4 *)(*(undefined4 **)(iVar1 + 0x14));
      bVar5 = (bool)(((SCLibrary *)(0))->isShuttingDown());
      if (bVar5) {
        if ((undefined4 *)(puVar2) != (undefined4 *)0x0) goto LAB_1059d8b2;
      }
      else if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
        if ((puVar2[2] != 0) && ((int *)(int *)(puVar2[1]) != (int *)0x0)) {
          (**(code **)(*(int *)puVar2[1] + 0x10))();
          puVar3 = (undefined4 *)((undefined4 *)puVar2[1]);
          if (((undefined4 *)(puVar3) != (undefined4 *)0x0) && (iVar6 = thunk_FUN_1123fcd0(puVar3 + 1), iVar6 == 0))
          {
            (**(code **)*puVar3)(1);
          }
          puVar2[1] = (undefined4)(0);
          puVar2[2] = (undefined4)(0);
        }
LAB_1059d8b2:
        (**(code **)*puVar2)(1);
      }
      uVar7 = (undefined4)(thunk_FUN_1059c6f0(iVar1));
      thunk_FUN_1148a50e(uVar7,0x18);
    } while (*(int *)(param_1 + 0x10) != 0);
  }
  if (cVar4 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x14);
  }

  return;

 } catch (...) { }
}


// Reference entry 10249c20; body size 22 bytes.
#line 1 "ENTRY_10249c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10249c20(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return (char *)("ZM_STATE_NORMAL");
  case 1:
    return (char *)("ZM_STATE_ALL_ZONES_HIDDEN");
  case 2:
    return (char *)("ZM_STATE_ORPHANED_PLAYERS");
  case 3:
    return (char *)("ZM_STATE_NO_PLAYERS");
  case 4:
    return (char *)("ZM_STATE_NO_ZONES_FOUND");
  case 5:
    return (char *)("ZM_STATE_NO_ZONES_FOUND_WRONG_AP");
  case 6:
    return (char *)("ZM_STATE_NO_ZONES_FOUND_EXISTING_HH");
  case 7:
    return (char *)("ZM_STATE_NO_ZONES_FOUND_UNATTACHED_ZONES");
  case 8:
    return (char *)("ZM_STATE_ALL_UNCONFIGURED");
  case 9:
    return (char *)("ZM_STATE_INSECURE_ACCOUNT");
  case 10:
    return (char *)("ZM_STATE_EOL_NO_UPDATES");
  case 0xb:
    return (char *)("ZM_STATE_INCOMPATIBLE");
  case 0xc:
    return (char *)("ZM_STATE_GUEST_LC");
  case 0xd:
    return (char *)("ZM_STATE_UPDATING");
  default:
    return (char *)("");
  }
}


// Reference entry 10249dc0; body size 27 bytes.
#line 1 "ENTRY_10249dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10249dc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 1024c1f0; body size 27 bytes.
#line 1 "ENTRY_1024c1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1024c1f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 1024c260; body size 68 bytes.
#line 1 "ENTRY_1024c260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1024c260(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEulaManager);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1024e5b0; body size 106 bytes.
#line 1 "ENTRY_1024e5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1024e5b0(int *param_2)
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


// Reference entry 1024e7a0; body size 40 bytes.
#line 1 "ENTRY_1024e7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1024e7a0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
                    
                    
  std::_Xbad_function_call();
  return;
}


// Reference entry 1024e900; body size 122 bytes.
#line 1 "ENTRY_1024e900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1024e900(int *param_2)
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


// Reference entry 1024ea00; body size 40 bytes.
#line 1 "ENTRY_1024ea00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1024ea00(int param_1,undefined4 *param_2,undefined4 param_3)

{
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
                    
                    
  std::_Xbad_function_call();
  return;
}


// Reference entry 1024ecf0; body size 27 bytes.
#line 1 "ENTRY_1024ecf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1024ecf0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 1024efc0; body size 42 bytes.
#line 1 "ENTRY_1024efc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1024efc0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSubscriptionImpl_EventSink);
  return (undefined4 *)(param_1);
}


// Reference entry 1024f000; body size 42 bytes.
#line 1 "ENTRY_1024f000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1024f000(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCExperimentManager_EventSink);
  return (undefined4 *)(param_1);
}


// Reference entry 1024f5b0; body size 34 bytes.
#line 1 "ENTRY_1024f5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1024f5b0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  }
  return;
}


// Reference entry 1024f980; body size 29 bytes.
#line 1 "ENTRY_1024f980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1024f980(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 1024f9b0; body size 29 bytes.
#line 1 "ENTRY_1024f9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1024f9b0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 1024fe20; body size 26 bytes.
#line 1 "ENTRY_1024fe20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1024fe20(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 1024fe40; body size 26 bytes.
#line 1 "ENTRY_1024fe40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1024fe40(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 1024fe60; body size 76 bytes.
#line 1 "ENTRY_1024fe60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1024fe60(int *param_2)
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


// Reference entry 10250120; body size 32 bytes.
#line 1 "ENTRY_10250120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10250120(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x3c) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x3c) + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 102534f0; body size 129 bytes.
#line 1 "ENTRY_102534f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_102534f0(SCStr *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_1))->op_eq("lifecycle_status_all_modern"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_1))->op_eq("lifecycle_status_all_legacy"));
    if (!bVar1) {
      bVar1 = (bool)(((SCStr *)(param_1))->op_eq("lifecycle_status_mixed"));
      if (!bVar1) {
        bVar1 = (bool)(((SCStr *)(param_1))->op_eq("lifecycle_status_modern_wbridge"));
        if (!bVar1) {
          bVar1 = (bool)(((SCStr *)(param_1))->op_eq("sonos_radio_settings_tile"));
          if (!bVar1) {
            bVar1 = (bool)(((SCStr *)(param_1))->op_eq("sonos_radio_landing_page"));
            if (!bVar1) {
              bVar1 = (bool)(((SCStr *)(param_1))->op_eq("sonos_radio_browse_tile"));
              if (!bVar1) {
                return (undefined1)(1);
              }
            }
          }
        }
      }
    }
  }
  return (undefined1)(0);
}


// Reference entry 10253da0; body size 60 bytes.
#line 1 "ENTRY_10253da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10253da0(undefined4 param_2,SCStr *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_3);
  *(undefined8*)(param_1 + 4) = (undefined8)(0);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 10254690; body size 62 bytes.
#line 1 "ENTRY_10254690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10254690(undefined4 *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor((SCStr *)*param_2);
  *(undefined8*)(param_1 + 4) = (undefined8)(0);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 10254800; body size 25 bytes.
#line 1 "ENTRY_10254800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10254800(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x20));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 102551b0; body size 19 bytes.
#line 1 "ENTRY_102551b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_102551b0(uint param_1)

{
  undefined1 auStack_c [12];
  
  if (param_1 < 0x8000000) {
    return (int)(param_1 << 5);
  }
  thunk_FUN_1011bdc0();
                    
  _CxxThrowException(auStack_c,(ThrowInfo *)&DAT_11d330dc);
}


// Reference entry 10255860; body size 37 bytes.
#line 1 "ENTRY_10255860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10255860(int param_1,SCStr *param_2)

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


// Reference entry 10255fc0; body size 55 bytes.
#line 1 "ENTRY_10255fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10255fc0(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 8) = (undefined4)(0);
  *(undefined4*)(param_2 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  *(undefined4*)(param_2 + 8) = (undefined4)(0);
  *(undefined4*)(param_2 + 0xc) = (undefined4)(0);
  return;
}


// Reference entry 10256f50; body size 54 bytes.
#line 1 "ENTRY_10256f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10256f50(undefined4 *param_1)

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


// Reference entry 10256fa0; body size 27 bytes.
#line 1 "ENTRY_10256fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10256fa0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10256fd0; body size 27 bytes.
#line 1 "ENTRY_10256fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10256fd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10257000; body size 27 bytes.
#line 1 "ENTRY_10257000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10257000(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10257030; body size 27 bytes.
#line 1 "ENTRY_10257030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10257030(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102578b0; body size 52 bytes.
#line 1 "ENTRY_102578b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102578b0(undefined4 *param_1)

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


// Reference entry 10257da0; body size 28 bytes.
#line 1 "ENTRY_10257da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10257da0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102596f0; body size 29 bytes.
#line 1 "ENTRY_102596f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_102596f0(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(param_2,&stack0x00000008);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 10259720; body size 25 bytes.
#line 1 "ENTRY_10259720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10259720(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
 try {
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 1025a050; body size 31 bytes.
#line 1 "ENTRY_1025a050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1025a050(undefined4 *param_1)

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


// Reference entry 1025a0a0; body size 49 bytes.
#line 1 "ENTRY_1025a0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_1025a0a0(uint param_2)
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


// Reference entry 1025a170; body size 14 bytes.
#line 1 "ENTRY_1025a170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1025a170(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x7ffffff) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 1025aee0; body size 26 bytes.
#line 1 "ENTRY_1025aee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1025aee0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 1025af00; body size 26 bytes.
#line 1 "ENTRY_1025af00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1025af00(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 1025af20; body size 26 bytes.
#line 1 "ENTRY_1025af20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1025af20(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 1025af40; body size 26 bytes.
#line 1 "ENTRY_1025af40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1025af40(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 1025af60; body size 26 bytes.
#line 1 "ENTRY_1025af60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1025af60(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 1025af80; body size 76 bytes.
#line 1 "ENTRY_1025af80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1025af80(int *param_2)
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


// Reference entry 1025afe0; body size 76 bytes.
#line 1 "ENTRY_1025afe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1025afe0(int *param_2)
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


// Reference entry 1025b040; body size 76 bytes.
#line 1 "ENTRY_1025b040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1025b040(int *param_2)
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


// Reference entry 1025b0a0; body size 76 bytes.
#line 1 "ENTRY_1025b0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1025b0a0(int *param_2)
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


// Reference entry 1025b710; body size 87 bytes.
#line 1 "ENTRY_1025b710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1025b710(uint param_1)

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


// Reference entry 1025b780; body size 87 bytes.
#line 1 "ENTRY_1025b780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1025b780(uint param_1)

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


// Reference entry 1025b7f0; body size 59 bytes.
#line 1 "ENTRY_1025b7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1025b7f0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0xc));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 0x10)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int*)(param_1 + 0xc) = (int)(*(int *)(param_1 + 0xc) + 8);
    return;
  }
  thunk_FUN_10254c20(puVar1,param_2);
  return;
}


// Reference entry 1025b840; body size 20 bytes.
#line 1 "ENTRY_1025b840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_1025b840(void)

{
  uint in_EAX;
  uint uVar1;
  
  if ((int *)(DAT_121a0ae4) != (int *)0x0) {
                    
                    
    uVar1 = (uint)((**(code **)(*(int *)(uint)(DAT_121a0ae4) + 0x24))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 1025b870; body size 25 bytes.
#line 1 "ENTRY_1025b870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1025b870(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)(param_1 + 8));
  thunk_FUN_10254af0(*puVar1,*(undefined4 *)(param_1 + 0xc),puVar1);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(*puVar1);
  return;
}


// Reference entry 1025b9b0; body size 54 bytes.
#line 1 "ENTRY_1025b9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1025b9b0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 1025ba00; body size 57 bytes.
#line 1 "ENTRY_1025ba00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1025ba00(int param_1,int param_2)

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


// Reference entry 1025bac0; body size 9 bytes.
#line 1 "ENTRY_1025bac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1025bac0(int *param_1)

{
  return (undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)((int *)(*param_1) == (int *)(param_1)[1])));
}


// Reference entry 1025c820; body size 16 bytes.
#line 1 "ENTRY_1025c820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1025c820(void)

{
  if ((int *)(DAT_121a0ae4) != (int *)0x0) {
                    
                    
    (**(code **)(*(int *)(uint)(DAT_121a0ae4) + 0x14))();
    return;
  }
  return;
}


// Reference entry 1025c880; body size 10 bytes.
#line 1 "ENTRY_1025c880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1025c880(int param_1)

{
  return (undefined4)(((uint)((int3)((uint)*(int *)(param_1 + 8) >> 8)) << 8 | (uint)((int)((param_1 + 8)) == *(int *)(param_1 + 0xc))));
}


// Reference entry 1025d600; body size 27 bytes.
#line 1 "ENTRY_1025d600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1025d600(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 1025e1a0; body size 27 bytes.
#line 1 "ENTRY_1025e1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1025e1a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 1025e200; body size 57 bytes.
#line 1 "ENTRY_1025e200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1025e200(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCTime);
  param_1[2] = (undefined4)(*(undefined4 *)(param_2 + 8));
  param_1[3] = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  param_1[4] = (undefined4)(*(undefined4 *)(param_2 + 0x10));
  return (undefined4 *)(param_1);
}


// Reference entry 1025e2a0; body size 54 bytes.
#line 1 "ENTRY_1025e2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1025e2a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCTime);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1025ede0; body size 37 bytes.
#line 1 "ENTRY_1025ede0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1025ede0(int param_1,SCStr *param_2)

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


// Reference entry 1025f0a0; body size 27 bytes.
#line 1 "ENTRY_1025f0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1025f0a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 1025f0d0; body size 34 bytes.
#line 1 "ENTRY_1025f0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1025f0d0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 1025f220; body size 69 bytes.
#line 1 "ENTRY_1025f220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1025f220(undefined4 param_2,undefined1 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined1 param_8)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_1025f3f0(param_5,param_4);
  param_1[6] = (undefined4)(param_2);
  *(undefined1*)(param_1 + 7) = (undefined1)(param_3);
  param_1[8] = (undefined4)(param_6);
  *(undefined1*)(param_1 + 9) = (undefined1)(param_7);
  *(undefined1*)((int)param_1 + 0x25) = (undefined1)(param_8);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCActionStringInput);
  return (undefined4 *)(param_1);
}


// Reference entry 1025f390; body size 40 bytes.
#line 1 "ENTRY_1025f390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1025f390(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCShareNameInput);
  return (undefined4 *)(param_1);
}


// Reference entry 1025f3d0; body size 21 bytes.
#line 1 "ENTRY_1025f3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1025f3d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStrProp);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1025f6f0; body size 40 bytes.
#line 1 "ENTRY_1025f6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1025f6f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStrStandaloneInputBase);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10260480; body size 14 bytes.
#line 1 "ENTRY_10260480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10260480(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xccccccc) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 102609e0; body size 90 bytes.
#line 1 "ENTRY_102609e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_102609e0(uint param_1)

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


// Reference entry 10260da0; body size 60 bytes.
#line 1 "ENTRY_10260da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10260da0(int param_1,int param_2)

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


// Reference entry 10262f70; body size 33 bytes.
#line 1 "ENTRY_10262f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10262f70(char *param_2,undefined4 *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->int_allocRep(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_3);
  return (SCStr *)(param_1);
}


// Reference entry 10262fa0; body size 33 bytes.
#line 1 "ENTRY_10262fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10262fa0(char *param_2,undefined4 *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->int_allocRep(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_3);
  return (SCStr *)(param_1);
}


// Reference entry 10262fd0; body size 33 bytes.
#line 1 "ENTRY_10262fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10262fd0(char *param_2,undefined4 *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->int_allocRep(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_3);
  return (SCStr *)(param_1);
}


// Reference entry 10263000; body size 33 bytes.
#line 1 "ENTRY_10263000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10263000(char *param_2,undefined4 *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->int_allocRep(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_3);
  return (SCStr *)(param_1);
}


// Reference entry 10263030; body size 33 bytes.
#line 1 "ENTRY_10263030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10263030(char *param_2,undefined4 *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->int_allocRep(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_3);
  return (SCStr *)(param_1);
}


// Reference entry 10263060; body size 33 bytes.
#line 1 "ENTRY_10263060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10263060(char *param_2,undefined4 *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->int_allocRep(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_3);
  return (SCStr *)(param_1);
}


// Reference entry 10263090; body size 33 bytes.
#line 1 "ENTRY_10263090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10263090(char *param_2,undefined4 *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->int_allocRep(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_3);
  return (SCStr *)(param_1);
}


// Reference entry 102630c0; body size 33 bytes.
#line 1 "ENTRY_102630c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_102630c0(char *param_2,undefined4 *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->int_allocRep(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_3);
  return (SCStr *)(param_1);
}


// Reference entry 102630f0; body size 33 bytes.
#line 1 "ENTRY_102630f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_102630f0(char *param_2,undefined4 *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->int_allocRep(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_3);
  return (SCStr *)(param_1);
}


// Reference entry 10263120; body size 33 bytes.
#line 1 "ENTRY_10263120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10263120(char *param_2,undefined4 *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->int_allocRep(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_3);
  return (SCStr *)(param_1);
}


// Reference entry 10263150; body size 33 bytes.
#line 1 "ENTRY_10263150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10263150(char *param_2,undefined4 *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->int_allocRep(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_3);
  return (SCStr *)(param_1);
}


// Reference entry 10263180; body size 33 bytes.
#line 1 "ENTRY_10263180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10263180(char *param_2,undefined4 *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->int_allocRep(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_3);
  return (SCStr *)(param_1);
}


// Reference entry 102631b0; body size 33 bytes.
#line 1 "ENTRY_102631b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_102631b0(char *param_2,undefined4 *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->int_allocRep(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_3);
  return (SCStr *)(param_1);
}


// Reference entry 102631e0; body size 33 bytes.
#line 1 "ENTRY_102631e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_102631e0(char *param_2,undefined4 *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->int_allocRep(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_3);
  return (SCStr *)(param_1);
}


// Reference entry 10263210; body size 33 bytes.
#line 1 "ENTRY_10263210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10263210(char *param_2,undefined4 *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->int_allocRep(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_3);
  return (SCStr *)(param_1);
}


// Reference entry 10263240; body size 33 bytes.
#line 1 "ENTRY_10263240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10263240(char *param_2,undefined4 *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->int_allocRep(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_3);
  return (SCStr *)(param_1);
}


// Reference entry 10263270; body size 33 bytes.
#line 1 "ENTRY_10263270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10263270(char *param_2,undefined4 *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->int_allocRep(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_3);
  return (SCStr *)(param_1);
}


// Reference entry 102632a0; body size 33 bytes.
#line 1 "ENTRY_102632a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_102632a0(char *param_2,undefined4 *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->int_allocRep(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_3);
  return (SCStr *)(param_1);
}


// Reference entry 102632d0; body size 33 bytes.
#line 1 "ENTRY_102632d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_102632d0(char *param_2,undefined4 *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->int_allocRep(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_3);
  return (SCStr *)(param_1);
}


// Reference entry 102638e0; body size 25 bytes.
#line 1 "ENTRY_102638e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102638e0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 10264a10; body size 37 bytes.
#line 1 "ENTRY_10264a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10264a10(int param_1,SCStr *param_2)

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


// Reference entry 10265760; body size 27 bytes.
#line 1 "ENTRY_10265760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10265760(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10265790; body size 27 bytes.
#line 1 "ENTRY_10265790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10265790(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102657c0; body size 27 bytes.
#line 1 "ENTRY_102657c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102657c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10265db0; body size 33 bytes.
#line 1 "ENTRY_10265db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10265db0(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_2 + 4));
  return (SCStr *)(param_1);
}


// Reference entry 10268330; body size 31 bytes.
#line 1 "ENTRY_10268330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10268330(undefined4 *param_1)

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


// Reference entry 10268380; body size 49 bytes.
#line 1 "ENTRY_10268380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10268380(uint param_2)
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


// Reference entry 102683c0; body size 49 bytes.
#line 1 "ENTRY_102683c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_102683c0(uint param_2)
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


// Reference entry 10268520; body size 14 bytes.
#line 1 "ENTRY_10268520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10268520(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10268c90; body size 30 bytes.
#line 1 "ENTRY_10268c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10268c90(int param_1)

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


// Reference entry 102694c0; body size 90 bytes.
#line 1 "ENTRY_102694c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_102694c0(uint param_1)

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


// Reference entry 10269540; body size 87 bytes.
#line 1 "ENTRY_10269540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10269540(uint param_1)

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


// Reference entry 102695b0; body size 87 bytes.
#line 1 "ENTRY_102695b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_102695b0(uint param_1)

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


// Reference entry 1026ad50; body size 57 bytes.
#line 1 "ENTRY_1026ad50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1026ad50(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 1026ada0; body size 60 bytes.
#line 1 "ENTRY_1026ada0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1026ada0(int param_1,int param_2)

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


// Reference entry 1026aeb0; body size 32 bytes.
#line 1 "ENTRY_1026aeb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1026aeb0(void)

{
  SCStr aSStack_14 [4];
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  uStack_10 = (undefined4)(0);
  ((SCStr *)(aSStack_14))->int_allocRep("SCILandingPage:onDismiss");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 1026c880; body size 32 bytes.
#line 1 "ENTRY_1026c880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1026c880(void)

{
  SCStr aSStack_14 [4];
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  uStack_10 = (undefined4)(0);
  ((SCStr *)(aSStack_14))->int_allocRep("SCILandingPage:onFooterChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 1026d830; body size 27 bytes.
#line 1 "ENTRY_1026d830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1026d830(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 1026d8d0; body size 47 bytes.
#line 1 "ENTRY_1026d8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1026d8d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLogging);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1026e8e0; body size 93 bytes.
#line 1 "ENTRY_1026e8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_1026e8e0(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if ((int *)((param_2)) == (int *)(param_1)) {
    return (int *)(param_3);
  }
  do {
    iVar2 = (int)(param_2[-2]);
    piVar4 = (int *)(param_2 + -2);
    piVar3 = (int *)(param_3 + -2);
    if (iVar2 != *piVar3) {
      piVar1 = (int *)((int *)param_3[-1]);
      if ((int *)(piVar1) != (int *)0x0) {
        *piVar3 = (int)(0);
        param_3[-1] = (int)(0);
        (**(code **)(*piVar1 + 8))();
        iVar2 = (int)(*piVar4);
      }
      *piVar3 = (int)(iVar2);
      piVar1 = (int *)((int *)param_2[-1]);
      param_3[-1] = (int)((int)piVar1);
      if ((int *)(piVar1) != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    param_3 = (int *)(piVar3);
    param_2 = (int *)(piVar4);
  } while ((int *)(piVar4) != (int *)(param_1));
  return (int *)(piVar3);
}


// Reference entry 1026f090; body size 27 bytes.
#line 1 "ENTRY_1026f090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1026f090(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 1026f2a0; body size 42 bytes.
#line 1 "ENTRY_1026f2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1026f2a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSubscriptionImpl_EventSink);
  return (undefined4 *)(param_1);
}


// Reference entry 10270650; body size 29 bytes.
#line 1 "ENTRY_10270650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10270650(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 10270ba0; body size 26 bytes.
#line 1 "ENTRY_10270ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10270ba0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10271290; body size 32 bytes.
#line 1 "ENTRY_10271290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10271290(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x3c) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x3c) + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 102713f0; body size 24 bytes.
#line 1 "ENTRY_102713f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_102713f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_1026eab0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 10271cd0; body size 11 bytes.
#line 1 "ENTRY_10271cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10271cd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  return (undefined4 *)(param_1);
}


// Reference entry 10271dd0; body size 11 bytes.
#line 1 "ENTRY_10271dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10271dd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  return (undefined4 *)(param_1);
}


// Reference entry 10271de0; body size 19 bytes.
#line 1 "ENTRY_10271de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10271de0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[9] = (undefined4)(param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10273390; body size 22 bytes.
#line 1 "ENTRY_10273390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10273390(uint param_1)

{
  undefined1 auStack_c [12];
  
  if (param_1 < 0x71c71c8) {
    return (int)(param_1 * 0x24);
  }
  thunk_FUN_1011bdc0();
                    
  _CxxThrowException(auStack_c,(ThrowInfo *)&DAT_11d330dc);
}


// Reference entry 102736a0; body size 12 bytes.
#line 1 "ENTRY_102736a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102736a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[9] = (undefined4)(param_1);
  return;
}


// Reference entry 10273c70; body size 20 bytes.
#line 1 "ENTRY_10273c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10273c70(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_102725d0(param_1,param_2,param_2);
  return;
}


// Reference entry 10274a20; body size 27 bytes.
#line 1 "ENTRY_10274a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10274a20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10274de0; body size 42 bytes.
#line 1 "ENTRY_10274de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10274de0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSubscriptionImpl_EventSink);
  return (undefined4 *)(param_1);
}


// Reference entry 102760e0; body size 31 bytes.
#line 1 "ENTRY_102760e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_102760e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    thunk_FUN_102725d0(*param_2,param_2[1],param_2);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10276690; body size 29 bytes.
#line 1 "ENTRY_10276690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10276690(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 10276de0; body size 131 bytes.
#line 1 "ENTRY_10276de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10276de0(uint param_2)
{
  uint *param_1 = (uint *)this;
  void *pvVar1;
  uint uVar2;
  
  if (param_2 < 0x71c71c8) {
    param_2 = (uint)(param_2 * 0x24);
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


// Reference entry 10276e90; body size 30 bytes.
#line 1 "ENTRY_10276e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10276e90(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10278390(param_2));
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + param_2 * 8);
  return;
}


// Reference entry 10276ec0; body size 63 bytes.
#line 1 "ENTRY_10276ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10276ec0(uint param_2)
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


// Reference entry 10276f10; body size 49 bytes.
#line 1 "ENTRY_10276f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10276f10(uint param_2)
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


// Reference entry 10277170; body size 182 bytes.
#line 1 "ENTRY_10277170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10277170(uint param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x1fffffff < param_2) {
                    
    thunk_FUN_102782f0();
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
    thunk_FUN_10272fd0(iVar2,param_1[1],param_1);
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
  iVar2 = (int)(thunk_FUN_10278390(uVar3));
  *param_1 = (int)(iVar2);
  param_1[1] = (int)(iVar2);
  param_1[2] = (int)(iVar2 + uVar3 * 8);
  return;
}


// Reference entry 10277480; body size 21 bytes.
#line 1 "ENTRY_10277480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10277480(undefined4 *param_1, unsigned int recovered_unused_stack_0)

{
  thunk_FUN_102725d0(*param_1,param_1[1],param_1);
  return;
}


// Reference entry 10277d30; body size 26 bytes.
#line 1 "ENTRY_10277d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10277d30(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10278310; body size 90 bytes.
#line 1 "ENTRY_10278310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10278310(uint param_1)

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


// Reference entry 10278b60; body size 60 bytes.
#line 1 "ENTRY_10278b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10278b60(int param_1,int param_2)

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


// Reference entry 10278c60; body size 32 bytes.
#line 1 "ENTRY_10278c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10278c60(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x3c) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x3c) + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 10279910; body size 141 bytes.
#line 1 "ENTRY_10279910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10279910(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  bool bVar5;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  piVar2 = (int *)(param_2);
  iStack_20 = (int)(param_2[1]);
  iVar1 = (int)(*param_2);
  iStack_1c = (int)(*(int *)(param_1 + 0x20));
  iVar4 = (int)(*(int *)(param_1 + 0x24) - iStack_1c >> 3);
  bVar5 = (bool)(iStack_20 - iVar1 >> 3 != iVar4);
  param_2 = (int *)((int *)((uint)(*(unsigned short *)((char *)&param_2 + 1)) << 8 | (uint)(bVar5)));
  if (bVar5) {
    bVar5 = (bool)(true);
  }
  else {
    param_2 = (int *)((int *)((uint)*(unsigned short *)((char *)&param_2 + 1) << 8));
    iStack_18 = (int)((int)param_2);
    cVar3 = (char)(FUN_10273f70(iVar1));
    bVar5 = (bool)(cVar3 == '\0');
    iVar4 = (int)(extraout_ECX);
  }
  if (bVar5) {
    if ((int *)((param_1 + 0x20)) != (int *)(piVar2)) {
      iStack_18 = (int)((int)param_2);
      iStack_1c = (int)(piVar2[1]);
      iStack_20 = (int)(*piVar2);
      thunk_FUN_102725d0();
      iVar4 = (int)(extraout_ECX_00);
    }
    iStack_18 = (int)(0);
    iStack_20 = (int)(iVar4);
    iStack_1c = (int)(param_1);
    ((SCStr *)((SCStr *)&iStack_20))->int_allocRep("SCIMusicServiceMenu:onMenuChanged");
    thunk_FUN_103d65f0();
  }
  return;
}


// Reference entry 10279d20; body size 703 bytes.
#line 1 "ENTRY_10279d20"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10279d20(int *param_1)

{
 try {
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  bool bVar11;
  char *pcStack_1c34;
  void *pvStack_1c30;
  undefined1 *puStack_1c2c;
  undefined4 uStack_1c28;
  undefined1 auStack_1c24 [3100];
  undefined1 auStack_1008 [4096];
  uint uStack_8;


  uStack_8 = (uint)(DAT_12126b84 ^ (uint)auStack_1c24);

  pbVar2 = (byte *)((byte *)thunk_FUN_112a1350(param_1));
  pbVar3 = (byte *)((byte *)thunk_FUN_112a1350(param_1,&UNK_1188cfec));
  pcVar4 = (char *)((char *)thunk_FUN_112a1350(param_1,"content-length"));
  pcStack_1c34 = (char *)((char *)thunk_FUN_112a1350(param_1,&DAT_1187d878));
  iVar5 = (int)(thunk_FUN_112a1350(param_1,&DAT_1188d004));
  if (((int *)(param_1) == (int *)0x0) || (*param_1 == 10)) {
    if (((byte *)(pbVar2) != (byte *)0x0) &&
       ((((byte *)(pbVar3) != (byte *)0x0 && ((char *)(pcVar4) != (char *)0x0)) && (iVar5 != 0)))) {
      pcVar6 = (char *)("upnp:event");
      do {
        bVar1 = (byte)(*pbVar2);
        bVar11 = (bool)(bVar1 < (byte)*pcVar6);
        if (bVar1 != *pcVar6) {
LAB_10279e04:
          uVar7 = (uint)(-(uint)bVar11 | 1);
          goto LAB_10279e09;
        }
        if (bVar1 == 0) break;
        bVar1 = (byte)(pbVar2[1]);
        bVar11 = (bool)(bVar1 < (byte)pcVar6[1]);
        if ((char *)((bVar1)) != (char *)(pcVar6[1])) goto LAB_10279e04;
        pbVar2 = (byte *)(pbVar2 + 2);
        pcVar6 = (char *)(pcVar6 + 2);
      } while (bVar1 != 0);
      uVar7 = (uint)(0);
LAB_10279e09:
      if (uVar7 == 0) {
        pcVar6 = (char *)("upnp:propchange");
        do {
          bVar1 = (byte)(*pbVar3);
          bVar11 = (bool)(bVar1 < (byte)*pcVar6);
          if (bVar1 != *pcVar6) {
LAB_10279e32:
            uVar7 = (uint)(-(uint)bVar11 | 1);
            goto LAB_10279e37;
          }
          if (bVar1 == 0) break;
          bVar1 = (byte)(pbVar3[1]);
          bVar11 = (bool)(bVar1 < (byte)pcVar6[1]);
          if ((char *)((bVar1)) != (char *)(pcVar6[1])) goto LAB_10279e32;
          pbVar3 = (byte *)(pbVar3 + 2);
          pcVar6 = (char *)(pcVar6 + 2);
        } while (bVar1 != 0);
        uVar7 = (uint)(0);
LAB_10279e37:
        if ((uVar7 == 0) && ((char *)(pcStack_1c34) != (char *)0x0)) {
          ((SCStr *)((SCStr *)&stack0xffffe3a0))->int_allocRep(pcStack_1c34);

          thunk_FUN_106d5ce0();

          pcVar6 = (char *)((char *)func_0x1001f834());
          ((SCStr *)((SCStr *)&pcStack_1c34))->int_allocRep(pcVar6);

          if (((char *)(pcStack_1c34) == (char *)0x0) || (*pcStack_1c34 == '\0')) {

            ((SCStr *)((SCStr *)&pcStack_1c34))->int_release();
          }
          else {
            func_0x1002ca7f();
            *(unsigned char *)((char *)&uStack_1c28 + 0) = 3;
            func_0x10054043();
            uStack_1c28 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_1c28 + 1)) << 8 | (uint)(4)));
            iVar8 = (int)(atoi(pcVar4));
            do {
              if (iVar8 < 1) break;
              iVar10 = (int)(iVar8);
              if (0x1000 < iVar8) {
                iVar10 = (int)(0x1000);
              }
              iVar10 = (int)(func_0x10067c8d(param_1,auStack_1008,iVar10));
              if (iVar10 == 0) break;
              thunk_FUN_1125ba00(auStack_1008,iVar10);
              iVar8 = (int)(iVar8 - iVar10);
            } while (0 < iVar10);
            pcVar4 = (char *)("");
            if ((char *)(pcStack_1c34) != (char *)0x0) {
              pcVar4 = (char *)(pcStack_1c34);
            }
            thunk_FUN_110f7c60("/lsid",pcVar4);
            thunk_FUN_110f7c60(&UNK_1188d034,iVar5);
            if (DAT_121a0b38 != 0) {
              uVar9 = (undefined4)(func_0x10048f77());
              iVar5 = (int)(thunk_FUN_106d5ce0());
              if (iVar5 == 0) {
                iVar5 = (int)(0);
              }
              else {
                iVar5 = (int)(iVar5 + 4);
              }
              thunk_FUN_110f6450(uVar9,iVar5,0);
            }
            thunk_FUN_111f7820();
            thunk_FUN_110f69a0();

            ((SCStr *)((SCStr *)&pcStack_1c34))->int_release();
          }
        }
      }
    }
    if ((int *)(param_1) == (int *)0x0) goto LAB_10279fb7;
  }
  *(undefined1*)(param_1 + 0x18) = (undefined1)(0);
  thunk_FUN_112a2b10(param_1);
  thunk_FUN_112aa2e0(param_1);
  thunk_FUN_112a0c30(param_1);
LAB_10279fb7:

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 1027d2c0; body size 38 bytes.
#line 1 "ENTRY_1027d2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1027d2c0(undefined4 param_1)

{
  thunk_FUN_112aa790(param_1,"<Command cmdline=\"Root Cert Bundle Info\">\n");
  func_0x10062eae(param_1);
  thunk_FUN_112aa790(param_1,"</Command>\n");
  return;
}


// Reference entry 1027df70; body size 25 bytes.
#line 1 "ENTRY_1027df70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1027df70(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x20));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 1027e870; body size 20 bytes.
#line 1 "ENTRY_1027e870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1027e870(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1027ddb0(param_1,param_2,param_2);
  return;
}


// Reference entry 1027ea90; body size 27 bytes.
#line 1 "ENTRY_1027ea90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1027ea90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 1027eb10; body size 27 bytes.
#line 1 "ENTRY_1027eb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1027eb10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 1027eca0; body size 51 bytes.
#line 1 "ENTRY_1027eca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1027eca0(undefined4 param_2,undefined4 param_3)
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


// Reference entry 1027ef00; body size 442 bytes.
#line 1 "ENTRY_1027ef00"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1027ef00(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  char cVar1;
  
  param_1[0x15] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_AnacapaLauncher);
  *(undefined1*)(param_1 + 0x13) = (undefined1)(0);
  param_1[0x14] = (undefined4)(0);
  param_1[0x116] = (undefined4)(0);
  param_1[0x117] = (undefined4)(0);
  param_1[0x118] = (undefined4)(0);
  *(undefined1*)(param_1 + 0x119) = (undefined1)(0);
  DAT_12119348 = (int)(0x1310730);
  DAT_1211934c = (int)(10);
  DAT_12119350 = (int)(0xffffffff);
  PTR_s__________sclib_sclib_core_sclib__12119354 = (int *)(s__________sclib_sclib_core_sclib__1188c380);
  DAT_12119358 = (int)(0);
  DAT_1211935c = (int)(0);
  DAT_12119360 = (int)(0x41503133);
  DAT_12119364 = (int)(0);
  DAT_12119368 = (int)(0);
  DAT_1211936c = (int)(0);
  DAT_12119370 = (int)(0);
  DAT_12119374 = (int)(0);
  PTR_PTR_12119378 = (int *)((undefined *)&PTR_s_OnlineUpdateBaseURL_121190f8);
  PTR_DAT_1211937c = (int *)(&DAT_12119130);
  PTR_DAT_12119380 = (int *)(&DAT_121192f0);
  DAT_12119384 = (int)(0);
  DAT_12119388 = (int)(0);
  DAT_1211938c = (int)(0);
  DAT_12119390 = (int)(0);
  DAT_12119394 = (int)(0);
  DAT_12119398 = (int)(0);
  DAT_1211939c = (int)(0);
  DAT_121193a0 = (int)(0);
  PTR_LAB_121193a4 = (int *)(LAB_1004a205);
  PTR_LAB_121193a8 = (int *)(LAB_1007d114);
  PTR_LAB_121193ac = (int *)(LAB_1004d0bd);
  DAT_121193b0 = (int)(0);
  DAT_121193b4 = (int)(0);
  DAT_121193b8 = (int)(0);
  DAT_121a2778 = (int)(&DAT_12119348);
  cVar1 = (char)(thunk_FUN_112a9cf0(param_1 + 7));
  if (cVar1 == '\0') {
    thunk_FUN_112af4e0("AnacapaLauncher",1,"AnacapaLauncher -- ap_mutex_create failed.");
  }
  thunk_FUN_112aa310(param_1 + 9);
  thunk_FUN_1145c250(param_1 + 0x16,param_3,0x400);
  return (undefined4 *)(param_1);
}


// Reference entry 1027f3f0; body size 52 bytes.
#line 1 "ENTRY_1027f3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1027f3f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_1125bcf0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_TestPointHandlerSCLIB);
  memset(param_1 + 0x248,0,0x2130);
  return (undefined4 *)(param_1);
}


// Reference entry 1027fb00; body size 11 bytes.
#line 1 "ENTRY_1027fb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1027fb00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_TestPointHandlerSCLIB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_TestPointHandler);
  thunk_FUN_11244ee0();
  return;
}


// Reference entry 1027fba0; body size 58 bytes.
#line 1 "ENTRY_1027fba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_1027fba0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  if ((int *)(param_1) != (int *)(param_2)) {
    iVar1 = (int)(*param_1);
    thunk_FUN_1027e470(param_1,*(undefined4 *)(iVar1 + 4));
    *(int*)(iVar1 + 4) = (int)(iVar1);
    *(int*)iVar1 = (int)((int)(iVar1));
    *(int*)(iVar1 + 8) = (int)(iVar1);
    param_1[1] = (int)(0);
    thunk_FUN_1027e130(param_2,param_2);
  }
  return (int *)(param_1);
}


// Reference entry 1027fbf0; body size 58 bytes.
#line 1 "ENTRY_1027fbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_1027fbf0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  if ((int *)(param_1) != (int *)(param_2)) {
    iVar1 = (int)(*param_1);
    thunk_FUN_1027e470(param_1,*(undefined4 *)(iVar1 + 4));
    *(int*)(iVar1 + 4) = (int)(iVar1);
    *(int*)iVar1 = (int)((int)(iVar1));
    *(int*)(iVar1 + 8) = (int)(iVar1);
    param_1[1] = (int)(0);
    thunk_FUN_1027e130(param_2,param_2);
  }
  return (int *)(param_1);
}


// Reference entry 1027fc40; body size 31 bytes.
#line 1 "ENTRY_1027fc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1027fc40(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    thunk_FUN_1027ddb0(*param_2,param_2[1],param_2);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10280d30; body size 169 bytes.
#line 1 "ENTRY_10280d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10280d30(uint param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x3fffffff < param_2) {
                    
    thunk_FUN_101a3700();
  }
  iVar1 = (int)(*param_1);
  uVar3 = (uint)(param_1[2] - iVar1 >> 2);
  if (0x3fffffff - (uVar3 >> 1) < uVar3) {
    uVar3 = (uint)(0x3fffffff);
  }
  else {
    uVar3 = (uint)((uVar3 >> 1) + uVar3);
    if (uVar3 < param_2) {
      uVar3 = (uint)(param_2);
    }
  }
  if (iVar1 != 0) {
    thunk_FUN_101a3370(iVar1,param_1[1]);
    iVar1 = (int)(*param_1);
    uVar4 = (uint)(param_1[2] - iVar1 & 0xfffffffc);
    iVar2 = (int)(iVar1);
    if (0xfff < uVar4) {
      iVar2 = (int)(*(int *)(iVar1 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iVar1 - iVar2) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar2,uVar4);
    *param_1 = (int)(0);
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
  }
  thunk_FUN_10280c80(uVar3);
  return;
}


// Reference entry 10280e50; body size 21 bytes.
#line 1 "ENTRY_10280e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10280e50(undefined4 *param_1, unsigned int recovered_unused_stack_0)

{
  thunk_FUN_1027ddb0(*param_1,param_1[1],param_1);
  return;
}


// Reference entry 10280f10; body size 30 bytes.
#line 1 "ENTRY_10280f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10280f10(int param_1)

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


// Reference entry 102811c0; body size 87 bytes.
#line 1 "ENTRY_102811c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_102811c0(uint param_1)

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


// Reference entry 10281260; body size 54 bytes.
#line 1 "ENTRY_10281260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10281260(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 102812b0; body size 57 bytes.
#line 1 "ENTRY_102812b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102812b0(int param_1,int param_2)

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


// Reference entry 10281500; body size 19 bytes.
#line 1 "ENTRY_10281500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10281500(int param_1)

{
  if ((*(char *)(param_1 + 0x1c) != '\0') && (*(int **)(param_1 + 8) != (int *)(0x0))) {
                    
                    
    (**(code **)(**(int **)(param_1 + 8) + 0x18))();
    return;
  }
  return;
}


// Reference entry 10282f80; body size 71 bytes.
#line 1 "ENTRY_10282f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10282f80(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = (undefined4)(DAT_121a0b38);
  thunk_FUN_112af4e0("AnacapaLauncher",4,"refresh");
  *param_2 = (undefined4)(0x7fffffff);
  param_2[1] = (undefined4)(0);
  piVar2 = (int *)((int *)thunk_FUN_106d5ce0());
  (**(code **)(*piVar2 + 0x10))();
  thunk_FUN_110f6450(0,uVar1,0);
  return;
}


// Reference entry 10282fe0; body size 69 bytes.
#line 1 "ENTRY_10282fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10282fe0(undefined4 *param_2)
{
  undefined4 param_1 = (undefined4 )this;
  int *piVar1;
  
  thunk_FUN_112af4e0("AnacapaLauncher",4,"refresh");
  *param_2 = (undefined4)(0x7fffffff);
  param_2[1] = (undefined4)(0);
  piVar1 = (int *)((int *)thunk_FUN_106d5ce0());
  (**(code **)(*piVar1 + 0x10))();
  thunk_FUN_110f6450(0,param_1,0);
  return;
}


// Reference entry 10283d30; body size 25 bytes.
#line 1 "ENTRY_10283d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10283d30(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x14));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 10283e90; body size 113 bytes.
#line 1 "ENTRY_10283e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10283e90(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)(thunk_FUN_10283f20(*(undefined4 *)(*param_2 + 4),*param_1,param_3));
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


// Reference entry 102846c0; body size 118 bytes.
#line 1 "ENTRY_102846c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_102846c0(int *param_2,uint *param_3)
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


// Reference entry 10284860; body size 73 bytes.
#line 1 "ENTRY_10284860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10284860(int *param_2,uint *param_3)
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


// Reference entry 102849a0; body size 31 bytes.
#line 1 "ENTRY_102849a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_102849a0(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') && (in_EAX = *param_2, *(uint *)(param_1 + 0x10) <= (uint)(in_EAX))
     ) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 102849d0; body size 92 bytes.
#line 1 "ENTRY_102849d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_102849d0(int *param_1,int *param_2,int *param_3)

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


// Reference entry 10284d80; body size 86 bytes.
#line 1 "ENTRY_10284d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10284d80(int *param_1,int *param_2)

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


// Reference entry 10284f10; body size 36 bytes.
#line 1 "ENTRY_10284f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10284f10(undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  if ((int *)(param_2) != (int *)(param_3)) {
    do {
      if (*param_2 == *param_4) break;
      param_2 = (int *)(param_2 + 2);
    } while ((int *)(param_2) != (int *)(param_3));
  }
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 102851a0; body size 27 bytes.
#line 1 "ENTRY_102851a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102851a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10285380; body size 51 bytes.
#line 1 "ENTRY_10285380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10285380(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *pvVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  pvVar1 = (void *)(operator_new(0x14));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *(void**)param_1[1] = (void *)((undefined4)(pvVar1));
  return (undefined4 *)(param_1);
}


// Reference entry 10285540; body size 33 bytes.
#line 1 "ENTRY_10285540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10285540(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_2 + 4));
  return (SCStr *)(param_1);
}


// Reference entry 10285690; body size 52 bytes.
#line 1 "ENTRY_10285690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10285690(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 102856e0; body size 49 bytes.
#line 1 "ENTRY_102856e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_102856e0(undefined4 *param_2)
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


// Reference entry 10285720; body size 49 bytes.
#line 1 "ENTRY_10285720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10285720(undefined4 *param_2)
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


// Reference entry 10285b50; body size 7 bytes.
#line 1 "ENTRY_10285b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10285b50(undefined4 param_1)

{
  thunk_FUN_10284760(param_1);
  return;
}


// Reference entry 10285f90; body size 12 bytes.
#line 1 "ENTRY_10285f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10285f90(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*(char *)(*param_1 + 0xd) == '\0')));
}


// Reference entry 10285fa0; body size 12 bytes.
#line 1 "ENTRY_10285fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10285fa0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*(char *)(*param_1 + 0xd) == '\0')));
}


// Reference entry 10286180; body size 16 bytes.
#line 1 "ENTRY_10286180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10286180(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  *param_2 = (int)(iVar1);
  *param_1 = (int)(iVar1 + 8);
  return;
}


// Reference entry 102863f0; body size 31 bytes.
#line 1 "ENTRY_102863f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102863f0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x14));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10286440; body size 30 bytes.
#line 1 "ENTRY_10286440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10286440(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_102871c0(param_2));
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + param_2 * 8);
  return;
}


// Reference entry 10286470; body size 49 bytes.
#line 1 "ENTRY_10286470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10286470(uint param_2)
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


// Reference entry 10286540; body size 14 bytes.
#line 1 "ENTRY_10286540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10286540(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xccccccc) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10287140; body size 90 bytes.
#line 1 "ENTRY_10287140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10287140(uint param_1)

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


// Reference entry 102872b0; body size 57 bytes.
#line 1 "ENTRY_102872b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102872b0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10287300; body size 60 bytes.
#line 1 "ENTRY_10287300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10287300(int param_1,int param_2)

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


// Reference entry 10289c30; body size 35 bytes.
#line 1 "ENTRY_10289c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_10289c30(int param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  bool bVar3;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x18));
  piVar2 = (int *)(*(int **)(param_1 + 0x14));
  bVar3 = (bool)((int *)((piVar2)) == (int *)(piVar1));
  if (!bVar3) {
    do {
      if ((int *)(*piVar2) == (int *)(param_2)) break;
      piVar2 = (int *)(piVar2 + 2);
    } while ((int *)((piVar2)) != (int *)(piVar1));
    bVar3 = (bool)((int *)((piVar2)) == (int *)(piVar1));
  }
  return (undefined4)(((uint)((int3)((uint)piVar2 >> 8)) << 8 | (uint)(!bVar3)));
}


// Reference entry 1028b4d0; body size 31 bytes.
#line 1 "ENTRY_1028b4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_1028b4d0(undefined4 param_2,SCStr *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 1028b6c0; body size 33 bytes.
#line 1 "ENTRY_1028b6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_1028b6c0(undefined4 *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 1028b960; body size 25 bytes.
#line 1 "ENTRY_1028b960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1028b960(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 1028b980; body size 25 bytes.
#line 1 "ENTRY_1028b980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1028b980(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 1028bb40; body size 113 bytes.
#line 1 "ENTRY_1028bb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1028bb40(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)(thunk_FUN_1028bbd0(*(undefined4 *)(*param_2 + 4),*param_1,param_3));
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


// Reference entry 1028c2d0; body size 161 bytes.
#line 1 "ENTRY_1028c2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_1028c2d0(int *param_2,undefined4 *param_3)
{
  int *param_1 = (int *)this;
  int *piVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  iVar4 = (int)(*param_1);
  puVar8 = (undefined4 *)(*(undefined4 **)(iVar4 + 4));
  *param_2 = (int)((int)puVar8);
  param_2[1] = (int)(0);
  cVar2 = (char)(*(char *)((int)puVar8 + 0xd));
  param_2[2] = (int)(iVar4);
  while (cVar2 == '\0') {
    piVar1 = (int *)((int *)puVar8[4]);
    *param_2 = (int)((int)puVar8);
    cVar2 = (char)((**(code **)(*piVar1 + 0x34))());
    cVar3 = (char)((**(code **)(*(int *)*param_3 + 0x34))());
    if (cVar2 == cVar3) {
      iVar4 = (int)((**(code **)(*(int *)puVar8[4] + 0x14))());
      iVar5 = (int)((**(code **)(*(int *)*param_3 + 0x14))());
      if (iVar4 == iVar5) {
        piVar1 = (int *)((int *)*param_3);
        uVar6 = (uint)((**(code **)(*(int *)puVar8[4] + 0x2c))());
        uVar7 = (uint)((**(code **)(*piVar1 + 0x2c))());
        cVar2 = (char)(uVar7 < uVar6);
      }
      else {
        cVar2 = (char)(iVar4 < iVar5);
      }
    }
    if (cVar2 == '\0') {
      param_2[2] = (int)((int)puVar8);
      puVar8 = (undefined4 *)((undefined4 *)*puVar8);
    }
    else {
      puVar8 = (undefined4 *)((undefined4 *)puVar8[2]);
    }
    param_2[1] = (int)((uint)(cVar2 == '\0'));
    cVar2 = (char)(*(char *)((int)puVar8 + 0xd));
  }
  return (int *)(param_2);
}


// Reference entry 1028c560; body size 37 bytes.
#line 1 "ENTRY_1028c560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028c560(int param_1,undefined4 param_2)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar1 = (char)(thunk_FUN_1028e330(param_2,param_1 + 0x10));
    if (cVar1 == '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 1028c590; body size 37 bytes.
#line 1 "ENTRY_1028c590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1028c590(int param_1,SCStr *param_2)

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


// Reference entry 1028cba0; body size 27 bytes.
#line 1 "ENTRY_1028cba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1028cba0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 1028cbd0; body size 27 bytes.
#line 1 "ENTRY_1028cbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1028cbd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 1028ce40; body size 51 bytes.
#line 1 "ENTRY_1028ce40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1028ce40(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *pvVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *(void**)param_1[1] = (void *)((undefined4)(pvVar1));
  return (undefined4 *)(param_1);
}


// Reference entry 1028d010; body size 52 bytes.
#line 1 "ENTRY_1028d010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1028d010(undefined4 *param_1)

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


// Reference entry 1028d060; body size 76 bytes.
#line 1 "ENTRY_1028d060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1028d060(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  void *pvVar2;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar2 = (void *)(operator_new(0x18));
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


// Reference entry 1028d1e0; body size 52 bytes.
#line 1 "ENTRY_1028d1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1028d1e0(undefined4 *param_1)

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


// Reference entry 1028d230; body size 76 bytes.
#line 1 "ENTRY_1028d230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1028d230(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  void *pvVar2;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar2 = (void *)(operator_new(0x18));
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


// Reference entry 1028d3b0; body size 52 bytes.
#line 1 "ENTRY_1028d3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1028d3b0(undefined4 *param_1)

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


// Reference entry 1028df70; body size 12 bytes.
#line 1 "ENTRY_1028df70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1028df70(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*(char *)(*param_1 + 0xd) == '\0')));
}


// Reference entry 1028e620; body size 31 bytes.
#line 1 "ENTRY_1028e620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1028e620(undefined4 *param_1)

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


// Reference entry 1028e650; body size 31 bytes.
#line 1 "ENTRY_1028e650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1028e650(undefined4 *param_1)

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


// Reference entry 1028e6c0; body size 14 bytes.
#line 1 "ENTRY_1028e6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1028e6c0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 1028e6e0; body size 14 bytes.
#line 1 "ENTRY_1028e6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1028e6e0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 1028f3f0; body size 33 bytes.
#line 1 "ENTRY_1028f3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1028f3f0(undefined4 *param_2)
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


// Reference entry 10290110; body size 90 bytes.
#line 1 "ENTRY_10290110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10290110(uint param_1)

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


// Reference entry 10290210; body size 57 bytes.
#line 1 "ENTRY_10290210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10290210(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10290260; body size 57 bytes.
#line 1 "ENTRY_10290260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10290260(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 102902b0; body size 60 bytes.
#line 1 "ENTRY_102902b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102902b0(int param_1,int param_2)

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


// Reference entry 10290300; body size 60 bytes.
#line 1 "ENTRY_10290300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10290300(int param_1,int param_2)

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


// Reference entry 10291f60; body size 21 bytes.
#line 1 "ENTRY_10291f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10291f60(undefined4 param_1)

{
  thunk_FUN_102909a0(param_1,&DAT_121a0c1c);
  return (undefined4)(param_1);
}


// Reference entry 10291f80; body size 21 bytes.
#line 1 "ENTRY_10291f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10291f80(undefined4 param_1)

{
  thunk_FUN_10292500(param_1,&DAT_121a0c1c);
  return (undefined4)(param_1);
}


// Reference entry 102926b0; body size 27 bytes.
#line 1 "ENTRY_102926b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_102926b0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 uStack_4;
  
  uStack_4 = (undefined4)(param_1);
  thunk_FUN_10116710(param_1 + 0x3c,(int)&uStack_4 + 3);
  return (undefined4)(param_2);
}


// Reference entry 10293440; body size 34 bytes.
#line 1 "ENTRY_10293440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_10293440(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 8) == 1) {
    cVar1 = (char)(thunk_FUN_106a2b90(&DAT_121a0be0));
    if (cVar1 != '\0') {
      return (undefined1)(1);
    }
  }
  return (undefined1)(0);
}


// Reference entry 10293480; body size 8 bytes.
#line 1 "ENTRY_10293480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_10293480(int param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  undefined4 *puVar2;
  void **ppvVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_1c [8];
  int iStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  puVar1 = (undefined4 *)(*(undefined4 **)(param_2 + 4));
  puVar2 = (undefined4 *)((undefined4 *)*puVar1);
  ppvVar3 = (void **)(&pvStack_10);

  while( true ) {

    if ((undefined4 *)((puVar2)) == (undefined4 *)(puVar1)) {

      return (undefined4)(1);
    }

    ((SCStr *)((SCStr *)&param_2))->op_ctor((SCStr *)(puVar2 + 2));
    iStack_14 = (int)(*(int *)(param_1 + 0x40));

    uVar4 = (uint)(((SCStr *)((SCStr *)&param_2))->hash());
    iVar5 = (int)(thunk_FUN_10117000(auStack_1c,&param_2,uVar4));
    iVar5 = (int)(*(int *)(iVar5 + 4));
    if (iVar5 == 0) {
      iVar5 = (int)(*(int *)(param_1 + 0x40));
    }
    if (iVar5 == iStack_14) break;

    ((SCStr *)((SCStr *)&param_2))->int_release();
    puVar2 = (undefined4 *)((undefined4 *)*puVar2);
    param_2 = (int)(0);

  }

  ((SCStr *)((SCStr *)&param_2))->int_release();

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 10293f60; body size 18 bytes.
#line 1 "ENTRY_10293f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10293f60(int param_1)

{
  if (*(int *)(param_1 + 0x68) != 0) {
    thunk_FUN_1059d940(*(undefined4 *)(param_1 + 0x6c));
  }
  return;
}


// Reference entry 10293fc0; body size 38 bytes.
#line 1 "ENTRY_10293fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10293fc0(undefined4 param_2,SCStr *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 10294230; body size 38 bytes.
#line 1 "ENTRY_10294230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10294230(undefined4 param_2,SCStr *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 10294290; body size 40 bytes.
#line 1 "ENTRY_10294290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10294290(undefined4 *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 102942d0; body size 40 bytes.
#line 1 "ENTRY_102942d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_102942d0(undefined4 *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 102943d0; body size 25 bytes.
#line 1 "ENTRY_102943d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102943d0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 102948d0; body size 37 bytes.
#line 1 "ENTRY_102948d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102948d0(int param_1,SCStr *param_2)

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


// Reference entry 10294d00; body size 86 bytes.
#line 1 "ENTRY_10294d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10294d00(int *param_1,int *param_2)

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


// Reference entry 10294e40; body size 28 bytes.
#line 1 "ENTRY_10294e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10294e40(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 10294f00; body size 27 bytes.
#line 1 "ENTRY_10294f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10294f00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10294f30; body size 27 bytes.
#line 1 "ENTRY_10294f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10294f30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10294f60; body size 27 bytes.
#line 1 "ENTRY_10294f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10294f60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10295350; body size 52 bytes.
#line 1 "ENTRY_10295350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10295350(undefined4 *param_1)

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


// Reference entry 10295620; body size 279 bytes.
#line 1 "ENTRY_10295620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10295620(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  char *pcVar1;
  uint uVar2;
  SCStr *this_;
  SCStr *this_00;
  char *pcVar3;
  void *pvStack_440;
  undefined1 *puStack_43c;
  undefined4 uStack_438;
  undefined1 auStack_434 [40];
  undefined1 auStack_40c [1028];
  uint uStack_8;


  uVar2 = (uint)(DAT_12126b84 ^ (uint)auStack_434);

  uStack_8 = (uint)(uVar2);
  thunk_FUN_1124a160(0);
  param_1[0x1843] = (undefined4)((uint)&ghidra_vftable_RHTTPDataIO);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RLookupV1CertInfoRequest);
  param_1[0x1843] = (undefined4)((uint)&ghidra_vftable_RLookupV1CertInfoRequest);
  param_1[0x1844] = (undefined4)(0);
  pcVar1 = (char *)((char *)(param_1 + 0x1845));
  pcVar1[0] = (char)('\0');
  pcVar1[1] = (char)('\0');
  pcVar1[2] = (char)('\0');
  pcVar1[3] = (char)('\0');
  pcVar3 = (char *)((char *)(param_1 + 0x1846));
  pcVar3[0] = (char)('\0');
  pcVar3[1] = (char)('\0');
  pcVar3[2] = (char)('\0');
  pcVar3[3] = (char)('\0');
  *(unsigned char *)((char *)&uStack_438 + 0) = 3;
  *(unsigned short *)((char *)&uStack_438 + 1) = 0;
  thunk_FUN_11261330(auStack_40c,0x401,"/api/v1/keyHash/player/%s",0xb,uVar2);
  this_ = (SCStr *)((SCStr *)&DAT_1186d2ee);
  if ((SCStr *)(SCStr *)(*param_2) != (SCStr *)0x0) {
    this_ = (SCStr *)((SCStr *)*param_2);
  }
  ((SCStr *)(this_))->format(pcVar3);
  thunk_FUN_1125bbd0(0);
  uStack_438 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_438 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_00))->format(pcVar1);
  thunk_FUN_1125bca0();

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10295780; body size 84 bytes.
#line 1 "ENTRY_10295780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10295780(undefined4 *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *(undefined2*)(param_1 + 3) = (undefined2)(0x3eb);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RNSGetAliveOp);
  uVar1 = (undefined4)(*param_2);
  param_1[5] = (undefined4)(param_2[1]);
  param_1[4] = (undefined4)(uVar1);
  param_1[0xd] = (undefined4)(0);
  thunk_FUN_1145c250(param_1 + 6,param_3,0x19);
  return (undefined4 *)(param_1);
}


// Reference entry 102957f0; body size 84 bytes.
#line 1 "ENTRY_102957f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_102957f0(undefined4 *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *(undefined2*)(param_1 + 3) = (undefined2)(0x3eb);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RNSGetCurrentChannelOp);
  uVar1 = (undefined4)(*param_2);
  param_1[5] = (undefined4)(param_2[1]);
  param_1[4] = (undefined4)(uVar1);
  param_1[0xd] = (undefined4)(0);
  thunk_FUN_1145c250(param_1 + 6,param_3,0x19);
  return (undefined4 *)(param_1);
}


// Reference entry 10295860; body size 37 bytes.
#line 1 "ENTRY_10295860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10295860(undefined4 *param_1)

{
  *(undefined2*)(param_1 + 3) = (undefined2)(0x3eb);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RNetstartOp);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102958a0; body size 124 bytes.
#line 1 "ENTRY_102958a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_102958a0(undefined4 *param_2,undefined4 param_3,undefined1 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *(undefined2*)(param_1 + 3) = (undefined2)(0x3eb);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RNetstartScanListOp);
  uVar1 = (undefined4)(*param_2);
  param_1[5] = (undefined4)(param_2[1]);
  *(undefined1*)((int)param_1 + 0x340a) = (undefined1)(param_4);
  param_1[4] = (undefined4)(uVar1);
  param_1[0xd] = (undefined4)(2);
  param_1[0xe] = (undefined4)(0xff);
  *(undefined2*)(param_1 + 0xd02) = (undefined2)(0x3eb);
  thunk_FUN_1145c250(param_1 + 6,param_3,0x19);
  memset(param_1 + 0xf,0,0x33cc);
  return (undefined4 *)(param_1);
}


// Reference entry 10296300; body size 11 bytes.
#line 1 "ENTRY_10296300"

/* WARNING: Removing unreachable block (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10296300(undefined4 *param_1)

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


// Reference entry 10296730; body size 18 bytes.
#line 1 "ENTRY_10296730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10296730(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpBaseNoRedirectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RHttpBaseNoRedirectAIOOp);
  if ((undefined4 *)(undefined4 *)(param_1[0x91f]) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x91f])(1);
  }
  thunk_FUN_1124a3f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpImpl);
  thunk_FUN_112407b0();
  return;
}


// Reference entry 102969d0; body size 18 bytes.
#line 1 "ENTRY_102969d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102969d0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpLookupV1CertInfoAIOOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpLookupV1CertInfoAIOOp);


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


// Reference entry 10297e10; body size 31 bytes.
#line 1 "ENTRY_10297e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10297e10(undefined4 *param_1)

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


// Reference entry 10297e60; body size 14 bytes.
#line 1 "ENTRY_10297e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10297e60(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x9249249) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10298760; body size 30 bytes.
#line 1 "ENTRY_10298760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10298760(int param_1)

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


// Reference entry 10299a30; body size 63 bytes.
#line 1 "ENTRY_10299a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10299a30(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10299a80; body size 66 bytes.
#line 1 "ENTRY_10299a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10299a80(int param_1,int param_2)

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


// Reference entry 1029ae00; body size 46 bytes.
#line 1 "ENTRY_1029ae00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_1029ae00(undefined4 *param_2,int param_3)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (((undefined4 *)(param_2) != (undefined4 *)0x0) && (param_3 == 0x20)) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x614c));
    uVar2 = (undefined4)(*(undefined4 *)(param_1 + 0x6150));
    uVar3 = (undefined4)(*(undefined4 *)(param_1 + 0x6154));
    *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0x6148));
    param_2[1] = (undefined4)(uVar1);
    param_2[2] = (undefined4)(uVar2);
    param_2[3] = (undefined4)(uVar3);
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x615c));
    uVar2 = (undefined4)(*(undefined4 *)(param_1 + 0x6160));
    uVar3 = (undefined4)(*(undefined4 *)(param_1 + 0x6164));
    param_2[4] = (undefined4)(*(undefined4 *)(param_1 + 0x6158));
    param_2[5] = (undefined4)(uVar1);
    param_2[6] = (undefined4)(uVar2);
    param_2[7] = (undefined4)(uVar3);
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 1029c940; body size 24 bytes.
#line 1 "ENTRY_1029c940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_1029c940(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 1029cbf0; body size 27 bytes.
#line 1 "ENTRY_1029cbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1029cbf0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 1029cc60; body size 26 bytes.
#line 1 "ENTRY_1029cc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1029cc60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDateTime);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  *(undefined1*)(param_1 + 5) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1029cc80; body size 26 bytes.
#line 1 "ENTRY_1029cc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1029cc80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSystemTime);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  *(undefined1*)(param_1 + 5) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1029ce20; body size 87 bytes.
#line 1 "ENTRY_1029ce20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1029ce20(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSystemTime);
  param_1[2] = (undefined4)(*(undefined4 *)(param_2 + 8));
  param_1[3] = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  param_1[4] = (undefined4)(*(undefined4 *)(param_2 + 0x10));
  param_1[5] = (undefined4)(*(undefined4 *)(param_2 + 0x14));
  param_1[6] = (undefined4)(*(undefined4 *)(param_2 + 0x18));
  param_1[7] = (undefined4)(*(undefined4 *)(param_2 + 0x1c));
  param_1[8] = (undefined4)(*(undefined4 *)(param_2 + 0x20));
  param_1[9] = (undefined4)(*(undefined4 *)(param_2 + 0x24));
  return (undefined4 *)(param_1);
}


// Reference entry 1029cf10; body size 89 bytes.
#line 1 "ENTRY_1029cf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1029cf10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSystemTime);
  param_1[2] = (undefined4)(0x7d1);
  param_1[3] = (undefined4)(1);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(1);
  param_1[6] = (undefined4)(0xc);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[9] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1029da50; body size 71 bytes.
#line 1 "ENTRY_1029da50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1029da50(undefined4 *param_2)
{
  int param_1 = (int )this;
  *(int*)(param_1 + 8) = (int)(param_2[5] + 0x76c);
  *(int*)(param_1 + 0xc) = (int)(param_2[4] + 1);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(param_2[3]);
  *(uint*)(param_1 + 0x10) = (uint)(-(uint)((uint)param_2[6] < 7) & param_2[6]);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_2[2]);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(param_2[1]);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(*param_2);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return;
}


// Reference entry 1029dc70; body size 5 bytes.
#line 1 "ENTRY_1029dc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1029dc70(int *param_1)

{
                    
                    
  (**(code **)(*param_1 + 0xc))();
  return;
}


// Reference entry 1029de50; body size 27 bytes.
#line 1 "ENTRY_1029de50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1029de50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 1029dec0; body size 8 bytes.
#line 1 "ENTRY_1029dec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 * __fastcall FUN_1029dec0(undefined2 *param_1)

{
  *param_1 = (undefined2)(0);
  return (undefined2 *)(param_1);
}


// Reference entry 1029dee0; body size 51 bytes.
#line 1 "ENTRY_1029dee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1029dee0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRecurrence);
  param_1[2] = (undefined4)(*(undefined4 *)(param_2 + 8));
  param_1[3] = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  return (undefined4 *)(param_1);
}


// Reference entry 1029dff0; body size 47 bytes.
#line 1 "ENTRY_1029dff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1029dff0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRecurrence);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1029e760; body size 23 bytes.
#line 1 "ENTRY_1029e760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1029e760(undefined1 *param_2)
{
  int param_1 = (int )this;
  switch(*param_2) {
  case 1:
    *(undefined4*)(param_1 + 0xc) = (undefined4)(1);
    *(undefined4*)(param_1 + 8) = (undefined4)(0x3e);
    return;
  case 2:
    *(undefined4*)(param_1 + 0xc) = (undefined4)(1);
    *(undefined4*)(param_1 + 8) = (undefined4)(0x41);
    return;
  case 3:
    *(undefined4*)(param_1 + 0xc) = (undefined4)(1);
    *(undefined4*)(param_1 + 8) = (undefined4)(0x7f);
    return;
  case 4:
    *(undefined4*)(param_1 + 0xc) = (undefined4)(1);
    *(uint*)(param_1 + 8) = (uint)((uint)(byte)param_2[1]);
  }
  return;
}


// Reference entry 1029ea20; body size 31 bytes.
#line 1 "ENTRY_1029ea20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_1029ea20(undefined4 param_2,SCStr *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 1029ec10; body size 31 bytes.
#line 1 "ENTRY_1029ec10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_1029ec10(undefined4 param_2,SCStr *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 1029ec60; body size 33 bytes.
#line 1 "ENTRY_1029ec60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_1029ec60(undefined4 *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 1029ec90; body size 33 bytes.
#line 1 "ENTRY_1029ec90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_1029ec90(undefined4 *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 1029ed50; body size 37 bytes.
#line 1 "ENTRY_1029ed50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1029ed50(int param_1,SCStr *param_2)

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


// Reference entry 1029f0c0; body size 27 bytes.
#line 1 "ENTRY_1029f0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1029f0c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 1029fa50; body size 25 bytes.
#line 1 "ENTRY_1029fa50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1029fa50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_102a0500());
  (**(code **)(*piVar1 + 0x20))(param_1,param_2,param_3);
  return;
}


// Reference entry 1029fa70; body size 44 bytes.
#line 1 "ENTRY_1029fa70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1029fa70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar2 = (int *)((int *)thunk_FUN_102a0500());
  iVar1 = (int)(*piVar2);
  uVar3 = (undefined4)(thunk_FUN_1109ac80(param_4));
  (**(code **)(iVar1 + 0x2c))(param_1,param_2,param_3,uVar3);
  return;
}


// Reference entry 1029fab0; body size 17 bytes.
#line 1 "ENTRY_1029fab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1029fab0(undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_102a0500());
  (**(code **)(*piVar1 + 0x1c))(param_1);
  return;
}


// Reference entry 1029fad0; body size 21 bytes.
#line 1 "ENTRY_1029fad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1029fad0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_102a0500());
  (**(code **)(*piVar1 + 0x24))(param_1,param_2);
  return;
}


// Reference entry 1029fb10; body size 14 bytes.
#line 1 "ENTRY_1029fb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1029fb10(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 1029ff50; body size 60 bytes.
#line 1 "ENTRY_1029ff50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1029ff50(int param_1,int param_2)

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


// Reference entry 102a1c70; body size 45 bytes.
#line 1 "ENTRY_102a1c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_102a1c70(undefined4 param_2,SCStr *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 102a1e30; body size 47 bytes.
#line 1 "ENTRY_102a1e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_102a1e30(undefined4 *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 102a2e50; body size 25 bytes.
#line 1 "ENTRY_102a2e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a2e50(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 102a2e70; body size 25 bytes.
#line 1 "ENTRY_102a2e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a2e70(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x20));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 102a2e90; body size 25 bytes.
#line 1 "ENTRY_102a2e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a2e90(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x14));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 102a2fa0; body size 33 bytes.
#line 1 "ENTRY_102a2fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a2fa0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    thunk_FUN_102a9bb0();
  }
  return;
}


// Reference entry 102a3340; body size 23 bytes.
#line 1 "ENTRY_102a3340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_102a3340(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_102a71f0(param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0xc);
  return;
}


// Reference entry 102a3500; body size 23 bytes.
#line 1 "ENTRY_102a3500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_102a3500(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_102a71f0(param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0xc);
  return;
}


// Reference entry 102a4760; body size 31 bytes.
#line 1 "ENTRY_102a4760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_102a4760(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') && (in_EAX = *param_2, *(uint *)(param_1 + 0x10) <= (uint)(in_EAX))
     ) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 102a5650; body size 40 bytes.
#line 1 "ENTRY_102a5650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102a5650(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 102a5690; body size 40 bytes.
#line 1 "ENTRY_102a5690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102a5690(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 102a56d0; body size 40 bytes.
#line 1 "ENTRY_102a56d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102a56d0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 102a5730; body size 20 bytes.
#line 1 "ENTRY_102a5730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102a5730(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_102a2ce0(param_1,param_2,param_2);
  return;
}


// Reference entry 102a57d0; body size 14 bytes.
#line 1 "ENTRY_102a57d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a57d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102a71f0(param_3);
  return;
}


// Reference entry 102a57f0; body size 14 bytes.
#line 1 "ENTRY_102a57f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a57f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102a71f0(param_3);
  return;
}


// Reference entry 102a5aa0; body size 9 bytes.
#line 1 "ENTRY_102a5aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102a5aa0(undefined4 param_1,int *param_2)

{
 try {
  int iVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  iVar1 = (int)(param_2[2]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[1]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(*param_2);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 102a5c50; body size 40 bytes.
#line 1 "ENTRY_102a5c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_102a5c50(undefined4 param_2)
{
  int param_1 = (int )this;
  if ((int)((param_1 + 4)) != *(int *)(param_1 + 8)) {
    thunk_FUN_102a71f0(param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0xc);
    return;
  }
  thunk_FUN_102a3580(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 102a6260; body size 54 bytes.
#line 1 "ENTRY_102a6260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a6260(undefined4 *param_1)

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


// Reference entry 102a6300; body size 27 bytes.
#line 1 "ENTRY_102a6300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a6300(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102a6330; body size 27 bytes.
#line 1 "ENTRY_102a6330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a6330(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102a6c40; body size 76 bytes.
#line 1 "ENTRY_102a6c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_102a6c40(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  void *pvVar2;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar2 = (void *)(operator_new(0x18));
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


// Reference entry 102a6ca0; body size 52 bytes.
#line 1 "ENTRY_102a6ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a6ca0(undefined4 *param_1)

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


// Reference entry 102a6cf0; body size 76 bytes.
#line 1 "ENTRY_102a6cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_102a6cf0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  void *pvVar2;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar2 = (void *)(operator_new(0x18));
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


// Reference entry 102a6d50; body size 52 bytes.
#line 1 "ENTRY_102a6d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a6d50(undefined4 *param_1)

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


// Reference entry 102a6da0; body size 52 bytes.
#line 1 "ENTRY_102a6da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a6da0(undefined4 *param_1)

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


// Reference entry 102a6df0; body size 52 bytes.
#line 1 "ENTRY_102a6df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102a6df0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 102a70c0; body size 42 bytes.
#line 1 "ENTRY_102a70c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_102a70c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSearchablesManager_EventSink);
  return (undefined4 *)(param_1);
}


// Reference entry 102aa850; body size 31 bytes.
#line 1 "ENTRY_102aa850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_102aa850(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    thunk_FUN_102a2ce0(*param_2,param_2[1],param_2);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 102ac3c0; body size 31 bytes.
#line 1 "ENTRY_102ac3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ac3c0(undefined4 *param_1)

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


// Reference entry 102ac3f0; body size 31 bytes.
#line 1 "ENTRY_102ac3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ac3f0(undefined4 *param_1)

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


// Reference entry 102ac420; body size 31 bytes.
#line 1 "ENTRY_102ac420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ac420(undefined4 *param_1)

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


// Reference entry 102ac450; body size 31 bytes.
#line 1 "ENTRY_102ac450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ac450(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x14));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 102ac4c0; body size 33 bytes.
#line 1 "ENTRY_102ac4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_102ac4c0(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_102ae180(param_2));
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + param_2 * 0xc);
  return;
}


// Reference entry 102ac4f0; body size 30 bytes.
#line 1 "ENTRY_102ac4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_102ac4f0(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_102ae270(param_2));
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + param_2 * 8);
  return;
}


// Reference entry 102ac520; body size 62 bytes.
#line 1 "ENTRY_102ac520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_102ac520(uint param_2)
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


// Reference entry 102ac570; body size 49 bytes.
#line 1 "ENTRY_102ac570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_102ac570(uint param_2)
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


// Reference entry 102ac5b0; body size 49 bytes.
#line 1 "ENTRY_102ac5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_102ac5b0(uint param_2)
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


// Reference entry 102ac7c0; body size 14 bytes.
#line 1 "ENTRY_102ac7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ac7c0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 102ac7e0; body size 14 bytes.
#line 1 "ENTRY_102ac7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ac7e0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 102ac800; body size 14 bytes.
#line 1 "ENTRY_102ac800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ac800(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x7ffffff) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 102ac820; body size 182 bytes.
#line 1 "ENTRY_102ac820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_102ac820(uint param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x1fffffff < param_2) {
                    
    thunk_FUN_102adcd0();
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
    thunk_FUN_102a3140(iVar2,param_1[1],param_1);
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
  iVar2 = (int)(thunk_FUN_102ae270(uVar3));
  *param_1 = (int)(iVar2);
  param_1[1] = (int)(iVar2);
  param_1[2] = (int)(iVar2 + uVar3 * 8);
  return;
}


// Reference entry 102ac930; body size 21 bytes.
#line 1 "ENTRY_102ac930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102ac930(undefined4 *param_1, unsigned int recovered_unused_stack_0)

{
  thunk_FUN_102a2ce0(*param_1,param_1[1],param_1);
  return;
}


// Reference entry 102ad470; body size 33 bytes.
#line 1 "ENTRY_102ad470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_102ad470(undefined4 *param_2)
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


// Reference entry 102ad4a0; body size 33 bytes.
#line 1 "ENTRY_102ad4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_102ad4a0(undefined4 *param_2)
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


// Reference entry 102adce0; body size 23 bytes.
#line 1 "ENTRY_102adce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_102adce0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_11254de0(param_1 + 0x420);
  return (undefined4)(param_2);
}


// Reference entry 102add70; body size 41 bytes.
#line 1 "ENTRY_102add70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102add70(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,0xffffffff);
  return;
}


// Reference entry 102ae090; body size 90 bytes.
#line 1 "ENTRY_102ae090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_102ae090(uint param_1)

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


// Reference entry 102ae110; body size 87 bytes.
#line 1 "ENTRY_102ae110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_102ae110(uint param_1)

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


// Reference entry 102ae2e0; body size 59 bytes.
#line 1 "ENTRY_102ae2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_102ae2e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0xc));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 0x10)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int*)(param_1 + 0xc) = (int)(*(int *)(param_1 + 0xc) + 8);
    return;
  }
  thunk_FUN_102a3810(puVar1,param_2);
  return;
}


// Reference entry 102ae390; body size 25 bytes.
#line 1 "ENTRY_102ae390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102ae390(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)(param_1 + 8));
  thunk_FUN_102a30a0(*puVar1,*(undefined4 *)(param_1 + 0xc),puVar1);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(*puVar1);
  return;
}


// Reference entry 102ae820; body size 57 bytes.
#line 1 "ENTRY_102ae820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102ae820(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 102ae870; body size 54 bytes.
#line 1 "ENTRY_102ae870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102ae870(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 102ae8c0; body size 57 bytes.
#line 1 "ENTRY_102ae8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102ae8c0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 102ae910; body size 60 bytes.
#line 1 "ENTRY_102ae910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102ae910(int param_1,int param_2)

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


// Reference entry 102ae960; body size 57 bytes.
#line 1 "ENTRY_102ae960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102ae960(int param_1,int param_2)

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


// Reference entry 102b8290; body size 49 bytes.
#line 1 "ENTRY_102b8290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_102b8290(uint param_2)
{
  int param_1 = (int )this;
  if (((((*(uint *)(param_1 + 4) & 0x7f) + 1 ^ (param_2 & 0x7f) + 1) & 0xfffffffe) == 0) &&
     (((*(uint *)(param_1 + 4) ^ param_2) & 0xffffff00) == 0)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 102b82d0; body size 46 bytes.
#line 1 "ENTRY_102b82d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102b82d0(uint param_1,uint param_2)

{
  if (((((param_1 & 0x7f) + 1 ^ (param_2 & 0x7f) + 1) & 0xfffffffe) == 0) &&
     (((param_1 ^ param_2) & 0xffffff00) == 0)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 102b8310; body size 11 bytes.
#line 1 "ENTRY_102b8310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102b8310(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(*(uint *)(param_1 + 4) & 0xffffff81);
  return (undefined4)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)((char)uVar1 == -0x80)));
}


// Reference entry 102b8350; body size 12 bytes.
#line 1 "ENTRY_102b8350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102b8350(uint param_1)

{
  return (undefined4)(((uint)((int3)((param_1 & 0xffffff81) >> 8)) << 8 | (uint)((char)(param_1 & 0xffffff81) == -0x80)));
}


// Reference entry 102b8880; body size 40 bytes.
#line 1 "ENTRY_102b8880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_102b8880(undefined4 param_2)
{
  int param_1 = (int )this;
  if ((int)((param_1 + 4)) != *(int *)(param_1 + 8)) {
    thunk_FUN_102a71f0(param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0xc);
    return;
  }
  thunk_FUN_102a3580(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 102bc520; body size 25 bytes.
#line 1 "ENTRY_102bc520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102bc520(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x28));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 102bc6a0; body size 113 bytes.
#line 1 "ENTRY_102bc6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_102bc6a0(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)(thunk_FUN_102bc730(*(undefined4 *)(*param_2 + 4),*param_1,param_3));
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


// Reference entry 102bcdd0; body size 68 bytes.
#line 1 "ENTRY_102bcdd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102bcdd0(int param_1,undefined4 *param_2)

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


// Reference entry 102bcf40; body size 14 bytes.
#line 1 "ENTRY_102bcf40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102bcf40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10118c40(param_3);
  return;
}


// Reference entry 102bcf60; body size 56 bytes.
#line 1 "ENTRY_102bcf60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102bcf60(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 102bd130; body size 27 bytes.
#line 1 "ENTRY_102bd130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102bd130(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102bd200; body size 51 bytes.
#line 1 "ENTRY_102bd200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_102bd200(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *pvVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  pvVar1 = (void *)(operator_new(0x28));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *(void**)param_1[1] = (void *)((undefined4)(pvVar1));
  return (undefined4 *)(param_1);
}


// Reference entry 102bd470; body size 52 bytes.
#line 1 "ENTRY_102bd470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102bd470(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x28));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 102bddd0; body size 16 bytes.
#line 1 "ENTRY_102bddd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_102bddd0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  *param_2 = (int)(iVar1);
  *param_1 = (int)(iVar1 + 0xc);
  return;
}


// Reference entry 102bddf0; body size 52 bytes.
#line 1 "ENTRY_102bddf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __stdcall FUN_102bddf0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)(param_2);
  if (0xf < (uint)param_2[5]) {
    puVar2 = (undefined4 *)((undefined4 *)*param_2);
  }
  puVar3 = (undefined4 *)(param_1);
  if (0xf < (uint)param_1[5]) {
    puVar3 = (undefined4 *)((undefined4 *)*param_1);
  }
  uVar1 = (uint)(thunk_FUN_102bce30(puVar3,param_1[4],puVar2,param_2[4]));
  return (uint)(uVar1 >> 0x1f);
}


// Reference entry 102be070; body size 31 bytes.
#line 1 "ENTRY_102be070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102be070(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x28));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 102be0c0; body size 14 bytes.
#line 1 "ENTRY_102be0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102be0c0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x6666666) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 102be490; body size 30 bytes.
#line 1 "ENTRY_102be490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_102be490(int param_1)

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


// Reference entry 102be9b0; body size 90 bytes.
#line 1 "ENTRY_102be9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_102be9b0(uint param_1)

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


// Reference entry 102bea50; body size 96 bytes.
#line 1 "ENTRY_102bea50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_102bea50(byte *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  
  while (uVar1 = param_3 - 4, 3 < param_3) {
    if ((int)(param_1) != *(int *)param_2) goto LAB_102bea78;
    param_1 = (byte *)(param_1 + 4);
    param_2 = (byte *)(param_2 + 4);
    param_3 = (uint)(uVar1);
  }
  if (uVar1 != 0xfffffffc) {
LAB_102bea78:
    bVar2 = (bool)(*param_1 < *param_2);
    if ((*param_1 != *param_2) ||
       ((uVar1 != 0xfffffffd &&
        ((bVar2 = param_1[1] < param_2[1], param_1[1] != param_2[1] ||
         ((uVar1 != 0xfffffffe &&
          ((bVar2 = param_1[2] < param_2[2], param_1[2] != param_2[2] ||
           ((uVar1 != 0xffffffff && (bVar2 = param_1[3] < param_2[3], param_1[3] != param_2[3]))))))
         )))))) {
      return (uint)(-(uint)bVar2 | 1);
    }
  }
  return (uint)(0);
}


// Reference entry 102bead0; body size 45 bytes.
#line 1 "ENTRY_102bead0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_102bead0(undefined4 *param_2)
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
  thunk_FUN_102bce30(puVar2,param_1[4],puVar1,param_2[4]);
  return;
}


// Reference entry 102befd0; body size 57 bytes.
#line 1 "ENTRY_102befd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102befd0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x28);
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


// Reference entry 102bf020; body size 60 bytes.
#line 1 "ENTRY_102bf020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102bf020(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x28);
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


// Reference entry 102c0270; body size 27 bytes.
#line 1 "ENTRY_102c0270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102c0270(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102c1230; body size 27 bytes.
#line 1 "ENTRY_102c1230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102c1230(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102c1260; body size 27 bytes.
#line 1 "ENTRY_102c1260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102c1260(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102c1bc0; body size 26 bytes.
#line 1 "ENTRY_102c1bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_102c1bc0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 102c3840; body size 40 bytes.
#line 1 "ENTRY_102c3840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102c3840(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 102c38f0; body size 27 bytes.
#line 1 "ENTRY_102c38f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102c38f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102c3920; body size 27 bytes.
#line 1 "ENTRY_102c3920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102c3920(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102c3950; body size 27 bytes.
#line 1 "ENTRY_102c3950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102c3950(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102c3980; body size 27 bytes.
#line 1 "ENTRY_102c3980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102c3980(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102c39b0; body size 70 bytes.
#line 1 "ENTRY_102c39b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102c39b0(undefined4 *param_1)

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


// Reference entry 102c3a10; body size 70 bytes.
#line 1 "ENTRY_102c3a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102c3a10(undefined4 *param_1)

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


// Reference entry 102c3ca0; body size 28 bytes.
#line 1 "ENTRY_102c3ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102c3ca0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWrapperHelper);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102c3ed0; body size 42 bytes.
#line 1 "ENTRY_102c3ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_102c3ed0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCServiceAccountFilter);
  return (undefined4 *)(param_1);
}


// Reference entry 102c5cd0; body size 26 bytes.
#line 1 "ENTRY_102c5cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_102c5cd0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 102c5cf0; body size 26 bytes.
#line 1 "ENTRY_102c5cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_102c5cf0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 102c6ed0; body size 31 bytes.
#line 1 "ENTRY_102c6ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_102c6ed0(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = (int)(8);
  if (*(char *)(param_1 + 0x14b) != '\0') {
    iVar1 = (int)(0x14b);
  }
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)((param_1 + iVar1)) != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)((undefined1 *)(param_1 + iVar1));
  }
  return (undefined1 *)(puVar2);
}


// Reference entry 102c6f00; body size 31 bytes.
#line 1 "ENTRY_102c6f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_102c6f00(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = (int)(0x428);
  if (*(char *)(param_1 + 0x56b) != '\0') {
    iVar1 = (int)(0x56b);
  }
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)((param_1 + iVar1)) != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)((undefined1 *)(param_1 + iVar1));
  }
  return (undefined1 *)(puVar2);
}


// Reference entry 102ca870; body size 32 bytes.
#line 1 "ENTRY_102ca870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_102ca870(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102caa00; body size 34 bytes.
#line 1 "ENTRY_102caa00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_102caa00(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102cb040; body size 25 bytes.
#line 1 "ENTRY_102cb040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102cb040(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 102cb3e0; body size 31 bytes.
#line 1 "ENTRY_102cb3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_102cb3e0(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') && (in_EAX = *param_2, *(uint *)(param_1 + 0x10) <= (uint)(in_EAX))
     ) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 102cb900; body size 38 bytes.
#line 1 "ENTRY_102cb900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102cb900(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    param_1 = (undefined4 *)(param_1 + 2);
  }
  return;
}


// Reference entry 102cbd90; body size 27 bytes.
#line 1 "ENTRY_102cbd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102cbd90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102cbdc0; body size 27 bytes.
#line 1 "ENTRY_102cbdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102cbdc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102cbdf0; body size 70 bytes.
#line 1 "ENTRY_102cbdf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102cbdf0(undefined4 *param_1)

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


// Reference entry 102cbe50; body size 70 bytes.
#line 1 "ENTRY_102cbe50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102cbe50(undefined4 *param_1)

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


// Reference entry 102cc000; body size 42 bytes.
#line 1 "ENTRY_102cc000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_102cc000(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWrapperObj);
  return (undefined4 *)(param_1);
}


// Reference entry 102cc350; body size 52 bytes.
#line 1 "ENTRY_102cc350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102cc350(undefined4 *param_1)

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


// Reference entry 102cc3e0; body size 42 bytes.
#line 1 "ENTRY_102cc3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_102cc3e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCServiceDescriptorFilter);
  return (undefined4 *)(param_1);
}


// Reference entry 102cdb50; body size 31 bytes.
#line 1 "ENTRY_102cdb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102cdb50(undefined4 *param_1)

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


// Reference entry 102cdba0; body size 49 bytes.
#line 1 "ENTRY_102cdba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_102cdba0(uint param_2)
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


// Reference entry 102cdc70; body size 14 bytes.
#line 1 "ENTRY_102cdc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102cdc70(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x9249249) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 102ce140; body size 26 bytes.
#line 1 "ENTRY_102ce140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_102ce140(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 102ce160; body size 26 bytes.
#line 1 "ENTRY_102ce160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_102ce160(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 102cf1b0; body size 97 bytes.
#line 1 "ENTRY_102cf1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_102cf1b0(uint param_1)

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


// Reference entry 102cf230; body size 87 bytes.
#line 1 "ENTRY_102cf230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_102cf230(uint param_1)

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


// Reference entry 102cf3e0; body size 63 bytes.
#line 1 "ENTRY_102cf3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102cf3e0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 102cf430; body size 66 bytes.
#line 1 "ENTRY_102cf430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102cf430(int param_1,int param_2)

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


// Reference entry 102d1e40; body size 61 bytes.
#line 1 "ENTRY_102d1e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_102d1e40(undefined4 param_2,int *param_3)
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


// Reference entry 102d2070; body size 63 bytes.
#line 1 "ENTRY_102d2070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_102d2070(undefined4 *param_2)
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


// Reference entry 102d2550; body size 51 bytes.
#line 1 "ENTRY_102d2550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102d2550(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(undefined4*)param_2[1] = (undefined4)((undefined4)(0));
  puVar2 = (undefined4 *)((undefined4 *)*param_2);
  while ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)*puVar2);
    thunk_FUN_102d3db0();
    thunk_FUN_1148a50e(puVar2,0x14);
    puVar2 = (undefined4 *)(puVar1);
  }
  return;
}


// Reference entry 102d25b0; body size 26 bytes.
#line 1 "ENTRY_102d25b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102d25b0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_102d3db0();
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 102d2970; body size 9 bytes.
#line 1 "ENTRY_102d2970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102d2970(undefined4 param_1,int *param_2)

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


// Reference entry 102d2b70; body size 30 bytes.
#line 1 "ENTRY_102d2b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102d2b70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 102d2f20; body size 27 bytes.
#line 1 "ENTRY_102d2f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102d2f20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102d3390; body size 42 bytes.
#line 1 "ENTRY_102d3390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_102d3390(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSubscriptionImpl_EventSink);
  return (undefined4 *)(param_1);
}


// Reference entry 102d4430; body size 29 bytes.
#line 1 "ENTRY_102d4430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_102d4430(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 102d4820; body size 20 bytes.
#line 1 "ENTRY_102d4820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102d4820(int param_1)

{
  if (*(int *)(param_1 + 8) != 0xccccccc) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 102d4840; body size 66 bytes.
#line 1 "ENTRY_102d4840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102d4840(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) +
                 (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (bool)(*param_1 <= fVar1 && fVar1 != *param_1);
}


// Reference entry 102d4d80; body size 92 bytes.
#line 1 "ENTRY_102d4d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_102d4d80(uint param_2,int param_3,int *param_4)
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


// Reference entry 102d4fa0; body size 26 bytes.
#line 1 "ENTRY_102d4fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_102d4fa0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 102d5130; body size 43 bytes.
#line 1 "ENTRY_102d5130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102d5130(int param_1,int param_2,int param_3)

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


// Reference entry 102d52c0; body size 90 bytes.
#line 1 "ENTRY_102d52c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_102d52c0(uint param_1)

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


// Reference entry 102d5340; body size 87 bytes.
#line 1 "ENTRY_102d5340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_102d5340(uint param_1)

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


// Reference entry 102d5510; body size 57 bytes.
#line 1 "ENTRY_102d5510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102d5510(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 102d5560; body size 60 bytes.
#line 1 "ENTRY_102d5560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102d5560(int param_1,int param_2)

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


// Reference entry 102d55b0; body size 61 bytes.
#line 1 "ENTRY_102d55b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102d55b0(int param_1,int param_2)

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


// Reference entry 102d5610; body size 32 bytes.
#line 1 "ENTRY_102d5610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_102d5610(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x3c) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x3c) + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 102d7330; body size 13 bytes.
#line 1 "ENTRY_102d7330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102d7330(int param_1)

{
  if (*(int **)(param_1 + 0x34) != (int *)(0x0)) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x34) + 0x30))();
    return;
  }
  return;
}


// Reference entry 102d89d0; body size 203 bytes.
#line 1 "ENTRY_102d89d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_102d89d0(void *param_2,int param_3)
{
  int *param_1 = (int *)this;
  void *_Dst;
  uint uVar1;
  uint uVar2;
  size_t _Size;
  uint uVar3;
  void *pvVar4;
  
  _Size = (size_t)(param_3 - (int)param_2);
  uVar2 = (uint)((int)_Size >> 2);
  _Dst = (void *)((void *)*param_1);
  uVar1 = (uint)(param_1[2] - (int)_Dst >> 2);
  if (uVar1 < uVar2) {
    if (0x3fffffff < uVar2) {
                    
      thunk_FUN_102daa60();
    }
    if (0x3fffffff - (uVar1 >> 1) < uVar1) {
      uVar3 = (uint)(0x3fffffff);
    }
    else {
      uVar3 = (uint)((uVar1 >> 1) + uVar1);
      if (uVar3 < uVar2) {
        uVar3 = (uint)(uVar2);
      }
    }
    if ((void *)(_Dst) != (void *)0x0) {
      uVar1 = (uint)(uVar1 * 4);
      pvVar4 = (void *)(_Dst);
      if (0xfff < uVar1) {
        pvVar4 = (void *)(*(void **)((int)_Dst + -4));
        uVar1 = (uint)(uVar1 + 0x23);
        if (0x1f < (uint)((int)_Dst + (-4 - (int)pvVar4))) {
                    
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1148a50e(pvVar4,uVar1);
      *param_1 = (int)(0);
      param_1[1] = (int)(0);
      param_1[2] = (int)(0);
    }
    _Dst = (void *)((void *)thunk_FUN_102daa80(uVar3));
    *param_1 = (int)((int)_Dst);
    param_1[1] = (int)((int)_Dst);
    param_1[2] = (int)((int)((int)_Dst + uVar3 * 4));
  }
  memmove(_Dst,param_2,_Size);
  param_1[1] = (int)(_Size + (int)_Dst);
  return;
}


// Reference entry 102d8ad0; body size 33 bytes.
#line 1 "ENTRY_102d8ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_102d8ad0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 102d8cc0; body size 38 bytes.
#line 1 "ENTRY_102d8cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_102d8cc0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 102d8d00; body size 36 bytes.
#line 1 "ENTRY_102d8d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_102d8d00(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 102d8d30; body size 36 bytes.
#line 1 "ENTRY_102d8d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_102d8d30(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 102d8d70; body size 203 bytes.
#line 1 "ENTRY_102d8d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_102d8d70(void *param_2,int param_3)
{
  int *param_1 = (int *)this;
  void *_Dst;
  uint uVar1;
  uint uVar2;
  size_t _Size;
  uint uVar3;
  void *pvVar4;
  
  _Size = (size_t)(param_3 - (int)param_2);
  uVar2 = (uint)((int)_Size >> 2);
  _Dst = (void *)((void *)*param_1);
  uVar1 = (uint)(param_1[2] - (int)_Dst >> 2);
  if (uVar1 < uVar2) {
    if (0x3fffffff < uVar2) {
                    
      thunk_FUN_102daa60();
    }
    if (0x3fffffff - (uVar1 >> 1) < uVar1) {
      uVar3 = (uint)(0x3fffffff);
    }
    else {
      uVar3 = (uint)((uVar1 >> 1) + uVar1);
      if (uVar3 < uVar2) {
        uVar3 = (uint)(uVar2);
      }
    }
    if ((void *)(_Dst) != (void *)0x0) {
      uVar1 = (uint)(uVar1 * 4);
      pvVar4 = (void *)(_Dst);
      if (0xfff < uVar1) {
        pvVar4 = (void *)(*(void **)((int)_Dst + -4));
        uVar1 = (uint)(uVar1 + 0x23);
        if (0x1f < (uint)((int)_Dst + (-4 - (int)pvVar4))) {
                    
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1148a50e(pvVar4,uVar1);
      *param_1 = (int)(0);
      param_1[1] = (int)(0);
      param_1[2] = (int)(0);
    }
    _Dst = (void *)((void *)thunk_FUN_102daa80(uVar3));
    *param_1 = (int)((int)_Dst);
    param_1[1] = (int)((int)_Dst);
    param_1[2] = (int)((int)((int)_Dst + uVar3 * 4));
  }
  memmove(_Dst,param_2,_Size);
  param_1[1] = (int)(_Size + (int)_Dst);
  return;
}


// Reference entry 102d8e90; body size 36 bytes.
#line 1 "ENTRY_102d8e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_102d8e90(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_102d8b30(puVar1,param_2);
  return;
}


// Reference entry 102d8fd0; body size 100 bytes.
#line 1 "ENTRY_102d8fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_102d8fd0(undefined4 *param_2)
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
  if ((void *)(_Src) != (void *)param_2[1]) {
    _Size = (size_t)((int)param_2[1] - (int)_Src);
    iVar1 = (int)((int)_Size >> 2);
    _Dst = (void *)((void *)thunk_FUN_102daa80(iVar1));
    *param_1 = (undefined4)(_Dst);
    param_1[1] = (undefined4)(_Dst);
    param_1[2] = (undefined4)((void *)((int)_Dst + iVar1 * 4));
    memmove(_Dst,_Src,_Size);
    param_1[1] = (undefined4)((void *)((int)_Dst + iVar1 * 4));
  }
  return (undefined4 *)(param_1);
}


// Reference entry 102d9680; body size 16 bytes.
#line 1 "ENTRY_102d9680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102d9680(undefined4 *param_1)

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


// Reference entry 102d9c30; body size 218 bytes.
#line 1 "ENTRY_102d9c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_102d9c30(int *param_2)
{
  int *param_1 = (int *)this;
  void *_Src;
  void *_Dst;
  uint uVar1;
  uint uVar2;
  size_t _Size;
  uint uVar3;
  void *pvVar4;
  
  if ((int *)(param_1) != (int *)(param_2)) {
    _Src = (void *)((void *)*param_2);
    _Size = (size_t)(param_2[1] - (int)_Src);
    _Dst = (void *)((void *)*param_1);
    uVar2 = (uint)((int)_Size >> 2);
    uVar1 = (uint)(param_1[2] - (int)_Dst >> 2);
    if (uVar1 < uVar2) {
      if (0x3fffffff < uVar2) {
                    
        thunk_FUN_102daa60();
      }
      if (0x3fffffff - (uVar1 >> 1) < uVar1) {
        uVar3 = (uint)(0x3fffffff);
      }
      else {
        uVar3 = (uint)((uVar1 >> 1) + uVar1);
        if (uVar3 < uVar2) {
          uVar3 = (uint)(uVar2);
        }
      }
      if ((void *)(_Dst) != (void *)0x0) {
        uVar1 = (uint)(uVar1 * 4);
        pvVar4 = (void *)(_Dst);
        if (0xfff < uVar1) {
          pvVar4 = (void *)(*(void **)((int)_Dst + -4));
          uVar1 = (uint)(uVar1 + 0x23);
          if (0x1f < (uint)((int)_Dst + (-4 - (int)pvVar4))) {
                    
            _invalid_parameter_noinfo_noreturn();
          }
        }
        thunk_FUN_1148a50e(pvVar4,uVar1);
        *param_1 = (int)(0);
        param_1[1] = (int)(0);
        param_1[2] = (int)(0);
      }
      _Dst = (void *)((void *)thunk_FUN_102daa80(uVar3));
      *param_1 = (int)((int)_Dst);
      param_1[1] = (int)((int)_Dst);
      param_1[2] = (int)((int)((int)_Dst + uVar3 * 4));
    }
    memmove(_Dst,_Src,_Size);
    param_1[1] = (int)(_Size + (int)_Dst);
  }
  return (int *)(param_1);
}


// Reference entry 102da640; body size 30 bytes.
#line 1 "ENTRY_102da640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_102da640(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_102daa80(param_2));
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + param_2 * 4);
  return;
}


// Reference entry 102da670; body size 49 bytes.
#line 1 "ENTRY_102da670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_102da670(uint param_2)
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


// Reference entry 102da720; body size 159 bytes.
#line 1 "ENTRY_102da720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_102da720(uint param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x3fffffff < param_2) {
                    
    thunk_FUN_102daa60();
  }
  iVar1 = (int)(*param_1);
  uVar3 = (uint)(param_1[2] - iVar1 >> 2);
  if (0x3fffffff - (uVar3 >> 1) < uVar3) {
    uVar4 = (uint)(0x3fffffff);
  }
  else {
    uVar4 = (uint)((uVar3 >> 1) + uVar3);
    if (uVar4 < param_2) {
      uVar4 = (uint)(param_2);
    }
  }
  if (iVar1 != 0) {
    uVar3 = (uint)(uVar3 * 4);
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
  iVar1 = (int)(thunk_FUN_102daa80(uVar4));
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + uVar4 * 4);
  return;
}


// Reference entry 102da7f0; body size 208 bytes.
#line 1 "ENTRY_102da7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_102da7f0(undefined4 *param_2)
{
  int *param_1 = (int *)this;
  void *_Src;
  void *_Dst;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  size_t _Size;
  void *pvVar4;
  
  _Src = (void *)((void *)*param_2);
  _Size = (size_t)(param_2[1] - (int)_Src);
  uVar2 = (uint)((int)_Size >> 2);
  _Dst = (void *)((void *)*param_1);
  uVar1 = (uint)(param_1[2] - (int)_Dst >> 2);
  if (uVar1 < uVar2) {
    if (0x3fffffff < uVar2) {
                    
      thunk_FUN_102daa60();
    }
    if (0x3fffffff - (uVar1 >> 1) < uVar1) {
      uVar3 = (uint)(0x3fffffff);
    }
    else {
      uVar3 = (uint)((uVar1 >> 1) + uVar1);
      if (uVar3 < uVar2) {
        uVar3 = (uint)(uVar2);
      }
    }
    if ((void *)(_Dst) != (void *)0x0) {
      uVar1 = (uint)(uVar1 * 4);
      pvVar4 = (void *)(_Dst);
      if (0xfff < uVar1) {
        pvVar4 = (void *)(*(void **)((int)_Dst + -4));
        uVar1 = (uint)(uVar1 + 0x23);
        if (0x1f < (uint)((int)_Dst + (-4 - (int)pvVar4))) {
                    
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1148a50e(pvVar4,uVar1);
      *param_1 = (int)(0);
      param_1[1] = (int)(0);
      param_1[2] = (int)(0);
    }
    _Dst = (void *)((void *)thunk_FUN_102daa80(uVar3));
    *param_1 = (int)((int)_Dst);
    param_1[1] = (int)((int)_Dst);
    param_1[2] = (int)((int)((int)_Dst + uVar3 * 4));
  }
  memmove(_Dst,_Src,_Size);
  param_1[1] = (int)((int)_Dst + _Size);
  return;
}


// Reference entry 102da9d0; body size 38 bytes.
#line 1 "ENTRY_102da9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_102da9d0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 102daa00; body size 27 bytes.
#line 1 "ENTRY_102daa00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102daa00(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 102daa30; body size 27 bytes.
#line 1 "ENTRY_102daa30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102daa30(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 102dae70; body size 61 bytes.
#line 1 "ENTRY_102dae70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102dae70(int param_1,int param_2)

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


// Reference entry 102db850; body size 36 bytes.
#line 1 "ENTRY_102db850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_102db850(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_102d8b30(puVar1,param_2);
  return;
}


// Reference entry 102dc650; body size 27 bytes.
#line 1 "ENTRY_102dc650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102dc650(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102dc680; body size 42 bytes.
#line 1 "ENTRY_102dc680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_102dc680(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOwnedObjImpl);
  return (undefined4 *)(param_1);
}


// Reference entry 102dc6c0; body size 42 bytes.
#line 1 "ENTRY_102dc6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_102dc6c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCITearOffObjImpl);
  return (undefined4 *)(param_1);
}


// Reference entry 102dd150; body size 80 bytes.
#line 1 "ENTRY_102dd150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_102dd150(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  uVar2 = (undefined4)(*param_2);
  uVar3 = (undefined4)(param_2[1]);
  *param_2 = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  piVar4 = (int *)((int *)param_1[1]);
  *param_1 = (undefined4)(uVar2);
  param_1[1] = (undefined4)(uVar3);
  if ((int *)(piVar4) != (int *)0x0) {
    LOCK();
    iVar5 = (int)(piVar4[1] + -1);
    piVar4[1] = (int)(iVar5);
    UNLOCK();
    if (iVar5 == 0) {
      (**(code **)*piVar4)();
      LOCK();
      piVar1 = (int *)(piVar4 + 2);
      iVar5 = (int)(*piVar1);
      *piVar1 = (int)(*piVar1 + -1);
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*piVar4 + 4))();
      }
    }
  }
  return (undefined4 *)(param_1);
}


// Reference entry 102dd5e0; body size 47 bytes.
#line 1 "ENTRY_102dd5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102dd5e0(int param_1)

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


// Reference entry 102dd6a0; body size 33 bytes.
#line 1 "ENTRY_102dd6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_102dd6a0(undefined4 *param_2)
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


// Reference entry 102dd720; body size 26 bytes.
#line 1 "ENTRY_102dd720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_102dd720(uint param_2)
{
  uint *param_1 = (uint *)this;
  uint uVar1;
  
  uVar1 = (uint)(*param_1);
  if ((uVar1 != param_2) && (uVar1 == 0)) {
    *param_1 = (uint)(param_2);
    return (uint)(1);
  }
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 102de610; body size 19 bytes.
#line 1 "ENTRY_102de610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102de610(int param_1)

{
  char cVar1;
  bool bVar2;
  
  bVar2 = (bool)(*(int *)(param_1 + 0x44) != 0);
  cVar1 = (char)(*(char *)(param_1 + 0x48));
  *(bool*)(param_1 + 0x48) = (bool)(bVar2);
  return (bool)(bVar2 != (bool)cVar1);
}


// Reference entry 102ded70; body size 24 bytes.
#line 1 "ENTRY_102ded70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_102ded70(int param_2)
{
  int *param_1 = (int *)this;
  if (param_2 == *param_1) {
    *param_1 = (int)(0);
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 102df4a0; body size 33 bytes.
#line 1 "ENTRY_102df4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_102df4a0(undefined4 *param_2)
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


// Reference entry 102df520; body size 27 bytes.
#line 1 "ENTRY_102df520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102df520(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102e4e80; body size 34 bytes.
#line 1 "ENTRY_102e4e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102e4e80(int *param_1,undefined4 param_2,float param_3,int param_4)

{
  (**(code **)(*param_1 + 0x28))(param_2,(int)((float)param_4 * param_3));
  return;
}


// Reference entry 102e4fd0; body size 31 bytes.
#line 1 "ENTRY_102e4fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_102e4fd0(undefined4 param_2,SCStr *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 102e53c0; body size 38 bytes.
#line 1 "ENTRY_102e53c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_102e53c0(undefined4 param_2,SCStr *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 102e53f0; body size 31 bytes.
#line 1 "ENTRY_102e53f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_102e53f0(undefined4 param_2,SCStr *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 102e54d0; body size 33 bytes.
#line 1 "ENTRY_102e54d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_102e54d0(undefined4 *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 102e5500; body size 40 bytes.
#line 1 "ENTRY_102e5500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_102e5500(undefined4 *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 102e5540; body size 33 bytes.
#line 1 "ENTRY_102e5540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_102e5540(undefined4 *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 102e6960; body size 25 bytes.
#line 1 "ENTRY_102e6960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102e6960(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 102e6980; body size 25 bytes.
#line 1 "ENTRY_102e6980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102e6980(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 102e69f0; body size 33 bytes.
#line 1 "ENTRY_102e69f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_102e69f0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 102e70f0; body size 152 bytes.
#line 1 "ENTRY_102e70f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102e70f0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)(param_3 - param_1 >> 3);
  if (0x28 < iVar1) {
    iVar2 = (int)(iVar1 + 1 >> 3);
    iVar1 = (int)(iVar2 * 8 + param_1);
    thunk_FUN_102e7730(param_1,iVar1,iVar2 * 0x10 + param_1,param_4);
    thunk_FUN_102e7730(param_2 + iVar2 * -8,param_2,iVar2 * 8 + param_2,param_4);
    iVar3 = (int)(param_3 + iVar2 * -8);
    thunk_FUN_102e7730(param_3 + iVar2 * -0x10,iVar3,param_3,param_4);
    thunk_FUN_102e7730(iVar1,param_2,iVar3,param_4);
    return;
  }
  thunk_FUN_102e7730(param_1,param_2,param_3,param_4);
  return;
}


// Reference entry 102e74c0; body size 37 bytes.
#line 1 "ENTRY_102e74c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102e74c0(int param_1,SCStr *param_2)

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


// Reference entry 102e93d0; body size 40 bytes.
#line 1 "ENTRY_102e93d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102e93d0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 102e9410; body size 40 bytes.
#line 1 "ENTRY_102e9410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102e9410(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 102e94e0; body size 33 bytes.
#line 1 "ENTRY_102e94e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_102e94e0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 102e9a10; body size 31 bytes.
#line 1 "ENTRY_102e9a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102e9a10(int param_1,int param_2,undefined4 param_3)

{
  thunk_FUN_102e8bc0(param_1,param_2,param_2 - param_1 >> 3,param_3);
  return;
}


// Reference entry 102e9b50; body size 30 bytes.
#line 1 "ENTRY_102e9b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102e9b50(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 102e9df0; body size 27 bytes.
#line 1 "ENTRY_102e9df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102e9df0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102e9e20; body size 27 bytes.
#line 1 "ENTRY_102e9e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102e9e20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102e9e50; body size 27 bytes.
#line 1 "ENTRY_102e9e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102e9e50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102e9e80; body size 27 bytes.
#line 1 "ENTRY_102e9e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102e9e80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 102ea900; body size 23 bytes.
#line 1 "ENTRY_102ea900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8 * __thiscall Recovered_Bulk::FUN_102ea900(undefined8 *param_2)
{
  undefined8 *param_1 = (undefined8 *)this;
  *param_1 = (undefined8)(*param_2);
  *(undefined4*)(param_1 + 1) = (undefined4)(*(undefined4 *)(param_2 + 1));
  return (undefined8 *)(param_1);
}


// Reference entry 102eaa10; body size 52 bytes.
#line 1 "ENTRY_102eaa10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102eaa10(undefined4 *param_1)

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


// Reference entry 102eaa60; body size 52 bytes.
#line 1 "ENTRY_102eaa60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102eaa60(undefined4 *param_1)

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


// Reference entry 102ead30; body size 29 bytes.
#line 1 "ENTRY_102ead30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_102ead30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_ApplicationControllerAIOHelper);
  DAT_121a0e70 = (int)(param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 102ead60; body size 33 bytes.
#line 1 "ENTRY_102ead60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102ead60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBrowseManager);
  return (undefined4 *)(param_1);
}


// Reference entry 102ead90; body size 65 bytes.
#line 1 "ENTRY_102ead90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102ead90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegate);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCompoundActionImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCCompoundActionImpl);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  *(undefined1*)(param_1 + 5) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102eb040; body size 75 bytes.
#line 1 "ENTRY_102eb040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102eb040(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDisplaySubmitDiagnosticsMessageAction);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102eb0a0; body size 33 bytes.
#line 1 "ENTRY_102eb0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102eb0a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDisplaySubmitDiagnosticsMessageDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 102ee5e0; body size 18 bytes.
#line 1 "ENTRY_102ee5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_102ee5e0(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 8);
  return;
}


// Reference entry 102efea0; body size 31 bytes.
#line 1 "ENTRY_102efea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102efea0(undefined4 *param_1)

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


// Reference entry 102efed0; body size 31 bytes.
#line 1 "ENTRY_102efed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102efed0(undefined4 *param_1)

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


// Reference entry 102eff40; body size 240 bytes.
#line 1 "ENTRY_102eff40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_102eff40(uint param_2,undefined4 param_3)
{
  uint *param_1 = (uint *)this;
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar5 = (undefined4 *)((undefined4 *)param_1[1]);
  puVar6 = (undefined4 *)((undefined4 *)*param_1);
  uVar4 = (uint)((int)puVar5 - (int)puVar6 >> 2);
  if (uVar4 < param_2) {
    if (0x3fffffff < param_2) {
LAB_102f002b:
                    
      thunk_FUN_1012a2a0();
    }
    uVar1 = (uint)(param_2 * 4);
    if (uVar1 < 0x1000) {
      if (uVar1 == 0) {
        puVar5 = (undefined4 *)((undefined4 *)0x0);
      }
      else {
        puVar5 = (undefined4 *)(operator_new(uVar1));
      }
    }
    else {
      if (uVar1 + 0x23 <= uVar1) goto LAB_102f002b;
      pvVar2 = (void *)(operator_new(uVar1 + 0x23));
      if ((void *)(pvVar2) == (void *)0x0) goto LAB_102f0004;
      puVar5 = (undefined4 *)((undefined4 *)((int)pvVar2 + 0x23U & 0xffffffe0));
      puVar5[-1] = (undefined4)(pvVar2);
    }
    if (uVar4 != 0) {
      uVar1 = (uint)(*param_1);
      uVar4 = (uint)(uVar4 * 4);
      uVar3 = (uint)(uVar1);
      if (0xfff < uVar4) {
        uVar3 = (uint)(*(uint *)(uVar1 - 4));
        uVar4 = (uint)(uVar4 + 0x23);
        if (0x1f < (uVar1 - uVar3) - 4) {
LAB_102f0004:
                    
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1148a50e(uVar3,uVar4);
    }
    puVar6 = (undefined4 *)(puVar5 + param_2);
    *param_1 = (uint)((uint)puVar5);
    param_1[1] = (uint)((uint)puVar6);
    param_1[2] = (uint)((uint)puVar6);
    for (;(undefined4 *)( puVar5) != (undefined4 *)(puVar6); puVar5 = puVar5 + 1) {
      *puVar5 = (undefined4)(param_3);
    }
  }
  else {
    uVar4 = (uint)((uint)((int)puVar5 + (3 - (int)puVar6)) >> 2);
    if (puVar5 < puVar6) {
      uVar4 = (uint)(0);
    }
    if (uVar4 != 0) {
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = (undefined4)(param_3);
        puVar6 = (undefined4 *)(puVar6 + 1);
      }
      return;
    }
  }
  return;
}


// Reference entry 102f0070; body size 14 bytes.
#line 1 "ENTRY_102f0070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102f0070(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 102f0780; body size 23 bytes.
#line 1 "ENTRY_102f0780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102f0780(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  func_0x1000ffdd(param_1,param_2,&DAT_1186d2ee,param_3);
  pcVar1 = (code *)((code *)swi(3));
  (*pcVar1)();
  return;
}


// Reference entry 102f0bd0; body size 90 bytes.
#line 1 "ENTRY_102f0bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_102f0bd0(uint param_1)

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


// Reference entry 102f0c50; body size 90 bytes.
#line 1 "ENTRY_102f0c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_102f0c50(uint param_1)

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


// Reference entry 102f0cd0; body size 90 bytes.
#line 1 "ENTRY_102f0cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_102f0cd0(uint param_1)

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


// Reference entry 102f0d50; body size 87 bytes.
#line 1 "ENTRY_102f0d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_102f0d50(uint param_1)

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


// Reference entry 102f1220; body size 17 bytes.
#line 1 "ENTRY_102f1220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102f1220(void)

{
  if ((undefined4 *)(DAT_122e8a18) != (undefined4 *)0x0) {
    (**(code **)DAT_122e8a18)(1);
  }
  return;
}


// Reference entry 102f4320; body size 57 bytes.
#line 1 "ENTRY_102f4320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102f4320(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 102f4370; body size 57 bytes.
#line 1 "ENTRY_102f4370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102f4370(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 102f43c0; body size 57 bytes.
#line 1 "ENTRY_102f43c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102f43c0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 102f4410; body size 60 bytes.
#line 1 "ENTRY_102f4410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102f4410(int param_1,int param_2)

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


// Reference entry 102f4460; body size 61 bytes.
#line 1 "ENTRY_102f4460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_102f4460(int param_1,int param_2)

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


// Reference entry 102f73d0; body size 20 bytes.
#line 1 "ENTRY_102f73d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102f73d0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
  case 5:
    return (undefined4)(0x11);
  case 1:
    return (undefined4)(0x12);
  case 2:
    return (undefined4)(0x13);
  case 3:
    return (undefined4)(0x14);
  case 4:
    return (undefined4)(0x15);
  default:
    return (undefined4)(0xffffffff);
  }
}


// Reference entry 102f9b60; body size 4 bytes.
#line 1 "ENTRY_102f9b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 __fastcall FUN_102f9b60(undefined2 *param_1)

{
  return (undefined2)(*param_1);
}


// Reference entry 102fc8d0; body size 26 bytes.
#line 1 "ENTRY_102fc8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102fc8d0(undefined4 param_1)

{
  if (DAT_121a0e70 != 0) {
    thunk_FUN_110f6450(param_1,DAT_121a0e70,0);
  }
  return;
}


// Reference entry 102fe1d0; body size 8 bytes.
#line 1 "ENTRY_102fe1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_102fe1d0(uint *param_1)

{
  return (uint)(*param_1 >> 0x14 & 0xffffff0f);
}


// Reference entry 10301440; body size 8 bytes.
#line 1 "ENTRY_10301440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10301440(void)

{
  DAT_121a12cc = (int)(1);
  return;
}


// Reference entry 10301d00; body size 38 bytes.
#line 1 "ENTRY_10301d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10301d00(undefined4 param_2,int param_3)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 8) + param_3 * 8);
  thunk_FUN_102e8bc0(iVar1,*(int *)(param_1 + 0xc),*(int *)(param_1 + 0xc) - iVar1 >> 3,param_2);
  return;
}


// Reference entry 10301d30; body size 23 bytes.
#line 1 "ENTRY_10301d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10301d30(int param_1)

{
  if ((&DAT_122f5650)[param_1] != 0) {
    thunk_FUN_11241ca0();
  }
  return;
}


// Reference entry 10301da0; body size 21 bytes.
#line 1 "ENTRY_10301da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10301da0(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 0x34))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 10301ec0; body size 21 bytes.
#line 1 "ENTRY_10301ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10301ec0(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 0x38))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 10302490; body size 27 bytes.
#line 1 "ENTRY_10302490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10302490(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 103024c0; body size 27 bytes.
#line 1 "ENTRY_103024c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103024c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10302900; body size 22 bytes.
#line 1 "ENTRY_10302900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10302900(undefined4 *param_1,undefined4 *param_2)

{
  thunk_FUN_1111d190(*param_1,*param_2);
  return;
}


// Reference entry 103031d0; body size 100 bytes.
#line 1 "ENTRY_103031d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_103031d0(SCStr *param_2,int param_3)
{
  SCStr *param_1 = (SCStr *)this;
  undefined4 uVar1;
  
  ((SCStr *)(param_1))->op_ctor(param_2);
  *(undefined***)(param_1 + 4) = (undefined **)((uint)&ghidra_vftable_RKeyValueBase);
  *(undefined4*)(param_1 + 8) = (undefined4)(*(undefined4 *)(param_3 + 4));
  *(undefined4*)(param_1 + 0xc) = (undefined4)(*(undefined4 *)(param_3 + 8));
  *(undefined4*)(param_1 + 0x10) = (undefined4)(*(undefined4 *)(param_3 + 0xc));
  *(undefined***)(param_1 + 4) = (undefined **)((uint)&ghidra_vftable_RKVReport);
  uVar1 = (undefined4)(*(undefined4 *)(param_3 + 0x14));
  *(undefined4*)(param_1 + 0x14) = (undefined4)(*(undefined4 *)(param_3 + 0x10));
  *(undefined4*)(param_1 + 0x18) = (undefined4)(uVar1);
  *(undefined***)(param_1 + 4) = (undefined **)((uint)&ghidra_vftable_RKVReportData);
  memcpy(param_1 + 0x1c,(void *)(param_3 + 0x18),0x1000);
  return (SCStr *)(param_1);
}


// Reference entry 103035d0; body size 49 bytes.
#line 1 "ENTRY_103035d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103035d0(void)

{
  void *pvVar1;
  uint uVar2;
  
  pvVar1 = (void *)(operator_new(0x104f));
  if ((void *)(pvVar1) != (void *)0x0) {
    uVar2 = (uint)((int)pvVar1 + 0x23U & 0xffffffe0);
    *(void**)(uVar2 - 4) = (void *)(pvVar1);
    *(uint*)uVar2 = (uint)((uint)(uVar2));
    *(uint*)(uVar2 + 4) = (uint)(uVar2);
    *(uint*)(uVar2 + 8) = (uint)(uVar2);
    *(undefined2*)(uVar2 + 0xc) = (undefined2)(0x101);
    return;
  }
                    
                    
                    
  _invalid_parameter_noinfo_noreturn();
  return;
}


// Reference entry 10303910; body size 113 bytes.
#line 1 "ENTRY_10303910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10303910(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)(thunk_FUN_103039a0(*(undefined4 *)(*param_2 + 4),*param_1,param_3));
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


// Reference entry 103042b0; body size 22 bytes.
#line 1 "ENTRY_103042b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103042b0(uint param_1)

{
  undefined1 auStack_c [12];
  
  if (param_1 < 0xfd478) {
    return (int)(param_1 * 0x102c);
  }
  thunk_FUN_1011bdc0();
                    
  _CxxThrowException(auStack_c,(ThrowInfo *)&DAT_11d330dc);
}


// Reference entry 10304300; body size 37 bytes.
#line 1 "ENTRY_10304300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10304300(int param_1,SCStr *param_2)

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


// Reference entry 10304660; body size 93 bytes.
#line 1 "ENTRY_10304660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10304660(undefined4 param_1,SCStr *param_2,SCStr *param_3)

{
  undefined4 uVar1;
  
  ((SCStr *)(param_2))->op_ctor(param_3);
  *(undefined***)(param_2 + 4) = (undefined **)((uint)&ghidra_vftable_RKeyValueBase);
  *(undefined4*)(param_2 + 8) = (undefined4)(*(undefined4 *)(param_3 + 8));
  *(undefined4*)(param_2 + 0xc) = (undefined4)(*(undefined4 *)(param_3 + 0xc));
  *(undefined4*)(param_2 + 0x10) = (undefined4)(*(undefined4 *)(param_3 + 0x10));
  *(undefined***)(param_2 + 4) = (undefined **)((uint)&ghidra_vftable_RKVReport);
  uVar1 = (undefined4)(*(undefined4 *)(param_3 + 0x18));
  *(undefined4*)(param_2 + 0x14) = (undefined4)(*(undefined4 *)(param_3 + 0x14));
  *(undefined4*)(param_2 + 0x18) = (undefined4)(uVar1);
  *(undefined***)(param_2 + 4) = (undefined **)((uint)&ghidra_vftable_RKVReportData);
  memcpy(param_2 + 0x1c,param_3 + 0x1c,0x1000);
  return;
}


// Reference entry 103046e0; body size 94 bytes.
#line 1 "ENTRY_103046e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103046e0(undefined4 param_1,SCStr *param_2,SCStr *param_3,int param_4)

{
  undefined4 uVar1;
  
  ((SCStr *)(param_2))->op_ctor(param_3);
  *(undefined***)(param_2 + 4) = (undefined **)((uint)&ghidra_vftable_RKeyValueBase);
  *(undefined4*)(param_2 + 8) = (undefined4)(*(undefined4 *)(param_4 + 4));
  *(undefined4*)(param_2 + 0xc) = (undefined4)(*(undefined4 *)(param_4 + 8));
  *(undefined4*)(param_2 + 0x10) = (undefined4)(*(undefined4 *)(param_4 + 0xc));
  *(undefined***)(param_2 + 4) = (undefined **)((uint)&ghidra_vftable_RKVReport);
  uVar1 = (undefined4)(*(undefined4 *)(param_4 + 0x14));
  *(undefined4*)(param_2 + 0x14) = (undefined4)(*(undefined4 *)(param_4 + 0x10));
  *(undefined4*)(param_2 + 0x18) = (undefined4)(uVar1);
  *(undefined***)(param_2 + 4) = (undefined **)((uint)&ghidra_vftable_RKVReportData);
  memcpy(param_2 + 0x1c,(void *)(param_4 + 0x18),0x1000);
  return;
}


// Reference entry 10304c80; body size 30 bytes.
#line 1 "ENTRY_10304c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10304c80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 10304cc0; body size 28 bytes.
#line 1 "ENTRY_10304cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10304cc0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 10304cf0; body size 28 bytes.
#line 1 "ENTRY_10304cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10304cf0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 10304ff0; body size 74 bytes.
#line 1 "ENTRY_10304ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10304ff0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *pvVar1;
  uint uVar2;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  pvVar1 = (void *)(operator_new(0x104f));
  if ((void *)(pvVar1) != (void *)0x0) {
    uVar2 = (uint)((int)pvVar1 + 0x23U & 0xffffffe0);
    *(void**)(uVar2 - 4) = (void *)(pvVar1);
    *(uint*)uVar2 = (uint)((uint)(uVar2));
    *(uint*)(uVar2 + 4) = (uint)(uVar2);
    *(uint*)(uVar2 + 8) = (uint)(uVar2);
    *(undefined2*)(uVar2 + 0xc) = (undefined2)(0x101);
    *(uint*)param_1[1] = (uint)((undefined4)(uVar2));
    return (undefined4 *)(param_1);
  }
                    
  _invalid_parameter_noinfo_noreturn();
}


// Reference entry 10305120; body size 23 bytes.
#line 1 "ENTRY_10305120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8 * __thiscall Recovered_Bulk::FUN_10305120(undefined8 *param_2)
{
  undefined8 *param_1 = (undefined8 *)this;
  *param_1 = (undefined8)(*param_2);
  *(undefined4*)(param_1 + 1) = (undefined4)(*(undefined4 *)(param_2 + 1));
  return (undefined8 *)(param_1);
}


// Reference entry 10305310; body size 75 bytes.
#line 1 "ENTRY_10305310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint * __fastcall FUN_10305310(uint *param_1)

{
  void *pvVar1;
  uint uVar2;
  
  *param_1 = (uint)(0);
  param_1[1] = (uint)(0);
  pvVar1 = (void *)(operator_new(0x104f));
  if ((void *)(pvVar1) != (void *)0x0) {
    uVar2 = (uint)((int)pvVar1 + 0x23U & 0xffffffe0);
    *(void**)(uVar2 - 4) = (void *)(pvVar1);
    *(uint*)uVar2 = (uint)((uint)(uVar2));
    *(uint*)(uVar2 + 4) = (uint)(uVar2);
    *(uint*)(uVar2 + 8) = (uint)(uVar2);
    *(undefined2*)(uVar2 + 0xc) = (undefined2)(0x101);
    *param_1 = (uint)(uVar2);
    return (uint *)(param_1);
  }
                    
  _invalid_parameter_noinfo_noreturn();
}


// Reference entry 10305370; body size 99 bytes.
#line 1 "ENTRY_10305370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10305370(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  undefined4 uVar1;
  
  ((SCStr *)(param_1))->op_ctor(param_2);
  *(undefined***)(param_1 + 4) = (undefined **)((uint)&ghidra_vftable_RKeyValueBase);
  *(undefined4*)(param_1 + 8) = (undefined4)(*(undefined4 *)(param_2 + 8));
  *(undefined4*)(param_1 + 0xc) = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  *(undefined4*)(param_1 + 0x10) = (undefined4)(*(undefined4 *)(param_2 + 0x10));
  *(undefined***)(param_1 + 4) = (undefined **)((uint)&ghidra_vftable_RKVReport);
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0x18));
  *(undefined4*)(param_1 + 0x14) = (undefined4)(*(undefined4 *)(param_2 + 0x14));
  *(undefined4*)(param_1 + 0x18) = (undefined4)(uVar1);
  *(undefined***)(param_1 + 4) = (undefined **)((uint)&ghidra_vftable_RKVReportData);
  memcpy(param_1 + 0x1c,param_2 + 0x1c,0x1000);
  return (SCStr *)(param_1);
}


// Reference entry 103054e0; body size 61 bytes.
#line 1 "ENTRY_103054e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103054e0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111c05a0(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpPostNoRedirectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RHttpPostNoRedirectAIOOp);
  return (undefined4 *)(param_1);
}


// Reference entry 10305530; body size 53 bytes.
#line 1 "ENTRY_10305530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10305530(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_RKeyValueBase);
  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  param_1[2] = (undefined4)(*(undefined4 *)(param_2 + 8));
  param_1[3] = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  *param_1 = (undefined4)((uint)&ghidra_vftable_RKVReport);
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0x14));
  param_1[4] = (undefined4)(*(undefined4 *)(param_2 + 0x10));
  param_1[5] = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10305b60; body size 100 bytes.
#line 1 "ENTRY_10305b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10305b60(undefined4 *param_1)

{
  thunk_FUN_11240650();
  param_1[1] = (undefined4)((uint)&ghidra_vftable_RReportUploaderClient);
  *(undefined2*)((int)param_1 + 10) = (undefined2)(0x3eb);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCReportUploaderAIOClient);
  param_1[1] = (undefined4)((uint)&ghidra_vftable_SCReportUploaderAIOClient);
  *(undefined1*)(param_1 + 2) = (undefined1)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  param_1[0x12] = (undefined4)(0);
  thunk_FUN_112a9cf0(param_1 + 6);
  thunk_FUN_112aa310(param_1 + 8);
  return (undefined4 *)(param_1);
}


// Reference entry 103062c0; body size 18 bytes.
#line 1 "ENTRY_103062c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103062c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpPostNoRedirectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RHttpPostNoRedirectAIOOp);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpBaseNoRedirectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RHttpBaseNoRedirectAIOOp);
  if ((undefined4 *)(undefined4 *)(param_1[0x91f]) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x91f])(1);
  }
  thunk_FUN_1124a3f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpImpl);
  thunk_FUN_112407b0();
  return;
}


// Reference entry 10306e90; body size 54 bytes.
#line 1 "ENTRY_10306e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10306e90(uint *param_1)

{
  void *pvVar1;
  uint uVar2;
  
  pvVar1 = (void *)(operator_new(0x104f));
  if ((void *)(pvVar1) != (void *)0x0) {
    uVar2 = (uint)((int)pvVar1 + 0x23U & 0xffffffe0);
    *(void**)(uVar2 - 4) = (void *)(pvVar1);
    *(uint*)uVar2 = (uint)((uint)(uVar2));
    *(uint*)(uVar2 + 4) = (uint)(uVar2);
    *(uint*)(uVar2 + 8) = (uint)(uVar2);
    *(undefined2*)(uVar2 + 0xc) = (undefined2)(0x101);
    *param_1 = (uint)(uVar2);
    return;
  }
                    
  _invalid_parameter_noinfo_noreturn();
}


// Reference entry 10307080; body size 14 bytes.
#line 1 "ENTRY_10307080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10307080(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xfd477) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 103070a0; body size 20 bytes.
#line 1 "ENTRY_103070a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103070a0(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0xfffffff) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 103070c0; body size 67 bytes.
#line 1 "ENTRY_103070c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103070c0(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x10) + 1);
  fVar2 = (float)((float)((double)iVar1 + (double)(&DAT_11880fb0)[-(iVar1 >> 0x1f)]) /
          (float)((double)*(int *)(param_1 + 0x24) +
                 (double)(&DAT_11880fb0)[-(*(int *)(param_1 + 0x24) >> 0x1f)]));
  return (bool)(*(float *)(param_1 + 8) <= (float)(fVar2) &&(float)( fVar2) != *(float *)(param_1 + 8));
}


// Reference entry 10307920; body size 92 bytes.
#line 1 "ENTRY_10307920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10307920(uint param_2,int param_3,int *param_4)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(*(undefined4 **)(param_3 + 4));
  *(int*)(param_1 + 0x10) = (int)(*(int *)(param_1 + 0x10) + 1);
  *param_4 = (int)(param_3);
  param_4[1] = (int)((int)puVar2);
  *puVar2 = (undefined4)(param_4);
  *(int**)(param_3 + 4) = (int *)(param_4);
  piVar1 = (int *)((int *)(*(int *)(param_1 + 0x14) + (*(uint *)(param_1 + 0x20) & param_2) * 8));
  if ((int)(*piVar1) == *(int *)(param_1 + 0xc)) {
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


// Reference entry 10308040; body size 43 bytes.
#line 1 "ENTRY_10308040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10308040(int param_1,int param_2,int param_3)

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


// Reference entry 103089f0; body size 87 bytes.
#line 1 "ENTRY_103089f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_103089f0(uint param_1)

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


// Reference entry 10308a60; body size 90 bytes.
#line 1 "ENTRY_10308a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10308a60(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0xfd478) {
    param_1 = (uint)(param_1 * 0x102c);
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


// Reference entry 10308ae0; body size 87 bytes.
#line 1 "ENTRY_10308ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10308ae0(uint param_1)

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


// Reference entry 10308b50; body size 19 bytes.
#line 1 "ENTRY_10308b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10308b50(undefined4 param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(thunk_FUN_101a3180(param_2));
  return (uint)(uVar1 & *(uint *)(param_1 + 0x20));
}


// Reference entry 10308d00; body size 68 bytes.
#line 1 "ENTRY_10308d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10308d00(int param_1)

{
  int *piVar1;
  int iStack_4;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    piVar1 = (int *)((int *)(param_1 + 0xc));
    iStack_4 = (int)(param_1);
    thunk_FUN_10304120(piVar1,*(undefined4 *)(param_1 + 0xc));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
    iStack_4 = (int)(*piVar1);
    thunk_FUN_10304a70(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),&iStack_4);
  }
  return;
}


// Reference entry 10309100; body size 54 bytes.
#line 1 "ENTRY_10309100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10309100(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10309150; body size 57 bytes.
#line 1 "ENTRY_10309150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10309150(int param_1,int param_2)

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


// Reference entry 103091a0; body size 58 bytes.
#line 1 "ENTRY_103091a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103091a0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x102c);
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


// Reference entry 103091f0; body size 61 bytes.
#line 1 "ENTRY_103091f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103091f0(int param_1,int param_2)

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


// Reference entry 10309810; body size 68 bytes.
#line 1 "ENTRY_10309810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10309810(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  thunk_FUN_112af4e0("SCReportManager",2,"Kicking off event upload");
  iVar1 = (int)(thunk_FUN_1109f7f0());
  if (iVar1 != 0) {
    uVar2 = (undefined4)(thunk_FUN_1109f750());
    thunk_FUN_11278b20(uVar2);
  }
  (**(code **)(**(int **)(param_1 + 0xa4) + 4))(LAB_1001a01e,0);
  return;
}


// Reference entry 1030b2f0; body size 24 bytes.
#line 1 "ENTRY_1030b2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_1030b2f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 1030b310; body size 24 bytes.
#line 1 "ENTRY_1030b310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_1030b310(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 1030bb00; body size 21 bytes.
#line 1 "ENTRY_1030bb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030bb00(void)

{
  thunk_FUN_10309870(0);
  thunk_FUN_1030b1f0(0);
  return;
}


// Reference entry 1030d870; body size 59 bytes.
#line 1 "ENTRY_1030d870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030d870(undefined4 param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)**(int **)(param_2 + 0x30));
  if ((int *)(piVar1) != *(int **)(param_2 + 0x30)) {
    do {
      *(undefined1*)piVar1[2] = (undefined1)((int)(0));
      piVar1 = (int *)((int *)*piVar1);
    } while ((int *)(piVar1) != (int *)*(int *)(param_2 + 0x30));
  }
  thunk_FUN_1030f760();
  thunk_FUN_1030f810();
  thunk_FUN_1148a50e(param_2,0x4c);
  return;
}


// Reference entry 1030d8c0; body size 19 bytes.
#line 1 "ENTRY_1030d8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1030d8c0(uint param_1)

{
  undefined1 auStack_c [12];
  
  if (param_1 < 0x35e50d8) {
    return (int)(param_1 * 0x4c);
  }
  thunk_FUN_1011bdc0();
                    
  _CxxThrowException(auStack_c,(ThrowInfo *)&DAT_11d330dc);
}


// Reference entry 1030e090; body size 46 bytes.
#line 1 "ENTRY_1030e090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030e090(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  
  piVar5 = (int *)((int *)**(int **)(param_2 + 0x28));
  if ((int *)(piVar5) != *(int **)(param_2 + 0x28)) {
    do {
      *(undefined1*)piVar5[2] = (undefined1)((int)(0));
      piVar5 = (int *)((int *)*piVar5);
    } while ((int *)(piVar5) != (int *)*(int *)(param_2 + 0x28));
  }
  thunk_FUN_1030f760();
  iVar1 = (int)(*(int *)(param_2 + 0x10));
  uVar6 = (uint)(*(int *)(param_2 + 0x14) - iVar1 & 0xfffffffc);
  iVar4 = (int)(iVar1);
  if (0xfff < uVar6) {
    iVar4 = (int)(*(int *)(iVar1 + -4));
    uVar6 = (uint)(uVar6 + 0x23);
    if (0x1f < (iVar1 - iVar4) - 4U) {
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1148a50e(iVar4,uVar6);
  *(undefined4*)(param_2 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x18) = (undefined4)(0);
  puVar2 = (undefined4 *)(*(undefined4 **)(param_2 + 8));
  *(undefined4*)puVar2[1] = (undefined4)((undefined4)(0));
  puVar2 = (undefined4 *)((undefined4 *)*puVar2);
  while ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)((undefined4 *)*puVar2);
    thunk_FUN_1148a50e(puVar2,0xc,unaff_ESI);
    puVar2 = (undefined4 *)(puVar3);
  }
  thunk_FUN_1148a50e(*(undefined4 *)(param_2 + 8),0xc);
  return;
}


// Reference entry 1030eab0; body size 30 bytes.
#line 1 "ENTRY_1030eab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030eab0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 1030eae0; body size 30 bytes.
#line 1 "ENTRY_1030eae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030eae0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 1030eb10; body size 30 bytes.
#line 1 "ENTRY_1030eb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030eb10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 1030fba0; body size 45 bytes.
#line 1 "ENTRY_1030fba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1030fba0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 unaff_ESI;
  
  piVar6 = (int *)((int *)**(int **)(param_1 + 0x28));
  if ((int *)(piVar6) != *(int **)(param_1 + 0x28)) {
    do {
      *(undefined1*)piVar6[2] = (undefined1)((int)(0));
      piVar6 = (int *)((int *)*piVar6);
    } while ((int *)(piVar6) != (int *)*(int *)(param_1 + 0x28));
  }
  thunk_FUN_1030f760();
  iVar1 = (int)(*(int *)(param_1 + 0x10));
  uVar5 = (uint)(*(int *)(param_1 + 0x14) - iVar1 & 0xfffffffc);
  iVar4 = (int)(iVar1);
  if (0xfff < uVar5) {
    iVar4 = (int)(*(int *)(iVar1 + -4));
    uVar5 = (uint)(uVar5 + 0x23);
    if (0x1f < (iVar1 - iVar4) - 4U) {
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1148a50e(iVar4,uVar5);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 8));
  *(undefined4*)puVar2[1] = (undefined4)((undefined4)(0));
  puVar2 = (undefined4 *)((undefined4 *)*puVar2);
  while ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)((undefined4 *)*puVar2);
    thunk_FUN_1148a50e(puVar2,0xc,unaff_ESI);
    puVar2 = (undefined4 *)(puVar3);
  }
  thunk_FUN_1148a50e(*(undefined4 *)(param_1 + 8),0xc);
  return;
}


// Reference entry 1030fc90; body size 98 bytes.
#line 1 "ENTRY_1030fc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1030fc90(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piStack_4;
  
  iVar2 = (int)(*param_1);
  if ((iVar2 != 0) && (*(uint *)(iVar2 + 8) != 0)) {
    piVar1 = (int *)((int *)(iVar2 + 4));
    piStack_4 = (int *)(param_1);
    if (*(uint *)(iVar2 + 8) < *(uint *)(iVar2 + 0x1c) >> 3) {
      func_0x1005e6ce(*(undefined4 *)*piVar1,(undefined4 *)*piVar1);
      return;
    }
    thunk_FUN_1030d760(piVar1,*piVar1);
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(iVar2 + 8) = (undefined4)(0);
    piStack_4 = (int *)((int *)*piVar1);
    thunk_FUN_1030e7e0(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),&piStack_4);
  }
  return;
}


// Reference entry 1030fd10; body size 131 bytes.
#line 1 "ENTRY_1030fd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1030fd10(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piStack_4;
  
  iVar1 = (int)(*param_1);
  if ((iVar1 != 0) && (*(uint *)(iVar1 + 8) != 0)) {
    piStack_4 = (int *)(param_1);
    if (*(uint *)(iVar1 + 8) < *(uint *)(iVar1 + 0x1c) >> 3) {
      func_0x10001cda(**(undefined4 **)(iVar1 + 4),*(undefined4 **)(iVar1 + 4));
      return;
    }
    puVar2 = (undefined4 *)(*(undefined4 **)(iVar1 + 4));
    *(undefined4*)puVar2[1] = (undefined4)((undefined4)(0));
    puVar2 = (undefined4 *)((undefined4 *)*puVar2);
    while ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)((undefined4 *)*puVar2);
      thunk_FUN_1148a50e(puVar2,0xc);
      puVar2 = (undefined4 *)(puVar3);
    }
    *(undefined4 *)*(undefined4*)(iVar1 + 4) = (undefined4)(*(undefined4 *)(iVar1 + 4));
    *(int*)(*(int *)(iVar1 + 4) + 4) = (int)(*(int *)(iVar1 + 4));
    *(undefined4*)(iVar1 + 8) = (undefined4)(0);
    piStack_4 = (int *)(*(int **)(iVar1 + 4));
    thunk_FUN_1030e6e0(*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10),&piStack_4);
  }
  return;
}


// Reference entry 1030fdc0; body size 131 bytes.
#line 1 "ENTRY_1030fdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1030fdc0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piStack_4;
  
  iVar1 = (int)(*param_1);
  if ((iVar1 != 0) && (*(uint *)(iVar1 + 8) != 0)) {
    piStack_4 = (int *)(param_1);
    if (*(uint *)(iVar1 + 8) < *(uint *)(iVar1 + 0x1c) >> 3) {
      func_0x10011310(**(undefined4 **)(iVar1 + 4),*(undefined4 **)(iVar1 + 4));
      return;
    }
    puVar2 = (undefined4 *)(*(undefined4 **)(iVar1 + 4));
    *(undefined4*)puVar2[1] = (undefined4)((undefined4)(0));
    puVar2 = (undefined4 *)((undefined4 *)*puVar2);
    while ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)((undefined4 *)*puVar2);
      thunk_FUN_1148a50e(puVar2,0xc);
      puVar2 = (undefined4 *)(puVar3);
    }
    *(undefined4 *)*(undefined4*)(iVar1 + 4) = (undefined4)(*(undefined4 *)(iVar1 + 4));
    *(int*)(*(int *)(iVar1 + 4) + 4) = (int)(*(int *)(iVar1 + 4));
    *(undefined4*)(iVar1 + 8) = (undefined4)(0);
    piStack_4 = (int *)(*(int **)(iVar1 + 4));
    thunk_FUN_1030e760(*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10),&piStack_4);
  }
  return;
}


// Reference entry 10310860; body size 20 bytes.
#line 1 "ENTRY_10310860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10310860(int param_1)

{
  if (*(int *)(param_1 + 8) != 0x35e50d7) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 10310880; body size 20 bytes.
#line 1 "ENTRY_10310880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10310880(int param_1)

{
  if (*(int *)(param_1 + 8) != 0x15555555) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 103108a0; body size 20 bytes.
#line 1 "ENTRY_103108a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103108a0(int param_1)

{
  if (*(int *)(param_1 + 8) != 0x15555555) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 103108c0; body size 66 bytes.
#line 1 "ENTRY_103108c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103108c0(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) +
                 (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (bool)(*param_1 <= fVar1 && fVar1 != *param_1);
}


// Reference entry 10310920; body size 66 bytes.
#line 1 "ENTRY_10310920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10310920(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) +
                 (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (bool)(*param_1 <= fVar1 && fVar1 != *param_1);
}


// Reference entry 10310980; body size 66 bytes.
#line 1 "ENTRY_10310980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10310980(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) +
                 (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (bool)(*param_1 <= fVar1 && fVar1 != *param_1);
}


// Reference entry 10310ce0; body size 54 bytes.
#line 1 "ENTRY_10310ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10310ce0(int *param_2,int param_3)
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


// Reference entry 10310d30; body size 54 bytes.
#line 1 "ENTRY_10310d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10310d30(int *param_2,int param_3)
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


// Reference entry 10310d80; body size 54 bytes.
#line 1 "ENTRY_10310d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10310d80(int *param_2,int param_3)
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


// Reference entry 10311510; body size 92 bytes.
#line 1 "ENTRY_10311510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10311510(uint param_2,int param_3,int *param_4)
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


// Reference entry 10311590; body size 92 bytes.
#line 1 "ENTRY_10311590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10311590(uint param_2,int param_3,int *param_4)
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


// Reference entry 10311610; body size 92 bytes.
#line 1 "ENTRY_10311610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10311610(uint param_2,int param_3,int *param_4)
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


// Reference entry 10311e60; body size 145 bytes.
#line 1 "ENTRY_10311e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10311e60(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((int *)(*(int *)(param_1 + 0xc) +
                  (*(uint *)(param_1 + 0x18) &
                  ((((*(byte *)(param_2 + 2) ^ 0x811c9dc5) * 0x1000193 ^
                    (uint)*(byte *)((int)param_2 + 9)) * 0x1000193 ^
                   (uint)*(byte *)((int)param_2 + 10)) * 0x1000193 ^
                  (uint)*(byte *)((int)param_2 + 0xb)) * 0x1000193) * 8));
  if ((int *)(int *)(piVar1[1]) != (int *)(param_2)) {
    if ((int *)(int *)(*piVar1) == (int *)((param_2))) {
      *piVar1 = (int)(*param_2);
    }
    thunk_FUN_10312640(param_2);
    return;
  }
  if ((int *)(int *)(*piVar1) == (int *)((param_2))) {
    iVar2 = (int)(*(int *)(param_1 + 4));
    *piVar1 = (int)(iVar2);
    piVar1[1] = (int)(iVar2);
    thunk_FUN_10312640(param_2);
    return;
  }
  piVar1[1] = (int)(param_2[1]);
  thunk_FUN_10312640(param_2);
  return;
}


// Reference entry 103126b0; body size 43 bytes.
#line 1 "ENTRY_103126b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103126b0(int param_1,int param_2,int param_3)

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


// Reference entry 103126f0; body size 43 bytes.
#line 1 "ENTRY_103126f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103126f0(int param_1,int param_2,int param_3)

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


// Reference entry 10312730; body size 43 bytes.
#line 1 "ENTRY_10312730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10312730(int param_1,int param_2,int param_3)

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


// Reference entry 10312770; body size 90 bytes.
#line 1 "ENTRY_10312770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10312770(uint param_1)

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


// Reference entry 103127f0; body size 90 bytes.
#line 1 "ENTRY_103127f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_103127f0(uint param_1)

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


// Reference entry 10312870; body size 87 bytes.
#line 1 "ENTRY_10312870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10312870(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x35e50d8) {
    param_1 = (uint)(param_1 * 0x4c);
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


// Reference entry 103128e0; body size 87 bytes.
#line 1 "ENTRY_103128e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_103128e0(uint param_1)

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


// Reference entry 10312950; body size 87 bytes.
#line 1 "ENTRY_10312950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10312950(uint param_1)

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


// Reference entry 103129c0; body size 87 bytes.
#line 1 "ENTRY_103129c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_103129c0(uint param_1)

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


// Reference entry 10312a60; body size 68 bytes.
#line 1 "ENTRY_10312a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10312a60(byte *param_2)
{
  int param_1 = (int )this;
  return (uint)(*(uint *)(param_1 + 0x18) &
         ((((*param_2 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_2[1]) * 0x1000193 ^ (uint)param_2[2])
          * 0x1000193 ^ (uint)param_2[3]) * 0x1000193);
}


// Reference entry 10312ac0; body size 68 bytes.
#line 1 "ENTRY_10312ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10312ac0(byte *param_2)
{
  int param_1 = (int )this;
  return (uint)(*(uint *)(param_1 + 0x18) &
         ((((*param_2 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_2[1]) * 0x1000193 ^ (uint)param_2[2])
          * 0x1000193 ^ (uint)param_2[3]) * 0x1000193);
}


// Reference entry 10312b20; body size 68 bytes.
#line 1 "ENTRY_10312b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10312b20(byte *param_2)
{
  int param_1 = (int )this;
  return (uint)(*(uint *)(param_1 + 0x18) &
         ((((*param_2 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_2[1]) * 0x1000193 ^ (uint)param_2[2])
          * 0x1000193 ^ (uint)param_2[3]) * 0x1000193);
}


// Reference entry 10312bb0; body size 60 bytes.
#line 1 "ENTRY_10312bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10312bb0(void)

{
  int iVar1;
  
  iVar1 = (int)(DAT_121a1028);
  DAT_121a1028 = (int)(0);
  if (iVar1 != 0) {
    thunk_FUN_112a7f20(iVar1);
    thunk_FUN_112a7c30(iVar1 + 8);
    thunk_FUN_1030f6e0();
    thunk_FUN_1148a50e(iVar1,0x50);
  }
  return;
}


// Reference entry 10312c00; body size 94 bytes.
#line 1 "ENTRY_10312c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10312c00(int param_1)

{
  int *piVar1;
  int iStack_4;
  
  if (*(uint *)(param_1 + 8) != 0) {
    piVar1 = (int *)((int *)(param_1 + 4));
    iStack_4 = (int)(param_1);
    if (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 0x1c) >> 3) {
      func_0x1005e6ce(*(undefined4 *)*piVar1,(undefined4 *)*piVar1);
      return;
    }
    thunk_FUN_1030d760(piVar1,*piVar1);
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
    iStack_4 = (int)(*piVar1);
    thunk_FUN_1030e7e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&iStack_4);
  }
  return;
}


// Reference entry 10312c80; body size 123 bytes.
#line 1 "ENTRY_10312c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10312c80(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iStack_4;
  
  if (*(uint *)(param_1 + 8) != 0) {
    iStack_4 = (int)(param_1);
    if (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 0x1c) >> 3) {
      func_0x10001cda(**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
      return;
    }
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
    *(undefined4*)puVar1[1] = (undefined4)((undefined4)(0));
    puVar1 = (undefined4 *)((undefined4 *)*puVar1);
    while ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)((undefined4 *)*puVar1);
      thunk_FUN_1148a50e(puVar1,0xc);
      puVar1 = (undefined4 *)(puVar2);
    }
    *(undefined4 *)*(undefined4*)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_1 + 4));
    *(int*)(*(int *)(param_1 + 4) + 4) = (int)(*(int *)(param_1 + 4));
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
    iStack_4 = (int)(*(int *)(param_1 + 4));
    thunk_FUN_1030e6e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&iStack_4);
  }
  return;
}


// Reference entry 10312d20; body size 123 bytes.
#line 1 "ENTRY_10312d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10312d20(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iStack_4;
  
  if (*(uint *)(param_1 + 8) != 0) {
    iStack_4 = (int)(param_1);
    if (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 0x1c) >> 3) {
      func_0x10011310(**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
      return;
    }
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
    *(undefined4*)puVar1[1] = (undefined4)((undefined4)(0));
    puVar1 = (undefined4 *)((undefined4 *)*puVar1);
    while ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)((undefined4 *)*puVar1);
      thunk_FUN_1148a50e(puVar1,0xc);
      puVar1 = (undefined4 *)(puVar2);
    }
    *(undefined4 *)*(undefined4*)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_1 + 4));
    *(int*)(*(int *)(param_1 + 4) + 4) = (int)(*(int *)(param_1 + 4));
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
    iStack_4 = (int)(*(int *)(param_1 + 4));
    thunk_FUN_1030e760(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&iStack_4);
  }
  return;
}


// Reference entry 10312e90; body size 57 bytes.
#line 1 "ENTRY_10312e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10312e90(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0xc);
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


// Reference entry 10312ee0; body size 57 bytes.
#line 1 "ENTRY_10312ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10312ee0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0xc);
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


// Reference entry 10312f30; body size 52 bytes.
#line 1 "ENTRY_10312f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10312f30(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x4c);
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


// Reference entry 10312f80; body size 60 bytes.
#line 1 "ENTRY_10312f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10312f80(int param_1,int param_2)

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


// Reference entry 10312fd0; body size 60 bytes.
#line 1 "ENTRY_10312fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10312fd0(int param_1,int param_2)

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


// Reference entry 10313020; body size 55 bytes.
#line 1 "ENTRY_10313020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10313020(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x4c);
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


// Reference entry 10313070; body size 61 bytes.
#line 1 "ENTRY_10313070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10313070(int param_1,int param_2)

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


// Reference entry 103130c0; body size 61 bytes.
#line 1 "ENTRY_103130c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103130c0(int param_1,int param_2)

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


// Reference entry 10313110; body size 61 bytes.
#line 1 "ENTRY_10313110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10313110(int param_1,int param_2)

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


// Reference entry 103136e0; body size 20 bytes.
#line 1 "ENTRY_103136e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_103136e0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1030e0d0(param_1,param_2);
  return (undefined4)(param_1);
}


// Reference entry 10313700; body size 20 bytes.
#line 1 "ENTRY_10313700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10313700(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1030e350(param_1,param_2);
  return (undefined4)(param_1);
}


// Reference entry 10314240; body size 34 bytes.
#line 1 "ENTRY_10314240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint * __thiscall Recovered_Bulk::FUN_10314240(int *param_2)
{
  uint *param_1 = (uint *)this;
  int iVar1;
  
  *param_1 = (uint)(0);
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  *param_1 = (uint)(-(uint)(iVar1 != 0) & iVar1 + 0xcU);
  return (uint *)(param_1);
}


// Reference entry 103150f0; body size 40 bytes.
#line 1 "ENTRY_103150f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103150f0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10315630; body size 27 bytes.
#line 1 "ENTRY_10315630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10315630(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10315660; body size 27 bytes.
#line 1 "ENTRY_10315660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10315660(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10315690; body size 27 bytes.
#line 1 "ENTRY_10315690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10315690(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 103156c0; body size 27 bytes.
#line 1 "ENTRY_103156c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103156c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 103156f0; body size 27 bytes.
#line 1 "ENTRY_103156f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103156f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10315720; body size 27 bytes.
#line 1 "ENTRY_10315720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10315720(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10315750; body size 27 bytes.
#line 1 "ENTRY_10315750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10315750(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10316240; body size 42 bytes.
#line 1 "ENTRY_10316240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10316240(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWrapperObj);
  return (undefined4 *)(param_1);
}


// Reference entry 103162f0; body size 49 bytes.
#line 1 "ENTRY_103162f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103162f0(undefined4 *param_2)
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


// Reference entry 10316390; body size 49 bytes.
#line 1 "ENTRY_10316390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10316390(undefined4 *param_2)
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


// Reference entry 103163f0; body size 28 bytes.
#line 1 "ENTRY_103163f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103163f0(int param_1)

{
  thunk_FUN_1127a020();
  *(undefined4*)(param_1 + 0x508) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10316420; body size 58 bytes.
#line 1 "ENTRY_10316420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10316420(undefined4 param_2,undefined4 param_3,undefined1 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11131cc0(param_2,2,0);
  param_1[9] = (undefined4)(param_3);
  *(undefined1*)(param_1 + 10) = (undefined1)(param_4);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RStereoPairZPCandidateEnumerator);
  *(undefined2*)(param_1 + 8) = (undefined2)(0);
  *(undefined1*)((int)param_1 + 0x22) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10316470; body size 127 bytes.
#line 1 "ENTRY_10316470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10316470(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:AVTransport:1","Pause",uVar3,param_3,
                     param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTPauseAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTPauseAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTPauseAIOOp);
  return (undefined4 *)(param_1);
}


// Reference entry 10316510; body size 127 bytes.
#line 1 "ENTRY_10316510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10316510(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:AVTransport:1",&DAT_118939bc,uVar3,param_3,
                     param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTStopAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTStopAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTStopAIOOp);
  return (undefined4 *)(param_1);
}


// Reference entry 103165b0; body size 141 bytes.
#line 1 "ENTRY_103165b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103165b0(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:ConnectionManager:1","GetProtocolInfo",
                     uVar3,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCMGetProtocolInfoAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpCMGetProtocolInfoAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpCMGetProtocolInfoAIOOp);
  *(undefined1*)(param_1 + 0x35f4) = (undefined1)(0);
  *(undefined1*)(param_1 + 0x36f4) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10316660; body size 134 bytes.
#line 1 "ENTRY_10316660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10316660(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:DeviceProperties:1","GetButtonLockState",
                     uVar3,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetButtonLockStateAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetButtonLockStateAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetButtonLockStateAIOOp);
  *(undefined1*)(param_1 + 0x35f4) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10316710; body size 134 bytes.
#line 1 "ENTRY_10316710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10316710(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:DeviceProperties:1","GetLEDState",uVar3,
                     param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetLEDStateAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetLEDStateAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetLEDStateAIOOp);
  *(undefined1*)(param_1 + 0x35f4) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10316860; body size 127 bytes.
#line 1 "ENTRY_10316860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10316860(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:DeviceProperties:1","SetButtonLockState",
                     uVar3,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetButtonLockStateAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetButtonLockStateAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetButtonLockStateAIOOp);
  return (undefined4 *)(param_1);
}


// Reference entry 10316900; body size 127 bytes.
#line 1 "ENTRY_10316900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10316900(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:DeviceProperties:1","SetLEDState",uVar3,
                     param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetLEDStateAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetLEDStateAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetLEDStateAIOOp);
  return (undefined4 *)(param_1);
}


// Reference entry 103169a0; body size 127 bytes.
#line 1 "ENTRY_103169a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103169a0(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:DeviceProperties:1","SetZoneAttributes",
                     uVar3,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetZoneAttributesAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetZoneAttributesAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetZoneAttributesAIOOp);
  return (undefined4 *)(param_1);
}


// Reference entry 103177f0; body size 11 bytes.
#line 1 "ENTRY_103177f0"

/* WARNING: Removing unreachable block_103177f0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103177f0(undefined4 *param_1)

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


// Reference entry 10317800; body size 11 bytes.
#line 1 "ENTRY_10317800"

/* WARNING: Removing unreachable block_10317800 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10317800(undefined4 *param_1)

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


// Reference entry 10317810; body size 11 bytes.
#line 1 "ENTRY_10317810"

/* WARNING: Removing unreachable block_10317810 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10317810(undefined4 *param_1)

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


// Reference entry 10317820; body size 11 bytes.
#line 1 "ENTRY_10317820"

/* WARNING: Removing unreachable block_10317820 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10317820(undefined4 *param_1)

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


// Reference entry 10318910; body size 28 bytes.
#line 1 "ENTRY_10318910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10318910(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTPauseAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTPauseAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTPauseAIOOp);
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


// Reference entry 10318940; body size 28 bytes.
#line 1 "ENTRY_10318940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10318940(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTStopAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTStopAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTStopAIOOp);
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


// Reference entry 10318970; body size 28 bytes.
#line 1 "ENTRY_10318970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10318970(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCMGetProtocolInfoAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpCMGetProtocolInfoAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpCMGetProtocolInfoAIOOp);
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


// Reference entry 103189a0; body size 28 bytes.
#line 1 "ENTRY_103189a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103189a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetButtonLockStateAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetButtonLockStateAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetButtonLockStateAIOOp);
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


// Reference entry 103189d0; body size 28 bytes.
#line 1 "ENTRY_103189d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103189d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetLEDStateAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetLEDStateAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetLEDStateAIOOp);
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


// Reference entry 10318a00; body size 28 bytes.
#line 1 "ENTRY_10318a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10318a00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPRemoveBondedZonesAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPRemoveBondedZonesAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPRemoveBondedZonesAIOOp);
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


// Reference entry 10318a30; body size 28 bytes.
#line 1 "ENTRY_10318a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10318a30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetButtonLockStateAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetButtonLockStateAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetButtonLockStateAIOOp);
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


// Reference entry 10318a60; body size 28 bytes.
#line 1 "ENTRY_10318a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10318a60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetLEDStateAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetLEDStateAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetLEDStateAIOOp);
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


// Reference entry 10318a90; body size 28 bytes.
#line 1 "ENTRY_10318a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10318a90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetZoneAttributesAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetZoneAttributesAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetZoneAttributesAIOOp);
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


// Reference entry 10318e50; body size 18 bytes.
#line 1 "ENTRY_10318e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10318e50(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpConnectionManagerGetProtocolInfo);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpConnectionManagerGetProtocolInfo);


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


// Reference entry 10318e70; body size 18 bytes.
#line 1 "ENTRY_10318e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10318e70(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpDevicePropertiesGetButtonLockState);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpDevicePropertiesGetButtonLockState);


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


// Reference entry 10318e90; body size 18 bytes.
#line 1 "ENTRY_10318e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10318e90(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpDevicePropertiesGetLEDState);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpDevicePropertiesGetLEDState);


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


// Reference entry 10318eb0; body size 18 bytes.
#line 1 "ENTRY_10318eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10318eb0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpDevicePropertiesSetButtonLockState);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpDevicePropertiesSetButtonLockState);


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


// Reference entry 10318ed0; body size 18 bytes.
#line 1 "ENTRY_10318ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10318ed0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpDevicePropertiesSetLEDState);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpDevicePropertiesSetLEDState);


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


// Reference entry 103190c0; body size 16 bytes.
#line 1 "ENTRY_103190c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103190c0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  *param_2 = (int)(iVar1);
  *param_1 = (int)(iVar1 + 8);
  return;
}


// Reference entry 10319cf0; body size 49 bytes.
#line 1 "ENTRY_10319cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10319cf0(uint param_2)
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


// Reference entry 1031b140; body size 14 bytes.
#line 1 "ENTRY_1031b140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1031b140(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar1 = (int)(*(int *)(param_1 + 8));
  if (iVar1 == 0) {
    return (undefined4)(0);
  }
  if (*(int *)(iVar1 + 0x1c) == 0) {
    return (undefined4)(0);
  }
  iVar3 = (int)(thunk_FUN_11458e90());
  if (iVar3 != 7) {
    if ((*(int *)(iVar1 + 0x1c) != 0) && (cVar2 = FUN_10091f7e(), cVar2 != '\0')) {
      return (undefined4)(0);
    }
    cVar2 = (char)(thunk_FUN_11458800());
    if (cVar2 == '\0') {
      return (undefined4)(0);
    }
  }
  return (undefined4)(1);
}


// Reference entry 1031c8a0; body size 893 bytes.
#line 1 "ENTRY_1031c8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1031c8a0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
 try {
  SCStr *this_;
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  SCStr aSStack_100 [4];
  int *piStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  SCStr *pSStack_e8;
  undefined1 auStack_e4 [4];
  int iStack_e0;
  int iStack_dc;
  char cStack_d5;
  void *pvStack_d4;
  undefined1 *puStack_d0;
  int iStack_cc;
  char acStack_c8 [128];
  char acStack_48 [64];
  uint uStack_8;
  
  iStack_cc = (int)(0xffffffff);

  uStack_8 = (uint)(DAT_12126b84 ^ (uint)acStack_c8);

  uVar8 = (uint)(0);

  pSStack_e8 = (SCStr *)(param_3);
  puVar3 = (undefined4 *)(param_2);
  piStack_fc = (int *)(param_1);
  if (param_1[2] != 0) {
    thunk_FUN_110828b0(uStack_8);
    puVar2 = (undefined4 *)(param_2);
    if ((*(int *)(param_1[2] + 0x1c) == 0) ||
       (cVar1 = thunk_FUN_11457240(), puVar2 = param_2, cVar1 == '\0')) {
      cVar1 = (char)(func_0x10009b7e());
      if (cVar1 == '\0') {
        cVar1 = (char)(func_0x1003eec8());
        if (cVar1 == '\0') {
          thunk_FUN_11082f10(&iStack_dc,auStack_e4);
        }
        else {
          func_0x1008a4d1();
        }
      }
      else {
        func_0x1003b7a5(&iStack_dc,auStack_e4);
      }
    }
    else {
      iVar6 = (int)(thunk_FUN_110d9b30());
      if (iVar6 == 0xb) {
        func_0x10062418();
        puVar2 = (undefined4 *)(param_2);
      }
      else {
        thunk_FUN_11082ef0(&iStack_dc,auStack_e4);
        puVar2 = (undefined4 *)(param_2);
      }
    }
    uVar4 = (undefined4)(thunk_FUN_1109aba0(*(undefined4 *)(iStack_dc + 8),&DAT_1186d2ee));
    thunk_FUN_1145c720(acStack_48,0x40,&DAT_1188bc94,uVar4);
    thunk_FUN_1145c720(acStack_c8,0x80,"x-rincon-roomicon:%s",*(undefined4 *)(iStack_dc + 0xc));
    iVar6 = (int)(thunk_FUN_11093c70(acStack_48));
    iStack_e0 = (int)(2);
    do {
      if (iVar6 == 0) {
LAB_1031ca82:
        cStack_d5 = (char)('\0');
      }
      else {
        uVar4 = (undefined4)((**(code **)(*piStack_fc + 0x14))(&uStack_f8));
        uVar8 = (uint)(2);
        iStack_cc = (int)(2);

        puVar7 = (undefined1 *)(&DAT_1186d2ee);
        if (*(undefined1 **)(iVar6 + 0x5c) != (undefined1 *)(0x0)) {
          puVar7 = (undefined1 *)(*(undefined1 **)(iVar6 + 0x5c));
        }
        cVar1 = (char)(thunk_FUN_101a2c70(puVar7,uVar4));
        cStack_d5 = (char)('\x01');
        if (cVar1 != '\0') goto LAB_1031ca82;
      }
      if (uVar8 != 0) {
        uVar8 = (uint)(0);

        iStack_cc = (int)(3);
        ((SCStr *)((SCStr *)&uStack_f8))->int_release();

      }
      iStack_cc = (int)(0xffffffff);
      if (cStack_d5 == '\0') goto LAB_1031cafe;
      uVar4 = (undefined4)(thunk_FUN_1109aba0(*(undefined4 *)(iStack_dc + 8),&DAT_1186d2ee,iStack_e0));
      thunk_FUN_1145c720(acStack_48,0x40,&DAT_1188feb0,uVar4);
      iVar6 = (int)(thunk_FUN_11093c70(acStack_48));
      iStack_e0 = (int)(iStack_e0 + 1);
    } while( true );
  }
  puVar2 = (undefined4 *)(operator_new(0x48));
  iStack_cc = (int)(0);
  if ((undefined4 *)(puVar2) == (undefined4 *)0x0) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    puVar3 = (undefined4 *)(operator_new(0x6c));
    *(unsigned char *)((char *)&iStack_cc + 0) = 1;
    if ((undefined4 *)(puVar3) == (undefined4 *)0x0) {
      iStack_cc = (int)((uint)*(unsigned short *)((char *)&iStack_cc + 1) << 8);
      piVar5 = (int *)((int *)thunk_FUN_101b94f0(0));
    }
    else {
      uVar4 = (undefined4)(thunk_FUN_111c06e0(0));
      iStack_cc = (int)((uint)*(unsigned short *)((char *)&iStack_cc + 1) << 8);
      piVar5 = (int *)((int *)thunk_FUN_101b94f0(uVar4));
    }
  }
  iStack_cc = (int)(0xffffffff);
  *param_2 = (undefined4)(piVar5);
  if ((int *)(piVar5) != (int *)0x0) {
    (**(code **)(*piVar5 + 4))();
  }
LAB_1031cbf8:

  thunk_FUN_1148ac28(puVar2,puVar3);
  return;
LAB_1031cafe:
  ((SCStr *)(aSStack_100))->int_allocRep(acStack_48);
  iStack_cc = (int)(4);
  ((SCStr *)((SCStr *)&uStack_f4))->int_allocRep(acStack_c8);
  this_ = (SCStr *)(pSStack_e8);
  *(unsigned char *)((char *)&iStack_cc + 0) = 5;
  if ((SCStr *)(pSStack_e8) != (SCStr *)0x0) {
    ((SCStr *)((SCStr *)&uStack_ec))->int_allocRep(acStack_48);
    *(unsigned char *)((char *)&iStack_cc + 0) = 6;
    if ((SCStr *)(SCStr *)((&uStack_ec)) != (SCStr *)(this_)) {
      ((SCStr *)(this_))->int_release();
      *(undefined4*)this_ = (undefined4)((SCStr *)(uStack_ec));
      ((SCStr *)(this_))->int_addref();
    }
    *(unsigned char *)((char *)&iStack_cc + 0) = 7;
    ((SCStr *)((SCStr *)&uStack_ec))->int_release();
  }
  iStack_cc = (int)(((uint)(*(unsigned short *)((char *)&iStack_cc + 1)) << 8 | (uint)(8)));
  ((SCStr *)((SCStr *)&pSStack_e8))->int_allocRep("");
  iStack_cc = (int)(9);
  ((SCStr *)((SCStr *)&iStack_e0))->int_allocRep("");
  *(unsigned char *)((char *)&iStack_cc + 0) = 10;
  thunk_FUN_103265e0(puVar3,aSStack_100,&uStack_f4,&iStack_e0,&pSStack_e8);
  uStack_f0 = (uint)(uVar8 | 4);
  iStack_cc = (int)(((uint)(*(unsigned short *)((char *)&iStack_cc + 1)) << 8 | (uint)(0xb)));
  ((SCStr *)((SCStr *)&iStack_e0))->int_release();
  iStack_e0 = (int)(0);
  iStack_cc = (int)(0xc);
  ((SCStr *)((SCStr *)&pSStack_e8))->int_release();
  iStack_cc = (int)(0xd);
  ((SCStr *)((SCStr *)&uStack_f4))->int_release();

  iStack_cc = (int)(0xe);
  ((SCStr *)(aSStack_100))->int_release();
  goto LAB_1031cbf8;

 } catch (...) { }
}


// Reference entry 1031e6b0; body size 26 bytes.
#line 1 "ENTRY_1031e6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1031e6b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)((undefined4 *)(param_1 + 0x564));
  for (iVar1 = (int)(0x143); iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = (undefined4)(*puVar2);
    puVar2 = (undefined4 *)(puVar2 + 1);
    param_2 = (undefined4 *)(param_2 + 1);
  }
  return;
}


// Reference entry 1031f6c0; body size 15 bytes.
#line 1 "ENTRY_1031f6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1031f6c0(undefined4 param_1)

{
  FUN_1031f610(param_1);
  return;
}


// Reference entry 1031f6e0; body size 59 bytes.
#line 1 "ENTRY_1031f6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1031f6e0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 8) == 0) {
    return (undefined4)(10);
  }
  uVar2 = (undefined4)(0xffffffff);
  if (*(char *)(*(int *)(param_1 + 8) + 0xa70) == '\0') {
    cVar1 = (char)(FUN_1005a7b3());
    if (cVar1 == '\0') goto LAB_1031f70f;
  }
  uVar2 = (undefined4)(func_0x100243f7());
LAB_1031f70f:
  uVar2 = (undefined4)(FUN_1031f610(uVar2));
  return (undefined4)(uVar2);
}


// Reference entry 1031f980; body size 21 bytes.
#line 1 "ENTRY_1031f980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1031f980(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x468));
  }
  return (undefined4)(0);
}


// Reference entry 1031fd70; body size 26 bytes.
#line 1 "ENTRY_1031fd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1031fd70(undefined4 *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)((undefined4 *)(param_1 + 0x564));
  for (iVar1 = (int)(0x143); iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = (undefined4)(*puVar2);
    puVar2 = (undefined4 *)(puVar2 + 1);
    param_2 = (undefined4 *)(param_2 + 1);
  }
  return;
}


// Reference entry 103206a0; body size 28 bytes.
#line 1 "ENTRY_103206a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103206a0(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    switch(*(undefined4 *)(*(int *)(param_1 + 8) + 0x54c)) {
    case 0:
      return (undefined4)(1);
    case 1:
      return (undefined4)(5);
    case 2:
      return (undefined4)(6);
    case 3:
      return (undefined4)(3);
    case 4:
      return (undefined4)(4);
    case 5:
      return (undefined4)(2);
    case 8:
      return (undefined4)(7);
    case 9:
      return (undefined4)(8);
    case 10:
      return (undefined4)(9);
    case 0xc:
      return (undefined4)(10);
    case 0xd:
      return (undefined4)(0xb);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10320870; body size 13 bytes.
#line 1 "ENTRY_10320870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10320870(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 8));
  if (iVar1 == 0) {
    return (undefined4)(0);
  }
  return (undefined4)(((uint)((short)((uint)iVar1 >> 0x10)) << 16 | (uint)(*(undefined2 *)(iVar1 + 0x74))));
}


// Reference entry 10321850; body size 58 bytes.
#line 1 "ENTRY_10321850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10321850(SCStr *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  if ((*(int *)(param_1 + 8) != 0) && (iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x1c), iVar1 != 0))
  {
    ((SCStr *)(param_2))->int_allocRep((char *)(iVar1 + 0x5ad));
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 10321a40; body size 42 bytes.
#line 1 "ENTRY_10321a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10321a40(SCStr *param_2)
{
  int param_1 = (int )this;
  char *pcVar1;
  
  switch(*(undefined4 *)(param_1 + 0x50)) {
  case 0:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2675,&DAT_11882ff0));
    ((SCStr *)(param_2))->int_allocRep(pcVar1);
    return (SCStr *)(param_2);
  case 1:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2673,&DAT_11882ff0));
    ((SCStr *)(param_2))->int_allocRep(pcVar1);
    return (SCStr *)(param_2);
  case 2:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2672,&DAT_11882ff0));
    ((SCStr *)(param_2))->int_allocRep(pcVar1);
    return (SCStr *)(param_2);
  case 3:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2674,&DAT_11882ff0));
    ((SCStr *)(param_2))->int_allocRep(pcVar1);
    return (SCStr *)(param_2);
  default:
    ((SCStr *)(param_2))->int_allocRep("");
    return (SCStr *)(param_2);
  }
}


// Reference entry 10322d60; body size 13 bytes.
#line 1 "ENTRY_10322d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10322d60(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 8));
  if (iVar1 == 0) {
    return (undefined4)(0);
  }
  return (undefined4)(((uint)((short)((uint)iVar1 >> 0x10)) << 16 | (uint)(*(undefined2 *)(iVar1 + 0x70))));
}


// Reference entry 10325550; body size 18 bytes.
#line 1 "ENTRY_10325550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10325550(int param_1)

{
  undefined1 *puVar1;
  
  if (*(int **)(param_1 + 0x1c) != (int *)(0x0)) {
                    
                    
    puVar1 = (undefined1 *)((undefined1 *)(**(code **)(**(int **)(param_1 + 0x1c) + 0x1c))());
    return (undefined1 *)(puVar1);
  }
  return (undefined1 *)(&DAT_1186d2ee);
}


// Reference entry 10325df0; body size 15 bytes.
#line 1 "ENTRY_10325df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10325df0(void)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_110d9b30());
  thunk_FUN_1127cd20(uVar1);
  return;
}


// Reference entry 103272e0; body size 42 bytes.
#line 1 "ENTRY_103272e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_103272e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  byte bVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  undefined1 *puVar9;
  byte *unaff_EBX;
  uint uVar10;
  bool bVar11;
  
  iVar2 = (int)(*(int *)(param_1 + 8));
  if (iVar2 == 0) {
    return (undefined4)(0);
  }
  puVar9 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)(undefined1 *)(*param_2) != (undefined1 *)0x0) {
    puVar9 = (undefined1 *)((undefined1 *)*param_2);
  }
  cVar3 = (char)(thunk_FUN_111a0720(puVar9));
  if (cVar3 != '\0') {
    return (undefined4)(1);
  }
  iVar4 = (int)(thunk_FUN_110828b0());
  if (iVar4 != 0) {
    iVar5 = (int)((**(code **)(*(int *)(iVar4 + 0x1c) + 4))(puVar9,1));
    cVar3 = (char)(thunk_FUN_1127caf0());
    if ((((cVar3 != '\0') && (1 < *(uint *)(iVar2 + 0x568))) && (iVar5 != 0)) &&
       ((cVar3 = thunk_FUN_110d3140(), cVar3 != '\0' && (uVar10 = 0, *(int *)(iVar2 + 0x568) != 0)))
       ) {
      do {
        pbVar6 = (byte *)((byte *)thunk_FUN_1127a510(uVar10));
        if (((byte *)(pbVar6) != (byte *)0x0) &&
           (iVar5 = (**(code **)(*(int *)(iVar4 + 0x1c) + 4))(pbVar6,1), pbVar7 = unaff_EBX,
           iVar5 != 0)) {
          do {
            bVar1 = (byte)(*pbVar7);
            bVar11 = (bool)(bVar1 < *pbVar6);
            if (bVar1 != *pbVar6) {
LAB_110d33c5:
              uVar8 = (uint)(-(uint)bVar11 | 1);
              goto LAB_110d33ca;
            }
            if (bVar1 == 0) break;
            bVar1 = (byte)(pbVar7[1]);
            bVar11 = (bool)(bVar1 < pbVar6[1]);
            if ((byte *)((bVar1)) != (byte *)(pbVar6[1])) goto LAB_110d33c5;
            pbVar6 = (byte *)(pbVar6 + 2);
            pbVar7 = (byte *)(pbVar7 + 2);
          } while (bVar1 != 0);
          uVar8 = (uint)(0);
LAB_110d33ca:
          if (uVar8 == 0) {
            return (undefined4)(1);
          }
        }
        uVar10 = (uint)(uVar10 + 1);
      } while (uVar10 < *(uint *)(iVar2 + 0x568));
    }
  }
  return (undefined4)(0);
}


// Reference entry 10327390; body size 14 bytes.
#line 1 "ENTRY_10327390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10327390(int param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  iVar1 = (int)(*(int *)(param_1 + 8));
  if (iVar1 == 0) {
    return (undefined4)(0);
  }
  if (((*(int *)(iVar1 + 0x1c) != 0) && (cVar2 = FUN_10091f7e(), cVar2 == '\0')) &&
     (cVar2 = (**(code **)(*(int *)(*(int *)(iVar1 + 0x1c) + 0x378) + 8))(), cVar2 == '\0')) {
    thunk_FUN_1109f7f0();
    cVar2 = (char)(thunk_FUN_110a0140());
    if (cVar2 == '\0') {
      bVar3 = (bool)(*(int *)(iVar1 + 0x538) == 3);
    }
    else {
      bVar3 = (bool)(*(int *)(iVar1 + 0x538) == 5);
    }
    if (bVar3) {
      cVar2 = (char)(thunk_FUN_11456f80());
      if (((cVar2 == '\0') && (cVar2 = thunk_FUN_11458a30(), cVar2 == '\0')) &&
         (cVar2 = thunk_FUN_11457320(), cVar2 == '\0')) {
        return (undefined4)(0);
      }
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10327670; body size 65 bytes.
#line 1 "ENTRY_10327670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10327670(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  char *pcVar3;
  bool bVar4;
  
  pbVar2 = (byte *)(&DAT_1186d2ee);
  if (*(byte **)(param_1 + 0x78) != (byte *)(0x0)) {
    pbVar2 = (byte *)(*(byte **)(param_1 + 0x78));
  }
  pcVar3 = (char *)("airplay");
  while( true ) {
    bVar1 = (byte)(*pbVar2);
    bVar4 = (bool)(bVar1 < (byte)*pcVar3);
    if (bVar1 != *pcVar3) break;
    if (bVar1 == 0) {
      return (undefined4)(1);
    }
    bVar1 = (byte)(pbVar2[1]);
    bVar4 = (bool)(bVar1 < (byte)pcVar3[1]);
    if ((char *)((bVar1)) != (char *)(pcVar3[1])) break;
    pbVar2 = (byte *)(pbVar2 + 2);
    pcVar3 = (char *)(pcVar3 + 2);
    if (bVar1 == 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(((uint)((int3)(-(uint)bVar4 >> 8)) << 8 | (uint)((-(uint)bVar4 | 1) == 0)));
}


// Reference entry 10327740; body size 65 bytes.
#line 1 "ENTRY_10327740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10327740(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  char *pcVar3;
  bool bVar4;
  
  pbVar2 = (byte *)(&DAT_1186d2ee);
  if (*(byte **)(param_1 + 0x78) != (byte *)(0x0)) {
    pbVar2 = (byte *)(*(byte **)(param_1 + 0x78));
  }
  pcVar3 = (char *)("bluetooth");
  while( true ) {
    bVar1 = (byte)(*pbVar2);
    bVar4 = (bool)(bVar1 < (byte)*pcVar3);
    if (bVar1 != *pcVar3) break;
    if (bVar1 == 0) {
      return (undefined4)(1);
    }
    bVar1 = (byte)(pbVar2[1]);
    bVar4 = (bool)(bVar1 < (byte)pcVar3[1]);
    if ((char *)((bVar1)) != (char *)(pcVar3[1])) break;
    pbVar2 = (byte *)(pbVar2 + 2);
    pcVar3 = (char *)(pcVar3 + 2);
    if (bVar1 == 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(((uint)((int3)(-(uint)bVar4 >> 8)) << 8 | (uint)((-(uint)bVar4 | 1) == 0)));
}


// Reference entry 10327f60; body size 21 bytes.
#line 1 "ENTRY_10327f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_10327f60(int param_1)

{
  uint in_EAX;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    return (uint)(*(uint *)(*(int *)(param_1 + 0x1c) + 0x450) >> 0x16 & 0xffffff01);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10328620; body size 21 bytes.
#line 1 "ENTRY_10328620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_10328620(int param_1)

{
  uint in_EAX;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    return (uint)((uint)(((byte)*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x450) & 0xf) == 6));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 103286c0; body size 21 bytes.
#line 1 "ENTRY_103286c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_103286c0(int param_1)

{
  uint in_EAX;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    return (uint)(*(uint *)(*(int *)(param_1 + 0x1c) + 0x450) >> 0x14 & 0xffffff01);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10328f30; body size 83 bytes.
#line 1 "ENTRY_10328f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10328f30(SCStr *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    ((SCStr *)(param_2))->int_allocRep("");
    return (SCStr *)(param_2);
  }
  iVar1 = (int)(*(int *)(*(int *)(param_1 + 8) + 0x1c));
  if (iVar1 != 0) {
    ((SCStr *)(param_2))->int_allocRep((char *)(iVar1 + 0x62f));
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 10328fd0; body size 14 bytes.
#line 1 "ENTRY_10328fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10328fd0(int param_1)

{
 try {
  void *pvVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iStack_2c;
  int iStack_28;
  uint uStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  char cStack_11;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  iStack_1c = (int)(*(int *)(param_1 + 8));
  if (iStack_1c == 0) {
    return (int)(0);
  }


  iVar8 = (int)(0);
  cVar2 = (char)(thunk_FUN_1127caf0(DAT_12126b84 ));
  if (((cVar2 == '\0') || (*(uint *)(iStack_1c + 0x568) < 2)) ||
     (cVar2 = thunk_FUN_1127cb00(), cVar2 == '\0')) {
    iVar3 = (int)((**(code **)(**(int **)(iStack_1c + 0x20) + 0xc))(iStack_1c + 0x4fa));
    if (iVar3 != 0) {
      piVar4 = (int *)((int *)thunk_FUN_11138290());

      uVar5 = (uint)(piVar4[1] - *piVar4 >> 2);
      iVar3 = (int)(iVar8);
      if (uVar5 != 0) {
        do {
          iStack_20 = (int)(*(int *)(*piVar4 + uStack_24 * 4));
          uVar6 = (undefined4)(thunk_FUN_110d9820(&iStack_2c));


          thunk_FUN_110d9820(&iStack_28);


          cVar2 = (char)(thunk_FUN_111a06b0(uVar6));
          if ((cVar2 == '\0') || (*(int *)(iStack_20 + 0x1c) == 0)) {
LAB_110d6634:
            cStack_11 = (char)('\0');
          }
          else {
            cVar2 = (char)(FUN_10091f7e());
            cStack_11 = (char)('\x01');
            if (cVar2 == '\0') goto LAB_110d6634;
          }
          iVar8 = (int)(iStack_28);


          uVar6 = (undefined4)(1);
          if (((iStack_28 != 0) &&
              (pvVar1 = (void *)(iStack_28 + -0x10), uVar6 = uStack_18,
              *(int *)(iStack_28 + -0x10) < 0xffff)) &&
             (uStack_18 = 1, iVar7 = thunk_FUN_1123fcd0(pvVar1), uVar6 = uStack_18, iVar7 == 0)) {
            *(undefined4*)(iVar8 + -8) = (undefined4)(0);
            *(undefined4*)(iVar8 + -0xc) = (undefined4)(0);
            thunk_FUN_113cfb70(iVar8,*(undefined4 *)(iVar8 + -4));
            free(pvVar1);
            uVar6 = (undefined4)(uStack_18);
          }
          uStack_18 = (undefined4)(uVar6);
          iVar8 = (int)(iStack_2c);

          if (((iStack_2c != 0) &&
              (pvVar1 = (void *)(iStack_2c + -0x10), *(int *)(iStack_2c + -0x10) < 0xffff)) &&
             (iVar7 = thunk_FUN_1123fcd0(pvVar1), iVar7 == 0)) {
            *(undefined4*)(iVar8 + -8) = (undefined4)(0);
            *(undefined4*)(iVar8 + -0xc) = (undefined4)(0);
            thunk_FUN_113cfb70(iVar8,*(undefined4 *)(iVar8 + -4));
            free(pvVar1);
          }

          iVar8 = (int)(iVar3 + 1);
          if (cStack_11 == '\0') {
            iVar8 = (int)(iVar3);
          }
          uStack_24 = (uint)(uStack_24 + 1);
          iVar3 = (int)(iVar8);
        } while (uStack_24 < uVar5);
      }
    }
  }
  else {
    iVar3 = (int)(thunk_FUN_1127c6b0(1));
    if (iVar3 != -1) {
      iVar8 = (int)(thunk_FUN_1127c6b0(2));
      if ((-1 < iVar8) && (iVar3 != iVar8)) {

        return (int)(2);
      }

      return (int)(1);
    }
  }

  return (int)(iVar8);

 } catch (...) { }
}


// Reference entry 1032b630; body size 18 bytes.
#line 1 "ENTRY_1032b630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1032b630(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)((**(code **)(*param_1 + 0xcc))());
  thunk_FUN_11457fd0(uVar1);
  return;
}


// Reference entry 1032b6f0; body size 14 bytes.
#line 1 "ENTRY_1032b6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1032b6f0(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    return (undefined1)(0);
  }
  if (*(int *)(*(int *)(param_1 + 8) + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_11458a40());
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 1032b750; body size 57 bytes.
#line 1 "ENTRY_1032b750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_1032b750(int param_1)

{
  int iVar1;
  undefined4 in_EAX;
  uint3 uVar2;
  
  uVar2 = (uint3)((uint3)((uint)in_EAX >> 8));
  if (*(int *)(param_1 + 8) == 0) {
    return (uint)((uint)uVar2 << 8);
  }
  iVar1 = (int)(*(int *)(*(int *)(param_1 + 8) + 0x1c));
  if (iVar1 != 0) {
    return (uint)(*(uint *)(iVar1 + 0x44c) >> 3 & 0xffffff01);
  }
  return (uint)((uint)uVar2 << 8);
}


// Reference entry 1032bf60; body size 38 bytes.
#line 1 "ENTRY_1032bf60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_1032bf60(undefined4 param_2,SCStr *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 1032bf90; body size 32 bytes.
#line 1 "ENTRY_1032bf90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1032bf90(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1032ccb0; body size 106 bytes.
#line 1 "ENTRY_1032ccb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1032ccb0(int *param_2)
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


// Reference entry 1032ce40; body size 106 bytes.
#line 1 "ENTRY_1032ce40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1032ce40(int *param_2)
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


// Reference entry 1032cfd0; body size 106 bytes.
#line 1 "ENTRY_1032cfd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1032cfd0(int *param_2)
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


// Reference entry 1032d160; body size 106 bytes.
#line 1 "ENTRY_1032d160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1032d160(int *param_2)
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


// Reference entry 1032d2f0; body size 106 bytes.
#line 1 "ENTRY_1032d2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1032d2f0(int *param_2)
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


// Reference entry 1032dc80; body size 40 bytes.
#line 1 "ENTRY_1032dc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_1032dc80(undefined4 *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 1032dcc0; body size 34 bytes.
#line 1 "ENTRY_1032dcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1032dcc0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1032dd50; body size 62 bytes.
#line 1 "ENTRY_1032dd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1032dd50(undefined4 *param_2,int *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  int *piVar2;
  
  *param_1 = (undefined4)(*param_2);
  iVar1 = (int)(*param_3);
  param_1[1] = (undefined4)(iVar1);
  param_1[2] = (undefined4)(0);
  if (iVar1 != 0) {
    piVar2 = (int *)((int *)(**(code **)(*(int *)(iVar1 + 0x24) + 0xc))());
    param_1[2] = (undefined4)(piVar2);
    (**(code **)(*piVar2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1032dda0; body size 58 bytes.
#line 1 "ENTRY_1032dda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1032dda0(undefined4 *param_2,int *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(*param_2);
  param_3 = (int *)((int *)*param_3);
  param_1[1] = (undefined4)(param_3);
  param_1[2] = (undefined4)(0);
  if ((int *)(param_3) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_3 + 0xc))());
    param_1[2] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1032ddf0; body size 125 bytes.
#line 1 "ENTRY_1032ddf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1032ddf0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)(param_2 + 2);
  piVar3 = (int *)(param_1 + 2);
  *param_1 = (undefined4)(*param_2);
  if ((int *)((piVar3)) != (int *)(piVar1)) {
    piVar2 = (int *)((int *)param_1[0xb]);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 0x10))((int *)(piVar2) != (int *)(piVar3));
      param_1[0xb] = (undefined4)(0);
    }
    piVar2 = (int *)((int *)param_2[0xb]);
    if ((int *)(piVar2) != (int *)0x0) {
      if ((int *)((piVar2)) == (int *)(piVar1)) {
        uVar4 = (undefined4)((**(code **)(*piVar2 + 4))(piVar3));
        param_1[0xb] = (undefined4)(uVar4);
        piVar3 = (int *)((int *)param_2[0xb]);
        if ((int *)(piVar3) != (int *)0x0) {
          (**(code **)(*piVar3 + 0x10))((int *)((piVar3)) != (int *)(piVar1));
          param_2[0xb] = (undefined4)(0);
          return (undefined4 *)(param_1);
        }
      }
      else {
        param_1[0xb] = (undefined4)(piVar2);
        param_2[0xb] = (undefined4)(0);
      }
    }
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1032e3c0; body size 25 bytes.
#line 1 "ENTRY_1032e3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1032e3c0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 1032e3e0; body size 25 bytes.
#line 1 "ENTRY_1032e3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1032e3e0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 1032e400; body size 25 bytes.
#line 1 "ENTRY_1032e400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1032e400(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 1032e420; body size 38 bytes.
#line 1 "ENTRY_1032e420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1032e420(int param_1,undefined4 *param_2)

{
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2);
    return;
  }
                    
                    
                    
  std::_Xbad_function_call();
  return;
}


// Reference entry 1032e450; body size 38 bytes.
#line 1 "ENTRY_1032e450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1032e450(int param_1,undefined4 *param_2)

{
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2);
    return;
  }
                    
                    
                    
  std::_Xbad_function_call();
  return;
}


// Reference entry 1032e480; body size 38 bytes.
#line 1 "ENTRY_1032e480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1032e480(int param_1,undefined4 *param_2)

{
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2);
    return;
  }
                    
                    
                    
  std::_Xbad_function_call();
  return;
}


// Reference entry 1032e4b0; body size 38 bytes.
#line 1 "ENTRY_1032e4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1032e4b0(int param_1,undefined4 *param_2)

{
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2);
    return;
  }
                    
                    
                    
  std::_Xbad_function_call();
  return;
}


// Reference entry 1032e4e0; body size 38 bytes.
#line 1 "ENTRY_1032e4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1032e4e0(int param_1,undefined4 *param_2)

{
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2);
    return;
  }
                    
                    
                    
  std::_Xbad_function_call();
  return;
}


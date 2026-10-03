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
extern int FUN_10b90fe0(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern int int_allocRep(...);
extern int int_release(...);
extern int int_start(...);
extern __declspec(dllimport) int memchr(...);
extern __declspec(dllimport) int memmove(...);
extern int op_eq(...);
extern int op_lt(...);
extern int operator_new(...);
extern __declspec(dllimport) int strchr(...);
extern __declspec(dllimport) int strtoul(...);
extern int swi(...);
extern int thunk_FUN_10118c40(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_1012a4c0(...);
extern int thunk_FUN_1012cab0(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101c82e0(...);
extern int thunk_FUN_102cc870(...);
extern int thunk_FUN_103beae0(...);
extern int thunk_FUN_10475400(...);
extern int thunk_FUN_106a5620(...);
extern int thunk_FUN_10b8b660(...);
extern int thunk_FUN_10b8e250(...);
extern int thunk_FUN_10b8f4a0(...);
extern int thunk_FUN_10b90fe0(...);
extern int thunk_FUN_10b91160(...);
extern int thunk_FUN_10b913e0(...);
extern int thunk_FUN_10b95cf0(...);
extern int thunk_FUN_10b966e0(...);
extern int thunk_FUN_10b98980(...);
extern int thunk_FUN_10b98a00(...);
extern int thunk_FUN_10b98c90(...);
extern int thunk_FUN_10b98d60(...);
extern int thunk_FUN_10ba2c50(...);
extern int thunk_FUN_10ba5d90(...);
extern int thunk_FUN_10ba6fd0(...);
extern int thunk_FUN_10baa630(...);
extern int thunk_FUN_10baa650(...);
extern int thunk_FUN_10baa760(...);
extern int thunk_FUN_10bbdbd0(...);
extern int thunk_FUN_10bc3990(...);
extern int thunk_FUN_10bc9860(...);
extern int thunk_FUN_10bcd530(...);
extern int thunk_FUN_10bcd670(...);
extern int thunk_FUN_10bd4920(...);
extern int thunk_FUN_10bd5dc0(...);
extern int thunk_FUN_10bd7130(...);
extern int thunk_FUN_10bd9ba0(...);
extern int thunk_FUN_10f56a40(...);
extern int thunk_FUN_1106a8d0(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_110ce190(...);
extern int thunk_FUN_110d3ac0(...);
extern int thunk_FUN_110da8b0(...);
extern int thunk_FUN_111c05a0(...);
extern int thunk_FUN_111c0760(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_112407b0(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_11249110(...);
extern int thunk_FUN_1124a200(...);
extern int thunk_FUN_1124a3f0(...);
extern int thunk_FUN_1124d790(...);
extern int thunk_FUN_1124ef40(...);
extern int thunk_FUN_1124f060(...);
extern int thunk_FUN_1125acd0(...);
extern int thunk_FUN_1125b880(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int DAT_00004498;
extern int DAT_0000449c;
extern int DAT_1186d2ee;
extern int DAT_11880fb0;
extern int DAT_12126b84;
extern int DAT_122e8a30;
extern int g_lSCObjCount;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpImpl;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_RDeviceOpBase;
extern int ghidra_vftable_RDeviceOpRequest;
extern int ghidra_vftable_RHTTPDeleteReqHeadersBuilder;
extern int ghidra_vftable_RHttpBaseNoRedirectAIOOp;
extern int ghidra_vftable_RHttpDeleteNoRedirectAIOOp;
extern int ghidra_vftable_RHttpPutNoRedirectAIOOp;
extern int ghidra_vftable_RITQHandler;
extern int ghidra_vftable_RUpnpACDestroyAlarmAIOOp;
extern int ghidra_vftable_RUpnpAsyncIOOperation;
extern int ghidra_vftable_SCAbilityManager_Listener;
extern int ghidra_vftable_SCBTClassicConnectionCallback;
extern int ghidra_vftable_SCChirpManager;
extern int ghidra_vftable_SCEntitlementsManager;
extern int ghidra_vftable_SCEventSubscriptionImpl_EventSink;
extern int ghidra_vftable_SCGetAASessionCallback;
extern int ghidra_vftable_SCIAlarmManager;
extern int ghidra_vftable_SCIArtworkCache;
extern int ghidra_vftable_SCIArtworkCacheManager;
extern int ghidra_vftable_SCIArtworkData;
extern int ghidra_vftable_SCIBTClassicConnectionManager;
extern int ghidra_vftable_SCIChirpListener;
extern int ghidra_vftable_SCILogoArtworkCache;
extern int ghidra_vftable_SCINetworkManagement;
extern int ghidra_vftable_SCINfcListener;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCIOpDeviceDelete;
extern int ghidra_vftable_SCIOpDeviceGet;
extern int ghidra_vftable_SCIOpDevicePost;
extern int ghidra_vftable_SCIOpDevicePut;
extern int ghidra_vftable_SCIOwnedObjImpl;
extern int ghidra_vftable_SCITearOffObjImpl;
extern int ghidra_vftable_SCLegacyJoinExistingWizardButtonPressState;
extern int ghidra_vftable_SCLegacyJoinExistingWizardCompleteState;
extern int ghidra_vftable_SCLegacyJoinExistingWizardFirewallSubwizardState;
extern int ghidra_vftable_SCLegacyJoinExistingWizardInitState;
extern int ghidra_vftable_SCLegacyJoinExistingWizardIntroState;
extern int ghidra_vftable_SCLegacyJoinExistingWizardSetupNotAllowedState;
extern int ghidra_vftable_SCLegacyJoinExistingWizardState;
extern int ghidra_vftable_SCLegacyJoinExistingWizardSuccessState;
extern int ghidra_vftable_SCLegacyJoinExistingWizardTimeoutState;
extern int ghidra_vftable_SCLoggingHelper;
extern int ghidra_vftable_SCNetworkManagement;
extern int ghidra_vftable_SCNfcManager;
extern int ghidra_vftable_SCOpDeviceDelete;
extern int ghidra_vftable_SCOpDeviceGet;
extern int ghidra_vftable_SCOpDevicePut;
extern int ghidra_vftable_SCOpImpl;
extern int ghidra_vftable_SCOpRef;
extern int ghidra_vftable_SCSettingsReplicator;
extern int ghidra_vftable_SCSettingsReplicatorCustom;
extern int ghidra_vftable_SCSettingsReplicatorRoomName;
extern int ghidra_vftable_SCSettingsReplicatorSonosNetChannel;
extern int ghidra_vftable_SCSwfObjACListener;
extern int ghidra_vftable_SCSwfObjDDListener;
extern int ghidra_vftable_SCWizardState;
extern int ghidra_vftable_SCWizardStateFor;
extern int ghidra_vftable_SCWrapperHelper;
extern int ghidra_vftable_SCWrapperObj;
extern int ghidra_vftable_SvgExtractor;
extern int ghidra_vftable_SvgFileParser;
extern int ghidra_vftable_SvgFileParserCB;
extern int ghidra_vftable_SwfObjDeviceDiscovery_ProductListener;
extern int in_EAX;
extern undefined1 LAB_100537fb[];
extern undefined1 LAB_1008a49a[];
extern undefined1 LAB_10ba280f[];
extern undefined1 LAB_10ba282e[];
extern undefined1 LAB_114f5ce0[];
extern undefined1 LAB_116be800[];
extern undefined1 LAB_116be830[];
extern undefined1 LAB_116be890[];
extern undefined1 LAB_116c0150[];
extern undefined1 LAB_116c01e0[];
extern undefined1 LAB_116c1820[];
extern undefined1 LAB_116c31b0[];
extern int *stack0xfffffffc;
extern void *ExceptionList;
struct SCOpRefBase { char _pad; SCOpRefBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int int_start(A...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); template<class... A> int op_eq(A...); template<class... A> int op_lt(A...); };
typedef void *E9;
typedef void *LOCK;
typedef void *UNLOCK;
typedef void *WARNING;
struct AlarmClock { char _pad; AlarmClock(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DestroyAlarm { char _pad; DestroyAlarm(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Exit { char _pad; Exit(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCAlarmManager { char _pad; SCAlarmManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCChirpManager { char _pad; SCChirpManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIAlarmManager { char _pad; SCIAlarmManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIArtworkCache { char _pad; SCIArtworkCache(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIArtworkCacheManager { char _pad; SCIArtworkCacheManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIArtworkData { char _pad; SCIArtworkData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIBTClassicConnectionCallback { char _pad; SCIBTClassicConnectionCallback(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIBTClassicConnectionManager { char _pad; SCIBTClassicConnectionManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIBTClassicConnectionProvider { char _pad; SCIBTClassicConnectionProvider(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIBrowseService { char _pad; SCIBrowseService(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIChirpDelegate { char _pad; SCIChirpDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIChirpListener { char _pad; SCIChirpListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIHousehold { char _pad; SCIHousehold(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCILogoArtworkCache { char _pad; SCILogoArtworkCache(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINfcDelegate { char _pad; SCINfcDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINfcListener { char _pad; SCINfcListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIOpDeviceDelete { char _pad; SCIOpDeviceDelete(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIOpDeviceGet { char _pad; SCIOpDeviceGet(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIOpDevicePut { char _pad; SCIOpDevicePut(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIOpReplaceAccount { char _pad; SCIOpReplaceAccount(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIScrobblingService { char _pad; SCIScrobblingService(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCISimpleMessagingService { char _pad; SCISimpleMessagingService(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCNfcManager { char _pad; SCNfcManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Wizard { char _pad; Wizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered_Bulk { char _pad; /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b84c00(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b84c20(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b84c40(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b84c60(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b85400(undefined4 param_2,undefined4 param_3,void *param_4,size_t param_5,
            void *param_6,size_t param_7); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b86c80(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b86cb0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b86d00(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10b8b420(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10b8b5f0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10b8b890(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10b8e230(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10b8e470(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b8e4b0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b8e4c0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10b8e650(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10b8e740(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10b8ea10(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10b8eac0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10b8eaf0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10b8eb20(undefined4 param_2,int *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b8eb70(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b8ecb0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10b8ecf0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10b8ed40(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10b8ed60(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10b8ed80(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10b8edf0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10b8ee60(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10b8eed0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10b8efb0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b8fc30(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b8fd20(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b8fd30(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b8fd60(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b8fd70(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b8ff40(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b902f0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b90330(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b90810(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10b91c40(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10b91d30(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10b932a0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10b93390(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10b933b0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10b933c0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10b933d0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10b93530(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10b93780(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10b95490(undefined4 param_2,int *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b954e0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b95500(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b95520(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall FUN_10b95770(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b95790(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b957b0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall FUN_10b95810(undefined4 param_2,undefined4 param_3,undefined4 *param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10b95830(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b95880(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10b958b0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10b958d0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10b958f0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10b95930(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10b95950(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10b95970(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10b95b60(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10b95b80(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10b964f0(int *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10b96e10(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b96e90(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b96eb0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b97090(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b970b0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b970d0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b970f0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b97110(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b97130(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b97150(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b97160(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8 * __thiscall FUN_10b971d0(undefined8 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b971f0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b97200(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b97220(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b97e60(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b98340(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b98390(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10b983a0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10b99460(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10b994c0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10b996e0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10b997d0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10b997f0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10b99810(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10b99830(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10b99a80(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10b99aa0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10b9a930(int *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10b9a980(int *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10b9b370(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10b9b390(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10b9b530(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10b9b550(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10b9b570(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10b9b580(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10b9b590(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10b9b5a0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10b9b5b0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10b9b5c0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10b9b670(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10b9bcd0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10b9bcf0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10b9bd10(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10b9bd20(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10b9bd30(byte *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10b9bd90(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10b9c4b0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10b9c4c0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10b9c4d0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10b9c4e0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ba0ad0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ba0b00(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ba0b10(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ba0b20(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ba0b90(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ba1b20(undefined4 *param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ba1b40(undefined4 *param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ba1b60(undefined4 *param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ba1b80(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ba1bd0(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ba1c00(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ba1c20(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ba20a0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ba20c0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ba22e0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ba2330(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10ba2360(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10ba23e0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ba2400(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10ba2420(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10ba2440(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10ba2540(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10ba2620(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ba2780(int param_2,uint param_3,char param_4,char param_5); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ba2ac0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ba2c30(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ba2ee0(int *param_2,int *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ba2f80(int *param_2,int *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10ba33a0(int *param_2,int *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ba36c0(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ba4490(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ba5190(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ba51d0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ba51f0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ba52d0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ba52e0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ba52f0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ba5300(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ba5410(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ba5420(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ba5430(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ba5440(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ba5490(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ba5c00(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ba6050(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ba66e0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_10ba7810(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10ba7830(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10ba7850(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10ba7870(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10ba7890(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10ba78b0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10ba7b00(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ba8530(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10ba8560(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ba8890(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_10ba9ed0(byte *param_2,byte *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __thiscall FUN_10ba9f00(byte param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10baa060(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10baa080(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10baa0a0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10baa1e0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10baa1f0(uint param_2,char param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_10baa240(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10baa610(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10baa620(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10baa8b0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10baa8c0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10bab2f0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10bab3d0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10bab3e0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10baba00(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10baba90(char param_2,uint param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10babae0(byte *param_2,uint param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10bb3190(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10bb42d0(uint param_2,char param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10bb4360(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10bb4380(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bb47e0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bb49f0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bb52d0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bb52f0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bb54c0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bb55c0(int param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bb57d0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bb57f0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bb5810(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bb5830(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bb5850(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bb5870(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bb5890(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10bb6a40(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10bb6ac0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bbb5c0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bbb600(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bbb670(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10bbd8e0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10bbdbb0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10bbde20(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10bbe370(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10bbe550(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10bbed10(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10bbf070(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bbf440(undefined4 *param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bbf460(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bbf5f0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10bbf7d0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bc00e0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bc0180(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bc0190(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10bc0660(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10bc1650(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10bc36a0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10bc3970(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10bc3be0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10bc4210(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10bc4470(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10bc4d30(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10bc5650(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bc6320(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bc6360(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10bc7560(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10bc7580(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10bc75a0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10bc7600(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10bc7610(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10bc79c0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10bc97e0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10bc9840(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10bc9a80(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10bc9fb0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10bca010(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10bcb420(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcb680(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcb6a0(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcb860(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcb880(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcb8b0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcb8d0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcb8f0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcb910(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcb930(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcb950(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcb970(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcb990(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcc210(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcc250(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcc280(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcc2b0(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcc390(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcc3b0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcc3d0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcc3f0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcc410(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcc430(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcc450(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcc470(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcc490(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcc4d0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcc4e0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcc4f0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcc510(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcc560(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcc590(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcc5f0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcc620(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcc660(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcc690(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcc6d0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcc700(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcc730(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10bcc8a0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10bcc8e0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcc900(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcc910(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcc920(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10bcc930(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10bccbb0(void *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10bcd350(int *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10bcd3e0(int *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10bcdda0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10bcde50(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10bcdea0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10bcdec0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10bcdf70(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10bcfb30(int *param_2,int *param_3); };
using namespace std;
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b80320(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b80340(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b80360(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b80380(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b803a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b803b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b803c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ ulong __fastcall FUN_10b80440(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b818e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b81d50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b81d60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b81d70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b81d80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b825f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b82640(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b82650(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b82660(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b82670(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_10b82a80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b82ae0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10b82b00(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_10b82b90(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b82e30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b82e40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b82e50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b82e60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b84170(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b841a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b841d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b84200(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b84230(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b84260(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b84290(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b842c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b842f0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b84950(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b84960(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b84970(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b84c80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b84cb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b84ce0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b84d10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b85f90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b86d50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b86d60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b86d70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b86d80(undefined4 *param_1);
/* WARNING: Removing unreachable block (ram,0x101ba14a) */ void __fastcall FUN_10b879c0(undefined4 *param_1);
/* WARNING: Removing unreachable block_10b879d0 (ram,0x101ba14a) */ void __fastcall FUN_10b879d0(undefined4 *param_1);
/* WARNING: Removing unreachable block_10b879f0 (ram,0x101ba14a) */ void __fastcall FUN_10b879f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b88730(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b88750(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b88770(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b88780(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b88790(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b887a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b887b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b887d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b88810(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_10b88830(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_10b88840(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_10b88850(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_10b88860(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10b8b620(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10b8b640(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10b8b770(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10b8b8d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10b8b8e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10b8b8f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10b8b900(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b8ba50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b8ce00(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b8ce10(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b8ce20(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b8dab0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b8dae0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b8db10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b8db40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b8e1d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10b8e1f0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b8e220(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8e400(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8e410(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10b8e420(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8e450(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b8e460(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8e4a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b8e4d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b8e4f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b8e500(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b8e670(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b8e680(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10b8e690(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10b8e6a0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b8e7f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b8e800(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b8e810(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b8e820(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b8e830(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b8e840(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b8e850(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10b8e8d0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b8e900(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10b8e930(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10b8e9a0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b8ea20(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b8ea30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10b8ea40(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8ead0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8eae0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b8ec50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b8ec70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b8ec90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b8ecd0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b8ece0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10b8ef40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b8ef50(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b8ef60(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b8ef70(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b8ef80(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b8ef90(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b8efa0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b8f0a0(undefined4 param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b8f0e0(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b8f100(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8f120(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8f130(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8f3d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8f3e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8f3f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8f400(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8f410(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b8f420(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b8f470(undefined4 param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8f480(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8f520(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8f530(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8f540(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8f550(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8f560(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b8f570(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b8fd40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b8fd90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b8fdb0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b90820(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b910f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b91230(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b91240(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b916f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b91700(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b91b90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b91ba0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b91d80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b91d90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b91da0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b91db0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b91dc0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b91dd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b91de0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10b91df0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b92b00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b92c80(float *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b93050(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b93060(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b93070(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b93080(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b93090(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b930a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b93130(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b93140(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b931c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b93280(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b93290(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b933e0(int param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10b93440(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10b934c0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b93560(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b93570(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b93660(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10b936b0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10b93700(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b93750(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b93760(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b93770(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10b94e70(float *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b94e80(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b94e90(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b94ea0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b94eb0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b94ed0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b94ee0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b94ff0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b95020(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b95050(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b95080(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b950b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b950e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b95110(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b95140(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b95170(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b951a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b951d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b95200(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b952e0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b956b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b956d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b956f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b95710(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b95730(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b95750(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b957d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b957e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b957f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b95800(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __stdcall FUN_10b959e0(byte *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10b95a30(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10b95a50(byte *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b95aa0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b95ab0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b95ac0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b95ad0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b95ae0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b95af0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b95b00(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b95b10(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b95b20(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b95b30(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b95b40(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b95b50(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b95db0(undefined4 param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b95df0(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b95e10(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b95eb0(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b95ed0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b95ee0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b95ef0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b95f00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b96430(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b96440(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b96450(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b96460(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b96470(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b96480(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b96490(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b964a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b964b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b964c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b964d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b964e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b965a0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b965d0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b96690(undefined4 param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b966a0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b966c0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b967e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b967f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b96800(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b96810(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b96820(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b96830(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b96840(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b96850(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b96860(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b96870(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b96880(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b96890(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b968a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b968b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b968c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b968d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b96900(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b96af0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b96b20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b96b50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b96b80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b96bb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b96c80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b96d10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b96d30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b96d90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b96db0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b96ed0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b970a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b970c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b970e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b97100(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b97120(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b97140(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b97170(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b97190(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10b971b0(undefined1 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b97240(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b97260(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b97280(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b97290(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b972a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b97ea0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b97eb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b97ec0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b97ed0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b98310(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b98380(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b983c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b98c20(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b98c30(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b98e30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b98e40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b99210(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b99230(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b99240(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b99250(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b99260(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b993e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b993f0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b998b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b998c0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b998d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b998e0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b998f0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b99900(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b99910(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b99920(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b99930(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b99940(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b99950(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b99960(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b99970(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b99980(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b99990(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b999a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b999b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b999c0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b999d0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b999e0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b999f0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b99a00(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b99a10(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b99a20(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b99a30(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b99a40(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b99a50(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b99a60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b99a70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b99ac0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b99ad0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b99ae0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b99af0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10b99b00(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10b99b10(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __stdcall FUN_10b99b40(byte *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b9a400(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b9a420(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b9a700(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b9a760(float *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b9a920(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9ae50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9ae60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9ae70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9ae80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9ae90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9aea0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9aeb0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9aec0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9aed0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9aee0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b9aef0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b9af00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9af10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9af20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9af30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9af40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9af50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b9b060(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b9b070(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b9b080(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9b090(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9b0a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b9b190(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b9b1a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b9b1b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b9b1c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9b330(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9b340(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b9b350(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b9b360(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b9b6b0(int param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b9b6f0(int param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10b9baf0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10b9bb70(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10b9bbf0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10b9bc60(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9bdc0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9bdd0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b9bf70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b9c160(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b9c1b0(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10b9c200(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10b9c250(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10b9c2a0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10b9c2f0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9c340(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9c360(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b9c4f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9c730(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9de50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9e070(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9e530(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b9e8f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b9e900(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b9e910(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b9e920(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b9ebb0(char *param_1,uint param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b9f030(undefined1 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10b9f040(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10b9f050(float *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b9f060(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b9f070(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b9f080(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b9f090(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b9f0a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b9f0b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b9f0c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b9f0d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b9f5f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b9f600(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9f610(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9f620(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9f630(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9f640(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9f650(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9f660(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b9fbf0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b9fc20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b9fc50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b9fc80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b9fcb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b9fce0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b9fd10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b9fd40(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ba0bd0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ba0be0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba1ab0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba1ac0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba1ae0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba1b00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba1c40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba1c60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba2120(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10ba2690(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba26a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba26b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba26c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba26d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba26f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba2870(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba2880(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba2890(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba28a0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba28b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba28c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba28d0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba3400(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba3420(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba3440(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba34e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba34f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba3500(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba3510(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba3640(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba3650(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10ba3660(int param_1,uint *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10ba3690(int param_1,uint *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10ba38a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba38b0(int param_1,uint param_2,uint param_3,byte *param_4,int param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ba39a0(int param_1,uint param_2,uint param_3,void *param_4,size_t param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba3d30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba3f60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba3f70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba3f80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba3f90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba3fb0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba3fc0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba3fd0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba3fe0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba3ff0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba4000(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba4010(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba4020(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba4030(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ba4040(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba4080(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba40d0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba4100(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba4120(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba4290(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba42b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba4330(undefined4 param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ba4340(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ba43b0(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ba4420(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba44d0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba44f0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba4510(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba4530(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba4550(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba4560(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba4570(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba4580(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba4590(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba45a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba45c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba45d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba45e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba45f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba4600(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba4620(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba4630(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10ba4640(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba4a30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba4a50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba4a60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba4cf0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba4fb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba5060(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba50c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba50e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba5100(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba5120(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba5160(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba5210(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ba5220(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __fastcall FUN_10ba5230(void *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba5450(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba5470(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba54b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba54d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba54e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba54f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba5860(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba59e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba5a30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba5ba0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10ba5bc0(undefined1 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ba5ee0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba6020(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 * __fastcall FUN_10ba6040(undefined2 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba6150(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba66c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba66d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ba6950(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ba6ca0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ba6d60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ba6e10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ba6e30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ba6fb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ba7170(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ba7440(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ba7480(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba7b20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba7b30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba7b40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba7b50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ba7b60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ba7b70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10ba7b80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba7b90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba7ba0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba7bb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba7bc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba7bd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba7be0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ba7bf0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ba7c00(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ba7c10(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ba7c20(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ba7c30(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ba7c40(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ba7df0(void *param_1,void *param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10ba8410(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ba8420(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ba8450(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ba8880(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba9670(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba9680(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba9690(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba96a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba96b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba96c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba96d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba96e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba96f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba9700(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba9710(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba9720(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba9730(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba9740(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba9750(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba9760(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba9770(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba9780(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba9790(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba97a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba97b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ba9de0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ba9f10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ba9f40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10baa000(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10baa010(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10baa020(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10baa030(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10baa040(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10baa050(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10baa670(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10baa6e0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10baa7e0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10baa8a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10baa8d0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10baa9f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bab090(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bab0e0(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bab130(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bab180(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bab230(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bab250(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __stdcall FUN_10bab350(SCStr *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bab3b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bac670(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bacbc0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bad870(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bb22b0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb24c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb24d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb24e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb24f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb2500(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb2510(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bb2520(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb3100(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb3110(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb3120(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bb3130(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bb3160(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bb3170(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bb3180(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bb3370(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bb33a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bb33d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bb3400(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb42c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bb4390(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bb43a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bb43b0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bb47c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bb4800(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bb4b10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bb4b90(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bb4bb0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bb4bc0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bb4bd0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bb4d80(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb4e50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb4e60(int param_1,SCStr *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb5110(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb5120(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb5130(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb5140(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb5150(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb5260(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb5280(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb52a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb52b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb52c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bb53d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bb53f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bb5400(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bb5450(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bb58b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bb58c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bb5ce0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bb5de0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bb5df0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bb5e00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bb5e10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bb5e30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bb5e40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bb6080(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bb66c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bb6730(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bb6740(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bb6750(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bb6760(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bb6770(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bb6780(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bb6790(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bb67a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bb6ab0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bb6f10(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bb77d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bb7960(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bb79b0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bbabb0(SCStr *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bbabd0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bbabe0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bbb590(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bbb660(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bbb6c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bbb6e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bbb700(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bbb720(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bbc050(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bbd8c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10bbdb70(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bbdba0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bbdd80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bbdd90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bbdda0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bbde00(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bbde10(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bbde50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bbde60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bbde70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bbde80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bbdef0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bbdf10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bbdf20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bbdf40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bbdf50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bbdf70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bbdff0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bbe000(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bbe2f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bbe380(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bbe390(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bbe600(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bbe610(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bbe620(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bbe630(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bbe640(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bbe650(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10bbe6d0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bbe700(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bbe730(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bbe7b0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bbe820(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bbe830(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __stdcall FUN_10bbe880(SCStr *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bbead0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bbeae0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bbeb00(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bbeb10(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bbeb20(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bbece0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bbecf0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bbed00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bbeee0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bbef10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bbef40(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bbefc0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bbf0d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bbf170(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bbf190(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bbf360(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bbf3f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bbf8a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bbf910(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bbfa60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bbfb90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bbfba0(int param_1,SCStr *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bbfe70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10bbfeb0(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bbff20(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bbff40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bbff80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc11b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc11c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc11d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc11e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc11f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10bc1500(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bc1590(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc15a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bc19c0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc1a10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bc1e30(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bc1e40(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bc3680(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10bc3930(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bc3960(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bc3b40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bc3b50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bc3b60(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bc3bc0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bc3bd0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bc3c10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bc3c20(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bc3c30(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bc3c40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bc3c70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bc3cd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bc3ce0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc3d00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bc3d10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bc3db0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bc3dc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bc3e40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bc4080(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc4220(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc4230(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bc4520(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc4530(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc4540(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc4550(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc4560(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bc4570(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10bc45f0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bc4620(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bc4650(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bc46d0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bc4740(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bc4750(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __stdcall FUN_10bc47a0(SCStr *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bc4a00(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bc4a10(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10bc4a30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bc4a40(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bc4a50(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bc4b50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc4d10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc4d20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bc4f00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bc4f30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bc4f60(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bc4fe0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10bc58e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10bc5bb0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bc5be0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bc5c40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bc5c50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bc5c60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bc5c90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bc5ca0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bc5cb0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bc5cc0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bc5da0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bc6060(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bc6090(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bc6140(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bc6160(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc6180(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bc6190(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bc61a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bc6530(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bc6670(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bc68c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bc6950(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bc6970(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bc6b20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bc6b50(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc6cc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc6cd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc6ce0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bc6cf0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bc6d00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bc6d10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc6d20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc6d30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bc7490(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bc74a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc74e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc74f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bc7500(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bc7510(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bc8650(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bc8660(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bc8670(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bc8c10(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc90b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc90c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc90d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc90e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bc93b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bc93e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bc9410(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bc9440(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bc97c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10bc9800(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bc9830(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bc9a10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bc9a20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bc9a30(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bc9a60(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bc9a70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bc9ab0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bc9b00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc9b20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bc9b30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc9fc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bca0c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bca0d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bca0e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bca0f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bca100(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bca110(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10bca190(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bca1c0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bca1f0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bca230(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bca2a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bca2b0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bca2c0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bcad80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bcb0d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bcb0e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bcb400(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bcb410(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bcb5b0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcb6e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcb700(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcb720(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcb740(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcb760(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcb780(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcb7a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcb7c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcb7e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcb800(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcb820(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcb840(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcb9b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcb9d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcb9f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcba10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcba30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcba50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcba70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcba90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcbab0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcc1f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcc4b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcc540(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bccb60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bccb70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bccb80(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bccb90(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bccba0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcce60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcce80(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bccea0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bccec0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bccee0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bccf00(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bccf20(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bccf40(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bccf60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bcd220(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd230(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd240(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd250(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd260(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd270(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd280(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd290(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd2a0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd2b0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd2c0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd2d0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd2e0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd2f0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd300(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd310(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd320(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd330(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd340(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10bcd470(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10bcd4a0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10bcd4d0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10bcd500(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd990(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd9a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd9b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd9c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd9d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd9e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd9f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcda00(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcda10(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcda20(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcda30(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcfb90(int *param_1,int *param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcfbc0(int *param_1,int *param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcfbf0(int *param_1,int *param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcfc20(int *param_1,int *param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcfc50(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcfc70(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcfc90(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcfcb0(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcfcd0(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcfcf0(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcfd10(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcfd30(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcfd50(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcfd70(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcff10(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd00b0(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd00d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd00e0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd00f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0100(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0110(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0120(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0130(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0140(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0150(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0160(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0170(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0180(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0190(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0420(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0430(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0440(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0450(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0460(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0470(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0480(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0490(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10bd04a0(int param_1,uint *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd04d0(int param_1,SCStr *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0500(int param_1,SCStr *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10bd0530(int param_1,uint *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10bd0560(int param_1,uint *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10bd0590(int param_1,uint *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10bd05c0(int param_1,uint *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10bd05f0(int param_1,uint *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10bd0620(int param_1,uint *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10bd0650(int *param_1,int *param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd06d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd06e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0760(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd0770(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd0780(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd0790(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1230(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1240(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10bd1250(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __stdcall FUN_10bd1280(int *param_1,int *param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1300(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1310(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1320(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1330(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bd14b0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10bd14e0(int *param_1,int *param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bd1560(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bd1590(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd17d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd17e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd17f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1800(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1810(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1820(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1830(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1840(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1850(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1860(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1870(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1880(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1890(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd18a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd18b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd18c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd18d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd18e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd18f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1900(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1910(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1920(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1930(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1940(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1950(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1960(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1970(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1980(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1990(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd19a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd19b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd19c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd19d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd19e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd19f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1a00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1a10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1a20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1a30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1a40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1a50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1a60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1a70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1a80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1a90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1aa0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1ab0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1ac0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1ad0(undefined4 param_1);
// Reference entry 10b80320; body size 16 bytes.
#line 1 "ENTRY_10b80320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b80320(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10b80340; body size 16 bytes.
#line 1 "ENTRY_10b80340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b80340(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10b80360; body size 16 bytes.
#line 1 "ENTRY_10b80360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b80360(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10b80380; body size 16 bytes.
#line 1 "ENTRY_10b80380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b80380(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10b803a0; body size 9 bytes.
#line 1 "ENTRY_10b803a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b803a0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10b803b0; body size 9 bytes.
#line 1 "ENTRY_10b803b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b803b0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10b803c0; body size 9 bytes.
#line 1 "ENTRY_10b803c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b803c0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10b80440; body size 8 bytes.
#line 1 "ENTRY_10b80440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

ulong __fastcall FUN_10b80440(int param_1)

{
  char *pcVar1;
  ulong uVar2;
  
  pcVar1 = (char *)(strchr((char *)(param_1 + 8),0x2d));
  if (pcVar1 != (char *)0x0) {
    uVar2 = (ulong)(strtoul(pcVar1 + 1,(char **)0x0,0x10));
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ ulong)(uVar2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ ulong)(0);
}


// Reference entry 10b818e0; body size 7 bytes.
#line 1 "ENTRY_10b818e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b818e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0xd7d0);
}


// Reference entry 10b81d50; body size 4 bytes.
#line 1 "ENTRY_10b81d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b81d50(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 10b81d60; body size 8 bytes.
#line 1 "ENTRY_10b81d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b81d60(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 8) != 0);
}


// Reference entry 10b81d70; body size 8 bytes.
#line 1 "ENTRY_10b81d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b81d70(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 8) != 0);
}


// Reference entry 10b81d80; body size 8 bytes.
#line 1 "ENTRY_10b81d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b81d80(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 8) != 0);
}


// Reference entry 10b825f0; body size 57 bytes.
#line 1 "ENTRY_10b825f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b825f0(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (int)(thunk_FUN_110828b0());
  iVar2 = (int)((*(code *)**(undefined4 **)(iVar2 + 0x1c))());
  if (iVar2 != 0) {
    cVar1 = (char)(thunk_FUN_110d3ac0());
    if (cVar1 != '\0') {
      iVar2 = (int)(thunk_FUN_110ce190());
      if (iVar2 != 0) {
        iVar2 = (int)(thunk_FUN_110ce190());
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(iVar2 + 0x2c));
      }
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10b82640; body size 6 bytes.
#line 1 "ENTRY_10b82640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b82640(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIBrowseService");
}


// Reference entry 10b82650; body size 6 bytes.
#line 1 "ENTRY_10b82650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b82650(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpReplaceAccount");
}


// Reference entry 10b82660; body size 6 bytes.
#line 1 "ENTRY_10b82660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b82660(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIScrobblingService");
}


// Reference entry 10b82670; body size 6 bytes.
#line 1 "ENTRY_10b82670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b82670(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCISimpleMessagingService");
}


// Reference entry 10b82a80; body size 61 bytes.
#line 1 "ENTRY_10b82a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_10b82a80(int param_1)

{
  uint in_EAX;
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    piVar1 = (int *)((int *)thunk_FUN_110da8b0());
    in_EAX = (uint)(0);
    if (piVar1 != (int *)0x0) {
      in_EAX = (uint)((**(code **)(*piVar1 + 0x54))());
      if (in_EAX == 1) {
        iVar2 = (int)((**(code **)(*piVar1 + 0x5c))());
        in_EAX = (uint)((*(uint *)(iVar2 + 4) & 0x7f) - 1 & 0xfffffffe);
        if (in_EAX == 10) {
          return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(1);
        }
      }
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(in_EAX & 0xffffff00);
}


// Reference entry 10b82ae0; body size 17 bytes.
#line 1 "ENTRY_10b82ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b82ae0(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(*(uint *)(param_1 + 4) & 0xffffff00);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)(uVar1 == 0x12f00)));
}


// Reference entry 10b82b00; body size 53 bytes.
#line 1 "ENTRY_10b82b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10b82b00(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = (int *)((int *)thunk_FUN_110da8b0());
  uVar2 = (uint)((**(code **)(*piVar1 + 0x54))());
  if (uVar2 == 1) {
    iVar3 = (int)((**(code **)(*piVar1 + 0x5c))());
    uVar2 = (uint)(*(uint *)(iVar3 + 4) & 0xffffff00);
    if (uVar2 == 0x12f00) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0x12f01);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar2 & 0xffffff00);
}


// Reference entry 10b82b90; body size 26 bytes.
#line 1 "ENTRY_10b82b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_10b82b90(int param_1)

{
  uint uVar1;
  uint in_EAX;
  
  uVar1 = (uint)(*(uint *)(param_1 + 4));
  if (((uVar1 != 0) && (in_EAX = uVar1 & 0xffffff81, (char)in_EAX != -0x80)) && ((uVar1 & 1) == 0))
  {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(in_EAX & 0xffffff00);
}


// Reference entry 10b82e30; body size 3 bytes.
#line 1 "ENTRY_10b82e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b82e30(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10b82e40; body size 3 bytes.
#line 1 "ENTRY_10b82e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b82e40(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10b82e50; body size 3 bytes.
#line 1 "ENTRY_10b82e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b82e50(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10b82e60; body size 3 bytes.
#line 1 "ENTRY_10b82e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b82e60(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10b84170; body size 28 bytes.
#line 1 "ENTRY_10b84170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b84170(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10b841a0; body size 28 bytes.
#line 1 "ENTRY_10b841a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b841a0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10b841d0; body size 28 bytes.
#line 1 "ENTRY_10b841d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b841d0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10b84200; body size 28 bytes.
#line 1 "ENTRY_10b84200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b84200(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10b84230; body size 28 bytes.
#line 1 "ENTRY_10b84230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b84230(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10b84260; body size 28 bytes.
#line 1 "ENTRY_10b84260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b84260(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10b84290; body size 28 bytes.
#line 1 "ENTRY_10b84290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b84290(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10b842c0; body size 28 bytes.
#line 1 "ENTRY_10b842c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b842c0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10b842f0; body size 20 bytes.
#line 1 "ENTRY_10b842f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b842f0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10b84950; body size 6 bytes.
#line 1 "ENTRY_10b84950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b84950(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpDeviceDelete");
}


// Reference entry 10b84960; body size 6 bytes.
#line 1 "ENTRY_10b84960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b84960(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpDeviceGet");
}


// Reference entry 10b84970; body size 6 bytes.
#line 1 "ENTRY_10b84970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b84970(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpDevicePut");
}


// Reference entry 10b84c00; body size 18 bytes.
#line 1 "ENTRY_10b84c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b84c00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceOpRequest);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b84c20; body size 18 bytes.
#line 1 "ENTRY_10b84c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b84c20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceOpRequest);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b84c40; body size 18 bytes.
#line 1 "ENTRY_10b84c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b84c40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceOpRequest);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b84c60; body size 18 bytes.
#line 1 "ENTRY_10b84c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b84c60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceOpRequest);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b84c80; body size 27 bytes.
#line 1 "ENTRY_10b84c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b84c80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b84cb0; body size 27 bytes.
#line 1 "ENTRY_10b84cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b84cb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b84ce0; body size 27 bytes.
#line 1 "ENTRY_10b84ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b84ce0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b84d10; body size 27 bytes.
#line 1 "ENTRY_10b84d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b84d10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b85400; body size 136 bytes.
#line 1 "ENTRY_10b85400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b85400(undefined4 param_2,undefined4 param_3,void *param_4,size_t param_5,
            void *param_6,size_t param_7)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *_Dst;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(param_5 + param_7);
  uVar2 = (uint)(0xf);
  param_1[4] = 0;
  param_1[5] = 0;
  _Dst = (undefined4 *)(param_1);
  if (0xf < uVar1) {
    uVar2 = (uint)(uVar1 | 0xf);
    if (uVar2 < 0x80000000) {
      if (uVar2 < 0x16) {
        uVar2 = (uint)(0x16);
      }
    }
    else {
      uVar2 = (uint)(0x7fffffff);
    }
    _Dst = (undefined4 *)((undefined4 *)thunk_FUN_1012cab0(uVar2 + 1));
    *param_1 = (undefined4)(_Dst);
  }
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  memcpy(_Dst,param_4,param_5);
  memcpy((void *)((int)_Dst + param_5),param_6,param_7);
  *(undefined1 *)((int)_Dst + uVar1) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b85f90; body size 129 bytes.
#line 1 "ENTRY_10b85f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b85f90(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 1;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  param_1[5] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceOpBase);
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
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b86c80; body size 34 bytes.
#line 1 "ENTRY_10b86c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b86c80(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_1124a200(param_2,param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHTTPDeleteReqHeadersBuilder);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b86cb0; body size 61 bytes.
#line 1 "ENTRY_10b86cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b86cb0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111c05a0(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpDeleteNoRedirectAIOOp);
  param_1[0x18] = (uint)&ghidra_vftable_RHttpDeleteNoRedirectAIOOp;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b86d00; body size 61 bytes.
#line 1 "ENTRY_10b86d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b86d00(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111c05a0(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpPutNoRedirectAIOOp);
  param_1[0x18] = (uint)&ghidra_vftable_RHttpPutNoRedirectAIOOp;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b86d50; body size 9 bytes.
#line 1 "ENTRY_10b86d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b86d50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpDeviceDelete);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b86d60; body size 9 bytes.
#line 1 "ENTRY_10b86d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b86d60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpDeviceGet);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b86d70; body size 9 bytes.
#line 1 "ENTRY_10b86d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b86d70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpDevicePost);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b86d80; body size 9 bytes.
#line 1 "ENTRY_10b86d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b86d80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpDevicePut);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b879c0; body size 11 bytes.
#line 1 "ENTRY_10b879c0"

/* WARNING: Removing unreachable block (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b879c0(undefined4 *param_1)

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
  if ((int *)param_1[1] != (int *)0x0) {
    if (param_1[2] != 0) {
      (**(code **)(*(int *)param_1[1] + 0x10))(uVar2);
    }
    puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
    if ((puVar1 != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1), iVar3 == 0)) {
      (**(code **)*puVar1)(1);
    }
    param_1[1] = 0;
    param_1[2] = 0;
  }

  return;

 } catch (...) { }
}


// Reference entry 10b879d0; body size 11 bytes.
#line 1 "ENTRY_10b879d0"

/* WARNING: Removing unreachable block_10b879d0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b879d0(undefined4 *param_1)

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
  if ((int *)param_1[1] != (int *)0x0) {
    if (param_1[2] != 0) {
      (**(code **)(*(int *)param_1[1] + 0x10))(uVar2);
    }
    puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
    if ((puVar1 != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1), iVar3 == 0)) {
      (**(code **)*puVar1)(1);
    }
    param_1[1] = 0;
    param_1[2] = 0;
  }

  return;

 } catch (...) { }
}


// Reference entry 10b879f0; body size 11 bytes.
#line 1 "ENTRY_10b879f0"

/* WARNING: Removing unreachable block_10b879f0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b879f0(undefined4 *param_1)

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
  if ((int *)param_1[1] != (int *)0x0) {
    if (param_1[2] != 0) {
      (**(code **)(*(int *)param_1[1] + 0x10))(uVar2);
    }
    puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
    if ((puVar1 != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1), iVar3 == 0)) {
      (**(code **)*puVar1)(1);
    }
    param_1[1] = 0;
    param_1[2] = 0;
  }

  return;

 } catch (...) { }
}


// Reference entry 10b88730; body size 18 bytes.
#line 1 "ENTRY_10b88730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b88730(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpDeleteNoRedirectAIOOp);
  param_1[0x18] = (uint)&ghidra_vftable_RHttpDeleteNoRedirectAIOOp;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpBaseNoRedirectAIOOp);
  param_1[0x18] = (uint)&ghidra_vftable_RHttpBaseNoRedirectAIOOp;
  if ((undefined4 *)param_1[0x91f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x91f])(1);
  }
  thunk_FUN_1124a3f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpImpl);
  thunk_FUN_112407b0();
  return;
}


// Reference entry 10b88750; body size 18 bytes.
#line 1 "ENTRY_10b88750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b88750(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpPutNoRedirectAIOOp);
  param_1[0x18] = (uint)&ghidra_vftable_RHttpPutNoRedirectAIOOp;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpBaseNoRedirectAIOOp);
  param_1[0x18] = (uint)&ghidra_vftable_RHttpBaseNoRedirectAIOOp;
  if ((undefined4 *)param_1[0x91f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x91f])(1);
  }
  thunk_FUN_1124a3f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpImpl);
  thunk_FUN_112407b0();
  return;
}


// Reference entry 10b88770; body size 7 bytes.
#line 1 "ENTRY_10b88770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b88770(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10b88780; body size 7 bytes.
#line 1 "ENTRY_10b88780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b88780(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10b88790; body size 7 bytes.
#line 1 "ENTRY_10b88790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b88790(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10b887a0; body size 7 bytes.
#line 1 "ENTRY_10b887a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b887a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10b887b0; body size 18 bytes.
#line 1 "ENTRY_10b887b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b887b0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpDeviceDelete);
  param_1[2] = (uint)&ghidra_vftable_SCOpDeviceDelete;


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


// Reference entry 10b887d0; body size 18 bytes.
#line 1 "ENTRY_10b887d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b887d0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpDeviceGet);
  param_1[2] = (uint)&ghidra_vftable_SCOpDeviceGet;


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


// Reference entry 10b88810; body size 18 bytes.
#line 1 "ENTRY_10b88810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b88810(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpDevicePut);
  param_1[2] = (uint)&ghidra_vftable_SCOpDevicePut;


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


// Reference entry 10b88830; body size 13 bytes.
#line 1 "ENTRY_10b88830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_10b88830(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(-(uint)(*(int *)(param_1 + 4) != 0) & *(int *)(param_1 + 4) - 8U);
}


// Reference entry 10b88840; body size 13 bytes.
#line 1 "ENTRY_10b88840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_10b88840(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(-(uint)(*(int *)(param_1 + 4) != 0) & *(int *)(param_1 + 4) - 8U);
}


// Reference entry 10b88850; body size 13 bytes.
#line 1 "ENTRY_10b88850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_10b88850(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(-(uint)(*(int *)(param_1 + 4) != 0) & *(int *)(param_1 + 4) - 8U);
}


// Reference entry 10b88860; body size 13 bytes.
#line 1 "ENTRY_10b88860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_10b88860(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(-(uint)(*(int *)(param_1 + 4) != 0) & *(int *)(param_1 + 4) - 8U);
}


// Reference entry 10b8b420; body size 28 bytes.
#line 1 "ENTRY_10b8b420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10b8b420(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x6250));
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_2);
}


// Reference entry 10b8b5f0; body size 28 bytes.
#line 1 "ENTRY_10b8b5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10b8b5f0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x6250));
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_2);
}


// Reference entry 10b8b620; body size 25 bytes.
#line 1 "ENTRY_10b8b620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10b8b620(undefined4 param_1)

{
  thunk_FUN_10b8b660(param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b8b640; body size 25 bytes.
#line 1 "ENTRY_10b8b640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10b8b640(undefined4 param_1)

{
  thunk_FUN_10b8b660(param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b8b770; body size 25 bytes.
#line 1 "ENTRY_10b8b770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10b8b770(undefined4 param_1)

{
  thunk_FUN_10b8b660(param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b8b890; body size 28 bytes.
#line 1 "ENTRY_10b8b890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10b8b890(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x6250));
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_2);
}


// Reference entry 10b8b8d0; body size 7 bytes.
#line 1 "ENTRY_10b8b8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10b8b8d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)((&DAT_00004498)[param_1]);
}


// Reference entry 10b8b8e0; body size 7 bytes.
#line 1 "ENTRY_10b8b8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10b8b8e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)((&DAT_0000449c)[param_1]);
}


// Reference entry 10b8b8f0; body size 7 bytes.
#line 1 "ENTRY_10b8b8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10b8b8f0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)((&DAT_00004498)[param_1]);
}


// Reference entry 10b8b900; body size 7 bytes.
#line 1 "ENTRY_10b8b900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10b8b900(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)((&DAT_00004498)[param_1]);
}


// Reference entry 10b8ba50; body size 7 bytes.
#line 1 "ENTRY_10b8ba50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b8ba50(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x2478));
}


// Reference entry 10b8ce00; body size 6 bytes.
#line 1 "ENTRY_10b8ce00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b8ce00(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpDeviceDelete");
}


// Reference entry 10b8ce10; body size 6 bytes.
#line 1 "ENTRY_10b8ce10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b8ce10(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpDeviceGet");
}


// Reference entry 10b8ce20; body size 6 bytes.
#line 1 "ENTRY_10b8ce20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b8ce20(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpDevicePut");
}


// Reference entry 10b8dab0; body size 28 bytes.
#line 1 "ENTRY_10b8dab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b8dab0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10b8dae0; body size 28 bytes.
#line 1 "ENTRY_10b8dae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b8dae0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10b8db10; body size 28 bytes.
#line 1 "ENTRY_10b8db10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b8db10(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10b8db40; body size 28 bytes.
#line 1 "ENTRY_10b8db40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b8db40(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10b8e1d0; body size 25 bytes.
#line 1 "ENTRY_10b8e1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b8e1d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b8e1f0; body size 33 bytes.
#line 1 "ENTRY_10b8e1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10b8e1f0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10b8e220; body size 3 bytes.
#line 1 "ENTRY_10b8e220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b8e220(void)

{
  return;
}


// Reference entry 10b8e230; body size 18 bytes.
#line 1 "ENTRY_10b8e230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10b8e230(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4 **)(param_1 + 4) = *param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}


// Reference entry 10b8e400; body size 7 bytes.
#line 1 "ENTRY_10b8e400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8e400(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10b8e410; body size 5 bytes.
#line 1 "ENTRY_10b8e410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8e410(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b8e420; body size 36 bytes.
#line 1 "ENTRY_10b8e420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10b8e420(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10b8e450; body size 5 bytes.
#line 1 "ENTRY_10b8e450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8e450(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b8e460; body size 13 bytes.
#line 1 "ENTRY_10b8e460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b8e460(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10b8e470; body size 36 bytes.
#line 1 "ENTRY_10b8e470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10b8e470(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_10b8e250(puVar1,param_2);
  return;
}


// Reference entry 10b8e4a0; body size 5 bytes.
#line 1 "ENTRY_10b8e4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8e4a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b8e4b0; body size 11 bytes.
#line 1 "ENTRY_10b8e4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b8e4b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b8e4c0; body size 11 bytes.
#line 1 "ENTRY_10b8e4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b8e4c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b8e4d0; body size 23 bytes.
#line 1 "ENTRY_10b8e4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b8e4d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b8e4f0; body size 3 bytes.
#line 1 "ENTRY_10b8e4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b8e4f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b8e500; body size 23 bytes.
#line 1 "ENTRY_10b8e500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b8e500(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b8e650; body size 14 bytes.
#line 1 "ENTRY_10b8e650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10b8e650(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10b8e670; body size 3 bytes.
#line 1 "ENTRY_10b8e670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b8e670(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10b8e680; body size 3 bytes.
#line 1 "ENTRY_10b8e680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b8e680(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10b8e690; body size 6 bytes.
#line 1 "ENTRY_10b8e690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10b8e690(int *param_1)

{
  *param_1 = (int)(*param_1 + 4);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10b8e6a0; body size 6 bytes.
#line 1 "ENTRY_10b8e6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10b8e6a0(int *param_1)

{
  *param_1 = (int)(*param_1 + 4);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10b8e740; body size 49 bytes.
#line 1 "ENTRY_10b8e740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10b8e740(uint param_2)
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


// Reference entry 10b8e7f0; body size 3 bytes.
#line 1 "ENTRY_10b8e7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b8e7f0(void)

{
  return;
}


// Reference entry 10b8e800; body size 3 bytes.
#line 1 "ENTRY_10b8e800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b8e800(void)

{
  return;
}


// Reference entry 10b8e810; body size 3 bytes.
#line 1 "ENTRY_10b8e810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b8e810(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b8e820; body size 3 bytes.
#line 1 "ENTRY_10b8e820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b8e820(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b8e830; body size 3 bytes.
#line 1 "ENTRY_10b8e830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b8e830(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b8e840; body size 3 bytes.
#line 1 "ENTRY_10b8e840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b8e840(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b8e850; body size 3 bytes.
#line 1 "ENTRY_10b8e850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b8e850(void)

{
  return;
}


// Reference entry 10b8e8d0; body size 38 bytes.
#line 1 "ENTRY_10b8e8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_10b8e8d0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10b8e900; body size 27 bytes.
#line 1 "ENTRY_10b8e900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b8e900(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10b8e930; body size 27 bytes.
#line 1 "ENTRY_10b8e930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10b8e930(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10b8e9a0; body size 87 bytes.
#line 1 "ENTRY_10b8e9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10b8e9a0(uint param_1)

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


// Reference entry 10b8ea10; body size 11 bytes.
#line 1 "ENTRY_10b8ea10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10b8ea10(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10b8ea20; body size 9 bytes.
#line 1 "ENTRY_10b8ea20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b8ea20(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 10b8ea30; body size 7 bytes.
#line 1 "ENTRY_10b8ea30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b8ea30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return;
}


// Reference entry 10b8ea40; body size 61 bytes.
#line 1 "ENTRY_10b8ea40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10b8ea40(int param_1,int param_2)

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


// Reference entry 10b8eac0; body size 12 bytes.
#line 1 "ENTRY_10b8eac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10b8eac0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10b8ead0; body size 6 bytes.
#line 1 "ENTRY_10b8ead0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8ead0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 10b8eae0; body size 6 bytes.
#line 1 "ENTRY_10b8eae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8eae0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 10b8eaf0; body size 36 bytes.
#line 1 "ENTRY_10b8eaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10b8eaf0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_10b8e250(puVar1,param_2);
  return;
}


// Reference entry 10b8eb20; body size 61 bytes.
#line 1 "ENTRY_10b8eb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10b8eb20(undefined4 param_2,int *param_3)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_3);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10b8eb70; body size 22 bytes.
#line 1 "ENTRY_10b8eb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b8eb70(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b8ec50; body size 18 bytes.
#line 1 "ENTRY_10b8ec50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b8ec50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b8ec70; body size 25 bytes.
#line 1 "ENTRY_10b8ec70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b8ec70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b8ec90; body size 25 bytes.
#line 1 "ENTRY_10b8ec90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b8ec90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b8ecb0; body size 22 bytes.
#line 1 "ENTRY_10b8ecb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b8ecb0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b8ecd0; body size 5 bytes.
#line 1 "ENTRY_10b8ecd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b8ecd0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b8ece0; body size 5 bytes.
#line 1 "ENTRY_10b8ece0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b8ece0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b8ecf0; body size 63 bytes.
#line 1 "ENTRY_10b8ecf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10b8ecf0(undefined4 *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*(int *)*param_2);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10b8ed40; body size 26 bytes.
#line 1 "ENTRY_10b8ed40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10b8ed40(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10b8ed60; body size 26 bytes.
#line 1 "ENTRY_10b8ed60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10b8ed60(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10b8ed80; body size 78 bytes.
#line 1 "ENTRY_10b8ed80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10b8ed80(int *param_2)
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
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
  }
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10b8edf0; body size 78 bytes.
#line 1 "ENTRY_10b8edf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10b8edf0(int *param_2)
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
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
  }
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10b8ee60; body size 78 bytes.
#line 1 "ENTRY_10b8ee60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10b8ee60(int *param_2)
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
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
  }
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10b8eed0; body size 78 bytes.
#line 1 "ENTRY_10b8eed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10b8eed0(int *param_2)
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
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
  }
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10b8ef40; body size 12 bytes.
#line 1 "ENTRY_10b8ef40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10b8ef40(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10b8ef50; body size 3 bytes.
#line 1 "ENTRY_10b8ef50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b8ef50(void)

{
  return;
}


// Reference entry 10b8ef60; body size 13 bytes.
#line 1 "ENTRY_10b8ef60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b8ef60(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10b8ef70; body size 13 bytes.
#line 1 "ENTRY_10b8ef70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b8ef70(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10b8ef80; body size 13 bytes.
#line 1 "ENTRY_10b8ef80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b8ef80(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10b8ef90; body size 3 bytes.
#line 1 "ENTRY_10b8ef90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b8ef90(void)

{
  return;
}


// Reference entry 10b8efa0; body size 3 bytes.
#line 1 "ENTRY_10b8efa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b8efa0(void)

{
  return;
}


// Reference entry 10b8efb0; body size 18 bytes.
#line 1 "ENTRY_10b8efb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10b8efb0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4 **)(param_1 + 4) = *param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}


// Reference entry 10b8f0a0; body size 51 bytes.
#line 1 "ENTRY_10b8f0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b8f0a0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)param_2[1] = 0;
  puVar2 = (undefined4 *)((undefined4 *)*param_2);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)*puVar2);
    thunk_FUN_10b91160();
    thunk_FUN_1148a50e(puVar2,0x14);
    puVar2 = (undefined4 *)(puVar1);
  }
  return;
}


// Reference entry 10b8f0e0; body size 15 bytes.
#line 1 "ENTRY_10b8f0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b8f0e0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 10b8f100; body size 26 bytes.
#line 1 "ENTRY_10b8f100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b8f100(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_10b91160();
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 10b8f120; body size 7 bytes.
#line 1 "ENTRY_10b8f120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8f120(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10b8f130; body size 5 bytes.
#line 1 "ENTRY_10b8f130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8f130(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b8f3d0; body size 5 bytes.
#line 1 "ENTRY_10b8f3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8f3d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b8f3e0; body size 5 bytes.
#line 1 "ENTRY_10b8f3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8f3e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b8f3f0; body size 5 bytes.
#line 1 "ENTRY_10b8f3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8f3f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b8f400; body size 5 bytes.
#line 1 "ENTRY_10b8f400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8f400(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b8f410; body size 5 bytes.
#line 1 "ENTRY_10b8f410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8f410(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b8f420; body size 55 bytes.
#line 1 "ENTRY_10b8f420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b8f420(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)*param_4);
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}


// Reference entry 10b8f470; body size 9 bytes.
#line 1 "ENTRY_10b8f470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b8f470(undefined4 param_1,int *param_2)

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

  if (piVar1 != (int *)0x0) {
    param_2[1] = 0;
    param_2[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar3);
  }
  iVar2 = (int)(*param_2);

  if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
    iVar4 = (int)(thunk_FUN_1123fcd0((void *)(iVar2 + -0x10)));
    if (iVar4 == 0) {
      *(undefined4 *)(iVar2 + -8) = 0;
      *(undefined4 *)(iVar2 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar2,*(undefined4 *)(iVar2 + -4));
      free((void *)(iVar2 + -0x10));
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10b8f480; body size 15 bytes.
#line 1 "ENTRY_10b8f480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8f480(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10b8f520; body size 5 bytes.
#line 1 "ENTRY_10b8f520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8f520(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b8f530; body size 5 bytes.
#line 1 "ENTRY_10b8f530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8f530(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b8f540; body size 5 bytes.
#line 1 "ENTRY_10b8f540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8f540(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b8f550; body size 5 bytes.
#line 1 "ENTRY_10b8f550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8f550(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b8f560; body size 5 bytes.
#line 1 "ENTRY_10b8f560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8f560(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b8f570; body size 30 bytes.
#line 1 "ENTRY_10b8f570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b8f570(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 10b8fc30; body size 18 bytes.
#line 1 "ENTRY_10b8fc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b8fc30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b8fd20; body size 11 bytes.
#line 1 "ENTRY_10b8fd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b8fd20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b8fd30; body size 11 bytes.
#line 1 "ENTRY_10b8fd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b8fd30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b8fd40; body size 16 bytes.
#line 1 "ENTRY_10b8fd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b8fd40(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b8fd60; body size 13 bytes.
#line 1 "ENTRY_10b8fd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b8fd60(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b8fd70; body size 14 bytes.
#line 1 "ENTRY_10b8fd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b8fd70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b8fd90; body size 23 bytes.
#line 1 "ENTRY_10b8fd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b8fd90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b8fdb0; body size 3 bytes.
#line 1 "ENTRY_10b8fdb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b8fdb0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b8ff40; body size 42 bytes.
#line 1 "ENTRY_10b8ff40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b8ff40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSubscriptionImpl_EventSink);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b902f0; body size 47 bytes.
#line 1 "ENTRY_10b902f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b902f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10f56a40(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicatorRoomName);
  param_1[4] = (uint)&ghidra_vftable_SCSettingsReplicatorRoomName;
  param_1[0x40] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b90330; body size 47 bytes.
#line 1 "ENTRY_10b90330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b90330(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10f56a40(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicatorSonosNetChannel);
  param_1[4] = (uint)&ghidra_vftable_SCSettingsReplicatorSonosNetChannel;
  param_1[0x40] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b90810; body size 11 bytes.
#line 1 "ENTRY_10b90810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b90810(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b90820; body size 5 bytes.
#line 1 "ENTRY_10b90820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b90820(void)

{
  FUN_10b90fe0();
  return;
}


// Reference entry 10b910f0; body size 3 bytes.
#line 1 "ENTRY_10b910f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b910f0(void)

{
  return;
}


// Reference entry 10b91230; body size 5 bytes.
#line 1 "ENTRY_10b91230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b91230(void)

{
  FUN_10b90fe0();
  return;
}


// Reference entry 10b91240; body size 19 bytes.
#line 1 "ENTRY_10b91240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b91240(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10b916f0; body size 5 bytes.
#line 1 "ENTRY_10b916f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b916f0(undefined4 *param_1)

{
 try {
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar4 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicatorCustom);
  param_1[4] = (uint)&ghidra_vftable_SCSettingsReplicatorCustom;

  ((SCStr *)((SCStr *)(param_1 + 0x3d)))->int_release();
  param_1[0x3d] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x3c)))->int_release();
  param_1[0x3c] = 0;
  piVar3 = (int *)((int *)param_1[0x3b]);

  if (piVar3 != (int *)0x0) {
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    (**(code **)(*piVar3 + 8))(uVar4);
  }
  thunk_FUN_102cc870();
  iVar5 = (int)(thunk_FUN_102cc870());
  param_1[4] = (uint)&ghidra_vftable_SCIObjImpl;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[4] = (uint)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicator);
  piVar3 = (int *)((int *)param_1[3]);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = (int *)(piVar3 + 1);
    iVar2 = (int)(*piVar1);
    iVar5 = (int)(*piVar1);
    *piVar1 = (int)(iVar2 + -1);
    UNLOCK();
    if (iVar2 + -1 == 0) {
      iVar5 = (int)((**(code **)*piVar3)());
      LOCK();
      piVar1 = (int *)(piVar3 + 2);
      iVar2 = (int)(*piVar1);
      *piVar1 = (int)(*piVar1 + -1);
      UNLOCK();
      if (iVar2 == 1) {
        iVar5 = (int)((**(code **)(*piVar3 + 4))());
      }
    }
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar5);

 } catch (...) { }
}


// Reference entry 10b91700; body size 5 bytes.
#line 1 "ENTRY_10b91700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b91700(undefined4 *param_1)

{
 try {
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar4 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicatorCustom);
  param_1[4] = (uint)&ghidra_vftable_SCSettingsReplicatorCustom;

  ((SCStr *)((SCStr *)(param_1 + 0x3d)))->int_release();
  param_1[0x3d] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x3c)))->int_release();
  param_1[0x3c] = 0;
  piVar3 = (int *)((int *)param_1[0x3b]);

  if (piVar3 != (int *)0x0) {
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    (**(code **)(*piVar3 + 8))(uVar4);
  }
  thunk_FUN_102cc870();
  iVar5 = (int)(thunk_FUN_102cc870());
  param_1[4] = (uint)&ghidra_vftable_SCIObjImpl;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[4] = (uint)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicator);
  piVar3 = (int *)((int *)param_1[3]);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = (int *)(piVar3 + 1);
    iVar2 = (int)(*piVar1);
    iVar5 = (int)(*piVar1);
    *piVar1 = (int)(iVar2 + -1);
    UNLOCK();
    if (iVar2 + -1 == 0) {
      iVar5 = (int)((**(code **)*piVar3)());
      LOCK();
      piVar1 = (int *)(piVar3 + 2);
      iVar2 = (int)(*piVar1);
      *piVar1 = (int)(*piVar1 + -1);
      UNLOCK();
      if (iVar2 == 1) {
        iVar5 = (int)((**(code **)(*piVar3 + 4))());
      }
    }
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar5);

 } catch (...) { }
}


// Reference entry 10b91b90; body size 5 bytes.
#line 1 "ENTRY_10b91b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b91b90(undefined4 *param_1)

{
 try {
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar4 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicatorCustom);
  param_1[4] = (uint)&ghidra_vftable_SCSettingsReplicatorCustom;

  ((SCStr *)((SCStr *)(param_1 + 0x3d)))->int_release();
  param_1[0x3d] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x3c)))->int_release();
  param_1[0x3c] = 0;
  piVar3 = (int *)((int *)param_1[0x3b]);

  if (piVar3 != (int *)0x0) {
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    (**(code **)(*piVar3 + 8))(uVar4);
  }
  thunk_FUN_102cc870();
  iVar5 = (int)(thunk_FUN_102cc870());
  param_1[4] = (uint)&ghidra_vftable_SCIObjImpl;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[4] = (uint)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicator);
  piVar3 = (int *)((int *)param_1[3]);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = (int *)(piVar3 + 1);
    iVar2 = (int)(*piVar1);
    iVar5 = (int)(*piVar1);
    *piVar1 = (int)(iVar2 + -1);
    UNLOCK();
    if (iVar2 + -1 == 0) {
      iVar5 = (int)((**(code **)*piVar3)());
      LOCK();
      piVar1 = (int *)(piVar3 + 2);
      iVar2 = (int)(*piVar1);
      *piVar1 = (int)(*piVar1 + -1);
      UNLOCK();
      if (iVar2 == 1) {
        iVar5 = (int)((**(code **)(*piVar3 + 4))());
      }
    }
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar5);

 } catch (...) { }
}


// Reference entry 10b91ba0; body size 5 bytes.
#line 1 "ENTRY_10b91ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b91ba0(undefined4 *param_1)

{
 try {
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar4 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicatorCustom);
  param_1[4] = (uint)&ghidra_vftable_SCSettingsReplicatorCustom;

  ((SCStr *)((SCStr *)(param_1 + 0x3d)))->int_release();
  param_1[0x3d] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x3c)))->int_release();
  param_1[0x3c] = 0;
  piVar3 = (int *)((int *)param_1[0x3b]);

  if (piVar3 != (int *)0x0) {
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    (**(code **)(*piVar3 + 8))(uVar4);
  }
  thunk_FUN_102cc870();
  iVar5 = (int)(thunk_FUN_102cc870());
  param_1[4] = (uint)&ghidra_vftable_SCIObjImpl;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[4] = (uint)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicator);
  piVar3 = (int *)((int *)param_1[3]);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = (int *)(piVar3 + 1);
    iVar2 = (int)(*piVar1);
    iVar5 = (int)(*piVar1);
    *piVar1 = (int)(iVar2 + -1);
    UNLOCK();
    if (iVar2 + -1 == 0) {
      iVar5 = (int)((**(code **)*piVar3)());
      LOCK();
      piVar1 = (int *)(piVar3 + 2);
      iVar2 = (int)(*piVar1);
      *piVar1 = (int)(*piVar1 + -1);
      UNLOCK();
      if (iVar2 == 1) {
        iVar5 = (int)((**(code **)(*piVar3 + 4))());
      }
    }
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar5);

 } catch (...) { }
}


// Reference entry 10b91c40; body size 65 bytes.
#line 1 "ENTRY_10b91c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10b91c40(int *param_2)
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
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10b91d30; body size 14 bytes.
#line 1 "ENTRY_10b91d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10b91d30(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10b91d80; body size 3 bytes.
#line 1 "ENTRY_10b91d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b91d80(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10b91d90; body size 3 bytes.
#line 1 "ENTRY_10b91d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b91d90(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10b91da0; body size 8 bytes.
#line 1 "ENTRY_10b91da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b91da0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10b91db0; body size 6 bytes.
#line 1 "ENTRY_10b91db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b91db0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 8);
}


// Reference entry 10b91dc0; body size 6 bytes.
#line 1 "ENTRY_10b91dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b91dc0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 8);
}


// Reference entry 10b91dd0; body size 9 bytes.
#line 1 "ENTRY_10b91dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b91dd0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b91de0; body size 9 bytes.
#line 1 "ENTRY_10b91de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b91de0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b91df0; body size 10 bytes.
#line 1 "ENTRY_10b91df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10b91df0(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10b92b00; body size 22 bytes.
#line 1 "ENTRY_10b92b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b92b00(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x14));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10b92c80; body size 66 bytes.
#line 1 "ENTRY_10b92c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b92c80(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) +
                 (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 <= fVar1 && fVar1 != *param_1);
}


// Reference entry 10b93050; body size 3 bytes.
#line 1 "ENTRY_10b93050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b93050(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b93060; body size 3 bytes.
#line 1 "ENTRY_10b93060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b93060(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b93070; body size 3 bytes.
#line 1 "ENTRY_10b93070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b93070(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b93080; body size 3 bytes.
#line 1 "ENTRY_10b93080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b93080(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b93090; body size 3 bytes.
#line 1 "ENTRY_10b93090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b93090(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b930a0; body size 3 bytes.
#line 1 "ENTRY_10b930a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b930a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b93130; body size 3 bytes.
#line 1 "ENTRY_10b93130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b93130(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b93140; body size 3 bytes.
#line 1 "ENTRY_10b93140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b93140(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b931c0; body size 3 bytes.
#line 1 "ENTRY_10b931c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b931c0(void)

{
  return;
}


// Reference entry 10b93280; body size 11 bytes.
#line 1 "ENTRY_10b93280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b93280(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10b93290; body size 6 bytes.
#line 1 "ENTRY_10b93290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b93290(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10b932a0; body size 26 bytes.
#line 1 "ENTRY_10b932a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10b932a0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 10b93390; body size 14 bytes.
#line 1 "ENTRY_10b93390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10b93390(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 4));
  return;
}


// Reference entry 10b933b0; body size 13 bytes.
#line 1 "ENTRY_10b933b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10b933b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10b933c0; body size 12 bytes.
#line 1 "ENTRY_10b933c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10b933c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10b933d0; body size 11 bytes.
#line 1 "ENTRY_10b933d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10b933d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10b933e0; body size 43 bytes.
#line 1 "ENTRY_10b933e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b933e0(int param_1,int param_2,int param_3)

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


// Reference entry 10b93440; body size 90 bytes.
#line 1 "ENTRY_10b93440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10b93440(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0xccccccd) {
    param_1 = (uint)(param_1 * 0x14);
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


// Reference entry 10b934c0; body size 87 bytes.
#line 1 "ENTRY_10b934c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10b934c0(uint param_1)

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


// Reference entry 10b93530; body size 35 bytes.
#line 1 "ENTRY_10b93530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10b93530(undefined4 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)((undefined1 *)*param_2);
  }
  uVar1 = (uint)(thunk_FUN_101c82e0(puVar2));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1 & *(uint *)(param_1 + 0x18));
}


// Reference entry 10b93560; body size 4 bytes.
#line 1 "ENTRY_10b93560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b93560(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10b93570; body size 108 bytes.
#line 1 "ENTRY_10b93570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b93570(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iStack_4;
  
  if (*(int *)(param_1 + 8) != 0) {
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
    *(undefined4 *)puVar1[1] = 0;
    puVar1 = (undefined4 *)((undefined4 *)*puVar1);
    iStack_4 = (int)(param_1);
    while (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)((undefined4 *)*puVar1);
      thunk_FUN_10b91160();
      thunk_FUN_1148a50e(puVar1,0x14);
      puVar1 = (undefined4 *)(puVar2);
    }
    *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
    *(undefined4 *)(param_1 + 8) = 0;
    iStack_4 = (int)(*(int *)(param_1 + 4));
    thunk_FUN_10b8f4a0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&iStack_4);
  }
  return;
}


// Reference entry 10b93660; body size 57 bytes.
#line 1 "ENTRY_10b93660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b93660(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10b936b0; body size 60 bytes.
#line 1 "ENTRY_10b936b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10b936b0(int param_1,int param_2)

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


// Reference entry 10b93700; body size 61 bytes.
#line 1 "ENTRY_10b93700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10b93700(int param_1,int param_2)

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


// Reference entry 10b93750; body size 9 bytes.
#line 1 "ENTRY_10b93750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b93750(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10b93760; body size 9 bytes.
#line 1 "ENTRY_10b93760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b93760(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10b93770; body size 9 bytes.
#line 1 "ENTRY_10b93770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b93770(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10b93780; body size 32 bytes.
#line 1 "ENTRY_10b93780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10b93780(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x3c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x3c) + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 10b94e70; body size 3 bytes.
#line 1 "ENTRY_10b94e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_10b94e70(float *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10)((float10)*param_1);
}


// Reference entry 10b94e80; body size 6 bytes.
#line 1 "ENTRY_10b94e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b94e80(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xccccccc);
}


// Reference entry 10b94e90; body size 6 bytes.
#line 1 "ENTRY_10b94e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b94e90(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 10b94ea0; body size 6 bytes.
#line 1 "ENTRY_10b94ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b94ea0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 10b94eb0; body size 6 bytes.
#line 1 "ENTRY_10b94eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b94eb0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xccccccc);
}


// Reference entry 10b94ed0; body size 3 bytes.
#line 1 "ENTRY_10b94ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b94ed0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10b94ee0; body size 3 bytes.
#line 1 "ENTRY_10b94ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b94ee0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10b94ff0; body size 28 bytes.
#line 1 "ENTRY_10b94ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b94ff0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10b95020; body size 28 bytes.
#line 1 "ENTRY_10b95020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b95020(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10b95050; body size 28 bytes.
#line 1 "ENTRY_10b95050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b95050(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10b95080; body size 28 bytes.
#line 1 "ENTRY_10b95080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b95080(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10b950b0; body size 28 bytes.
#line 1 "ENTRY_10b950b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b950b0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10b950e0; body size 28 bytes.
#line 1 "ENTRY_10b950e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b950e0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10b95110; body size 28 bytes.
#line 1 "ENTRY_10b95110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b95110(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10b95140; body size 28 bytes.
#line 1 "ENTRY_10b95140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b95140(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10b95170; body size 28 bytes.
#line 1 "ENTRY_10b95170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b95170(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10b951a0; body size 28 bytes.
#line 1 "ENTRY_10b951a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b951a0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10b951d0; body size 28 bytes.
#line 1 "ENTRY_10b951d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b951d0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10b95200; body size 28 bytes.
#line 1 "ENTRY_10b95200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b95200(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10b952e0; body size 9 bytes.
#line 1 "ENTRY_10b952e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b952e0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10b95490; body size 61 bytes.
#line 1 "ENTRY_10b95490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10b95490(undefined4 param_2,int *param_3)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_3);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10b954e0; body size 22 bytes.
#line 1 "ENTRY_10b954e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b954e0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b95500; body size 22 bytes.
#line 1 "ENTRY_10b95500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b95500(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b95520; body size 32 bytes.
#line 1 "ENTRY_10b95520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b95520(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b956b0; body size 18 bytes.
#line 1 "ENTRY_10b956b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b956b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b956d0; body size 25 bytes.
#line 1 "ENTRY_10b956d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b956d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b956f0; body size 25 bytes.
#line 1 "ENTRY_10b956f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b956f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b95710; body size 18 bytes.
#line 1 "ENTRY_10b95710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b95710(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b95730; body size 25 bytes.
#line 1 "ENTRY_10b95730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b95730(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b95750; body size 25 bytes.
#line 1 "ENTRY_10b95750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b95750(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b95770; body size 17 bytes.
#line 1 "ENTRY_10b95770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::FUN_10b95770(undefined4 param_2,undefined4 *param_3)
{
  undefined1 *param_1 = (undefined1 *)this;
  *param_1 = (undefined1)(0);
  *(undefined4 *)(param_1 + 4) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(param_1);
}


// Reference entry 10b95790; body size 22 bytes.
#line 1 "ENTRY_10b95790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b95790(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b957b0; body size 22 bytes.
#line 1 "ENTRY_10b957b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b957b0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b957d0; body size 5 bytes.
#line 1 "ENTRY_10b957d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b957d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b957e0; body size 5 bytes.
#line 1 "ENTRY_10b957e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b957e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b957f0; body size 5 bytes.
#line 1 "ENTRY_10b957f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b957f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b95800; body size 5 bytes.
#line 1 "ENTRY_10b95800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b95800(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b95810; body size 21 bytes.
#line 1 "ENTRY_10b95810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::FUN_10b95810(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
{
  undefined1 *param_1 = (undefined1 *)this;
  *param_1 = (undefined1)(0);
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 8) = *param_4;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(param_1);
}


// Reference entry 10b95830; body size 63 bytes.
#line 1 "ENTRY_10b95830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10b95830(undefined4 *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*(int *)*param_2);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10b95880; body size 34 bytes.
#line 1 "ENTRY_10b95880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b95880(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b958b0; body size 26 bytes.
#line 1 "ENTRY_10b958b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10b958b0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10b958d0; body size 26 bytes.
#line 1 "ENTRY_10b958d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10b958d0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10b958f0; body size 43 bytes.
#line 1 "ENTRY_10b958f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10b958f0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  param_1[1] = 0;
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (int)piVar1;
    (**(code **)(*piVar1 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10b95930; body size 26 bytes.
#line 1 "ENTRY_10b95930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10b95930(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10b95950; body size 26 bytes.
#line 1 "ENTRY_10b95950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10b95950(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10b95970; body size 83 bytes.
#line 1 "ENTRY_10b95970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10b95970(int *param_2)
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
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10b959e0; body size 57 bytes.
#line 1 "ENTRY_10b959e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __stdcall FUN_10b959e0(byte *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2])
          * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 10b95a30; body size 18 bytes.
#line 1 "ENTRY_10b95a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10b95a30(int *param_1,int *param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10b95a50; body size 55 bytes.
#line 1 "ENTRY_10b95a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10b95a50(byte *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2])
          * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 10b95aa0; body size 3 bytes.
#line 1 "ENTRY_10b95aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b95aa0(void)

{
  return;
}


// Reference entry 10b95ab0; body size 3 bytes.
#line 1 "ENTRY_10b95ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b95ab0(void)

{
  return;
}


// Reference entry 10b95ac0; body size 13 bytes.
#line 1 "ENTRY_10b95ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b95ac0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10b95ad0; body size 13 bytes.
#line 1 "ENTRY_10b95ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b95ad0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10b95ae0; body size 13 bytes.
#line 1 "ENTRY_10b95ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b95ae0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10b95af0; body size 13 bytes.
#line 1 "ENTRY_10b95af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b95af0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10b95b00; body size 13 bytes.
#line 1 "ENTRY_10b95b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b95b00(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10b95b10; body size 13 bytes.
#line 1 "ENTRY_10b95b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b95b10(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10b95b20; body size 3 bytes.
#line 1 "ENTRY_10b95b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b95b20(void)

{
  return;
}


// Reference entry 10b95b30; body size 3 bytes.
#line 1 "ENTRY_10b95b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b95b30(void)

{
  return;
}


// Reference entry 10b95b40; body size 3 bytes.
#line 1 "ENTRY_10b95b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b95b40(void)

{
  return;
}


// Reference entry 10b95b50; body size 3 bytes.
#line 1 "ENTRY_10b95b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b95b50(void)

{
  return;
}


// Reference entry 10b95b60; body size 18 bytes.
#line 1 "ENTRY_10b95b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10b95b60(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4 **)(param_1 + 4) = *param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}


// Reference entry 10b95b80; body size 18 bytes.
#line 1 "ENTRY_10b95b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10b95b80(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4 **)(param_1 + 4) = *param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}


// Reference entry 10b95db0; body size 51 bytes.
#line 1 "ENTRY_10b95db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b95db0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)param_2[1] = 0;
  puVar2 = (undefined4 *)((undefined4 *)*param_2);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)*puVar2);
    thunk_FUN_10b98d60();
    thunk_FUN_1148a50e(puVar2,0x14);
    puVar2 = (undefined4 *)(puVar1);
  }
  return;
}


// Reference entry 10b95df0; body size 15 bytes.
#line 1 "ENTRY_10b95df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b95df0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 10b95e10; body size 15 bytes.
#line 1 "ENTRY_10b95e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b95e10(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 10b95eb0; body size 26 bytes.
#line 1 "ENTRY_10b95eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b95eb0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_10b98d60();
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 10b95ed0; body size 7 bytes.
#line 1 "ENTRY_10b95ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b95ed0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10b95ee0; body size 7 bytes.
#line 1 "ENTRY_10b95ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b95ee0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10b95ef0; body size 5 bytes.
#line 1 "ENTRY_10b95ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b95ef0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b95f00; body size 5 bytes.
#line 1 "ENTRY_10b95f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b95f00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b96430; body size 5 bytes.
#line 1 "ENTRY_10b96430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b96430(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b96440; body size 5 bytes.
#line 1 "ENTRY_10b96440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b96440(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b96450; body size 5 bytes.
#line 1 "ENTRY_10b96450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b96450(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b96460; body size 5 bytes.
#line 1 "ENTRY_10b96460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b96460(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b96470; body size 5 bytes.
#line 1 "ENTRY_10b96470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b96470(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b96480; body size 5 bytes.
#line 1 "ENTRY_10b96480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b96480(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b96490; body size 5 bytes.
#line 1 "ENTRY_10b96490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b96490(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b964a0; body size 5 bytes.
#line 1 "ENTRY_10b964a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b964a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b964b0; body size 5 bytes.
#line 1 "ENTRY_10b964b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b964b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b964c0; body size 5 bytes.
#line 1 "ENTRY_10b964c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b964c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b964d0; body size 5 bytes.
#line 1 "ENTRY_10b964d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b964d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b964e0; body size 5 bytes.
#line 1 "ENTRY_10b964e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b964e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b964f0; body size 130 bytes.
#line 1 "ENTRY_10b964f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10b964f0(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  param_2[1] = 0;
  (**(code **)(*param_1 + 4))();
  piVar2 = (int *)((int *)param_1[2]);
  if (piVar2 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  param_1[1] = (int)piVar1;
  if (piVar1 == (int *)0x0) {
    param_1[2] = 0;
  }
  else {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))());
    param_1[2] = iVar3;
    if ((int *)param_1[1] != (int *)0x0) {
      (**(code **)(*(int *)param_1[1] + 0x14))(param_3);
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1]);
}


// Reference entry 10b965a0; body size 29 bytes.
#line 1 "ENTRY_10b965a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b965a0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}


// Reference entry 10b965d0; body size 55 bytes.
#line 1 "ENTRY_10b965d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b965d0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)*param_4);
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}


// Reference entry 10b96690; body size 9 bytes.
#line 1 "ENTRY_10b96690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b96690(undefined4 param_1,int *param_2)

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

  if (piVar1 != (int *)0x0) {
    param_2[1] = 0;
    param_2[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar3);
  }
  iVar2 = (int)(*param_2);

  if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
    iVar4 = (int)(thunk_FUN_1123fcd0((void *)(iVar2 + -0x10)));
    if (iVar4 == 0) {
      *(undefined4 *)(iVar2 + -8) = 0;
      *(undefined4 *)(iVar2 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar2,*(undefined4 *)(iVar2 + -4));
      free((void *)(iVar2 + -0x10));
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10b966a0; body size 15 bytes.
#line 1 "ENTRY_10b966a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b966a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10b966c0; body size 15 bytes.
#line 1 "ENTRY_10b966c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b966c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10b967e0; body size 5 bytes.
#line 1 "ENTRY_10b967e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b967e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b967f0; body size 5 bytes.
#line 1 "ENTRY_10b967f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b967f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b96800; body size 5 bytes.
#line 1 "ENTRY_10b96800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b96800(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b96810; body size 5 bytes.
#line 1 "ENTRY_10b96810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b96810(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b96820; body size 5 bytes.
#line 1 "ENTRY_10b96820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b96820(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b96830; body size 5 bytes.
#line 1 "ENTRY_10b96830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b96830(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b96840; body size 5 bytes.
#line 1 "ENTRY_10b96840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b96840(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b96850; body size 5 bytes.
#line 1 "ENTRY_10b96850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b96850(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b96860; body size 5 bytes.
#line 1 "ENTRY_10b96860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b96860(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b96870; body size 5 bytes.
#line 1 "ENTRY_10b96870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b96870(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b96880; body size 5 bytes.
#line 1 "ENTRY_10b96880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b96880(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b96890; body size 6 bytes.
#line 1 "ENTRY_10b96890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b96890(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIArtworkCache");
}


// Reference entry 10b968a0; body size 6 bytes.
#line 1 "ENTRY_10b968a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b968a0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIArtworkCacheManager");
}


// Reference entry 10b968b0; body size 6 bytes.
#line 1 "ENTRY_10b968b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b968b0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIArtworkData");
}


// Reference entry 10b968c0; body size 6 bytes.
#line 1 "ENTRY_10b968c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b968c0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCILogoArtworkCache");
}


// Reference entry 10b968d0; body size 30 bytes.
#line 1 "ENTRY_10b968d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b968d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 10b96900; body size 30 bytes.
#line 1 "ENTRY_10b96900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b96900(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 10b96af0; body size 27 bytes.
#line 1 "ENTRY_10b96af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b96af0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b96b20; body size 27 bytes.
#line 1 "ENTRY_10b96b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b96b20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b96b50; body size 27 bytes.
#line 1 "ENTRY_10b96b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b96b50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b96b80; body size 27 bytes.
#line 1 "ENTRY_10b96b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b96b80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b96bb0; body size 70 bytes.
#line 1 "ENTRY_10b96bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b96bb0(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[3] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0xf] = 0;
  param_1[0x19] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b96c80; body size 16 bytes.
#line 1 "ENTRY_10b96c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b96c80(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b96d10; body size 16 bytes.
#line 1 "ENTRY_10b96d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b96d10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b96d30; body size 16 bytes.
#line 1 "ENTRY_10b96d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b96d30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b96d90; body size 16 bytes.
#line 1 "ENTRY_10b96d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b96d90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b96db0; body size 16 bytes.
#line 1 "ENTRY_10b96db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b96db0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b96e10; body size 48 bytes.
#line 1 "ENTRY_10b96e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10b96e10(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  *param_1 = (int)(0);
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  piVar2 = (int *)((int *)*param_1);
  if (piVar2 != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10b96e90; body size 18 bytes.
#line 1 "ENTRY_10b96e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b96e90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b96eb0; body size 18 bytes.
#line 1 "ENTRY_10b96eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b96eb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b96ed0; body size 10 bytes.
#line 1 "ENTRY_10b96ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b96ed0(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10b97090; body size 11 bytes.
#line 1 "ENTRY_10b97090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b97090(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b970a0; body size 9 bytes.
#line 1 "ENTRY_10b970a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b970a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b970b0; body size 11 bytes.
#line 1 "ENTRY_10b970b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b970b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b970c0; body size 9 bytes.
#line 1 "ENTRY_10b970c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b970c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b970d0; body size 11 bytes.
#line 1 "ENTRY_10b970d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b970d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b970e0; body size 9 bytes.
#line 1 "ENTRY_10b970e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b970e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b970f0; body size 11 bytes.
#line 1 "ENTRY_10b970f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b970f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b97100; body size 9 bytes.
#line 1 "ENTRY_10b97100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b97100(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b97110; body size 11 bytes.
#line 1 "ENTRY_10b97110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b97110(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b97120; body size 9 bytes.
#line 1 "ENTRY_10b97120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b97120(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b97130; body size 11 bytes.
#line 1 "ENTRY_10b97130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b97130(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b97140; body size 9 bytes.
#line 1 "ENTRY_10b97140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b97140(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b97150; body size 11 bytes.
#line 1 "ENTRY_10b97150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b97150(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b97160; body size 11 bytes.
#line 1 "ENTRY_10b97160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b97160(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b97170; body size 16 bytes.
#line 1 "ENTRY_10b97170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b97170(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b97190; body size 16 bytes.
#line 1 "ENTRY_10b97190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b97190(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b971b0; body size 17 bytes.
#line 1 "ENTRY_10b971b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10b971b0(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(param_1);
}


// Reference entry 10b971d0; body size 23 bytes.
#line 1 "ENTRY_10b971d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8 * __thiscall Recovered_Bulk::FUN_10b971d0(undefined8 *param_2)
{
  undefined8 *param_1 = (undefined8 *)this;
  *param_1 = (undefined8)(*param_2);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8 *)(param_1);
}


// Reference entry 10b971f0; body size 13 bytes.
#line 1 "ENTRY_10b971f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b971f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b97200; body size 14 bytes.
#line 1 "ENTRY_10b97200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b97200(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b97220; body size 14 bytes.
#line 1 "ENTRY_10b97220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b97220(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b97240; body size 23 bytes.
#line 1 "ENTRY_10b97240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b97240(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b97260; body size 23 bytes.
#line 1 "ENTRY_10b97260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b97260(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b97280; body size 3 bytes.
#line 1 "ENTRY_10b97280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b97280(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b97290; body size 3 bytes.
#line 1 "ENTRY_10b97290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b97290(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b972a0; body size 12 bytes.
#line 1 "ENTRY_10b972a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b972a0(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10b97e60; body size 42 bytes.
#line 1 "ENTRY_10b97e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b97e60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCGetAASessionCallback);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b97ea0; body size 9 bytes.
#line 1 "ENTRY_10b97ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b97ea0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIArtworkCache);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b97eb0; body size 9 bytes.
#line 1 "ENTRY_10b97eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b97eb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIArtworkCacheManager);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b97ec0; body size 9 bytes.
#line 1 "ENTRY_10b97ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b97ec0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIArtworkData);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b97ed0; body size 9 bytes.
#line 1 "ENTRY_10b97ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b97ed0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCILogoArtworkCache);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b98310; body size 32 bytes.
#line 1 "ENTRY_10b98310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b98310(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SvgExtractor);
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b98340; body size 44 bytes.
#line 1 "ENTRY_10b98340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b98340(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_1125b880(param_1,LAB_100537fb,LAB_1008a49a);
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SvgFileParser);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b98380; body size 9 bytes.
#line 1 "ENTRY_10b98380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b98380(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SvgFileParserCB);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b98390; body size 11 bytes.
#line 1 "ENTRY_10b98390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b98390(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b983a0; body size 11 bytes.
#line 1 "ENTRY_10b983a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10b983a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b983c0; body size 5 bytes.
#line 1 "ENTRY_10b983c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b983c0(int param_1)

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
  thunk_FUN_10b98c90();
  return;
}


// Reference entry 10b98c20; body size 3 bytes.
#line 1 "ENTRY_10b98c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b98c20(void)

{
  return;
}


// Reference entry 10b98c30; body size 3 bytes.
#line 1 "ENTRY_10b98c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b98c30(void)

{
  return;
}


// Reference entry 10b98e30; body size 5 bytes.
#line 1 "ENTRY_10b98e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b98e30(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = (int)(*(int *)(param_1 + 0x14));
  uVar3 = (uint)(*(int *)(param_1 + 0x18) - iVar1 & 0xfffffffc);
  iVar2 = (int)(iVar1);
  if (0xfff < uVar3) {
    iVar2 = (int)(*(int *)(iVar1 + -4));
    uVar3 = (uint)(uVar3 + 0x23);
    if (0x1f < (iVar1 - iVar2) - 4U) {
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1148a50e(iVar2,uVar3);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  puVar4 = (undefined4 *)((undefined4 *)(param_1 + 0xc));
  thunk_FUN_10b95cf0(puVar4,*puVar4);
  thunk_FUN_1148a50e(*puVar4,0x14);
  return;
}


// Reference entry 10b98e40; body size 5 bytes.
#line 1 "ENTRY_10b98e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b98e40(int param_1)

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
  thunk_FUN_10b98c90();
  return;
}


// Reference entry 10b99210; body size 19 bytes.
#line 1 "ENTRY_10b99210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b99210(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10b99230; body size 7 bytes.
#line 1 "ENTRY_10b99230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b99230(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10b99240; body size 7 bytes.
#line 1 "ENTRY_10b99240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b99240(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10b99250; body size 7 bytes.
#line 1 "ENTRY_10b99250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b99250(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10b99260; body size 7 bytes.
#line 1 "ENTRY_10b99260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b99260(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10b993e0; body size 7 bytes.
#line 1 "ENTRY_10b993e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b993e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SvgFileParserCB);
  return;
}


// Reference entry 10b993f0; body size 72 bytes.
#line 1 "ENTRY_10b993f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b993f0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piStack_4;
  
  iVar2 = (int)(*param_1);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x10) != 0)) {
    piVar1 = (int *)((int *)(iVar2 + 0xc));
    piStack_4 = (int *)(param_1);
    thunk_FUN_10b95cf0(piVar1,*(undefined4 *)(iVar2 + 0xc));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int *)(*piVar1 + 4) = *piVar1;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    piStack_4 = (int *)((int *)*piVar1);
    thunk_FUN_10b966e0(*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),&piStack_4);
  }
  return;
}


// Reference entry 10b99460; body size 65 bytes.
#line 1 "ENTRY_10b99460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10b99460(int *param_2)
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
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10b994c0; body size 65 bytes.
#line 1 "ENTRY_10b994c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10b994c0(int *param_2)
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
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10b996e0; body size 42 bytes.
#line 1 "ENTRY_10b996e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10b996e0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  piVar2 = (int *)((int *)*param_1);
  if (piVar2 != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10b997d0; body size 14 bytes.
#line 1 "ENTRY_10b997d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10b997d0(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10b997f0; body size 14 bytes.
#line 1 "ENTRY_10b997f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10b997f0(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10b99810; body size 14 bytes.
#line 1 "ENTRY_10b99810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10b99810(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10b99830; body size 14 bytes.
#line 1 "ENTRY_10b99830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10b99830(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10b998b0; body size 3 bytes.
#line 1 "ENTRY_10b998b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b998b0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10b998c0; body size 7 bytes.
#line 1 "ENTRY_10b998c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b998c0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10b998d0; body size 3 bytes.
#line 1 "ENTRY_10b998d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b998d0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10b998e0; body size 7 bytes.
#line 1 "ENTRY_10b998e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b998e0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10b998f0; body size 7 bytes.
#line 1 "ENTRY_10b998f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b998f0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10b99900; body size 3 bytes.
#line 1 "ENTRY_10b99900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b99900(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10b99910; body size 7 bytes.
#line 1 "ENTRY_10b99910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b99910(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10b99920; body size 3 bytes.
#line 1 "ENTRY_10b99920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b99920(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10b99930; body size 8 bytes.
#line 1 "ENTRY_10b99930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b99930(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10b99940; body size 4 bytes.
#line 1 "ENTRY_10b99940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b99940(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10b99950; body size 3 bytes.
#line 1 "ENTRY_10b99950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b99950(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10b99960; body size 3 bytes.
#line 1 "ENTRY_10b99960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b99960(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10b99970; body size 3 bytes.
#line 1 "ENTRY_10b99970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b99970(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10b99980; body size 3 bytes.
#line 1 "ENTRY_10b99980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b99980(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10b99990; body size 3 bytes.
#line 1 "ENTRY_10b99990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b99990(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10b999a0; body size 3 bytes.
#line 1 "ENTRY_10b999a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b999a0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10b999b0; body size 3 bytes.
#line 1 "ENTRY_10b999b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b999b0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10b999c0; body size 6 bytes.
#line 1 "ENTRY_10b999c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b999c0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 8);
}


// Reference entry 10b999d0; body size 6 bytes.
#line 1 "ENTRY_10b999d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b999d0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 8);
}


// Reference entry 10b999e0; body size 6 bytes.
#line 1 "ENTRY_10b999e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b999e0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 8);
}


// Reference entry 10b999f0; body size 6 bytes.
#line 1 "ENTRY_10b999f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b999f0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 8);
}


// Reference entry 10b99a00; body size 6 bytes.
#line 1 "ENTRY_10b99a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b99a00(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 8);
}


// Reference entry 10b99a10; body size 6 bytes.
#line 1 "ENTRY_10b99a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b99a10(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 8);
}


// Reference entry 10b99a20; body size 6 bytes.
#line 1 "ENTRY_10b99a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b99a20(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 8);
}


// Reference entry 10b99a30; body size 6 bytes.
#line 1 "ENTRY_10b99a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b99a30(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 8);
}


// Reference entry 10b99a40; body size 6 bytes.
#line 1 "ENTRY_10b99a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b99a40(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 8);
}


// Reference entry 10b99a50; body size 6 bytes.
#line 1 "ENTRY_10b99a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b99a50(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 8);
}


// Reference entry 10b99a60; body size 9 bytes.
#line 1 "ENTRY_10b99a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b99a60(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b99a70; body size 9 bytes.
#line 1 "ENTRY_10b99a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b99a70(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b99a80; body size 15 bytes.
#line 1 "ENTRY_10b99a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10b99a80(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *param_2 = (undefined4)(puVar1);
  *param_1 = (undefined4)(*puVar1);
  return;
}


// Reference entry 10b99aa0; body size 15 bytes.
#line 1 "ENTRY_10b99aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10b99aa0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *param_2 = (undefined4)(puVar1);
  *param_1 = (undefined4)(*puVar1);
  return;
}


// Reference entry 10b99ac0; body size 9 bytes.
#line 1 "ENTRY_10b99ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b99ac0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b99ad0; body size 9 bytes.
#line 1 "ENTRY_10b99ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b99ad0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b99ae0; body size 9 bytes.
#line 1 "ENTRY_10b99ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b99ae0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b99af0; body size 9 bytes.
#line 1 "ENTRY_10b99af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b99af0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10b99b00; body size 10 bytes.
#line 1 "ENTRY_10b99b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10b99b00(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10b99b10; body size 10 bytes.
#line 1 "ENTRY_10b99b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10b99b10(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10b99b40; body size 57 bytes.
#line 1 "ENTRY_10b99b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __stdcall FUN_10b99b40(byte *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2])
          * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 10b9a400; body size 22 bytes.
#line 1 "ENTRY_10b9a400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b9a400(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x14));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10b9a420; body size 22 bytes.
#line 1 "ENTRY_10b9a420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b9a420(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x14));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10b9a700; body size 67 bytes.
#line 1 "ENTRY_10b9a700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b9a700(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x10) + 1);
  fVar2 = (float)((float)((double)iVar1 + (double)(&DAT_11880fb0)[-(iVar1 >> 0x1f)]) /
          (float)((double)*(int *)(param_1 + 0x24) +
                 (double)(&DAT_11880fb0)[-(*(int *)(param_1 + 0x24) >> 0x1f)]));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(float *)(param_1 + 8) <= fVar2 && fVar2 != *(float *)(param_1 + 8));
}


// Reference entry 10b9a760; body size 66 bytes.
#line 1 "ENTRY_10b9a760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b9a760(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) +
                 (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 <= fVar1 && fVar1 != *param_1);
}


// Reference entry 10b9a920; body size 8 bytes.
#line 1 "ENTRY_10b9a920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b9a920(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10b9a930; body size 54 bytes.
#line 1 "ENTRY_10b9a930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10b9a930(int *param_2,int param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((int *)(*(int *)(param_1 + 0x14) + param_3 * 8));
  if ((int *)piVar1[1] != param_2) {
    if ((int *)*piVar1 == (int *)(param_2)) {
      *piVar1 = (int)(*param_2);
    }
    return;
  }
  if ((int *)*piVar1 == (int *)(param_2)) {
    iVar2 = (int)(*(int *)(param_1 + 0xc));
    *piVar1 = (int)(iVar2);
    piVar1[1] = iVar2;
    return;
  }
  piVar1[1] = param_2[1];
  return;
}


// Reference entry 10b9a980; body size 54 bytes.
#line 1 "ENTRY_10b9a980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10b9a980(int *param_2,int param_3)
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
    piVar1[1] = iVar2;
    return;
  }
  piVar1[1] = param_2[1];
  return;
}


// Reference entry 10b9ae50; body size 3 bytes.
#line 1 "ENTRY_10b9ae50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9ae50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b9ae60; body size 3 bytes.
#line 1 "ENTRY_10b9ae60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9ae60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b9ae70; body size 3 bytes.
#line 1 "ENTRY_10b9ae70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9ae70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b9ae80; body size 3 bytes.
#line 1 "ENTRY_10b9ae80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9ae80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b9ae90; body size 3 bytes.
#line 1 "ENTRY_10b9ae90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9ae90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b9aea0; body size 3 bytes.
#line 1 "ENTRY_10b9aea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9aea0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b9aeb0; body size 3 bytes.
#line 1 "ENTRY_10b9aeb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9aeb0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b9aec0; body size 3 bytes.
#line 1 "ENTRY_10b9aec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9aec0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b9aed0; body size 3 bytes.
#line 1 "ENTRY_10b9aed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9aed0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b9aee0; body size 3 bytes.
#line 1 "ENTRY_10b9aee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9aee0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b9aef0; body size 4 bytes.
#line 1 "ENTRY_10b9aef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b9aef0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 8);
}


// Reference entry 10b9af00; body size 4 bytes.
#line 1 "ENTRY_10b9af00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b9af00(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 8);
}


// Reference entry 10b9af10; body size 3 bytes.
#line 1 "ENTRY_10b9af10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9af10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b9af20; body size 3 bytes.
#line 1 "ENTRY_10b9af20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9af20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b9af30; body size 3 bytes.
#line 1 "ENTRY_10b9af30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9af30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b9af40; body size 3 bytes.
#line 1 "ENTRY_10b9af40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9af40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b9af50; body size 4 bytes.
#line 1 "ENTRY_10b9af50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9af50(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10b9b060; body size 7 bytes.
#line 1 "ENTRY_10b9b060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b9b060(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 10b9b070; body size 4 bytes.
#line 1 "ENTRY_10b9b070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b9b070(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 8);
}


// Reference entry 10b9b080; body size 4 bytes.
#line 1 "ENTRY_10b9b080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b9b080(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 8);
}


// Reference entry 10b9b090; body size 3 bytes.
#line 1 "ENTRY_10b9b090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9b090(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b9b0a0; body size 3 bytes.
#line 1 "ENTRY_10b9b0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9b0a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b9b190; body size 3 bytes.
#line 1 "ENTRY_10b9b190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b9b190(void)

{
  return;
}


// Reference entry 10b9b1a0; body size 3 bytes.
#line 1 "ENTRY_10b9b1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b9b1a0(void)

{
  return;
}


// Reference entry 10b9b1b0; body size 3 bytes.
#line 1 "ENTRY_10b9b1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b9b1b0(void)

{
  return;
}


// Reference entry 10b9b1c0; body size 3 bytes.
#line 1 "ENTRY_10b9b1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b9b1c0(void)

{
  return;
}


// Reference entry 10b9b330; body size 11 bytes.
#line 1 "ENTRY_10b9b330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9b330(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10b9b340; body size 11 bytes.
#line 1 "ENTRY_10b9b340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9b340(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10b9b350; body size 6 bytes.
#line 1 "ENTRY_10b9b350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b9b350(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10b9b360; body size 6 bytes.
#line 1 "ENTRY_10b9b360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b9b360(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10b9b370; body size 26 bytes.
#line 1 "ENTRY_10b9b370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10b9b370(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 10b9b390; body size 10 bytes.
#line 1 "ENTRY_10b9b390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10b9b390(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 10b9b530; body size 14 bytes.
#line 1 "ENTRY_10b9b530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10b9b530(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 0xc));
  return;
}


// Reference entry 10b9b550; body size 14 bytes.
#line 1 "ENTRY_10b9b550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10b9b550(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 4));
  return;
}


// Reference entry 10b9b570; body size 13 bytes.
#line 1 "ENTRY_10b9b570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10b9b570(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10b9b580; body size 13 bytes.
#line 1 "ENTRY_10b9b580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10b9b580(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10b9b590; body size 12 bytes.
#line 1 "ENTRY_10b9b590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10b9b590(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
  return;
}


// Reference entry 10b9b5a0; body size 12 bytes.
#line 1 "ENTRY_10b9b5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10b9b5a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10b9b5b0; body size 11 bytes.
#line 1 "ENTRY_10b9b5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10b9b5b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10b9b5c0; body size 11 bytes.
#line 1 "ENTRY_10b9b5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10b9b5c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10b9b670; body size 48 bytes.
#line 1 "ENTRY_10b9b670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10b9b670(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  *(int *)param_2[1] = iVar1;
  *(int *)(iVar1 + 4) = param_2[1];
  thunk_FUN_10b98d60();
  thunk_FUN_1148a50e(param_2,0x14);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1);
}


// Reference entry 10b9b6b0; body size 43 bytes.
#line 1 "ENTRY_10b9b6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b9b6b0(int param_1,int param_2,int param_3)

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


// Reference entry 10b9b6f0; body size 43 bytes.
#line 1 "ENTRY_10b9b6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b9b6f0(int param_1,int param_2,int param_3)

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


// Reference entry 10b9baf0; body size 90 bytes.
#line 1 "ENTRY_10b9baf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10b9baf0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0xccccccd) {
    param_1 = (uint)(param_1 * 0x14);
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


// Reference entry 10b9bb70; body size 90 bytes.
#line 1 "ENTRY_10b9bb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10b9bb70(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0xccccccd) {
    param_1 = (uint)(param_1 * 0x14);
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


// Reference entry 10b9bbf0; body size 87 bytes.
#line 1 "ENTRY_10b9bbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10b9bbf0(uint param_1)

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


// Reference entry 10b9bc60; body size 87 bytes.
#line 1 "ENTRY_10b9bc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10b9bc60(uint param_1)

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


// Reference entry 10b9bcd0; body size 14 bytes.
#line 1 "ENTRY_10b9bcd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10b9bcd0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 0xc));
  return;
}


// Reference entry 10b9bcf0; body size 14 bytes.
#line 1 "ENTRY_10b9bcf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10b9bcf0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 4));
  return;
}


// Reference entry 10b9bd10; body size 13 bytes.
#line 1 "ENTRY_10b9bd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10b9bd10(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10b9bd20; body size 13 bytes.
#line 1 "ENTRY_10b9bd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10b9bd20(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10b9bd30; body size 68 bytes.
#line 1 "ENTRY_10b9bd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10b9bd30(byte *param_2)
{
  int param_1 = (int )this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(uint *)(param_1 + 0x20) &
         ((((*param_2 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_2[1]) * 0x1000193 ^ (uint)param_2[2])
          * 0x1000193 ^ (uint)param_2[3]) * 0x1000193);
}


// Reference entry 10b9bd90; body size 35 bytes.
#line 1 "ENTRY_10b9bd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10b9bd90(undefined4 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)((undefined1 *)*param_2);
  }
  uVar1 = (uint)(thunk_FUN_101c82e0(puVar2));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1 & *(uint *)(param_1 + 0x18));
}


// Reference entry 10b9bdc0; body size 4 bytes.
#line 1 "ENTRY_10b9bdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9bdc0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10b9bdd0; body size 4 bytes.
#line 1 "ENTRY_10b9bdd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9bdd0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10b9bf70; body size 68 bytes.
#line 1 "ENTRY_10b9bf70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b9bf70(int param_1)

{
  int *piVar1;
  int iStack_4;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    piVar1 = (int *)((int *)(param_1 + 0xc));
    iStack_4 = (int)(param_1);
    thunk_FUN_10b95cf0(piVar1,*(undefined4 *)(param_1 + 0xc));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int *)(*piVar1 + 4) = *piVar1;
    *(undefined4 *)(param_1 + 0x10) = 0;
    iStack_4 = (int)(*piVar1);
    thunk_FUN_10b966e0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),&iStack_4);
  }
  return;
}


// Reference entry 10b9c160; body size 57 bytes.
#line 1 "ENTRY_10b9c160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b9c160(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10b9c1b0; body size 57 bytes.
#line 1 "ENTRY_10b9c1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b9c1b0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10b9c200; body size 60 bytes.
#line 1 "ENTRY_10b9c200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10b9c200(int param_1,int param_2)

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


// Reference entry 10b9c250; body size 60 bytes.
#line 1 "ENTRY_10b9c250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10b9c250(int param_1,int param_2)

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


// Reference entry 10b9c2a0; body size 61 bytes.
#line 1 "ENTRY_10b9c2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10b9c2a0(int param_1,int param_2)

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


// Reference entry 10b9c2f0; body size 61 bytes.
#line 1 "ENTRY_10b9c2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10b9c2f0(int param_1,int param_2)

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


// Reference entry 10b9c340; body size 16 bytes.
#line 1 "ENTRY_10b9c340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9c340(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10b9c360; body size 9 bytes.
#line 1 "ENTRY_10b9c360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9c360(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10b9c4b0; body size 12 bytes.
#line 1 "ENTRY_10b9c4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10b9c4b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
  return;
}


// Reference entry 10b9c4c0; body size 12 bytes.
#line 1 "ENTRY_10b9c4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10b9c4c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10b9c4d0; body size 11 bytes.
#line 1 "ENTRY_10b9c4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10b9c4d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10b9c4e0; body size 11 bytes.
#line 1 "ENTRY_10b9c4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10b9c4e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10b9c4f0; body size 3 bytes.
#line 1 "ENTRY_10b9c4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b9c4f0(void)

{
  return;
}


// Reference entry 10b9c730; body size 4 bytes.
#line 1 "ENTRY_10b9c730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9c730(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x2c));
}


// Reference entry 10b9de50; body size 4 bytes.
#line 1 "ENTRY_10b9de50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9de50(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x78));
}


// Reference entry 10b9e070; body size 4 bytes.
#line 1 "ENTRY_10b9e070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9e070(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10b9e530; body size 4 bytes.
#line 1 "ENTRY_10b9e530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9e530(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10b9e8f0; body size 6 bytes.
#line 1 "ENTRY_10b9e8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b9e8f0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIArtworkCache");
}


// Reference entry 10b9e900; body size 6 bytes.
#line 1 "ENTRY_10b9e900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b9e900(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIArtworkCacheManager");
}


// Reference entry 10b9e910; body size 6 bytes.
#line 1 "ENTRY_10b9e910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b9e910(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIArtworkData");
}


// Reference entry 10b9e920; body size 6 bytes.
#line 1 "ENTRY_10b9e920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b9e920(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCILogoArtworkCache");
}


// Reference entry 10b9ebb0; body size 34 bytes.
#line 1 "ENTRY_10b9ebb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b9ebb0(char *param_1,uint param_2)

{
  if ((((2 < param_2) && (*param_1 == -1)) && (param_1[1] == -0x28)) && (param_1[2] == -1)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10b9f030; body size 10 bytes.
#line 1 "ENTRY_10b9f030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b9f030(undefined1 param_1)

{
  DAT_122e8a30 = (int)(param_1);
  return;
}


// Reference entry 10b9f040; body size 4 bytes.
#line 1 "ENTRY_10b9f040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_10b9f040(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10)((float10)*(float *)(param_1 + 8));
}


// Reference entry 10b9f050; body size 3 bytes.
#line 1 "ENTRY_10b9f050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_10b9f050(float *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10)((float10)*param_1);
}


// Reference entry 10b9f060; body size 6 bytes.
#line 1 "ENTRY_10b9f060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b9f060(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xccccccc);
}


// Reference entry 10b9f070; body size 6 bytes.
#line 1 "ENTRY_10b9f070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b9f070(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xccccccc);
}


// Reference entry 10b9f080; body size 6 bytes.
#line 1 "ENTRY_10b9f080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b9f080(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 10b9f090; body size 6 bytes.
#line 1 "ENTRY_10b9f090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b9f090(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 10b9f0a0; body size 6 bytes.
#line 1 "ENTRY_10b9f0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b9f0a0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 10b9f0b0; body size 6 bytes.
#line 1 "ENTRY_10b9f0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b9f0b0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 10b9f0c0; body size 6 bytes.
#line 1 "ENTRY_10b9f0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b9f0c0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xccccccc);
}


// Reference entry 10b9f0d0; body size 6 bytes.
#line 1 "ENTRY_10b9f0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b9f0d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xccccccc);
}


// Reference entry 10b9f5f0; body size 5 bytes.
#line 1 "ENTRY_10b9f5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b9f5f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b9f600; body size 5 bytes.
#line 1 "ENTRY_10b9f600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b9f600(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10b9f610; body size 3 bytes.
#line 1 "ENTRY_10b9f610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9f610(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10b9f620; body size 3 bytes.
#line 1 "ENTRY_10b9f620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9f620(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10b9f630; body size 3 bytes.
#line 1 "ENTRY_10b9f630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9f630(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10b9f640; body size 3 bytes.
#line 1 "ENTRY_10b9f640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9f640(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10b9f650; body size 3 bytes.
#line 1 "ENTRY_10b9f650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9f650(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10b9f660; body size 3 bytes.
#line 1 "ENTRY_10b9f660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9f660(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10b9fbf0; body size 28 bytes.
#line 1 "ENTRY_10b9fbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b9fbf0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10b9fc20; body size 28 bytes.
#line 1 "ENTRY_10b9fc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b9fc20(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10b9fc50; body size 28 bytes.
#line 1 "ENTRY_10b9fc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b9fc50(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10b9fc80; body size 28 bytes.
#line 1 "ENTRY_10b9fc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b9fc80(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10b9fcb0; body size 28 bytes.
#line 1 "ENTRY_10b9fcb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b9fcb0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10b9fce0; body size 28 bytes.
#line 1 "ENTRY_10b9fce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b9fce0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10b9fd10; body size 28 bytes.
#line 1 "ENTRY_10b9fd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b9fd10(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10b9fd40; body size 20 bytes.
#line 1 "ENTRY_10b9fd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b9fd40(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10ba0ad0; body size 27 bytes.
#line 1 "ENTRY_10ba0ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ba0ad0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1106a8d0(param_1 + 0x8040,param_2,0x4002);
  return;
}


// Reference entry 10ba0b00; body size 10 bytes.
#line 1 "ENTRY_10ba0b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ba0b00(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x78) = param_2;
  return;
}


// Reference entry 10ba0b10; body size 10 bytes.
#line 1 "ENTRY_10ba0b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ba0b10(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return;
}


// Reference entry 10ba0b20; body size 10 bytes.
#line 1 "ENTRY_10ba0b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ba0b20(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x50) = param_2;
  return;
}


// Reference entry 10ba0b90; body size 49 bytes.
#line 1 "ENTRY_10ba0b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ba0b90(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1106a8d0(param_1 + 0x403e,param_2,0x4002);
  thunk_FUN_1106a8d0(param_1 + 0x3c,param_2,0x4002);
  return;
}


// Reference entry 10ba0bd0; body size 9 bytes.
#line 1 "ENTRY_10ba0bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ba0bd0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10ba0be0; body size 9 bytes.
#line 1 "ENTRY_10ba0be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ba0be0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10ba1ab0; body size 4 bytes.
#line 1 "ENTRY_10ba1ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba1ab0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 10ba1ac0; body size 18 bytes.
#line 1 "ENTRY_10ba1ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba1ac0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba1ae0; body size 18 bytes.
#line 1 "ENTRY_10ba1ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba1ae0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba1b00; body size 25 bytes.
#line 1 "ENTRY_10ba1b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba1b00(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba1b20; body size 22 bytes.
#line 1 "ENTRY_10ba1b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ba1b20(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba1b40; body size 22 bytes.
#line 1 "ENTRY_10ba1b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ba1b40(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba1b60; body size 22 bytes.
#line 1 "ENTRY_10ba1b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ba1b60(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba1b80; body size 52 bytes.
#line 1 "ENTRY_10ba1b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ba1b80(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba1bd0; body size 32 bytes.
#line 1 "ENTRY_10ba1bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ba1bd0(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba1c00; body size 22 bytes.
#line 1 "ENTRY_10ba1c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ba1c00(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba1c20; body size 22 bytes.
#line 1 "ENTRY_10ba1c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ba1c20(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba1c40; body size 18 bytes.
#line 1 "ENTRY_10ba1c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba1c40(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba1c60; body size 18 bytes.
#line 1 "ENTRY_10ba1c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba1c60(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba20a0; body size 22 bytes.
#line 1 "ENTRY_10ba20a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ba20a0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba20c0; body size 22 bytes.
#line 1 "ENTRY_10ba20c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ba20c0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba2120; body size 25 bytes.
#line 1 "ENTRY_10ba2120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba2120(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba22e0; body size 54 bytes.
#line 1 "ENTRY_10ba22e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ba22e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba2330; body size 34 bytes.
#line 1 "ENTRY_10ba2330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ba2330(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba2360; body size 91 bytes.
#line 1 "ENTRY_10ba2360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10ba2360(int *param_2)
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
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
  }
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10ba23e0; body size 26 bytes.
#line 1 "ENTRY_10ba23e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10ba23e0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10ba2400; body size 25 bytes.
#line 1 "ENTRY_10ba2400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ba2400(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba2420; body size 26 bytes.
#line 1 "ENTRY_10ba2420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10ba2420(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10ba2440; body size 26 bytes.
#line 1 "ENTRY_10ba2440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10ba2440(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10ba2540; body size 78 bytes.
#line 1 "ENTRY_10ba2540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10ba2540(int *param_2)
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
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
  }
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10ba2620; body size 78 bytes.
#line 1 "ENTRY_10ba2620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10ba2620(int *param_2)
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
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
  }
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10ba2690; body size 12 bytes.
#line 1 "ENTRY_10ba2690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10ba2690(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10ba26a0; body size 3 bytes.
#line 1 "ENTRY_10ba26a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba26a0(void)

{
  return;
}


// Reference entry 10ba26b0; body size 3 bytes.
#line 1 "ENTRY_10ba26b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba26b0(void)

{
  return;
}


// Reference entry 10ba26c0; body size 3 bytes.
#line 1 "ENTRY_10ba26c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba26c0(void)

{
  return;
}


// Reference entry 10ba26d0; body size 25 bytes.
#line 1 "ENTRY_10ba26d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba26d0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x2c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 10ba26f0; body size 25 bytes.
#line 1 "ENTRY_10ba26f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba26f0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 10ba2780; body size 182 bytes.
#line 1 "ENTRY_10ba2780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ba2780(int param_2,uint param_3,char param_4,char param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
  char cVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_3 < 8) {
    if (param_3 == 0) goto LAB_10ba280f;
  }
  else {
    uVar3 = (uint)(7);
    do {
      if ((param_5 != *(char *)(uVar3 + param_2)) && (param_4 != *(char *)(uVar3 + param_2)))
      goto LAB_10ba282e;
      uVar3 = (uint)(uVar3 + 1);
    } while (uVar3 < param_3);
    param_3 = (uint)(7);
  }
  iVar6 = (int)(param_3 + param_2);
  iVar4 = (int)(0);
  uVar3 = (uint)(0);
  iVar5 = (int)(0);
  do {
    cVar1 = (char)(*(char *)(iVar6 + -1));
    iVar6 = (int)(iVar6 + -1);
    uVar3 = (uint)(uVar3 | (uint)(param_5 == cVar1) << ((byte)iVar4 & 0x1f));
    if ((param_5 != cVar1) && (param_4 != cVar1)) {
LAB_10ba282e:
      thunk_FUN_10baa630();
      pcVar2 = (code *)((code *)swi(3));
      (*pcVar2)();
      return;
    }
    iVar4 = (int)(iVar4 + 1);
    if (iVar4 == 0x20) {
      param_1[iVar5] = uVar3;
      iVar5 = (int)(iVar5 + 1);
      uVar3 = (uint)(0);
      iVar4 = (int)(0);
    }
  } while (param_2 != iVar6);
  if (iVar4 != 0) {
    param_1[iVar5] = uVar3;
    iVar5 = (int)(iVar5 + 1);
  }
  if (iVar5 != 0) {
    return;
  }
LAB_10ba280f:
  for (iVar6 = (int)(1); iVar6 != 0; iVar6 = iVar6 + -1) {
    *param_1 = (undefined4)(0);
    param_1 = (undefined4 *)(param_1 + 1);
  }
  return;
}


// Reference entry 10ba2870; body size 13 bytes.
#line 1 "ENTRY_10ba2870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba2870(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10ba2880; body size 13 bytes.
#line 1 "ENTRY_10ba2880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba2880(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10ba2890; body size 13 bytes.
#line 1 "ENTRY_10ba2890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba2890(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10ba28a0; body size 13 bytes.
#line 1 "ENTRY_10ba28a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba28a0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10ba28b0; body size 3 bytes.
#line 1 "ENTRY_10ba28b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba28b0(void)

{
  return;
}


// Reference entry 10ba28c0; body size 3 bytes.
#line 1 "ENTRY_10ba28c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba28c0(void)

{
  return;
}


// Reference entry 10ba28d0; body size 33 bytes.
#line 1 "ENTRY_10ba28d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba28d0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x24) {
    thunk_FUN_10ba6fd0();
  }
  return;
}


// Reference entry 10ba2ac0; body size 23 bytes.
#line 1 "ENTRY_10ba2ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ba2ac0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10ba5d90(param_2);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x24;
  return;
}


// Reference entry 10ba2c30; body size 23 bytes.
#line 1 "ENTRY_10ba2c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ba2c30(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10ba5d90(param_2);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x24;
  return;
}


// Reference entry 10ba2ee0; body size 118 bytes.
#line 1 "ENTRY_10ba2ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ba2ee0(int *param_2,int *param_3)
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
      if ((int)puVar2[4] < *param_3) {
        puVar3 = (undefined4 *)((undefined4 *)puVar2[2]);
      }
      else {
        if ((*(char *)((int)puVar4 + 0xd) != '\0') && (*param_3 < (int)puVar2[4])) {
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
      if (*param_3 < (int)puVar1[4]) {
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
  param_2[1] = (int)puVar4;
  return;
}


// Reference entry 10ba2f80; body size 118 bytes.
#line 1 "ENTRY_10ba2f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ba2f80(int *param_2,int *param_3)
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
      if ((int)puVar2[4] < *param_3) {
        puVar3 = (undefined4 *)((undefined4 *)puVar2[2]);
      }
      else {
        if ((*(char *)((int)puVar4 + 0xd) != '\0') && (*param_3 < (int)puVar2[4])) {
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
      if (*param_3 < (int)puVar1[4]) {
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
  param_2[1] = (int)puVar4;
  return;
}


// Reference entry 10ba33a0; body size 73 bytes.
#line 1 "ENTRY_10ba33a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10ba33a0(int *param_2,int *param_3)
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
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_2);
}


// Reference entry 10ba3400; body size 15 bytes.
#line 1 "ENTRY_10ba3400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba3400(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x2c);
  return;
}


// Reference entry 10ba3420; body size 15 bytes.
#line 1 "ENTRY_10ba3420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba3420(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10ba3440; body size 15 bytes.
#line 1 "ENTRY_10ba3440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba3440(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x2c);
  return;
}


// Reference entry 10ba34e0; body size 5 bytes.
#line 1 "ENTRY_10ba34e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba34e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba34f0; body size 5 bytes.
#line 1 "ENTRY_10ba34f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba34f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba3500; body size 5 bytes.
#line 1 "ENTRY_10ba3500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba3500(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba3510; body size 7 bytes.
#line 1 "ENTRY_10ba3510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba3510(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ba3640; body size 5 bytes.
#line 1 "ENTRY_10ba3640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba3640(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba3650; body size 5 bytes.
#line 1 "ENTRY_10ba3650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba3650(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba3660; body size 31 bytes.
#line 1 "ENTRY_10ba3660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10ba3660(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (in_EAX = *param_2, *(int *)(param_1 + 0x10) <= (int)in_EAX)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(in_EAX & 0xffffff00);
}


// Reference entry 10ba3690; body size 31 bytes.
#line 1 "ENTRY_10ba3690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10ba3690(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (in_EAX = *param_2, *(int *)(param_1 + 0x10) <= (int)in_EAX)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(in_EAX & 0xffffff00);
}


// Reference entry 10ba36c0; body size 212 bytes.
#line 1 "ENTRY_10ba36c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ba36c0(uint param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  uint uVar2;
  void *_Src;
  uint uVar3;
  void *_Dst;
  uint uVar4;
  void *pvVar5;
  
  iVar1 = (int)(param_1[4]);
  if (0x7fffffffU - iVar1 < param_2) {
                    
    thunk_FUN_1012a4c0();
  }
  uVar2 = (uint)(param_1[5]);
  uVar4 = (uint)(iVar1 + param_2 | 0xf);
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
  param_1[4] = iVar1 + param_2;
  if (uVar2 < 0x10) {
    memcpy(_Dst,param_1,iVar1 + 1U);
    *param_1 = (undefined4)(_Dst);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
  }
  _Src = (void *)((void *)*param_1);
  memcpy(_Dst,_Src,iVar1 + 1U);
  uVar4 = (uint)(uVar2 + 1);
  pvVar5 = (void *)(_Src);
  if (0xfff < uVar4) {
    pvVar5 = (void *)(*(void **)((int)_Src + -4));
    uVar4 = (uint)(uVar2 + 0x24);
    if (0x1f < (uint)((int)_Src + (-4 - (int)pvVar5))) {
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1148a50e(pvVar5,uVar4);
  *param_1 = (undefined4)(_Dst);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba38a0; body size 12 bytes.
#line 1 "ENTRY_10ba38a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10ba38a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10ba38b0; body size 180 bytes.
#line 1 "ENTRY_10ba38b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba38b0(int param_1,uint param_2,uint param_3,byte *param_4,int param_5)

{
  byte *pbVar1;
  char acStack_104 [256];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)acStack_104);
  if (param_3 < param_2) {
    memset(acStack_104,0,0x100);
    pbVar1 = (byte *)(param_4 + param_5);
    for (; (byte *)(param_4) != pbVar1; param_4 = param_4 + 1) {
      acStack_104[*param_4] = '\x01';
    }
    for (pbVar1 = (byte *)((byte *)(param_1 + param_3)); pbVar1 < (byte *)(param_1 + param_2);
        pbVar1 = pbVar1 + 1) {
      if (acStack_104[*pbVar1] == '\0') {
        thunk_FUN_1148ac28();
        return;
      }
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10ba39a0; body size 80 bytes.
#line 1 "ENTRY_10ba39a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10ba39a0(int param_1,uint param_2,uint param_3,void *param_4,size_t param_5)

{
  void *pvVar1;
  char *pcVar2;
  
  if (param_3 < param_2) {
    for (pcVar2 = (char *)((char *)(param_1 + param_3)); pcVar2 < (char *)(param_1 + param_2);
        pcVar2 = pcVar2 + 1) {
      pvVar1 = (void *)(memchr(param_4,(int)*pcVar2,param_5));
      if (pvVar1 == (void *)0x0) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((int)pcVar2 - param_1);
      }
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(-1);
}


// Reference entry 10ba3d30; body size 5 bytes.
#line 1 "ENTRY_10ba3d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba3d30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba3f60; body size 5 bytes.
#line 1 "ENTRY_10ba3f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba3f60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba3f70; body size 5 bytes.
#line 1 "ENTRY_10ba3f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba3f70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba3f80; body size 5 bytes.
#line 1 "ENTRY_10ba3f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba3f80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba3f90; body size 5 bytes.
#line 1 "ENTRY_10ba3f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba3f90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba3fb0; body size 5 bytes.
#line 1 "ENTRY_10ba3fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba3fb0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba3fc0; body size 5 bytes.
#line 1 "ENTRY_10ba3fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba3fc0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba3fd0; body size 5 bytes.
#line 1 "ENTRY_10ba3fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba3fd0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba3fe0; body size 5 bytes.
#line 1 "ENTRY_10ba3fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba3fe0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba3ff0; body size 5 bytes.
#line 1 "ENTRY_10ba3ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba3ff0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba4000; body size 5 bytes.
#line 1 "ENTRY_10ba4000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba4000(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba4010; body size 5 bytes.
#line 1 "ENTRY_10ba4010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba4010(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba4020; body size 5 bytes.
#line 1 "ENTRY_10ba4020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba4020(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba4030; body size 5 bytes.
#line 1 "ENTRY_10ba4030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba4030(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba4040; body size 40 bytes.
#line 1 "ENTRY_10ba4040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ba4040(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10ba4080; body size 54 bytes.
#line 1 "ENTRY_10ba4080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba4080(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  *(undefined1 *)(param_2 + 1) = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  return;
}


// Reference entry 10ba40d0; body size 29 bytes.
#line 1 "ENTRY_10ba40d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba40d0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}


// Reference entry 10ba4100; body size 14 bytes.
#line 1 "ENTRY_10ba4100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba4100(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10ba5d90(param_3);
  return;
}


// Reference entry 10ba4120; body size 14 bytes.
#line 1 "ENTRY_10ba4120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba4120(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10ba5d90(param_3);
  return;
}


// Reference entry 10ba4290; body size 14 bytes.
#line 1 "ENTRY_10ba4290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba4290(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10118c40(param_3);
  return;
}


// Reference entry 10ba42b0; body size 3 bytes.
#line 1 "ENTRY_10ba42b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba42b0(void)

{
  return;
}


// Reference entry 10ba4330; body size 9 bytes.
#line 1 "ENTRY_10ba4330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba4330(undefined4 param_1,int param_2)

{
 try {
  int iVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  iVar1 = (int)(*(int *)(param_2 + 0x1c));

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(*(int *)(param_2 + 0x18));

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(*(int *)(param_2 + 0x14));

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(*(int *)(param_2 + 0x10));

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


// Reference entry 10ba4340; body size 86 bytes.
#line 1 "ENTRY_10ba4340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10ba4340(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = (int)(0);
  while (param_1 != (int *)(param_2)) {
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
      while ((param_1 = piVar3, cVar1 == '\0' && (piVar2 == (int *)param_1[2]))) {
        cVar1 = (char)(*(char *)(param_1[1] + 0xd));
        piVar3 = (int *)((int *)param_1[1]);
        piVar2 = (int *)(param_1);
      }
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar4);
}


// Reference entry 10ba43b0; body size 86 bytes.
#line 1 "ENTRY_10ba43b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10ba43b0(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = (int)(0);
  while (param_1 != (int *)(param_2)) {
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
      while ((param_1 = piVar3, cVar1 == '\0' && (piVar2 == (int *)param_1[2]))) {
        cVar1 = (char)(*(char *)(param_1[1] + 0xd));
        piVar3 = (int *)((int *)param_1[1]);
        piVar2 = (int *)(param_1);
      }
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar4);
}


// Reference entry 10ba4420; body size 86 bytes.
#line 1 "ENTRY_10ba4420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10ba4420(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = (int)(0);
  while (param_1 != (int *)(param_2)) {
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
      while ((param_1 = piVar3, cVar1 == '\0' && (piVar2 == (int *)param_1[2]))) {
        cVar1 = (char)(*(char *)(param_1[1] + 0xd));
        piVar3 = (int *)((int *)param_1[1]);
        piVar2 = (int *)(param_1);
      }
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar4);
}


// Reference entry 10ba4490; body size 40 bytes.
#line 1 "ENTRY_10ba4490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ba4490(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    thunk_FUN_10ba5d90(param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x24;
    return;
  }
  thunk_FUN_10ba2c50(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 10ba44d0; body size 15 bytes.
#line 1 "ENTRY_10ba44d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba44d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10ba44f0; body size 15 bytes.
#line 1 "ENTRY_10ba44f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba44f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10ba4510; body size 15 bytes.
#line 1 "ENTRY_10ba4510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba4510(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10ba4530; body size 15 bytes.
#line 1 "ENTRY_10ba4530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba4530(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10ba4550; body size 5 bytes.
#line 1 "ENTRY_10ba4550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba4550(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba4560; body size 5 bytes.
#line 1 "ENTRY_10ba4560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba4560(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba4570; body size 5 bytes.
#line 1 "ENTRY_10ba4570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba4570(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba4580; body size 5 bytes.
#line 1 "ENTRY_10ba4580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba4580(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba4590; body size 5 bytes.
#line 1 "ENTRY_10ba4590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba4590(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba45a0; body size 5 bytes.
#line 1 "ENTRY_10ba45a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba45a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba45c0; body size 5 bytes.
#line 1 "ENTRY_10ba45c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba45c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba45d0; body size 5 bytes.
#line 1 "ENTRY_10ba45d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba45d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba45e0; body size 5 bytes.
#line 1 "ENTRY_10ba45e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba45e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba45f0; body size 5 bytes.
#line 1 "ENTRY_10ba45f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba45f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba4600; body size 5 bytes.
#line 1 "ENTRY_10ba4600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba4600(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba4620; body size 5 bytes.
#line 1 "ENTRY_10ba4620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba4620(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba4630; body size 5 bytes.
#line 1 "ENTRY_10ba4630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba4630(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba4640; body size 6 bytes.
#line 1 "ENTRY_10ba4640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10ba4640(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIAlarmManager");
}


// Reference entry 10ba4a30; body size 5 bytes.
#line 1 "ENTRY_10ba4a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba4a30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba4a50; body size 5 bytes.
#line 1 "ENTRY_10ba4a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba4a50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba4a60; body size 5 bytes.
#line 1 "ENTRY_10ba4a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba4a60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba4cf0; body size 14 bytes.
#line 1 "ENTRY_10ba4cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba4cf0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba4fb0; body size 27 bytes.
#line 1 "ENTRY_10ba4fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba4fb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba5060; body size 16 bytes.
#line 1 "ENTRY_10ba5060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba5060(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba50c0; body size 16 bytes.
#line 1 "ENTRY_10ba50c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba50c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba50e0; body size 16 bytes.
#line 1 "ENTRY_10ba50e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba50e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba5100; body size 16 bytes.
#line 1 "ENTRY_10ba5100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba5100(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba5120; body size 16 bytes.
#line 1 "ENTRY_10ba5120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba5120(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba5160; body size 28 bytes.
#line 1 "ENTRY_10ba5160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba5160(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWrapperHelper);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba5190; body size 42 bytes.
#line 1 "ENTRY_10ba5190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ba5190(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWrapperObj);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba51d0; body size 18 bytes.
#line 1 "ENTRY_10ba51d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ba51d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba51f0; body size 18 bytes.
#line 1 "ENTRY_10ba51f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ba51f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba5210; body size 3 bytes.
#line 1 "ENTRY_10ba5210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba5210(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba5220; body size 10 bytes.
#line 1 "ENTRY_10ba5220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ba5220(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10ba5230; body size 23 bytes.
#line 1 "ENTRY_10ba5230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __fastcall FUN_10ba5230(void *param_1)

{
  memset(param_1,0,0x100);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(param_1);
}


// Reference entry 10ba52d0; body size 11 bytes.
#line 1 "ENTRY_10ba52d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ba52d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba52e0; body size 11 bytes.
#line 1 "ENTRY_10ba52e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ba52e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba52f0; body size 11 bytes.
#line 1 "ENTRY_10ba52f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ba52f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba5300; body size 11 bytes.
#line 1 "ENTRY_10ba5300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ba5300(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba5410; body size 11 bytes.
#line 1 "ENTRY_10ba5410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ba5410(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba5420; body size 11 bytes.
#line 1 "ENTRY_10ba5420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ba5420(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba5430; body size 11 bytes.
#line 1 "ENTRY_10ba5430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ba5430(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba5440; body size 11 bytes.
#line 1 "ENTRY_10ba5440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ba5440(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba5450; body size 16 bytes.
#line 1 "ENTRY_10ba5450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba5450(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba5470; body size 16 bytes.
#line 1 "ENTRY_10ba5470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba5470(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba5490; body size 21 bytes.
#line 1 "ENTRY_10ba5490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ba5490(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba54b0; body size 23 bytes.
#line 1 "ENTRY_10ba54b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba54b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba54d0; body size 3 bytes.
#line 1 "ENTRY_10ba54d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba54d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba54e0; body size 3 bytes.
#line 1 "ENTRY_10ba54e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba54e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba54f0; body size 3 bytes.
#line 1 "ENTRY_10ba54f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba54f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba5860; body size 9 bytes.
#line 1 "ENTRY_10ba5860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba5860(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba59e0; body size 52 bytes.
#line 1 "ENTRY_10ba59e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba59e0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  pvVar1 = (void *)(operator_new(0x2c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba5a30; body size 52 bytes.
#line 1 "ENTRY_10ba5a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba5a30(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba5ba0; body size 23 bytes.
#line 1 "ENTRY_10ba5ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba5ba0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba5bc0; body size 41 bytes.
#line 1 "ENTRY_10ba5bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10ba5bc0(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(param_1);
}


// Reference entry 10ba5c00; body size 42 bytes.
#line 1 "ENTRY_10ba5c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ba5c00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSubscriptionImpl_EventSink);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba5ee0; body size 50 bytes.
#line 1 "ENTRY_10ba5ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ba5ee0(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10ba6020; body size 23 bytes.
#line 1 "ENTRY_10ba6020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba6020(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba6040; body size 12 bytes.
#line 1 "ENTRY_10ba6040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 * __fastcall FUN_10ba6040(undefined2 *param_1)

{
  *param_1 = (undefined2)(0);
  *(undefined1 *)(param_1 + 1) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 *)(param_1);
}


// Reference entry 10ba6050; body size 127 bytes.
#line 1 "ENTRY_10ba6050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ba6050(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:AlarmClock:1","DestroyAlarm",uVar3,param_3,
                     param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACDestroyAlarmAIOOp);
  param_1[0x18] = (uint)&ghidra_vftable_RUpnpACDestroyAlarmAIOOp;
  param_1[0x11b] = (uint)&ghidra_vftable_RUpnpACDestroyAlarmAIOOp;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba6150; body size 21 bytes.
#line 1 "ENTRY_10ba6150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba6150(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba66c0; body size 9 bytes.
#line 1 "ENTRY_10ba66c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba66c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIAlarmManager);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba66d0; body size 9 bytes.
#line 1 "ENTRY_10ba66d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba66d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjACListener);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba66e0; body size 33 bytes.
#line 1 "ENTRY_10ba66e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ba66e0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  piVar1 = (int *)(*(int **)(*(int *)(*param_2 + 4) + 0x38 + (int)param_2));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ba6950; body size 19 bytes.
#line 1 "ENTRY_10ba6950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ba6950(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10ba6ca0; body size 34 bytes.
#line 1 "ENTRY_10ba6ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ba6ca0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}


// Reference entry 10ba6d60; body size 19 bytes.
#line 1 "ENTRY_10ba6d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ba6d60(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x2c);
  }
  return;
}


// Reference entry 10ba6e10; body size 19 bytes.
#line 1 "ENTRY_10ba6e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ba6e10(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x2c);
  }
  return;
}


// Reference entry 10ba6e30; body size 19 bytes.
#line 1 "ENTRY_10ba6e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ba6e30(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10ba6fb0; body size 19 bytes.
#line 1 "ENTRY_10ba6fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ba6fb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10ba7170; body size 28 bytes.
#line 1 "ENTRY_10ba7170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ba7170(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACDestroyAlarmAIOOp);
  param_1[0x18] = (uint)&ghidra_vftable_RUpnpACDestroyAlarmAIOOp;
  param_1[0x11b] = (uint)&ghidra_vftable_RUpnpACDestroyAlarmAIOOp;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x18] = (uint)&ghidra_vftable_RUpnpAsyncIOOperation;
  param_1[0x11b] = (uint)&ghidra_vftable_RUpnpAsyncIOOperation;
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


// Reference entry 10ba7440; body size 7 bytes.
#line 1 "ENTRY_10ba7440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ba7440(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10ba7480; body size 18 bytes.
#line 1 "ENTRY_10ba7480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ba7480(int *param_1)

{
  if (*param_1 != 0) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 10ba7810; body size 14 bytes.
#line 1 "ENTRY_10ba7810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_10ba7810(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*param_1 == *param_2)));
}


// Reference entry 10ba7830; body size 14 bytes.
#line 1 "ENTRY_10ba7830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10ba7830(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10ba7850; body size 14 bytes.
#line 1 "ENTRY_10ba7850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10ba7850(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10ba7870; body size 14 bytes.
#line 1 "ENTRY_10ba7870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10ba7870(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10ba7890; body size 14 bytes.
#line 1 "ENTRY_10ba7890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10ba7890(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10ba78b0; body size 14 bytes.
#line 1 "ENTRY_10ba78b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10ba78b0(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10ba7b00; body size 15 bytes.
#line 1 "ENTRY_10ba7b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10ba7b00(int param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + param_2 * 0x24);
}


// Reference entry 10ba7b20; body size 3 bytes.
#line 1 "ENTRY_10ba7b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba7b20(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ba7b30; body size 3 bytes.
#line 1 "ENTRY_10ba7b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba7b30(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ba7b40; body size 3 bytes.
#line 1 "ENTRY_10ba7b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba7b40(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ba7b50; body size 3 bytes.
#line 1 "ENTRY_10ba7b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba7b50(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ba7b60; body size 8 bytes.
#line 1 "ENTRY_10ba7b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ba7b60(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10ba7b70; body size 8 bytes.
#line 1 "ENTRY_10ba7b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ba7b70(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10ba7b80; body size 4 bytes.
#line 1 "ENTRY_10ba7b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10ba7b80(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 4));
}


// Reference entry 10ba7b90; body size 3 bytes.
#line 1 "ENTRY_10ba7b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba7b90(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ba7ba0; body size 3 bytes.
#line 1 "ENTRY_10ba7ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba7ba0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ba7bb0; body size 3 bytes.
#line 1 "ENTRY_10ba7bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba7bb0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ba7bc0; body size 3 bytes.
#line 1 "ENTRY_10ba7bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba7bc0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ba7bd0; body size 3 bytes.
#line 1 "ENTRY_10ba7bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba7bd0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ba7be0; body size 3 bytes.
#line 1 "ENTRY_10ba7be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba7be0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ba7bf0; body size 6 bytes.
#line 1 "ENTRY_10ba7bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ba7bf0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10ba7c00; body size 6 bytes.
#line 1 "ENTRY_10ba7c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ba7c00(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10ba7c10; body size 6 bytes.
#line 1 "ENTRY_10ba7c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ba7c10(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10ba7c20; body size 6 bytes.
#line 1 "ENTRY_10ba7c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ba7c20(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10ba7c30; body size 6 bytes.
#line 1 "ENTRY_10ba7c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ba7c30(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10ba7c40; body size 6 bytes.
#line 1 "ENTRY_10ba7c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ba7c40(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10ba7df0; body size 25 bytes.
#line 1 "ENTRY_10ba7df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ba7df0(void *param_1,void *param_2,int param_3)

{
  memcpy(param_1,param_2,param_3 + 1);
  return;
}


// Reference entry 10ba8410; body size 6 bytes.
#line 1 "ENTRY_10ba8410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10ba8410(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCAlarmManager");
}


// Reference entry 10ba8420; body size 31 bytes.
#line 1 "ENTRY_10ba8420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ba8420(undefined4 *param_1)

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


// Reference entry 10ba8450; body size 31 bytes.
#line 1 "ENTRY_10ba8450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ba8450(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10ba8530; body size 33 bytes.
#line 1 "ENTRY_10ba8530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ba8530(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10baa760(param_2));
  *param_1 = (int)(iVar1);
  param_1[1] = iVar1;
  param_1[2] = iVar1 + param_2 * 0x24;
  return;
}


// Reference entry 10ba8560; body size 63 bytes.
#line 1 "ENTRY_10ba8560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10ba8560(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)((param_1[2] - *param_1) / 0x24);
  if (0x71c71c7 - (uVar1 >> 1) < uVar1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0x71c71c7);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 10ba8880; body size 8 bytes.
#line 1 "ENTRY_10ba8880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ba8880(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10ba8890; body size 29 bytes.
#line 1 "ENTRY_10ba8890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ba8890(int param_2)
{
  int *param_1 = (int *)this;
  param_1[4] = param_2;
  if (0xf < (uint)param_1[5]) {
    *(undefined1 *)(*param_1 + param_2) = 0;
    return;
  }
  *(undefined1 *)((int)param_1 + param_2) = 0;
  return;
}


// Reference entry 10ba9670; body size 3 bytes.
#line 1 "ENTRY_10ba9670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba9670(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba9680; body size 3 bytes.
#line 1 "ENTRY_10ba9680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba9680(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba9690; body size 3 bytes.
#line 1 "ENTRY_10ba9690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba9690(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba96a0; body size 3 bytes.
#line 1 "ENTRY_10ba96a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba96a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba96b0; body size 3 bytes.
#line 1 "ENTRY_10ba96b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba96b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba96c0; body size 3 bytes.
#line 1 "ENTRY_10ba96c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba96c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba96d0; body size 3 bytes.
#line 1 "ENTRY_10ba96d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba96d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba96e0; body size 3 bytes.
#line 1 "ENTRY_10ba96e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba96e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba96f0; body size 3 bytes.
#line 1 "ENTRY_10ba96f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba96f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba9700; body size 3 bytes.
#line 1 "ENTRY_10ba9700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba9700(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba9710; body size 3 bytes.
#line 1 "ENTRY_10ba9710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba9710(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba9720; body size 3 bytes.
#line 1 "ENTRY_10ba9720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba9720(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba9730; body size 3 bytes.
#line 1 "ENTRY_10ba9730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba9730(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba9740; body size 3 bytes.
#line 1 "ENTRY_10ba9740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba9740(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba9750; body size 3 bytes.
#line 1 "ENTRY_10ba9750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba9750(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba9760; body size 3 bytes.
#line 1 "ENTRY_10ba9760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba9760(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba9770; body size 3 bytes.
#line 1 "ENTRY_10ba9770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba9770(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba9780; body size 3 bytes.
#line 1 "ENTRY_10ba9780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba9780(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba9790; body size 3 bytes.
#line 1 "ENTRY_10ba9790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba9790(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba97a0; body size 3 bytes.
#line 1 "ENTRY_10ba97a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba97a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ba97b0; body size 4 bytes.
#line 1 "ENTRY_10ba97b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba97b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10ba9de0; body size 7 bytes.
#line 1 "ENTRY_10ba9de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ba9de0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 10ba9ed0; body size 34 bytes.
#line 1 "ENTRY_10ba9ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_10ba9ed0(byte *param_2,byte *param_3)
{
  int param_1 = (int )this;
  for (; param_2 != (byte *)(param_3); param_2 = param_2 + 1) {
    *(undefined1 *)((uint)*param_2 + param_1) = 1;
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
}


// Reference entry 10ba9f00; body size 11 bytes.
#line 1 "ENTRY_10ba9f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __thiscall Recovered_Bulk::FUN_10ba9f00(byte param_2)
{
  int param_1 = (int )this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)((uint)param_2 + param_1));
}


// Reference entry 10ba9f10; body size 30 bytes.
#line 1 "ENTRY_10ba9f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10ba9f10(int param_1)

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


// Reference entry 10ba9f40; body size 30 bytes.
#line 1 "ENTRY_10ba9f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10ba9f40(int param_1)

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


// Reference entry 10baa000; body size 3 bytes.
#line 1 "ENTRY_10baa000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10baa000(void)

{
  return;
}


// Reference entry 10baa010; body size 3 bytes.
#line 1 "ENTRY_10baa010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10baa010(void)

{
  return;
}


// Reference entry 10baa020; body size 3 bytes.
#line 1 "ENTRY_10baa020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10baa020(void)

{
  return;
}


// Reference entry 10baa030; body size 11 bytes.
#line 1 "ENTRY_10baa030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10baa030(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10baa040; body size 11 bytes.
#line 1 "ENTRY_10baa040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10baa040(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10baa050; body size 6 bytes.
#line 1 "ENTRY_10baa050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10baa050(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10baa060; body size 26 bytes.
#line 1 "ENTRY_10baa060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10baa060(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 10baa080; body size 26 bytes.
#line 1 "ENTRY_10baa080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10baa080(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 10baa0a0; body size 76 bytes.
#line 1 "ENTRY_10baa0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10baa0a0(int *param_2)
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


// Reference entry 10baa1e0; body size 10 bytes.
#line 1 "ENTRY_10baa1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10baa1e0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 10baa1f0; body size 56 bytes.
#line 1 "ENTRY_10baa1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10baa1f0(uint param_2,char param_3)
{
  int param_1 = (int )this;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)((uint *)(param_1 + (param_2 >> 5) * 4));
  uVar2 = (uint)(1 << ((byte)param_2 & 0x1f));
  if (param_3 != '\0') {
    *puVar1 = (uint)(*puVar1 | uVar2);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
  }
  *puVar1 = (uint)(~uVar2 & *puVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10baa240; body size 32 bytes.
#line 1 "ENTRY_10baa240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_10baa240(uint param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(1 << ((byte)param_2 & 0x1f));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)((*(uint *)(param_1 + (param_2 >> 5) * 4) & uVar1) != 0)));
}


// Reference entry 10baa610; body size 13 bytes.
#line 1 "ENTRY_10baa610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10baa610(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10baa620; body size 13 bytes.
#line 1 "ENTRY_10baa620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10baa620(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10baa670; body size 87 bytes.
#line 1 "ENTRY_10baa670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10baa670(uint param_1)

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


// Reference entry 10baa6e0; body size 97 bytes.
#line 1 "ENTRY_10baa6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10baa6e0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x924924a) {
    param_1 = (uint)(param_1 * 0x1c);
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


// Reference entry 10baa7e0; body size 19 bytes.
#line 1 "ENTRY_10baa7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10baa7e0(int *param_1)

{
  if (*param_1 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
}


// Reference entry 10baa8a0; body size 7 bytes.
#line 1 "ENTRY_10baa8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10baa8a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*(int *)(param_1 + 4) + -4);
}


// Reference entry 10baa8b0; body size 13 bytes.
#line 1 "ENTRY_10baa8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10baa8b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10baa8c0; body size 13 bytes.
#line 1 "ENTRY_10baa8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10baa8c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10baa8d0; body size 23 bytes.
#line 1 "ENTRY_10baa8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10baa8d0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_1[2] - *param_1) / 0x24);
}


// Reference entry 10baa9f0; body size 8 bytes.
#line 1 "ENTRY_10baa9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10baa9f0(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


// Reference entry 10bab090; body size 52 bytes.
#line 1 "ENTRY_10bab090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bab090(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10bab0e0; body size 63 bytes.
#line 1 "ENTRY_10bab0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bab0e0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10bab130; body size 55 bytes.
#line 1 "ENTRY_10bab130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bab130(int param_1,int param_2)

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


// Reference entry 10bab180; body size 66 bytes.
#line 1 "ENTRY_10bab180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bab180(int param_1,int param_2)

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


// Reference entry 10bab230; body size 16 bytes.
#line 1 "ENTRY_10bab230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bab230(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10bab250; body size 9 bytes.
#line 1 "ENTRY_10bab250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bab250(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10bab2f0; body size 32 bytes.
#line 1 "ENTRY_10bab2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10bab2f0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x3c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x3c) + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 10bab350; body size 21 bytes.
#line 1 "ENTRY_10bab350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __stdcall FUN_10bab350(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCAlarmManager");
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_1);
}


// Reference entry 10bab3b0; body size 8 bytes.
#line 1 "ENTRY_10bab3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bab3b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 4) == 0);
}


// Reference entry 10bab3d0; body size 11 bytes.
#line 1 "ENTRY_10bab3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10bab3d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10bab3e0; body size 11 bytes.
#line 1 "ENTRY_10bab3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10bab3e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10baba00; body size 36 bytes.
#line 1 "ENTRY_10baba00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10baba00(uint param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  
  if (param_2 <= (uint)param_1[4]) {
    param_1[4] = param_2;
    puVar1 = (undefined4 *)(param_1);
    if (0xf < (uint)param_1[5]) {
      puVar1 = (undefined4 *)((undefined4 *)*param_1);
    }
    *(undefined1 *)((int)puVar1 + param_2) = 0;
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
  }
                    
  thunk_FUN_106a5620();
}


// Reference entry 10baba90; body size 60 bytes.
#line 1 "ENTRY_10baba90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10baba90(char param_2,uint param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *pvVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1);
  if (0xf < (uint)param_1[5]) {
    puVar2 = (undefined4 *)((undefined4 *)*param_1);
  }
  if (param_3 < (uint)param_1[4]) {
    pvVar1 = (void *)(memchr((void *)((int)puVar2 + param_3),(int)param_2,param_1[4] - param_3));
    if (pvVar1 != (void *)0x0) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((int)pvVar1 - (int)puVar2);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(-1);
}


// Reference entry 10babae0; body size 179 bytes.
#line 1 "ENTRY_10babae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10babae0(byte *param_2,uint param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  char acStack_104 [256];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)acStack_104);
  pbVar2 = (byte *)(param_2);
  do {
    pbVar4 = (byte *)(pbVar2);
    pbVar2 = (byte *)(pbVar4 + 1);
  } while (*pbVar4 != 0);
  puVar3 = (undefined4 *)(param_1);
  if (0xf < (uint)param_1[5]) {
    puVar3 = (undefined4 *)((undefined4 *)*param_1);
  }
  uVar1 = (uint)(param_1[4]);
  if (param_3 < uVar1) {
    memset(acStack_104,0,0x100);
    for (; (byte *)(param_2) != pbVar4; param_2 = param_2 + 1) {
      acStack_104[*param_2] = '\x01';
    }
    pbVar2 = (byte *)((byte *)(param_3 + (int)puVar3));
    while ((pbVar2 < (byte *)((int)puVar3 + uVar1) && (acStack_104[*pbVar2] != '\0'))) {
      pbVar2 = (byte *)(pbVar2 + 1);
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10bac670; body size 4 bytes.
#line 1 "ENTRY_10bac670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bac670(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10bacbc0; body size 4 bytes.
#line 1 "ENTRY_10bacbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bacbc0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 10bad870; body size 6 bytes.
#line 1 "ENTRY_10bad870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bad870(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIAlarmManager");
}


// Reference entry 10bb22b0; body size 7 bytes.
#line 1 "ENTRY_10bb22b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bb22b0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10bb24c0; body size 6 bytes.
#line 1 "ENTRY_10bb24c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb24c0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x5d1745d);
}


// Reference entry 10bb24d0; body size 6 bytes.
#line 1 "ENTRY_10bb24d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb24d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x9249249);
}


// Reference entry 10bb24e0; body size 6 bytes.
#line 1 "ENTRY_10bb24e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb24e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x71c71c7);
}


// Reference entry 10bb24f0; body size 6 bytes.
#line 1 "ENTRY_10bb24f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb24f0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x5d1745d);
}


// Reference entry 10bb2500; body size 6 bytes.
#line 1 "ENTRY_10bb2500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb2500(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x9249249);
}


// Reference entry 10bb2510; body size 6 bytes.
#line 1 "ENTRY_10bb2510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb2510(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x71c71c7);
}


// Reference entry 10bb2520; body size 19 bytes.
#line 1 "ENTRY_10bb2520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bb2520(int *param_1)

{
  if (*param_1 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10bb3100; body size 5 bytes.
#line 1 "ENTRY_10bb3100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb3100(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bb3110; body size 5 bytes.
#line 1 "ENTRY_10bb3110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb3110(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bb3120; body size 5 bytes.
#line 1 "ENTRY_10bb3120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb3120(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bb3130; body size 5 bytes.
#line 1 "ENTRY_10bb3130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bb3130(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -4;
  return;
}


// Reference entry 10bb3160; body size 3 bytes.
#line 1 "ENTRY_10bb3160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bb3160(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bb3170; body size 3 bytes.
#line 1 "ENTRY_10bb3170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bb3170(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bb3180; body size 3 bytes.
#line 1 "ENTRY_10bb3180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bb3180(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bb3190; body size 40 bytes.
#line 1 "ENTRY_10bb3190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10bb3190(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    thunk_FUN_10ba5d90(param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x24;
    return;
  }
  thunk_FUN_10ba2c50(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 10bb3370; body size 28 bytes.
#line 1 "ENTRY_10bb3370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bb3370(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10bb33a0; body size 28 bytes.
#line 1 "ENTRY_10bb33a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bb33a0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10bb33d0; body size 28 bytes.
#line 1 "ENTRY_10bb33d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bb33d0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10bb3400; body size 28 bytes.
#line 1 "ENTRY_10bb3400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bb3400(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10bb42c0; body size 5 bytes.
#line 1 "ENTRY_10bb42c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb42c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bb42d0; body size 68 bytes.
#line 1 "ENTRY_10bb42d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10bb42d0(uint param_2,char param_3)
{
  int param_1 = (int )this;
  uint *puVar1;
  uint uVar2;
  
  if (6 < param_2) {
                    
    thunk_FUN_10baa650();
  }
  puVar1 = (uint *)((uint *)(param_1 + (param_2 >> 5) * 4));
  uVar2 = (uint)(1 << ((byte)param_2 & 0x1f));
  if (param_3 != '\0') {
    *puVar1 = (uint)(*puVar1 | uVar2);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
  }
  *puVar1 = (uint)(*puVar1 & ~uVar2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10bb4360; body size 10 bytes.
#line 1 "ENTRY_10bb4360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10bb4360(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}


// Reference entry 10bb4380; body size 13 bytes.
#line 1 "ENTRY_10bb4380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10bb4380(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1 *)(param_1 + 0x178) = param_2;
  return;
}


// Reference entry 10bb4390; body size 4 bytes.
#line 1 "ENTRY_10bb4390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bb4390(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10bb43a0; body size 4 bytes.
#line 1 "ENTRY_10bb43a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bb43a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10bb43b0; body size 23 bytes.
#line 1 "ENTRY_10bb43b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bb43b0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_1[1] - *param_1) / 0x24);
}


// Reference entry 10bb47c0; body size 18 bytes.
#line 1 "ENTRY_10bb47c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bb47c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bb47e0; body size 22 bytes.
#line 1 "ENTRY_10bb47e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bb47e0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bb4800; body size 18 bytes.
#line 1 "ENTRY_10bb4800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bb4800(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bb49f0; body size 22 bytes.
#line 1 "ENTRY_10bb49f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bb49f0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bb4b10; body size 21 bytes.
#line 1 "ENTRY_10bb4b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bb4b10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bb4b90; body size 25 bytes.
#line 1 "ENTRY_10bb4b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bb4b90(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 10bb4bb0; body size 13 bytes.
#line 1 "ENTRY_10bb4bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bb4bb0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bb4bc0; body size 13 bytes.
#line 1 "ENTRY_10bb4bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bb4bc0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bb4bd0; body size 3 bytes.
#line 1 "ENTRY_10bb4bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bb4bd0(void)

{
  return;
}


// Reference entry 10bb4d80; body size 15 bytes.
#line 1 "ENTRY_10bb4d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bb4d80(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10bb4e50; body size 5 bytes.
#line 1 "ENTRY_10bb4e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb4e50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bb4e60; body size 37 bytes.
#line 1 "ENTRY_10bb4e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb4e60(int param_1,SCStr *param_2)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(param_1 + 0x10)));
    if (!bVar1) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10bb5110; body size 5 bytes.
#line 1 "ENTRY_10bb5110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb5110(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bb5120; body size 5 bytes.
#line 1 "ENTRY_10bb5120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb5120(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bb5130; body size 5 bytes.
#line 1 "ENTRY_10bb5130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb5130(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bb5140; body size 5 bytes.
#line 1 "ENTRY_10bb5140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb5140(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bb5150; body size 5 bytes.
#line 1 "ENTRY_10bb5150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb5150(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bb5260; body size 15 bytes.
#line 1 "ENTRY_10bb5260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb5260(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10bb5280; body size 15 bytes.
#line 1 "ENTRY_10bb5280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb5280(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10bb52a0; body size 5 bytes.
#line 1 "ENTRY_10bb52a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb52a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bb52b0; body size 5 bytes.
#line 1 "ENTRY_10bb52b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb52b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bb52c0; body size 5 bytes.
#line 1 "ENTRY_10bb52c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb52c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bb52d0; body size 26 bytes.
#line 1 "ENTRY_10bb52d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bb52d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardStateFor);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bb52f0; body size 18 bytes.
#line 1 "ENTRY_10bb52f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bb52f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bb53d0; body size 16 bytes.
#line 1 "ENTRY_10bb53d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bb53d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bb53f0; body size 3 bytes.
#line 1 "ENTRY_10bb53f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bb53f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bb5400; body size 52 bytes.
#line 1 "ENTRY_10bb5400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bb5400(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bb5450; body size 9 bytes.
#line 1 "ENTRY_10bb5450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bb5450(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjDeviceDiscovery_ProductListener);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bb54c0; body size 201 bytes.
#line 1 "ENTRY_10bb54c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bb54c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = (uint)&ghidra_vftable_SCSwfObjDDListener;
  param_1[8] = param_3;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyJoinExistingWizardButtonPressState);
  param_1[3] = (uint)&ghidra_vftable_SCLegacyJoinExistingWizardButtonPressState;
  param_1[6] = (uint)&ghidra_vftable_SCLegacyJoinExistingWizardButtonPressState;
  param_1[7] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[10] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0xd] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0x19] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bb55c0; body size 66 bytes.
#line 1 "ENTRY_10bb55c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bb55c0(int param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyJoinExistingWizardCompleteState);
  thunk_FUN_112af4e0("Wizard",5,"Exit code set to %d.",param_3);
  *(undefined4 *)(param_2 + 0x94) = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bb57d0; body size 26 bytes.
#line 1 "ENTRY_10bb57d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bb57d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyJoinExistingWizardFirewallSubwizardState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bb57f0; body size 26 bytes.
#line 1 "ENTRY_10bb57f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bb57f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyJoinExistingWizardInitState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bb5810; body size 26 bytes.
#line 1 "ENTRY_10bb5810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bb5810(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyJoinExistingWizardIntroState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bb5830; body size 26 bytes.
#line 1 "ENTRY_10bb5830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bb5830(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyJoinExistingWizardSetupNotAllowedState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bb5850; body size 26 bytes.
#line 1 "ENTRY_10bb5850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bb5850(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyJoinExistingWizardState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bb5870; body size 26 bytes.
#line 1 "ENTRY_10bb5870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bb5870(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyJoinExistingWizardSuccessState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bb5890; body size 26 bytes.
#line 1 "ENTRY_10bb5890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bb5890(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyJoinExistingWizardTimeoutState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bb58b0; body size 9 bytes.
#line 1 "ENTRY_10bb58b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bb58b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjDDListener);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bb58c0; body size 7 bytes.
#line 1 "ENTRY_10bb58c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bb58c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10bb5ce0; body size 7 bytes.
#line 1 "ENTRY_10bb5ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bb5ce0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10bb5de0; body size 7 bytes.
#line 1 "ENTRY_10bb5de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bb5de0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10bb5df0; body size 7 bytes.
#line 1 "ENTRY_10bb5df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bb5df0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10bb5e00; body size 7 bytes.
#line 1 "ENTRY_10bb5e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bb5e00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10bb5e10; body size 7 bytes.
#line 1 "ENTRY_10bb5e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bb5e10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10bb5e30; body size 7 bytes.
#line 1 "ENTRY_10bb5e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bb5e30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10bb5e40; body size 7 bytes.
#line 1 "ENTRY_10bb5e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bb5e40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10bb6080; body size 3 bytes.
#line 1 "ENTRY_10bb6080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bb6080(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bb66c0; body size 31 bytes.
#line 1 "ENTRY_10bb66c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bb66c0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10bb6730; body size 3 bytes.
#line 1 "ENTRY_10bb6730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bb6730(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bb6740; body size 3 bytes.
#line 1 "ENTRY_10bb6740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bb6740(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bb6750; body size 3 bytes.
#line 1 "ENTRY_10bb6750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bb6750(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bb6760; body size 3 bytes.
#line 1 "ENTRY_10bb6760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bb6760(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bb6770; body size 3 bytes.
#line 1 "ENTRY_10bb6770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bb6770(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bb6780; body size 3 bytes.
#line 1 "ENTRY_10bb6780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bb6780(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bb6790; body size 3 bytes.
#line 1 "ENTRY_10bb6790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bb6790(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bb67a0; body size 3 bytes.
#line 1 "ENTRY_10bb67a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bb67a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bb6a40; body size 79 bytes.
#line 1 "ENTRY_10bb6a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10bb6a40(int param_2)
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


// Reference entry 10bb6ab0; body size 11 bytes.
#line 1 "ENTRY_10bb6ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bb6ab0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10bb6ac0; body size 83 bytes.
#line 1 "ENTRY_10bb6ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10bb6ac0(int *param_2)
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


// Reference entry 10bb6f10; body size 97 bytes.
#line 1 "ENTRY_10bb6f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10bb6f10(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x924924a) {
    param_1 = (uint)(param_1 * 0x1c);
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


// Reference entry 10bb77d0; body size 45 bytes.
#line 1 "ENTRY_10bb77d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bb77d0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = uVar1;
    puVar2[2] = uVar1;
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCLegacyJoinExistingWizardIntroState);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(puVar2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10bb7960; body size 63 bytes.
#line 1 "ENTRY_10bb7960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bb7960(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10bb79b0; body size 66 bytes.
#line 1 "ENTRY_10bb79b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bb79b0(int param_1,int param_2)

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


// Reference entry 10bbabb0; body size 17 bytes.
#line 1 "ENTRY_10bbabb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bbabb0(SCStr *param_1)

{
  ((SCStr *)(param_1))->op_eq("SCIHousehold:onNetworkChanged");
  return;
}


// Reference entry 10bbabd0; body size 6 bytes.
#line 1 "ENTRY_10bbabd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bbabd0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x9249249);
}


// Reference entry 10bbabe0; body size 6 bytes.
#line 1 "ENTRY_10bbabe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bbabe0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x9249249);
}


// Reference entry 10bbb590; body size 27 bytes.
#line 1 "ENTRY_10bbb590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bbb590(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bbb5c0; body size 42 bytes.
#line 1 "ENTRY_10bbb5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bbb5c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOwnedObjImpl);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bbb600; body size 42 bytes.
#line 1 "ENTRY_10bbb600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bbb600(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCITearOffObjImpl);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bbb660; body size 9 bytes.
#line 1 "ENTRY_10bbb660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bbb660(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCINetworkManagement);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bbb670; body size 63 bytes.
#line 1 "ENTRY_10bbb670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bbb670(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNetworkManagement);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bbb6c0; body size 19 bytes.
#line 1 "ENTRY_10bbb6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bbb6c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bbb6e0; body size 26 bytes.
#line 1 "ENTRY_10bbb6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bbb6e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bbb700; body size 26 bytes.
#line 1 "ENTRY_10bbb700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bbb700(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bbb720; body size 7 bytes.
#line 1 "ENTRY_10bbb720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bbb720(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bbc050; body size 8 bytes.
#line 1 "ENTRY_10bbc050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bbc050(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 8) != 0);
}


// Reference entry 10bbd8c0; body size 25 bytes.
#line 1 "ENTRY_10bbd8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bbd8c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bbd8e0; body size 83 bytes.
#line 1 "ENTRY_10bbd8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10bbd8e0(int *param_2)
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
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10bbdb70; body size 33 bytes.
#line 1 "ENTRY_10bbdb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10bbdb70(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10bbdba0; body size 3 bytes.
#line 1 "ENTRY_10bbdba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bbdba0(void)

{
  return;
}


// Reference entry 10bbdbb0; body size 18 bytes.
#line 1 "ENTRY_10bbdbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10bbdbb0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4 **)(param_1 + 4) = *param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}


// Reference entry 10bbdd80; body size 7 bytes.
#line 1 "ENTRY_10bbdd80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bbdd80(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bbdd90; body size 5 bytes.
#line 1 "ENTRY_10bbdd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bbdd90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bbdda0; body size 36 bytes.
#line 1 "ENTRY_10bbdda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10bbdda0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10bbde00; body size 13 bytes.
#line 1 "ENTRY_10bbde00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bbde00(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10bbde10; body size 3 bytes.
#line 1 "ENTRY_10bbde10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bbde10(void)

{
  return;
}


// Reference entry 10bbde20; body size 36 bytes.
#line 1 "ENTRY_10bbde20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10bbde20(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_10bbdbd0(puVar1,param_2);
  return;
}


// Reference entry 10bbde50; body size 5 bytes.
#line 1 "ENTRY_10bbde50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bbde50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bbde60; body size 6 bytes.
#line 1 "ENTRY_10bbde60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bbde60(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIChirpDelegate");
}


// Reference entry 10bbde70; body size 6 bytes.
#line 1 "ENTRY_10bbde70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bbde70(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIChirpListener");
}


// Reference entry 10bbde80; body size 27 bytes.
#line 1 "ENTRY_10bbde80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bbde80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bbdef0; body size 16 bytes.
#line 1 "ENTRY_10bbdef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bbdef0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bbdf10; body size 9 bytes.
#line 1 "ENTRY_10bbdf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bbdf10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bbdf20; body size 23 bytes.
#line 1 "ENTRY_10bbdf20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bbdf20(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bbdf40; body size 3 bytes.
#line 1 "ENTRY_10bbdf40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bbdf40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bbdf50; body size 23 bytes.
#line 1 "ENTRY_10bbdf50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bbdf50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bbdf70; body size 96 bytes.
#line 1 "ENTRY_10bbdf70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bbdf70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (uint)&ghidra_vftable_SCAbilityManager_Listener;
  param_1[3] = (uint)&ghidra_vftable_SCLoggingHelper;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCChirpManager);
  param_1[2] = (uint)&ghidra_vftable_SCChirpManager;
  param_1[3] = (uint)&ghidra_vftable_SCChirpManager;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bbdff0; body size 9 bytes.
#line 1 "ENTRY_10bbdff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bbdff0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIChirpListener);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bbe000; body size 19 bytes.
#line 1 "ENTRY_10bbe000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bbe000(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bbe2f0; body size 7 bytes.
#line 1 "ENTRY_10bbe2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bbe2f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bbe370; body size 12 bytes.
#line 1 "ENTRY_10bbe370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10bbe370(int param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + param_2 * 4);
}


// Reference entry 10bbe380; body size 3 bytes.
#line 1 "ENTRY_10bbe380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bbe380(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bbe390; body size 3 bytes.
#line 1 "ENTRY_10bbe390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bbe390(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bbe550; body size 49 bytes.
#line 1 "ENTRY_10bbe550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10bbe550(uint param_2)
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


// Reference entry 10bbe600; body size 3 bytes.
#line 1 "ENTRY_10bbe600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bbe600(void)

{
  return;
}


// Reference entry 10bbe610; body size 3 bytes.
#line 1 "ENTRY_10bbe610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bbe610(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bbe620; body size 3 bytes.
#line 1 "ENTRY_10bbe620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bbe620(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bbe630; body size 3 bytes.
#line 1 "ENTRY_10bbe630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bbe630(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bbe640; body size 3 bytes.
#line 1 "ENTRY_10bbe640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bbe640(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bbe650; body size 3 bytes.
#line 1 "ENTRY_10bbe650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bbe650(void)

{
  return;
}


// Reference entry 10bbe6d0; body size 38 bytes.
#line 1 "ENTRY_10bbe6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_10bbe6d0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10bbe700; body size 27 bytes.
#line 1 "ENTRY_10bbe700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bbe700(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10bbe730; body size 27 bytes.
#line 1 "ENTRY_10bbe730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bbe730(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10bbe7b0; body size 87 bytes.
#line 1 "ENTRY_10bbe7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10bbe7b0(uint param_1)

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


// Reference entry 10bbe820; body size 9 bytes.
#line 1 "ENTRY_10bbe820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bbe820(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 10bbe830; body size 61 bytes.
#line 1 "ENTRY_10bbe830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bbe830(int param_1,int param_2)

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


// Reference entry 10bbe880; body size 21 bytes.
#line 1 "ENTRY_10bbe880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __stdcall FUN_10bbe880(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCChirpManager");
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_1);
}


// Reference entry 10bbead0; body size 6 bytes.
#line 1 "ENTRY_10bbead0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bbead0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIChirpDelegate");
}


// Reference entry 10bbeae0; body size 6 bytes.
#line 1 "ENTRY_10bbeae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bbeae0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIChirpListener");
}


// Reference entry 10bbeb00; body size 7 bytes.
#line 1 "ENTRY_10bbeb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bbeb00(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10bbeb10; body size 6 bytes.
#line 1 "ENTRY_10bbeb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bbeb10(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 10bbeb20; body size 6 bytes.
#line 1 "ENTRY_10bbeb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bbeb20(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 10bbece0; body size 5 bytes.
#line 1 "ENTRY_10bbece0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bbece0(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -4;
  return;
}


// Reference entry 10bbecf0; body size 3 bytes.
#line 1 "ENTRY_10bbecf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bbecf0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bbed00; body size 3 bytes.
#line 1 "ENTRY_10bbed00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bbed00(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bbed10; body size 36 bytes.
#line 1 "ENTRY_10bbed10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10bbed10(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_10bbdbd0(puVar1,param_2);
  return;
}


// Reference entry 10bbeee0; body size 28 bytes.
#line 1 "ENTRY_10bbeee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bbeee0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10bbef10; body size 28 bytes.
#line 1 "ENTRY_10bbef10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bbef10(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10bbef40; body size 20 bytes.
#line 1 "ENTRY_10bbef40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bbef40(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10bbefc0; body size 9 bytes.
#line 1 "ENTRY_10bbefc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bbefc0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10bbf070; body size 26 bytes.
#line 1 "ENTRY_10bbf070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10bbf070(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10bbf0d0; body size 33 bytes.
#line 1 "ENTRY_10bbf0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bbf0d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEntitlementsManager);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bbf170; body size 19 bytes.
#line 1 "ENTRY_10bbf170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bbf170(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bbf190; body size 3 bytes.
#line 1 "ENTRY_10bbf190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bbf190(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bbf360; body size 3 bytes.
#line 1 "ENTRY_10bbf360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bbf360(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bbf3f0; body size 28 bytes.
#line 1 "ENTRY_10bbf3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bbf3f0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10bbf440; body size 22 bytes.
#line 1 "ENTRY_10bbf440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bbf440(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bbf460; body size 22 bytes.
#line 1 "ENTRY_10bbf460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bbf460(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bbf5f0; body size 22 bytes.
#line 1 "ENTRY_10bbf5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bbf5f0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bbf7d0; body size 91 bytes.
#line 1 "ENTRY_10bbf7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10bbf7d0(int *param_2)
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
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
  }
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10bbf8a0; body size 3 bytes.
#line 1 "ENTRY_10bbf8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bbf8a0(void)

{
  return;
}


// Reference entry 10bbf910; body size 13 bytes.
#line 1 "ENTRY_10bbf910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bbf910(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bbfa60; body size 5 bytes.
#line 1 "ENTRY_10bbfa60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bbfa60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bbfb90; body size 5 bytes.
#line 1 "ENTRY_10bbfb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bbfb90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bbfba0; body size 37 bytes.
#line 1 "ENTRY_10bbfba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bbfba0(int param_1,SCStr *param_2)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(param_1 + 0x10)));
    if (!bVar1) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10bbfe70; body size 5 bytes.
#line 1 "ENTRY_10bbfe70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bbfe70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bbfeb0; body size 86 bytes.
#line 1 "ENTRY_10bbfeb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10bbfeb0(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = (int)(0);
  while (param_1 != (int *)(param_2)) {
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
      while ((param_1 = piVar3, cVar1 == '\0' && (piVar2 == (int *)param_1[2]))) {
        cVar1 = (char)(*(char *)(param_1[1] + 0xd));
        piVar3 = (int *)((int *)param_1[1]);
        piVar2 = (int *)(param_1);
      }
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar4);
}


// Reference entry 10bbff20; body size 15 bytes.
#line 1 "ENTRY_10bbff20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bbff20(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10bbff40; body size 5 bytes.
#line 1 "ENTRY_10bbff40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bbff40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bbff80; body size 5 bytes.
#line 1 "ENTRY_10bbff80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bbff80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bc00e0; body size 18 bytes.
#line 1 "ENTRY_10bc00e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bc00e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bc0180; body size 11 bytes.
#line 1 "ENTRY_10bc0180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bc0180(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bc0190; body size 11 bytes.
#line 1 "ENTRY_10bc0190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bc0190(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bc0660; body size 14 bytes.
#line 1 "ENTRY_10bc0660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10bc0660(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10bc11b0; body size 3 bytes.
#line 1 "ENTRY_10bc11b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc11b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bc11c0; body size 3 bytes.
#line 1 "ENTRY_10bc11c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc11c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bc11d0; body size 3 bytes.
#line 1 "ENTRY_10bc11d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc11d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bc11e0; body size 3 bytes.
#line 1 "ENTRY_10bc11e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc11e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bc11f0; body size 3 bytes.
#line 1 "ENTRY_10bc11f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc11f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bc1500; body size 30 bytes.
#line 1 "ENTRY_10bc1500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10bc1500(int param_1)

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


// Reference entry 10bc1590; body size 3 bytes.
#line 1 "ENTRY_10bc1590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bc1590(void)

{
  return;
}


// Reference entry 10bc15a0; body size 11 bytes.
#line 1 "ENTRY_10bc15a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc15a0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10bc1650; body size 13 bytes.
#line 1 "ENTRY_10bc1650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10bc1650(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10bc19c0; body size 60 bytes.
#line 1 "ENTRY_10bc19c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bc19c0(int param_1,int param_2)

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


// Reference entry 10bc1a10; body size 9 bytes.
#line 1 "ENTRY_10bc1a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc1a10(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10bc1e30; body size 6 bytes.
#line 1 "ENTRY_10bc1e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bc1e30(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xaaaaaaa);
}


// Reference entry 10bc1e40; body size 6 bytes.
#line 1 "ENTRY_10bc1e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bc1e40(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xaaaaaaa);
}


// Reference entry 10bc3680; body size 25 bytes.
#line 1 "ENTRY_10bc3680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bc3680(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bc36a0; body size 83 bytes.
#line 1 "ENTRY_10bc36a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10bc36a0(int *param_2)
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
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10bc3930; body size 33 bytes.
#line 1 "ENTRY_10bc3930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10bc3930(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10bc3960; body size 3 bytes.
#line 1 "ENTRY_10bc3960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bc3960(void)

{
  return;
}


// Reference entry 10bc3970; body size 18 bytes.
#line 1 "ENTRY_10bc3970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10bc3970(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4 **)(param_1 + 4) = *param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}


// Reference entry 10bc3b40; body size 7 bytes.
#line 1 "ENTRY_10bc3b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bc3b40(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bc3b50; body size 5 bytes.
#line 1 "ENTRY_10bc3b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bc3b50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bc3b60; body size 36 bytes.
#line 1 "ENTRY_10bc3b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10bc3b60(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10bc3bc0; body size 13 bytes.
#line 1 "ENTRY_10bc3bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bc3bc0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10bc3bd0; body size 3 bytes.
#line 1 "ENTRY_10bc3bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bc3bd0(void)

{
  return;
}


// Reference entry 10bc3be0; body size 36 bytes.
#line 1 "ENTRY_10bc3be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10bc3be0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_10bc3990(puVar1,param_2);
  return;
}


// Reference entry 10bc3c10; body size 5 bytes.
#line 1 "ENTRY_10bc3c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bc3c10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bc3c20; body size 6 bytes.
#line 1 "ENTRY_10bc3c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bc3c20(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCINfcDelegate");
}


// Reference entry 10bc3c30; body size 6 bytes.
#line 1 "ENTRY_10bc3c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bc3c30(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCINfcListener");
}


// Reference entry 10bc3c40; body size 27 bytes.
#line 1 "ENTRY_10bc3c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bc3c40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bc3c70; body size 16 bytes.
#line 1 "ENTRY_10bc3c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bc3c70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bc3cd0; body size 9 bytes.
#line 1 "ENTRY_10bc3cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bc3cd0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bc3ce0; body size 23 bytes.
#line 1 "ENTRY_10bc3ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bc3ce0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bc3d00; body size 3 bytes.
#line 1 "ENTRY_10bc3d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc3d00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bc3d10; body size 23 bytes.
#line 1 "ENTRY_10bc3d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bc3d10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bc3db0; body size 9 bytes.
#line 1 "ENTRY_10bc3db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bc3db0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCINfcListener);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bc3dc0; body size 100 bytes.
#line 1 "ENTRY_10bc3dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bc3dc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (uint)&ghidra_vftable_SCLoggingHelper;
  param_1[3] = (uint)&ghidra_vftable_RITQHandler;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNfcManager);
  param_1[2] = (uint)&ghidra_vftable_SCNfcManager;
  param_1[3] = (uint)&ghidra_vftable_SCNfcManager;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bc3e40; body size 19 bytes.
#line 1 "ENTRY_10bc3e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bc3e40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bc4080; body size 7 bytes.
#line 1 "ENTRY_10bc4080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bc4080(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bc4210; body size 12 bytes.
#line 1 "ENTRY_10bc4210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10bc4210(int param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + param_2 * 4);
}


// Reference entry 10bc4220; body size 3 bytes.
#line 1 "ENTRY_10bc4220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc4220(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bc4230; body size 3 bytes.
#line 1 "ENTRY_10bc4230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc4230(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bc4470; body size 49 bytes.
#line 1 "ENTRY_10bc4470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10bc4470(uint param_2)
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


// Reference entry 10bc4520; body size 3 bytes.
#line 1 "ENTRY_10bc4520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bc4520(void)

{
  return;
}


// Reference entry 10bc4530; body size 3 bytes.
#line 1 "ENTRY_10bc4530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc4530(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bc4540; body size 3 bytes.
#line 1 "ENTRY_10bc4540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc4540(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bc4550; body size 3 bytes.
#line 1 "ENTRY_10bc4550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc4550(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bc4560; body size 3 bytes.
#line 1 "ENTRY_10bc4560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc4560(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bc4570; body size 3 bytes.
#line 1 "ENTRY_10bc4570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bc4570(void)

{
  return;
}


// Reference entry 10bc45f0; body size 38 bytes.
#line 1 "ENTRY_10bc45f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_10bc45f0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10bc4620; body size 27 bytes.
#line 1 "ENTRY_10bc4620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bc4620(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10bc4650; body size 27 bytes.
#line 1 "ENTRY_10bc4650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bc4650(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10bc46d0; body size 87 bytes.
#line 1 "ENTRY_10bc46d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10bc46d0(uint param_1)

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


// Reference entry 10bc4740; body size 9 bytes.
#line 1 "ENTRY_10bc4740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bc4740(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 10bc4750; body size 61 bytes.
#line 1 "ENTRY_10bc4750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bc4750(int param_1,int param_2)

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


// Reference entry 10bc47a0; body size 21 bytes.
#line 1 "ENTRY_10bc47a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __stdcall FUN_10bc47a0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCNfcManager");
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_1);
}


// Reference entry 10bc4a00; body size 6 bytes.
#line 1 "ENTRY_10bc4a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bc4a00(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCINfcDelegate");
}


// Reference entry 10bc4a10; body size 6 bytes.
#line 1 "ENTRY_10bc4a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bc4a10(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCINfcListener");
}


// Reference entry 10bc4a30; body size 4 bytes.
#line 1 "ENTRY_10bc4a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10bc4a30(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x24));
}


// Reference entry 10bc4a40; body size 6 bytes.
#line 1 "ENTRY_10bc4a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bc4a40(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 10bc4a50; body size 6 bytes.
#line 1 "ENTRY_10bc4a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bc4a50(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 10bc4b50; body size 5 bytes.
#line 1 "ENTRY_10bc4b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bc4b50(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -4;
  return;
}


// Reference entry 10bc4d10; body size 3 bytes.
#line 1 "ENTRY_10bc4d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc4d10(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bc4d20; body size 3 bytes.
#line 1 "ENTRY_10bc4d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc4d20(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bc4d30; body size 36 bytes.
#line 1 "ENTRY_10bc4d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10bc4d30(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_10bc3990(puVar1,param_2);
  return;
}


// Reference entry 10bc4f00; body size 28 bytes.
#line 1 "ENTRY_10bc4f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bc4f00(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10bc4f30; body size 28 bytes.
#line 1 "ENTRY_10bc4f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bc4f30(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10bc4f60; body size 20 bytes.
#line 1 "ENTRY_10bc4f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bc4f60(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10bc4fe0; body size 9 bytes.
#line 1 "ENTRY_10bc4fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bc4fe0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10bc5650; body size 83 bytes.
#line 1 "ENTRY_10bc5650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10bc5650(int *param_2)
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
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10bc58e0; body size 12 bytes.
#line 1 "ENTRY_10bc58e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10bc58e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10bc5bb0; body size 12 bytes.
#line 1 "ENTRY_10bc5bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10bc5bb0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10bc5be0; body size 5 bytes.
#line 1 "ENTRY_10bc5be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bc5be0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bc5c40; body size 5 bytes.
#line 1 "ENTRY_10bc5c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bc5c40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bc5c50; body size 5 bytes.
#line 1 "ENTRY_10bc5c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bc5c50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bc5c60; body size 5 bytes.
#line 1 "ENTRY_10bc5c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bc5c60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bc5c90; body size 5 bytes.
#line 1 "ENTRY_10bc5c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bc5c90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bc5ca0; body size 6 bytes.
#line 1 "ENTRY_10bc5ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bc5ca0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIBTClassicConnectionCallback");
}


// Reference entry 10bc5cb0; body size 6 bytes.
#line 1 "ENTRY_10bc5cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bc5cb0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIBTClassicConnectionManager");
}


// Reference entry 10bc5cc0; body size 6 bytes.
#line 1 "ENTRY_10bc5cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bc5cc0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIBTClassicConnectionProvider");
}


// Reference entry 10bc5da0; body size 5 bytes.
#line 1 "ENTRY_10bc5da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bc5da0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bc6060; body size 27 bytes.
#line 1 "ENTRY_10bc6060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bc6060(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bc6090; body size 27 bytes.
#line 1 "ENTRY_10bc6090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bc6090(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bc6140; body size 16 bytes.
#line 1 "ENTRY_10bc6140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bc6140(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bc6160; body size 16 bytes.
#line 1 "ENTRY_10bc6160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bc6160(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bc6180; body size 3 bytes.
#line 1 "ENTRY_10bc6180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc6180(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bc6190; body size 10 bytes.
#line 1 "ENTRY_10bc6190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bc6190(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10bc61a0; body size 10 bytes.
#line 1 "ENTRY_10bc61a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bc61a0(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10bc6320; body size 42 bytes.
#line 1 "ENTRY_10bc6320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bc6320(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSubscriptionImpl_EventSink);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bc6360; body size 42 bytes.
#line 1 "ENTRY_10bc6360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bc6360(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBTClassicConnectionCallback);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bc6530; body size 9 bytes.
#line 1 "ENTRY_10bc6530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bc6530(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIBTClassicConnectionManager);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bc6670; body size 19 bytes.
#line 1 "ENTRY_10bc6670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bc6670(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bc68c0; body size 34 bytes.
#line 1 "ENTRY_10bc68c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bc68c0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}


// Reference entry 10bc6950; body size 19 bytes.
#line 1 "ENTRY_10bc6950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bc6950(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bc6970; body size 19 bytes.
#line 1 "ENTRY_10bc6970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bc6970(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bc6b20; body size 7 bytes.
#line 1 "ENTRY_10bc6b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bc6b20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bc6b50; body size 18 bytes.
#line 1 "ENTRY_10bc6b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bc6b50(int *param_1)

{
  if (*param_1 != 0) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 10bc6cc0; body size 3 bytes.
#line 1 "ENTRY_10bc6cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc6cc0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bc6cd0; body size 3 bytes.
#line 1 "ENTRY_10bc6cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc6cd0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bc6ce0; body size 3 bytes.
#line 1 "ENTRY_10bc6ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc6ce0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bc6cf0; body size 7 bytes.
#line 1 "ENTRY_10bc6cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bc6cf0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10bc6d00; body size 8 bytes.
#line 1 "ENTRY_10bc6d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bc6d00(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10bc6d10; body size 8 bytes.
#line 1 "ENTRY_10bc6d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bc6d10(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10bc6d20; body size 3 bytes.
#line 1 "ENTRY_10bc6d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc6d20(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bc6d30; body size 3 bytes.
#line 1 "ENTRY_10bc6d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc6d30(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bc7490; body size 8 bytes.
#line 1 "ENTRY_10bc7490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bc7490(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10bc74a0; body size 8 bytes.
#line 1 "ENTRY_10bc74a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bc74a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10bc74e0; body size 4 bytes.
#line 1 "ENTRY_10bc74e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc74e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10bc74f0; body size 4 bytes.
#line 1 "ENTRY_10bc74f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc74f0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10bc7500; body size 7 bytes.
#line 1 "ENTRY_10bc7500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bc7500(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 10bc7510; body size 7 bytes.
#line 1 "ENTRY_10bc7510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bc7510(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 10bc7560; body size 26 bytes.
#line 1 "ENTRY_10bc7560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10bc7560(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 10bc7580; body size 26 bytes.
#line 1 "ENTRY_10bc7580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10bc7580(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 10bc75a0; body size 76 bytes.
#line 1 "ENTRY_10bc75a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10bc75a0(int *param_2)
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


// Reference entry 10bc7600; body size 10 bytes.
#line 1 "ENTRY_10bc7600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10bc7600(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 10bc7610; body size 10 bytes.
#line 1 "ENTRY_10bc7610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10bc7610(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 10bc79c0; body size 32 bytes.
#line 1 "ENTRY_10bc79c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10bc79c0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x3c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x3c) + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 10bc8650; body size 6 bytes.
#line 1 "ENTRY_10bc8650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bc8650(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIBTClassicConnectionCallback");
}


// Reference entry 10bc8660; body size 6 bytes.
#line 1 "ENTRY_10bc8660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bc8660(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIBTClassicConnectionManager");
}


// Reference entry 10bc8670; body size 6 bytes.
#line 1 "ENTRY_10bc8670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bc8670(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIBTClassicConnectionProvider");
}


// Reference entry 10bc8c10; body size 7 bytes.
#line 1 "ENTRY_10bc8c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bc8c10(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10bc90b0; body size 3 bytes.
#line 1 "ENTRY_10bc90b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc90b0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bc90c0; body size 3 bytes.
#line 1 "ENTRY_10bc90c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc90c0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bc90d0; body size 3 bytes.
#line 1 "ENTRY_10bc90d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc90d0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bc90e0; body size 3 bytes.
#line 1 "ENTRY_10bc90e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc90e0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bc93b0; body size 28 bytes.
#line 1 "ENTRY_10bc93b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bc93b0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10bc93e0; body size 28 bytes.
#line 1 "ENTRY_10bc93e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bc93e0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10bc9410; body size 28 bytes.
#line 1 "ENTRY_10bc9410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bc9410(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10bc9440; body size 20 bytes.
#line 1 "ENTRY_10bc9440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bc9440(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10bc97c0; body size 25 bytes.
#line 1 "ENTRY_10bc97c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bc97c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bc97e0; body size 26 bytes.
#line 1 "ENTRY_10bc97e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10bc97e0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10bc9800; body size 33 bytes.
#line 1 "ENTRY_10bc9800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10bc9800(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10bc9830; body size 3 bytes.
#line 1 "ENTRY_10bc9830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bc9830(void)

{
  return;
}


// Reference entry 10bc9840; body size 18 bytes.
#line 1 "ENTRY_10bc9840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10bc9840(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4 **)(param_1 + 4) = *param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}


// Reference entry 10bc9a10; body size 7 bytes.
#line 1 "ENTRY_10bc9a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bc9a10(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bc9a20; body size 5 bytes.
#line 1 "ENTRY_10bc9a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bc9a20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bc9a30; body size 36 bytes.
#line 1 "ENTRY_10bc9a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10bc9a30(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10bc9a60; body size 13 bytes.
#line 1 "ENTRY_10bc9a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bc9a60(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10bc9a70; body size 3 bytes.
#line 1 "ENTRY_10bc9a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bc9a70(void)

{
  return;
}


// Reference entry 10bc9a80; body size 36 bytes.
#line 1 "ENTRY_10bc9a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10bc9a80(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_10bc9860(puVar1,param_2);
  return;
}


// Reference entry 10bc9ab0; body size 5 bytes.
#line 1 "ENTRY_10bc9ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bc9ab0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bc9b00; body size 23 bytes.
#line 1 "ENTRY_10bc9b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bc9b00(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bc9b20; body size 3 bytes.
#line 1 "ENTRY_10bc9b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc9b20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bc9b30; body size 23 bytes.
#line 1 "ENTRY_10bc9b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bc9b30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bc9fb0; body size 12 bytes.
#line 1 "ENTRY_10bc9fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10bc9fb0(int param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + param_2 * 4);
}


// Reference entry 10bc9fc0; body size 3 bytes.
#line 1 "ENTRY_10bc9fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc9fc0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bca010; body size 49 bytes.
#line 1 "ENTRY_10bca010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10bca010(uint param_2)
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


// Reference entry 10bca0c0; body size 3 bytes.
#line 1 "ENTRY_10bca0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bca0c0(void)

{
  return;
}


// Reference entry 10bca0d0; body size 3 bytes.
#line 1 "ENTRY_10bca0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bca0d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bca0e0; body size 3 bytes.
#line 1 "ENTRY_10bca0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bca0e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bca0f0; body size 3 bytes.
#line 1 "ENTRY_10bca0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bca0f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bca100; body size 3 bytes.
#line 1 "ENTRY_10bca100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bca100(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bca110; body size 3 bytes.
#line 1 "ENTRY_10bca110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bca110(void)

{
  return;
}


// Reference entry 10bca190; body size 38 bytes.
#line 1 "ENTRY_10bca190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_10bca190(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10bca1c0; body size 27 bytes.
#line 1 "ENTRY_10bca1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bca1c0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10bca1f0; body size 27 bytes.
#line 1 "ENTRY_10bca1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bca1f0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10bca230; body size 87 bytes.
#line 1 "ENTRY_10bca230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10bca230(uint param_1)

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


// Reference entry 10bca2a0; body size 3 bytes.
#line 1 "ENTRY_10bca2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bca2a0(void)

{
  return;
}


// Reference entry 10bca2b0; body size 9 bytes.
#line 1 "ENTRY_10bca2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bca2b0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 10bca2c0; body size 61 bytes.
#line 1 "ENTRY_10bca2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bca2c0(int param_1,int param_2)

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


// Reference entry 10bcad80; body size 4 bytes.
#line 1 "ENTRY_10bcad80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bcad80(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10bcb0d0; body size 6 bytes.
#line 1 "ENTRY_10bcb0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bcb0d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 10bcb0e0; body size 6 bytes.
#line 1 "ENTRY_10bcb0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bcb0e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 10bcb400; body size 5 bytes.
#line 1 "ENTRY_10bcb400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bcb400(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -4;
  return;
}


// Reference entry 10bcb410; body size 3 bytes.
#line 1 "ENTRY_10bcb410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bcb410(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bcb420; body size 36 bytes.
#line 1 "ENTRY_10bcb420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10bcb420(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_10bc9860(puVar1,param_2);
  return;
}


// Reference entry 10bcb5b0; body size 9 bytes.
#line 1 "ENTRY_10bcb5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bcb5b0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10bcb680; body size 25 bytes.
#line 1 "ENTRY_10bcb680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcb680(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcb6a0; body size 49 bytes.
#line 1 "ENTRY_10bcb6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcb6a0(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  thunk_FUN_10bd4920();
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcb6e0; body size 25 bytes.
#line 1 "ENTRY_10bcb6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcb6e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcb700; body size 18 bytes.
#line 1 "ENTRY_10bcb700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcb700(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcb720; body size 18 bytes.
#line 1 "ENTRY_10bcb720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcb720(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcb740; body size 18 bytes.
#line 1 "ENTRY_10bcb740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcb740(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcb760; body size 18 bytes.
#line 1 "ENTRY_10bcb760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcb760(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcb780; body size 18 bytes.
#line 1 "ENTRY_10bcb780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcb780(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcb7a0; body size 18 bytes.
#line 1 "ENTRY_10bcb7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcb7a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcb7c0; body size 18 bytes.
#line 1 "ENTRY_10bcb7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcb7c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcb7e0; body size 18 bytes.
#line 1 "ENTRY_10bcb7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcb7e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcb800; body size 18 bytes.
#line 1 "ENTRY_10bcb800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcb800(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcb820; body size 25 bytes.
#line 1 "ENTRY_10bcb820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcb820(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcb840; body size 25 bytes.
#line 1 "ENTRY_10bcb840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcb840(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcb860; body size 22 bytes.
#line 1 "ENTRY_10bcb860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcb860(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcb880; body size 27 bytes.
#line 1 "ENTRY_10bcb880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcb880(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcb8b0; body size 22 bytes.
#line 1 "ENTRY_10bcb8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcb8b0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcb8d0; body size 22 bytes.
#line 1 "ENTRY_10bcb8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcb8d0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcb8f0; body size 22 bytes.
#line 1 "ENTRY_10bcb8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcb8f0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcb910; body size 22 bytes.
#line 1 "ENTRY_10bcb910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcb910(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcb930; body size 22 bytes.
#line 1 "ENTRY_10bcb930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcb930(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcb950; body size 22 bytes.
#line 1 "ENTRY_10bcb950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcb950(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcb970; body size 22 bytes.
#line 1 "ENTRY_10bcb970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcb970(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcb990; body size 22 bytes.
#line 1 "ENTRY_10bcb990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcb990(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcb9b0; body size 18 bytes.
#line 1 "ENTRY_10bcb9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcb9b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcb9d0; body size 18 bytes.
#line 1 "ENTRY_10bcb9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcb9d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcb9f0; body size 18 bytes.
#line 1 "ENTRY_10bcb9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcb9f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcba10; body size 18 bytes.
#line 1 "ENTRY_10bcba10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcba10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcba30; body size 18 bytes.
#line 1 "ENTRY_10bcba30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcba30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcba50; body size 18 bytes.
#line 1 "ENTRY_10bcba50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcba50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcba70; body size 18 bytes.
#line 1 "ENTRY_10bcba70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcba70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcba90; body size 18 bytes.
#line 1 "ENTRY_10bcba90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcba90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcbab0; body size 18 bytes.
#line 1 "ENTRY_10bcbab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcbab0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcc1f0; body size 25 bytes.
#line 1 "ENTRY_10bcc1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcc1f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcc210; body size 49 bytes.
#line 1 "ENTRY_10bcc210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcc210(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  thunk_FUN_10bd4920();
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcc250; body size 32 bytes.
#line 1 "ENTRY_10bcc250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcc250(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcc280; body size 32 bytes.
#line 1 "ENTRY_10bcc280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcc280(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcc2b0; body size 32 bytes.
#line 1 "ENTRY_10bcc2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcc2b0(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcc390; body size 22 bytes.
#line 1 "ENTRY_10bcc390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcc390(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcc3b0; body size 22 bytes.
#line 1 "ENTRY_10bcc3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcc3b0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcc3d0; body size 22 bytes.
#line 1 "ENTRY_10bcc3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcc3d0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcc3f0; body size 22 bytes.
#line 1 "ENTRY_10bcc3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcc3f0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcc410; body size 22 bytes.
#line 1 "ENTRY_10bcc410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcc410(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcc430; body size 22 bytes.
#line 1 "ENTRY_10bcc430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcc430(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcc450; body size 22 bytes.
#line 1 "ENTRY_10bcc450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcc450(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcc470; body size 22 bytes.
#line 1 "ENTRY_10bcc470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcc470(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcc490; body size 22 bytes.
#line 1 "ENTRY_10bcc490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcc490(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcc4b0; body size 18 bytes.
#line 1 "ENTRY_10bcc4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcc4b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcc4d0; body size 11 bytes.
#line 1 "ENTRY_10bcc4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcc4d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcc4e0; body size 11 bytes.
#line 1 "ENTRY_10bcc4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcc4e0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcc4f0; body size 22 bytes.
#line 1 "ENTRY_10bcc4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcc4f0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcc510; body size 33 bytes.
#line 1 "ENTRY_10bcc510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcc510(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (undefined4)(*param_6);
  uVar2 = (undefined4)(*param_5);
  *param_1 = (undefined4)(*param_4);
  param_1[2] = uVar1;
  param_1[1] = uVar2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcc540; body size 18 bytes.
#line 1 "ENTRY_10bcc540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcc540(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcc560; body size 33 bytes.
#line 1 "ENTRY_10bcc560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcc560(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (undefined4)(*param_6);
  uVar2 = (undefined4)(*param_5);
  *param_1 = (undefined4)(*param_4);
  param_1[2] = uVar1;
  param_1[1] = uVar2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcc590; body size 33 bytes.
#line 1 "ENTRY_10bcc590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcc590(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (undefined4)(*param_6);
  uVar2 = (undefined4)(*param_5);
  *param_1 = (undefined4)(*param_4);
  param_1[2] = uVar1;
  param_1[1] = uVar2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcc5f0; body size 27 bytes.
#line 1 "ENTRY_10bcc5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcc5f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcc620; body size 51 bytes.
#line 1 "ENTRY_10bcc620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcc620(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  thunk_FUN_10bd4920();
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcc660; body size 29 bytes.
#line 1 "ENTRY_10bcc660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcc660(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcc690; body size 51 bytes.
#line 1 "ENTRY_10bcc690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcc690(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  thunk_FUN_10bd4920();
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcc6d0; body size 34 bytes.
#line 1 "ENTRY_10bcc6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcc6d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcc700; body size 34 bytes.
#line 1 "ENTRY_10bcc700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcc700(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcc730; body size 34 bytes.
#line 1 "ENTRY_10bcc730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcc730(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcc8a0; body size 43 bytes.
#line 1 "ENTRY_10bcc8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10bcc8a0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  param_1[1] = 0;
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (int)piVar1;
    (**(code **)(*piVar1 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10bcc8e0; body size 26 bytes.
#line 1 "ENTRY_10bcc8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10bcc8e0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10bcc900; body size 11 bytes.
#line 1 "ENTRY_10bcc900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcc900(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcc910; body size 11 bytes.
#line 1 "ENTRY_10bcc910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcc910(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcc920; body size 11 bytes.
#line 1 "ENTRY_10bcc920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcc920(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bcc930; body size 11 bytes.
#line 1 "ENTRY_10bcc930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10bcc930(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10bccb60; body size 3 bytes.
#line 1 "ENTRY_10bccb60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bccb60(void)

{
  return;
}


// Reference entry 10bccb70; body size 3 bytes.
#line 1 "ENTRY_10bccb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bccb70(void)

{
  return;
}


// Reference entry 10bccb80; body size 3 bytes.
#line 1 "ENTRY_10bccb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bccb80(void)

{
  return;
}


// Reference entry 10bccb90; body size 3 bytes.
#line 1 "ENTRY_10bccb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bccb90(void)

{
  return;
}


// Reference entry 10bccba0; body size 3 bytes.
#line 1 "ENTRY_10bccba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bccba0(void)

{
  return;
}


// Reference entry 10bccbb0; body size 68 bytes.
#line 1 "ENTRY_10bccbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10bccbb0(void *param_2,int param_3)
{
  int *param_1 = (int *)this;
  size_t _Size;
  void *_Dst;
  
  _Size = (size_t)(param_3 - (int)param_2);
  _Dst = (void *)((void *)*param_1);
  if ((uint)(param_1[2] - (int)_Dst >> 2) < (uint)((int)_Size >> 2)) {
    thunk_FUN_10bd9ba0((int)_Size >> 2);
    _Dst = (void *)((void *)*param_1);
  }
  memmove(_Dst,param_2,_Size);
  param_1[1] = (int)_Dst + _Size;
  return;
}


// Reference entry 10bcce60; body size 25 bytes.
#line 1 "ENTRY_10bcce60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcce60(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 10bcce80; body size 25 bytes.
#line 1 "ENTRY_10bcce80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcce80(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 10bccea0; body size 25 bytes.
#line 1 "ENTRY_10bccea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bccea0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 10bccec0; body size 25 bytes.
#line 1 "ENTRY_10bccec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bccec0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 10bccee0; body size 25 bytes.
#line 1 "ENTRY_10bccee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bccee0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x30));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 10bccf00; body size 25 bytes.
#line 1 "ENTRY_10bccf00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bccf00(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 10bccf20; body size 25 bytes.
#line 1 "ENTRY_10bccf20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bccf20(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 10bccf40; body size 25 bytes.
#line 1 "ENTRY_10bccf40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bccf40(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 10bccf60; body size 25 bytes.
#line 1 "ENTRY_10bccf60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bccf60(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x14));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 10bcd220; body size 5 bytes.
#line 1 "ENTRY_10bcd220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bcd220(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bcd230; body size 13 bytes.
#line 1 "ENTRY_10bcd230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd230(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bcd240; body size 13 bytes.
#line 1 "ENTRY_10bcd240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd240(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bcd250; body size 13 bytes.
#line 1 "ENTRY_10bcd250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd250(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bcd260; body size 13 bytes.
#line 1 "ENTRY_10bcd260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd260(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bcd270; body size 13 bytes.
#line 1 "ENTRY_10bcd270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd270(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bcd280; body size 13 bytes.
#line 1 "ENTRY_10bcd280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd280(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bcd290; body size 13 bytes.
#line 1 "ENTRY_10bcd290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd290(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bcd2a0; body size 13 bytes.
#line 1 "ENTRY_10bcd2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd2a0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bcd2b0; body size 13 bytes.
#line 1 "ENTRY_10bcd2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd2b0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bcd2c0; body size 13 bytes.
#line 1 "ENTRY_10bcd2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd2c0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bcd2d0; body size 13 bytes.
#line 1 "ENTRY_10bcd2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd2d0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bcd2e0; body size 13 bytes.
#line 1 "ENTRY_10bcd2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd2e0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bcd2f0; body size 13 bytes.
#line 1 "ENTRY_10bcd2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd2f0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bcd300; body size 13 bytes.
#line 1 "ENTRY_10bcd300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd300(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bcd310; body size 13 bytes.
#line 1 "ENTRY_10bcd310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd310(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bcd320; body size 13 bytes.
#line 1 "ENTRY_10bcd320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd320(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bcd330; body size 13 bytes.
#line 1 "ENTRY_10bcd330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd330(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bcd340; body size 13 bytes.
#line 1 "ENTRY_10bcd340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd340(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bcd350; body size 113 bytes.
#line 1 "ENTRY_10bcd350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10bcd350(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)(thunk_FUN_10bcd530(*(undefined4 *)(*param_2 + 4),*param_1,param_3));
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


// Reference entry 10bcd3e0; body size 113 bytes.
#line 1 "ENTRY_10bcd3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10bcd3e0(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)(thunk_FUN_10bcd670(*(undefined4 *)(*param_2 + 4),*param_1,param_3));
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


// Reference entry 10bcd470; body size 33 bytes.
#line 1 "ENTRY_10bcd470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10bcd470(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10bcd4a0; body size 33 bytes.
#line 1 "ENTRY_10bcd4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10bcd4a0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10bcd4d0; body size 33 bytes.
#line 1 "ENTRY_10bcd4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10bcd4d0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10bcd500; body size 33 bytes.
#line 1 "ENTRY_10bcd500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10bcd500(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10bcd990; body size 3 bytes.
#line 1 "ENTRY_10bcd990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd990(void)

{
  return;
}


// Reference entry 10bcd9a0; body size 3 bytes.
#line 1 "ENTRY_10bcd9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd9a0(void)

{
  return;
}


// Reference entry 10bcd9b0; body size 3 bytes.
#line 1 "ENTRY_10bcd9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd9b0(void)

{
  return;
}


// Reference entry 10bcd9c0; body size 3 bytes.
#line 1 "ENTRY_10bcd9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd9c0(void)

{
  return;
}


// Reference entry 10bcd9d0; body size 3 bytes.
#line 1 "ENTRY_10bcd9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd9d0(void)

{
  return;
}


// Reference entry 10bcd9e0; body size 3 bytes.
#line 1 "ENTRY_10bcd9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd9e0(void)

{
  return;
}


// Reference entry 10bcd9f0; body size 3 bytes.
#line 1 "ENTRY_10bcd9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd9f0(void)

{
  return;
}


// Reference entry 10bcda00; body size 3 bytes.
#line 1 "ENTRY_10bcda00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcda00(void)

{
  return;
}


// Reference entry 10bcda10; body size 3 bytes.
#line 1 "ENTRY_10bcda10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcda10(void)

{
  return;
}


// Reference entry 10bcda20; body size 3 bytes.
#line 1 "ENTRY_10bcda20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcda20(void)

{
  return;
}


// Reference entry 10bcda30; body size 3 bytes.
#line 1 "ENTRY_10bcda30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcda30(void)

{
  return;
}


// Reference entry 10bcdda0; body size 18 bytes.
#line 1 "ENTRY_10bcdda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10bcdda0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4 **)(param_1 + 4) = *param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}


// Reference entry 10bcde50; body size 23 bytes.
#line 1 "ENTRY_10bcde50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10bcde50(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10bd5dc0(param_2);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x1c;
  return;
}


// Reference entry 10bcdea0; body size 18 bytes.
#line 1 "ENTRY_10bcdea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10bcdea0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4 **)(param_1 + 4) = *param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}


// Reference entry 10bcdec0; body size 18 bytes.
#line 1 "ENTRY_10bcdec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10bcdec0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4 **)(param_1 + 4) = *param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}


// Reference entry 10bcdf70; body size 23 bytes.
#line 1 "ENTRY_10bcdf70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10bcdf70(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10475400(param_2);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x1c;
  return;
}


// Reference entry 10bcfb30; body size 73 bytes.
#line 1 "ENTRY_10bcfb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10bcfb30(int *param_2,int *param_3)
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
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_2);
}


// Reference entry 10bcfb90; body size 30 bytes.
#line 1 "ENTRY_10bcfb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcfb90(int *param_1,int *param_2,int *param_3)

{
  if (param_1 != (int *)(param_2)) {
    do {
      if (*param_1 == *param_3) {
        return;
      }
      param_1 = (int *)(param_1 + 1);
    } while (param_1 != (int *)(param_2));
  }
  return;
}


// Reference entry 10bcfbc0; body size 30 bytes.
#line 1 "ENTRY_10bcfbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcfbc0(int *param_1,int *param_2,int *param_3)

{
  if (param_1 != (int *)(param_2)) {
    do {
      if (*param_1 == *param_3) {
        return;
      }
      param_1 = (int *)(param_1 + 1);
    } while (param_1 != (int *)(param_2));
  }
  return;
}


// Reference entry 10bcfbf0; body size 30 bytes.
#line 1 "ENTRY_10bcfbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcfbf0(int *param_1,int *param_2,int *param_3)

{
  if (param_1 != (int *)(param_2)) {
    do {
      if (*param_1 == *param_3) {
        return;
      }
      param_1 = (int *)(param_1 + 1);
    } while (param_1 != (int *)(param_2));
  }
  return;
}


// Reference entry 10bcfc20; body size 30 bytes.
#line 1 "ENTRY_10bcfc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcfc20(int *param_1,int *param_2,int *param_3)

{
  if (param_1 != (int *)(param_2)) {
    do {
      if (*param_1 == *param_3) {
        return;
      }
      param_1 = (int *)(param_1 + 1);
    } while (param_1 != (int *)(param_2));
  }
  return;
}


// Reference entry 10bcfc50; body size 15 bytes.
#line 1 "ENTRY_10bcfc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcfc50(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10bcfc70; body size 15 bytes.
#line 1 "ENTRY_10bcfc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcfc70(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 10bcfc90; body size 15 bytes.
#line 1 "ENTRY_10bcfc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcfc90(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 10bcfcb0; body size 15 bytes.
#line 1 "ENTRY_10bcfcb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcfcb0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 10bcfcd0; body size 15 bytes.
#line 1 "ENTRY_10bcfcd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcfcd0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x30);
  return;
}


// Reference entry 10bcfcf0; body size 15 bytes.
#line 1 "ENTRY_10bcfcf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcfcf0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10bcfd10; body size 15 bytes.
#line 1 "ENTRY_10bcfd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcfd10(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10bcfd30; body size 15 bytes.
#line 1 "ENTRY_10bcfd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcfd30(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10bcfd50; body size 15 bytes.
#line 1 "ENTRY_10bcfd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcfd50(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 10bcfd70; body size 15 bytes.
#line 1 "ENTRY_10bcfd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcfd70(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10bcff10; body size 26 bytes.
#line 1 "ENTRY_10bcff10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcff10(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_10bd7130();
  thunk_FUN_1148a50e(param_2,0x30);
  return;
}


// Reference entry 10bd00b0; body size 15 bytes.
#line 1 "ENTRY_10bd00b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd00b0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 10bd00d0; body size 7 bytes.
#line 1 "ENTRY_10bd00d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd00d0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bd00e0; body size 13 bytes.
#line 1 "ENTRY_10bd00e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd00e0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bd00f0; body size 5 bytes.
#line 1 "ENTRY_10bd00f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd00f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd0100; body size 7 bytes.
#line 1 "ENTRY_10bd0100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0100(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bd0110; body size 7 bytes.
#line 1 "ENTRY_10bd0110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0110(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bd0120; body size 7 bytes.
#line 1 "ENTRY_10bd0120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0120(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bd0130; body size 7 bytes.
#line 1 "ENTRY_10bd0130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0130(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bd0140; body size 7 bytes.
#line 1 "ENTRY_10bd0140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0140(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bd0150; body size 7 bytes.
#line 1 "ENTRY_10bd0150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0150(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bd0160; body size 7 bytes.
#line 1 "ENTRY_10bd0160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0160(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bd0170; body size 5 bytes.
#line 1 "ENTRY_10bd0170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0170(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd0180; body size 7 bytes.
#line 1 "ENTRY_10bd0180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0180(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bd0190; body size 5 bytes.
#line 1 "ENTRY_10bd0190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0190(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd0420; body size 5 bytes.
#line 1 "ENTRY_10bd0420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0420(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd0430; body size 5 bytes.
#line 1 "ENTRY_10bd0430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0430(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd0440; body size 5 bytes.
#line 1 "ENTRY_10bd0440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0440(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd0450; body size 5 bytes.
#line 1 "ENTRY_10bd0450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0450(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd0460; body size 5 bytes.
#line 1 "ENTRY_10bd0460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0460(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd0470; body size 5 bytes.
#line 1 "ENTRY_10bd0470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0470(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd0480; body size 5 bytes.
#line 1 "ENTRY_10bd0480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0480(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd0490; body size 5 bytes.
#line 1 "ENTRY_10bd0490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0490(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd04a0; body size 31 bytes.
#line 1 "ENTRY_10bd04a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10bd04a0(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') && (in_EAX = *param_2, *(uint *)(param_1 + 0x10) <= in_EAX)
     ) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(in_EAX & 0xffffff00);
}


// Reference entry 10bd04d0; body size 37 bytes.
#line 1 "ENTRY_10bd04d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd04d0(int param_1,SCStr *param_2)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(param_1 + 0x10)));
    if (!bVar1) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10bd0500; body size 37 bytes.
#line 1 "ENTRY_10bd0500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0500(int param_1,SCStr *param_2)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(param_1 + 0x10)));
    if (!bVar1) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10bd0530; body size 31 bytes.
#line 1 "ENTRY_10bd0530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10bd0530(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (in_EAX = *param_2, *(int *)(param_1 + 0x10) <= (int)in_EAX)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(in_EAX & 0xffffff00);
}


// Reference entry 10bd0560; body size 31 bytes.
#line 1 "ENTRY_10bd0560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10bd0560(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (in_EAX = *param_2, *(int *)(param_1 + 0x10) <= (int)in_EAX)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(in_EAX & 0xffffff00);
}


// Reference entry 10bd0590; body size 31 bytes.
#line 1 "ENTRY_10bd0590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10bd0590(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (in_EAX = *param_2, *(int *)(param_1 + 0x10) <= (int)in_EAX)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(in_EAX & 0xffffff00);
}


// Reference entry 10bd05c0; body size 31 bytes.
#line 1 "ENTRY_10bd05c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10bd05c0(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (in_EAX = *param_2, *(int *)(param_1 + 0x10) <= (int)in_EAX)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(in_EAX & 0xffffff00);
}


// Reference entry 10bd05f0; body size 31 bytes.
#line 1 "ENTRY_10bd05f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10bd05f0(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (in_EAX = *param_2, *(int *)(param_1 + 0x10) <= (int)in_EAX)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(in_EAX & 0xffffff00);
}


// Reference entry 10bd0620; body size 31 bytes.
#line 1 "ENTRY_10bd0620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10bd0620(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (in_EAX = *param_2, *(int *)(param_1 + 0x10) <= (int)in_EAX)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(in_EAX & 0xffffff00);
}


// Reference entry 10bd0650; body size 92 bytes.
#line 1 "ENTRY_10bd0650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10bd0650(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (int *)(param_2)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_3);
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
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_3);
}


// Reference entry 10bd06d0; body size 3 bytes.
#line 1 "ENTRY_10bd06d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd06d0(void)

{
  return;
}


// Reference entry 10bd06e0; body size 3 bytes.
#line 1 "ENTRY_10bd06e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd06e0(void)

{
  return;
}


// Reference entry 10bd0760; body size 5 bytes.
#line 1 "ENTRY_10bd0760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0760(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd0770; body size 13 bytes.
#line 1 "ENTRY_10bd0770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd0770(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bd0780; body size 13 bytes.
#line 1 "ENTRY_10bd0780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd0780(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bd0790; body size 19 bytes.
#line 1 "ENTRY_10bd0790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd0790(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 10bd1230; body size 7 bytes.
#line 1 "ENTRY_10bd1230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1230(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bd1240; body size 7 bytes.
#line 1 "ENTRY_10bd1240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1240(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10bd1250; body size 38 bytes.
#line 1 "ENTRY_10bd1250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_10bd1250(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10bd1280; body size 103 bytes.
#line 1 "ENTRY_10bd1280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __stdcall FUN_10bd1280(int *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  while (param_1 != (int *)(param_2)) {
    *param_3 = (int)(param_1[4]);
    param_3 = (int *)(param_3 + 1);
    piVar2 = (int *)((int *)param_1[2]);
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
      while ((param_1 = piVar3, cVar1 == '\0' && (piVar2 == (int *)param_1[2]))) {
        cVar1 = (char)(*(char *)(param_1[1] + 0xd));
        piVar3 = (int *)((int *)param_1[1]);
        piVar2 = (int *)(param_1);
      }
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_3);
}


// Reference entry 10bd1300; body size 5 bytes.
#line 1 "ENTRY_10bd1300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1300(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1310; body size 5 bytes.
#line 1 "ENTRY_10bd1310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1310(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1320; body size 5 bytes.
#line 1 "ENTRY_10bd1320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1320(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1330; body size 5 bytes.
#line 1 "ENTRY_10bd1330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1330(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd14b0; body size 36 bytes.
#line 1 "ENTRY_10bd14b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10bd14b0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10bd14e0; body size 101 bytes.
#line 1 "ENTRY_10bd14e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10bd14e0(int *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  while (param_1 != (int *)(param_2)) {
    *param_3 = (int)(param_1[4]);
    param_3 = (int *)(param_3 + 1);
    piVar2 = (int *)((int *)param_1[2]);
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
      while ((param_1 = piVar3, cVar1 == '\0' && (piVar2 == (int *)param_1[2]))) {
        cVar1 = (char)(*(char *)(param_1[1] + 0xd));
        piVar3 = (int *)((int *)param_1[1]);
        piVar2 = (int *)(param_1);
      }
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_3);
}


// Reference entry 10bd1560; body size 36 bytes.
#line 1 "ENTRY_10bd1560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10bd1560(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10bd1590; body size 36 bytes.
#line 1 "ENTRY_10bd1590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10bd1590(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10bd17d0; body size 5 bytes.
#line 1 "ENTRY_10bd17d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd17d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd17e0; body size 5 bytes.
#line 1 "ENTRY_10bd17e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd17e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd17f0; body size 5 bytes.
#line 1 "ENTRY_10bd17f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd17f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1800; body size 5 bytes.
#line 1 "ENTRY_10bd1800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1800(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1810; body size 5 bytes.
#line 1 "ENTRY_10bd1810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1810(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1820; body size 5 bytes.
#line 1 "ENTRY_10bd1820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1820(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1830; body size 5 bytes.
#line 1 "ENTRY_10bd1830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1830(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1840; body size 5 bytes.
#line 1 "ENTRY_10bd1840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1840(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1850; body size 5 bytes.
#line 1 "ENTRY_10bd1850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1850(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1860; body size 5 bytes.
#line 1 "ENTRY_10bd1860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1860(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1870; body size 5 bytes.
#line 1 "ENTRY_10bd1870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1870(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1880; body size 5 bytes.
#line 1 "ENTRY_10bd1880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1880(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1890; body size 5 bytes.
#line 1 "ENTRY_10bd1890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1890(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd18a0; body size 5 bytes.
#line 1 "ENTRY_10bd18a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd18a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd18b0; body size 5 bytes.
#line 1 "ENTRY_10bd18b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd18b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd18c0; body size 5 bytes.
#line 1 "ENTRY_10bd18c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd18c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd18d0; body size 5 bytes.
#line 1 "ENTRY_10bd18d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd18d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd18e0; body size 5 bytes.
#line 1 "ENTRY_10bd18e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd18e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd18f0; body size 5 bytes.
#line 1 "ENTRY_10bd18f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd18f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1900; body size 5 bytes.
#line 1 "ENTRY_10bd1900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1900(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1910; body size 5 bytes.
#line 1 "ENTRY_10bd1910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1910(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1920; body size 5 bytes.
#line 1 "ENTRY_10bd1920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1920(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1930; body size 5 bytes.
#line 1 "ENTRY_10bd1930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1930(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1940; body size 5 bytes.
#line 1 "ENTRY_10bd1940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1940(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1950; body size 5 bytes.
#line 1 "ENTRY_10bd1950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1950(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1960; body size 5 bytes.
#line 1 "ENTRY_10bd1960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1960(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1970; body size 5 bytes.
#line 1 "ENTRY_10bd1970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1970(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1980; body size 5 bytes.
#line 1 "ENTRY_10bd1980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1980(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1990; body size 5 bytes.
#line 1 "ENTRY_10bd1990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1990(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd19a0; body size 5 bytes.
#line 1 "ENTRY_10bd19a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd19a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd19b0; body size 5 bytes.
#line 1 "ENTRY_10bd19b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd19b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd19c0; body size 5 bytes.
#line 1 "ENTRY_10bd19c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd19c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd19d0; body size 5 bytes.
#line 1 "ENTRY_10bd19d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd19d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd19e0; body size 5 bytes.
#line 1 "ENTRY_10bd19e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd19e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd19f0; body size 5 bytes.
#line 1 "ENTRY_10bd19f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd19f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1a00; body size 5 bytes.
#line 1 "ENTRY_10bd1a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1a00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1a10; body size 5 bytes.
#line 1 "ENTRY_10bd1a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1a10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1a20; body size 5 bytes.
#line 1 "ENTRY_10bd1a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1a20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1a30; body size 5 bytes.
#line 1 "ENTRY_10bd1a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1a30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1a40; body size 5 bytes.
#line 1 "ENTRY_10bd1a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1a40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1a50; body size 5 bytes.
#line 1 "ENTRY_10bd1a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1a50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1a60; body size 5 bytes.
#line 1 "ENTRY_10bd1a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1a60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1a70; body size 5 bytes.
#line 1 "ENTRY_10bd1a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1a70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1a80; body size 5 bytes.
#line 1 "ENTRY_10bd1a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1a80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1a90; body size 5 bytes.
#line 1 "ENTRY_10bd1a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1a90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1aa0; body size 5 bytes.
#line 1 "ENTRY_10bd1aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1aa0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1ab0; body size 5 bytes.
#line 1 "ENTRY_10bd1ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1ab0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1ac0; body size 5 bytes.
#line 1 "ENTRY_10bd1ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1ac0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10bd1ad0; body size 5 bytes.
#line 1 "ENTRY_10bd1ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1ad0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


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
extern __declspec(dllimport) int _CxxThrowException(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern int beginsWith(...);
extern int format(...);
extern int func_0x10015be0(...);
extern int func_0x1006dccd(...);
extern int int_allocRep(...);
extern int int_release(...);
extern int int_start(...);
extern int length(...);
extern __declspec(dllimport) int memmove(...);
extern int op_lt(...);
extern int operator_new(...);
extern int thunk_FUN_1011bdc0(...);
extern int thunk_FUN_10120220(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101f53d0(...);
extern int thunk_FUN_10200150(...);
extern int thunk_FUN_10203970(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_102460b0(...);
extern int thunk_FUN_10247e10(...);
extern int thunk_FUN_102e8bc0(...);
extern int thunk_FUN_10314f90(...);
extern int thunk_FUN_1031b010(...);
extern int thunk_FUN_10353440(...);
extern int thunk_FUN_10353e20(...);
extern int thunk_FUN_10354880(...);
extern int thunk_FUN_10354c60(...);
extern int thunk_FUN_103566d0(...);
extern int thunk_FUN_103570f0(...);
extern int thunk_FUN_10357c10(...);
extern int thunk_FUN_10357cb0(...);
extern int thunk_FUN_10359040(...);
extern int thunk_FUN_1036ec30(...);
extern int thunk_FUN_1038a5a0(...);
extern int thunk_FUN_103a7c30(...);
extern int thunk_FUN_103a9240(...);
extern int thunk_FUN_103aac30(...);
extern int thunk_FUN_103bc4b0(...);
extern int thunk_FUN_103beae0(...);
extern int thunk_FUN_103cd850(...);
extern int thunk_FUN_103cdb40(...);
extern int thunk_FUN_103cdcc0(...);
extern int thunk_FUN_103d65f0(...);
extern int thunk_FUN_1059c050(...);
extern int thunk_FUN_1059d800(...);
extern int thunk_FUN_1059d940(...);
extern int thunk_FUN_105a7950(...);
extern int thunk_FUN_105ad900(...);
extern int thunk_FUN_106e1380(...);
extern int thunk_FUN_10708df0(...);
extern int thunk_FUN_10786100(...);
extern int thunk_FUN_107e6130(...);
extern int thunk_FUN_10818140(...);
extern int thunk_FUN_1083fac0(...);
extern int thunk_FUN_1087eff0(...);
extern int thunk_FUN_10cf1210(...);
extern int thunk_FUN_10d08960(...);
extern int thunk_FUN_1106b1c0(...);
extern int thunk_FUN_11079440(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_110a2880(...);
extern int thunk_FUN_110a9ef0(...);
extern int thunk_FUN_110ce190(...);
extern int thunk_FUN_110d3ac0(...);
extern int thunk_FUN_11131cc0(...);
extern int thunk_FUN_111a06b0(...);
extern int thunk_FUN_111c0760(...);
extern int thunk_FUN_111c4880(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11240650(...);
extern int thunk_FUN_112407b0(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_11249110(...);
extern int thunk_FUN_1124a3f0(...);
extern int thunk_FUN_1124d790(...);
extern int thunk_FUN_1124ef40(...);
extern int thunk_FUN_1124f060(...);
extern int thunk_FUN_1124ff50(...);
extern int thunk_FUN_1124ffa0(...);
extern int thunk_FUN_112503c0(...);
extern int thunk_FUN_11255220(...);
extern int thunk_FUN_11255560(...);
extern int thunk_FUN_1125acd0(...);
extern int thunk_FUN_112616c0(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int DAT_1186d2ee;
extern int DAT_11880fb0;
extern int DAT_11d330dc;
extern int DAT_121195a8;
extern int DAT_12126b84;
extern int DAT_121a12cc;
extern int DAT_122e8a34;
extern int g_lSCObjCount;
extern int ghidra_vftable_RCompatibleZPPairCandidateEnumerator;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpImpl;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_RCustRegQueryCountryAIOOp;
extern int ghidra_vftable_RCustRegRegisterSoftwareAIOOp;
extern int ghidra_vftable_RCustomZPEnumerator;
extern int ghidra_vftable_RHTPrimaryZPCandidateEnumerator;
extern int ghidra_vftable_RHTTPBufferedDataIO;
extern int ghidra_vftable_RITQHandler;
extern int ghidra_vftable_RSubwooferPrimaryZPCandidateEnumerator;
extern int ghidra_vftable_RSubwooferZPCandidateEnumerator;
extern int ghidra_vftable_RUpnpAsyncIOOperation;
extern int ghidra_vftable_RUpnpSPAddAccountXAIOOp;
extern int ghidra_vftable_RUpnpSPAddOAuthAccountXAIOOp;
extern int ghidra_vftable_RUpnpSPSetStringAIOOp;
extern int ghidra_vftable_RUpnpZGTGetZoneGroupStateAIOOp;
extern int ghidra_vftable_RZPAirPlayEnumerator;
extern int ghidra_vftable_RZPEnumerator;
extern int ghidra_vftable_RZPGroupableEnumerator;
extern int ghidra_vftable_RZPHasVoiceAccountsEnumerator;
extern int ghidra_vftable_RZPIkeaLampEnumerator;
extern int ghidra_vftable_RZPLineInEnumerator;
extern int ghidra_vftable_RZPPrimaryPlayerEnumerator;
extern int ghidra_vftable_RZPSecureRegStateEnumerator;
extern int ghidra_vftable_RZPSettingsMenuEnumerator;
extern int ghidra_vftable_RZPUnconfiguredEnumerator;
extern int ghidra_vftable_RZPVoiceCapableEnumerator;
extern int ghidra_vftable_RZPVoiceEnabledStateEnumerator;
extern int ghidra_vftable_SCAddCustomRadioActionFactory;
extern int ghidra_vftable_SCAsyncBrowseDataSource;
extern int ghidra_vftable_SCBrowseStackManagerEventSinkInternal;
extern int ghidra_vftable_SCContentPageDataSource;
extern int ghidra_vftable_SCContentRootPageDataSource;
extern int ghidra_vftable_SCContentSessionCallback;
extern int ghidra_vftable_SCControllerEventSinkInternal;
extern int ghidra_vftable_SCDefaultBrowseListPresentationMap;
extern int ghidra_vftable_SCEventSinkDelegateInternal;
extern int ghidra_vftable_SCEventSubscriptionImpl_EventSink;
extern int ghidra_vftable_SCFeatureManagerEventSinkInternal;
extern int ghidra_vftable_SCHouseholdAdapterEventSinkInternal;
extern int ghidra_vftable_SCHousehold_DateTimeEventSink;
extern int ghidra_vftable_SCHousehold_SubscriptionHelper;
extern int ghidra_vftable_SCIBrowseStackManager;
extern int ghidra_vftable_SCIEnumerator;
extern int ghidra_vftable_SCIHousehold;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpAddServiceAccount;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCIOpZoneGroupTopologyGetZoneGroupState;
extern int ghidra_vftable_SCIServiceDescriptor;
extern int ghidra_vftable_SCIServiceDescriptorInternals;
extern int ghidra_vftable_SCITokenManager;
extern int ghidra_vftable_SCIndexedShareDataSource;
extern int ghidra_vftable_SCLastFMBrowseDataSource;
extern int ghidra_vftable_SCLegacyWelcomeLoginWizardActionDescriptor;
extern int ghidra_vftable_SCLifecycleManagerEventSinkInternal;
extern int ghidra_vftable_SCMultipleDeferredEvtHelper;
extern int ghidra_vftable_SCNewWizControllerFor;
extern int ghidra_vftable_SCNowPlayingEventSinkInternal;
extern int ghidra_vftable_SCOpAddAccountX;
extern int ghidra_vftable_SCOpFetchToken;
extern int ghidra_vftable_SCOpImpl;
extern int ghidra_vftable_SCOpRef;
extern int ghidra_vftable_SCOpZoneGroupTopologyGetZoneGroupState;
extern int ghidra_vftable_SCShareManagerEventSink;
extern int ghidra_vftable_SCSonosBrowseListPresentationMap;
extern int ghidra_vftable_SCSwfObjBCListener;
extern int ghidra_vftable_SCSwfObjQListener;
extern int ghidra_vftable_SCSwfObjUMListener;
extern int ghidra_vftable_SCTestPoint_TestPointCallback;
extern int ghidra_vftable_SCTimerUser;
extern int ghidra_vftable_SCUpdatePopoverActionDescriptor;
extern int ghidra_vftable_SCWrapperHelper;
extern int ghidra_vftable_SCZonePlayerCollection;
extern int ghidra_vftable_SwfObjZonePlayerCollection;
extern int ghidra_vftable_UWAHouseholdInterface;
extern int ghidra_vftable_WizardCompletionCallback;
extern int in_EAX;
extern undefined1 LAB_114f5ce0[];
extern undefined1 LAB_11503650[];
extern undefined1 LAB_1153e9f0[];
extern undefined1 LAB_115486b5[];
extern undefined1 LAB_11549320[];
extern undefined1 LAB_1154a6c0[];
extern undefined1 LAB_1154c4a0[];
extern undefined1 LAB_1154d440[];
extern undefined1 LAB_11700b00[];
extern undefined1 LAB_117b5f20[];
extern int *PTR_s_IsLocalRadioPrepulated_1211957c;
extern int *PTR_s_IsRadioFavoritesPrepulated_12119580;
extern int *stack0xfffffffc;
extern void *ExceptionList;
struct SCOpRefBase { char _pad; SCOpRefBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int int_start(A...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int beginsWith(A...); template<class... A> int format(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); template<class... A> int length(A...); template<class... A> int op_lt(A...); };
typedef void *E9;
typedef void *WARNING;
struct AddAccountX { char _pad; AddAccountX(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Fire { char _pad; Fire(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct GetZoneGroupState { char _pad; GetZoneGroupState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCHousehold { char _pad; SCHousehold(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIBrowseStackManager { char _pad; SCIBrowseStackManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIEnumerator { char _pad; SCIEnumerator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIHousehold { char _pad; SCIHousehold(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIOpAddServiceAccount { char _pad; SCIOpAddServiceAccount(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIOpZoneGroupTopologyGetZoneGroupState { char _pad; SCIOpZoneGroupTopologyGetZoneGroupState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIServiceDescriptorInternals { char _pad; SCIServiceDescriptorInternals(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIStackedItemImpl { char _pad; SCIStackedItemImpl(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCITimeZone { char _pad; SCITimeZone(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCITokenManager { char _pad; SCITokenManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIZoneGroup { char _pad; SCIZoneGroup(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SetString { char _pad; SetString(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SystemProperties { char _pad; SystemProperties(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ThrowInfo { char _pad; ThrowInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ZoneGroupTopology { char _pad; ZoneGroupTopology(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered_Bulk { char _pad; /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10357aa0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10357ac0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10358d20(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10359550(int *param_2,int param_3,undefined4 param_4,undefined4 param_5); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10359590(int *param_2,int param_3,undefined4 param_4,undefined4 param_5); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035a7f0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035a870(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035a8f0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035a970(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035a9f0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035aa70(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035b880(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035b980(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035bb50(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035bb70(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035bb90(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035bd80(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035bd90(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035bda0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035bdb0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035bea0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035beb0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035bed0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035bee0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035c000(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035c020(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035c030(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035c040(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035c050(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035c0d0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035c0e0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035c100(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035c120(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035c140(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035c160(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035c170(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035c190(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035c1a0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035c1e0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035c220(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035cbe0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035cc40(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035cc80(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035cd80(undefined4 param_2,undefined4 param_3,undefined1 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035ce50(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035cee0(undefined4 param_2,undefined4 param_3,undefined1 param_4,
            undefined1 param_5); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035d140(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035d180(undefined4 param_2,undefined4 param_3,undefined1 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035d1c0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035d260(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035d310(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035d340(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035d370(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035d3a0(undefined4 param_2,undefined1 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035d3e0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035d410(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035d440(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035d470(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035d4b0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035d4f0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035d520(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035d550(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035d8e0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035da80(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035f4a0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035f610(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035f780(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035fa40(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035fd60(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035fe40(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035fe90(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035ff50(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1035ff60(undefined4 param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10365ec0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10366230(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10366300(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10366360(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_103664a0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103665c0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10366660(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10366850(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10366870(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10366890(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_103668b0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_103668d0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_103668f0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10366910(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10366930(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10366d30(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10366d40(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10367740(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10367760(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036a8f0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_1036a920(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_1036a970(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_1036a9b0(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036b960(int *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036d4f0(int *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036d510(int *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036da30(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036da50(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036da70(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036da90(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036dab0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036dad0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036daf0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036db10(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036db30(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036db50(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036db70(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036dbd0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036dd10(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036dd20(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036dd30(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036dd40(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036dd50(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036dd60(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036dd70(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036dd80(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036df00(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036df40(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036e910(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036e930(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036ea40(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036ea60(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036ea80(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036eaa0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036eab0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036eac0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036eae0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036eaf0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1036efa0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103717b0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103717c0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103717d0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103717e0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_103717f0(byte *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10376e40(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10377b70(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10377b80(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10377b90(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10377ba0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10377bb0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10377bc0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10379710(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10393a70(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10395d40(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103967a0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103967b0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103967c0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103967d0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103967e0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10396810(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10397310(undefined2 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10397320(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10399ea0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1039a5a0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1039a5c0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1039a990(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1039ec00(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1039ec20(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1039ec40(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1039f240(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_103a0820(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_103a0830(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a4240(undefined4 *param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a4260(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a43a0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_103a4420(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_103a4580(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_103a46a0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_103a4720(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_103a4740(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103a4ac0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a6080(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a60a0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a60c0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a60e0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a6100(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a61c0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a61d0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a6260(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a6270(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a62a0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a62c0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a62e0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a6300(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a6320(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a6370(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a6380(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a7010(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a7050(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a7300(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a7670(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_103a8ac0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a8b20(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a8b70(char param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_103a8c10(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_103a8c30(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103a8d90(int *param_2,uint param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103a8f50(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_103a9100(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103a9220(int *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_103a92d0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_103a92f0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_103a9310(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_103a9330(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103aa020(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_103aa770(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_103aa790(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_103aa7b0(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_103aa7d0(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_103ab3f0(int *param_2,int param_3,int param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103ab9c0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103ab9d0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103ab9f0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103ac0f0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103ac100(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103b6af0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103b6b00(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103b6de0(undefined4 *param_2,void *param_3,void *param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103bcf10(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103bdfb0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103be2f0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_103be880(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_103bec20(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103bf3d0(undefined4 param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103bf430(undefined4 *param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103bf450(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103bf610(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_103bf6d0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_103bfd40(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_103bfdc0(int *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_103bfe70(int *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103c03a0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103c0910(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103c0a30(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103c0e30(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103c1270(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_103c3400(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_103c34e0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103c4c60(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103c4c80(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103c4d10(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103c4d20(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103c4d30(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103c4de0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103c4df0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_103cc5b0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_103cc600(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103cca80(undefined4 *param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103ccaa0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103ccac0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103cce40(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103cce60(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_103cd2c0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103cd8e0(int *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103cd970(int *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103ceeb0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103ceed0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103ceff0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103cf000(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103cf040(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103cf080(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103cf0c0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103cf1d0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103cf1e0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103cf220(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103cf490(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103d04f0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_103d0a20(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_103d0a70(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103d0ac0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_103d0bf0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_103d0c10(int *param_2); };
using namespace std;
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103566b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103566c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10356890(int *param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10356a20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_103573e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10357ae0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10357af0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10357b00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10357b10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10357f80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10357f90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10357fa0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10357fb0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10357fc0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103580a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103580b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103580c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103580d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103580e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103580f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10358100(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10358110(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10358120(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10358130(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10358140(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10358150(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10358160(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10358170(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10358180(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10358190(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103581a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103581b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103581c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103581d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103581e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10358390(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103583d0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103583e0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10358af0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10358b00(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10358b10(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10358b80(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10358f40(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10358f60(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10358f80(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10358fa0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10358fc0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10358fe0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359000(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359020(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359140(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359150(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359160(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359170(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359180(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359190(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103591a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103591b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103591c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103591d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103591e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103591f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103592d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103592e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103592f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359300(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359310(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359320(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359330(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359340(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359350(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359360(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359370(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359380(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359390(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103593a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103593b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103593c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103593d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103594b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103594c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103594d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103594e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103594f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359500(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10359510(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10359520(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10359530(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10359540(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359920(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359a00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359a10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359a20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359a30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359a40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359a50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10359a60(int param_1,int param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10359ba0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10359e50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10359e80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10359eb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035a790(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035a7c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035ac50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035af70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035afd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b030(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b050(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b070(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b090(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b0b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b0d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b0f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b110(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b1d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b3b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b410(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b430(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b450(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b4b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b4d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b560(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b5c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b5e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b640(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b660(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b6c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b800(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b820(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b830(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035ba60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035ba90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035bac0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035bb20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1035bbb0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1035bbc0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1035bbd0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1035bbe0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1035bbf0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1035bc00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1035bc10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1035bc20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1035bc30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1035bc40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1035bc50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1035bc60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1035bc70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1035bc80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1035bc90(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1035bca0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035bdc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035bec0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035bef0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035c010(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035c060(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035c080(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035c0a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035c0c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035c180(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035c1b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035c1c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035c200(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035c240(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035c260(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1035c280(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1035c290(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1035c2a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1035c2b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1035c2c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1035c2d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1035c2e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1035c7e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035c8a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035c8f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035c940(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035caa0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035cbc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035cc20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035d580(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035d920(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035f4e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035f4f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035f7c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035fd10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035fd40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035fd50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035fe30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035fe80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035fea0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035feb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035fee0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035ff40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103600e0(undefined4 *param_1);
/* WARNING: Removing unreachable block (ram,0x101ba14a) */ void __fastcall FUN_10360310(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103629e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10362d60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10363580(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103635a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103635c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103635d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10363600(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10363630(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10363900(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10363910(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10363920(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10363950(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10363980(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103639c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103639d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10363cb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10363cd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10363d70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10364b30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10364b50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10364b60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10364c90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10364d30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10364ea0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10364ec0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10364fe0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10365020(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10365380(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10365830(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10365960(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10365980(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10366950(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10366d50(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366d60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366d70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366d80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366d90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366da0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366db0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366dc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366dd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366de0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366df0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10366e00(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366e10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10366e20(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366e30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10366e40(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10366e50(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366e60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10366e70(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366e80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10366e90(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10366ea0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366eb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366ec0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10366ed0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366ee0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366ef0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366f00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366f10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366f20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366f30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366f40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366f50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366f60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10366f70(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366f80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366f90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366fa0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366fb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10366fc0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366fd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366fe0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366ff0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367000(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10367010(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367020(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367030(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10367040(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367050(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10367060(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367070(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10367080(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10367090(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103670a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103670b0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103670c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103670d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103670e0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103670f0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10367100(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10367110(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10367120(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10367130(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367140(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367150(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367160(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367170(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367180(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367190(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103671a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103671b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103671c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103671d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103671e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103671f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367200(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367210(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367220(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367230(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367240(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367250(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367260(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367270(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367280(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367290(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103672a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103672b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103672c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103672d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103672e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103672f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367300(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367310(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367320(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367330(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367340(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367350(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367360(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367370(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367380(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367390(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103673a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103673b0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103673c0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103673d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103673e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103673f0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10367400(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10367410(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10367420(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10367430(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10367440(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367450(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367460(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10367470(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10367480(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10367720(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10367730(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10367780(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __stdcall FUN_10367890(byte *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036a610(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1036a620(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1036a650(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1036a680(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1036a6b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1036ac30(float *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1036ac90(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1036aca0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1036b640(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1036b890(byte *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1036b8e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1036b8f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1036b900(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1036b910(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1036b920(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1036b930(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1036b940(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1036b950(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036ca90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036caa0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cab0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cac0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cad0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cae0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036caf0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cb00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cb10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cb20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cb30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cb40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cb50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cb60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cb70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cb80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cb90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cba0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cbb0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cbc0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cbd0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cbe0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cbf0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cc00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cc10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cc20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cc30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cc40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cc50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cc60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cc70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cc80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cc90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cca0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036ccb0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036ccc0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036ccd0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cce0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036ccf0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cd00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cd20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cd30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cd40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cd50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cd60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cd70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cd80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cd90(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cda0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cdb0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cdc0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cdd0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1036d380(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1036d390(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1036d3a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1036d3b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1036d3c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1036d3d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1036d3e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1036d3f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1036d4e0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1036d530(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1036d590(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036d5c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036d5d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1036d8a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1036d8b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1036d8c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1036d8d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1036d8e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1036d8f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1036d900(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036d9c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036d9d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036d9e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1036d9f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1036da00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1036da10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1036da20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036ead0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036eb00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1036ef60(int param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036efb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036efc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10370ca0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10370d20(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10370da0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10370e20(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10370ea0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10370f90(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10371000(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103717a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10371850(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103723d0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103723f0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10372400(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10372590(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103725b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103766a0(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103766f0(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10376740(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10376790(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103767e0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10376830(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10376880(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10376a30(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10376a80(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10376ad0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10376af0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10376b00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10376b10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10376b20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10376b30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10376b40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_103780b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10378150(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103786c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1037a2a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1037c4b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1037c4c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1037c4d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1037c4e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1037c4f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1037cb50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1037cb90(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1037ee80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10380df0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10381010(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10382830(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10382840(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_10382850(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10383180(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10383190(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103831a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103831b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103831c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103831d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103831e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_103831f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10383530(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10388c80(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10388c90(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10388ca0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10388cb0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1038a580(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1038be30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1038be60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1038d590(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1038d5a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1038d6d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1038d980(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1038d990(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1038d9a0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1038d9b0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1038d9c0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1038d9d0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1038d9e0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1038d9f0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1038da00(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1038da10(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1038da20(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1038da30(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_1038da50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_1038de70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1038e1b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_103908f0(float *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10390900(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10390910(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10390920(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10390930(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10390940(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10390950(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10390960(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10390970(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10390980(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10390990(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103909a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103909b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103909c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103909d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393720(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103937c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103937d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103937e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103937f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393800(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393810(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393820(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393830(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393840(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393850(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393860(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393870(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393880(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393890(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103938a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103938b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103938c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103938d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103938e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103938f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393900(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393910(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393920(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393930(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393940(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393950(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393960(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393970(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393980(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393990(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103939a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103939b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103939c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103939d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103939e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103939f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393a00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393a10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393a20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393a30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393a40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393a50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393a60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394530(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394560(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394590(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103945c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103945f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394620(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394650(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394680(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103946b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103946e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394710(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394740(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394770(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103947a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103947d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394800(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394830(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394860(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394890(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103948c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103948f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394920(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394950(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394980(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103949b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103949e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394a10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394a40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394a70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394aa0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394ad0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394b00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394b30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394b60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394b90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394bc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394bf0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394c20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394c50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394c80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394cb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394ce0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394d10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394d40(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394d60(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394d80(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394da0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103952d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10395b70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10395c90(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10395cb0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_10397330(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10398730(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10398740(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10398750(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10398760(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10398770(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10398780(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10398790(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103987a0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10399400(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_1039a0f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1039a4c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1039b2f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1039ea00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1039ea10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1039ea60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1039ebc0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1039ecb0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1039ecc0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1039edf0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1039ee20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1039ee50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1039f180(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1039f1a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1039f1c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1039f3a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1039f3b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1039f3c0(undefined4 *param_1);
/* WARNING: Removing unreachable block_1039f830 (ram,0x101ba14a) */ void __fastcall FUN_1039f830(undefined4 *param_1);
/* WARNING: Removing unreachable block_1039f840 (ram,0x101ba14a) */ void __fastcall FUN_1039f840(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1039fd00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1039fd30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1039fd60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1039fd70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1039fd80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1039fd90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1039ffc0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1039ffd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1039ffe0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1039fff0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a0000(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a0010(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_103a0980(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a13c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a1530(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a15a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a15b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a18d0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a2cc0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103a2d10(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103a2d20(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103a2eb0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_103a2ef0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_103a2f30(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103a2f80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_103a2fe0(char param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_103a30c0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103a3110(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_103a3120(char param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a3510(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a3520(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a3c40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a3c70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a3ca0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a4160(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_103a4170(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_103a4190(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a41c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a41e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a4210(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a4280(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a43c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a43d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a4680(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a4690(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a47b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a47c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a47d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a47e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a47f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4820(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4840(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4850(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4860(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4880(undefined4 *param_1,uint *param_2,int param_3,uint *param_4,int param_5,
                 uint *param_6,uint param_7);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a4920(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a4950(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4980(undefined4 *param_1,uint *param_2,uint param_3,uint *param_4,uint param_5,
                 uint *param_6,uint param_7);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4a30(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4a50(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4a70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4a80(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4a90(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4aa0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4ab0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4e30(uint *param_1,int param_2,uint *param_3,int param_4,char *param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4f20(void *param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a5000(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a50c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a50d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a50e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a50f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5100(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5110(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5120(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a5130(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a5150(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a5170(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5190(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a51b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a51c0(int param_1,SCStr *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a51f0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a5220(int *param_1,int param_2,uint param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a5250(undefined4 *param_1,undefined4 param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a5270(undefined4 *param_1,undefined4 param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a5470(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a5480(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a5490(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a55f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5600(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5610(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_103a5620(int *param_1,int param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103a5690(void *param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103a56c0(void *param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a56f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5700(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a5710(void *param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a5740(void *param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5770(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5780(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5790(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a57a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a57b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a57c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a57d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a57e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *
FUN_103a5880(undefined4 *param_1,uint *param_2,uint param_3,uint *param_4,uint param_5,uint *param_6
            ,uint param_7);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *
FUN_103a5910(undefined4 *param_1,uint *param_2,int param_3,uint *param_4,int param_5,uint *param_6,
            uint param_7);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a5ab0(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5b20(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5b40(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5b60(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a5b80(uint *param_1,int param_2,uint *param_3,int param_4,char *param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5c90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5ca0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5cb0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5cc0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5cd0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5ce0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5cf0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5d00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103a5d10(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103a5d20(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a5d30(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a5d60(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a5d90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a5dc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a5e20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a5ec0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a6120(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a6150(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a6280(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a6340(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a6390(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a63a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a6450(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a65c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a7110(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a7140(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a7660(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a7bb0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a7fb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a8680(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a86a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a8750(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a8760(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a87f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a8dc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103a8dd0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a8de0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103a8df0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a8e00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103a8e10(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103a8e20(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a8e30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a8e50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a8e60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a8e70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a8e80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a8e90(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a8ec0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a8ef0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a8f20(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_103a9000(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_103a9030(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a9060(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a9070(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a9080(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a9090(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_103a90a0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_103a90d0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103aa040(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103aa0b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103aa0c0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa640(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa650(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa660(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa670(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa680(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa690(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa6a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa6b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa6c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa6d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa6e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa6f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa700(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa710(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa720(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa730(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa740(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa750(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa760(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa7f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa800(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103aac10(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab440(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab450(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab460(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab470(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab480(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103ab490(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab4f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab500(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab510(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab520(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab530(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab540(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_103ab550(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103ab560(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103ab570(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103ab580(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103ab590(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103ab5a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103ab5b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103aba10(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103abd90(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103abe00(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103abe70(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103abef0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103abf60(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ac050(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103b6820(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103b6830(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103b6880(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103b68d0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103b6920(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103b6970(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103b69d0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103b6a20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103b6a30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103b6ab0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103b6ac0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103b6ad0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103b6ae0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103b78b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103b8650(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_103b8670(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103b8b60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103b8b70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103b8d80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_103b9190(uint *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_103b91b0(SCStr *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_103b93d0(uint *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103b9420(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103b9430(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103b9440(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103b9450(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103b9460(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103b9470(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103bbe50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103bbf00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bc700(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bc710(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bc720(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bc730(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103bd3a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103bd3d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103bd400(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103bd430(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103bd460(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103bd490(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103bd4c0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bdd40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bdd50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bdd60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bdd70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bdd80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bdd90(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bdda0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103be340(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103be4f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103be500(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103be740(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103be870(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103be890(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103be8a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103be9d0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103bf210(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103bf380(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103bf390(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103bf410(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103bf470(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103bf740(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103bf750(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103bf790(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103bf7a0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103bf7b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103bfa40(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103bfae0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103bfb10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103bfb20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103bfb30(int param_1,SCStr *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103bfd00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103bfd20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103bfd30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103bfff0(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103c0110(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103c0130(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103c0150(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103c0160(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103c0180(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103c0190(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103c01b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103c01c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103c01d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c0220(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c0370(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c06e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c0740(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c07a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c07c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c0850(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c08f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c0930(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c0940(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c0950(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c0960(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c0a40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c0a60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c0a70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c0b00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c0b90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c12b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c1d90(int param_1);
/* WARNING: Removing unreachable block_103c1dc0 (ram,0x101ba14a) */ void __fastcall FUN_103c1dc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103c2d90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103c2db0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103c2df0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c3650(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c3660(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103c3670(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103c3680(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c3690(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c36a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c36b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c36c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c36d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c36e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103c41f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103c42c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103c42d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103c42e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c4820(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c4830(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c4840(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c4850(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c4860(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c4870(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c4880(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c4890(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c48a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c48b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103c4b50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103c4b60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103c4b70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103c4bf0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103c4c40(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c4c50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103c6550(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103c7250(SCStr *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103c72a0(SCStr *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103c72f0(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103c7340(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_103c73a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c73b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c8170(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c8180(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c81d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c81e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c81f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c8200(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c8210(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c8220(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c8230(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c8260(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c8270(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c8280(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c8300(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c8310(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c8720(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c8730(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c8740(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c8b40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103c9390(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ca170(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ca180(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103ca9c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103cb270(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103cb2a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103cb2d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103cb300(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103cb330(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103cbed0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103cbee0(SCStr *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103cc1e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103cca40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103cca60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103ccae0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103cce80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103ccea0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103ccec0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103ccee0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103ccfa0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103cd330(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103cd340(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103cd820(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103cd830(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103cd840(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ce540(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ce550(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ce560(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ce570(int param_1,SCStr *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ce5a0(int param_1,SCStr *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103ce5d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103ce5e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103ce5f0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cea60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cea70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cea80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cea90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ceaa0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ceab0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ceac0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103cece0(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ced50(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ced70(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ced90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ceda0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cedb0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cedc0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cedd0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cede0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cedf0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cee00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cee10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cee20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cee30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cee40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cee50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cee60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cee70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cee80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103cee90(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103cf1f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103cf210(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103cf320(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103cf770(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103d04b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103d0a10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103d0ff0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103d1000(int *param_1);
// Reference entry 103566b0; body size 3 bytes.
#line 1 "ENTRY_103566b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103566b0(void)

{
  return;
}


// Reference entry 103566c0; body size 3 bytes.
#line 1 "ENTRY_103566c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103566c0(void)

{
  return;
}


// Reference entry 10356890; body size 92 bytes.
#line 1 "ENTRY_10356890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10356890(int *param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  
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
  thunk_FUN_103566d0(param_1,0,param_2 - (int)param_1 >> 3,param_4,param_5);
  return;
}


// Reference entry 10356a20; body size 8 bytes.
#line 1 "ENTRY_10356a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10356a20(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + -8);
}


// Reference entry 103573e0; body size 12 bytes.
#line 1 "ENTRY_103573e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_103573e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10357aa0; body size 24 bytes.
#line 1 "ENTRY_10357aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10357aa0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10314f90(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10357ac0; body size 24 bytes.
#line 1 "ENTRY_10357ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10357ac0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10357cb0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10357ae0; body size 5 bytes.
#line 1 "ENTRY_10357ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10357ae0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10357af0; body size 5 bytes.
#line 1 "ENTRY_10357af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10357af0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10357b00; body size 5 bytes.
#line 1 "ENTRY_10357b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10357b00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10357b10; body size 5 bytes.
#line 1 "ENTRY_10357b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10357b10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10357f80; body size 5 bytes.
#line 1 "ENTRY_10357f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10357f80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10357f90; body size 5 bytes.
#line 1 "ENTRY_10357f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10357f90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10357fa0; body size 5 bytes.
#line 1 "ENTRY_10357fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10357fa0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10357fb0; body size 5 bytes.
#line 1 "ENTRY_10357fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10357fb0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10357fc0; body size 5 bytes.
#line 1 "ENTRY_10357fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10357fc0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103580a0; body size 5 bytes.
#line 1 "ENTRY_103580a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103580a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103580b0; body size 5 bytes.
#line 1 "ENTRY_103580b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103580b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103580c0; body size 5 bytes.
#line 1 "ENTRY_103580c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103580c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103580d0; body size 5 bytes.
#line 1 "ENTRY_103580d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103580d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103580e0; body size 5 bytes.
#line 1 "ENTRY_103580e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103580e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103580f0; body size 5 bytes.
#line 1 "ENTRY_103580f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103580f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10358100; body size 5 bytes.
#line 1 "ENTRY_10358100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10358100(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10358110; body size 5 bytes.
#line 1 "ENTRY_10358110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10358110(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10358120; body size 5 bytes.
#line 1 "ENTRY_10358120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10358120(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10358130; body size 5 bytes.
#line 1 "ENTRY_10358130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10358130(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10358140; body size 5 bytes.
#line 1 "ENTRY_10358140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10358140(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10358150; body size 5 bytes.
#line 1 "ENTRY_10358150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10358150(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10358160; body size 5 bytes.
#line 1 "ENTRY_10358160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10358160(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10358170; body size 5 bytes.
#line 1 "ENTRY_10358170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10358170(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10358180; body size 5 bytes.
#line 1 "ENTRY_10358180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10358180(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10358190; body size 5 bytes.
#line 1 "ENTRY_10358190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10358190(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103581a0; body size 5 bytes.
#line 1 "ENTRY_103581a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103581a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103581b0; body size 5 bytes.
#line 1 "ENTRY_103581b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103581b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103581c0; body size 5 bytes.
#line 1 "ENTRY_103581c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103581c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103581d0; body size 5 bytes.
#line 1 "ENTRY_103581d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103581d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103581e0; body size 5 bytes.
#line 1 "ENTRY_103581e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103581e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10358390; body size 40 bytes.
#line 1 "ENTRY_10358390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10358390(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 103583d0; body size 13 bytes.
#line 1 "ENTRY_103583d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103583d0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 103583e0; body size 29 bytes.
#line 1 "ENTRY_103583e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103583e0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}


// Reference entry 10358af0; body size 12 bytes.
#line 1 "ENTRY_10358af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10358af0(int param_1,int param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_2 - param_1 >> 3);
}


// Reference entry 10358b00; body size 12 bytes.
#line 1 "ENTRY_10358b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10358b00(int param_1,int param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_2 - param_1 >> 3);
}


// Reference entry 10358b10; body size 86 bytes.
#line 1 "ENTRY_10358b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10358b10(int *param_1,int *param_2)

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


// Reference entry 10358b80; body size 86 bytes.
#line 1 "ENTRY_10358b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10358b80(int *param_1,int *param_2)

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


// Reference entry 10358d20; body size 36 bytes.
#line 1 "ENTRY_10358d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10358d20(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_10353440(puVar1,param_2);
  return;
}


// Reference entry 10358f40; body size 15 bytes.
#line 1 "ENTRY_10358f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10358f40(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10358f60; body size 15 bytes.
#line 1 "ENTRY_10358f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10358f60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10358f80; body size 15 bytes.
#line 1 "ENTRY_10358f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10358f80(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10358fa0; body size 15 bytes.
#line 1 "ENTRY_10358fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10358fa0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10358fc0; body size 15 bytes.
#line 1 "ENTRY_10358fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10358fc0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10358fe0; body size 15 bytes.
#line 1 "ENTRY_10358fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10358fe0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10359000; body size 15 bytes.
#line 1 "ENTRY_10359000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359000(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10359020; body size 15 bytes.
#line 1 "ENTRY_10359020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359020(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10359140; body size 5 bytes.
#line 1 "ENTRY_10359140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359140(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10359150; body size 5 bytes.
#line 1 "ENTRY_10359150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359150(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10359160; body size 5 bytes.
#line 1 "ENTRY_10359160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359160(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10359170; body size 5 bytes.
#line 1 "ENTRY_10359170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359170(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10359180; body size 5 bytes.
#line 1 "ENTRY_10359180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359180(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10359190; body size 5 bytes.
#line 1 "ENTRY_10359190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359190(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103591a0; body size 5 bytes.
#line 1 "ENTRY_103591a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103591a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103591b0; body size 5 bytes.
#line 1 "ENTRY_103591b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103591b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103591c0; body size 5 bytes.
#line 1 "ENTRY_103591c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103591c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103591d0; body size 5 bytes.
#line 1 "ENTRY_103591d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103591d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103591e0; body size 5 bytes.
#line 1 "ENTRY_103591e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103591e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103591f0; body size 5 bytes.
#line 1 "ENTRY_103591f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103591f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103592d0; body size 5 bytes.
#line 1 "ENTRY_103592d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103592d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103592e0; body size 5 bytes.
#line 1 "ENTRY_103592e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103592e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103592f0; body size 5 bytes.
#line 1 "ENTRY_103592f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103592f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10359300; body size 5 bytes.
#line 1 "ENTRY_10359300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359300(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10359310; body size 5 bytes.
#line 1 "ENTRY_10359310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359310(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10359320; body size 5 bytes.
#line 1 "ENTRY_10359320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359320(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10359330; body size 5 bytes.
#line 1 "ENTRY_10359330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359330(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10359340; body size 5 bytes.
#line 1 "ENTRY_10359340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359340(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10359350; body size 5 bytes.
#line 1 "ENTRY_10359350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359350(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10359360; body size 5 bytes.
#line 1 "ENTRY_10359360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359360(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10359370; body size 5 bytes.
#line 1 "ENTRY_10359370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359370(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10359380; body size 5 bytes.
#line 1 "ENTRY_10359380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359380(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10359390; body size 5 bytes.
#line 1 "ENTRY_10359390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359390(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103593a0; body size 5 bytes.
#line 1 "ENTRY_103593a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103593a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103593b0; body size 5 bytes.
#line 1 "ENTRY_103593b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103593b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103593c0; body size 5 bytes.
#line 1 "ENTRY_103593c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103593c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103593d0; body size 5 bytes.
#line 1 "ENTRY_103593d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103593d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103594b0; body size 5 bytes.
#line 1 "ENTRY_103594b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103594b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103594c0; body size 5 bytes.
#line 1 "ENTRY_103594c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103594c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103594d0; body size 5 bytes.
#line 1 "ENTRY_103594d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103594d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103594e0; body size 5 bytes.
#line 1 "ENTRY_103594e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103594e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103594f0; body size 5 bytes.
#line 1 "ENTRY_103594f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103594f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10359500; body size 5 bytes.
#line 1 "ENTRY_10359500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359500(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10359510; body size 6 bytes.
#line 1 "ENTRY_10359510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10359510(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIHousehold");
}


// Reference entry 10359520; body size 6 bytes.
#line 1 "ENTRY_10359520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10359520(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpZoneGroupTopologyGetZoneGroupState");
}


// Reference entry 10359530; body size 6 bytes.
#line 1 "ENTRY_10359530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10359530(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCITimeZone");
}


// Reference entry 10359540; body size 6 bytes.
#line 1 "ENTRY_10359540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10359540(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIZoneGroup");
}


// Reference entry 10359550; body size 49 bytes.
#line 1 "ENTRY_10359550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10359550(int *param_2,int param_3,undefined4 param_4,undefined4 param_5)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_10354880(param_3,param_4,param_5,param_3);
  *param_2 = (int)(*param_1 + (param_3 - iVar1 >> 3) * 8);
  return;
}


// Reference entry 10359590; body size 49 bytes.
#line 1 "ENTRY_10359590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10359590(int *param_2,int param_3,undefined4 param_4,undefined4 param_5)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_10354c60(param_3,param_4,param_5,param_3);
  *param_2 = (int)(*param_1 + (param_3 - iVar1 >> 3) * 8);
  return;
}


// Reference entry 10359920; body size 5 bytes.
#line 1 "ENTRY_10359920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359920(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10359a00; body size 5 bytes.
#line 1 "ENTRY_10359a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359a00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10359a10; body size 5 bytes.
#line 1 "ENTRY_10359a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359a10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10359a20; body size 5 bytes.
#line 1 "ENTRY_10359a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359a20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10359a30; body size 5 bytes.
#line 1 "ENTRY_10359a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359a30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10359a40; body size 5 bytes.
#line 1 "ENTRY_10359a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359a40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10359a50; body size 5 bytes.
#line 1 "ENTRY_10359a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359a50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10359a60; body size 31 bytes.
#line 1 "ENTRY_10359a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10359a60(int param_1,int param_2,undefined4 param_3)

{
  thunk_FUN_103570f0(param_1,param_2,param_2 - param_1 >> 3,param_3);
  return;
}


// Reference entry 10359ba0; body size 30 bytes.
#line 1 "ENTRY_10359ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10359ba0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 10359e50; body size 28 bytes.
#line 1 "ENTRY_10359e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10359e50(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10359e80; body size 28 bytes.
#line 1 "ENTRY_10359e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10359e80(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10359eb0; body size 28 bytes.
#line 1 "ENTRY_10359eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10359eb0(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035a790; body size 27 bytes.
#line 1 "ENTRY_1035a790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035a790(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035a7c0; body size 27 bytes.
#line 1 "ENTRY_1035a7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035a7c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035a7f0; body size 95 bytes.
#line 1 "ENTRY_1035a7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035a7f0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_106e1380());
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0xc))(param_2,param_3,param_4));
  thunk_FUN_105a7950(uVar2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[6] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[7] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0xe] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x11] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x14] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035a870; body size 95 bytes.
#line 1 "ENTRY_1035a870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035a870(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_10786100());
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0xc))(param_2,param_3,param_4));
  thunk_FUN_105a7950(uVar2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[6] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[7] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0xe] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x11] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x14] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035a8f0; body size 95 bytes.
#line 1 "ENTRY_1035a8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035a8f0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_107e6130());
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0xc))(param_2,param_3,param_4));
  thunk_FUN_105a7950(uVar2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[6] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[7] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0xe] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x11] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x14] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035a970; body size 95 bytes.
#line 1 "ENTRY_1035a970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035a970(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_10818140());
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0xc))(param_2,param_3,param_4));
  thunk_FUN_105a7950(uVar2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[6] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[7] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0xe] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x11] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x14] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035a9f0; body size 95 bytes.
#line 1 "ENTRY_1035a9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035a9f0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_1083fac0());
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0xc))(param_2,param_3,param_4));
  thunk_FUN_105a7950(uVar2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[6] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[7] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0xe] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x11] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x14] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035aa70; body size 95 bytes.
#line 1 "ENTRY_1035aa70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035aa70(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_1087eff0());
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0xc))(param_2,param_3,param_4));
  thunk_FUN_105a7950(uVar2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[6] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[7] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0xe] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x11] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x14] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035ac50; body size 70 bytes.
#line 1 "ENTRY_1035ac50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035ac50(undefined4 *param_1)

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


// Reference entry 1035af70; body size 16 bytes.
#line 1 "ENTRY_1035af70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035af70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035afd0; body size 16 bytes.
#line 1 "ENTRY_1035afd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035afd0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035b030; body size 16 bytes.
#line 1 "ENTRY_1035b030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b030(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035b050; body size 16 bytes.
#line 1 "ENTRY_1035b050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b050(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035b070; body size 16 bytes.
#line 1 "ENTRY_1035b070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b070(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035b090; body size 16 bytes.
#line 1 "ENTRY_1035b090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b090(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035b0b0; body size 16 bytes.
#line 1 "ENTRY_1035b0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b0b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035b0d0; body size 16 bytes.
#line 1 "ENTRY_1035b0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b0d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035b0f0; body size 16 bytes.
#line 1 "ENTRY_1035b0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b0f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035b110; body size 16 bytes.
#line 1 "ENTRY_1035b110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b110(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035b1d0; body size 16 bytes.
#line 1 "ENTRY_1035b1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b1d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035b3b0; body size 16 bytes.
#line 1 "ENTRY_1035b3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b3b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035b410; body size 16 bytes.
#line 1 "ENTRY_1035b410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b410(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035b430; body size 16 bytes.
#line 1 "ENTRY_1035b430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b430(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035b450; body size 16 bytes.
#line 1 "ENTRY_1035b450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b450(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035b4b0; body size 16 bytes.
#line 1 "ENTRY_1035b4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b4b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035b4d0; body size 16 bytes.
#line 1 "ENTRY_1035b4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b4d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035b560; body size 16 bytes.
#line 1 "ENTRY_1035b560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b560(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035b5c0; body size 16 bytes.
#line 1 "ENTRY_1035b5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b5c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035b5e0; body size 16 bytes.
#line 1 "ENTRY_1035b5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b5e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035b640; body size 16 bytes.
#line 1 "ENTRY_1035b640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b640(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035b660; body size 16 bytes.
#line 1 "ENTRY_1035b660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b660(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035b6c0; body size 16 bytes.
#line 1 "ENTRY_1035b6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b6c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035b800; body size 16 bytes.
#line 1 "ENTRY_1035b800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b800(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035b820; body size 9 bytes.
#line 1 "ENTRY_1035b820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b820(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035b830; body size 9 bytes.
#line 1 "ENTRY_1035b830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b830(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035b880; body size 25 bytes.
#line 1 "ENTRY_1035b880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035b880(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035b980; body size 25 bytes.
#line 1 "ENTRY_1035b980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035b980(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035ba60; body size 28 bytes.
#line 1 "ENTRY_1035ba60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035ba60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWrapperHelper);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035ba90; body size 28 bytes.
#line 1 "ENTRY_1035ba90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035ba90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWrapperHelper);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035bac0; body size 28 bytes.
#line 1 "ENTRY_1035bac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035bac0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWrapperHelper);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035bb20; body size 28 bytes.
#line 1 "ENTRY_1035bb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035bb20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWrapperHelper);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035bb50; body size 18 bytes.
#line 1 "ENTRY_1035bb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035bb50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035bb70; body size 18 bytes.
#line 1 "ENTRY_1035bb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035bb70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035bb90; body size 18 bytes.
#line 1 "ENTRY_1035bb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035bb90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035bbb0; body size 3 bytes.
#line 1 "ENTRY_1035bbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1035bbb0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1035bbc0; body size 3 bytes.
#line 1 "ENTRY_1035bbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1035bbc0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1035bbd0; body size 3 bytes.
#line 1 "ENTRY_1035bbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1035bbd0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1035bbe0; body size 3 bytes.
#line 1 "ENTRY_1035bbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1035bbe0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1035bbf0; body size 3 bytes.
#line 1 "ENTRY_1035bbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1035bbf0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1035bc00; body size 3 bytes.
#line 1 "ENTRY_1035bc00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1035bc00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1035bc10; body size 3 bytes.
#line 1 "ENTRY_1035bc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1035bc10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1035bc20; body size 3 bytes.
#line 1 "ENTRY_1035bc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1035bc20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1035bc30; body size 10 bytes.
#line 1 "ENTRY_1035bc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1035bc30(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 1035bc40; body size 10 bytes.
#line 1 "ENTRY_1035bc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1035bc40(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 1035bc50; body size 10 bytes.
#line 1 "ENTRY_1035bc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1035bc50(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 1035bc60; body size 10 bytes.
#line 1 "ENTRY_1035bc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1035bc60(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 1035bc70; body size 10 bytes.
#line 1 "ENTRY_1035bc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1035bc70(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 1035bc80; body size 10 bytes.
#line 1 "ENTRY_1035bc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1035bc80(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 1035bc90; body size 10 bytes.
#line 1 "ENTRY_1035bc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1035bc90(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 1035bca0; body size 10 bytes.
#line 1 "ENTRY_1035bca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1035bca0(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 1035bd80; body size 11 bytes.
#line 1 "ENTRY_1035bd80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035bd80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035bd90; body size 11 bytes.
#line 1 "ENTRY_1035bd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035bd90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035bda0; body size 11 bytes.
#line 1 "ENTRY_1035bda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035bda0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035bdb0; body size 11 bytes.
#line 1 "ENTRY_1035bdb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035bdb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035bdc0; body size 16 bytes.
#line 1 "ENTRY_1035bdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035bdc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035bea0; body size 11 bytes.
#line 1 "ENTRY_1035bea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035bea0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035beb0; body size 11 bytes.
#line 1 "ENTRY_1035beb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035beb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035bec0; body size 9 bytes.
#line 1 "ENTRY_1035bec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035bec0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035bed0; body size 11 bytes.
#line 1 "ENTRY_1035bed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035bed0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035bee0; body size 11 bytes.
#line 1 "ENTRY_1035bee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035bee0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035bef0; body size 9 bytes.
#line 1 "ENTRY_1035bef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035bef0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035c000; body size 11 bytes.
#line 1 "ENTRY_1035c000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035c000(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035c010; body size 9 bytes.
#line 1 "ENTRY_1035c010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035c010(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035c020; body size 11 bytes.
#line 1 "ENTRY_1035c020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035c020(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035c030; body size 11 bytes.
#line 1 "ENTRY_1035c030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035c030(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035c040; body size 11 bytes.
#line 1 "ENTRY_1035c040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035c040(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035c050; body size 11 bytes.
#line 1 "ENTRY_1035c050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035c050(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035c060; body size 16 bytes.
#line 1 "ENTRY_1035c060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035c060(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035c080; body size 16 bytes.
#line 1 "ENTRY_1035c080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035c080(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035c0a0; body size 16 bytes.
#line 1 "ENTRY_1035c0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035c0a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035c0c0; body size 9 bytes.
#line 1 "ENTRY_1035c0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035c0c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035c0d0; body size 13 bytes.
#line 1 "ENTRY_1035c0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035c0d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035c0e0; body size 14 bytes.
#line 1 "ENTRY_1035c0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035c0e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035c100; body size 21 bytes.
#line 1 "ENTRY_1035c100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035c100(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035c120; body size 21 bytes.
#line 1 "ENTRY_1035c120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035c120(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035c140; body size 21 bytes.
#line 1 "ENTRY_1035c140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035c140(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035c160; body size 11 bytes.
#line 1 "ENTRY_1035c160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035c160(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035c170; body size 11 bytes.
#line 1 "ENTRY_1035c170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035c170(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035c180; body size 9 bytes.
#line 1 "ENTRY_1035c180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035c180(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035c190; body size 11 bytes.
#line 1 "ENTRY_1035c190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035c190(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035c1a0; body size 11 bytes.
#line 1 "ENTRY_1035c1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035c1a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035c1b0; body size 9 bytes.
#line 1 "ENTRY_1035c1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035c1b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035c1c0; body size 23 bytes.
#line 1 "ENTRY_1035c1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035c1c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035c1e0; body size 25 bytes.
#line 1 "ENTRY_1035c1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035c1e0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_3;
  param_1[2] = param_4;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035c200; body size 23 bytes.
#line 1 "ENTRY_1035c200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035c200(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035c220; body size 25 bytes.
#line 1 "ENTRY_1035c220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035c220(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_3;
  param_1[2] = param_4;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035c240; body size 23 bytes.
#line 1 "ENTRY_1035c240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035c240(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035c260; body size 23 bytes.
#line 1 "ENTRY_1035c260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035c260(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035c280; body size 3 bytes.
#line 1 "ENTRY_1035c280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1035c280(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1035c290; body size 3 bytes.
#line 1 "ENTRY_1035c290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1035c290(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1035c2a0; body size 3 bytes.
#line 1 "ENTRY_1035c2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1035c2a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1035c2b0; body size 3 bytes.
#line 1 "ENTRY_1035c2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1035c2b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1035c2c0; body size 3 bytes.
#line 1 "ENTRY_1035c2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1035c2c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1035c2d0; body size 3 bytes.
#line 1 "ENTRY_1035c2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1035c2d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1035c2e0; body size 3 bytes.
#line 1 "ENTRY_1035c2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1035c2e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1035c7e0; body size 12 bytes.
#line 1 "ENTRY_1035c7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1035c7e0(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 1035c8a0; body size 52 bytes.
#line 1 "ENTRY_1035c8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035c8a0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  pvVar1 = (void *)(operator_new(0x24));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035c8f0; body size 52 bytes.
#line 1 "ENTRY_1035c8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035c8f0(undefined4 *param_1)

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


// Reference entry 1035c940; body size 52 bytes.
#line 1 "ENTRY_1035c940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035c940(undefined4 *param_1)

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


// Reference entry 1035caa0; body size 23 bytes.
#line 1 "ENTRY_1035caa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035caa0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035cbc0; body size 23 bytes.
#line 1 "ENTRY_1035cbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035cbc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035cbe0; body size 49 bytes.
#line 1 "ENTRY_1035cbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035cbe0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = (undefined4)(param_2[2]);
  uVar2 = (undefined4)(*param_2);
  uVar3 = (undefined4)(param_2[1]);
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = (undefined4)(0);
  param_1[2] = uVar1;
  *param_1 = (undefined4)(uVar2);
  param_1[1] = uVar3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035cc20; body size 23 bytes.
#line 1 "ENTRY_1035cc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035cc20(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035cc40; body size 42 bytes.
#line 1 "ENTRY_1035cc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035cc40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCHousehold_DateTimeEventSink);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035cc80; body size 42 bytes.
#line 1 "ENTRY_1035cc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035cc80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSubscriptionImpl_EventSink);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035cd80; body size 48 bytes.
#line 1 "ENTRY_1035cd80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035cd80(undefined4 param_2,undefined4 param_3,undefined1 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11131cc0(param_2,2,0);
  param_1[8] = param_3;
  *(undefined1 *)(param_1 + 9) = param_4;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCompatibleZPPairCandidateEnumerator);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035ce50; body size 108 bytes.
#line 1 "ENTRY_1035ce50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035ce50(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)(0);
  pcVar3 = (char *)("software_download");
  pcVar2 = (char *)("http://sw.ws");
  uVar1 = (undefined4)(thunk_FUN_112616c0(param_1 + 0x35f4,0x401,"/ws/sw/?wsdl",7,"http://sw.ws",
                             "software_download",0,param_2,param_3,param_4,param_5));
  thunk_FUN_111c0760(uVar1,pcVar2,pcVar3,uVar4,param_2,param_3,param_4,param_5);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCustRegRegisterSoftwareAIOOp);
  param_1[0x18] = (uint)&ghidra_vftable_RCustRegRegisterSoftwareAIOOp;
  param_1[0x11b] = (uint)&ghidra_vftable_RCustRegRegisterSoftwareAIOOp;
  *(undefined1 *)((int)param_1 + 0xdbd1) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035cee0; body size 55 bytes.
#line 1 "ENTRY_1035cee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035cee0(undefined4 param_2,undefined4 param_3,undefined1 param_4,
            undefined1 param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11131cc0(param_2,2,0);
  param_1[8] = param_3;
  *(undefined1 *)(param_1 + 9) = param_4;
  *(undefined1 *)((int)param_1 + 0x25) = param_5;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHTPrimaryZPCandidateEnumerator);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035d140; body size 41 bytes.
#line 1 "ENTRY_1035d140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035d140(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11131cc0(param_2,2,0);
  param_1[8] = param_3;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSubwooferPrimaryZPCandidateEnumerator);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035d180; body size 48 bytes.
#line 1 "ENTRY_1035d180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035d180(undefined4 param_2,undefined4 param_3,undefined1 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11131cc0(param_2,2,0);
  param_1[8] = param_3;
  *(undefined1 *)(param_1 + 9) = param_4;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSubwooferZPCandidateEnumerator);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035d1c0; body size 127 bytes.
#line 1 "ENTRY_1035d1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035d1c0(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:SystemProperties:1","SetString",uVar3,
                     param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpSPSetStringAIOOp);
  param_1[0x18] = (uint)&ghidra_vftable_RUpnpSPSetStringAIOOp;
  param_1[0x11b] = (uint)&ghidra_vftable_RUpnpSPSetStringAIOOp;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035d260; body size 134 bytes.
#line 1 "ENTRY_1035d260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035d260(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:ZoneGroupTopology:1","GetZoneGroupState",
                     uVar3,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpZGTGetZoneGroupStateAIOOp);
  param_1[0x18] = (uint)&ghidra_vftable_RUpnpZGTGetZoneGroupStateAIOOp;
  param_1[0x11b] = (uint)&ghidra_vftable_RUpnpZGTGetZoneGroupStateAIOOp;
  *(undefined1 *)(param_1 + 0x35f4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035d310; body size 34 bytes.
#line 1 "ENTRY_1035d310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035d310(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11131cc0(param_2,2,0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RZPAirPlayEnumerator);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035d340; body size 34 bytes.
#line 1 "ENTRY_1035d340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035d340(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11131cc0(param_2,0,0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RZPEnumerator);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035d370; body size 34 bytes.
#line 1 "ENTRY_1035d370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035d370(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11131cc0(param_2,2,0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RZPGroupableEnumerator);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035d3a0; body size 41 bytes.
#line 1 "ENTRY_1035d3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035d3a0(undefined4 param_2,undefined1 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11131cc0(param_2,2,0);
  *(undefined1 *)(param_1 + 8) = param_3;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RZPHasVoiceAccountsEnumerator);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035d3e0; body size 34 bytes.
#line 1 "ENTRY_1035d3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035d3e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11131cc0(param_2,2,0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RZPIkeaLampEnumerator);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035d410; body size 34 bytes.
#line 1 "ENTRY_1035d410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035d410(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11131cc0(param_2,2,0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RZPLineInEnumerator);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035d440; body size 36 bytes.
#line 1 "ENTRY_1035d440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035d440(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11131cc0(param_2,2,param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RZPPrimaryPlayerEnumerator);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035d470; body size 41 bytes.
#line 1 "ENTRY_1035d470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035d470(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11131cc0(param_2,2,0);
  param_1[8] = param_3;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RZPSecureRegStateEnumerator);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035d4b0; body size 41 bytes.
#line 1 "ENTRY_1035d4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035d4b0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11131cc0(param_2,2,1);
  param_1[8] = param_3;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RZPSettingsMenuEnumerator);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035d4f0; body size 34 bytes.
#line 1 "ENTRY_1035d4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035d4f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11131cc0(param_2,2,0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RZPUnconfiguredEnumerator);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035d520; body size 34 bytes.
#line 1 "ENTRY_1035d520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035d520(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11131cc0(param_2,2,0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RZPVoiceCapableEnumerator);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035d550; body size 34 bytes.
#line 1 "ENTRY_1035d550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035d550(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11131cc0(param_2,2,0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RZPVoiceEnabledStateEnumerator);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035d580; body size 93 bytes.
#line 1 "ENTRY_1035d580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035d580(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddCustomRadioActionFactory);
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035d8e0; body size 42 bytes.
#line 1 "ENTRY_1035d8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035d8e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCControllerEventSinkInternal);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035d920; body size 33 bytes.
#line 1 "ENTRY_1035d920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035d920(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDefaultBrowseListPresentationMap);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035da80; body size 42 bytes.
#line 1 "ENTRY_1035da80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035da80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFeatureManagerEventSinkInternal);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035f4a0; body size 42 bytes.
#line 1 "ENTRY_1035f4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035f4a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCHouseholdAdapterEventSinkInternal);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035f4e0; body size 9 bytes.
#line 1 "ENTRY_1035f4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035f4e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIHousehold);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035f4f0; body size 9 bytes.
#line 1 "ENTRY_1035f4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035f4f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpZoneGroupTopologyGetZoneGroupState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035f610; body size 42 bytes.
#line 1 "ENTRY_1035f610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035f610(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyWelcomeLoginWizardActionDescriptor);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035f780; body size 42 bytes.
#line 1 "ENTRY_1035f780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035f780(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleManagerEventSinkInternal);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035f7c0; body size 66 bytes.
#line 1 "ENTRY_1035f7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035f7c0(undefined4 *param_1)

{
  thunk_FUN_11240650();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMultipleDeferredEvtHelper);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = (uint)&ghidra_vftable_RControlAIOOpRef;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035fa40; body size 42 bytes.
#line 1 "ENTRY_1035fa40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035fa40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNowPlayingEventSinkInternal);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035fd10; body size 33 bytes.
#line 1 "ENTRY_1035fd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035fd10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSonosBrowseListPresentationMap);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035fd40; body size 9 bytes.
#line 1 "ENTRY_1035fd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035fd40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjQListener);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035fd50; body size 9 bytes.
#line 1 "ENTRY_1035fd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035fd50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjUMListener);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035fd60; body size 42 bytes.
#line 1 "ENTRY_1035fd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035fd60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUpdatePopoverActionDescriptor);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035fe30; body size 9 bytes.
#line 1 "ENTRY_1035fe30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035fe30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCZonePlayerCollection);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035fe40; body size 42 bytes.
#line 1 "ENTRY_1035fe40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035fe40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCHousehold_SubscriptionHelper);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035fe80; body size 9 bytes.
#line 1 "ENTRY_1035fe80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035fe80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjZonePlayerCollection);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035fe90; body size 13 bytes.
#line 1 "ENTRY_1035fe90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035fe90(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035fea0; body size 9 bytes.
#line 1 "ENTRY_1035fea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035fea0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_UWAHouseholdInterface);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035feb0; body size 35 bytes.
#line 1 "ENTRY_1035feb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035feb0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035fee0; body size 70 bytes.
#line 1 "ENTRY_1035fee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035fee0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035ff40; body size 9 bytes.
#line 1 "ENTRY_1035ff40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035ff40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_WizardCompletionCallback);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035ff50; body size 11 bytes.
#line 1 "ENTRY_1035ff50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035ff50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1035ff60; body size 24 bytes.
#line 1 "ENTRY_1035ff60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1035ff60(undefined4 param_2,int param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = *(undefined4 *)(param_3 + 4);
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103600e0; body size 42 bytes.
#line 1 "ENTRY_103600e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103600e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10360310; body size 11 bytes.
#line 1 "ENTRY_10360310"

/* WARNING: Removing unreachable block (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10360310(undefined4 *param_1)

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


// Reference entry 103629e0; body size 34 bytes.
#line 1 "ENTRY_103629e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103629e0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}


// Reference entry 10362d60; body size 3 bytes.
#line 1 "ENTRY_10362d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10362d60(void)

{
  return;
}


// Reference entry 10363580; body size 19 bytes.
#line 1 "ENTRY_10363580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10363580(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 103635a0; body size 19 bytes.
#line 1 "ENTRY_103635a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103635a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 103635c0; body size 11 bytes.
#line 1 "ENTRY_103635c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103635c0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCompatibleZPPairCandidateEnumerator);


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RCustomZPEnumerator);
  thunk_FUN_1106b1c0(param_1,uVar1);
  thunk_FUN_11079440();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);

  return;

 } catch (...) { }
}


// Reference entry 103635d0; body size 28 bytes.
#line 1 "ENTRY_103635d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103635d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCustRegQueryCountryAIOOp);
  param_1[0x18] = (uint)&ghidra_vftable_RCustRegQueryCountryAIOOp;
  param_1[0x11b] = (uint)&ghidra_vftable_RCustRegQueryCountryAIOOp;
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


// Reference entry 10363600; body size 28 bytes.
#line 1 "ENTRY_10363600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10363600(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCustRegRegisterSoftwareAIOOp);
  param_1[0x18] = (uint)&ghidra_vftable_RCustRegRegisterSoftwareAIOOp;
  param_1[0x11b] = (uint)&ghidra_vftable_RCustRegRegisterSoftwareAIOOp;
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


// Reference entry 10363630; body size 11 bytes.
#line 1 "ENTRY_10363630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10363630(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHTPrimaryZPCandidateEnumerator);


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RCustomZPEnumerator);
  thunk_FUN_1106b1c0(param_1,uVar1);
  thunk_FUN_11079440();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);

  return;

 } catch (...) { }
}


// Reference entry 10363900; body size 11 bytes.
#line 1 "ENTRY_10363900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10363900(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSubwooferPrimaryZPCandidateEnumerator);


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RCustomZPEnumerator);
  thunk_FUN_1106b1c0(param_1,uVar1);
  thunk_FUN_11079440();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);

  return;

 } catch (...) { }
}


// Reference entry 10363910; body size 11 bytes.
#line 1 "ENTRY_10363910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10363910(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSubwooferZPCandidateEnumerator);


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RCustomZPEnumerator);
  thunk_FUN_1106b1c0(param_1,uVar1);
  thunk_FUN_11079440();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);

  return;

 } catch (...) { }
}


// Reference entry 10363920; body size 28 bytes.
#line 1 "ENTRY_10363920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10363920(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpSPSetStringAIOOp);
  param_1[0x18] = (uint)&ghidra_vftable_RUpnpSPSetStringAIOOp;
  param_1[0x11b] = (uint)&ghidra_vftable_RUpnpSPSetStringAIOOp;
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


// Reference entry 10363950; body size 28 bytes.
#line 1 "ENTRY_10363950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10363950(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpZGTGetZoneGroupStateAIOOp);
  param_1[0x18] = (uint)&ghidra_vftable_RUpnpZGTGetZoneGroupStateAIOOp;
  param_1[0x11b] = (uint)&ghidra_vftable_RUpnpZGTGetZoneGroupStateAIOOp;
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


// Reference entry 10363980; body size 11 bytes.
#line 1 "ENTRY_10363980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10363980(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_RZPAirPlayEnumerator);


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RCustomZPEnumerator);
  thunk_FUN_1106b1c0(param_1,uVar1);
  thunk_FUN_11079440();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);

  return;

 } catch (...) { }
}


// Reference entry 103639c0; body size 11 bytes.
#line 1 "ENTRY_103639c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103639c0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_RZPIkeaLampEnumerator);


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RCustomZPEnumerator);
  thunk_FUN_1106b1c0(param_1,uVar1);
  thunk_FUN_11079440();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);

  return;

 } catch (...) { }
}


// Reference entry 103639d0; body size 11 bytes.
#line 1 "ENTRY_103639d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103639d0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_RZPLineInEnumerator);


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RCustomZPEnumerator);
  thunk_FUN_1106b1c0(param_1,uVar1);
  thunk_FUN_11079440();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);

  return;

 } catch (...) { }
}


// Reference entry 10363cb0; body size 19 bytes.
#line 1 "ENTRY_10363cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10363cb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10363cd0; body size 19 bytes.
#line 1 "ENTRY_10363cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10363cd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10363d70; body size 19 bytes.
#line 1 "ENTRY_10363d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10363d70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10364b30; body size 19 bytes.
#line 1 "ENTRY_10364b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10364b30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10364b50; body size 7 bytes.
#line 1 "ENTRY_10364b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10364b50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10364b60; body size 7 bytes.
#line 1 "ENTRY_10364b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10364b60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10364c90; body size 19 bytes.
#line 1 "ENTRY_10364c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10364c90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10364d30; body size 19 bytes.
#line 1 "ENTRY_10364d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10364d30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10364ea0; body size 19 bytes.
#line 1 "ENTRY_10364ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10364ea0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10364ec0; body size 18 bytes.
#line 1 "ENTRY_10364ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10364ec0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpZoneGroupTopologyGetZoneGroupState);
  param_1[2] = (uint)&ghidra_vftable_SCOpZoneGroupTopologyGetZoneGroupState;


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


// Reference entry 10364fe0; body size 19 bytes.
#line 1 "ENTRY_10364fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10364fe0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10365020; body size 19 bytes.
#line 1 "ENTRY_10365020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10365020(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10365380; body size 19 bytes.
#line 1 "ENTRY_10365380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10365380(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10365830; body size 11 bytes.
#line 1 "ENTRY_10365830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10365830(int *param_1)

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
      thunk_FUN_1036ec30(*(undefined4 *)*piVar1,(undefined4 *)*piVar1);
      return;
    }
    thunk_FUN_10353e20(piVar1,*piVar1);
    *(int *)*piVar1 = (int)(*piVar1);
    *(int *)(*piVar1 + 4) = *piVar1;
    *(undefined4 *)(iVar2 + 8) = 0;
    iStack_4 = (int)(*piVar1);
    thunk_FUN_10359040(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),&iStack_4);
  }
  return;
}


// Reference entry 10365960; body size 18 bytes.
#line 1 "ENTRY_10365960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10365960(int *param_1)

{
  if (*param_1 != 0) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 10365980; body size 18 bytes.
#line 1 "ENTRY_10365980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10365980(int param_1)

{
  **(undefined4 **)(param_1 + 4) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(*(int *)(param_1 + 8) + 4) = *(undefined4 *)(param_1 + 4);
  return;
}


// Reference entry 10365ec0; body size 65 bytes.
#line 1 "ENTRY_10365ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10365ec0(int *param_2)
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


// Reference entry 10366230; body size 65 bytes.
#line 1 "ENTRY_10366230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10366230(int *param_2)
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


// Reference entry 10366300; body size 65 bytes.
#line 1 "ENTRY_10366300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10366300(int *param_2)
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


// Reference entry 10366360; body size 65 bytes.
#line 1 "ENTRY_10366360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10366360(int *param_2)
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


// Reference entry 103664a0; body size 65 bytes.
#line 1 "ENTRY_103664a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_103664a0(int *param_2)
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


// Reference entry 103665c0; body size 60 bytes.
#line 1 "ENTRY_103665c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103665c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if (param_1 != (undefined4 *)(param_2)) {
    thunk_FUN_101f53d0();
    *param_1 = (undefined4)(*param_2);
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    *param_2 = (undefined4)(0);
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10366660; body size 60 bytes.
#line 1 "ENTRY_10366660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10366660(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if (param_1 != (undefined4 *)(param_2)) {
    thunk_FUN_101f53d0();
    *param_1 = (undefined4)(*param_2);
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    *param_2 = (undefined4)(0);
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10366850; body size 14 bytes.
#line 1 "ENTRY_10366850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10366850(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10366870; body size 14 bytes.
#line 1 "ENTRY_10366870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10366870(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10366890; body size 14 bytes.
#line 1 "ENTRY_10366890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10366890(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 103668b0; body size 14 bytes.
#line 1 "ENTRY_103668b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_103668b0(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 103668d0; body size 14 bytes.
#line 1 "ENTRY_103668d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_103668d0(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 103668f0; body size 14 bytes.
#line 1 "ENTRY_103668f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_103668f0(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10366910; body size 14 bytes.
#line 1 "ENTRY_10366910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10366910(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10366930; body size 14 bytes.
#line 1 "ENTRY_10366930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10366930(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10366950; body size 17 bytes.
#line 1 "ENTRY_10366950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10366950(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_111a06b0(param_1));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(cVar1 == '\0');
}


// Reference entry 10366d30; body size 12 bytes.
#line 1 "ENTRY_10366d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10366d30(int param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + param_2 * 4);
}


// Reference entry 10366d40; body size 12 bytes.
#line 1 "ENTRY_10366d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10366d40(int param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + param_2 * 8);
}


// Reference entry 10366d50; body size 7 bytes.
#line 1 "ENTRY_10366d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10366d50(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10366d60; body size 3 bytes.
#line 1 "ENTRY_10366d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366d60(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10366d70; body size 3 bytes.
#line 1 "ENTRY_10366d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366d70(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10366d80; body size 3 bytes.
#line 1 "ENTRY_10366d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366d80(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10366d90; body size 3 bytes.
#line 1 "ENTRY_10366d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366d90(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10366da0; body size 3 bytes.
#line 1 "ENTRY_10366da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366da0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10366db0; body size 3 bytes.
#line 1 "ENTRY_10366db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366db0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10366dc0; body size 3 bytes.
#line 1 "ENTRY_10366dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366dc0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10366dd0; body size 3 bytes.
#line 1 "ENTRY_10366dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366dd0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10366de0; body size 3 bytes.
#line 1 "ENTRY_10366de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366de0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10366df0; body size 3 bytes.
#line 1 "ENTRY_10366df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366df0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10366e00; body size 7 bytes.
#line 1 "ENTRY_10366e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10366e00(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10366e10; body size 3 bytes.
#line 1 "ENTRY_10366e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366e10(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10366e20; body size 7 bytes.
#line 1 "ENTRY_10366e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10366e20(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10366e30; body size 3 bytes.
#line 1 "ENTRY_10366e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366e30(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10366e40; body size 7 bytes.
#line 1 "ENTRY_10366e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10366e40(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10366e50; body size 7 bytes.
#line 1 "ENTRY_10366e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10366e50(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10366e60; body size 3 bytes.
#line 1 "ENTRY_10366e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366e60(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10366e70; body size 7 bytes.
#line 1 "ENTRY_10366e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10366e70(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10366e80; body size 3 bytes.
#line 1 "ENTRY_10366e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366e80(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10366e90; body size 7 bytes.
#line 1 "ENTRY_10366e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10366e90(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10366ea0; body size 7 bytes.
#line 1 "ENTRY_10366ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10366ea0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10366eb0; body size 3 bytes.
#line 1 "ENTRY_10366eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366eb0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10366ec0; body size 3 bytes.
#line 1 "ENTRY_10366ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366ec0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10366ed0; body size 7 bytes.
#line 1 "ENTRY_10366ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10366ed0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10366ee0; body size 3 bytes.
#line 1 "ENTRY_10366ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366ee0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10366ef0; body size 3 bytes.
#line 1 "ENTRY_10366ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366ef0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10366f00; body size 3 bytes.
#line 1 "ENTRY_10366f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366f00(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10366f10; body size 3 bytes.
#line 1 "ENTRY_10366f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366f10(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10366f20; body size 3 bytes.
#line 1 "ENTRY_10366f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366f20(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10366f30; body size 3 bytes.
#line 1 "ENTRY_10366f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366f30(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10366f40; body size 3 bytes.
#line 1 "ENTRY_10366f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366f40(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10366f50; body size 3 bytes.
#line 1 "ENTRY_10366f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366f50(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10366f60; body size 3 bytes.
#line 1 "ENTRY_10366f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366f60(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10366f70; body size 7 bytes.
#line 1 "ENTRY_10366f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10366f70(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10366f80; body size 3 bytes.
#line 1 "ENTRY_10366f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366f80(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10366f90; body size 3 bytes.
#line 1 "ENTRY_10366f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366f90(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10366fa0; body size 3 bytes.
#line 1 "ENTRY_10366fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366fa0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10366fb0; body size 3 bytes.
#line 1 "ENTRY_10366fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366fb0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10366fc0; body size 7 bytes.
#line 1 "ENTRY_10366fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10366fc0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10366fd0; body size 3 bytes.
#line 1 "ENTRY_10366fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366fd0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10366fe0; body size 3 bytes.
#line 1 "ENTRY_10366fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366fe0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10366ff0; body size 3 bytes.
#line 1 "ENTRY_10366ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366ff0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10367000; body size 3 bytes.
#line 1 "ENTRY_10367000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367000(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10367010; body size 7 bytes.
#line 1 "ENTRY_10367010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10367010(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10367020; body size 3 bytes.
#line 1 "ENTRY_10367020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367020(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10367030; body size 3 bytes.
#line 1 "ENTRY_10367030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367030(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10367040; body size 7 bytes.
#line 1 "ENTRY_10367040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10367040(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10367050; body size 3 bytes.
#line 1 "ENTRY_10367050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367050(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10367060; body size 7 bytes.
#line 1 "ENTRY_10367060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10367060(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10367070; body size 3 bytes.
#line 1 "ENTRY_10367070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367070(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10367080; body size 7 bytes.
#line 1 "ENTRY_10367080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10367080(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10367090; body size 7 bytes.
#line 1 "ENTRY_10367090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10367090(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 103670a0; body size 3 bytes.
#line 1 "ENTRY_103670a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103670a0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103670b0; body size 7 bytes.
#line 1 "ENTRY_103670b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103670b0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 103670c0; body size 3 bytes.
#line 1 "ENTRY_103670c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103670c0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103670d0; body size 3 bytes.
#line 1 "ENTRY_103670d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103670d0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103670e0; body size 7 bytes.
#line 1 "ENTRY_103670e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103670e0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 103670f0; body size 7 bytes.
#line 1 "ENTRY_103670f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103670f0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10367100; body size 7 bytes.
#line 1 "ENTRY_10367100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10367100(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10367110; body size 8 bytes.
#line 1 "ENTRY_10367110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10367110(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10367120; body size 8 bytes.
#line 1 "ENTRY_10367120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10367120(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10367130; body size 8 bytes.
#line 1 "ENTRY_10367130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10367130(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10367140; body size 4 bytes.
#line 1 "ENTRY_10367140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367140(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10367150; body size 4 bytes.
#line 1 "ENTRY_10367150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367150(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10367160; body size 4 bytes.
#line 1 "ENTRY_10367160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367160(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10367170; body size 3 bytes.
#line 1 "ENTRY_10367170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367170(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10367180; body size 4 bytes.
#line 1 "ENTRY_10367180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367180(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10367190; body size 3 bytes.
#line 1 "ENTRY_10367190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367190(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103671a0; body size 3 bytes.
#line 1 "ENTRY_103671a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103671a0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103671b0; body size 3 bytes.
#line 1 "ENTRY_103671b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103671b0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103671c0; body size 3 bytes.
#line 1 "ENTRY_103671c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103671c0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103671d0; body size 3 bytes.
#line 1 "ENTRY_103671d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103671d0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103671e0; body size 3 bytes.
#line 1 "ENTRY_103671e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103671e0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103671f0; body size 3 bytes.
#line 1 "ENTRY_103671f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103671f0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10367200; body size 3 bytes.
#line 1 "ENTRY_10367200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367200(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10367210; body size 3 bytes.
#line 1 "ENTRY_10367210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367210(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10367220; body size 3 bytes.
#line 1 "ENTRY_10367220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367220(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10367230; body size 3 bytes.
#line 1 "ENTRY_10367230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367230(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10367240; body size 3 bytes.
#line 1 "ENTRY_10367240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367240(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10367250; body size 3 bytes.
#line 1 "ENTRY_10367250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367250(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10367260; body size 3 bytes.
#line 1 "ENTRY_10367260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367260(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10367270; body size 3 bytes.
#line 1 "ENTRY_10367270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367270(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10367280; body size 3 bytes.
#line 1 "ENTRY_10367280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367280(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10367290; body size 3 bytes.
#line 1 "ENTRY_10367290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367290(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103672a0; body size 3 bytes.
#line 1 "ENTRY_103672a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103672a0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103672b0; body size 3 bytes.
#line 1 "ENTRY_103672b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103672b0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103672c0; body size 3 bytes.
#line 1 "ENTRY_103672c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103672c0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103672d0; body size 3 bytes.
#line 1 "ENTRY_103672d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103672d0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103672e0; body size 3 bytes.
#line 1 "ENTRY_103672e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103672e0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103672f0; body size 3 bytes.
#line 1 "ENTRY_103672f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103672f0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10367300; body size 3 bytes.
#line 1 "ENTRY_10367300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367300(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10367310; body size 3 bytes.
#line 1 "ENTRY_10367310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367310(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10367320; body size 3 bytes.
#line 1 "ENTRY_10367320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367320(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10367330; body size 3 bytes.
#line 1 "ENTRY_10367330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367330(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10367340; body size 3 bytes.
#line 1 "ENTRY_10367340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367340(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10367350; body size 3 bytes.
#line 1 "ENTRY_10367350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367350(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10367360; body size 3 bytes.
#line 1 "ENTRY_10367360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367360(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10367370; body size 3 bytes.
#line 1 "ENTRY_10367370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367370(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10367380; body size 3 bytes.
#line 1 "ENTRY_10367380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367380(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10367390; body size 3 bytes.
#line 1 "ENTRY_10367390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367390(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103673a0; body size 3 bytes.
#line 1 "ENTRY_103673a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103673a0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103673b0; body size 6 bytes.
#line 1 "ENTRY_103673b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103673b0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 103673c0; body size 6 bytes.
#line 1 "ENTRY_103673c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103673c0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 103673d0; body size 3 bytes.
#line 1 "ENTRY_103673d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103673d0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103673e0; body size 3 bytes.
#line 1 "ENTRY_103673e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103673e0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103673f0; body size 6 bytes.
#line 1 "ENTRY_103673f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103673f0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 8);
}


// Reference entry 10367400; body size 6 bytes.
#line 1 "ENTRY_10367400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10367400(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 8);
}


// Reference entry 10367410; body size 6 bytes.
#line 1 "ENTRY_10367410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10367410(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10367420; body size 6 bytes.
#line 1 "ENTRY_10367420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10367420(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10367430; body size 6 bytes.
#line 1 "ENTRY_10367430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10367430(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10367440; body size 6 bytes.
#line 1 "ENTRY_10367440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10367440(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10367450; body size 3 bytes.
#line 1 "ENTRY_10367450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367450(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10367460; body size 3 bytes.
#line 1 "ENTRY_10367460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367460(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10367470; body size 9 bytes.
#line 1 "ENTRY_10367470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10367470(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10367480; body size 9 bytes.
#line 1 "ENTRY_10367480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10367480(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10367720; body size 6 bytes.
#line 1 "ENTRY_10367720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10367720(int *param_1)

{
  *param_1 = (int)(*param_1 + 0x18);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10367730; body size 6 bytes.
#line 1 "ENTRY_10367730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10367730(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10367740; body size 16 bytes.
#line 1 "ENTRY_10367740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10367740(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  *param_2 = (int)(iVar1);
  *param_1 = (int)(iVar1 + 0x18);
  return;
}


// Reference entry 10367760; body size 16 bytes.
#line 1 "ENTRY_10367760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10367760(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  *param_2 = (int)(iVar1);
  *param_1 = (int)(iVar1 + 8);
  return;
}


// Reference entry 10367780; body size 10 bytes.
#line 1 "ENTRY_10367780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10367780(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10367890; body size 57 bytes.
#line 1 "ENTRY_10367890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __stdcall FUN_10367890(byte *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2])
          * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 1036a610; body size 4 bytes.
#line 1 "ENTRY_1036a610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036a610(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1036a620; body size 31 bytes.
#line 1 "ENTRY_1036a620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1036a620(undefined4 *param_1)

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


// Reference entry 1036a650; body size 31 bytes.
#line 1 "ENTRY_1036a650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1036a650(undefined4 *param_1)

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


// Reference entry 1036a680; body size 31 bytes.
#line 1 "ENTRY_1036a680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1036a680(undefined4 *param_1)

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


// Reference entry 1036a6b0; body size 22 bytes.
#line 1 "ENTRY_1036a6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1036a6b0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x14));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 1036a8f0; body size 30 bytes.
#line 1 "ENTRY_1036a8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036a8f0(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_1031b010(param_2));
  *param_1 = (int)(iVar1);
  param_1[1] = iVar1;
  param_1[2] = iVar1 + param_2 * 8;
  return;
}


// Reference entry 1036a920; body size 63 bytes.
#line 1 "ENTRY_1036a920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_1036a920(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)((param_1[2] - *param_1) / 0x18);
  if (0xaaaaaaa - (uVar1 >> 1) < uVar1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0xaaaaaaa);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 1036a970; body size 49 bytes.
#line 1 "ENTRY_1036a970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_1036a970(uint param_2)
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


// Reference entry 1036a9b0; body size 49 bytes.
#line 1 "ENTRY_1036a9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_1036a9b0(uint param_2)
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


// Reference entry 1036ac30; body size 66 bytes.
#line 1 "ENTRY_1036ac30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1036ac30(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) +
                 (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 <= fVar1 && fVar1 != *param_1);
}


// Reference entry 1036ac90; body size 3 bytes.
#line 1 "ENTRY_1036ac90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1036ac90(void)

{
  return;
}


// Reference entry 1036aca0; body size 3 bytes.
#line 1 "ENTRY_1036aca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1036aca0(void)

{
  return;
}


// Reference entry 1036b640; body size 3 bytes.
#line 1 "ENTRY_1036b640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1036b640(void)

{
  return;
}


// Reference entry 1036b890; body size 55 bytes.
#line 1 "ENTRY_1036b890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1036b890(byte *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2])
          * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 1036b8e0; body size 8 bytes.
#line 1 "ENTRY_1036b8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1036b8e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 1036b8f0; body size 8 bytes.
#line 1 "ENTRY_1036b8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1036b8f0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 1036b900; body size 8 bytes.
#line 1 "ENTRY_1036b900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1036b900(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 1036b910; body size 8 bytes.
#line 1 "ENTRY_1036b910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1036b910(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 1036b920; body size 8 bytes.
#line 1 "ENTRY_1036b920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1036b920(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 1036b930; body size 8 bytes.
#line 1 "ENTRY_1036b930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1036b930(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 1036b940; body size 8 bytes.
#line 1 "ENTRY_1036b940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1036b940(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 1036b950; body size 8 bytes.
#line 1 "ENTRY_1036b950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1036b950(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 1036b960; body size 54 bytes.
#line 1 "ENTRY_1036b960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036b960(int *param_2,int param_3)
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


// Reference entry 1036ca90; body size 3 bytes.
#line 1 "ENTRY_1036ca90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036ca90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036caa0; body size 3 bytes.
#line 1 "ENTRY_1036caa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036caa0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cab0; body size 3 bytes.
#line 1 "ENTRY_1036cab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cab0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cac0; body size 3 bytes.
#line 1 "ENTRY_1036cac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cac0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cad0; body size 3 bytes.
#line 1 "ENTRY_1036cad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cad0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cae0; body size 3 bytes.
#line 1 "ENTRY_1036cae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cae0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036caf0; body size 3 bytes.
#line 1 "ENTRY_1036caf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036caf0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cb00; body size 3 bytes.
#line 1 "ENTRY_1036cb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cb00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cb10; body size 3 bytes.
#line 1 "ENTRY_1036cb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cb10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cb20; body size 3 bytes.
#line 1 "ENTRY_1036cb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cb20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cb30; body size 3 bytes.
#line 1 "ENTRY_1036cb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cb30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cb40; body size 3 bytes.
#line 1 "ENTRY_1036cb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cb40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cb50; body size 3 bytes.
#line 1 "ENTRY_1036cb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cb50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cb60; body size 3 bytes.
#line 1 "ENTRY_1036cb60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cb60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cb70; body size 3 bytes.
#line 1 "ENTRY_1036cb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cb70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cb80; body size 3 bytes.
#line 1 "ENTRY_1036cb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cb80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cb90; body size 3 bytes.
#line 1 "ENTRY_1036cb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cb90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cba0; body size 3 bytes.
#line 1 "ENTRY_1036cba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cba0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cbb0; body size 3 bytes.
#line 1 "ENTRY_1036cbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cbb0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cbc0; body size 3 bytes.
#line 1 "ENTRY_1036cbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cbc0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cbd0; body size 3 bytes.
#line 1 "ENTRY_1036cbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cbd0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cbe0; body size 3 bytes.
#line 1 "ENTRY_1036cbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cbe0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cbf0; body size 3 bytes.
#line 1 "ENTRY_1036cbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cbf0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cc00; body size 3 bytes.
#line 1 "ENTRY_1036cc00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cc00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cc10; body size 3 bytes.
#line 1 "ENTRY_1036cc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cc10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cc20; body size 3 bytes.
#line 1 "ENTRY_1036cc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cc20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cc30; body size 3 bytes.
#line 1 "ENTRY_1036cc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cc30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cc40; body size 3 bytes.
#line 1 "ENTRY_1036cc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cc40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cc50; body size 3 bytes.
#line 1 "ENTRY_1036cc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cc50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cc60; body size 3 bytes.
#line 1 "ENTRY_1036cc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cc60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cc70; body size 3 bytes.
#line 1 "ENTRY_1036cc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cc70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cc80; body size 3 bytes.
#line 1 "ENTRY_1036cc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cc80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cc90; body size 3 bytes.
#line 1 "ENTRY_1036cc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cc90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cca0; body size 3 bytes.
#line 1 "ENTRY_1036cca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cca0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036ccb0; body size 3 bytes.
#line 1 "ENTRY_1036ccb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036ccb0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036ccc0; body size 3 bytes.
#line 1 "ENTRY_1036ccc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036ccc0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036ccd0; body size 3 bytes.
#line 1 "ENTRY_1036ccd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036ccd0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cce0; body size 3 bytes.
#line 1 "ENTRY_1036cce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cce0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036ccf0; body size 3 bytes.
#line 1 "ENTRY_1036ccf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036ccf0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cd00; body size 3 bytes.
#line 1 "ENTRY_1036cd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cd00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cd20; body size 3 bytes.
#line 1 "ENTRY_1036cd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cd20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cd30; body size 3 bytes.
#line 1 "ENTRY_1036cd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cd30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cd40; body size 3 bytes.
#line 1 "ENTRY_1036cd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cd40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cd50; body size 3 bytes.
#line 1 "ENTRY_1036cd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cd50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036cd60; body size 4 bytes.
#line 1 "ENTRY_1036cd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cd60(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 1036cd70; body size 4 bytes.
#line 1 "ENTRY_1036cd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cd70(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 1036cd80; body size 4 bytes.
#line 1 "ENTRY_1036cd80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cd80(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 1036cd90; body size 4 bytes.
#line 1 "ENTRY_1036cd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cd90(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 1036cda0; body size 4 bytes.
#line 1 "ENTRY_1036cda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cda0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 1036cdb0; body size 4 bytes.
#line 1 "ENTRY_1036cdb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cdb0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 1036cdc0; body size 4 bytes.
#line 1 "ENTRY_1036cdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cdc0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 1036cdd0; body size 4 bytes.
#line 1 "ENTRY_1036cdd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cdd0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 1036d380; body size 7 bytes.
#line 1 "ENTRY_1036d380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1036d380(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 1036d390; body size 7 bytes.
#line 1 "ENTRY_1036d390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1036d390(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 1036d3a0; body size 7 bytes.
#line 1 "ENTRY_1036d3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1036d3a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 1036d3b0; body size 7 bytes.
#line 1 "ENTRY_1036d3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1036d3b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 1036d3c0; body size 7 bytes.
#line 1 "ENTRY_1036d3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1036d3c0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 1036d3d0; body size 7 bytes.
#line 1 "ENTRY_1036d3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1036d3d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 1036d3e0; body size 7 bytes.
#line 1 "ENTRY_1036d3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1036d3e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 1036d3f0; body size 7 bytes.
#line 1 "ENTRY_1036d3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1036d3f0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 1036d4e0; body size 13 bytes.
#line 1 "ENTRY_1036d4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1036d4e0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 1036d4f0; body size 18 bytes.
#line 1 "ENTRY_1036d4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036d4f0(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 8);
  return;
}


// Reference entry 1036d510; body size 18 bytes.
#line 1 "ENTRY_1036d510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036d510(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 8);
  return;
}


// Reference entry 1036d530; body size 30 bytes.
#line 1 "ENTRY_1036d530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1036d530(int param_1)

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


// Reference entry 1036d590; body size 30 bytes.
#line 1 "ENTRY_1036d590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1036d590(int param_1)

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


// Reference entry 1036d5c0; body size 3 bytes.
#line 1 "ENTRY_1036d5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036d5c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036d5d0; body size 3 bytes.
#line 1 "ENTRY_1036d5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036d5d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1036d8a0; body size 3 bytes.
#line 1 "ENTRY_1036d8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1036d8a0(void)

{
  return;
}


// Reference entry 1036d8b0; body size 3 bytes.
#line 1 "ENTRY_1036d8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1036d8b0(void)

{
  return;
}


// Reference entry 1036d8c0; body size 3 bytes.
#line 1 "ENTRY_1036d8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1036d8c0(void)

{
  return;
}


// Reference entry 1036d8d0; body size 3 bytes.
#line 1 "ENTRY_1036d8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1036d8d0(void)

{
  return;
}


// Reference entry 1036d8e0; body size 3 bytes.
#line 1 "ENTRY_1036d8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1036d8e0(void)

{
  return;
}


// Reference entry 1036d8f0; body size 3 bytes.
#line 1 "ENTRY_1036d8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1036d8f0(void)

{
  return;
}


// Reference entry 1036d900; body size 3 bytes.
#line 1 "ENTRY_1036d900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1036d900(void)

{
  return;
}


// Reference entry 1036d9c0; body size 11 bytes.
#line 1 "ENTRY_1036d9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036d9c0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 1036d9d0; body size 11 bytes.
#line 1 "ENTRY_1036d9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036d9d0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 1036d9e0; body size 11 bytes.
#line 1 "ENTRY_1036d9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036d9e0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 1036d9f0; body size 6 bytes.
#line 1 "ENTRY_1036d9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1036d9f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 1036da00; body size 6 bytes.
#line 1 "ENTRY_1036da00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1036da00(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 1036da10; body size 6 bytes.
#line 1 "ENTRY_1036da10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1036da10(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 1036da20; body size 6 bytes.
#line 1 "ENTRY_1036da20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1036da20(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 1036da30; body size 26 bytes.
#line 1 "ENTRY_1036da30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036da30(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 1036da50; body size 26 bytes.
#line 1 "ENTRY_1036da50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036da50(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 1036da70; body size 26 bytes.
#line 1 "ENTRY_1036da70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036da70(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 1036da90; body size 26 bytes.
#line 1 "ENTRY_1036da90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036da90(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 1036dab0; body size 26 bytes.
#line 1 "ENTRY_1036dab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036dab0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 1036dad0; body size 26 bytes.
#line 1 "ENTRY_1036dad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036dad0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 1036daf0; body size 26 bytes.
#line 1 "ENTRY_1036daf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036daf0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 1036db10; body size 26 bytes.
#line 1 "ENTRY_1036db10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036db10(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 1036db30; body size 26 bytes.
#line 1 "ENTRY_1036db30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036db30(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 1036db50; body size 26 bytes.
#line 1 "ENTRY_1036db50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036db50(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 1036db70; body size 76 bytes.
#line 1 "ENTRY_1036db70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036db70(int *param_2)
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


// Reference entry 1036dbd0; body size 76 bytes.
#line 1 "ENTRY_1036dbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036dbd0(int *param_2)
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


// Reference entry 1036dd10; body size 10 bytes.
#line 1 "ENTRY_1036dd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036dd10(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 1036dd20; body size 10 bytes.
#line 1 "ENTRY_1036dd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036dd20(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 1036dd30; body size 10 bytes.
#line 1 "ENTRY_1036dd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036dd30(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 1036dd40; body size 10 bytes.
#line 1 "ENTRY_1036dd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036dd40(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 1036dd50; body size 10 bytes.
#line 1 "ENTRY_1036dd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036dd50(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 1036dd60; body size 10 bytes.
#line 1 "ENTRY_1036dd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036dd60(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 1036dd70; body size 10 bytes.
#line 1 "ENTRY_1036dd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036dd70(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 1036dd80; body size 10 bytes.
#line 1 "ENTRY_1036dd80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036dd80(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 1036df00; body size 43 bytes.
#line 1 "ENTRY_1036df00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036df00(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = (undefined4)(0);
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}


// Reference entry 1036df40; body size 43 bytes.
#line 1 "ENTRY_1036df40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036df40(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = (undefined4)(0);
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}


// Reference entry 1036e910; body size 24 bytes.
#line 1 "ENTRY_1036e910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036e910(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10357c10(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 1036e930; body size 24 bytes.
#line 1 "ENTRY_1036e930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036e930(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10357cb0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 1036ea40; body size 24 bytes.
#line 1 "ENTRY_1036ea40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036ea40(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10357c10(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 1036ea60; body size 24 bytes.
#line 1 "ENTRY_1036ea60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036ea60(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10357cb0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 1036ea80; body size 14 bytes.
#line 1 "ENTRY_1036ea80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036ea80(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 4));
  return;
}


// Reference entry 1036eaa0; body size 13 bytes.
#line 1 "ENTRY_1036eaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036eaa0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 1036eab0; body size 13 bytes.
#line 1 "ENTRY_1036eab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036eab0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 1036eac0; body size 13 bytes.
#line 1 "ENTRY_1036eac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036eac0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 1036ead0; body size 3 bytes.
#line 1 "ENTRY_1036ead0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036ead0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 1036eae0; body size 12 bytes.
#line 1 "ENTRY_1036eae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036eae0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1036eaf0; body size 11 bytes.
#line 1 "ENTRY_1036eaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036eaf0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 1036eb00; body size 4 bytes.
#line 1 "ENTRY_1036eb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036eb00(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1036ef60; body size 43 bytes.
#line 1 "ENTRY_1036ef60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1036ef60(int param_1,int param_2,int param_3)

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


// Reference entry 1036efa0; body size 11 bytes.
#line 1 "ENTRY_1036efa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1036efa0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 1036efb0; body size 3 bytes.
#line 1 "ENTRY_1036efb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036efb0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 1036efc0; body size 3 bytes.
#line 1 "ENTRY_1036efc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036efc0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10370ca0; body size 90 bytes.
#line 1 "ENTRY_10370ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10370ca0(uint param_1)

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


// Reference entry 10370d20; body size 90 bytes.
#line 1 "ENTRY_10370d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10370d20(uint param_1)

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


// Reference entry 10370da0; body size 97 bytes.
#line 1 "ENTRY_10370da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10370da0(uint param_1)

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


// Reference entry 10370e20; body size 97 bytes.
#line 1 "ENTRY_10370e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10370e20(uint param_1)

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


// Reference entry 10370ea0; body size 90 bytes.
#line 1 "ENTRY_10370ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10370ea0(uint param_1)

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


// Reference entry 10370f90; body size 87 bytes.
#line 1 "ENTRY_10370f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10370f90(uint param_1)

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


// Reference entry 10371000; body size 87 bytes.
#line 1 "ENTRY_10371000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10371000(uint param_1)

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


// Reference entry 103717a0; body size 7 bytes.
#line 1 "ENTRY_103717a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103717a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x401);
}


// Reference entry 103717b0; body size 13 bytes.
#line 1 "ENTRY_103717b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103717b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 103717c0; body size 13 bytes.
#line 1 "ENTRY_103717c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103717c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 103717d0; body size 11 bytes.
#line 1 "ENTRY_103717d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103717d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 103717e0; body size 11 bytes.
#line 1 "ENTRY_103717e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103717e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 103717f0; body size 68 bytes.
#line 1 "ENTRY_103717f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_103717f0(byte *param_2)
{
  int param_1 = (int )this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(uint *)(param_1 + 0x18) &
         ((((*param_2 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_2[1]) * 0x1000193 ^ (uint)param_2[2])
          * 0x1000193 ^ (uint)param_2[3]) * 0x1000193);
}


// Reference entry 10371850; body size 4 bytes.
#line 1 "ENTRY_10371850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10371850(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 103723d0; body size 23 bytes.
#line 1 "ENTRY_103723d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103723d0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_1[2] - *param_1) / 0x18);
}


// Reference entry 103723f0; body size 9 bytes.
#line 1 "ENTRY_103723f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103723f0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 10372400; body size 9 bytes.
#line 1 "ENTRY_10372400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10372400(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 10372590; body size 23 bytes.
#line 1 "ENTRY_10372590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10372590(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_1109f7f0());
  if (iVar1 != 0) {
    thunk_FUN_110a2880(PTR_s_IsLocalRadioPrepulated_1211957c);
  }
  return;
}


// Reference entry 103725b0; body size 23 bytes.
#line 1 "ENTRY_103725b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103725b0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_1109f7f0());
  if (iVar1 != 0) {
    thunk_FUN_110a2880(PTR_s_IsRadioFavoritesPrepulated_12119580);
  }
  return;
}


// Reference entry 103766a0; body size 57 bytes.
#line 1 "ENTRY_103766a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103766a0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 103766f0; body size 57 bytes.
#line 1 "ENTRY_103766f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103766f0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10376740; body size 63 bytes.
#line 1 "ENTRY_10376740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10376740(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10376790; body size 63 bytes.
#line 1 "ENTRY_10376790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10376790(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 103767e0; body size 60 bytes.
#line 1 "ENTRY_103767e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103767e0(int param_1,int param_2)

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


// Reference entry 10376830; body size 60 bytes.
#line 1 "ENTRY_10376830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10376830(int param_1,int param_2)

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


// Reference entry 10376880; body size 66 bytes.
#line 1 "ENTRY_10376880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10376880(int param_1,int param_2)

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


// Reference entry 10376a30; body size 61 bytes.
#line 1 "ENTRY_10376a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10376a30(int param_1,int param_2)

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


// Reference entry 10376a80; body size 61 bytes.
#line 1 "ENTRY_10376a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10376a80(int param_1,int param_2)

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


// Reference entry 10376ad0; body size 16 bytes.
#line 1 "ENTRY_10376ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10376ad0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10376af0; body size 9 bytes.
#line 1 "ENTRY_10376af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10376af0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10376b00; body size 9 bytes.
#line 1 "ENTRY_10376b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10376b00(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10376b10; body size 9 bytes.
#line 1 "ENTRY_10376b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10376b10(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10376b20; body size 9 bytes.
#line 1 "ENTRY_10376b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10376b20(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10376b30; body size 9 bytes.
#line 1 "ENTRY_10376b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10376b30(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10376b40; body size 9 bytes.
#line 1 "ENTRY_10376b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10376b40(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10376e40; body size 32 bytes.
#line 1 "ENTRY_10376e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10376e40(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x3c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x3c) + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 10377b70; body size 12 bytes.
#line 1 "ENTRY_10377b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10377b70(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10377b80; body size 11 bytes.
#line 1 "ENTRY_10377b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10377b80(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10377b90; body size 11 bytes.
#line 1 "ENTRY_10377b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10377b90(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10377ba0; body size 11 bytes.
#line 1 "ENTRY_10377ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10377ba0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10377bb0; body size 12 bytes.
#line 1 "ENTRY_10377bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10377bb0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10377bc0; body size 12 bytes.
#line 1 "ENTRY_10377bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10377bc0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 103780b0; body size 7 bytes.
#line 1 "ENTRY_103780b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_103780b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x124));
}


// Reference entry 10378150; body size 51 bytes.
#line 1 "ENTRY_10378150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10378150(void)

{
  char *pcStack_14;
  undefined4 uStack_10;
  char *pcStack_c;
  
  pcStack_c = (char *)("Fire onActiveStreamsChanged event.");
  uStack_10 = (undefined4)(2);
  pcStack_14 = (char *)("SCHousehold");
  thunk_FUN_112af4e0();
  pcStack_c = (char *)((char *)0x0);
  ((SCStr *)((SCStr *)&pcStack_14))->int_allocRep("SCIHousehold:onActiveStreamsChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 103786c0; body size 4 bytes.
#line 1 "ENTRY_103786c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103786c0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x34));
}


// Reference entry 10379710; body size 43 bytes.
#line 1 "ENTRY_10379710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10379710(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x6a8));
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_2);
}


// Reference entry 1037a2a0; body size 7 bytes.
#line 1 "ENTRY_1037a2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1037a2a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0xdbd2);
}


// Reference entry 1037c4b0; body size 4 bytes.
#line 1 "ENTRY_1037c4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1037c4b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1037c4c0; body size 4 bytes.
#line 1 "ENTRY_1037c4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1037c4c0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1037c4d0; body size 4 bytes.
#line 1 "ENTRY_1037c4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1037c4d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1037c4e0; body size 4 bytes.
#line 1 "ENTRY_1037c4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1037c4e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1037c4f0; body size 4 bytes.
#line 1 "ENTRY_1037c4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1037c4f0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1037cb50; body size 4 bytes.
#line 1 "ENTRY_1037cb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1037cb50(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x74));
}


// Reference entry 1037cb90; body size 4 bytes.
#line 1 "ENTRY_1037cb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1037cb90(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x2c);
}


// Reference entry 1037ee80; body size 4 bytes.
#line 1 "ENTRY_1037ee80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1037ee80(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10380df0; body size 4 bytes.
#line 1 "ENTRY_10380df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10380df0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x2c));
}


// Reference entry 10381010; body size 3 bytes.
#line 1 "ENTRY_10381010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10381010(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10382830; body size 7 bytes.
#line 1 "ENTRY_10382830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10382830(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x2d44c);
}


// Reference entry 10382840; body size 7 bytes.
#line 1 "ENTRY_10382840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10382840(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x6d0);
}


// Reference entry 10382850; body size 5 bytes.
#line 1 "ENTRY_10382850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 __fastcall FUN_10382850(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2)(*(undefined2 *)(param_1 + 0x5c));
}


// Reference entry 10383180; body size 5 bytes.
#line 1 "ENTRY_10383180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10383180(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x54));
}


// Reference entry 10383190; body size 5 bytes.
#line 1 "ENTRY_10383190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10383190(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x54));
}


// Reference entry 103831a0; body size 5 bytes.
#line 1 "ENTRY_103831a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103831a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x54));
}


// Reference entry 103831b0; body size 5 bytes.
#line 1 "ENTRY_103831b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103831b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x54));
}


// Reference entry 103831c0; body size 5 bytes.
#line 1 "ENTRY_103831c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103831c0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x54));
}


// Reference entry 103831d0; body size 5 bytes.
#line 1 "ENTRY_103831d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103831d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x54));
}


// Reference entry 103831e0; body size 4 bytes.
#line 1 "ENTRY_103831e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103831e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 103831f0; body size 16 bytes.
#line 1 "ENTRY_103831f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_103831f0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(-(uint)(*(int *)(param_1 + 0x1c) != 0) & *(int *)(param_1 + 0x1c) + 0x1430U);
}


// Reference entry 10383530; body size 7 bytes.
#line 1 "ENTRY_10383530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10383530(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0xd7d0);
}


// Reference entry 10388c80; body size 6 bytes.
#line 1 "ENTRY_10388c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10388c80(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIHousehold");
}


// Reference entry 10388c90; body size 6 bytes.
#line 1 "ENTRY_10388c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10388c90(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpZoneGroupTopologyGetZoneGroupState");
}


// Reference entry 10388ca0; body size 6 bytes.
#line 1 "ENTRY_10388ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10388ca0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCITimeZone");
}


// Reference entry 10388cb0; body size 6 bytes.
#line 1 "ENTRY_10388cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10388cb0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIZoneGroup");
}


// Reference entry 1038a580; body size 14 bytes.
#line 1 "ENTRY_1038a580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1038a580(undefined4 param_1)

{
  thunk_FUN_1038a5a0(param_1,0);
  return;
}


// Reference entry 1038be30; body size 36 bytes.
#line 1 "ENTRY_1038be30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1038be30(int param_1)

{
  if ((*(int *)(param_1 + 200) != 0) && (*(char *)(param_1 + 0x806) != '\0')) {
    (**(code **)(**(int **)(*(int *)(param_1 + 200) + 4) + 0x18))(*(undefined4 *)(param_1 + 0xa0));
  }
  return;
}


// Reference entry 1038be60; body size 36 bytes.
#line 1 "ENTRY_1038be60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1038be60(int param_1)

{
  if ((*(int *)(param_1 + 0xcc) != 0) && (*(char *)(param_1 + 0x807) != '\0')) {
    (**(code **)(**(int **)(*(int *)(param_1 + 0xcc) + 4) + 0x18))(*(undefined4 *)(param_1 + 0xa0));
  }
  return;
}


// Reference entry 1038d590; body size 7 bytes.
#line 1 "ENTRY_1038d590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1038d590(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x6c9));
}


// Reference entry 1038d5a0; body size 7 bytes.
#line 1 "ENTRY_1038d5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1038d5a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x6cb));
}


// Reference entry 1038d6d0; body size 11 bytes.
#line 1 "ENTRY_1038d6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1038d6d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x838) == 1);
}


// Reference entry 1038d980; body size 7 bytes.
#line 1 "ENTRY_1038d980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1038d980(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 1038d990; body size 7 bytes.
#line 1 "ENTRY_1038d990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1038d990(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 1038d9a0; body size 7 bytes.
#line 1 "ENTRY_1038d9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1038d9a0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 1038d9b0; body size 7 bytes.
#line 1 "ENTRY_1038d9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1038d9b0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 1038d9c0; body size 7 bytes.
#line 1 "ENTRY_1038d9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1038d9c0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 1038d9d0; body size 7 bytes.
#line 1 "ENTRY_1038d9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1038d9d0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 1038d9e0; body size 7 bytes.
#line 1 "ENTRY_1038d9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1038d9e0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 1038d9f0; body size 7 bytes.
#line 1 "ENTRY_1038d9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1038d9f0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 1038da00; body size 7 bytes.
#line 1 "ENTRY_1038da00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1038da00(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 1038da10; body size 7 bytes.
#line 1 "ENTRY_1038da10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1038da10(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 1038da20; body size 7 bytes.
#line 1 "ENTRY_1038da20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1038da20(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 1038da30; body size 7 bytes.
#line 1 "ENTRY_1038da30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1038da30(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 1038da50; body size 31 bytes.
#line 1 "ENTRY_1038da50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_1038da50(int param_1)

{
  uint in_EAX;
  int *piVar1;
  uint uVar2;
  
  if (*(int **)(param_1 + 200) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(**(int **)(param_1 + 200) + 100))());
    in_EAX = (uint)(0);
    if (piVar1 != (int *)0x0) {
                    
                    
      uVar2 = (uint)((**(code **)(*piVar1 + 0x3c))());
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar2);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(in_EAX & 0xffffff00);
}


// Reference entry 1038de70; body size 6 bytes.
#line 1 "ENTRY_1038de70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_1038de70(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(DAT_121a12cc);
}


// Reference entry 1038e1b0; body size 7 bytes.
#line 1 "ENTRY_1038e1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1038e1b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x6ce));
}


// Reference entry 103908f0; body size 3 bytes.
#line 1 "ENTRY_103908f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_103908f0(float *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10)((float10)*param_1);
}


// Reference entry 10390900; body size 6 bytes.
#line 1 "ENTRY_10390900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10390900(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xccccccc);
}


// Reference entry 10390910; body size 6 bytes.
#line 1 "ENTRY_10390910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10390910(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x71c71c7);
}


// Reference entry 10390920; body size 6 bytes.
#line 1 "ENTRY_10390920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10390920(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x9249249);
}


// Reference entry 10390930; body size 6 bytes.
#line 1 "ENTRY_10390930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10390930(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xaaaaaaa);
}


// Reference entry 10390940; body size 6 bytes.
#line 1 "ENTRY_10390940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10390940(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x1fffffff);
}


// Reference entry 10390950; body size 6 bytes.
#line 1 "ENTRY_10390950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10390950(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x1fffffff);
}


// Reference entry 10390960; body size 6 bytes.
#line 1 "ENTRY_10390960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10390960(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 10390970; body size 6 bytes.
#line 1 "ENTRY_10390970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10390970(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 10390980; body size 6 bytes.
#line 1 "ENTRY_10390980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10390980(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x71c71c7);
}


// Reference entry 10390990; body size 6 bytes.
#line 1 "ENTRY_10390990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10390990(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x9249249);
}


// Reference entry 103909a0; body size 6 bytes.
#line 1 "ENTRY_103909a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103909a0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xccccccc);
}


// Reference entry 103909b0; body size 6 bytes.
#line 1 "ENTRY_103909b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103909b0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xaaaaaaa);
}


// Reference entry 103909c0; body size 6 bytes.
#line 1 "ENTRY_103909c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103909c0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x1fffffff);
}


// Reference entry 103909d0; body size 6 bytes.
#line 1 "ENTRY_103909d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103909d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x1fffffff);
}


// Reference entry 10393720; body size 3 bytes.
#line 1 "ENTRY_10393720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393720(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103937c0; body size 5 bytes.
#line 1 "ENTRY_103937c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103937c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103937d0; body size 5 bytes.
#line 1 "ENTRY_103937d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103937d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103937e0; body size 3 bytes.
#line 1 "ENTRY_103937e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103937e0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103937f0; body size 3 bytes.
#line 1 "ENTRY_103937f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103937f0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10393800; body size 3 bytes.
#line 1 "ENTRY_10393800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393800(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10393810; body size 3 bytes.
#line 1 "ENTRY_10393810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393810(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10393820; body size 3 bytes.
#line 1 "ENTRY_10393820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393820(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10393830; body size 3 bytes.
#line 1 "ENTRY_10393830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393830(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10393840; body size 3 bytes.
#line 1 "ENTRY_10393840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393840(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10393850; body size 3 bytes.
#line 1 "ENTRY_10393850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393850(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10393860; body size 3 bytes.
#line 1 "ENTRY_10393860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393860(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10393870; body size 3 bytes.
#line 1 "ENTRY_10393870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393870(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10393880; body size 3 bytes.
#line 1 "ENTRY_10393880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393880(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10393890; body size 3 bytes.
#line 1 "ENTRY_10393890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393890(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103938a0; body size 3 bytes.
#line 1 "ENTRY_103938a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103938a0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103938b0; body size 3 bytes.
#line 1 "ENTRY_103938b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103938b0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103938c0; body size 3 bytes.
#line 1 "ENTRY_103938c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103938c0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103938d0; body size 3 bytes.
#line 1 "ENTRY_103938d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103938d0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103938e0; body size 3 bytes.
#line 1 "ENTRY_103938e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103938e0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103938f0; body size 3 bytes.
#line 1 "ENTRY_103938f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103938f0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10393900; body size 3 bytes.
#line 1 "ENTRY_10393900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393900(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10393910; body size 3 bytes.
#line 1 "ENTRY_10393910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393910(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10393920; body size 3 bytes.
#line 1 "ENTRY_10393920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393920(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10393930; body size 3 bytes.
#line 1 "ENTRY_10393930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393930(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10393940; body size 3 bytes.
#line 1 "ENTRY_10393940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393940(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10393950; body size 3 bytes.
#line 1 "ENTRY_10393950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393950(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10393960; body size 3 bytes.
#line 1 "ENTRY_10393960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393960(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10393970; body size 3 bytes.
#line 1 "ENTRY_10393970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393970(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10393980; body size 3 bytes.
#line 1 "ENTRY_10393980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393980(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10393990; body size 3 bytes.
#line 1 "ENTRY_10393990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393990(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103939a0; body size 3 bytes.
#line 1 "ENTRY_103939a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103939a0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103939b0; body size 3 bytes.
#line 1 "ENTRY_103939b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103939b0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103939c0; body size 3 bytes.
#line 1 "ENTRY_103939c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103939c0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103939d0; body size 3 bytes.
#line 1 "ENTRY_103939d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103939d0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103939e0; body size 3 bytes.
#line 1 "ENTRY_103939e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103939e0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103939f0; body size 3 bytes.
#line 1 "ENTRY_103939f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103939f0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10393a00; body size 3 bytes.
#line 1 "ENTRY_10393a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393a00(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10393a10; body size 3 bytes.
#line 1 "ENTRY_10393a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393a10(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10393a20; body size 3 bytes.
#line 1 "ENTRY_10393a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393a20(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10393a30; body size 3 bytes.
#line 1 "ENTRY_10393a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393a30(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10393a40; body size 3 bytes.
#line 1 "ENTRY_10393a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393a40(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10393a50; body size 3 bytes.
#line 1 "ENTRY_10393a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393a50(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10393a60; body size 3 bytes.
#line 1 "ENTRY_10393a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393a60(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10393a70; body size 36 bytes.
#line 1 "ENTRY_10393a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10393a70(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_10353440(puVar1,param_2);
  return;
}


// Reference entry 10394530; body size 28 bytes.
#line 1 "ENTRY_10394530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394530(undefined4 *param_1)

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


// Reference entry 10394560; body size 28 bytes.
#line 1 "ENTRY_10394560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394560(undefined4 *param_1)

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


// Reference entry 10394590; body size 28 bytes.
#line 1 "ENTRY_10394590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394590(undefined4 *param_1)

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


// Reference entry 103945c0; body size 28 bytes.
#line 1 "ENTRY_103945c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103945c0(undefined4 *param_1)

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


// Reference entry 103945f0; body size 28 bytes.
#line 1 "ENTRY_103945f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103945f0(undefined4 *param_1)

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


// Reference entry 10394620; body size 28 bytes.
#line 1 "ENTRY_10394620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394620(undefined4 *param_1)

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


// Reference entry 10394650; body size 28 bytes.
#line 1 "ENTRY_10394650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394650(undefined4 *param_1)

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


// Reference entry 10394680; body size 28 bytes.
#line 1 "ENTRY_10394680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394680(undefined4 *param_1)

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


// Reference entry 103946b0; body size 28 bytes.
#line 1 "ENTRY_103946b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103946b0(undefined4 *param_1)

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


// Reference entry 103946e0; body size 28 bytes.
#line 1 "ENTRY_103946e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103946e0(undefined4 *param_1)

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


// Reference entry 10394710; body size 28 bytes.
#line 1 "ENTRY_10394710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394710(undefined4 *param_1)

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


// Reference entry 10394740; body size 28 bytes.
#line 1 "ENTRY_10394740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394740(undefined4 *param_1)

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


// Reference entry 10394770; body size 28 bytes.
#line 1 "ENTRY_10394770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394770(undefined4 *param_1)

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


// Reference entry 103947a0; body size 28 bytes.
#line 1 "ENTRY_103947a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103947a0(undefined4 *param_1)

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


// Reference entry 103947d0; body size 28 bytes.
#line 1 "ENTRY_103947d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103947d0(undefined4 *param_1)

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


// Reference entry 10394800; body size 28 bytes.
#line 1 "ENTRY_10394800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394800(undefined4 *param_1)

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


// Reference entry 10394830; body size 28 bytes.
#line 1 "ENTRY_10394830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394830(undefined4 *param_1)

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


// Reference entry 10394860; body size 28 bytes.
#line 1 "ENTRY_10394860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394860(undefined4 *param_1)

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


// Reference entry 10394890; body size 28 bytes.
#line 1 "ENTRY_10394890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394890(undefined4 *param_1)

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


// Reference entry 103948c0; body size 28 bytes.
#line 1 "ENTRY_103948c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103948c0(undefined4 *param_1)

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


// Reference entry 103948f0; body size 28 bytes.
#line 1 "ENTRY_103948f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103948f0(undefined4 *param_1)

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


// Reference entry 10394920; body size 28 bytes.
#line 1 "ENTRY_10394920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394920(undefined4 *param_1)

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


// Reference entry 10394950; body size 28 bytes.
#line 1 "ENTRY_10394950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394950(undefined4 *param_1)

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


// Reference entry 10394980; body size 28 bytes.
#line 1 "ENTRY_10394980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394980(undefined4 *param_1)

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


// Reference entry 103949b0; body size 28 bytes.
#line 1 "ENTRY_103949b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103949b0(undefined4 *param_1)

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


// Reference entry 103949e0; body size 28 bytes.
#line 1 "ENTRY_103949e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103949e0(undefined4 *param_1)

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


// Reference entry 10394a10; body size 28 bytes.
#line 1 "ENTRY_10394a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394a10(undefined4 *param_1)

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


// Reference entry 10394a40; body size 28 bytes.
#line 1 "ENTRY_10394a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394a40(undefined4 *param_1)

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


// Reference entry 10394a70; body size 28 bytes.
#line 1 "ENTRY_10394a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394a70(undefined4 *param_1)

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


// Reference entry 10394aa0; body size 28 bytes.
#line 1 "ENTRY_10394aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394aa0(undefined4 *param_1)

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


// Reference entry 10394ad0; body size 28 bytes.
#line 1 "ENTRY_10394ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394ad0(undefined4 *param_1)

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


// Reference entry 10394b00; body size 28 bytes.
#line 1 "ENTRY_10394b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394b00(undefined4 *param_1)

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


// Reference entry 10394b30; body size 28 bytes.
#line 1 "ENTRY_10394b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394b30(undefined4 *param_1)

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


// Reference entry 10394b60; body size 28 bytes.
#line 1 "ENTRY_10394b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394b60(undefined4 *param_1)

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


// Reference entry 10394b90; body size 28 bytes.
#line 1 "ENTRY_10394b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394b90(undefined4 *param_1)

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


// Reference entry 10394bc0; body size 28 bytes.
#line 1 "ENTRY_10394bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394bc0(undefined4 *param_1)

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


// Reference entry 10394bf0; body size 28 bytes.
#line 1 "ENTRY_10394bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394bf0(undefined4 *param_1)

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


// Reference entry 10394c20; body size 28 bytes.
#line 1 "ENTRY_10394c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394c20(undefined4 *param_1)

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


// Reference entry 10394c50; body size 28 bytes.
#line 1 "ENTRY_10394c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394c50(undefined4 *param_1)

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


// Reference entry 10394c80; body size 28 bytes.
#line 1 "ENTRY_10394c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394c80(undefined4 *param_1)

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


// Reference entry 10394cb0; body size 28 bytes.
#line 1 "ENTRY_10394cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394cb0(undefined4 *param_1)

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


// Reference entry 10394ce0; body size 28 bytes.
#line 1 "ENTRY_10394ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394ce0(undefined4 *param_1)

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


// Reference entry 10394d10; body size 28 bytes.
#line 1 "ENTRY_10394d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394d10(undefined4 *param_1)

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


// Reference entry 10394d40; body size 20 bytes.
#line 1 "ENTRY_10394d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394d40(int *param_1)

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


// Reference entry 10394d60; body size 20 bytes.
#line 1 "ENTRY_10394d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394d60(int *param_1)

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


// Reference entry 10394d80; body size 20 bytes.
#line 1 "ENTRY_10394d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394d80(int *param_1)

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


// Reference entry 10394da0; body size 20 bytes.
#line 1 "ENTRY_10394da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394da0(int *param_1)

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


// Reference entry 103952d0; body size 11 bytes.
#line 1 "ENTRY_103952d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103952d0(int param_1)

{
                    
                    
  (**(code **)(**(int **)(param_1 + 200) + 0x7c))();
  return;
}


// Reference entry 10395b70; body size 5 bytes.
#line 1 "ENTRY_10395b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10395b70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10395c90; body size 24 bytes.
#line 1 "ENTRY_10395c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10395c90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10395cb0; body size 24 bytes.
#line 1 "ENTRY_10395cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10395cb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10395d40; body size 240 bytes.
#line 1 "ENTRY_10395d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10395d40(undefined4 param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("deviceID",0));
  uVar4 = (undefined4)(param_2);
  (**(code **)(*piVar1 + 0xc))(param_2);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("model",0));
  uVar3 = (undefined4)(param_2);
  (**(code **)(*piVar1 + 0xc))(param_2);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("sonosid",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("householdid",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("osVer",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("softwareVer",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("systemVer",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  thunk_FUN_111c4880(uVar4,uVar3);
  uVar3 = (undefined4)(0x11);
  iVar2 = (int)(param_1 + 0xdbd1);
  thunk_FUN_1124ff50("software_downloadReturn");
  thunk_FUN_112503c0(iVar2,uVar3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 103967a0; body size 10 bytes.
#line 1 "ENTRY_103967a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103967a0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}


// Reference entry 103967b0; body size 10 bytes.
#line 1 "ENTRY_103967b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103967b0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}


// Reference entry 103967c0; body size 10 bytes.
#line 1 "ENTRY_103967c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103967c0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}


// Reference entry 103967d0; body size 10 bytes.
#line 1 "ENTRY_103967d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103967d0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}


// Reference entry 103967e0; body size 10 bytes.
#line 1 "ENTRY_103967e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103967e0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}


// Reference entry 10396810; body size 13 bytes.
#line 1 "ENTRY_10396810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10396810(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1 *)(param_1 + 0x6cc) = param_2;
  return;
}


// Reference entry 10397310; body size 12 bytes.
#line 1 "ENTRY_10397310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10397310(undefined2 param_2)
{
  int param_1 = (int )this;
  *(undefined2 *)(param_1 + 0x5c) = param_2;
  return;
}


// Reference entry 10397320; body size 10 bytes.
#line 1 "ENTRY_10397320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10397320(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}


// Reference entry 10397330; body size 11 bytes.
#line 1 "ENTRY_10397330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_10397330(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((uint3)(*(uint *)(param_1 + 0xd08) >> 9)) << 8 | (uint)((char)(*(uint *)(param_1 + 0xd08) >> 1)))
         & 0xffffff01);
}


// Reference entry 10398730; body size 11 bytes.
#line 1 "ENTRY_10398730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10398730(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(DAT_122e8a34 != 0);
}


// Reference entry 10398740; body size 4 bytes.
#line 1 "ENTRY_10398740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10398740(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 10398750; body size 9 bytes.
#line 1 "ENTRY_10398750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10398750(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10398760; body size 4 bytes.
#line 1 "ENTRY_10398760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10398760(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10398770; body size 4 bytes.
#line 1 "ENTRY_10398770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10398770(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10398780; body size 4 bytes.
#line 1 "ENTRY_10398780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10398780(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10398790; body size 9 bytes.
#line 1 "ENTRY_10398790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10398790(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 103987a0; body size 9 bytes.
#line 1 "ENTRY_103987a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103987a0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 10399400; body size 8 bytes.
#line 1 "ENTRY_10399400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10399400(int param_1)

{
                    
                    
  (**(code **)(**(int **)(param_1 + 4) + 0x14))();
  return;
}


// Reference entry 10399ea0; body size 21 bytes.
#line 1 "ENTRY_10399ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10399ea0(int *param_2)
{
  int param_1 = (int )this;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0x1c))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 1039a0f0; body size 17 bytes.
#line 1 "ENTRY_1039a0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_1039a0f0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x104) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x104));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(puVar1);
}


// Reference entry 1039a4c0; body size 8 bytes.
#line 1 "ENTRY_1039a4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1039a4c0(int param_1)

{
                    
                    
  (**(code **)(**(int **)(param_1 + 4) + 0x18))();
  return;
}


// Reference entry 1039a5a0; body size 21 bytes.
#line 1 "ENTRY_1039a5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1039a5a0(int *param_2)
{
  int param_1 = (int )this;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0x2c))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 1039a5c0; body size 24 bytes.
#line 1 "ENTRY_1039a5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1039a5c0(int param_2)
{
  int param_1 = (int )this;
  if (param_2 != 0) {
    (**(code **)(**(int **)(param_2 + 4) + 0x18))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 1039a990; body size 21 bytes.
#line 1 "ENTRY_1039a990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1039a990(int *param_2)
{
  int param_1 = (int )this;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0x20))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 1039b2f0; body size 304 bytes.
#line 1 "ENTRY_1039b2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1039b2f0(int param_1)

{
 try {
  int iVar1;
  char *pcVar2;
  bool bVar3;
  int *piStack_268;
  void *pvStack_264;
  undefined1 *puStack_260;
  undefined4 uStack_25c;
  undefined1 auStack_258 [488];
  int iStack_70;
  uint uStack_8;


  uStack_8 = (uint)(DAT_12126b84 ^ (uint)auStack_258);

  iVar1 = (int)((**(code **)(**(int **)(param_1 + 200) + 100))(uStack_8));
  thunk_FUN_11255220();

  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x28) + 4))(0x12f07,0,auStack_258);
  }
  bVar3 = (bool)(iStack_70 == 3);
  if (bVar3 != (bool)*(char *)(param_1 + 0x1130)) {
    *(bool *)(param_1 + 0x1130) = bVar3;
    pcVar2 = (char *)("true");
    if (!bVar3) {
      pcVar2 = (char *)("false");
    }
    thunk_FUN_112af4e0("SCHousehold",3,"hasRadioHD has changed to %s, invalidating logo cache",
                       pcVar2);
    if (DAT_122e8a34 != 0) {
      func_0x1006dccd(*(undefined1 *)(param_1 + 0x1130));
    }
    thunk_FUN_10cf1210();
    *(unsigned char *)((char *)&uStack_25c + 0) = 1;
    func_0x10015be0(*(undefined1 *)(param_1 + 0x1130));
    uStack_25c = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_25c + 1)) << 8 | (uint)(2)));
    if (piStack_268 != (int *)0x0) {
      (**(code **)(*piStack_268 + 8))();
    }
  }
  thunk_FUN_11255560();

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 1039ea00; body size 7 bytes.
#line 1 "ENTRY_1039ea00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1039ea00(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x548));
}


// Reference entry 1039ea10; body size 11 bytes.
#line 1 "ENTRY_1039ea10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1039ea10(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x570) != 0);
}


// Reference entry 1039ea60; body size 7 bytes.
#line 1 "ENTRY_1039ea60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1039ea60(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0xdbd1));
}


// Reference entry 1039ebc0; body size 7 bytes.
#line 1 "ENTRY_1039ebc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1039ebc0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x1430);
}


// Reference entry 1039ec00; body size 26 bytes.
#line 1 "ENTRY_1039ec00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_1039ec00(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 1039ec20; body size 26 bytes.
#line 1 "ENTRY_1039ec20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_1039ec20(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 1039ec40; body size 78 bytes.
#line 1 "ENTRY_1039ec40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_1039ec40(int *param_2)
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


// Reference entry 1039ecb0; body size 6 bytes.
#line 1 "ENTRY_1039ecb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1039ecb0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpAddServiceAccount");
}


// Reference entry 1039ecc0; body size 6 bytes.
#line 1 "ENTRY_1039ecc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1039ecc0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIServiceDescriptorInternals");
}


// Reference entry 1039edf0; body size 27 bytes.
#line 1 "ENTRY_1039edf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1039edf0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1039ee20; body size 27 bytes.
#line 1 "ENTRY_1039ee20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1039ee20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1039ee50; body size 27 bytes.
#line 1 "ENTRY_1039ee50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1039ee50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1039f180; body size 16 bytes.
#line 1 "ENTRY_1039f180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1039f180(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1039f1a0; body size 16 bytes.
#line 1 "ENTRY_1039f1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1039f1a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1039f1c0; body size 16 bytes.
#line 1 "ENTRY_1039f1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1039f1c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1039f240; body size 134 bytes.
#line 1 "ENTRY_1039f240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1039f240(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:SystemProperties:1","AddAccountX",uVar3,
                     param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpSPAddAccountXAIOOp);
  param_1[0x18] = (uint)&ghidra_vftable_RUpnpSPAddAccountXAIOOp;
  param_1[0x11b] = (uint)&ghidra_vftable_RUpnpSPAddAccountXAIOOp;
  *(undefined1 *)(param_1 + 0x35f4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1039f3a0; body size 9 bytes.
#line 1 "ENTRY_1039f3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1039f3a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpAddServiceAccount);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1039f3b0; body size 9 bytes.
#line 1 "ENTRY_1039f3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1039f3b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIServiceDescriptor);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1039f3c0; body size 9 bytes.
#line 1 "ENTRY_1039f3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1039f3c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIServiceDescriptorInternals);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1039f830; body size 11 bytes.
#line 1 "ENTRY_1039f830"

/* WARNING: Removing unreachable block_1039f830 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1039f830(undefined4 *param_1)

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


// Reference entry 1039f840; body size 11 bytes.
#line 1 "ENTRY_1039f840"

/* WARNING: Removing unreachable block_1039f840 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1039f840(undefined4 *param_1)

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


// Reference entry 1039fd00; body size 28 bytes.
#line 1 "ENTRY_1039fd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1039fd00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpSPAddAccountXAIOOp);
  param_1[0x18] = (uint)&ghidra_vftable_RUpnpSPAddAccountXAIOOp;
  param_1[0x11b] = (uint)&ghidra_vftable_RUpnpSPAddAccountXAIOOp;
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


// Reference entry 1039fd30; body size 28 bytes.
#line 1 "ENTRY_1039fd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1039fd30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpSPAddOAuthAccountXAIOOp);
  param_1[0x18] = (uint)&ghidra_vftable_RUpnpSPAddOAuthAccountXAIOOp;
  param_1[0x11b] = (uint)&ghidra_vftable_RUpnpSPAddOAuthAccountXAIOOp;
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


// Reference entry 1039fd60; body size 7 bytes.
#line 1 "ENTRY_1039fd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1039fd60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1039fd70; body size 7 bytes.
#line 1 "ENTRY_1039fd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1039fd70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1039fd80; body size 7 bytes.
#line 1 "ENTRY_1039fd80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1039fd80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1039fd90; body size 18 bytes.
#line 1 "ENTRY_1039fd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1039fd90(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAddAccountX);
  param_1[2] = (uint)&ghidra_vftable_SCOpAddAccountX;


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


// Reference entry 1039ffc0; body size 7 bytes.
#line 1 "ENTRY_1039ffc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1039ffc0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 1039ffd0; body size 3 bytes.
#line 1 "ENTRY_1039ffd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1039ffd0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 1039ffe0; body size 3 bytes.
#line 1 "ENTRY_1039ffe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1039ffe0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 1039fff0; body size 4 bytes.
#line 1 "ENTRY_1039fff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1039fff0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103a0000; body size 4 bytes.
#line 1 "ENTRY_103a0000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a0000(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103a0010; body size 3 bytes.
#line 1 "ENTRY_103a0010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a0010(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103a0820; body size 11 bytes.
#line 1 "ENTRY_103a0820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_103a0820(undefined4 param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0xa990));
  if (uVar1 < 0x10) {
    *(uint *)(param_1 + 0xa990) = uVar1 + 1;
  }
  else {
    uVar1 = (uint)(uVar1 - 1);
  }
  *(int *)(param_1 + 0xbb00) = *(int *)(param_1 + 0xbb00) + 1;
  iVar2 = (int)(uVar1 * 0x60 + param_1 + 0xa988);
  (**(code **)(*(int *)(iVar2 + 0x1180) + 4))(param_2);
  *(undefined1 *)(iVar2 + 0x11d4) = 0;
  *(int *)(iVar2 + 0x11d0) = param_1 + 0xb5e4;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar2 + 0x1180);
}


// Reference entry 103a0830; body size 11 bytes.
#line 1 "ENTRY_103a0830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_103a0830(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(*(uint *)(param_1 + 0xc10c));
  if (uVar2 < 0x10) {
    *(uint *)(param_1 + 0xc10c) = uVar2 + 1;
  }
  else {
    uVar2 = (uint)(uVar2 - 1);
  }
  *(int *)(param_1 + 0xc110) = *(int *)(param_1 + 0xc110) + 1;
  iVar1 = (int)(param_1 + 0xc108 + uVar2 * 0x38);
  (**(code **)(*(int *)(param_1 + 0xc3f0 + uVar2 * 0x38) + 4))(param_2);
  *(undefined1 *)(iVar1 + 0x31a) = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1 + 0x2e8);
}


// Reference entry 103a0980; body size 8 bytes.
#line 1 "ENTRY_103a0980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_103a0980(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x12d));
}


// Reference entry 103a13c0; body size 9 bytes.
#line 1 "ENTRY_103a13c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a13c0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 103a1530; body size 7 bytes.
#line 1 "ENTRY_103a1530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103a1530(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0xdbd0);
}


// Reference entry 103a15a0; body size 7 bytes.
#line 1 "ENTRY_103a15a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103a15a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0xd7d0);
}


// Reference entry 103a15b0; body size 7 bytes.
#line 1 "ENTRY_103a15b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103a15b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0xd7d0);
}


// Reference entry 103a18d0; body size 18 bytes.
#line 1 "ENTRY_103a18d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a18d0(int *param_1)

{
  if (*param_1 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1[1] + 0x134));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 103a2cc0; body size 57 bytes.
#line 1 "ENTRY_103a2cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a2cc0(void)

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


// Reference entry 103a2d10; body size 6 bytes.
#line 1 "ENTRY_103a2d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103a2d10(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpAddServiceAccount");
}


// Reference entry 103a2d20; body size 6 bytes.
#line 1 "ENTRY_103a2d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103a2d20(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIServiceDescriptorInternals");
}


// Reference entry 103a2eb0; body size 7 bytes.
#line 1 "ENTRY_103a2eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103a2eb0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 103a2ef0; body size 16 bytes.
#line 1 "ENTRY_103a2ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_103a2ef0(int *param_1)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = (uint)(in_EAX & 0xffffff00);
  if (*param_1 != 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
  }
  if (((*(char *)(param_1[1] + 0x12d) != '\x03') &&
      (uVar1 = *(uint *)(param_1[1] + 0x134), uVar1 != 0x12f)) && (uVar1 != 500)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1 & 0xffffff00);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)(1)));
}


// Reference entry 103a2f30; body size 21 bytes.
#line 1 "ENTRY_103a2f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_103a2f30(int *param_1)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = (uint)(in_EAX & 0xffffff00);
  if (*param_1 == 0) {
    uVar1 = (uint)(((uint)((int3)((uint)param_1[1] >> 8)) << 8 | (uint)(*(char *)(param_1[1] + 0x12d) == '\x02')));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 103a2f80; body size 11 bytes.
#line 1 "ENTRY_103a2f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103a2f80(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(char *)(param_1 + 0x12d) == '\x02');
}


// Reference entry 103a2fe0; body size 9 bytes.
#line 1 "ENTRY_103a2fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_103a2fe0(char param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(param_1 == '\a');
}


// Reference entry 103a30c0; body size 21 bytes.
#line 1 "ENTRY_103a30c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_103a30c0(int *param_1)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = (uint)(in_EAX & 0xffffff00);
  if (*param_1 == 0) {
    uVar1 = (uint)(((uint)((int3)((uint)param_1[1] >> 8)) << 8 | (uint)(*(char *)(param_1[1] + 0x12d) == '\x01')));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 103a3110; body size 11 bytes.
#line 1 "ENTRY_103a3110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103a3110(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(char *)(param_1 + 0x12d) == '\x01');
}


// Reference entry 103a3120; body size 9 bytes.
#line 1 "ENTRY_103a3120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_103a3120(char param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(param_1 == '\b');
}


// Reference entry 103a3510; body size 3 bytes.
#line 1 "ENTRY_103a3510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a3510(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103a3520; body size 3 bytes.
#line 1 "ENTRY_103a3520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a3520(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103a3c40; body size 28 bytes.
#line 1 "ENTRY_103a3c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103a3c40(undefined4 *param_1)

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


// Reference entry 103a3c70; body size 28 bytes.
#line 1 "ENTRY_103a3c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103a3c70(undefined4 *param_1)

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


// Reference entry 103a3ca0; body size 28 bytes.
#line 1 "ENTRY_103a3ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103a3ca0(undefined4 *param_1)

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


// Reference entry 103a4160; body size 7 bytes.
#line 1 "ENTRY_103a4160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a4160(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x134));
}


// Reference entry 103a4170; body size 14 bytes.
#line 1 "ENTRY_103a4170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_103a4170(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((uint3)(*(uint *)(param_1 + 0x130) >> 0x16)) << 8 | (uint)(~(byte)(*(uint *)(param_1 + 0x130) >> 0xe))) & 0xffffff01);
}


// Reference entry 103a4190; body size 24 bytes.
#line 1 "ENTRY_103a4190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_103a4190(int *param_1)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = (uint)(in_EAX & 0xffffff00);
  if (*param_1 == 0) {
    uVar1 = (uint)(((uint)((uint3)(*(uint *)(param_1[1] + 0x130) >> 0x16)) << 8 | (uint)(~(byte)(*(uint *)(param_1[1] + 0x130) >> 0xe))) & 0xffffff01);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 103a41c0; body size 18 bytes.
#line 1 "ENTRY_103a41c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a41c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a41e0; body size 39 bytes.
#line 1 "ENTRY_103a41e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a41e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a4210; body size 39 bytes.
#line 1 "ENTRY_103a4210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a4210(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a4240; body size 22 bytes.
#line 1 "ENTRY_103a4240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a4240(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a4260; body size 22 bytes.
#line 1 "ENTRY_103a4260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a4260(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a4280; body size 18 bytes.
#line 1 "ENTRY_103a4280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a4280(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a43a0; body size 22 bytes.
#line 1 "ENTRY_103a43a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a43a0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a43c0; body size 5 bytes.
#line 1 "ENTRY_103a43c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a43c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103a43d0; body size 5 bytes.
#line 1 "ENTRY_103a43d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a43d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103a4420; body size 91 bytes.
#line 1 "ENTRY_103a4420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_103a4420(int *param_2)
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


// Reference entry 103a4580; body size 91 bytes.
#line 1 "ENTRY_103a4580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_103a4580(int *param_2)
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


// Reference entry 103a4680; body size 5 bytes.
#line 1 "ENTRY_103a4680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a4680(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103a4690; body size 5 bytes.
#line 1 "ENTRY_103a4690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a4690(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103a46a0; body size 91 bytes.
#line 1 "ENTRY_103a46a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_103a46a0(int *param_2)
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


// Reference entry 103a4720; body size 26 bytes.
#line 1 "ENTRY_103a4720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_103a4720(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 103a4740; body size 78 bytes.
#line 1 "ENTRY_103a4740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_103a4740(int *param_2)
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


// Reference entry 103a47b0; body size 3 bytes.
#line 1 "ENTRY_103a47b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a47b0(void)

{
  return;
}


// Reference entry 103a47c0; body size 3 bytes.
#line 1 "ENTRY_103a47c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a47c0(void)

{
  return;
}


// Reference entry 103a47d0; body size 3 bytes.
#line 1 "ENTRY_103a47d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a47d0(void)

{
  return;
}


// Reference entry 103a47e0; body size 3 bytes.
#line 1 "ENTRY_103a47e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a47e0(void)

{
  return;
}


// Reference entry 103a47f0; body size 28 bytes.
#line 1 "ENTRY_103a47f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103a47f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(8));
  puVar1[1] = 0;
  *param_1 = (undefined4)(puVar1);
  *puVar1 = (undefined4)(param_1);
  return;
}


// Reference entry 103a4820; body size 25 bytes.
#line 1 "ENTRY_103a4820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4820(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 103a4840; body size 13 bytes.
#line 1 "ENTRY_103a4840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4840(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103a4850; body size 13 bytes.
#line 1 "ENTRY_103a4850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4850(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103a4860; body size 20 bytes.
#line 1 "ENTRY_103a4860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4860(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  param_1[1] = 0;
  return;
}


// Reference entry 103a4880; body size 123 bytes.
#line 1 "ENTRY_103a4880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4880(undefined4 *param_1,uint *param_2,int param_3,uint *param_4,int param_5,
                 uint *param_6,uint param_7)

{
  while( true ) {
    if ((param_2 == (uint *)(param_4)) && (param_3 == param_5)) break;
    if (param_5 == 0) {
      param_4 = (uint *)(param_4 + -1);
      param_5 = (int)(0x1f);
    }
    else {
      param_5 = (int)(param_5 + -1);
    }
    if (param_7 == 0) {
      param_6 = (uint *)(param_6 + -1);
      param_7 = (uint)(0x1f);
    }
    else {
      param_7 = (uint)(param_7 - 1);
    }
    if ((*param_4 & 1 << ((byte)param_5 & 0x1f)) == 0) {
      *param_6 = (uint)(*param_6 & ~(1 << (param_7 & 0x1f)));
    }
    else {
      *param_6 = (uint)(*param_6 | 1 << (param_7 & 0x1f));
    }
  }
  *param_1 = (undefined4)(param_6);
  param_1[1] = param_7;
  return;
}


// Reference entry 103a4920; body size 33 bytes.
#line 1 "ENTRY_103a4920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103a4920(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 103a4950; body size 33 bytes.
#line 1 "ENTRY_103a4950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103a4950(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 103a4980; body size 129 bytes.
#line 1 "ENTRY_103a4980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4980(undefined4 *param_1,uint *param_2,uint param_3,uint *param_4,uint param_5,
                 uint *param_6,uint param_7)

{
  uint uVar1;
  
  while ((param_2 != (uint *)(param_4) || (param_3 != param_5))) {
    if ((*param_2 & 1 << ((byte)param_3 & 0x1f)) == 0) {
      uVar1 = (uint)(*param_6 & ~(1 << (param_7 & 0x1f)));
    }
    else {
      uVar1 = (uint)(*param_6 | 1 << (param_7 & 0x1f));
    }
    *param_6 = (uint)(uVar1);
    if (param_7 < 0x1f) {
      param_7 = (uint)(param_7 + 1);
    }
    else {
      param_7 = (uint)(0);
      param_6 = (uint *)(param_6 + 1);
    }
    if (param_3 < 0x1f) {
      param_3 = (uint)(param_3 + 1);
    }
    else {
      param_2 = (uint *)(param_2 + 1);
      param_3 = (uint)(0);
    }
  }
  *param_1 = (undefined4)(param_6);
  param_1[1] = param_7;
  return;
}


// Reference entry 103a4a30; body size 15 bytes.
#line 1 "ENTRY_103a4a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4a30(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,8);
  return;
}


// Reference entry 103a4a50; body size 15 bytes.
#line 1 "ENTRY_103a4a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4a50(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,8);
  return;
}


// Reference entry 103a4a70; body size 3 bytes.
#line 1 "ENTRY_103a4a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4a70(void)

{
  return;
}


// Reference entry 103a4a80; body size 3 bytes.
#line 1 "ENTRY_103a4a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4a80(void)

{
  return;
}


// Reference entry 103a4a90; body size 3 bytes.
#line 1 "ENTRY_103a4a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4a90(void)

{
  return;
}


// Reference entry 103a4aa0; body size 3 bytes.
#line 1 "ENTRY_103a4aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4aa0(void)

{
  return;
}


// Reference entry 103a4ab0; body size 3 bytes.
#line 1 "ENTRY_103a4ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4ab0(void)

{
  return;
}


// Reference entry 103a4ac0; body size 18 bytes.
#line 1 "ENTRY_103a4ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103a4ac0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4 **)(param_1 + 4) = *param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}


// Reference entry 103a4e30; body size 191 bytes.
#line 1 "ENTRY_103a4e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4e30(uint *param_1,int param_2,uint *param_3,int param_4,char *param_5)

{
  char cVar1;
  int _Val;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((param_1 != (uint *)(param_3)) || (param_2 != param_4)) {
    uVar4 = (uint)(-1 << ((byte)param_2 & 0x1f));
    cVar1 = (char)(*param_5);
    if (param_1 == (uint *)(param_3)) {
      uVar2 = (uint)(0xffffffff >> (0x20U - (char)param_4 & 0x1f));
      uVar3 = (uint)(0);
      if (cVar1 != '\0') {
        uVar3 = (uint)(uVar2);
      }
      *param_1 = (uint)(uVar3 & uVar4 | (~uVar2 | ~uVar4) & *param_1);
      return;
    }
    uVar3 = (uint)(0);
    if (cVar1 != '\0') {
      uVar3 = (uint)(uVar4);
    }
    *param_1 = (uint)(uVar3 | *param_1 & ~uVar4);
    _Val = (int)(0);
    if (*param_5 != '\0') {
      _Val = (int)(0xff);
    }
    memset(param_1 + 1,_Val,(int)param_3 - (int)(param_1 + 1));
    if (param_4 != 0) {
      uVar3 = (uint)(0xffffffff >> (0x20U - (char)param_4 & 0x1f));
      uVar4 = (uint)(0);
      if (cVar1 != '\0') {
        uVar4 = (uint)(uVar3);
      }
      *param_3 = (uint)(~uVar3 & *param_3 | uVar4);
    }
  }
  return;
}


// Reference entry 103a4f20; body size 23 bytes.
#line 1 "ENTRY_103a4f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4f20(void *param_1,int param_2)

{
  memset(param_1,0,param_2 << 2);
  return;
}


// Reference entry 103a5000; body size 15 bytes.
#line 1 "ENTRY_103a5000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a5000(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 103a50c0; body size 5 bytes.
#line 1 "ENTRY_103a50c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a50c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103a50d0; body size 5 bytes.
#line 1 "ENTRY_103a50d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a50d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103a50e0; body size 7 bytes.
#line 1 "ENTRY_103a50e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a50e0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103a50f0; body size 7 bytes.
#line 1 "ENTRY_103a50f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a50f0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103a5100; body size 7 bytes.
#line 1 "ENTRY_103a5100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5100(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103a5110; body size 7 bytes.
#line 1 "ENTRY_103a5110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5110(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103a5120; body size 5 bytes.
#line 1 "ENTRY_103a5120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5120(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103a5130; body size 16 bytes.
#line 1 "ENTRY_103a5130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103a5130(int *param_1,int *param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_2 - *param_1 >> 2);
}


// Reference entry 103a5150; body size 16 bytes.
#line 1 "ENTRY_103a5150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103a5150(int *param_1,int *param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_2 - *param_1 >> 2);
}


// Reference entry 103a5170; body size 25 bytes.
#line 1 "ENTRY_103a5170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103a5170(int *param_1,int *param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(((*param_2 - *param_1 >> 2) * 0x20 - param_1[1]) + param_2[1]);
}


// Reference entry 103a5190; body size 24 bytes.
#line 1 "ENTRY_103a5190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5190(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*param_1 == 0)));
}


// Reference entry 103a51b0; body size 5 bytes.
#line 1 "ENTRY_103a51b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a51b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103a51c0; body size 37 bytes.
#line 1 "ENTRY_103a51c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a51c0(int param_1,SCStr *param_2)

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


// Reference entry 103a51f0; body size 33 bytes.
#line 1 "ENTRY_103a51f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103a51f0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 103a5220; body size 39 bytes.
#line 1 "ENTRY_103a5220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a5220(int *param_1,int param_2,uint param_3)

{
  if (param_3 < 0x1f) {
    *param_1 = (int)(param_2);
    param_1[1] = param_3 + 1;
    return;
  }
  *param_1 = (int)(param_2 + 4);
  param_1[1] = 0;
  return;
}


// Reference entry 103a5250; body size 19 bytes.
#line 1 "ENTRY_103a5250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a5250(undefined4 *param_1,undefined4 param_2,int param_3)

{
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_3 + -1;
  return;
}


// Reference entry 103a5270; body size 19 bytes.
#line 1 "ENTRY_103a5270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a5270(undefined4 *param_1,undefined4 param_2,int param_3)

{
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_3 + -1;
  return;
}


// Reference entry 103a5470; body size 13 bytes.
#line 1 "ENTRY_103a5470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a5470(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103a5480; body size 13 bytes.
#line 1 "ENTRY_103a5480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a5480(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103a5490; body size 19 bytes.
#line 1 "ENTRY_103a5490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a5490(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(param_2[1]);
  *param_1 = (undefined4)(*param_2);
  param_1[1] = uVar1;
  return;
}


// Reference entry 103a55f0; body size 5 bytes.
#line 1 "ENTRY_103a55f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a55f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103a5600; body size 5 bytes.
#line 1 "ENTRY_103a5600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5600(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103a5610; body size 5 bytes.
#line 1 "ENTRY_103a5610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5610(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103a5620; body size 86 bytes.
#line 1 "ENTRY_103a5620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_103a5620(int *param_1,int param_2,int *param_3)

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


// Reference entry 103a5690; body size 35 bytes.
#line 1 "ENTRY_103a5690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_103a5690(void *param_1,int param_2)

{
  memset(param_1,0,param_2 * 4);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)(param_2 * 4 + (int)param_1));
}


// Reference entry 103a56c0; body size 35 bytes.
#line 1 "ENTRY_103a56c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_103a56c0(void *param_1,int param_2)

{
  memset(param_1,0,param_2 * 4);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)(param_2 * 4 + (int)param_1));
}


// Reference entry 103a56f0; body size 5 bytes.
#line 1 "ENTRY_103a56f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a56f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103a5700; body size 5 bytes.
#line 1 "ENTRY_103a5700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5700(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103a5710; body size 27 bytes.
#line 1 "ENTRY_103a5710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103a5710(void *param_1,int param_2)

{
  memset(param_1,0,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_2);
}


// Reference entry 103a5740; body size 27 bytes.
#line 1 "ENTRY_103a5740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103a5740(void *param_1,int param_2)

{
  memset(param_1,0,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_2);
}


// Reference entry 103a5770; body size 5 bytes.
#line 1 "ENTRY_103a5770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5770(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103a5780; body size 5 bytes.
#line 1 "ENTRY_103a5780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5780(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103a5790; body size 5 bytes.
#line 1 "ENTRY_103a5790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5790(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103a57a0; body size 5 bytes.
#line 1 "ENTRY_103a57a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a57a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103a57b0; body size 5 bytes.
#line 1 "ENTRY_103a57b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a57b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103a57c0; body size 5 bytes.
#line 1 "ENTRY_103a57c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a57c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103a57d0; body size 5 bytes.
#line 1 "ENTRY_103a57d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a57d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103a57e0; body size 5 bytes.
#line 1 "ENTRY_103a57e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a57e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103a5880; body size 115 bytes.
#line 1 "ENTRY_103a5880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *
FUN_103a5880(undefined4 *param_1,uint *param_2,uint param_3,uint *param_4,uint param_5,uint *param_6
            ,uint param_7)

{
  uint uVar1;
  
  while ((param_2 != (uint *)(param_4) || (param_3 != param_5))) {
    if ((*param_2 & 1 << ((byte)param_3 & 0x1f)) == 0) {
      uVar1 = (uint)(*param_6 & ~(1 << (param_7 & 0x1f)));
    }
    else {
      uVar1 = (uint)(*param_6 | 1 << (param_7 & 0x1f));
    }
    *param_6 = (uint)(uVar1);
    if (param_7 < 0x1f) {
      param_7 = (uint)(param_7 + 1);
    }
    else {
      param_7 = (uint)(0);
      param_6 = (uint *)(param_6 + 1);
    }
    if (param_3 < 0x1f) {
      param_3 = (uint)(param_3 + 1);
    }
    else {
      param_3 = (uint)(0);
      param_2 = (uint *)(param_2 + 1);
    }
  }
  *param_1 = (undefined4)(param_6);
  param_1[1] = param_7;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a5910; body size 125 bytes.
#line 1 "ENTRY_103a5910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *
FUN_103a5910(undefined4 *param_1,uint *param_2,int param_3,uint *param_4,int param_5,uint *param_6,
            uint param_7)

{
  while ((param_2 != (uint *)(param_4) || (param_3 != param_5))) {
    if (param_5 == 0) {
      param_5 = (int)(0x1f);
      param_4 = (uint *)(param_4 + -1);
    }
    else {
      param_5 = (int)(param_5 + -1);
    }
    if (param_7 == 0) {
      param_7 = (uint)(0x1f);
      param_6 = (uint *)(param_6 + -1);
    }
    else {
      param_7 = (uint)(param_7 - 1);
    }
    if ((*param_4 & 1 << ((byte)param_5 & 0x1f)) == 0) {
      *param_6 = (uint)(*param_6 & ~(1 << (param_7 & 0x1f)));
    }
    else {
      *param_6 = (uint)(*param_6 | 1 << (param_7 & 0x1f));
    }
  }
  *param_1 = (undefined4)(param_6);
  param_1[1] = param_7;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a5ab0; body size 86 bytes.
#line 1 "ENTRY_103a5ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103a5ab0(int *param_1,int *param_2)

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


// Reference entry 103a5b20; body size 15 bytes.
#line 1 "ENTRY_103a5b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5b20(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 103a5b40; body size 15 bytes.
#line 1 "ENTRY_103a5b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5b40(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 103a5b60; body size 15 bytes.
#line 1 "ENTRY_103a5b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5b60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 103a5b80; body size 211 bytes.
#line 1 "ENTRY_103a5b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a5b80(uint *param_1,int param_2,uint *param_3,int param_4,char *param_5)

{
  char cVar1;
  int _Val;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((param_1 != (uint *)(param_3)) || (param_2 != param_4)) {
    uVar2 = (uint)(-1 << ((byte)param_2 & 0x1f));
    cVar1 = (char)(*param_5);
    if (param_1 == (uint *)(param_3)) {
      uVar3 = (uint)(0xffffffff >> (0x20U - (char)param_4 & 0x1f));
      uVar4 = (uint)(0);
      if (cVar1 != '\0') {
        uVar4 = (uint)(uVar3);
      }
      *param_1 = (uint)(uVar4 & uVar2 | (~uVar3 | ~uVar2) & *param_1);
      return;
    }
    uVar4 = (uint)(0);
    if (cVar1 != '\0') {
      uVar4 = (uint)(uVar2);
    }
    *param_1 = (uint)(uVar4 | *param_1 & ~uVar2);
    _Val = (int)(0);
    if (*param_5 != '\0') {
      _Val = (int)(0xff);
    }
    memset(param_1 + 1,_Val,(int)param_3 - (int)(param_1 + 1));
    if (param_4 != 0) {
      uVar4 = (uint)(0xffffffff >> (0x20U - (char)param_4 & 0x1f));
      uVar2 = (uint)(0);
      if (cVar1 != '\0') {
        uVar2 = (uint)(uVar4);
      }
      *param_3 = (uint)(uVar2 | ~uVar4 & *param_3);
    }
  }
  return;
}


// Reference entry 103a5c90; body size 5 bytes.
#line 1 "ENTRY_103a5c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5c90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103a5ca0; body size 5 bytes.
#line 1 "ENTRY_103a5ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5ca0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103a5cb0; body size 5 bytes.
#line 1 "ENTRY_103a5cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5cb0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103a5cc0; body size 5 bytes.
#line 1 "ENTRY_103a5cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5cc0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103a5cd0; body size 5 bytes.
#line 1 "ENTRY_103a5cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5cd0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103a5ce0; body size 5 bytes.
#line 1 "ENTRY_103a5ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5ce0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103a5cf0; body size 5 bytes.
#line 1 "ENTRY_103a5cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5cf0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103a5d00; body size 5 bytes.
#line 1 "ENTRY_103a5d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5d00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103a5d10; body size 6 bytes.
#line 1 "ENTRY_103a5d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103a5d10(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIBrowseStackManager");
}


// Reference entry 103a5d20; body size 6 bytes.
#line 1 "ENTRY_103a5d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103a5d20(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIStackedItemImpl");
}


// Reference entry 103a5d30; body size 33 bytes.
#line 1 "ENTRY_103a5d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103a5d30(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 103a5d60; body size 33 bytes.
#line 1 "ENTRY_103a5d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103a5d60(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 103a5d90; body size 27 bytes.
#line 1 "ENTRY_103a5d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a5d90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a5dc0; body size 16 bytes.
#line 1 "ENTRY_103a5dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a5dc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a5e20; body size 16 bytes.
#line 1 "ENTRY_103a5e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a5e20(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a5ec0; body size 16 bytes.
#line 1 "ENTRY_103a5ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a5ec0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a6080; body size 18 bytes.
#line 1 "ENTRY_103a6080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a6080(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a60a0; body size 18 bytes.
#line 1 "ENTRY_103a60a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a60a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  param_1[1] = param_2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a60c0; body size 18 bytes.
#line 1 "ENTRY_103a60c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a60c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  param_1[1] = param_2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a60e0; body size 18 bytes.
#line 1 "ENTRY_103a60e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a60e0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  param_1[1] = param_2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a6100; body size 18 bytes.
#line 1 "ENTRY_103a6100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a6100(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  param_1[1] = param_2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a6120; body size 37 bytes.
#line 1 "ENTRY_103a6120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a6120(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a6150; body size 37 bytes.
#line 1 "ENTRY_103a6150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a6150(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a61c0; body size 11 bytes.
#line 1 "ENTRY_103a61c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a61c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a61d0; body size 11 bytes.
#line 1 "ENTRY_103a61d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a61d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a6260; body size 11 bytes.
#line 1 "ENTRY_103a6260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a6260(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a6270; body size 11 bytes.
#line 1 "ENTRY_103a6270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a6270(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a6280; body size 16 bytes.
#line 1 "ENTRY_103a6280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a6280(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a62a0; body size 21 bytes.
#line 1 "ENTRY_103a62a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a62a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a62c0; body size 18 bytes.
#line 1 "ENTRY_103a62c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a62c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a62e0; body size 18 bytes.
#line 1 "ENTRY_103a62e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a62e0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a6300; body size 18 bytes.
#line 1 "ENTRY_103a6300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a6300(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a6320; body size 19 bytes.
#line 1 "ENTRY_103a6320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a6320(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(param_2[1]);
  *param_1 = (undefined4)(*param_2);
  param_1[1] = uVar1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a6340; body size 30 bytes.
#line 1 "ENTRY_103a6340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a6340(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a6370; body size 11 bytes.
#line 1 "ENTRY_103a6370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a6370(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a6380; body size 11 bytes.
#line 1 "ENTRY_103a6380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a6380(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a6390; body size 3 bytes.
#line 1 "ENTRY_103a6390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a6390(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103a63a0; body size 3 bytes.
#line 1 "ENTRY_103a63a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a63a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103a6450; body size 52 bytes.
#line 1 "ENTRY_103a6450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a6450(undefined4 *param_1)

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


// Reference entry 103a65c0; body size 30 bytes.
#line 1 "ENTRY_103a65c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a65c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a7010; body size 42 bytes.
#line 1 "ENTRY_103a7010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a7010(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBrowseStackManagerEventSinkInternal);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a7050; body size 151 bytes.
#line 1 "ENTRY_103a7050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a7050(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10d08960(param_2,param_3,param_4,param_5,param_6,param_7);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCContentRootPageDataSource);
  param_1[2] = (uint)&ghidra_vftable_SCContentRootPageDataSource;
  param_1[10] = (uint)&ghidra_vftable_SCContentRootPageDataSource;
  param_1[0x20] = (uint)&ghidra_vftable_SCContentRootPageDataSource;
  param_1[0x21] = (uint)&ghidra_vftable_SCContentRootPageDataSource;
  param_1[0x22] = (uint)&ghidra_vftable_SCContentRootPageDataSource;
  param_1[0x23] = (uint)&ghidra_vftable_SCContentRootPageDataSource;
  param_1[0x24] = (uint)&ghidra_vftable_SCContentRootPageDataSource;
  param_1[0x25] = (uint)&ghidra_vftable_SCContentRootPageDataSource;
  param_1[0x94] = (uint)&ghidra_vftable_SCContentRootPageDataSource;
  param_1[0x96] = (uint)&ghidra_vftable_SCContentRootPageDataSource;
  *(undefined1 *)((int)param_1 + 0x275) = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a7110; body size 33 bytes.
#line 1 "ENTRY_103a7110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a7110(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCContentSessionCallback);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a7140; body size 9 bytes.
#line 1 "ENTRY_103a7140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a7140(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIBrowseStackManager);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a7300; body size 150 bytes.
#line 1 "ENTRY_103a7300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a7300(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10200150(param_2,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLastFMBrowseDataSource);
  param_1[2] = (uint)&ghidra_vftable_SCLastFMBrowseDataSource;
  param_1[10] = (uint)&ghidra_vftable_SCLastFMBrowseDataSource;
  param_1[0x20] = (uint)&ghidra_vftable_SCLastFMBrowseDataSource;
  param_1[0x21] = (uint)&ghidra_vftable_SCLastFMBrowseDataSource;
  param_1[0x22] = (uint)&ghidra_vftable_SCLastFMBrowseDataSource;
  param_1[0x23] = (uint)&ghidra_vftable_SCLastFMBrowseDataSource;
  param_1[0x24] = (uint)&ghidra_vftable_SCLastFMBrowseDataSource;
  param_1[0x25] = (uint)&ghidra_vftable_SCLastFMBrowseDataSource;
  param_1[0x94] = (uint)&ghidra_vftable_SCLastFMBrowseDataSource;
  param_1[0x95] = (uint)&ghidra_vftable_SCLastFMBrowseDataSource;
  param_1[0x96] = (uint)&ghidra_vftable_SCLastFMBrowseDataSource;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a7660; body size 9 bytes.
#line 1 "ENTRY_103a7660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a7660(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a7670; body size 18 bytes.
#line 1 "ENTRY_103a7670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a7670(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a7bb0; body size 3 bytes.
#line 1 "ENTRY_103a7bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a7bb0(void)

{
  return;
}


// Reference entry 103a7fb0; body size 5 bytes.
#line 1 "ENTRY_103a7fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103a7fb0(undefined4 *param_1)

{
 try {
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar3 = (uint)(DAT_12126b84);

  iVar7 = (int)(param_1[4]);
  if (iVar7 != 0) {
    do {
      uVar5 = (uint)(param_1[3] + -1 + iVar7);
      uVar6 = (uint)(uVar5 & 1);
      iVar4 = (int)(*(int *)(param_1[1] + (param_1[2] - 1 & uVar5 >> 1) * 4));
      piVar1 = (int *)(*(int **)(iVar4 + 4 + uVar6 * 8));

      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(iVar4 + uVar6 * 8) = 0;
        *(undefined4 *)(iVar4 + 4 + uVar6 * 8) = 0;
        (**(code **)(*piVar1 + 8))(uVar3);
        iVar7 = (int)(param_1[4]);
      }
      iVar7 = (int)(iVar7 + -1);
      param_1[4] = iVar7;
    } while (iVar7 != 0);
    param_1[3] = 0;
  }

  iVar7 = (int)(param_1[2]);
  while (iVar7 != 0) {
    iVar7 = (int)(iVar7 + -1);
    iVar4 = (int)(*(int *)(param_1[1] + iVar7 * 4));
    if (iVar4 != 0) {
      thunk_FUN_1148a50e(iVar4,0x10);
    }
  }
  iVar7 = (int)(param_1[1]);
  if (iVar7 != 0) {
    uVar3 = (uint)(param_1[2] * 4);
    iVar4 = (int)(iVar7);
    if (0xfff < uVar3) {
      iVar4 = (int)(*(int *)(iVar7 + -4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (iVar7 - iVar4) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar3);
  }
  uVar2 = (undefined4)(*param_1);
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = (undefined4)(0);
  thunk_FUN_1148a50e(uVar2,8);

  return;

 } catch (...) { }
}


// Reference entry 103a8680; body size 19 bytes.
#line 1 "ENTRY_103a8680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103a8680(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 103a86a0; body size 105 bytes.
#line 1 "ENTRY_103a86a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103a86a0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCContentRootPageDataSource);
  param_1[2] = (uint)&ghidra_vftable_SCContentRootPageDataSource;
  param_1[10] = (uint)&ghidra_vftable_SCContentRootPageDataSource;
  param_1[0x20] = (uint)&ghidra_vftable_SCContentRootPageDataSource;
  param_1[0x21] = (uint)&ghidra_vftable_SCContentRootPageDataSource;
  param_1[0x22] = (uint)&ghidra_vftable_SCContentRootPageDataSource;
  param_1[0x23] = (uint)&ghidra_vftable_SCContentRootPageDataSource;
  param_1[0x24] = (uint)&ghidra_vftable_SCContentRootPageDataSource;
  param_1[0x25] = (uint)&ghidra_vftable_SCContentRootPageDataSource;
  param_1[0x94] = (uint)&ghidra_vftable_SCContentRootPageDataSource;
  param_1[0x96] = (uint)&ghidra_vftable_SCContentRootPageDataSource;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCContentPageDataSource);
  param_1[2] = (uint)&ghidra_vftable_SCContentPageDataSource;
  param_1[10] = (uint)&ghidra_vftable_SCContentPageDataSource;
  param_1[0x20] = (uint)&ghidra_vftable_SCContentPageDataSource;
  param_1[0x21] = (uint)&ghidra_vftable_SCContentPageDataSource;
  param_1[0x22] = (uint)&ghidra_vftable_SCContentPageDataSource;
  param_1[0x23] = (uint)&ghidra_vftable_SCContentPageDataSource;
  param_1[0x24] = (uint)&ghidra_vftable_SCContentPageDataSource;
  param_1[0x25] = (uint)&ghidra_vftable_SCContentPageDataSource;
  param_1[0x94] = (uint)&ghidra_vftable_SCContentPageDataSource;
  param_1[0x96] = (uint)&ghidra_vftable_SCContentPageDataSource;
  if (param_1[0xac] != 0) {
    piVar1 = (int *)((int *)param_1[0xad]);
    if (piVar1 != (int *)0x0) {
      param_1[0xac] = 0;
      param_1[0xad] = 0;
      (**(code **)(*piVar1 + 8))(uVar2);
    }
    param_1[0xac] = 0;
    param_1[0xad] = 0;
  }
  if (param_1[0xae] != 0) {
    piVar1 = (int *)((int *)param_1[0xaf]);
    if (piVar1 != (int *)0x0) {
      param_1[0xae] = 0;
      param_1[0xaf] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    param_1[0xae] = 0;
    param_1[0xaf] = 0;
  }
  thunk_FUN_1059d940(param_1[0x9f]);
  piVar1 = (int *)((int *)param_1[0xb7]);

  if (piVar1 != (int *)0x0) {
    param_1[0xb6] = 0;
    param_1[0xb7] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0xb5]);

  if (piVar1 != (int *)0x0) {
    param_1[0xb4] = 0;
    param_1[0xb5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0xb3]);

  if (piVar1 != (int *)0x0) {
    param_1[0xb2] = 0;
    param_1[0xb3] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0xb1]);

  if (piVar1 != (int *)0x0) {
    param_1[0xb0] = 0;
    param_1[0xb1] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0xaf]);

  if (piVar1 != (int *)0x0) {
    param_1[0xae] = 0;
    param_1[0xaf] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0xad]);

  if (piVar1 != (int *)0x0) {
    param_1[0xac] = 0;
    param_1[0xad] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0xab]);

  if (piVar1 != (int *)0x0) {
    param_1[0xaa] = 0;
    param_1[0xab] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_10120220();

  param_1[0x96] = (uint)&ghidra_vftable_SCTimerUser;
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[0x94] = (uint)&ghidra_vftable_SCIObjImpl;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[0x94] = (uint)&ghidra_vftable_SCIObj;
  thunk_FUN_10203970();

  return;

 } catch (...) { }
}


// Reference entry 103a8750; body size 7 bytes.
#line 1 "ENTRY_103a8750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103a8750(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 103a8760; body size 115 bytes.
#line 1 "ENTRY_103a8760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103a8760(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIndexedShareDataSource);
  param_1[2] = (uint)&ghidra_vftable_SCIndexedShareDataSource;
  param_1[10] = (uint)&ghidra_vftable_SCIndexedShareDataSource;
  param_1[0x20] = (uint)&ghidra_vftable_SCIndexedShareDataSource;
  param_1[0x21] = (uint)&ghidra_vftable_SCIndexedShareDataSource;
  param_1[0x22] = (uint)&ghidra_vftable_SCIndexedShareDataSource;
  param_1[0x23] = (uint)&ghidra_vftable_SCIndexedShareDataSource;
  param_1[0x24] = (uint)&ghidra_vftable_SCIndexedShareDataSource;
  param_1[0x25] = (uint)&ghidra_vftable_SCIndexedShareDataSource;
  param_1[0x94] = (uint)&ghidra_vftable_SCIndexedShareDataSource;
  param_1[0x95] = (uint)&ghidra_vftable_SCIndexedShareDataSource;
  param_1[0x96] = (uint)&ghidra_vftable_SCIndexedShareDataSource;


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


// Reference entry 103a87f0; body size 115 bytes.
#line 1 "ENTRY_103a87f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103a87f0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLastFMBrowseDataSource);
  param_1[2] = (uint)&ghidra_vftable_SCLastFMBrowseDataSource;
  param_1[10] = (uint)&ghidra_vftable_SCLastFMBrowseDataSource;
  param_1[0x20] = (uint)&ghidra_vftable_SCLastFMBrowseDataSource;
  param_1[0x21] = (uint)&ghidra_vftable_SCLastFMBrowseDataSource;
  param_1[0x22] = (uint)&ghidra_vftable_SCLastFMBrowseDataSource;
  param_1[0x23] = (uint)&ghidra_vftable_SCLastFMBrowseDataSource;
  param_1[0x24] = (uint)&ghidra_vftable_SCLastFMBrowseDataSource;
  param_1[0x25] = (uint)&ghidra_vftable_SCLastFMBrowseDataSource;
  param_1[0x94] = (uint)&ghidra_vftable_SCLastFMBrowseDataSource;
  param_1[0x95] = (uint)&ghidra_vftable_SCLastFMBrowseDataSource;
  param_1[0x96] = (uint)&ghidra_vftable_SCLastFMBrowseDataSource;


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


// Reference entry 103a8ac0; body size 65 bytes.
#line 1 "ENTRY_103a8ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_103a8ac0(int *param_2)
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


// Reference entry 103a8b20; body size 59 bytes.
#line 1 "ENTRY_103a8b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a8b20(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint *puVar1;
  
  puVar1 = (uint *)((uint *)*param_1);
  if ((*(uint *)*param_2 & 1 << ((byte)param_2[1] & 0x1f)) != 0) {
    *puVar1 = (uint)(*puVar1 | 1 << (param_1[1] & 0x1f));
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
  }
  *puVar1 = (uint)(*puVar1 & ~(1 << (param_1[1] & 0x1f)));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a8b70; body size 37 bytes.
#line 1 "ENTRY_103a8b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a8b70(char param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint *puVar1;
  
  puVar1 = (uint *)((uint *)*param_1);
  if (param_2 != '\0') {
    *puVar1 = (uint)(*puVar1 | 1 << (param_1[1] & 0x1f));
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
  }
  *puVar1 = (uint)(*puVar1 & ~(1 << (param_1[1] & 0x1f)));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103a8c10; body size 14 bytes.
#line 1 "ENTRY_103a8c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_103a8c10(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 103a8c30; body size 14 bytes.
#line 1 "ENTRY_103a8c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_103a8c30(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 103a8d90; body size 31 bytes.
#line 1 "ENTRY_103a8d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103a8d90(int *param_2,uint param_3)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  param_2[1] = param_3 & 0x1f;
  *param_2 = (int)(iVar1 + (param_3 >> 5) * 4);
  return;
}


// Reference entry 103a8dc0; body size 3 bytes.
#line 1 "ENTRY_103a8dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a8dc0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103a8dd0; body size 7 bytes.
#line 1 "ENTRY_103a8dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103a8dd0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 103a8de0; body size 3 bytes.
#line 1 "ENTRY_103a8de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a8de0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103a8df0; body size 7 bytes.
#line 1 "ENTRY_103a8df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103a8df0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 103a8e00; body size 3 bytes.
#line 1 "ENTRY_103a8e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a8e00(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103a8e10; body size 7 bytes.
#line 1 "ENTRY_103a8e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103a8e10(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 103a8e20; body size 7 bytes.
#line 1 "ENTRY_103a8e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103a8e20(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 103a8e30; body size 20 bytes.
#line 1 "ENTRY_103a8e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a8e30(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)((*(uint *)*param_1 & 1 << ((byte)param_1[1] & 0x1f)) != 0)));
}


// Reference entry 103a8e50; body size 3 bytes.
#line 1 "ENTRY_103a8e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a8e50(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103a8e60; body size 3 bytes.
#line 1 "ENTRY_103a8e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a8e60(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103a8e70; body size 3 bytes.
#line 1 "ENTRY_103a8e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a8e70(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103a8e80; body size 3 bytes.
#line 1 "ENTRY_103a8e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a8e80(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103a8e90; body size 30 bytes.
#line 1 "ENTRY_103a8e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103a8e90(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*(int *)(*(int *)(*param_1 + 4) + (*(int *)(*param_1 + 8) - 1U & (uint)param_1[1] >> 1) * 4
                 ) + (param_1[1] & 1U) * 8);
}


// Reference entry 103a8ec0; body size 31 bytes.
#line 1 "ENTRY_103a8ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103a8ec0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*(int *)(*(int *)(*param_1 + 4) + (*(int *)(*param_1 + 8) - 1U & (uint)param_1[1] >> 2) * 4
                 ) + (param_1[1] & 3U) * 4);
}


// Reference entry 103a8ef0; body size 30 bytes.
#line 1 "ENTRY_103a8ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103a8ef0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*(int *)(*(int *)(*param_1 + 4) + (*(int *)(*param_1 + 8) - 1U & (uint)param_1[1] >> 1) * 4
                 ) + (param_1[1] & 1U) * 8);
}


// Reference entry 103a8f20; body size 31 bytes.
#line 1 "ENTRY_103a8f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103a8f20(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*(int *)(*(int *)(*param_1 + 4) + (*(int *)(*param_1 + 8) - 1U & (uint)param_1[1] >> 2) * 4
                 ) + (param_1[1] & 3U) * 4);
}


// Reference entry 103a8f50; body size 17 bytes.
#line 1 "ENTRY_103a8f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103a8f50(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(param_1[1]);
  *param_2 = (undefined4)(*param_1);
  param_2[1] = uVar1;
  return;
}


// Reference entry 103a9000; body size 28 bytes.
#line 1 "ENTRY_103a9000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_103a9000(int *param_1)

{
  if ((uint)param_1[1] < 0x1f) {
    param_1[1] = param_1[1] + 1;
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
  }
  *param_1 = (int)(*param_1 + 4);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 103a9030; body size 28 bytes.
#line 1 "ENTRY_103a9030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_103a9030(int *param_1)

{
  if ((uint)param_1[1] < 0x1f) {
    param_1[1] = param_1[1] + 1;
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
  }
  *param_1 = (int)(*param_1 + 4);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 103a9060; body size 6 bytes.
#line 1 "ENTRY_103a9060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103a9060(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 103a9070; body size 6 bytes.
#line 1 "ENTRY_103a9070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103a9070(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 103a9080; body size 6 bytes.
#line 1 "ENTRY_103a9080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103a9080(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 103a9090; body size 6 bytes.
#line 1 "ENTRY_103a9090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103a9090(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 103a90a0; body size 27 bytes.
#line 1 "ENTRY_103a90a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_103a90a0(int *param_1)

{
  if (param_1[1] != 0) {
    param_1[1] = param_1[1] + -1;
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
  }
  *param_1 = (int)(*param_1 + -4);
  param_1[1] = 0x1f;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 103a90d0; body size 27 bytes.
#line 1 "ENTRY_103a90d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_103a90d0(int *param_1)

{
  if (param_1[1] != 0) {
    param_1[1] = param_1[1] + -1;
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
  }
  *param_1 = (int)(*param_1 + -4);
  param_1[1] = 0x1f;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 103a9100; body size 23 bytes.
#line 1 "ENTRY_103a9100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_103a9100(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(((*param_1 - *param_2 >> 2) * 0x20 - param_2[1]) + param_1[1]);
}


// Reference entry 103a9220; body size 18 bytes.
#line 1 "ENTRY_103a9220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103a9220(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 4);
  return;
}


// Reference entry 103a92d0; body size 14 bytes.
#line 1 "ENTRY_103a92d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_103a92d0(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 4);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 103a92f0; body size 14 bytes.
#line 1 "ENTRY_103a92f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_103a92f0(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 4);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 103a9310; body size 15 bytes.
#line 1 "ENTRY_103a9310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_103a9310(uint param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)(-param_2);
  if ((iVar1 < 0) && ((uint)param_1[1] < param_2)) {
    uVar2 = (uint)(param_1[1] + iVar1);
    param_1[1] = uVar2;
    *param_1 = (int)(*param_1 + (~uVar2 >> 5) * -4 + -4);
    param_1[1] = uVar2 & 0x1f;
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
  }
  uVar2 = (uint)(param_1[1] + iVar1);
  param_1[1] = uVar2;
  *param_1 = (int)(*param_1 + (uVar2 >> 5) * 4);
  param_1[1] = uVar2 & 0x1f;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 103a9330; body size 21 bytes.
#line 1 "ENTRY_103a9330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_103a9330(int param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103a9240(-param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103aa020; body size 26 bytes.
#line 1 "ENTRY_103aa020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103aa020(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + ((uint)(param_1[1] + param_2) >> 5) * 4);
  param_1[1] = param_1[1] + param_2 & 0x1f;
  return;
}


// Reference entry 103aa040; body size 31 bytes.
#line 1 "ENTRY_103aa040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103aa040(undefined4 *param_1)

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


// Reference entry 103aa0b0; body size 3 bytes.
#line 1 "ENTRY_103aa0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103aa0b0(void)

{
  return;
}


// Reference entry 103aa0c0; body size 23 bytes.
#line 1 "ENTRY_103aa0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103aa0c0(int *param_1)

{
  if (param_1[1] != 0) {
    param_1[1] = param_1[1] + -1;
    return;
  }
  *param_1 = (int)(*param_1 + -4);
  param_1[1] = 0x1f;
  return;
}


// Reference entry 103aa640; body size 3 bytes.
#line 1 "ENTRY_103aa640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa640(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103aa650; body size 3 bytes.
#line 1 "ENTRY_103aa650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa650(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103aa660; body size 3 bytes.
#line 1 "ENTRY_103aa660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa660(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103aa670; body size 3 bytes.
#line 1 "ENTRY_103aa670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa670(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103aa680; body size 3 bytes.
#line 1 "ENTRY_103aa680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa680(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103aa690; body size 3 bytes.
#line 1 "ENTRY_103aa690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa690(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103aa6a0; body size 3 bytes.
#line 1 "ENTRY_103aa6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa6a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103aa6b0; body size 3 bytes.
#line 1 "ENTRY_103aa6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa6b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103aa6c0; body size 3 bytes.
#line 1 "ENTRY_103aa6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa6c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103aa6d0; body size 3 bytes.
#line 1 "ENTRY_103aa6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa6d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103aa6e0; body size 3 bytes.
#line 1 "ENTRY_103aa6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa6e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103aa6f0; body size 3 bytes.
#line 1 "ENTRY_103aa6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa6f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103aa700; body size 3 bytes.
#line 1 "ENTRY_103aa700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa700(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103aa710; body size 3 bytes.
#line 1 "ENTRY_103aa710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa710(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103aa720; body size 3 bytes.
#line 1 "ENTRY_103aa720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa720(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103aa730; body size 3 bytes.
#line 1 "ENTRY_103aa730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa730(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103aa740; body size 3 bytes.
#line 1 "ENTRY_103aa740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa740(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103aa750; body size 3 bytes.
#line 1 "ENTRY_103aa750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa750(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103aa760; body size 3 bytes.
#line 1 "ENTRY_103aa760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa760(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103aa770; body size 15 bytes.
#line 1 "ENTRY_103aa770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_103aa770(uint param_2)
{
  int param_1 = (int )this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(int *)(param_1 + 8) - 1U & param_2 >> 1);
}


// Reference entry 103aa790; body size 16 bytes.
#line 1 "ENTRY_103aa790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_103aa790(uint param_2)
{
  int param_1 = (int )this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(int *)(param_1 + 8) - 1U & param_2 >> 2);
}


// Reference entry 103aa7b0; body size 15 bytes.
#line 1 "ENTRY_103aa7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_103aa7b0(uint param_2)
{
  int param_1 = (int )this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(int *)(param_1 + 8) - 1U & param_2 >> 1);
}


// Reference entry 103aa7d0; body size 16 bytes.
#line 1 "ENTRY_103aa7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_103aa7d0(uint param_2)
{
  int param_1 = (int )this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(int *)(param_1 + 8) - 1U & param_2 >> 2);
}


// Reference entry 103aa7f0; body size 3 bytes.
#line 1 "ENTRY_103aa7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa7f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103aa800; body size 3 bytes.
#line 1 "ENTRY_103aa800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa800(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103aac10; body size 24 bytes.
#line 1 "ENTRY_103aac10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103aac10(int *param_1)

{
  if ((uint)param_1[1] < 0x1f) {
    param_1[1] = param_1[1] + 1;
    return;
  }
  *param_1 = (int)(*param_1 + 4);
  param_1[1] = 0;
  return;
}


// Reference entry 103ab3f0; body size 52 bytes.
#line 1 "ENTRY_103ab3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_103ab3f0(int *param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1);
  param_2[1] = 0;
  if (param_1[3] != 0) {
    thunk_FUN_103a9240((param_3 - *param_1 >> 2) * 0x20 + param_4);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_2);
}


// Reference entry 103ab440; body size 4 bytes.
#line 1 "ENTRY_103ab440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103ab440(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 4);
}


// Reference entry 103ab450; body size 4 bytes.
#line 1 "ENTRY_103ab450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103ab450(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 4);
}


// Reference entry 103ab460; body size 4 bytes.
#line 1 "ENTRY_103ab460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103ab460(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 8);
}


// Reference entry 103ab470; body size 4 bytes.
#line 1 "ENTRY_103ab470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103ab470(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 8);
}


// Reference entry 103ab480; body size 11 bytes.
#line 1 "ENTRY_103ab480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103ab480(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(1 << ((byte)*(undefined4 *)(param_1 + 4) & 0x1f));
}


// Reference entry 103ab490; body size 30 bytes.
#line 1 "ENTRY_103ab490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103ab490(int param_1)

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


// Reference entry 103ab4f0; body size 4 bytes.
#line 1 "ENTRY_103ab4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103ab4f0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0xc);
}


// Reference entry 103ab500; body size 4 bytes.
#line 1 "ENTRY_103ab500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103ab500(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0xc);
}


// Reference entry 103ab510; body size 4 bytes.
#line 1 "ENTRY_103ab510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103ab510(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x10);
}


// Reference entry 103ab520; body size 4 bytes.
#line 1 "ENTRY_103ab520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103ab520(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x10);
}


// Reference entry 103ab530; body size 4 bytes.
#line 1 "ENTRY_103ab530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103ab530(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x10);
}


// Reference entry 103ab540; body size 4 bytes.
#line 1 "ENTRY_103ab540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103ab540(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x10);
}


// Reference entry 103ab550; body size 11 bytes.
#line 1 "ENTRY_103ab550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_103ab550(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(param_1 + 0x1fU >> 5);
}


// Reference entry 103ab560; body size 3 bytes.
#line 1 "ENTRY_103ab560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103ab560(void)

{
  return;
}


// Reference entry 103ab570; body size 3 bytes.
#line 1 "ENTRY_103ab570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103ab570(void)

{
  return;
}


// Reference entry 103ab580; body size 3 bytes.
#line 1 "ENTRY_103ab580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103ab580(void)

{
  return;
}


// Reference entry 103ab590; body size 3 bytes.
#line 1 "ENTRY_103ab590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103ab590(void)

{
  return;
}


// Reference entry 103ab5a0; body size 11 bytes.
#line 1 "ENTRY_103ab5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103ab5a0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 103ab5b0; body size 6 bytes.
#line 1 "ENTRY_103ab5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103ab5b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 103ab9c0; body size 13 bytes.
#line 1 "ENTRY_103ab9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103ab9c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 103ab9d0; body size 18 bytes.
#line 1 "ENTRY_103ab9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103ab9d0(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x10));
  iVar2 = (int)(*(int *)(param_1 + 0xc));
  *param_2 = (int)(param_1);
  param_2[1] = iVar1 + iVar2;
  return;
}


// Reference entry 103ab9f0; body size 18 bytes.
#line 1 "ENTRY_103ab9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103ab9f0(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x10));
  iVar2 = (int)(*(int *)(param_1 + 0xc));
  *param_2 = (int)(param_1);
  param_2[1] = iVar1 + iVar2;
  return;
}


// Reference entry 103aba10; body size 3 bytes.
#line 1 "ENTRY_103aba10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103aba10(void)

{
  return;
}


// Reference entry 103abd90; body size 87 bytes.
#line 1 "ENTRY_103abd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_103abd90(uint param_1)

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


// Reference entry 103abe00; body size 87 bytes.
#line 1 "ENTRY_103abe00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_103abe00(uint param_1)

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


// Reference entry 103abe70; body size 97 bytes.
#line 1 "ENTRY_103abe70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_103abe70(uint param_1)

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


// Reference entry 103abef0; body size 87 bytes.
#line 1 "ENTRY_103abef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_103abef0(uint param_1)

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


// Reference entry 103abf60; body size 87 bytes.
#line 1 "ENTRY_103abf60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_103abf60(uint param_1)

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


// Reference entry 103ac050; body size 7 bytes.
#line 1 "ENTRY_103ac050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103ac050(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*(int *)(param_1 + 4) + -4);
}


// Reference entry 103ac0f0; body size 11 bytes.
#line 1 "ENTRY_103ac0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103ac0f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 103ac100; body size 18 bytes.
#line 1 "ENTRY_103ac100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103ac100(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  param_2[1] = 0;
  return;
}


// Reference entry 103b6820; body size 3 bytes.
#line 1 "ENTRY_103b6820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103b6820(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103b6830; body size 63 bytes.
#line 1 "ENTRY_103b6830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103b6830(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 103b6880; body size 58 bytes.
#line 1 "ENTRY_103b6880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103b6880(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 8);
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


// Reference entry 103b68d0; body size 61 bytes.
#line 1 "ENTRY_103b68d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103b68d0(int param_1,int param_2)

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


// Reference entry 103b6920; body size 61 bytes.
#line 1 "ENTRY_103b6920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103b6920(int param_1,int param_2)

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


// Reference entry 103b6970; body size 66 bytes.
#line 1 "ENTRY_103b6970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103b6970(int param_1,int param_2)

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


// Reference entry 103b69d0; body size 61 bytes.
#line 1 "ENTRY_103b69d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103b69d0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 8);
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


// Reference entry 103b6a20; body size 9 bytes.
#line 1 "ENTRY_103b6a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103b6a20(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 103b6a30; body size 9 bytes.
#line 1 "ENTRY_103b6a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103b6a30(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 103b6ab0; body size 8 bytes.
#line 1 "ENTRY_103b6ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103b6ab0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x10) == 0);
}


// Reference entry 103b6ac0; body size 8 bytes.
#line 1 "ENTRY_103b6ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103b6ac0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x10) == 0);
}


// Reference entry 103b6ad0; body size 8 bytes.
#line 1 "ENTRY_103b6ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103b6ad0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x10) == 0);
}


// Reference entry 103b6ae0; body size 8 bytes.
#line 1 "ENTRY_103b6ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103b6ae0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0xc) == 0);
}


// Reference entry 103b6af0; body size 11 bytes.
#line 1 "ENTRY_103b6af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103b6af0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 103b6b00; body size 12 bytes.
#line 1 "ENTRY_103b6b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103b6b00(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 103b6de0; body size 51 bytes.
#line 1 "ENTRY_103b6de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103b6de0(undefined4 *param_2,void *param_3,void *param_4)
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


// Reference entry 103b78b0; body size 7 bytes.
#line 1 "ENTRY_103b78b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103b78b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x8d);
}


// Reference entry 103b8650; body size 4 bytes.
#line 1 "ENTRY_103b8650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103b8650(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x70));
}


// Reference entry 103b8670; body size 30 bytes.
#line 1 "ENTRY_103b8670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_103b8670(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  thunk_FUN_103aac30(param_1,param_2,param_3,1,param_4);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103b8b60; body size 6 bytes.
#line 1 "ENTRY_103b8b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103b8b60(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIBrowseStackManager");
}


// Reference entry 103b8b70; body size 6 bytes.
#line 1 "ENTRY_103b8b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103b8b70(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIStackedItemImpl");
}


// Reference entry 103b8d80; body size 8 bytes.
#line 1 "ENTRY_103b8d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103b8d80(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x10) == 0);
}


// Reference entry 103b9190; body size 10 bytes.
#line 1 "ENTRY_103b9190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_103b9190(uint *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((uint3)(*param_1 >> 0x11)) << 8 | (uint)(~(byte)(*param_1 >> 9))) & 0xffffff01);
}


// Reference entry 103b91b0; body size 40 bytes.
#line 1 "ENTRY_103b91b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_103b91b0(SCStr *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_1))->beginsWith("searchresults"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_1))->beginsWith("searchaggregate"));
    if (!bVar1) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
}


// Reference entry 103b93d0; body size 8 bytes.
#line 1 "ENTRY_103b93d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_103b93d0(uint *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*param_1 >> 10 & 0xffffff01);
}


// Reference entry 103b9420; body size 6 bytes.
#line 1 "ENTRY_103b9420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103b9420(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x9249249);
}


// Reference entry 103b9430; body size 6 bytes.
#line 1 "ENTRY_103b9430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103b9430(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x1fffffff);
}


// Reference entry 103b9440; body size 6 bytes.
#line 1 "ENTRY_103b9440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103b9440(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x9249249);
}


// Reference entry 103b9450; body size 6 bytes.
#line 1 "ENTRY_103b9450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103b9450(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x1fffffff);
}


// Reference entry 103b9460; body size 6 bytes.
#line 1 "ENTRY_103b9460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103b9460(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 103b9470; body size 6 bytes.
#line 1 "ENTRY_103b9470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103b9470(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x7fffffff);
}


// Reference entry 103bbe50; body size 5 bytes.
#line 1 "ENTRY_103bbe50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103bbe50(int param_1)

{
 try {
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar3 = (uint)(DAT_12126b84);

  iVar4 = (int)(*(int *)(param_1 + 0x10));
  uVar5 = (uint)(*(int *)(param_1 + 0xc) + -1 + iVar4);
  uVar6 = (uint)(uVar5 & 1);
  iVar1 = (int)(*(int *)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 8) - 1U & uVar5 >> 1) * 4));
  piVar2 = (int *)(*(int **)(iVar1 + 4 + uVar6 * 8));

  if (piVar2 != (int *)0x0) {
    *(undefined4 *)(iVar1 + uVar6 * 8) = 0;
    *(undefined4 *)(iVar1 + 4 + uVar6 * 8) = 0;
    (**(code **)(*piVar2 + 8))(uVar3);
    iVar4 = (int)(*(int *)(param_1 + 0x10));
  }
  *(int *)(param_1 + 0x10) = iVar4 + -1;
  if (iVar4 + -1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }

  return;

 } catch (...) { }
}


// Reference entry 103bbf00; body size 5 bytes.
#line 1 "ENTRY_103bbf00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103bbf00(int param_1)

{
 try {
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar3 = (uint)(DAT_12126b84);

  iVar4 = (int)(*(int *)(param_1 + 0x10));
  uVar5 = (uint)(*(int *)(param_1 + 0xc) + -1 + iVar4);
  uVar6 = (uint)(uVar5 & 1);
  iVar1 = (int)(*(int *)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 8) - 1U & uVar5 >> 1) * 4));
  piVar2 = (int *)(*(int **)(iVar1 + 4 + uVar6 * 8));

  if (piVar2 != (int *)0x0) {
    *(undefined4 *)(iVar1 + uVar6 * 8) = 0;
    *(undefined4 *)(iVar1 + 4 + uVar6 * 8) = 0;
    (**(code **)(*piVar2 + 8))(uVar3);
    iVar4 = (int)(*(int *)(param_1 + 0x10));
  }
  *(int *)(param_1 + 0x10) = iVar4 + -1;
  if (iVar4 + -1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }

  return;

 } catch (...) { }
}


// Reference entry 103bc700; body size 3 bytes.
#line 1 "ENTRY_103bc700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103bc700(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103bc710; body size 3 bytes.
#line 1 "ENTRY_103bc710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103bc710(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103bc720; body size 3 bytes.
#line 1 "ENTRY_103bc720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103bc720(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103bc730; body size 3 bytes.
#line 1 "ENTRY_103bc730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103bc730(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103bcf10; body size 73 bytes.
#line 1 "ENTRY_103bcf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103bcf10(undefined4 param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  undefined1 auStack_8 [8];
  
  uVar2 = (uint)(param_1[3]);
  if (((int)uVar2 < 0) && (uVar2 != 0)) {
    iVar1 = (int)(-((~uVar2 >> 5) * 4 + 4));
  }
  else {
    iVar1 = (int)((uVar2 >> 5) * 4);
  }
  thunk_FUN_103aac30(auStack_8,*param_1 + iVar1,uVar2 & 0x1f,1,param_2);
  return;
}


// Reference entry 103bd3a0; body size 28 bytes.
#line 1 "ENTRY_103bd3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103bd3a0(undefined4 *param_1)

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


// Reference entry 103bd3d0; body size 28 bytes.
#line 1 "ENTRY_103bd3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103bd3d0(undefined4 *param_1)

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


// Reference entry 103bd400; body size 28 bytes.
#line 1 "ENTRY_103bd400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103bd400(undefined4 *param_1)

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


// Reference entry 103bd430; body size 28 bytes.
#line 1 "ENTRY_103bd430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103bd430(undefined4 *param_1)

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


// Reference entry 103bd460; body size 28 bytes.
#line 1 "ENTRY_103bd460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103bd460(undefined4 *param_1)

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


// Reference entry 103bd490; body size 28 bytes.
#line 1 "ENTRY_103bd490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103bd490(undefined4 *param_1)

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


// Reference entry 103bd4c0; body size 20 bytes.
#line 1 "ENTRY_103bd4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103bd4c0(int *param_1)

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


// Reference entry 103bdd40; body size 4 bytes.
#line 1 "ENTRY_103bdd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103bdd40(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 103bdd50; body size 4 bytes.
#line 1 "ENTRY_103bdd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103bdd50(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 103bdd60; body size 4 bytes.
#line 1 "ENTRY_103bdd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103bdd60(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 103bdd70; body size 4 bytes.
#line 1 "ENTRY_103bdd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103bdd70(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 103bdd80; body size 4 bytes.
#line 1 "ENTRY_103bdd80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103bdd80(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 103bdd90; body size 4 bytes.
#line 1 "ENTRY_103bdd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103bdd90(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 103bdda0; body size 4 bytes.
#line 1 "ENTRY_103bdda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103bdda0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xc));
}


// Reference entry 103bdfb0; body size 21 bytes.
#line 1 "ENTRY_103bdfb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103bdfb0(int *param_2)
{
  int param_1 = (int )this;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 103be2f0; body size 21 bytes.
#line 1 "ENTRY_103be2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103be2f0(int *param_2)
{
  int param_1 = (int )this;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 100))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 103be340; body size 5 bytes.
#line 1 "ENTRY_103be340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103be340(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103be4f0; body size 6 bytes.
#line 1 "ENTRY_103be4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103be4f0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIEnumerator");
}


// Reference entry 103be500; body size 27 bytes.
#line 1 "ENTRY_103be500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103be500(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103be740; body size 9 bytes.
#line 1 "ENTRY_103be740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103be740(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIEnumerator);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103be870; body size 7 bytes.
#line 1 "ENTRY_103be870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103be870(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 103be880; body size 12 bytes.
#line 1 "ENTRY_103be880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_103be880(int param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + param_2 * 8);
}


// Reference entry 103be890; body size 7 bytes.
#line 1 "ENTRY_103be890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103be890(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 103be8a0; body size 3 bytes.
#line 1 "ENTRY_103be8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103be8a0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103be9d0; body size 13 bytes.
#line 1 "ENTRY_103be9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103be9d0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 103bec20; body size 13 bytes.
#line 1 "ENTRY_103bec20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_103bec20(int param_2)
{
  int param_1 = (int )this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*(int *)(param_1 + 8) + param_2 * 8);
}


// Reference entry 103bf210; body size 6 bytes.
#line 1 "ENTRY_103bf210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103bf210(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIEnumerator");
}


// Reference entry 103bf380; body size 10 bytes.
#line 1 "ENTRY_103bf380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103bf380(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 3);
}


// Reference entry 103bf390; body size 9 bytes.
#line 1 "ENTRY_103bf390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103bf390(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 103bf3d0; body size 41 bytes.
#line 1 "ENTRY_103bf3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103bf3d0(undefined4 param_2,int param_3)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  
  iVar2 = (int)(*(int *)(*(int *)(param_1 + 0xc) + 0xc));
  iVar1 = (int)(*(int *)(*(int *)(param_1 + 0xc) + 8) + param_3 * 8);
  thunk_FUN_102e8bc0(iVar1,iVar2,iVar2 - iVar1 >> 3,param_2);
  return;
}


// Reference entry 103bf410; body size 18 bytes.
#line 1 "ENTRY_103bf410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103bf410(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103bf430; body size 22 bytes.
#line 1 "ENTRY_103bf430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103bf430(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103bf450; body size 22 bytes.
#line 1 "ENTRY_103bf450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103bf450(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103bf470; body size 18 bytes.
#line 1 "ENTRY_103bf470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103bf470(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103bf610; body size 22 bytes.
#line 1 "ENTRY_103bf610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103bf610(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103bf6d0; body size 78 bytes.
#line 1 "ENTRY_103bf6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_103bf6d0(int *param_2)
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


// Reference entry 103bf740; body size 3 bytes.
#line 1 "ENTRY_103bf740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103bf740(void)

{
  return;
}


// Reference entry 103bf750; body size 25 bytes.
#line 1 "ENTRY_103bf750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103bf750(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x38));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 103bf790; body size 13 bytes.
#line 1 "ENTRY_103bf790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103bf790(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103bf7a0; body size 13 bytes.
#line 1 "ENTRY_103bf7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103bf7a0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103bf7b0; body size 3 bytes.
#line 1 "ENTRY_103bf7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103bf7b0(void)

{
  return;
}


// Reference entry 103bfa40; body size 15 bytes.
#line 1 "ENTRY_103bfa40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103bfa40(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x38);
  return;
}


// Reference entry 103bfae0; body size 29 bytes.
#line 1 "ENTRY_103bfae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103bfae0(uint param_1)

{
  undefined1 auStack_c [12];
  
  if (param_1 < 0x4924925) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 * 0x38);
  }
  thunk_FUN_1011bdc0();
                    
  _CxxThrowException(auStack_c,(ThrowInfo *)&DAT_11d330dc);
}


// Reference entry 103bfb10; body size 5 bytes.
#line 1 "ENTRY_103bfb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103bfb10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103bfb20; body size 5 bytes.
#line 1 "ENTRY_103bfb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103bfb20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103bfb30; body size 37 bytes.
#line 1 "ENTRY_103bfb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103bfb30(int param_1,SCStr *param_2)

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


// Reference entry 103bfd00; body size 5 bytes.
#line 1 "ENTRY_103bfd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103bfd00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103bfd20; body size 5 bytes.
#line 1 "ENTRY_103bfd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103bfd20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103bfd30; body size 5 bytes.
#line 1 "ENTRY_103bfd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103bfd30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103bfd40; body size 93 bytes.
#line 1 "ENTRY_103bfd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_103bfd40(int *param_2)
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
  if (piVar1 != (int *)0x0) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))());
    param_1[2] = iVar3;
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1]);
  }
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
}


// Reference entry 103bfdc0; body size 130 bytes.
#line 1 "ENTRY_103bfdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_103bfdc0(int *param_2,undefined4 param_3)
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


// Reference entry 103bfe70; body size 130 bytes.
#line 1 "ENTRY_103bfe70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_103bfe70(int *param_2,undefined4 param_3)
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


// Reference entry 103bfff0; body size 86 bytes.
#line 1 "ENTRY_103bfff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103bfff0(int *param_1,int *param_2)

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


// Reference entry 103c0110; body size 15 bytes.
#line 1 "ENTRY_103c0110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103c0110(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 103c0130; body size 15 bytes.
#line 1 "ENTRY_103c0130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103c0130(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 103c0150; body size 5 bytes.
#line 1 "ENTRY_103c0150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103c0150(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103c0160; body size 5 bytes.
#line 1 "ENTRY_103c0160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103c0160(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103c0180; body size 5 bytes.
#line 1 "ENTRY_103c0180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103c0180(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103c0190; body size 5 bytes.
#line 1 "ENTRY_103c0190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103c0190(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103c01b0; body size 5 bytes.
#line 1 "ENTRY_103c01b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103c01b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103c01c0; body size 5 bytes.
#line 1 "ENTRY_103c01c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103c01c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103c01d0; body size 6 bytes.
#line 1 "ENTRY_103c01d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103c01d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCITokenManager");
}


// Reference entry 103c0220; body size 28 bytes.
#line 1 "ENTRY_103c0220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103c0220(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103c0370; body size 27 bytes.
#line 1 "ENTRY_103c0370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103c0370(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103c03a0; body size 95 bytes.
#line 1 "ENTRY_103c03a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103c03a0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_10708df0());
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0xc))(param_2,param_3,param_4));
  thunk_FUN_105a7950(uVar2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[6] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[7] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0xe] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x11] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  param_1[0x14] = (uint)&ghidra_vftable_SCNewWizControllerFor;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103c06e0; body size 70 bytes.
#line 1 "ENTRY_103c06e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103c06e0(undefined4 *param_1)

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


// Reference entry 103c0740; body size 70 bytes.
#line 1 "ENTRY_103c0740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103c0740(undefined4 *param_1)

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


// Reference entry 103c07a0; body size 16 bytes.
#line 1 "ENTRY_103c07a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103c07a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103c07c0; body size 16 bytes.
#line 1 "ENTRY_103c07c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103c07c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103c0850; body size 16 bytes.
#line 1 "ENTRY_103c0850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103c0850(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103c08f0; body size 16 bytes.
#line 1 "ENTRY_103c08f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103c08f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103c0910; body size 18 bytes.
#line 1 "ENTRY_103c0910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103c0910(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103c0930; body size 3 bytes.
#line 1 "ENTRY_103c0930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c0930(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103c0940; body size 10 bytes.
#line 1 "ENTRY_103c0940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c0940(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 103c0950; body size 10 bytes.
#line 1 "ENTRY_103c0950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c0950(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 103c0960; body size 10 bytes.
#line 1 "ENTRY_103c0960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c0960(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 103c0a30; body size 11 bytes.
#line 1 "ENTRY_103c0a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103c0a30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103c0a40; body size 16 bytes.
#line 1 "ENTRY_103c0a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103c0a40(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103c0a60; body size 3 bytes.
#line 1 "ENTRY_103c0a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c0a60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103c0a70; body size 12 bytes.
#line 1 "ENTRY_103c0a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c0a70(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 103c0b00; body size 12 bytes.
#line 1 "ENTRY_103c0b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c0b00(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 103c0b90; body size 52 bytes.
#line 1 "ENTRY_103c0b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103c0b90(undefined4 *param_1)

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


// Reference entry 103c0e30; body size 57 bytes.
#line 1 "ENTRY_103c0e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103c0e30(undefined1 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHTTPBufferedDataIO);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)((int)param_1 + 0x12) = param_2;
  *(undefined2 *)(param_1 + 4) = 1;
  param_1[5] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103c1270; body size 42 bytes.
#line 1 "ENTRY_103c1270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103c1270(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSinkDelegateInternal);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103c12b0; body size 9 bytes.
#line 1 "ENTRY_103c12b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103c12b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCITokenManager);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103c1d90; body size 36 bytes.
#line 1 "ENTRY_103c1d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c1d90(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 103c1dc0; body size 11 bytes.
#line 1 "ENTRY_103c1dc0"

/* WARNING: Removing unreachable block_103c1dc0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103c1dc0(undefined4 *param_1)

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


// Reference entry 103c2d90; body size 19 bytes.
#line 1 "ENTRY_103c2d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103c2d90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 103c2db0; body size 7 bytes.
#line 1 "ENTRY_103c2db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103c2db0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 103c2df0; body size 18 bytes.
#line 1 "ENTRY_103c2df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103c2df0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpFetchToken);
  param_1[2] = (uint)&ghidra_vftable_SCOpFetchToken;


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


// Reference entry 103c3400; body size 65 bytes.
#line 1 "ENTRY_103c3400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_103c3400(int *param_2)
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


// Reference entry 103c34e0; body size 14 bytes.
#line 1 "ENTRY_103c34e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_103c34e0(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 103c3650; body size 4 bytes.
#line 1 "ENTRY_103c3650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c3650(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103c3660; body size 3 bytes.
#line 1 "ENTRY_103c3660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c3660(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103c3670; body size 8 bytes.
#line 1 "ENTRY_103c3670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103c3670(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 103c3680; body size 8 bytes.
#line 1 "ENTRY_103c3680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103c3680(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 103c3690; body size 4 bytes.
#line 1 "ENTRY_103c3690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c3690(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103c36a0; body size 4 bytes.
#line 1 "ENTRY_103c36a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c36a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103c36b0; body size 4 bytes.
#line 1 "ENTRY_103c36b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c36b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103c36c0; body size 4 bytes.
#line 1 "ENTRY_103c36c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c36c0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103c36d0; body size 3 bytes.
#line 1 "ENTRY_103c36d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c36d0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103c36e0; body size 3 bytes.
#line 1 "ENTRY_103c36e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c36e0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103c41f0; body size 31 bytes.
#line 1 "ENTRY_103c41f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103c41f0(undefined4 *param_1)

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


// Reference entry 103c42c0; body size 8 bytes.
#line 1 "ENTRY_103c42c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103c42c0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 103c42d0; body size 8 bytes.
#line 1 "ENTRY_103c42d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103c42d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 103c42e0; body size 8 bytes.
#line 1 "ENTRY_103c42e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103c42e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 103c4820; body size 3 bytes.
#line 1 "ENTRY_103c4820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c4820(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103c4830; body size 3 bytes.
#line 1 "ENTRY_103c4830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c4830(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103c4840; body size 3 bytes.
#line 1 "ENTRY_103c4840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c4840(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103c4850; body size 3 bytes.
#line 1 "ENTRY_103c4850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c4850(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103c4860; body size 3 bytes.
#line 1 "ENTRY_103c4860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c4860(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103c4870; body size 3 bytes.
#line 1 "ENTRY_103c4870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c4870(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103c4880; body size 3 bytes.
#line 1 "ENTRY_103c4880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c4880(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103c4890; body size 4 bytes.
#line 1 "ENTRY_103c4890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c4890(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 103c48a0; body size 4 bytes.
#line 1 "ENTRY_103c48a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c48a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 103c48b0; body size 4 bytes.
#line 1 "ENTRY_103c48b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c48b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 103c4b50; body size 7 bytes.
#line 1 "ENTRY_103c4b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103c4b50(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 103c4b60; body size 7 bytes.
#line 1 "ENTRY_103c4b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103c4b60(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 103c4b70; body size 7 bytes.
#line 1 "ENTRY_103c4b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103c4b70(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 103c4bf0; body size 30 bytes.
#line 1 "ENTRY_103c4bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103c4bf0(int param_1)

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


// Reference entry 103c4c40; body size 3 bytes.
#line 1 "ENTRY_103c4c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103c4c40(void)

{
  return;
}


// Reference entry 103c4c50; body size 11 bytes.
#line 1 "ENTRY_103c4c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c4c50(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 103c4c60; body size 26 bytes.
#line 1 "ENTRY_103c4c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103c4c60(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 103c4c80; body size 26 bytes.
#line 1 "ENTRY_103c4c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103c4c80(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 103c4d10; body size 10 bytes.
#line 1 "ENTRY_103c4d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103c4d10(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 103c4d20; body size 10 bytes.
#line 1 "ENTRY_103c4d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103c4d20(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 103c4d30; body size 10 bytes.
#line 1 "ENTRY_103c4d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103c4d30(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 103c4de0; body size 13 bytes.
#line 1 "ENTRY_103c4de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103c4de0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 103c4df0; body size 11 bytes.
#line 1 "ENTRY_103c4df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103c4df0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 103c6550; body size 97 bytes.
#line 1 "ENTRY_103c6550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_103c6550(uint param_1)

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


// Reference entry 103c7250; body size 59 bytes.
#line 1 "ENTRY_103c7250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103c7250(SCStr *param_1)

{
  uint uVar1;
  
  ((SCStr *)(param_1))->format((char *)(param_1 + 0x6218));
  uVar1 = (uint)(((SCStr *)(param_1 + 0x6218))->length());
  *(uint *)(param_1 + 0x6210) = uVar1;
  return;
}


// Reference entry 103c72a0; body size 56 bytes.
#line 1 "ENTRY_103c72a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103c72a0(SCStr *param_1)

{
  uint uVar1;
  
  ((SCStr *)(param_1))->format((char *)(param_1 + 0x6218));
  uVar1 = (uint)(((SCStr *)(param_1 + 0x6218))->length());
  *(uint *)(param_1 + 0x6210) = uVar1;
  return;
}


// Reference entry 103c72f0; body size 63 bytes.
#line 1 "ENTRY_103c72f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103c72f0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 103c7340; body size 66 bytes.
#line 1 "ENTRY_103c7340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103c7340(int param_1,int param_2)

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


// Reference entry 103c73a0; body size 7 bytes.
#line 1 "ENTRY_103c73a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_103c73a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x88));
}


// Reference entry 103c73b0; body size 10 bytes.
#line 1 "ENTRY_103c73b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c73b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(((uint)((int3)((uint)*(int *)(param_1 + 0x18) >> 8)) << 8 | (uint)(*(undefined1 *)(*(int *)(param_1 + 0x18) + 0x88))));
}


// Reference entry 103c8170; body size 7 bytes.
#line 1 "ENTRY_103c8170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c8170(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x6224);
}


// Reference entry 103c8180; body size 7 bytes.
#line 1 "ENTRY_103c8180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c8180(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x6238);
}


// Reference entry 103c81d0; body size 7 bytes.
#line 1 "ENTRY_103c81d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c81d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x100));
}


// Reference entry 103c81e0; body size 7 bytes.
#line 1 "ENTRY_103c81e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c81e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x6638));
}


// Reference entry 103c81f0; body size 7 bytes.
#line 1 "ENTRY_103c81f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c81f0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x6230));
}


// Reference entry 103c8200; body size 7 bytes.
#line 1 "ENTRY_103c8200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c8200(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x6278));
}


// Reference entry 103c8210; body size 7 bytes.
#line 1 "ENTRY_103c8210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c8210(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x6680));
}


// Reference entry 103c8220; body size 10 bytes.
#line 1 "ENTRY_103c8220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c8220(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x448c));
}


// Reference entry 103c8230; body size 10 bytes.
#line 1 "ENTRY_103c8230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c8230(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x448c));
}


// Reference entry 103c8260; body size 4 bytes.
#line 1 "ENTRY_103c8260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c8260(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103c8270; body size 4 bytes.
#line 1 "ENTRY_103c8270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c8270(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103c8280; body size 7 bytes.
#line 1 "ENTRY_103c8280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c8280(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x6630);
}


// Reference entry 103c8300; body size 7 bytes.
#line 1 "ENTRY_103c8300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c8300(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x6634);
}


// Reference entry 103c8310; body size 7 bytes.
#line 1 "ENTRY_103c8310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c8310(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x622c);
}


// Reference entry 103c8720; body size 4 bytes.
#line 1 "ENTRY_103c8720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c8720(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 100);
}


// Reference entry 103c8730; body size 7 bytes.
#line 1 "ENTRY_103c8730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c8730(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x662c);
}


// Reference entry 103c8740; body size 7 bytes.
#line 1 "ENTRY_103c8740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c8740(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x6224);
}


// Reference entry 103c8b40; body size 5 bytes.
#line 1 "ENTRY_103c8b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c8b40(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x54));
}


// Reference entry 103c9390; body size 6 bytes.
#line 1 "ENTRY_103c9390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103c9390(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCITokenManager");
}


// Reference entry 103ca170; body size 6 bytes.
#line 1 "ENTRY_103ca170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ca170(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x4924924);
}


// Reference entry 103ca180; body size 6 bytes.
#line 1 "ENTRY_103ca180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ca180(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x4924924);
}


// Reference entry 103ca9c0; body size 3 bytes.
#line 1 "ENTRY_103ca9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103ca9c0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 103cb270; body size 28 bytes.
#line 1 "ENTRY_103cb270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103cb270(undefined4 *param_1)

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


// Reference entry 103cb2a0; body size 28 bytes.
#line 1 "ENTRY_103cb2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103cb2a0(undefined4 *param_1)

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


// Reference entry 103cb2d0; body size 28 bytes.
#line 1 "ENTRY_103cb2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103cb2d0(undefined4 *param_1)

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


// Reference entry 103cb300; body size 28 bytes.
#line 1 "ENTRY_103cb300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103cb300(undefined4 *param_1)

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


// Reference entry 103cb330; body size 28 bytes.
#line 1 "ENTRY_103cb330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103cb330(undefined4 *param_1)

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


// Reference entry 103cbed0; body size 12 bytes.
#line 1 "ENTRY_103cbed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103cbed0(undefined4 param_1)

{
  DAT_121195a8 = (int)(param_1);
  return;
}


// Reference entry 103cbee0; body size 59 bytes.
#line 1 "ENTRY_103cbee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103cbee0(SCStr *param_1)

{
  uint uVar1;
  
  ((SCStr *)(param_1))->format((char *)(param_1 + 0x6218));
  uVar1 = (uint)(((SCStr *)(param_1 + 0x6218))->length());
  *(uint *)(param_1 + 0x6210) = uVar1;
  return;
}


// Reference entry 103cc1e0; body size 9 bytes.
#line 1 "ENTRY_103cc1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103cc1e0(int param_1)

{
                    
                    
  (**(code **)(*(int *)(param_1 + 0x28) + 8))();
  return;
}


// Reference entry 103cc5b0; body size 28 bytes.
#line 1 "ENTRY_103cc5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_103cc5b0(int *param_2)
{
  int param_1 = (int )this;
  uint in_EAX;
  uint uVar1;
  
  if (param_2 != (int *)0x0) {
    uVar1 = (uint)((**(code **)(*param_2 + 0x14))(*(undefined4 *)(param_1 + 4)));
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(in_EAX & 0xffffff00);
}


// Reference entry 103cc600; body size 28 bytes.
#line 1 "ENTRY_103cc600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_103cc600(int *param_2)
{
  int param_1 = (int )this;
  uint in_EAX;
  uint uVar1;
  
  if (param_2 != (int *)0x0) {
    uVar1 = (uint)((**(code **)(*param_2 + 0x18))(*(undefined4 *)(param_1 + 4)));
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(in_EAX & 0xffffff00);
}


// Reference entry 103cca40; body size 18 bytes.
#line 1 "ENTRY_103cca40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103cca40(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103cca60; body size 25 bytes.
#line 1 "ENTRY_103cca60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103cca60(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103cca80; body size 22 bytes.
#line 1 "ENTRY_103cca80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103cca80(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103ccaa0; body size 22 bytes.
#line 1 "ENTRY_103ccaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103ccaa0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103ccac0; body size 22 bytes.
#line 1 "ENTRY_103ccac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103ccac0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103ccae0; body size 18 bytes.
#line 1 "ENTRY_103ccae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103ccae0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103cce40; body size 22 bytes.
#line 1 "ENTRY_103cce40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103cce40(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103cce60; body size 22 bytes.
#line 1 "ENTRY_103cce60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103cce60(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103cce80; body size 18 bytes.
#line 1 "ENTRY_103cce80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103cce80(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103ccea0; body size 18 bytes.
#line 1 "ENTRY_103ccea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103ccea0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103ccec0; body size 18 bytes.
#line 1 "ENTRY_103ccec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103ccec0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103ccee0; body size 18 bytes.
#line 1 "ENTRY_103ccee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103ccee0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103ccfa0; body size 18 bytes.
#line 1 "ENTRY_103ccfa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103ccfa0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103cd2c0; body size 78 bytes.
#line 1 "ENTRY_103cd2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_103cd2c0(int *param_2)
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


// Reference entry 103cd330; body size 3 bytes.
#line 1 "ENTRY_103cd330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103cd330(void)

{
  return;
}


// Reference entry 103cd340; body size 25 bytes.
#line 1 "ENTRY_103cd340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103cd340(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 103cd820; body size 13 bytes.
#line 1 "ENTRY_103cd820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103cd820(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103cd830; body size 13 bytes.
#line 1 "ENTRY_103cd830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103cd830(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103cd840; body size 13 bytes.
#line 1 "ENTRY_103cd840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103cd840(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103cd8e0; body size 113 bytes.
#line 1 "ENTRY_103cd8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103cd8e0(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)(thunk_FUN_103cdb40(*(undefined4 *)(*param_2 + 4),*param_1,param_3));
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


// Reference entry 103cd970; body size 113 bytes.
#line 1 "ENTRY_103cd970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103cd970(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)(thunk_FUN_103cdcc0(*(undefined4 *)(*param_2 + 4),*param_1,param_3));
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


// Reference entry 103ce540; body size 5 bytes.
#line 1 "ENTRY_103ce540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ce540(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103ce550; body size 5 bytes.
#line 1 "ENTRY_103ce550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ce550(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103ce560; body size 5 bytes.
#line 1 "ENTRY_103ce560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ce560(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103ce570; body size 37 bytes.
#line 1 "ENTRY_103ce570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ce570(int param_1,SCStr *param_2)

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


// Reference entry 103ce5a0; body size 37 bytes.
#line 1 "ENTRY_103ce5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ce5a0(int param_1,SCStr *param_2)

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


// Reference entry 103ce5d0; body size 3 bytes.
#line 1 "ENTRY_103ce5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103ce5d0(void)

{
  return;
}


// Reference entry 103ce5e0; body size 3 bytes.
#line 1 "ENTRY_103ce5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103ce5e0(void)

{
  return;
}


// Reference entry 103ce5f0; body size 19 bytes.
#line 1 "ENTRY_103ce5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103ce5f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 103cea60; body size 5 bytes.
#line 1 "ENTRY_103cea60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cea60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103cea70; body size 5 bytes.
#line 1 "ENTRY_103cea70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cea70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103cea80; body size 5 bytes.
#line 1 "ENTRY_103cea80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cea80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103cea90; body size 5 bytes.
#line 1 "ENTRY_103cea90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cea90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103ceaa0; body size 5 bytes.
#line 1 "ENTRY_103ceaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ceaa0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103ceab0; body size 5 bytes.
#line 1 "ENTRY_103ceab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ceab0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103ceac0; body size 5 bytes.
#line 1 "ENTRY_103ceac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ceac0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103cece0; body size 86 bytes.
#line 1 "ENTRY_103cece0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103cece0(int *param_1,int *param_2)

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


// Reference entry 103ced50; body size 15 bytes.
#line 1 "ENTRY_103ced50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ced50(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 103ced70; body size 15 bytes.
#line 1 "ENTRY_103ced70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ced70(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 103ced90; body size 5 bytes.
#line 1 "ENTRY_103ced90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ced90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103ceda0; body size 5 bytes.
#line 1 "ENTRY_103ceda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ceda0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103cedb0; body size 5 bytes.
#line 1 "ENTRY_103cedb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cedb0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103cedc0; body size 5 bytes.
#line 1 "ENTRY_103cedc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cedc0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103cedd0; body size 5 bytes.
#line 1 "ENTRY_103cedd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cedd0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103cede0; body size 5 bytes.
#line 1 "ENTRY_103cede0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cede0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103cedf0; body size 5 bytes.
#line 1 "ENTRY_103cedf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cedf0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103cee00; body size 5 bytes.
#line 1 "ENTRY_103cee00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cee00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103cee10; body size 5 bytes.
#line 1 "ENTRY_103cee10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cee10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103cee20; body size 5 bytes.
#line 1 "ENTRY_103cee20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cee20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103cee30; body size 5 bytes.
#line 1 "ENTRY_103cee30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cee30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103cee40; body size 5 bytes.
#line 1 "ENTRY_103cee40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cee40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103cee50; body size 5 bytes.
#line 1 "ENTRY_103cee50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cee50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103cee60; body size 5 bytes.
#line 1 "ENTRY_103cee60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cee60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103cee70; body size 5 bytes.
#line 1 "ENTRY_103cee70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cee70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103cee80; body size 5 bytes.
#line 1 "ENTRY_103cee80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cee80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103cee90; body size 19 bytes.
#line 1 "ENTRY_103cee90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103cee90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 103ceeb0; body size 18 bytes.
#line 1 "ENTRY_103ceeb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103ceeb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103ceed0; body size 18 bytes.
#line 1 "ENTRY_103ceed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103ceed0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103ceff0; body size 11 bytes.
#line 1 "ENTRY_103ceff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103ceff0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103cf000; body size 51 bytes.
#line 1 "ENTRY_103cf000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103cf000(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *pvVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_3;
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *(void **)param_1[1] = pvVar1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103cf040; body size 51 bytes.
#line 1 "ENTRY_103cf040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103cf040(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *pvVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_3;
  pvVar1 = (void *)(operator_new(0x28));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *(void **)param_1[1] = pvVar1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103cf080; body size 51 bytes.
#line 1 "ENTRY_103cf080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103cf080(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *pvVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_3;
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *(void **)param_1[1] = pvVar1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103cf0c0; body size 11 bytes.
#line 1 "ENTRY_103cf0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103cf0c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103cf1d0; body size 11 bytes.
#line 1 "ENTRY_103cf1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103cf1d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103cf1e0; body size 11 bytes.
#line 1 "ENTRY_103cf1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103cf1e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103cf1f0; body size 16 bytes.
#line 1 "ENTRY_103cf1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103cf1f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103cf210; body size 3 bytes.
#line 1 "ENTRY_103cf210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103cf210(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 103cf220; body size 76 bytes.
#line 1 "ENTRY_103cf220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103cf220(undefined4 *param_2)
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
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103cf320; body size 52 bytes.
#line 1 "ENTRY_103cf320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103cf320(undefined4 *param_1)

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


// Reference entry 103cf490; body size 76 bytes.
#line 1 "ENTRY_103cf490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103cf490(undefined4 *param_2)
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
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103cf770; body size 23 bytes.
#line 1 "ENTRY_103cf770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103cf770(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103d04b0; body size 42 bytes.
#line 1 "ENTRY_103d04b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103d04b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103d04f0; body size 23 bytes.
#line 1 "ENTRY_103d04f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103d04f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCTestPoint_TestPointCallback);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103d0a10; body size 7 bytes.
#line 1 "ENTRY_103d0a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103d0a10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  return;
}


// Reference entry 103d0a20; body size 58 bytes.
#line 1 "ENTRY_103d0a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_103d0a20(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  if (param_1 != (int *)(param_2)) {
    iVar1 = (int)(*param_1);
    thunk_FUN_102460b0(param_1,*(undefined4 *)(iVar1 + 4));
    *(int *)(iVar1 + 4) = iVar1;
    *(int *)iVar1 = (int)(iVar1);
    *(int *)(iVar1 + 8) = iVar1;
    param_1[1] = 0;
    thunk_FUN_103cd850(param_2,param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 103d0a70; body size 58 bytes.
#line 1 "ENTRY_103d0a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_103d0a70(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  if (param_1 != (int *)(param_2)) {
    iVar1 = (int)(*param_1);
    thunk_FUN_102460b0(param_1,*(undefined4 *)(iVar1 + 4));
    *(int *)(iVar1 + 4) = iVar1;
    *(int *)iVar1 = (int)(iVar1);
    *(int *)(iVar1 + 8) = iVar1;
    param_1[1] = 0;
    thunk_FUN_103cd850(param_2,param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 103d0ac0; body size 60 bytes.
#line 1 "ENTRY_103d0ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103d0ac0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if (param_1 != (undefined4 *)(param_2)) {
    thunk_FUN_10247e10();
    *param_1 = (undefined4)(*param_2);
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    *param_2 = (undefined4)(0);
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 103d0bf0; body size 14 bytes.
#line 1 "ENTRY_103d0bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_103d0bf0(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 103d0c10; body size 14 bytes.
#line 1 "ENTRY_103d0c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_103d0c10(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 103d0ff0; body size 6 bytes.
#line 1 "ENTRY_103d0ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103d0ff0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 103d1000; body size 6 bytes.
#line 1 "ENTRY_103d1000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103d1000(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


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
extern int FUN_10002a68(...);
extern int FUN_10065348(...);
extern int FUN_1006adb1(...);
extern int FUN_1006f9dd(...);
extern int FUN_10070892(...);
extern int FUN_1009070f(...);
extern int FUN_1009a598(...);
extern int FUN_110b5990(...);
extern int FUN_110befd0(...);
extern int FUN_1122c9e0(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern int append(...);
extern int format(...);
extern int int_allocRep(...);
extern __declspec(dllimport) int longjmp(...);
extern __declspec(dllimport) int memmove(...);
extern int op_ctor(...);
extern int op_eq(...);
extern int operator_new(...);
extern __declspec(dllimport) int strncmp(...);
extern int thunk_FUN_101a2c70(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_10202e00(...);
extern int thunk_FUN_1020b1d0(...);
extern int thunk_FUN_1020b530(...);
extern int thunk_FUN_1020bd10(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_103d61d0(...);
extern int thunk_FUN_103d6930(...);
extern int thunk_FUN_104d8ab0(...);
extern int thunk_FUN_104dad90(...);
extern int thunk_FUN_105b6490(...);
extern int thunk_FUN_10655080(...);
extern int thunk_FUN_10bcda40(...);
extern int thunk_FUN_10bfa4b0(...);
extern int thunk_FUN_10bfb550(...);
extern int thunk_FUN_10d5e1e0(...);
extern int thunk_FUN_10f45640(...);
extern int thunk_FUN_10f456a0(...);
extern int thunk_FUN_10f46e10(...);
extern int thunk_FUN_10f46e70(...);
extern int thunk_FUN_10f744a0(...);
extern int thunk_FUN_10f74bd0(...);
extern int thunk_FUN_10fe96d0(...);
extern int thunk_FUN_10fe9990(...);
extern int thunk_FUN_10ff3290(...);
extern int thunk_FUN_10ff8d30(...);
extern int thunk_FUN_10ff8fb0(...);
extern int thunk_FUN_10ffa820(...);
extern int thunk_FUN_1101f010(...);
extern int thunk_FUN_110232f0(...);
extern int thunk_FUN_11023420(...);
extern int thunk_FUN_11023740(...);
extern int thunk_FUN_110237d0(...);
extern int thunk_FUN_110271f0(...);
extern int thunk_FUN_1102bc60(...);
extern int thunk_FUN_11043b80(...);
extern int thunk_FUN_1104af00(...);
extern int thunk_FUN_1104da60(...);
extern int thunk_FUN_11054650(...);
extern int thunk_FUN_1105ce90(...);
extern int thunk_FUN_1105cf60(...);
extern int thunk_FUN_1105cfc0(...);
extern int thunk_FUN_110621c0(...);
extern int thunk_FUN_11066000(...);
extern int thunk_FUN_1106d6f0(...);
extern int thunk_FUN_1106f140(...);
extern int thunk_FUN_1106f2b0(...);
extern int thunk_FUN_1106f380(...);
extern int thunk_FUN_11072020(...);
extern int thunk_FUN_11072070(...);
extern int thunk_FUN_110723c0(...);
extern int thunk_FUN_11072420(...);
extern int thunk_FUN_11072480(...);
extern int thunk_FUN_110724f0(...);
extern int thunk_FUN_1107e1f0(...);
extern int thunk_FUN_1107e550(...);
extern int thunk_FUN_1107f630(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_110844a0(...);
extern int thunk_FUN_11089c30(...);
extern int thunk_FUN_11089ce0(...);
extern int thunk_FUN_11091380(...);
extern int thunk_FUN_11092d30(...);
extern int thunk_FUN_110935f0(...);
extern int thunk_FUN_110944c0(...);
extern int thunk_FUN_110988b0(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_110a0140(...);
extern int thunk_FUN_110a0210(...);
extern int thunk_FUN_110a30d0(...);
extern int thunk_FUN_110a3240(...);
extern int thunk_FUN_110a3e60(...);
extern int thunk_FUN_110a67f0(...);
extern int thunk_FUN_110a68c0(...);
extern int thunk_FUN_110a6d20(...);
extern int thunk_FUN_110a6fa0(...);
extern int thunk_FUN_110a9ef0(...);
extern int thunk_FUN_110ab530(...);
extern int thunk_FUN_110acc40(...);
extern int thunk_FUN_110adba0(...);
extern int thunk_FUN_110aeb40(...);
extern int thunk_FUN_110b2410(...);
extern int thunk_FUN_110b3000(...);
extern int thunk_FUN_110b3620(...);
extern int thunk_FUN_110b4400(...);
extern int thunk_FUN_110b87c0(...);
extern int thunk_FUN_110b9480(...);
extern int thunk_FUN_110ba560(...);
extern int thunk_FUN_110ba960(...);
extern int thunk_FUN_110bb5f0(...);
extern int thunk_FUN_110bc160(...);
extern int thunk_FUN_110bcb10(...);
extern int thunk_FUN_110bee40(...);
extern int thunk_FUN_110c20d0(...);
extern int thunk_FUN_110c2c60(...);
extern int thunk_FUN_110c3210(...);
extern int thunk_FUN_110c33f0(...);
extern int thunk_FUN_110c37b0(...);
extern int thunk_FUN_110c49a0(...);
extern int thunk_FUN_110c4ef0(...);
extern int thunk_FUN_110c5800(...);
extern int thunk_FUN_110c59b0(...);
extern int thunk_FUN_110cb840(...);
extern int thunk_FUN_110cc7f0(...);
extern int thunk_FUN_110ee070(...);
extern int thunk_FUN_110ee120(...);
extern int thunk_FUN_110f3120(...);
extern int thunk_FUN_110f62c0(...);
extern int thunk_FUN_110f6450(...);
extern int thunk_FUN_110f8530(...);
extern int thunk_FUN_111046c0(...);
extern int thunk_FUN_11136780(...);
extern int thunk_FUN_11136870(...);
extern int thunk_FUN_11138b60(...);
extern int thunk_FUN_111392b0(...);
extern int thunk_FUN_1113ea20(...);
extern int thunk_FUN_1113eb00(...);
extern int thunk_FUN_1113ecc0(...);
extern int thunk_FUN_1114a810(...);
extern int thunk_FUN_1114f320(...);
extern int thunk_FUN_11167180(...);
extern int thunk_FUN_1116d520(...);
extern int thunk_FUN_1118aa30(...);
extern int thunk_FUN_1118adc0(...);
extern int thunk_FUN_1118d230(...);
extern int thunk_FUN_111a0940(...);
extern int thunk_FUN_111a2df0(...);
extern int thunk_FUN_111a4bc0(...);
extern int thunk_FUN_111a7100(...);
extern int thunk_FUN_111a7630(...);
extern int thunk_FUN_111a7be0(...);
extern int thunk_FUN_111af700(...);
extern int thunk_FUN_111c1530(...);
extern int thunk_FUN_111d3d00(...);
extern int thunk_FUN_111f3f50(...);
extern int thunk_FUN_111f4c10(...);
extern int thunk_FUN_111f6cc0(...);
extern int thunk_FUN_111f6d60(...);
extern int thunk_FUN_111f77e0(...);
extern int thunk_FUN_111f7800(...);
extern int thunk_FUN_111f7860(...);
extern int thunk_FUN_111feb20(...);
extern int thunk_FUN_111feb50(...);
extern int thunk_FUN_11202570(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_11245a50(...);
extern int thunk_FUN_11245bb0(...);
extern int thunk_FUN_11246070(...);
extern int thunk_FUN_11246be0(...);
extern int thunk_FUN_112470f0(...);
extern int thunk_FUN_112471a0(...);
extern int thunk_FUN_1124f350(...);
extern int thunk_FUN_1124f3c0(...);
extern int thunk_FUN_1124ffa0(...);
extern int thunk_FUN_11261f10(...);
extern int thunk_FUN_1127caf0(...);
extern int thunk_FUN_1127cb00(...);
extern int thunk_FUN_1127cc80(...);
extern int thunk_FUN_1127f190(...);
extern int thunk_FUN_112818d0(...);
extern int thunk_FUN_11281950(...);
extern int thunk_FUN_11284360(...);
extern int thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_112a8d70(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_1138fd50(...);
extern int thunk_FUN_11456830(...);
extern int thunk_FUN_11456fc0(...);
extern int thunk_FUN_11457040(...);
extern int thunk_FUN_114574f0(...);
extern int thunk_FUN_11457670(...);
extern int thunk_FUN_11458220(...);
extern int thunk_FUN_114586f0(...);
extern int thunk_FUN_11458720(...);
extern int thunk_FUN_11458820(...);
extern int thunk_FUN_11458830(...);
extern int thunk_FUN_11458870(...);
extern int thunk_FUN_11458880(...);
extern int thunk_FUN_114588c0(...);
extern int thunk_FUN_114588f0(...);
extern int thunk_FUN_11458910(...);
extern int thunk_FUN_11458940(...);
extern int thunk_FUN_11458970(...);
extern int thunk_FUN_114589e0(...);
extern int thunk_FUN_114589f0(...);
extern int thunk_FUN_11458a00(...);
extern int thunk_FUN_11458a30(...);
extern int thunk_FUN_11458a40(...);
extern int thunk_FUN_11458a50(...);
extern int thunk_FUN_11458a60(...);
extern int thunk_FUN_11458a90(...);
extern int thunk_FUN_11458e90(...);
extern int thunk_FUN_11458fa0(...);
extern int thunk_FUN_114595b0(...);
extern int thunk_FUN_1145c250(...);
extern int thunk_FUN_1145c720(...);
extern int thunk_FUN_11465e10(...);
extern int thunk_FUN_11467010(...);
extern int thunk_FUN_1146c9e0(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int utf8_length(...);
extern int DAT_1186d2ee;
extern int DAT_11882ff0;
extern int DAT_1195e878;
extern int DAT_1211a564;
extern int DAT_1211a56c;
extern int DAT_1211a570;
extern int DAT_12126b84;
extern int DAT_121a7b5d;
extern int DAT_121a7b60;
extern int DAT_121a7ba0;
extern int DAT_121a7ba4;
extern int DAT_121b54e0;
extern int DAT_122af408;
extern int _DAT_121a7b64;
extern int g_lSCObjCount;
extern int ghidra_vftable_RAsyncURITranslator;
extern int ghidra_vftable_RCPBrowseOperation;
extern int ghidra_vftable_RCPBrowseOperationCB;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RFlashPlayerLastChangeCallback;
extern int ghidra_vftable_RFlashPlayerMediaServerCallback;
extern int ghidra_vftable_RFlashPlayerNotifyBodyParserCallback;
extern int ghidra_vftable_RFlashPlayerZoneGroupStateCallback;
extern int ghidra_vftable_RLookupMetadataAIOOp;
extern int ghidra_vftable_RMSDListProcessorWithLogos;
extern int ghidra_vftable_ROAuthCB;
extern int ghidra_vftable_RPresentationMap;
extern int ghidra_vftable_RPresentationMapCB;
extern int ghidra_vftable_RRadioTimeContentProvider;
extern int ghidra_vftable_RSOAPFaultHandler;
extern int ghidra_vftable_RSonosAAURITranslator;
extern int ghidra_vftable_RTrackRatingsEventHandler;
extern int ghidra_vftable_RWrapperBrowseOp;
extern int ghidra_vftable_RZPSortOrderManager;
extern int ghidra_vftable_RefCountBase;
extern int ghidra_vftable_SCAggregateHelper;
extern int ghidra_vftable_SCArray;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCInfoViewTextPaneMetadata;
extern int ghidra_vftable_SCJPGBitmapLoader;
extern int ghidra_vftable_SCNowPlayingRatings;
extern int ghidra_vftable_SCNowPlayingSleepTimer;
extern int ghidra_vftable_SCOpGenericUpdateQueue;
extern int ghidra_vftable_SCPMapStreamBadger;
extern int ghidra_vftable_SCPNGBitmapLoader;
extern int ghidra_vftable_SCSelectRoomsCompleteState;
extern int ghidra_vftable_SCSelectRoomsInitState;
extern int ghidra_vftable_SCSwfObjJHHInternalListener;
extern int ghidra_vftable_SwfObjMediaServer;
extern int ghidra_vftable_SwfObjRadioTimeCP;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int ghidra_vftable_std_Ref_count_obj2;
extern int in_EAX;
extern int in_stack_00000010;
extern int uStack_8;
extern undefined1 LAB_1003ddb6[];
extern undefined1 LAB_10ff820f[];
extern undefined1 LAB_1101e262[];
extern undefined1 LAB_11791770[];
extern undefined1 LAB_11795460[];
extern undefined1 LAB_1179a320[];
extern int *PTR_DAT_1211a5d0;
extern int *PTR_DAT_1211d600;
extern int *PTR_DAT_1211d604;
extern int *PTR_DAT_1211d608;
extern int *PTR_DAT_1211d60c;
extern int *PTR_DAT_1211d610;
extern int *PTR_DAT_1211d618;
extern int *PTR_s_other_1211d614;
extern int *stack0x0000000c;
extern int *stack0xfffffffc;
extern void *ExceptionList;
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int append(A...); template<class... A> int format(A...); template<class... A> int int_allocRep(A...); template<class... A> int op_ctor(A...); template<class... A> int op_eq(A...); template<class... A> int utf8_length(A...); };
typedef void *F;
typedef void *H;
typedef void *HWND;
typedef void *LOCK;
typedef void *R;
typedef void *SID;
typedef void *UID;
typedef void *UNLOCK;
typedef void *WARNING;
struct ActionScriptTrace { char _pad; ActionScriptTrace(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct CurrentCrossfadeMode { char _pad; CurrentCrossfadeMode(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct EnqueuedTransportURIMetaData { char _pad; EnqueuedTransportURIMetaData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Globals { char _pad; Globals(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Hi { char _pad; Hi(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct HouseholdID { char _pad; HouseholdID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct InstanceID { char _pad; InstanceID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct MediaServer { char _pad; MediaServer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct MuseHouseholdID { char _pad; MuseHouseholdID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct NewSortOrder { char _pad; NewSortOrder(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct NextTrackMetaData { char _pad; NextTrackMetaData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct OnPostHouseholdEvent { char _pad; OnPostHouseholdEvent(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct OnSecureSettingsChanged { char _pad; OnSecureSettingsChanged(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct OnSettingsChanged { char _pad; OnSettingsChanged(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct OnStopSearchForZonePlayers { char _pad; OnStopSearchForZonePlayers(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct OnTestEnvChanged { char _pad; OnTestEnvChanged(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct OnThirdPartyMSsChanged { char _pad; OnThirdPartyMSsChanged(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Op { char _pad; Op(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct PlayQueue { char _pad; PlayQueue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct PostMessageA { char _pad; PostMessageA(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ProductRegID { char _pad; ProductRegID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RDMValue { char _pad; RDMValue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIDeviceMusicEqualization { char _pad; SCIDeviceMusicEqualization(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINowPlaying { char _pad; SCINowPlaying(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCSwfObjJHHInternalListener { char _pad; SCSwfObjJHHInternalListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SetEvent { char _pad; SetEvent(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SwfStr { char _pad; SwfStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct TransportErrorHttpCode { char _pad; TransportErrorHttpCode(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct UpdateID { char _pad; UpdateID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered_Bulk { char _pad; void __thiscall FUN_10fef730(undefined4 *param_2); void __thiscall FUN_10fef750(undefined4 *param_2); void __thiscall FUN_10fef770(undefined4 *param_2); void __thiscall FUN_10fef790(undefined4 *param_2); void __thiscall FUN_10ff0dc0(undefined4 param_2,undefined4 param_3); SCStr * __thiscall FUN_10ff15e0(SCStr *param_2,int param_3,undefined4 param_4); SCStr * __thiscall FUN_10ff20b0(SCStr *param_2); SCStr * __thiscall FUN_10ff2b20(SCStr *param_2); void __thiscall FUN_10ff8430(undefined4 *param_2); void __thiscall FUN_10ff8480(undefined4 *param_2); void __thiscall FUN_10ff8cb0(undefined4 param_2); void __thiscall FUN_10ff8cf0(undefined4 param_2); undefined4 * __thiscall FUN_10ffb2b0(byte param_2); void __thiscall FUN_10ffb670(undefined4 *param_2); void __thiscall FUN_10ffc070(undefined4 param_2,undefined4 param_3); SCStr * __thiscall FUN_10ffcdc0(SCStr *param_2); SCStr * __thiscall FUN_10ffce10(SCStr *param_2); void __thiscall FUN_10ffd210(int param_2); void __thiscall FUN_10ffd290(int param_2); undefined4 * __thiscall FUN_10fffbb0(byte param_2); SCStr * __thiscall FUN_11002ae0(SCStr *param_2); undefined1 __thiscall FUN_11005070(undefined4 param_2); undefined1 __thiscall FUN_110050a0(undefined4 param_2); undefined1 __thiscall FUN_110051f0(undefined4 param_2); undefined4 __thiscall FUN_11019440(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_1101ac40(undefined4 param_2); undefined4 __thiscall FUN_1101b940(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_1101b9a0(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_1101b9e0(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_1101ba20(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_1101d760(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_1101d780(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_1101d8d0(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_1101d8f0(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_1101d9a0(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_1101da00(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_1101dbb0(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_1101dc20(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_1101de90(undefined4 param_2,undefined4 param_3); void __thiscall FUN_1101e240(int param_2); undefined4 __thiscall FUN_11020510(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_11020590(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_110205d0(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_110205f0(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 __thiscall FUN_11020620(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_11020640(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_11020660(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_11020680(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_110206a0(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 __thiscall FUN_110206d0(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_11020730(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_11022230(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_11022270(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5); undefined4 __thiscall FUN_11022350(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_110223c0(undefined4 param_2,undefined4 param_3); int __thiscall FUN_11023790(int *param_2); void __thiscall FUN_11025940(undefined4 *param_2); SCStr * __thiscall FUN_1102b260(SCStr *param_2); void __thiscall FUN_1102db30(undefined4 *param_2); SCStr * __thiscall FUN_11030e00(SCStr *param_2); undefined4 * __thiscall FUN_110389b0(undefined4 param_2); undefined4 * __thiscall FUN_1103c270(undefined4 param_2); void __thiscall FUN_1103ea20(int param_2); void __thiscall FUN_1103ea70(int param_2); undefined4 __thiscall FUN_11057300(undefined4 param_2); void __thiscall FUN_11057340(int param_2); undefined4 __thiscall FUN_11057690(undefined4 param_2); undefined4 __thiscall FUN_110576b0(undefined4 param_2); void __thiscall FUN_1105dd20(undefined4 param_2); undefined4 __thiscall FUN_1105e3c0(uint param_2); undefined4 __thiscall FUN_1105eb10(int param_2); undefined4 * __thiscall FUN_1105f420(undefined4 param_2); undefined4 * __thiscall FUN_11062370(undefined4 param_2); undefined4 * __thiscall FUN_110623b0(undefined4 param_2); undefined4 * __thiscall FUN_110623f0(undefined4 param_2); undefined4 * __thiscall FUN_11062430(undefined4 param_2); undefined4 * __thiscall FUN_11062470(undefined4 param_2); undefined4 * __thiscall FUN_110624b0(undefined4 param_2); undefined4 * __thiscall FUN_110624f0(undefined4 param_2); undefined4 __thiscall FUN_11065fc0(char *param_2,uint param_3); undefined4 * __thiscall FUN_11065fe0(undefined4 param_2); SCStr * __thiscall FUN_11066fe0(SCStr *param_2); int __thiscall FUN_110722a0(uint *param_2); int __thiscall FUN_110722e0(uint *param_2); int __thiscall FUN_11072320(undefined4 param_2); int __thiscall FUN_11072370(undefined4 param_2); undefined4 * __thiscall FUN_1107b550(byte param_2); undefined4 * __thiscall FUN_1107b5d0(byte param_2); void __thiscall FUN_1107ee00(int param_2); void __thiscall FUN_1107ee50(int param_2); void __thiscall FUN_1107eea0(int param_2); void __thiscall FUN_1107eef0(int param_2); void __thiscall FUN_1107ef40(int param_2); void __thiscall FUN_1107ef90(int param_2); void __thiscall FUN_1107efe0(int param_2); void __thiscall FUN_1107f030(int param_2); void __thiscall FUN_1107f080(int param_2); void __thiscall FUN_1107f0c0(int param_2); void __thiscall FUN_1107f100(int param_2); void __thiscall FUN_1107f140(int param_2); undefined4 __thiscall FUN_110937d0(undefined4 param_2); undefined4 __thiscall FUN_11093800(undefined4 param_2); undefined4 __thiscall FUN_11093d10(undefined4 param_2); undefined4 __thiscall FUN_11093d50(undefined4 param_2,undefined4 param_3); void __thiscall FUN_11097130(undefined4 param_2); undefined4 __thiscall FUN_110974e0(undefined4 param_2); void __thiscall FUN_110977e0(undefined4 param_2); int __thiscall FUN_11098860(undefined4 param_2); void __thiscall FUN_1109dee0(int param_2); void __thiscall FUN_1109ef90(undefined4 param_2,undefined4 param_3); void __thiscall FUN_1109f0a0(undefined4 param_2,undefined4 param_3,undefined4 param_4); void __thiscall FUN_1109f100(undefined4 param_2,undefined4 param_3); void __thiscall FUN_1109f280(undefined4 param_2,undefined4 param_3); void __thiscall FUN_1109f320(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_110a3080(undefined4 param_2); uint __thiscall FUN_110a5340(uint param_2); int __thiscall FUN_110a6770(undefined4 param_2,undefined4 param_3); int __thiscall FUN_110a67b0(undefined4 param_2,undefined4 param_3); void __thiscall FUN_110ac250(undefined4 param_2); void __thiscall FUN_110b4850(int param_2); undefined4 * __thiscall FUN_110b5610(undefined4 param_2,int *param_3); undefined4 * __thiscall FUN_110b5900(byte param_2); void __thiscall FUN_110b60e0(void); void __thiscall FUN_110bf210(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 __thiscall FUN_110bf3e0(undefined4 param_2); undefined4 __thiscall FUN_110bf600(undefined4 param_2); undefined4 __thiscall FUN_110bf630(undefined4 param_2); undefined4 __thiscall FUN_110bf660(undefined4 param_2); undefined4 * __thiscall FUN_110c0eb0(byte param_2); void __thiscall FUN_110c1190(undefined4 param_2); void __thiscall FUN_110c1920(int param_2); void __thiscall FUN_110c1970(int param_2); void __thiscall FUN_110c19c0(int param_2); void __thiscall FUN_110c1a10(int param_2); void __thiscall FUN_110c4940(undefined4 param_2); int __thiscall FUN_110c5770(undefined4 param_2,undefined4 param_3); int __thiscall FUN_110c57b0(undefined4 param_2); undefined4 __thiscall FUN_110c9050(byte param_2); void __thiscall FUN_110c9cb0(int param_2); void __thiscall FUN_110c9cf0(int param_2); void __thiscall FUN_110c9d30(int param_2); void __thiscall FUN_110c9d70(int param_2); void __thiscall FUN_110c9db0(int param_2); void __thiscall FUN_110c9df0(int param_2); void __thiscall FUN_110c9e30(int param_2); void __thiscall FUN_110c9e70(int param_2); void __thiscall FUN_110c9eb0(int param_2); void __thiscall FUN_110c9ef0(int param_2); void __thiscall FUN_110c9f30(int param_2); void __thiscall FUN_110c9f70(int param_2); void __thiscall FUN_110c9fb0(int param_2); void __thiscall FUN_110c9ff0(int param_2); void __thiscall FUN_110d2ec0(undefined4 param_2); void __thiscall FUN_110d3030(undefined4 param_2); void __thiscall FUN_110d3070(undefined4 param_2); void __thiscall FUN_110d7950(undefined4 param_2); undefined4 * __thiscall FUN_110d9bc0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_110dcd90(byte param_2); undefined4 * __thiscall FUN_110dcdd0(byte param_2); undefined4 __thiscall FUN_110e09c0(undefined4 param_2,short *param_3); void __thiscall FUN_110e20d0(undefined4 *param_2); void __thiscall FUN_110ed2d0(undefined1 *param_2); void __thiscall FUN_110edc00(undefined4 param_2); void __thiscall FUN_110ee040(undefined4 param_2); int __thiscall FUN_110ee0d0(undefined4 param_2); void __thiscall FUN_110f1790(int param_2); void __thiscall FUN_110f2af0(char *param_2); void __thiscall FUN_110f2b40(char *param_2); undefined4 * __thiscall FUN_110f66a0(undefined4 param_2); int __thiscall FUN_110f6ac0(int param_2); undefined4 * __thiscall FUN_110f6c10(byte param_2); undefined4 * __thiscall FUN_110f6c60(byte param_2); undefined4 * __thiscall FUN_110f6cb0(byte param_2); undefined4 * __thiscall FUN_110f6d00(byte param_2); };
using namespace std;
void __stdcall FUN_10ff0d00(int param_1,int param_2);
void __stdcall FUN_10ff0d50(int param_1,int param_2);
int __fastcall FUN_10ff1960(int param_1);
undefined4 FUN_10ff1ad0(int param_1);
undefined4 __stdcall FUN_10ff1ce0(int param_1);
undefined4 __stdcall FUN_10ff1d00(int param_1);
undefined1 FUN_10ff3020(int param_1);
undefined4 __fastcall FUN_10ff6e20(int param_1);
undefined4 FUN_10ff6e80(int param_1);
undefined4 __fastcall FUN_10ff6f60(int param_1);
void __fastcall FUN_10ff81f0(int param_1);
void __fastcall FUN_10ffaf90(undefined4 *param_1);
byte __fastcall FUN_10ffcab0(int param_1);
undefined4 __fastcall FUN_10ffce70(int param_1);
undefined4 __fastcall FUN_10ffd060(int *param_1);
void __fastcall FUN_10ffd5c0(int *param_1);
undefined4 __fastcall FUN_10ffec20(int *param_1);
void __fastcall FUN_10fff880(undefined4 *param_1);
undefined4 FUN_10fffc00(SCStr *param_1);
void __fastcall FUN_10fffc90(int param_1);
undefined4 __fastcall FUN_110031b0(int *param_1);
void __stdcall FUN_1100bf00(int param_1);
void __stdcall FUN_1100bf20(int param_1);
void __fastcall FUN_11010200(int *param_1);
void __fastcall FUN_11011870(int param_1);
undefined4 * __fastcall FUN_11012070(undefined4 param_1);
undefined4 * __fastcall FUN_110120b0(undefined4 param_1);
undefined4 __fastcall FUN_1101ae40(int param_1);
void __fastcall FUN_1101ae90(int param_1);
void __fastcall FUN_1101aec0(int param_1);
void __fastcall FUN_1101b900(int *param_1);
undefined1 FUN_1101bc00(SCStr *param_1);
undefined4 __stdcall FUN_1101d950(char *param_1);
void __fastcall FUN_1101e080(int param_1);
void __fastcall FUN_110207a0(int *param_1);
void __fastcall FUN_110207d0(int *param_1);
void __fastcall FUN_11020930(int *param_1);
void __fastcall FUN_11020970(int *param_1);
void __fastcall FUN_110209d0(int *param_1);
void __fastcall FUN_11020a10(int *param_1);
undefined1 FUN_11020e70(SCStr *param_1);
void __stdcall FUN_11023740(undefined4 param_1,int *param_2);
undefined4 * __fastcall FUN_11026290(undefined4 *param_1);
void __fastcall FUN_11026c30(undefined4 *param_1);
undefined4
__stdcall FUN_11029700(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6);
void __fastcall FUN_11029730(int param_1);
undefined4
__stdcall FUN_11029780(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7);
void __stdcall FUN_1102ad90(int param_1,int param_2);
void __fastcall FUN_1102bc40(int param_1);
void __fastcall FUN_1102f590(int *param_1);
undefined4 FUN_11030cd0(undefined4 param_1);
undefined4 FUN_11030d10(void);
undefined4 __fastcall FUN_11034eb0(int param_1);
undefined4 __fastcall FUN_11037760(int param_1);
undefined4 __fastcall FUN_11037790(int param_1);
undefined4 __fastcall FUN_110377b0(int param_1);
undefined4 __fastcall FUN_110377f0(int param_1);
bool __fastcall FUN_11038200(int param_1);
void __fastcall FUN_110382c0(int param_1);
void __fastcall FUN_110382f0(int param_1);
undefined1 FUN_11038930(short *param_1,uint param_2);
void __fastcall FUN_11038960(int param_1);
void __fastcall FUN_11038a00(undefined4 *param_1);
void FUN_11038b00(undefined4 param_1);
undefined1 FUN_110390a0(undefined4 param_1,uint param_2);
void __fastcall FUN_11039240(undefined4 *param_1);
void FUN_11039d80(int param_1);
void __fastcall FUN_11039fa0(int param_1);
undefined4 FUN_1103a220(short *param_1,uint param_2);
undefined4 __fastcall FUN_1103c520(int *param_1);
int * __fastcall FUN_1103c620(int *param_1);
void __fastcall FUN_1103ed40(int *param_1);
void __fastcall FUN_1103ed80(int *param_1);
undefined4 * __fastcall FUN_11041c30(undefined4 *param_1);
void __fastcall FUN_11042830(int param_1);
undefined4 * __stdcall FUN_11042ef0(undefined4 *param_1);
undefined4 __fastcall FUN_110435c0(int *param_1);
undefined4 __fastcall FUN_11043610(int *param_1);
undefined4 __stdcall FUN_11044450(undefined4 param_1,undefined4 param_2);
undefined4 FUN_11044510(undefined4 param_1);
int * __fastcall FUN_11045280(int *param_1);
undefined4 __stdcall FUN_11045600(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_11045620(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_11046c90(undefined4 param_1,undefined4 param_2);
undefined4 FUN_11047dc0(void);
undefined4 __fastcall FUN_110496d0(int *param_1);
undefined4 __fastcall FUN_1104e9e0(int *param_1);
undefined4 __fastcall FUN_1104ea90(int param_1);
undefined1 __fastcall FUN_1104fdc0(int *param_1);
uint __fastcall FUN_110525b0(int param_1);
byte FUN_11052840(void);
uint __fastcall FUN_110533e0(int param_1);
undefined1 FUN_110547c0(undefined4 param_1);
void __fastcall FUN_110564a0(undefined4 *param_1);
undefined4 __fastcall FUN_1105a9a0(int *param_1);
int * __fastcall FUN_1105be20(int *param_1);
undefined4 __fastcall FUN_1105c3b0(int *param_1);
undefined4 FUN_1105ce90(int param_1);
undefined4 FUN_11060810(undefined4 param_1);
undefined4 __fastcall FUN_11062cd0(int param_1);
undefined4 __fastcall FUN_11067d50(int param_1);
undefined4 __fastcall FUN_11067db0(int param_1);
int FUN_11069bc0(byte *param_1);
void FUN_1106b190(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_1106b1c0(undefined4 param_1);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_1106b260(uint param_1);
int __fastcall FUN_1106f230(int param_1);
undefined4 __fastcall FUN_1106f270(int param_1);
void __stdcall FUN_11072020(undefined4 param_1,int *param_2);
void __stdcall FUN_11072070(undefined4 param_1,int *param_2);
undefined4 * __fastcall FUN_11076be0(undefined4 *param_1);
undefined4 * __fastcall FUN_11076c20(undefined4 *param_1);
undefined4 * __fastcall FUN_11076c60(undefined4 *param_1);
undefined4 * __fastcall FUN_11076ca0(undefined4 *param_1);
void __fastcall FUN_11079970(undefined4 *param_1);
void __fastcall FUN_1107a0a0(undefined4 *param_1);
undefined4 FUN_1107e300(undefined4 *param_1);
void __stdcall FUN_110802c0(int param_1,int param_2);
void __stdcall FUN_11080310(int param_1,int param_2);
void __fastcall FUN_11080520(int *param_1);
void __fastcall FUN_11080560(int *param_1);
void __fastcall FUN_110805a0(int *param_1);
void __fastcall FUN_110805e0(int *param_1);
void FUN_11080e90(void);
undefined4 __fastcall FUN_110810d0(int param_1);
undefined4 __fastcall FUN_11081650(int param_1);
uint __fastcall FUN_110833f0(int param_1);
void FUN_11090e20(void);
void FUN_110916b0(char param_1);
int * FUN_110939e0(undefined4 param_1,undefined4 param_2);
void __fastcall FUN_11094310(int param_1);
void FUN_11094360(void);
void FUN_11094380(void);
void FUN_11094590(void);
void FUN_110945b0(void);
void FUN_110945d0(void);
void FUN_110945f0(void);
undefined4 __stdcall FUN_110958a0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __fastcall FUN_11096620(int param_1);
undefined1 FUN_11096c40(undefined4 param_1);
void FUN_110978f0(void);
void FUN_11097ab0(char param_1);
undefined4 __stdcall FUN_110984c0(uint param_1,undefined4 param_2,int param_3);
undefined4 * __fastcall FUN_11098ef0(undefined4 *param_1);
undefined * FUN_1109aed0(undefined4 param_1);
void __fastcall FUN_1109c020(int param_1);
void __fastcall FUN_1109e380(int *param_1);
undefined2 FUN_1109ed30(void);
undefined2 FUN_1109ed60(void);
void FUN_1109f210(undefined4 param_1);
bool __fastcall FUN_110a0fd0(int param_1);
undefined4 __fastcall FUN_110a1230(int param_1);
undefined4 __fastcall FUN_110a12a0(int param_1);
void FUN_110a4fa0(undefined4 param_1,undefined4 param_2);
undefined4 * __fastcall FUN_110a8600(undefined4 *param_1);
undefined4 * __fastcall FUN_110a8630(undefined4 *param_1);
undefined4 * __fastcall FUN_110a8660(undefined4 *param_1);
int __stdcall FUN_110aa6d0(undefined4 param_1);
int __stdcall FUN_110aa700(undefined4 param_1);
bool __fastcall FUN_110add70(int param_1);
bool __stdcall FUN_110b0c50(undefined4 param_1);
bool FUN_110b23a0(int param_1,int param_2);
undefined4 __stdcall FUN_110b43b0(undefined4 param_1,undefined4 param_2);
void __fastcall FUN_110b5890(undefined4 *param_1);
undefined4 __stdcall FUN_110b5c70(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 __stdcall FUN_110b5e60(undefined4 param_1,undefined4 param_2);
undefined4 * FUN_110b7de0(undefined4 *param_1);
undefined1 * FUN_110b89b0(undefined4 param_1,undefined4 param_2);
undefined4 FUN_110b8e40(undefined4 param_1);
undefined4 FUN_110b8e90(undefined4 param_1);
void FUN_110b8ef0(undefined4 param_1);
undefined4 FUN_110b8fc0(undefined4 param_1);
undefined4 FUN_110b9130(undefined4 param_1);
undefined4 FUN_110b9200(undefined4 *param_1);
undefined4 FUN_110b9230(undefined4 param_1);
undefined4 FUN_110b9280(undefined4 *param_1);
undefined4 FUN_110b92b0(undefined4 param_1);
bool FUN_110b93b0(undefined4 param_1);
bool FUN_110b9430(undefined4 param_1);
undefined4 FUN_110b9590(undefined4 param_1);
undefined4 FUN_110b9610(undefined4 param_1);
undefined4 FUN_110b9940(undefined4 *param_1);
void __stdcall FUN_110bc830(undefined4 param_1,undefined1 *param_2,undefined4 param_3);
void __fastcall FUN_110c0940(undefined4 *param_1);
void FUN_110c1a60(void);
undefined4 __fastcall FUN_110c1a90(int param_1);
void __fastcall FUN_110c1e70(int *param_1);
undefined4 FUN_110c20d0(undefined4 param_1);
undefined4 __fastcall FUN_110c35b0(int param_1);
undefined4 __fastcall FUN_110c3e90(int param_1);
uint __fastcall FUN_110c4a10(int *param_1);
uint __fastcall FUN_110c4a40(int *param_1);
uint __fastcall FUN_110c4a70(int *param_1);
uint __fastcall FUN_110c4ae0(int *param_1);
uint __fastcall FUN_110c4b00(int *param_1);
undefined4 * __fastcall FUN_110c65a0(undefined4 *param_1);
void FUN_110c7e50(void);
int __stdcall FUN_110c8bc0(undefined4 param_1);
undefined1 __fastcall FUN_110ca230(int param_1);
undefined4 FUN_110ca780(undefined4 *param_1);
undefined4 __fastcall FUN_110cadc0(int param_1);
void __fastcall FUN_110caef0(int *param_1);
void __fastcall FUN_110caf30(int *param_1);
void __fastcall FUN_110caf70(int *param_1);
void __fastcall FUN_110cafb0(int *param_1);
void __fastcall FUN_110caff0(int *param_1);
void __fastcall FUN_110cb030(int *param_1);
void __fastcall FUN_110cb070(int *param_1);
void __fastcall FUN_110cb0b0(int *param_1);
void __fastcall FUN_110cb0f0(int *param_1);
void __fastcall FUN_110cb130(int *param_1);
void __fastcall FUN_110cb170(int *param_1);
void __fastcall FUN_110cb1b0(int *param_1);
void __fastcall FUN_110cb1f0(int *param_1);
void __fastcall FUN_110cb230(int *param_1);
void __fastcall FUN_110cb270(int *param_1);
undefined4 __stdcall FUN_110cc260(undefined4 param_1);
undefined2 __fastcall FUN_110ce370(int param_1);
undefined4 __stdcall FUN_110ceab0(undefined4 param_1);
char * __fastcall FUN_110cead0(int param_1);
undefined4 __stdcall FUN_110d1d10(undefined4 param_1);
undefined1 __fastcall FUN_110d2700(int param_1);
uint __fastcall FUN_110d2720(int param_1);
undefined1 __fastcall FUN_110d3140(int param_1);
undefined1 __fastcall FUN_110d4080(int param_1);
undefined1 __fastcall FUN_110d55a0(int param_1);
undefined1 __fastcall FUN_110d5760(int param_1);
bool __fastcall FUN_110d5780(int param_1);
undefined1 __fastcall FUN_110d88a0(int param_1);
undefined1 __fastcall FUN_110d88c0(int param_1);
undefined1 __fastcall FUN_110d88e0(int param_1);
undefined1 __fastcall FUN_110d8900(int param_1);
undefined1 __fastcall FUN_110d8930(int param_1);
undefined1 __fastcall FUN_110d8950(int param_1);
undefined1 __fastcall FUN_110d8970(int param_1);
undefined1 __fastcall FUN_110d89b0(int param_1);
undefined1 __fastcall FUN_110d89d0(int param_1);
undefined1 __fastcall FUN_110d89f0(int param_1);
undefined1 __fastcall FUN_110d8a30(int param_1);
undefined1 __fastcall FUN_110d8a50(int param_1);
undefined1 __fastcall FUN_110d8c40(int param_1);
undefined1 __fastcall FUN_110d8c60(int param_1);
undefined1 __fastcall FUN_110d8c80(int param_1);
undefined1 __fastcall FUN_110d8cb0(int param_1);
undefined1 __fastcall FUN_110d8d00(int param_1);
undefined1 __fastcall FUN_110d8d20(int param_1);
undefined1 __fastcall FUN_110d8d40(int param_1);
undefined1 __fastcall FUN_110d8d60(int param_1);
undefined1 __fastcall FUN_110d8d80(int param_1);
undefined1 __fastcall FUN_110d8dc0(int param_1);
uint __fastcall FUN_110d8de0(int param_1);
undefined4 __fastcall FUN_110d8e10(int param_1);
undefined4 __fastcall FUN_110d9b30(int param_1);
int __fastcall FUN_110da760(int param_1);
undefined4 __fastcall FUN_110db5c0(int *param_1);
void __fastcall FUN_110dc760(undefined4 *param_1);
void __fastcall FUN_110dc880(undefined4 *param_1);
void __fastcall FUN_110dc8a0(undefined4 *param_1);
uint __fastcall FUN_110de320(int param_1);
int __fastcall FUN_110de640(int param_1);
undefined4 __fastcall FUN_110def50(int param_1);
void __fastcall FUN_110e1d30(int param_1);
undefined4 __fastcall FUN_110e28d0(int param_1);
void __fastcall FUN_110e2c60(int param_1);
void __fastcall FUN_110e3660(int param_1);
void __fastcall FUN_110e70a0(int param_1);
undefined1 FUN_110e7d10(char param_1);
void __fastcall FUN_110e9120(undefined4 *param_1);
void __fastcall FUN_110e9160(undefined4 *param_1);
void __fastcall FUN_110e9320(undefined4 *param_1);
void __fastcall FUN_110e9370(undefined4 *param_1);
void __fastcall FUN_110ea940(int *param_1);
void __fastcall FUN_110ec740(int *param_1);
undefined4 __fastcall FUN_110ec780(int param_1);
int __fastcall FUN_110ec7a0(int param_1);
undefined4 __fastcall FUN_110ecc20(int *param_1);
undefined4 __fastcall FUN_110ecda0(int param_1);
int __fastcall FUN_110ecdc0(int param_1);
undefined4 FUN_110ecfe0(char *param_1);
void __fastcall FUN_110ed320(int param_1);
void __stdcall FUN_110ed980(undefined1 *param_1,int param_2);
undefined4 * __fastcall FUN_110ee540(undefined4 *param_1);
void __fastcall FUN_110f0460(int *param_1);
void __fastcall FUN_110f0490(int param_1);
void __fastcall FUN_110f04e0(int *param_1);
void __fastcall FUN_110f24b0(int *param_1);
undefined4 FUN_110f53b0(undefined4 param_1);
void __fastcall FUN_110f6650(int param_1);
void __fastcall FUN_110f6940(undefined4 *param_1);
void __fastcall FUN_110f6970(undefined4 *param_1);
void __fastcall FUN_110f69a0(undefined4 *param_1);
void __fastcall FUN_110f69d0(undefined4 *param_1);
// Reference entry 10fef730; body size 19 bytes.
#line 1 "ENTRY_10fef730"

void __thiscall Recovered_Bulk::FUN_10fef730(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10fef750; body size 19 bytes.
#line 1 "ENTRY_10fef750"

void __thiscall Recovered_Bulk::FUN_10fef750(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10fef770; body size 19 bytes.
#line 1 "ENTRY_10fef770"

void __thiscall Recovered_Bulk::FUN_10fef770(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10fef790; body size 19 bytes.
#line 1 "ENTRY_10fef790"

void __thiscall Recovered_Bulk::FUN_10fef790(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10ff0d00; body size 60 bytes.
#line 1 "ENTRY_10ff0d00"

void __stdcall FUN_10ff0d00(int param_1,int param_2)

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


// Reference entry 10ff0d50; body size 60 bytes.
#line 1 "ENTRY_10ff0d50"

void __stdcall FUN_10ff0d50(int param_1,int param_2)

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


// Reference entry 10ff0dc0; body size 22 bytes.
#line 1 "ENTRY_10ff0dc0"

void __thiscall Recovered_Bulk::FUN_10ff0dc0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 8))(param_3,param_2);
  }
  return;
}


// Reference entry 10ff15e0; body size 52 bytes.
#line 1 "ENTRY_10ff15e0"

SCStr * __thiscall Recovered_Bulk::FUN_10ff15e0(SCStr *param_2,int param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  if (param_3 == 9) {
    ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x50));
    return (SCStr *)(param_2);
  }
  thunk_FUN_104dad90(param_2,param_3,param_4);
  return (SCStr *)(param_2);
}


// Reference entry 10ff1960; body size 35 bytes.
#line 1 "ENTRY_10ff1960"

int __fastcall FUN_10ff1960(int param_1)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = (int)(0);
  for (pbVar2 = (byte *)((byte *)(param_1 + 0x128)); pbVar2 != (byte *)(param_1 + 0x138); pbVar2 = pbVar2 + 1)
  {
    iVar1 = (int)(iVar1 + (char)(&DAT_1195e878)[*pbVar2]);
  }
  return (int)(iVar1);
}


// Reference entry 10ff1ad0; body size 44 bytes.
#line 1 "ENTRY_10ff1ad0"

undefined4 FUN_10ff1ad0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (char)(thunk_FUN_10ff8d30());
  if ((cVar1 == '\0') && (param_1 == 2)) {
    return (undefined4)(4);
  }
  uVar2 = (undefined4)(thunk_FUN_104d8ab0(param_1));
  return (undefined4)(uVar2);
}


// Reference entry 10ff1ce0; body size 18 bytes.
#line 1 "ENTRY_10ff1ce0"

undefined4 __stdcall FUN_10ff1ce0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(0);
  if (param_1 == 2) {
    uVar1 = (undefined4)(0x58);
  }
  return (undefined4)(uVar1);
}


// Reference entry 10ff1d00; body size 18 bytes.
#line 1 "ENTRY_10ff1d00"

undefined4 __stdcall FUN_10ff1d00(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(0);
  if (param_1 == 2) {
    uVar1 = (undefined4)(0xc0);
  }
  return (undefined4)(uVar1);
}


// Reference entry 10ff20b0; body size 48 bytes.
#line 1 "ENTRY_10ff20b0"

SCStr * __thiscall Recovered_Bulk::FUN_10ff20b0(SCStr *param_2)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x24))(param_2,0);
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 10ff2b20; body size 46 bytes.
#line 1 "ENTRY_10ff2b20"

SCStr * __thiscall Recovered_Bulk::FUN_10ff2b20(SCStr *param_2)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x1c))(param_2);
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 10ff3020; body size 26 bytes.
#line 1 "ENTRY_10ff3020"

undefined1 FUN_10ff3020(int param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_10ff8d30());
  if ((cVar1 == '\0') && (param_1 == 2)) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 10ff6e20; body size 27 bytes.
#line 1 "ENTRY_10ff6e20"

undefined4 __fastcall FUN_10ff6e20(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x20) + 0x80))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10ff6e80; body size 29 bytes.
#line 1 "ENTRY_10ff6e80"

undefined4 FUN_10ff6e80(int param_1)

{
  if (((param_1 != 0) && (param_1 != 5)) && (param_1 != 6)) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 10ff6f60; body size 32 bytes.
#line 1 "ENTRY_10ff6f60"

undefined4 __fastcall FUN_10ff6f60(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0xb4) != 0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xcc) + 0x3c))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10ff81f0; body size 60 bytes.
#line 1 "ENTRY_10ff81f0"

void __fastcall FUN_10ff81f0(int param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)((int *)thunk_FUN_110828b0());
  if (piVar2 != (int *)0x0) {
    cVar1 = (char)((**(code **)(*piVar2 + 0x3c))());
    if (cVar1 != '\0') {
      cVar1 = (char)('\x01');
      goto LAB_10ff820f;
    }
  }
  cVar1 = (char)('\0');
LAB_10ff820f:
  if (*(char *)(param_1 + 0x88) != cVar1) {
    *(char *)(param_1 + 0x88) = cVar1;
    thunk_FUN_10ff3290();
  }
  return;
}


// Reference entry 10ff8430; body size 59 bytes.
#line 1 "ENTRY_10ff8430"

void __thiscall Recovered_Bulk::FUN_10ff8430(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_10fe96d0(puVar1,param_2);
  return;
}


// Reference entry 10ff8480; body size 59 bytes.
#line 1 "ENTRY_10ff8480"

void __thiscall Recovered_Bulk::FUN_10ff8480(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_10fe9990(puVar1,param_2);
  return;
}


// Reference entry 10ff8cb0; body size 48 bytes.
#line 1 "ENTRY_10ff8cb0"

void __thiscall Recovered_Bulk::FUN_10ff8cb0(undefined4 param_2)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x28) + 0x18))(param_2);
  if ((*(int **)(param_1 + 0x20) != (int *)0x0) && (*(int *)(*(int *)(param_1 + 0x28) + 0x10) == 0))
  {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x20) + 0x18))();
    return;
  }
  return;
}


// Reference entry 10ff8cf0; body size 48 bytes.
#line 1 "ENTRY_10ff8cf0"

void __thiscall Recovered_Bulk::FUN_10ff8cf0(undefined4 param_2)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x38) + 0x18))(param_2);
  if ((*(int *)(*(int *)(param_1 + 0x38) + 0x10) == 0) && (*(int **)(param_1 + 0x30) != (int *)0x0))
  {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x30) + 0x18))();
    return;
  }
  return;
}


// Reference entry 10ffaf90; body size 37 bytes.
#line 1 "ENTRY_10ffaf90"

void __fastcall FUN_10ffaf90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAggregateHelper);
  thunk_FUN_10d5e1e0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10ffb2b0; body size 59 bytes.
#line 1 "ENTRY_10ffb2b0"

undefined4 * __thiscall Recovered_Bulk::FUN_10ffb2b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAggregateHelper);
  thunk_FUN_10d5e1e0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ffb670; body size 30 bytes.
#line 1 "ENTRY_10ffb670"

void __thiscall Recovered_Bulk::FUN_10ffb670(undefined4 *param_2)
{
  int param_1 = (int )this;
  if (param_2 != (undefined4 *)(param_1 + 8)) {
    thunk_FUN_10ff8fb0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),param_2);
  }
  return;
}


// Reference entry 10ffc070; body size 54 bytes.
#line 1 "ENTRY_10ffc070"

void __thiscall Recovered_Bulk::FUN_10ffc070(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = (undefined4)(param_2);
  local_4 = (undefined4)(param_3);
  thunk_FUN_10ffa820(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc),
                     *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 5,&local_8);
  return;
}


// Reference entry 10ffcab0; body size 29 bytes.
#line 1 "ENTRY_10ffcab0"

byte __fastcall FUN_10ffcab0(int param_1)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x34) == (int *)0x0) {
    return (byte)(0);
  }
  iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x34) + 0x8c))());
  return (byte)(-(iVar1 != 7) & 3);
}


// Reference entry 10ffcdc0; body size 46 bytes.
#line 1 "ENTRY_10ffcdc0"

SCStr * __thiscall Recovered_Bulk::FUN_10ffcdc0(SCStr *param_2)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x34) + 0x44))(param_2);
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 10ffce10; body size 46 bytes.
#line 1 "ENTRY_10ffce10"

SCStr * __thiscall Recovered_Bulk::FUN_10ffce10(SCStr *param_2)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x34) + 0x38))(param_2);
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 10ffce70; body size 24 bytes.
#line 1 "ENTRY_10ffce70"

undefined4 __fastcall FUN_10ffce70(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x34) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x34) + 0x20))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10ffd060; body size 42 bytes.
#line 1 "ENTRY_10ffd060"

undefined4 __fastcall FUN_10ffd060(int *param_1)

{
  char cVar1;
  
  if (param_1[0xd] == 0) {
    return (undefined4)(0);
  }
  cVar1 = (char)((**(code **)(*param_1 + 0x4c))());
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(int *)param_1[0xd] + 0x24))(), cVar1 == '\0')) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 10ffd210; body size 62 bytes.
#line 1 "ENTRY_10ffd210"

void __thiscall Recovered_Bulk::FUN_10ffd210(int param_2)
{
  int param_1 = (int )this;
  if (param_2 != 0) {
    if (((*(int *)(param_1 + 0x10) == 0) && (*(char *)(param_1 + 0x3c) == '\0')) &&
       (*(int **)(param_1 + 0x34) != (int *)0x0)) {
      (**(code **)(**(int **)(param_1 + 0x34) + 0x14))(param_1 + 0x28,0);
      *(undefined1 *)(param_1 + 0x3c) = 1;
    }
    thunk_FUN_103d61d0(param_2,0);
  }
  return;
}


// Reference entry 10ffd290; body size 56 bytes.
#line 1 "ENTRY_10ffd290"

void __thiscall Recovered_Bulk::FUN_10ffd290(int param_2)
{
  int param_1 = (int )this;
  if (param_2 != 0) {
    thunk_FUN_103d6930(param_2);
    if (((*(int *)(param_1 + 0x10) == 0) && (*(char *)(param_1 + 0x3c) != '\0')) &&
       (*(int **)(param_1 + 0x34) != (int *)0x0)) {
      (**(code **)(**(int **)(param_1 + 0x34) + 0x18))(param_1 + 0x28);
      *(undefined1 *)(param_1 + 0x3c) = 0;
    }
  }
  return;
}


// Reference entry 10ffd5c0; body size 60 bytes.
#line 1 "ENTRY_10ffd5c0"

void __fastcall FUN_10ffd5c0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 10ffec20; body size 28 bytes.
#line 1 "ENTRY_10ffec20"

undefined4 __fastcall FUN_10ffec20(int *param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x1c))());
  if ((cVar1 != '\0') && ((char)param_1[7] != '\0')) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 10fff880; body size 37 bytes.
#line 1 "ENTRY_10fff880"

void __fastcall FUN_10fff880(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInfoViewTextPaneMetadata);
  thunk_FUN_10202e00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10fffbb0; body size 62 bytes.
#line 1 "ENTRY_10fffbb0"

undefined4 * __thiscall Recovered_Bulk::FUN_10fffbb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInfoViewTextPaneMetadata);
  thunk_FUN_10202e00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xa4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fffc00; body size 31 bytes.
#line 1 "ENTRY_10fffc00"

undefined4 FUN_10fffc00(SCStr *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (uint)(((SCStr *)(param_1))->utf8_length());
  uVar2 = (undefined4)(DAT_1211a56c);
  if (DAT_1211a564 <= uVar1) {
    uVar2 = (undefined4)(DAT_1211a570);
  }
  return (undefined4)(uVar2);
}


// Reference entry 10fffc90; body size 23 bytes.
#line 1 "ENTRY_10fffc90"

void __fastcall FUN_10fffc90(int param_1)

{
  int iStack00000004;
  
  if (*(char *)(param_1 + 0x24) != '\0') {
                    
                    
    iStack00000004 = (int)(param_1);
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))();
    return;
  }
  return;
}


// Reference entry 11002ae0; body size 54 bytes.
#line 1 "ENTRY_11002ae0"

SCStr * __thiscall Recovered_Bulk::FUN_11002ae0(SCStr *param_2)
{
  int param_1 = (int )this;
  bool bVar1;
  int iVar2;
  
  if ((*(char **)(param_1 + 0x34) == (char *)0x0) || (**(char **)(param_1 + 0x34) == '\0')) {
    bVar1 = (bool)(false);
  }
  else {
    bVar1 = (bool)(true);
  }
  iVar2 = (int)(0x34);
  if (!bVar1) {
    iVar2 = (int)(8);
  }
  ((SCStr *)(param_2))->op_ctor((SwfStr *)(iVar2 + param_1));
  return (SCStr *)(param_2);
}


// Reference entry 110031b0; body size 46 bytes.
#line 1 "ENTRY_110031b0"

undefined4 __fastcall FUN_110031b0(int *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x34))());
  if (cVar1 == '\0') {
    return (undefined4)(0);
  }
  cVar1 = (char)((**(code **)(*param_1 + 0x38))());
  if ((cVar1 == '\0') && (iVar2 = (**(code **)(*param_1 + 0x3c))(), iVar2 < 1)) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 11005070; body size 37 bytes.
#line 1 "ENTRY_11005070"

undefined1 __thiscall Recovered_Bulk::FUN_11005070(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 uVar1;
  
  uVar1 = (undefined1)(thunk_FUN_111c1530(param_2));
  if ((*(int *)(param_1 + 0x442c) == 0xca) || (*(int *)(param_1 + 0x442c) == 0xcc)) {
    uVar1 = (undefined1)(1);
  }
  return (undefined1)(uVar1);
}


// Reference entry 110050a0; body size 52 bytes.
#line 1 "ENTRY_110050a0"

undefined1 __thiscall Recovered_Bulk::FUN_110050a0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 uVar1;
  
  uVar1 = (undefined1)(thunk_FUN_111c1530(param_2));
  switch(*(undefined4 *)(param_1 + 0x442c)) {
  case 0xc9:
  case 0xca:
  case 0xcc:
  case 0x199:
    uVar1 = (undefined1)(1);
  }
  return (undefined1)(uVar1);
}


// Reference entry 110051f0; body size 42 bytes.
#line 1 "ENTRY_110051f0"

undefined1 __thiscall Recovered_Bulk::FUN_110051f0(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 uVar2;
  
  uVar2 = (undefined1)(thunk_FUN_111c1530(param_2));
  iVar1 = (int)(*(int *)(param_1 + 0x442c));
  if (((iVar1 == 0xc9) || (iVar1 == 0xca)) || (iVar1 == 0xcc)) {
    uVar2 = (undefined1)(1);
  }
  return (undefined1)(uVar2);
}


// Reference entry 1100bf00; body size 22 bytes.
#line 1 "ENTRY_1100bf00"

void __stdcall FUN_1100bf00(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d61d0(param_1,0);
  }
  return;
}


// Reference entry 1100bf20; body size 23 bytes.
#line 1 "ENTRY_1100bf20"

void __stdcall FUN_1100bf20(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 11010200; body size 60 bytes.
#line 1 "ENTRY_11010200"

void __fastcall FUN_11010200(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 11011870; body size 57 bytes.
#line 1 "ENTRY_11011870"

void __fastcall FUN_11011870(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x28) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x24) + 4))();
    }
  }
  puVar2 = (undefined4 *)((undefined4 *)(param_1 + 0x8c));
  thunk_FUN_10bcda40(*puVar2,*(undefined4 *)(param_1 + 0x90),puVar2);
  *(undefined4 *)(param_1 + 0x90) = *puVar2;
  return;
}


// Reference entry 11012070; body size 42 bytes.
#line 1 "ENTRY_11012070"

undefined4 * __fastcall FUN_11012070(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSelectRoomsCompleteState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 110120b0; body size 42 bytes.
#line 1 "ENTRY_110120b0"

undefined4 * __fastcall FUN_110120b0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSelectRoomsInitState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 11019440; body size 32 bytes.
#line 1 "ENTRY_11019440"

undefined4 __thiscall Recovered_Bulk::FUN_11019440(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 8) + 4))(param_2,param_3,param_4));
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 1101ac40; body size 44 bytes.
#line 1 "ENTRY_1101ac40"

undefined4 * __thiscall Recovered_Bulk::FUN_1101ac40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111a4bc0(0,"SCSwfObjJHHInternalListener");
  param_1[6] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjJHHInternalListener);
  *(undefined1 *)(param_1 + 5) = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 1101ae40; body size 27 bytes.
#line 1 "ENTRY_1101ae40"

undefined4 __fastcall FUN_1101ae40(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_111a2df0());
  (**(code **)(**(int **)(param_1 + 0x18) + 4))(uVar1);
  return (undefined4)(0);
}


// Reference entry 1101ae90; body size 33 bytes.
#line 1 "ENTRY_1101ae90"

void __fastcall FUN_1101ae90(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    iVar1 = (int)(thunk_FUN_111046c0());
    if (iVar1 != 0) {
      FUN_10070892(param_1);
    }
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  return;
}


// Reference entry 1101aec0; body size 40 bytes.
#line 1 "ENTRY_1101aec0"

void __fastcall FUN_1101aec0(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    iVar1 = (int)(thunk_FUN_111046c0());
    if (iVar1 != 0) {
      *(undefined1 *)(iVar1 + 0x6b8) = 0;
      FUN_10065348(param_1);
    }
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return;
}


// Reference entry 1101b900; body size 43 bytes.
#line 1 "ENTRY_1101b900"

void __fastcall FUN_1101b900(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 1101b940; body size 23 bytes.
#line 1 "ENTRY_1101b940"

undefined4 __thiscall Recovered_Bulk::FUN_1101b940(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x2c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 1101b9a0; body size 23 bytes.
#line 1 "ENTRY_1101b9a0"

undefined4 __thiscall Recovered_Bulk::FUN_1101b9a0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x28))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 1101b9e0; body size 23 bytes.
#line 1 "ENTRY_1101b9e0"

undefined4 __thiscall Recovered_Bulk::FUN_1101b9e0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x1c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 1101ba20; body size 23 bytes.
#line 1 "ENTRY_1101ba20"

undefined4 __thiscall Recovered_Bulk::FUN_1101ba20(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x24))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 1101bc00; body size 44 bytes.
#line 1 "ENTRY_1101bc00"

undefined1 FUN_1101bc00(SCStr *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCINowPlaying:onMusicChanged"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCINowPlaying:onTVEqualizationChanged"));
    if (!bVar1) {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 1101d760; body size 23 bytes.
#line 1 "ENTRY_1101d760"

undefined4 __thiscall Recovered_Bulk::FUN_1101d760(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x6c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 1101d780; body size 23 bytes.
#line 1 "ENTRY_1101d780"

undefined4 __thiscall Recovered_Bulk::FUN_1101d780(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x78))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 1101d8d0; body size 23 bytes.
#line 1 "ENTRY_1101d8d0"

undefined4 __thiscall Recovered_Bulk::FUN_1101d8d0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x70))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 1101d8f0; body size 26 bytes.
#line 1 "ENTRY_1101d8f0"

undefined4 __thiscall Recovered_Bulk::FUN_1101d8f0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x80))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 1101d950; body size 60 bytes.
#line 1 "ENTRY_1101d950"

undefined4 __stdcall FUN_1101d950(char *param_1)

{
  undefined4 uVar1;
  SCStr *this_;
  
  uVar1 = (undefined4)(thunk_FUN_1109aba0(0x1c5,&DAT_11882ff0));
  thunk_FUN_1109aba0(0x1c6,&DAT_11882ff0,uVar1);
  ((SCStr *)(this_))->format(param_1);
  return (undefined4)(0);
}


// Reference entry 1101d9a0; body size 23 bytes.
#line 1 "ENTRY_1101d9a0"

undefined4 __thiscall Recovered_Bulk::FUN_1101d9a0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x5c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 1101da00; body size 26 bytes.
#line 1 "ENTRY_1101da00"

undefined4 __thiscall Recovered_Bulk::FUN_1101da00(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x1c) + 0xdc))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 1101dbb0; body size 23 bytes.
#line 1 "ENTRY_1101dbb0"

undefined4 __thiscall Recovered_Bulk::FUN_1101dbb0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x54))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 1101dc20; body size 23 bytes.
#line 1 "ENTRY_1101dc20"

undefined4 __thiscall Recovered_Bulk::FUN_1101dc20(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x40))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 1101de90; body size 26 bytes.
#line 1 "ENTRY_1101de90"

undefined4 __thiscall Recovered_Bulk::FUN_1101de90(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x88))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 1101e080; body size 28 bytes.
#line 1 "ENTRY_1101e080"

void __fastcall FUN_1101e080(int param_1)

{
  thunk_FUN_1101f010(0);
  (**(code **)(**(int **)(param_1 + 0x18) + 0x104))();
  return;
}


// Reference entry 1101e240; body size 63 bytes.
#line 1 "ENTRY_1101e240"

void __thiscall Recovered_Bulk::FUN_1101e240(int param_2)
{
  int param_1 = (int )this;
  char cVar1;
  int iVar2;
  
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x14) + 0xc))());
    if (cVar1 != '\0') {
      iVar2 = (int)((**(code **)(**(int **)(param_1 + 0x14) + 8))());
      goto LAB_1101e262;
    }
  }
  iVar2 = (int)(*(int *)(param_1 + 0x18));
LAB_1101e262:
  if (param_2 == iVar2) {
    (**(code **)(*(int *)(param_1 + -0x18) + 0xec))();
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}


// Reference entry 11020510; body size 23 bytes.
#line 1 "ENTRY_11020510"

undefined4 __thiscall Recovered_Bulk::FUN_11020510(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x18) + 0x3c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 11020590; body size 23 bytes.
#line 1 "ENTRY_11020590"

undefined4 __thiscall Recovered_Bulk::FUN_11020590(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x18) + 0x5c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 110205d0; body size 23 bytes.
#line 1 "ENTRY_110205d0"

undefined4 __thiscall Recovered_Bulk::FUN_110205d0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x18) + 0x58))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 110205f0; body size 27 bytes.
#line 1 "ENTRY_110205f0"

undefined4 __thiscall Recovered_Bulk::FUN_110205f0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x18) + 0x28))(param_2,param_3,param_4);
  return (undefined4)(param_3);
}


// Reference entry 11020620; body size 23 bytes.
#line 1 "ENTRY_11020620"

undefined4 __thiscall Recovered_Bulk::FUN_11020620(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x18) + 0x2c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 11020640; body size 26 bytes.
#line 1 "ENTRY_11020640"

undefined4 __thiscall Recovered_Bulk::FUN_11020640(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x18) + 0xac))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 11020660; body size 26 bytes.
#line 1 "ENTRY_11020660"

undefined4 __thiscall Recovered_Bulk::FUN_11020660(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x18) + 0x98))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 11020680; body size 26 bytes.
#line 1 "ENTRY_11020680"

undefined4 __thiscall Recovered_Bulk::FUN_11020680(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x18) + 0x8c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 110206a0; body size 27 bytes.
#line 1 "ENTRY_110206a0"

undefined4 __thiscall Recovered_Bulk::FUN_110206a0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x18) + 100))(param_2,param_3,param_4);
  return (undefined4)(param_3);
}


// Reference entry 110206d0; body size 23 bytes.
#line 1 "ENTRY_110206d0"

undefined4 __thiscall Recovered_Bulk::FUN_110206d0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x18) + 0x60))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 11020730; body size 23 bytes.
#line 1 "ENTRY_11020730"

undefined4 __thiscall Recovered_Bulk::FUN_11020730(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x18) + 0x70))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 110207a0; body size 33 bytes.
#line 1 "ENTRY_110207a0"

void __fastcall FUN_110207a0(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)((**(code **)(*param_1 + 0xe4))());
  uVar1 = (undefined4)((**(code **)(*param_1 + 0xe0))(uVar1));
  thunk_FUN_1105ce90(uVar1);
  return;
}


// Reference entry 110207d0; body size 33 bytes.
#line 1 "ENTRY_110207d0"

void __fastcall FUN_110207d0(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)((**(code **)(*param_1 + 0xe4))());
  uVar1 = (undefined4)((**(code **)(*param_1 + 0xe0))(uVar1));
  thunk_FUN_1105ce90(uVar1);
  return;
}


// Reference entry 11020930; body size 33 bytes.
#line 1 "ENTRY_11020930"

void __fastcall FUN_11020930(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)((**(code **)(*param_1 + 0xe4))());
  uVar1 = (undefined4)((**(code **)(*param_1 + 0xe0))(uVar1));
  thunk_FUN_1105cf60(uVar1);
  return;
}


// Reference entry 11020970; body size 33 bytes.
#line 1 "ENTRY_11020970"

void __fastcall FUN_11020970(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)((**(code **)(*param_1 + 0xe4))());
  uVar1 = (undefined4)((**(code **)(*param_1 + 0xe0))(uVar1));
  thunk_FUN_1105cf60(uVar1);
  return;
}


// Reference entry 110209d0; body size 33 bytes.
#line 1 "ENTRY_110209d0"

void __fastcall FUN_110209d0(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)((**(code **)(*param_1 + 0xe4))());
  uVar1 = (undefined4)((**(code **)(*param_1 + 0xe0))(uVar1));
  thunk_FUN_1105cfc0(uVar1);
  return;
}


// Reference entry 11020a10; body size 33 bytes.
#line 1 "ENTRY_11020a10"

void __fastcall FUN_11020a10(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)((**(code **)(*param_1 + 0xe4))());
  uVar1 = (undefined4)((**(code **)(*param_1 + 0xe0))(uVar1));
  thunk_FUN_1105cfc0(uVar1);
  return;
}


// Reference entry 11020e70; body size 44 bytes.
#line 1 "ENTRY_11020e70"

undefined1 FUN_11020e70(SCStr *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCINowPlaying:onMusicChanged"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCINowPlaying:onTVEqualizationChanged"));
    if (!bVar1) {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 11022230; body size 23 bytes.
#line 1 "ENTRY_11022230"

undefined4 __thiscall Recovered_Bulk::FUN_11022230(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 11022270; body size 31 bytes.
#line 1 "ENTRY_11022270"

undefined4 __thiscall Recovered_Bulk::FUN_11022270(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x38))(param_2,param_3,param_4,param_5);
  return (undefined4)(param_3);
}


// Reference entry 11022350; body size 23 bytes.
#line 1 "ENTRY_11022350"

undefined4 __thiscall Recovered_Bulk::FUN_11022350(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 110223c0; body size 23 bytes.
#line 1 "ENTRY_110223c0"

undefined4 __thiscall Recovered_Bulk::FUN_110223c0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x1c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 11023740; body size 57 bytes.
#line 1 "ENTRY_11023740"

void __stdcall FUN_11023740(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_11023740(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x18);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 11023790; body size 49 bytes.
#line 1 "ENTRY_11023790"

int __thiscall Recovered_Bulk::FUN_11023790(int *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_110237d0(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || (*param_2 < *(int *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 11025940; body size 59 bytes.
#line 1 "ENTRY_11025940"

void __thiscall Recovered_Bulk::FUN_11025940(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_11023420(puVar1,param_2);
  return;
}


// Reference entry 11026290; body size 48 bytes.
#line 1 "ENTRY_11026290"

undefined4 * __fastcall FUN_11026290(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 11026c30; body size 60 bytes.
#line 1 "ENTRY_11026c30"

void __fastcall FUN_11026c30(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCArray);
  thunk_FUN_110232f0(*puVar1,param_1[3],puVar1);
  param_1[3] = (undefined4)(*puVar1);
  thunk_FUN_110271f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 11029700; body size 38 bytes.
#line 1 "ENTRY_11029700"

undefined4
__stdcall FUN_11029700(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  thunk_FUN_1102bc60(param_1,param_2,param_3,0,param_4,param_5,param_6);
  return (undefined4)(param_1);
}


// Reference entry 11029730; body size 57 bytes.
#line 1 "ENTRY_11029730"

void __fastcall FUN_11029730(int param_1)

{
  thunk_FUN_112af4e0("PlayQueue",10,"Removing range [%d,%d). UpdateID = %lu.",
                     *(int *)(param_1 + 100),*(int *)(param_1 + 0x68) + *(int *)(param_1 + 100),
                     *(undefined4 *)(param_1 + 0x54));
  thunk_FUN_110ba960(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 100) + 1,
                     *(undefined4 *)(param_1 + 0x68));
  return;
}


// Reference entry 11029780; body size 42 bytes.
#line 1 "ENTRY_11029780"

undefined4
__stdcall FUN_11029780(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  thunk_FUN_1102bc60(param_1,param_2,param_3,param_4 + 1,param_5,param_6,param_7);
  return (undefined4)(param_1);
}


// Reference entry 1102ad90; body size 60 bytes.
#line 1 "ENTRY_1102ad90"

void __stdcall FUN_1102ad90(int param_1,int param_2)

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


// Reference entry 1102b260; body size 50 bytes.
#line 1 "ENTRY_1102b260"

SCStr * __thiscall Recovered_Bulk::FUN_1102b260(SCStr *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x4c))());
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x220c - (uint)(cVar1 != '\0'),&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 1102bc40; body size 20 bytes.
#line 1 "ENTRY_1102bc40"

void __fastcall FUN_1102bc40(int param_1)

{
  if (*(int *)(param_1 + 0x3c) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x3c) + 0x30) = 0;
                    
                    
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x18))();
    return;
  }
  return;
}


// Reference entry 1102db30; body size 59 bytes.
#line 1 "ENTRY_1102db30"

void __thiscall Recovered_Bulk::FUN_1102db30(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_11023420(puVar1,param_2);
  return;
}


// Reference entry 1102f590; body size 60 bytes.
#line 1 "ENTRY_1102f590"

void __fastcall FUN_1102f590(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 11030cd0; body size 42 bytes.
#line 1 "ENTRY_11030cd0"

undefined4 FUN_11030cd0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (char)(thunk_FUN_1106f2b0());
  if (cVar1 != '\0') {
    return (undefined4)(6);
  }
  uVar2 = (undefined4)(thunk_FUN_1020b1d0(param_1));
  return (undefined4)(uVar2);
}


// Reference entry 11030d10; body size 33 bytes.
#line 1 "ENTRY_11030d10"

undefined4 FUN_11030d10(void)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (char)(thunk_FUN_1106f2b0());
  if (cVar1 != '\0') {
    return (undefined4)(6);
  }
  uVar2 = (undefined4)(thunk_FUN_1020b530());
  return (undefined4)(uVar2);
}


// Reference entry 11030e00; body size 59 bytes.
#line 1 "ENTRY_11030e00"

SCStr * __thiscall Recovered_Bulk::FUN_11030e00(SCStr *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)((**(code **)(*param_1 + 0x8c))());
  if (iVar1 == 6) {
    ((SCStr *)(param_2))->int_allocRep("restrictedqueue");
    return (SCStr *)(param_2);
  }
  thunk_FUN_1020bd10(param_2);
  return (SCStr *)(param_2);
}


// Reference entry 11034eb0; body size 45 bytes.
#line 1 "ENTRY_11034eb0"

undefined4 __fastcall FUN_11034eb0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x3c) + 0x1b4))());
  if ((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) {
    iVar1 = (int)(thunk_FUN_11138b60(*(int *)(iVar1 + 8) + 0x44));
    if (iVar1 != 0) {
      uVar2 = (undefined4)(thunk_FUN_110cb840());
      return (undefined4)(uVar2);
    }
  }
  return (undefined4)(0);
}


// Reference entry 11037760; body size 27 bytes.
#line 1 "ENTRY_11037760"

undefined4 __fastcall FUN_11037760(int param_1)

{
  if ((*(int *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    thunk_FUN_10f45640(*(int *)(param_1 + 0x1c));
  }
  return (undefined4)(0);
}


// Reference entry 11037790; body size 17 bytes.
#line 1 "ENTRY_11037790"

undefined4 __fastcall FUN_11037790(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    thunk_FUN_10f456a0();
  }
  return (undefined4)(0);
}


// Reference entry 110377b0; body size 50 bytes.
#line 1 "ENTRY_110377b0"

undefined4 __fastcall FUN_110377b0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar1 = (int)(*(int *)(param_1 + 0x20));
    if (iVar1 != 0) {
      uVar2 = (uint)(*(uint *)(param_1 + 8));
      uVar3 = (uint)(uVar2 + 1);
      if (uVar2 <= *(uint *)(iVar1 + 0x148)) {
        uVar3 = (uint)(uVar2);
      }
      thunk_FUN_10f46e10(iVar1,uVar3);
    }
    return (undefined4)(0);
  }
  return (undefined4)(0);
}


// Reference entry 110377f0; body size 22 bytes.
#line 1 "ENTRY_110377f0"

undefined4 __fastcall FUN_110377f0(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    thunk_FUN_10f46e70(*(undefined4 *)(param_1 + 8));
  }
  return (undefined4)(0);
}


// Reference entry 11038200; body size 29 bytes.
#line 1 "ENTRY_11038200"

bool __fastcall FUN_11038200(int param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(malloc(*(int *)(param_1 + 0x46) << 2));
  *(void **)(param_1 + 0x10) = pvVar1;
  return (bool)(pvVar1 != (void *)0x0);
}


// Reference entry 110382c0; body size 29 bytes.
#line 1 "ENTRY_110382c0"

void __fastcall FUN_110382c0(int param_1)

{
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    free(*(void **)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}


// Reference entry 110382f0; body size 29 bytes.
#line 1 "ENTRY_110382f0"

void __fastcall FUN_110382f0(int param_1)

{
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
    free(*(void **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


// Reference entry 11038930; body size 31 bytes.
#line 1 "ENTRY_11038930"

undefined1 FUN_11038930(short *param_1,uint param_2)

{
  if (param_2 < 2) {
    return (undefined1)(2);
  }
  return (undefined1)(*param_1 != 0x4d42);
}


// Reference entry 11038960; body size 62 bytes.
#line 1 "ENTRY_11038960"

void __fastcall FUN_11038960(int param_1)

{
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
    free(*(void **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    free(*(void **)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 5;
  return;
}


// Reference entry 110389b0; body size 55 bytes.
#line 1 "ENTRY_110389b0"

undefined4 * __thiscall Recovered_Bulk::FUN_110389b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10f744a0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPNGBitmapLoader);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 11038a00; body size 48 bytes.
#line 1 "ENTRY_11038a00"

void __fastcall FUN_11038a00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPNGBitmapLoader);
  if (param_1[2] != 0) {
    thunk_FUN_11467010(param_1 + 2,param_1 + 3,0);
  }
  param_1[5] = (undefined4)(2);
  thunk_FUN_10f74bd0();
  return;
}


// Reference entry 11038b00; body size 27 bytes.
#line 1 "ENTRY_11038b00"

void FUN_11038b00(undefined4 param_1)

{
  int *_Buf;
  int _Value;
  
  _Value = (int)(1);
  _Buf = (int *)((int *)thunk_FUN_1146c9e0(param_1,longjmp,0x40));
                    
  longjmp(_Buf,_Value);
}


// Reference entry 110390a0; body size 37 bytes.
#line 1 "ENTRY_110390a0"

undefined1 FUN_110390a0(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < 8) {
    return (undefined1)(2);
  }
  iVar1 = (int)(thunk_FUN_11465e10(param_1,0,param_2));
  return (undefined1)(iVar1 != 0);
}


// Reference entry 11039240; body size 52 bytes.
#line 1 "ENTRY_11039240"

void __fastcall FUN_11039240(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCJPGBitmapLoader);
  free((void *)param_1[6]);
  free((void *)param_1[3]);
  param_1[2] = (undefined4)(6);
  thunk_FUN_111af700(param_1 + 10);
  thunk_FUN_10f74bd0();
  return;
}


// Reference entry 11039d80; body size 56 bytes.
#line 1 "ENTRY_11039d80"

void FUN_11039d80(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 8));
  if (*(void **)(iVar1 + 0x98) != (void *)0x0) {
    free(*(void **)(iVar1 + 0x98));
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x98) = 0;
    iVar1 = (int)(*(int *)(param_1 + 8));
  }
  *(undefined4 *)(iVar1 + 0x88) = 0;
  return;
}


// Reference entry 11039fa0; body size 56 bytes.
#line 1 "ENTRY_11039fa0"

void __fastcall FUN_11039fa0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 8));
  if (*(void **)(iVar1 + 0x98) != (void *)0x0) {
    free(*(void **)(iVar1 + 0x98));
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x98) = 0;
    iVar1 = (int)(*(int *)(param_1 + 8));
  }
  *(undefined4 *)(iVar1 + 0x88) = 0;
  return;
}


// Reference entry 1103a220; body size 39 bytes.
#line 1 "ENTRY_1103a220"

undefined4 FUN_1103a220(short *param_1,uint param_2)

{
  if (param_2 < 3) {
    return (undefined4)(2);
  }
  if ((*param_1 == 0x4947) && ((char)param_1[1] == 'F')) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 1103c270; body size 56 bytes.
#line 1 "ENTRY_1103c270"

undefined4 * __thiscall Recovered_Bulk::FUN_1103c270(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_RTrackRatingsEventHandler);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNowPlayingRatings);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCNowPlayingRatings);
  return (undefined4 *)(param_1);
}


// Reference entry 1103c520; body size 52 bytes.
#line 1 "ENTRY_1103c520"

undefined4 __fastcall FUN_1103c520(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (int)((**(code **)(*param_1 + 0x40))());
  if (iVar2 != 0) {
    piVar3 = (int *)((int *)(**(code **)(*param_1 + 0x40))());
    if (piVar3[0x15] != 0) {
      cVar1 = (char)((**(code **)(*piVar3 + 0x18))());
      if (cVar1 != '\0') {
        return (undefined4)(*(undefined4 *)(piVar3[0x15] + 0x34));
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 1103c620; body size 40 bytes.
#line 1 "ENTRY_1103c620"

int * __fastcall FUN_1103c620(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x40))());
  if (piVar2[0x15] != 0) {
    cVar1 = (char)((**(code **)(*piVar2 + 0x18))());
    if (cVar1 != '\0') {
      return (int *)((int *)(piVar2[0x15] + 0x2c));
    }
  }
  return (int *)(piVar2 + 0x16);
}


// Reference entry 1103ea20; body size 59 bytes.
#line 1 "ENTRY_1103ea20"

void __thiscall Recovered_Bulk::FUN_1103ea20(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  return;
}


// Reference entry 1103ea70; body size 59 bytes.
#line 1 "ENTRY_1103ea70"

void __thiscall Recovered_Bulk::FUN_1103ea70(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  return;
}


// Reference entry 1103ed40; body size 43 bytes.
#line 1 "ENTRY_1103ed40"

void __fastcall FUN_1103ed40(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 1103ed80; body size 43 bytes.
#line 1 "ENTRY_1103ed80"

void __fastcall FUN_1103ed80(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 11041c30; body size 35 bytes.
#line 1 "ENTRY_11041c30"

undefined4 * __fastcall FUN_11041c30(undefined4 *param_1)

{
  param_1[1] = (undefined4)(1);
  param_1[2] = (undefined4)(1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Ref_count_obj2);
  thunk_FUN_11066000();
  return (undefined4 *)(param_1);
}


// Reference entry 11042830; body size 47 bytes.
#line 1 "ENTRY_11042830"

void __fastcall FUN_11042830(int param_1)

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


// Reference entry 11042ef0; body size 39 bytes.
#line 1 "ENTRY_11042ef0"

undefined4 * __stdcall FUN_11042ef0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 local_8 [8];
  
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1113ecc0(local_8,"r:NextTrackMetaData"));
  *param_1 = (undefined4)(*puVar1);
  param_1[1] = (undefined4)(puVar1[1]);
  return (undefined4 *)(param_1);
}


// Reference entry 110435c0; body size 58 bytes.
#line 1 "ENTRY_110435c0"

undefined4 __fastcall FUN_110435c0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (int)((**(code **)(*param_1 + 0xe8))());
  if (iVar2 != 0) {
    piVar3 = (int *)((int *)(**(code **)(*param_1 + 0xe8))());
    if (piVar3[0x15] != 0) {
      cVar1 = (char)((**(code **)(*piVar3 + 0x18))());
      if (cVar1 != '\0') {
        return (undefined4)(*(undefined4 *)(piVar3[0x15] + 0x34));
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 11043610; body size 44 bytes.
#line 1 "ENTRY_11043610"

undefined4 __fastcall FUN_11043610(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)((**(code **)(*param_1 + 0xf0))());
  if (iVar1 != 0) {
    uVar2 = (undefined4)((**(code **)(*param_1 + 0xf4))());
    uVar2 = (undefined4)(thunk_FUN_110bc160(uVar2));
    return (undefined4)(uVar2);
  }
  return (undefined4)(0);
}


// Reference entry 11044450; body size 22 bytes.
#line 1 "ENTRY_11044450"

undefined4 __stdcall FUN_11044450(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_11043b80(param_1,param_2,0);
  return (undefined4)(param_1);
}


// Reference entry 11044510; body size 44 bytes.
#line 1 "ENTRY_11044510"

undefined4 FUN_11044510(undefined4 param_1)

{
  switch(param_1) {
  default:
    return (undefined4)(0);
  case 2:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x10:
  case 0x11:
  case 0x12:
    return (undefined4)(2);
  case 3:
  case 7:
  case 8:
    return (undefined4)(3);
  case 4:
  case 9:
  case 10:
    return (undefined4)(1);
  }
}


// Reference entry 11045280; body size 43 bytes.
#line 1 "ENTRY_11045280"

int * __fastcall FUN_11045280(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)((int *)(**(code **)(*param_1 + 0xe8))());
  if (piVar2[0x15] != 0) {
    cVar1 = (char)((**(code **)(*piVar2 + 0x18))());
    if (cVar1 != '\0') {
      return (int *)((int *)(piVar2[0x15] + 0x2c));
    }
  }
  return (int *)(piVar2 + 0x16);
}


// Reference entry 11045600; body size 22 bytes.
#line 1 "ENTRY_11045600"

undefined4 __stdcall FUN_11045600(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_11043b80(param_1,param_2,1);
  return (undefined4)(param_1);
}


// Reference entry 11045620; body size 20 bytes.
#line 1 "ENTRY_11045620"

void __stdcall FUN_11045620(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1104af00(param_1,param_2,0,1);
  return;
}


// Reference entry 11046c90; body size 20 bytes.
#line 1 "ENTRY_11046c90"

void __stdcall FUN_11046c90(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1104af00(param_1,param_2,0,0);
  return;
}


// Reference entry 11047dc0; body size 24 bytes.
#line 1 "ENTRY_11047dc0"

undefined4 FUN_11047dc0(void)

{
  undefined4 local_4;
  
  local_4 = (undefined4)(7);
  thunk_FUN_1104da60(0,&local_4);
  return (undefined4)(local_4);
}


// Reference entry 110496d0; body size 44 bytes.
#line 1 "ENTRY_110496d0"

undefined4 __fastcall FUN_110496d0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)((**(code **)(*param_1 + 0xf0))());
  if (iVar1 == 0) {
    return (undefined4)(0);
  }
  uVar2 = (undefined4)((**(code **)(*param_1 + 0xf4))());
  uVar2 = (undefined4)(thunk_FUN_110bb5f0(uVar2));
  return (undefined4)(uVar2);
}


// Reference entry 1104e9e0; body size 50 bytes.
#line 1 "ENTRY_1104e9e0"

undefined4 __fastcall FUN_1104e9e0(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (int)((**(code **)(*param_1 + 0xf0))());
  if (iVar2 != 0) {
    uVar3 = (undefined4)((**(code **)(*param_1 + 0xf4))());
    cVar1 = (char)(thunk_FUN_110bee40(uVar3));
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 1104ea90; body size 28 bytes.
#line 1 "ENTRY_1104ea90"

undefined4 __fastcall FUN_1104ea90(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x14)) {
  case 0:
  case 1:
  case 2:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    return (undefined4)(1);
  default:
    return (undefined4)(0);
  }
}


// Reference entry 1104fdc0; body size 39 bytes.
#line 1 "ENTRY_1104fdc0"

undefined1 __fastcall FUN_1104fdc0(int *param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0xac))());
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(*param_1 + 0xb0))());
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 110525b0; body size 20 bytes.
#line 1 "ENTRY_110525b0"

uint __fastcall FUN_110525b0(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x54) != (int *)0x0) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x54) + 0xd4))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 11052840; body size 16 bytes.
#line 1 "ENTRY_11052840"

byte FUN_11052840(void)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_11054650());
  return (byte)(-(cVar1 != '\0') & 9);
}


// Reference entry 110533e0; body size 20 bytes.
#line 1 "ENTRY_110533e0"

uint __fastcall FUN_110533e0(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x54) != (int *)0x0) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x54) + 0x94))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 110547c0; body size 50 bytes.
#line 1 "ENTRY_110547c0"

undefined1 FUN_110547c0(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_101a2c70("SCIDeviceMusicEqualization:onTVDialogLevelChanged",param_1));
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_101a2c70("SCIDeviceMusicEqualization:onNightModeChanged",param_1));
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 110564a0; body size 60 bytes.
#line 1 "ENTRY_110564a0"

void __fastcall FUN_110564a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCArray);
  thunk_FUN_105b6490(*puVar1,param_1[3],puVar1);
  param_1[3] = (undefined4)(*puVar1);
  thunk_FUN_10655080();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 11057300; body size 45 bytes.
#line 1 "ENTRY_11057300"

undefined4 __thiscall Recovered_Bulk::FUN_11057300(undefined4 param_2)
{
  int *param_1 = (int *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)((**(code **)(*param_1 + 0x30))(param_2,0));
  if (((char)param_1[0x15] != '\0') && ((int *)param_1[0x13] != (int *)0x0)) {
    (**(code **)(*(int *)param_1[0x13] + 0xdc))();
  }
  return (undefined4)(uVar1);
}


// Reference entry 11057340; body size 24 bytes.
#line 1 "ENTRY_11057340"

void __thiscall Recovered_Bulk::FUN_11057340(int param_2)
{
  int *param_1 = (int *)this;
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 11057690; body size 18 bytes.
#line 1 "ENTRY_11057690"

undefined4 __thiscall Recovered_Bulk::FUN_11057690(undefined4 param_2)
{
  int *param_1 = (int *)this;
  (**(code **)(*param_1 + 0x3c))(param_2);
  return (undefined4)(0);
}


// Reference entry 110576b0; body size 18 bytes.
#line 1 "ENTRY_110576b0"

undefined4 __thiscall Recovered_Bulk::FUN_110576b0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  (**(code **)(*param_1 + 0x3c))(param_2);
  return (undefined4)(1);
}


// Reference entry 1105a9a0; body size 58 bytes.
#line 1 "ENTRY_1105a9a0"

undefined4 __fastcall FUN_1105a9a0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (int)((**(code **)(*param_1 + 0xd8))());
  if (iVar2 != 0) {
    piVar3 = (int *)((int *)(**(code **)(*param_1 + 0xd8))());
    if (piVar3[0x15] != 0) {
      cVar1 = (char)((**(code **)(*piVar3 + 0x18))());
      if (cVar1 != '\0') {
        return (undefined4)(*(undefined4 *)(piVar3[0x15] + 0x34));
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 1105be20; body size 43 bytes.
#line 1 "ENTRY_1105be20"

int * __fastcall FUN_1105be20(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)((int *)(**(code **)(*param_1 + 0xd8))());
  if (piVar2[0x15] != 0) {
    cVar1 = (char)((**(code **)(*piVar2 + 0x18))());
    if (cVar1 != '\0') {
      return (int *)((int *)(piVar2[0x15] + 0x2c));
    }
  }
  return (int *)(piVar2 + 0x16);
}


// Reference entry 1105c3b0; body size 54 bytes.
#line 1 "ENTRY_1105c3b0"

undefined4 __fastcall FUN_1105c3b0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)((**(code **)(*param_1 + 0xe8))());
  if (*(int *)(iVar1 + 4) != 0) {
    uVar2 = (undefined4)(thunk_FUN_1113eb00("TransportErrorHttpCode"));
    return (undefined4)(uVar2);
  }
  return (undefined4)(0);
}


// Reference entry 1105ce90; body size 45 bytes.
#line 1 "ENTRY_1105ce90"

undefined4 FUN_1105ce90(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = (undefined4)(thunk_FUN_1113ea20("CurrentCrossfadeMode"));
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 1105dd20; body size 38 bytes.
#line 1 "ENTRY_1105dd20"

void __thiscall Recovered_Bulk::FUN_1105dd20(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  uVar1 = (undefined4)(thunk_FUN_110ba560());
  thunk_FUN_102207b0(uVar1,param_1 + 8,param_2);
  return;
}


// Reference entry 1105e3c0; body size 28 bytes.
#line 1 "ENTRY_1105e3c0"

undefined4 __thiscall Recovered_Bulk::FUN_1105e3c0(uint param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x30))());
  if ((cVar1 != '\0') && (1 < param_2)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 1105eb10; body size 28 bytes.
#line 1 "ENTRY_1105eb10"

undefined4 __thiscall Recovered_Bulk::FUN_1105eb10(int param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x30))());
  if ((cVar1 != '\0') && (param_2 != 0)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 1105f420; body size 42 bytes.
#line 1 "ENTRY_1105f420"

undefined4 * __thiscall Recovered_Bulk::FUN_1105f420(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNowPlayingSleepTimer);
  return (undefined4 *)(param_1);
}


// Reference entry 11060810; body size 61 bytes.
#line 1 "ENTRY_11060810"

undefined4 FUN_11060810(undefined4 param_1)

{
  switch(param_1) {
  default:
    return (undefined4)(0);
  case 1:
    return (undefined4)(900);
  case 2:
    return (undefined4)(0x708);
  case 3:
    return (undefined4)(0xa8c);
  case 4:
    return (undefined4)(0xe10);
  case 5:
    return (undefined4)(0x1c20);
  }
}


// Reference entry 11062370; body size 44 bytes.
#line 1 "ENTRY_11062370"

undefined4 * __thiscall Recovered_Bulk::FUN_11062370(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_110621c0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpGenericUpdateQueue);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpGenericUpdateQueue);
  param_1[0x12] = (undefined4)(6);
  return (undefined4 *)(param_1);
}


// Reference entry 110623b0; body size 44 bytes.
#line 1 "ENTRY_110623b0"

undefined4 * __thiscall Recovered_Bulk::FUN_110623b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_110621c0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpGenericUpdateQueue);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpGenericUpdateQueue);
  param_1[0x12] = (undefined4)(3);
  return (undefined4 *)(param_1);
}


// Reference entry 110623f0; body size 44 bytes.
#line 1 "ENTRY_110623f0"

undefined4 * __thiscall Recovered_Bulk::FUN_110623f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_110621c0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpGenericUpdateQueue);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpGenericUpdateQueue);
  param_1[0x12] = (undefined4)(4);
  return (undefined4 *)(param_1);
}


// Reference entry 11062430; body size 44 bytes.
#line 1 "ENTRY_11062430"

undefined4 * __thiscall Recovered_Bulk::FUN_11062430(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_110621c0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpGenericUpdateQueue);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpGenericUpdateQueue);
  param_1[0x12] = (undefined4)(5);
  return (undefined4 *)(param_1);
}


// Reference entry 11062470; body size 44 bytes.
#line 1 "ENTRY_11062470"

undefined4 * __thiscall Recovered_Bulk::FUN_11062470(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_110621c0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpGenericUpdateQueue);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpGenericUpdateQueue);
  param_1[0x12] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 110624b0; body size 44 bytes.
#line 1 "ENTRY_110624b0"

undefined4 * __thiscall Recovered_Bulk::FUN_110624b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_110621c0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpGenericUpdateQueue);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpGenericUpdateQueue);
  param_1[0x12] = (undefined4)(1);
  return (undefined4 *)(param_1);
}


// Reference entry 110624f0; body size 44 bytes.
#line 1 "ENTRY_110624f0"

undefined4 * __thiscall Recovered_Bulk::FUN_110624f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_110621c0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpGenericUpdateQueue);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpGenericUpdateQueue);
  param_1[0x12] = (undefined4)(2);
  return (undefined4 *)(param_1);
}


// Reference entry 11062cd0; body size 35 bytes.
#line 1 "ENTRY_11062cd0"

undefined4 __fastcall FUN_11062cd0(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x18) != 0) &&
     (((iVar1 = *(int *)(param_1 + 0x48), iVar1 == 0 || (iVar1 == 1)) || (iVar1 == 2)))) {
    return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0xd7d0));
  }
  return (undefined4)(0);
}


// Reference entry 11065fc0; body size 21 bytes.
#line 1 "ENTRY_11065fc0"

undefined4 __thiscall Recovered_Bulk::FUN_11065fc0(char *param_2,uint param_3)
{
  int param_1 = (int )this;
  ((SCStr *)((SCStr *)(param_1 + 0x10)))->append(param_2,param_3);
  return (undefined4)(1);
}


// Reference entry 11065fe0; body size 23 bytes.
#line 1 "ENTRY_11065fe0"

undefined4 * __thiscall Recovered_Bulk::FUN_11065fe0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPMapStreamBadger);
  return (undefined4 *)(param_1);
}


// Reference entry 11066fe0; body size 30 bytes.
#line 1 "ENTRY_11066fe0"

SCStr * __thiscall Recovered_Bulk::FUN_11066fe0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x10));
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x14);
  return (SCStr *)(param_2);
}


// Reference entry 11067d50; body size 54 bytes.
#line 1 "ENTRY_11067d50"

undefined4 __fastcall FUN_11067d50(int param_1)

{
  char cVar1;
  undefined4 local_8;
  int local_4;
  
  if (((*(int *)(param_1 + 0x18) == 0) ||
      (cVar1 = thunk_FUN_11246070(*(int *)(param_1 + 0x18) + 0xd7d4,&local_8), cVar1 == '\0')) ||
     (local_4 < 0)) {
    local_8 = (undefined4)(0);
  }
  return (undefined4)(local_8);
}


// Reference entry 11067db0; body size 54 bytes.
#line 1 "ENTRY_11067db0"

undefined4 __fastcall FUN_11067db0(int param_1)

{
  char cVar1;
  undefined4 local_8;
  int local_4;
  
  if (((*(int *)(param_1 + 0x18) == 0) ||
      (cVar1 = thunk_FUN_11246070(*(int *)(param_1 + 0x18) + 0xefd4,&local_8), cVar1 == '\0')) ||
     (local_4 < 0)) {
    local_8 = (undefined4)(0);
  }
  return (undefined4)(local_8);
}


// Reference entry 11069bc0; body size 43 bytes.
#line 1 "ENTRY_11069bc0"

int FUN_11069bc0(byte *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)(0);
  iVar3 = (int)(0);
  bVar1 = (byte)(*param_1);
  while (bVar1 != 0) {
    iVar2 = (int)(iVar2 + 1);
    iVar3 = (int)(iVar3 + 1 + (int)(char)PTR_DAT_1211a5d0[bVar1]);
    bVar1 = (byte)(param_1[iVar3]);
  }
  return (int)(iVar2);
}


// Reference entry 1106b190; body size 28 bytes.
#line 1 "ENTRY_1106b190"

void FUN_1106b190(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (DAT_121a7b60 != 0) {
    thunk_FUN_110f6450(param_2,param_1,param_3);
  }
  return;
}


// Reference entry 1106b1c0; body size 20 bytes.
#line 1 "ENTRY_1106b1c0"

void FUN_1106b1c0(undefined4 param_1)

{
  if (DAT_121a7b60 != 0) {
    thunk_FUN_110f62c0(param_1);
  }
  return;
}


// Reference entry 1106b260; body size 18 bytes.
#line 1 "ENTRY_1106b260"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1106b260(uint param_1)

{
  _DAT_121a7b64 = (int)(_DAT_121a7b64 | param_1);
  DAT_121a7b5d = (int)(1);
  return;
}


// Reference entry 1106f230; body size 49 bytes.
#line 1 "ENTRY_1106f230"

int __fastcall FUN_1106f230(int param_1)

{
  char *pcVar1;
  uint3 uVar2;
  uint uVar3;
  
  pcVar1 = (char *)(*(char **)(param_1 + 0x1c));
  uVar3 = (uint)(1);
  if (*(uint *)(param_1 + 0x6c) != 0) {
    uVar3 = (uint)(*(uint *)(param_1 + 0x6c) & 8);
  }
  uVar2 = (uint3)((uint3)((uint)pcVar1 >> 8));
  if ((((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) && (*(char *)(param_1 + 0x74) == '\0')) &&
     (uVar3 != 0)) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 1106f270; body size 41 bytes.
#line 1 "ENTRY_1106f270"

undefined4 __fastcall FUN_1106f270(int param_1)

{
  char *pcVar1;
  char cVar2;
  
  pcVar1 = (char *)(*(char **)(param_1 + 0x1c));
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    cVar2 = (char)(thunk_FUN_110b9480(pcVar1));
    if ((cVar2 == '\0') && (*(char *)(param_1 + 0x74) == '\0')) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 11072020; body size 57 bytes.
#line 1 "ENTRY_11072020"

void __stdcall FUN_11072020(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_11072020(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x14);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 11072070; body size 57 bytes.
#line 1 "ENTRY_11072070"

void __stdcall FUN_11072070(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_11072070(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x14);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 110722a0; body size 49 bytes.
#line 1 "ENTRY_110722a0"

int __thiscall Recovered_Bulk::FUN_110722a0(uint *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_110723c0(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || (*param_2 < *(uint *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 110722e0; body size 49 bytes.
#line 1 "ENTRY_110722e0"

int __thiscall Recovered_Bulk::FUN_110722e0(uint *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_11072420(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || (*param_2 < *(uint *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 11072320; body size 60 bytes.
#line 1 "ENTRY_11072320"

int __thiscall Recovered_Bulk::FUN_11072320(undefined4 param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_11072480(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (cVar1 = thunk_FUN_111a0940(local_4 + 0x10), cVar1 == '\0')) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 11072370; body size 60 bytes.
#line 1 "ENTRY_11072370"

int __thiscall Recovered_Bulk::FUN_11072370(undefined4 param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_110724f0(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (cVar1 = thunk_FUN_111a0940(local_4 + 0x10), cVar1 == '\0')) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 11076be0; body size 48 bytes.
#line 1 "ENTRY_11076be0"

undefined4 * __fastcall FUN_11076be0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 11076c20; body size 48 bytes.
#line 1 "ENTRY_11076c20"

undefined4 * __fastcall FUN_11076c20(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 11076c60; body size 48 bytes.
#line 1 "ENTRY_11076c60"

undefined4 * __fastcall FUN_11076c60(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 11076ca0; body size 48 bytes.
#line 1 "ENTRY_11076ca0"

undefined4 * __fastcall FUN_11076ca0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 11079970; body size 37 bytes.
#line 1 "ENTRY_11079970"

void __fastcall FUN_11079970(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RZPSortOrderManager);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  return;
}


// Reference entry 1107a0a0; body size 32 bytes.
#line 1 "ENTRY_1107a0a0"

void __fastcall FUN_1107a0a0(undefined4 *param_1)

{
  param_1[1] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RSOAPFaultHandler);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_ROAuthCB);
  return;
}


// Reference entry 1107b550; body size 60 bytes.
#line 1 "ENTRY_1107b550"

undefined4 * __thiscall Recovered_Bulk::FUN_1107b550(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RZPSortOrderManager);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1107b5d0; body size 57 bytes.
#line 1 "ENTRY_1107b5d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1107b5d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RSOAPFaultHandler);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_ROAuthCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1098);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1107e300; body size 55 bytes.
#line 1 "ENTRY_1107e300"

undefined4 FUN_1107e300(undefined4 *param_1)

{
  char cVar1;
  
  if (((char *)*param_1 != (char *)0x0) && (*(char *)*param_1 != '\0')) {
    cVar1 = (char)(thunk_FUN_11092d30(param_1));
    if (cVar1 == '\0') {
      thunk_FUN_1106f380(param_1);
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 1107ee00; body size 59 bytes.
#line 1 "ENTRY_1107ee00"

void __thiscall Recovered_Bulk::FUN_1107ee00(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  return;
}


// Reference entry 1107ee50; body size 59 bytes.
#line 1 "ENTRY_1107ee50"

void __thiscall Recovered_Bulk::FUN_1107ee50(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  return;
}


// Reference entry 1107eea0; body size 59 bytes.
#line 1 "ENTRY_1107eea0"

void __thiscall Recovered_Bulk::FUN_1107eea0(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  return;
}


// Reference entry 1107eef0; body size 59 bytes.
#line 1 "ENTRY_1107eef0"

void __thiscall Recovered_Bulk::FUN_1107eef0(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  return;
}


// Reference entry 1107ef40; body size 59 bytes.
#line 1 "ENTRY_1107ef40"

void __thiscall Recovered_Bulk::FUN_1107ef40(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  return;
}


// Reference entry 1107ef90; body size 59 bytes.
#line 1 "ENTRY_1107ef90"

void __thiscall Recovered_Bulk::FUN_1107ef90(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  return;
}


// Reference entry 1107efe0; body size 59 bytes.
#line 1 "ENTRY_1107efe0"

void __thiscall Recovered_Bulk::FUN_1107efe0(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  return;
}


// Reference entry 1107f030; body size 59 bytes.
#line 1 "ENTRY_1107f030"

void __thiscall Recovered_Bulk::FUN_1107f030(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  return;
}


// Reference entry 1107f080; body size 45 bytes.
#line 1 "ENTRY_1107f080"

void __thiscall Recovered_Bulk::FUN_1107f080(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 1107f0c0; body size 45 bytes.
#line 1 "ENTRY_1107f0c0"

void __thiscall Recovered_Bulk::FUN_1107f0c0(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 1107f100; body size 45 bytes.
#line 1 "ENTRY_1107f100"

void __thiscall Recovered_Bulk::FUN_1107f100(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 1107f140; body size 45 bytes.
#line 1 "ENTRY_1107f140"

void __thiscall Recovered_Bulk::FUN_1107f140(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 110802c0; body size 60 bytes.
#line 1 "ENTRY_110802c0"

void __stdcall FUN_110802c0(int param_1,int param_2)

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


// Reference entry 11080310; body size 60 bytes.
#line 1 "ENTRY_11080310"

void __stdcall FUN_11080310(int param_1,int param_2)

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


// Reference entry 11080520; body size 43 bytes.
#line 1 "ENTRY_11080520"

void __fastcall FUN_11080520(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 11080560; body size 43 bytes.
#line 1 "ENTRY_11080560"

void __fastcall FUN_11080560(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 110805a0; body size 43 bytes.
#line 1 "ENTRY_110805a0"

void __fastcall FUN_110805a0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 110805e0; body size 43 bytes.
#line 1 "ENTRY_110805e0"

void __fastcall FUN_110805e0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 11080e90; body size 48 bytes.
#line 1 "ENTRY_11080e90"

void FUN_11080e90(void)

{
  undefined1 local_4 [4];
  
  thunk_FUN_110844a0(0,0,0,0,0,1,local_4);
  thunk_FUN_11136870();
  thunk_FUN_11136780();
  thunk_FUN_11091380();
  return;
}


// Reference entry 110810d0; body size 37 bytes.
#line 1 "ENTRY_110810d0"

undefined4 __fastcall FUN_110810d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)((**(code **)(*(int *)(param_1 + 0x1c) + 0xc))(param_1 + 0x639));
  if (iVar1 != 0) {
    uVar2 = (undefined4)(thunk_FUN_11138b60(iVar1 + 0x44));
    return (undefined4)(uVar2);
  }
  return (undefined4)(0);
}


// Reference entry 11081650; body size 39 bytes.
#line 1 "ENTRY_11081650"

undefined4 __fastcall FUN_11081650(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0xca28) == '\0') {
    cVar1 = (char)(thunk_FUN_1127f190());
    if (cVar1 != '\0') {
      return (undefined4)(*(undefined4 *)(param_1 + 0xc08c));
    }
  }
  return (undefined4)(0);
}


// Reference entry 110833f0; body size 38 bytes.
#line 1 "ENTRY_110833f0"

uint __fastcall FUN_110833f0(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(0);
  if ((*(int *)(param_1 + 0xa4) - (int)*(uint **)(param_1 + 0xa0) >> 2 != 0) &&
     (uVar1 = **(uint **)(param_1 + 0xa0), *(char *)(uVar1 + 0x560) != '\0')) {
    return (uint)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 11090e20; body size 28 bytes.
#line 1 "ENTRY_11090e20"

void FUN_11090e20(void)

{
  int *piVar1;
  
  thunk_FUN_1107f630();
  piVar1 = (int *)((int *)thunk_FUN_1114a810());
  (**(code **)(*piVar1 + 8))();
  thunk_FUN_1107f630();
  return;
}


// Reference entry 110916b0; body size 52 bytes.
#line 1 "ENTRY_110916b0"

void FUN_110916b0(char param_1)

{
  int *piVar1;
  
  thunk_FUN_1107f630();
  piVar1 = (int *)((int *)thunk_FUN_1114a810());
  if (param_1 != '\0') {
    (**(code **)(*piVar1 + 0xc))();
    thunk_FUN_1107f630();
    return;
  }
  (**(code **)(*piVar1 + 4))();
  thunk_FUN_1107f630();
  return;
}


// Reference entry 110937d0; body size 37 bytes.
#line 1 "ENTRY_110937d0"

undefined4 __thiscall Recovered_Bulk::FUN_110937d0(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_11089c30((int *)(param_1 + 0xbc),param_2));
  if (iVar1 != -1) {
    return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0xbc) + iVar1 * 4));
  }
  return (undefined4)(0);
}


// Reference entry 11093800; body size 48 bytes.
#line 1 "ENTRY_11093800"

undefined4 __thiscall Recovered_Bulk::FUN_11093800(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_11089ce0(param_1 + 0x94,param_2,1));
  if (iVar1 != -1) {
    return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x94) + iVar1 * 4));
  }
  return (undefined4)(0);
}


// Reference entry 110939e0; body size 44 bytes.
#line 1 "ENTRY_110939e0"

int * FUN_110939e0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_110935f0(param_1,param_2));
  if (piVar1 != (int *)0x0) {
    iVar2 = (int)((**(code **)(*piVar1 + 0x54))());
    if (iVar2 == 1) {
      return (int *)(piVar1);
    }
  }
  return (int *)((int *)0x0);
}


// Reference entry 11093d10; body size 46 bytes.
#line 1 "ENTRY_11093d10"

undefined4 __thiscall Recovered_Bulk::FUN_11093d10(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_11089c30(param_1 + 0xe4,param_2));
  if (iVar1 != -1) {
    return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0xe4) + iVar1 * 4));
  }
  return (undefined4)(0);
}


// Reference entry 11093d50; body size 50 bytes.
#line 1 "ENTRY_11093d50"

undefined4 __thiscall Recovered_Bulk::FUN_11093d50(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_11089ce0(param_1 + 0x84,param_2,param_3));
  if (iVar1 != -1) {
    return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x84) + iVar1 * 4));
  }
  return (undefined4)(0);
}


// Reference entry 11094310; body size 56 bytes.
#line 1 "ENTRY_11094310"

void __fastcall FUN_11094310(int param_1)

{
  int *piVar1;
  
  *(int *)(param_1 + 0x2d41c) = *(int *)(param_1 + 0x2d41c) + 1;
  thunk_FUN_111a7100("OnThirdPartyMSsChanged",0,0);
  piVar1 = (int *)((int *)(param_1 + 0x2d41c));
  *piVar1 = (int)(*piVar1 + -1);
  if (*piVar1 == 0) {
    thunk_FUN_111a7100("OnPostHouseholdEvent",0,0);
  }
  return;
}


// Reference entry 11094360; body size 18 bytes.
#line 1 "ENTRY_11094360"

void FUN_11094360(void)

{
  thunk_FUN_111a7100("OnThirdPartyMSsChanged",0,0);
  return;
}


// Reference entry 11094380; body size 18 bytes.
#line 1 "ENTRY_11094380"

void FUN_11094380(void)

{
  thunk_FUN_111a7100("OnThirdPartyMSsChanged",0,0);
  return;
}


// Reference entry 11094590; body size 18 bytes.
#line 1 "ENTRY_11094590"

void FUN_11094590(void)

{
  thunk_FUN_111a7100("OnSecureSettingsChanged",0,0);
  return;
}


// Reference entry 110945b0; body size 18 bytes.
#line 1 "ENTRY_110945b0"

void FUN_110945b0(void)

{
  thunk_FUN_111a7100("OnThirdPartyMSsChanged",0,0);
  return;
}


// Reference entry 110945d0; body size 18 bytes.
#line 1 "ENTRY_110945d0"

void FUN_110945d0(void)

{
  thunk_FUN_111a7100("OnSettingsChanged",0,0);
  return;
}


// Reference entry 110945f0; body size 18 bytes.
#line 1 "ENTRY_110945f0"

void FUN_110945f0(void)

{
  thunk_FUN_111a7100("OnTestEnvChanged",0,0);
  return;
}


// Reference entry 110958a0; body size 62 bytes.
#line 1 "ENTRY_110958a0"

undefined4 __stdcall FUN_110958a0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  thunk_FUN_112af4e0("household",3,"refreshing account credentials for SID: %u UID: %u",param_1,
                     param_2);
  thunk_FUN_111f6cc0(param_1 >> 8,param_2,param_3,param_4);
  return (undefined4)(0);
}


// Reference entry 11096620; body size 61 bytes.
#line 1 "ENTRY_11096620"

void __fastcall FUN_11096620(int param_1)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x1c4) = 1;
  thunk_FUN_1107f630();
  piVar1 = (int *)((int *)thunk_FUN_1114a810());
  (**(code **)(*piVar1 + 8))();
  thunk_FUN_1107f630();
  thunk_FUN_1109f7f0();
  thunk_FUN_110a0210();
  thunk_FUN_1116d520();
  return;
}


// Reference entry 11096c40; body size 57 bytes.
#line 1 "ENTRY_11096c40"

undefined1 FUN_11096c40(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  iVar2 = (int)(DAT_121a7ba4);
  if (DAT_121a7ba4 != 0) {
    iVar1 = (int)(DAT_121a7ba4 + 4);
    cVar3 = (char)(thunk_FUN_112a7f50(iVar1));
    *(undefined4 *)(iVar2 + 0x14) = param_1;
    if (cVar3 != '\0') {
      thunk_FUN_112a8010(iVar1);
    }
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 11097130; body size 36 bytes.
#line 1 "ENTRY_11097130"

void __thiscall Recovered_Bulk::FUN_11097130(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(char *)(param_1 + 0x2d446) != (char)param_2) {
    *(char *)(param_1 + 0x2d446) = (char)param_2;
    thunk_FUN_1109f7f0();
    thunk_FUN_110a30d0(param_2);
  }
  return;
}


// Reference entry 110974e0; body size 44 bytes.
#line 1 "ENTRY_110974e0"

undefined4 __thiscall Recovered_Bulk::FUN_110974e0(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(char *)(param_1 + 0x2d447) != (char)param_2) {
    *(char *)(param_1 + 0x2d447) = (char)param_2;
    thunk_FUN_1109f7f0();
    thunk_FUN_110a3240(param_2);
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 110977e0; body size 36 bytes.
#line 1 "ENTRY_110977e0"

void __thiscall Recovered_Bulk::FUN_110977e0(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(char *)(param_1 + 0x2d445) != (char)param_2) {
    *(char *)(param_1 + 0x2d445) = (char)param_2;
    thunk_FUN_1109f7f0();
    thunk_FUN_110a3e60(param_2);
  }
  return;
}


// Reference entry 110978f0; body size 30 bytes.
#line 1 "ENTRY_110978f0"

void FUN_110978f0(void)

{
  if (DAT_121a7ba0 != 0) {
    thunk_FUN_111a7100("OnStopSearchForZonePlayers",0,0);
  }
  return;
}


// Reference entry 11097ab0; body size 52 bytes.
#line 1 "ENTRY_11097ab0"

void FUN_11097ab0(char param_1)

{
  int *piVar1;
  
  thunk_FUN_1107f630();
  piVar1 = (int *)((int *)thunk_FUN_1114a810());
  if (param_1 != '\0') {
    (**(code **)(*piVar1 + 0xc))();
    thunk_FUN_1107f630();
    return;
  }
  (**(code **)(*piVar1 + 8))();
  thunk_FUN_1107f630();
  return;
}


// Reference entry 110984c0; body size 34 bytes.
#line 1 "ENTRY_110984c0"

undefined4 __stdcall FUN_110984c0(uint param_1,undefined4 param_2,int param_3)

{
  thunk_FUN_111f6d60(param_1 >> 8,param_2,*(undefined4 *)(param_3 + 0x5c));
  return (undefined4)(0);
}


// Reference entry 11098860; body size 60 bytes.
#line 1 "ENTRY_11098860"

int __thiscall Recovered_Bulk::FUN_11098860(undefined4 param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_110988b0(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (cVar1 = thunk_FUN_111a0940(local_4 + 0x10), cVar1 == '\0')) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 11098ef0; body size 48 bytes.
#line 1 "ENTRY_11098ef0"

undefined4 * __fastcall FUN_11098ef0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 1109aed0; body size 57 bytes.
#line 1 "ENTRY_1109aed0"

undefined * FUN_1109aed0(undefined4 param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)(PTR_s_other_1211d614);
  switch(param_1) {
  case 0:
    return (undefined *)(PTR_DAT_1211d600);
  case 1:
    return (undefined *)(PTR_DAT_1211d604);
  case 2:
    return (undefined *)(PTR_DAT_1211d608);
  case 3:
    return (undefined *)(PTR_DAT_1211d60c);
  case 4:
    return (undefined *)(PTR_DAT_1211d610);
  case 6:
    puVar1 = (undefined *)(PTR_DAT_1211d618);
  }
  return (undefined *)(puVar1);
}


// Reference entry 1109c020; body size 57 bytes.
#line 1 "ENTRY_1109c020"

void __fastcall FUN_1109c020(int param_1)

{
  if (*(int *)(param_1 + 4) == 1) {
    if (*(uint *)(param_1 + 0x10) < 0x2fc) {
      *(undefined4 *)(&DAT_121b54e0 + *(uint *)(param_1 + 0x10) * 4) = 0;
    }
  }
  else if ((*(int *)(param_1 + 4) == 3) && (*(uint *)(param_1 + 0x10) < 0xefa)) {
    *(undefined4 *)(&DAT_122af408 + *(uint *)(param_1 + 0x10) * 4) = 0;
    return;
  }
  return;
}


// Reference entry 1109dee0; body size 45 bytes.
#line 1 "ENTRY_1109dee0"

void __thiscall Recovered_Bulk::FUN_1109dee0(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 1109e380; body size 43 bytes.
#line 1 "ENTRY_1109e380"

void __fastcall FUN_1109e380(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 1109ed30; body size 30 bytes.
#line 1 "ENTRY_1109ed30"

undefined2 FUN_1109ed30(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_110828b0());
  iVar1 = (int)((*(code *)**(undefined4 **)(iVar1 + 0x1c))());
  if (iVar1 != 0) {
    return (undefined2)(*(undefined2 *)(iVar1 + 0x70));
  }
  return (undefined2)(0);
}


// Reference entry 1109ed60; body size 30 bytes.
#line 1 "ENTRY_1109ed60"

undefined2 FUN_1109ed60(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_110828b0());
  iVar1 = (int)((*(code *)**(undefined4 **)(iVar1 + 0x1c))());
  if (iVar1 != 0) {
    return (undefined2)(*(undefined2 *)(iVar1 + 0x72));
  }
  return (undefined2)(0);
}


// Reference entry 1109ef90; body size 43 bytes.
#line 1 "ENTRY_1109ef90"

void __thiscall Recovered_Bulk::FUN_1109ef90(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  thunk_FUN_11458fa0(*(undefined4 *)(param_1 + 0x20));
  thunk_FUN_114595b0("NewSortOrder",param_2,param_3);
  return;
}


// Reference entry 1109f0a0; body size 42 bytes.
#line 1 "ENTRY_1109f0a0"

void __thiscall Recovered_Bulk::FUN_1109f0a0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  thunk_FUN_11458fa0(*(undefined4 *)(param_1 + 0x20));
  thunk_FUN_114595b0(param_2,param_3,param_4);
  return;
}


// Reference entry 1109f100; body size 43 bytes.
#line 1 "ENTRY_1109f100"

void __thiscall Recovered_Bulk::FUN_1109f100(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  thunk_FUN_11458fa0(*(undefined4 *)(param_1 + 0x20));
  thunk_FUN_114595b0("HouseholdID",param_2,param_3);
  return;
}


// Reference entry 1109f210; body size 53 bytes.
#line 1 "ENTRY_1109f210"

void FUN_1109f210(undefined4 param_1)

{
  undefined1 local_14 [16];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_14);
  thunk_FUN_112a8d70(local_14,param_1,0,0);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1109f280; body size 43 bytes.
#line 1 "ENTRY_1109f280"

void __thiscall Recovered_Bulk::FUN_1109f280(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  thunk_FUN_11458fa0(*(undefined4 *)(param_1 + 0x20));
  thunk_FUN_114595b0("MuseHouseholdID",param_2,param_3);
  return;
}


// Reference entry 1109f320; body size 43 bytes.
#line 1 "ENTRY_1109f320"

void __thiscall Recovered_Bulk::FUN_1109f320(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  thunk_FUN_11458fa0(*(undefined4 *)(param_1 + 0x20));
  thunk_FUN_114595b0("ProductRegID",param_2,param_3);
  return;
}


// Reference entry 110a0fd0; body size 45 bytes.
#line 1 "ENTRY_110a0fd0"

bool __fastcall FUN_110a0fd0(int param_1)

{
  char cVar1;
  undefined1 local_1c [28];
  
  thunk_FUN_11458fa0(*(undefined4 *)(param_1 + 0x20));
  cVar1 = (char)(thunk_FUN_114595b0("userMetricsTracking",local_1c,2));
  return (bool)(cVar1 == '\0');
}


// Reference entry 110a1230; body size 58 bytes.
#line 1 "ENTRY_110a1230"

undefined4 __fastcall FUN_110a1230(int param_1)

{
  char cVar1;
  char local_1c [28];
  
  thunk_FUN_11458fa0(*(undefined4 *)(param_1 + 0x20));
  cVar1 = (char)(thunk_FUN_114595b0("recentlyPlayed",local_1c,2));
  if ((cVar1 != '\0') && (local_1c[0] == '1')) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 110a12a0; body size 58 bytes.
#line 1 "ENTRY_110a12a0"

undefined4 __fastcall FUN_110a12a0(int param_1)

{
  char cVar1;
  char local_1c [28];
  
  thunk_FUN_11458fa0(*(undefined4 *)(param_1 + 0x20));
  cVar1 = (char)(thunk_FUN_114595b0("hideTuneIn",local_1c,2));
  if ((cVar1 != '\0') && (local_1c[0] == '1')) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 110a3080; body size 38 bytes.
#line 1 "ENTRY_110a3080"

undefined4 __thiscall Recovered_Bulk::FUN_110a3080(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1124ffa0("RDMValue",0);
  thunk_FUN_1124f3c0(param_2);
  return (undefined4)(param_1);
}


// Reference entry 110a4fa0; body size 25 bytes.
#line 1 "ENTRY_110a4fa0"

void FUN_110a4fa0(undefined4 param_1,undefined4 param_2)

{
 try {
  thunk_FUN_111a7be0("ActionScriptTrace",10,param_2,&stack0x0000000c);
  return;

 } catch (...) { }
}


// Reference entry 110a5340; body size 59 bytes.
#line 1 "ENTRY_110a5340"

uint __thiscall Recovered_Bulk::FUN_110a5340(uint param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  char *pcVar2;
  uint in_EAX;
  char *pcVar3;
  uint uVar4;
  
  pcVar2 = (char *)((char *)*param_1);
  if (pcVar2 != (char *)0x0) {
    uVar4 = (uint)(*(uint *)(pcVar2 + -0xc));
    if (uVar4 == 0) {
      pcVar3 = (char *)(pcVar2);
      do {
        cVar1 = (char)(*pcVar3);
        in_EAX = (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(cVar1)));
        pcVar3 = (char *)(pcVar3 + 1);
      } while (cVar1 != '\0');
      uVar4 = (uint)((int)pcVar3 - (int)(pcVar2 + 1));
      *(uint *)(pcVar2 + -0xc) = uVar4;
    }
    if (param_2 < uVar4) {
      return (uint)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*(undefined1 *)(param_2 + *param_1))));
    }
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 110a6770; body size 40 bytes.
#line 1 "ENTRY_110a6770"

int __thiscall Recovered_Bulk::FUN_110a6770(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_110a67f0(local_8,param_2,param_3));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 0xc));
  }
  return (int)(iVar1);
}


// Reference entry 110a67b0; body size 40 bytes.
#line 1 "ENTRY_110a67b0"

int __thiscall Recovered_Bulk::FUN_110a67b0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_110a68c0(local_8,param_2,param_3));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 110a8600; body size 39 bytes.
#line 1 "ENTRY_110a8600"

undefined4 * __fastcall FUN_110a8600(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x10));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 110a8630; body size 39 bytes.
#line 1 "ENTRY_110a8630"

undefined4 * __fastcall FUN_110a8630(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x10));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 110a8660; body size 39 bytes.
#line 1 "ENTRY_110a8660"

undefined4 * __fastcall FUN_110a8660(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x10));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 110aa6d0; body size 27 bytes.
#line 1 "ENTRY_110aa6d0"

int __stdcall FUN_110aa6d0(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_110a6fa0(local_8,param_1));
  return (int)(*piVar1 + 0xc);
}


// Reference entry 110aa700; body size 27 bytes.
#line 1 "ENTRY_110aa700"

int __stdcall FUN_110aa700(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_110a6d20(local_8,param_1));
  return (int)(*piVar1 + 0xc);
}


// Reference entry 110ac250; body size 63 bytes.
#line 1 "ENTRY_110ac250"

void __thiscall Recovered_Bulk::FUN_110ac250(undefined4 param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  void *_Dst;
  
  iVar1 = (int)(param_1[1]);
  iVar2 = (int)(*param_1);
  _Dst = (void *)((void *)thunk_FUN_110acc40(param_2));
  memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
  thunk_FUN_110ab530(_Dst,iVar1 - iVar2 >> 2,param_2);
  return;
}


// Reference entry 110add70; body size 49 bytes.
#line 1 "ENTRY_110add70"

bool __fastcall FUN_110add70(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x38));
  if (*(char *)(param_1 + 0x31) == '\0') {
    thunk_FUN_110aeb40(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),0x3ec,0,0);
    thunk_FUN_110adba0();
  }
  return (bool)(iVar1 != 0);
}


// Reference entry 110b0c50; body size 29 bytes.
#line 1 "ENTRY_110b0c50"

bool __stdcall FUN_110b0c50(undefined4 param_1)

{
  int iVar1;
  undefined1 local_4 [4];
  
  iVar1 = (int)(thunk_FUN_110b3000(param_1,local_4));
  return (bool)(iVar1 != 0);
}


// Reference entry 110b23a0; body size 44 bytes.
#line 1 "ENTRY_110b23a0"

bool FUN_110b23a0(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = (int)(thunk_FUN_110b3000(param_1,0));
    return (bool)(param_2 == iVar1);
  }
  return (bool)(false);
}


// Reference entry 110b43b0; body size 52 bytes.
#line 1 "ENTRY_110b43b0"

undefined4 __stdcall FUN_110b43b0(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_110b2410(param_1,param_2));
  if (*pcVar1 == '\0') {
    thunk_FUN_110b4400(param_1);
    *pcVar1 = (char)('\x01');
  }
  return (undefined4)(*(undefined4 *)(pcVar1 + 8));
}


// Reference entry 110b4850; body size 54 bytes.
#line 1 "ENTRY_110b4850"

void __thiscall Recovered_Bulk::FUN_110b4850(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x20));
  piVar2 = (int *)((int *)(param_1 + 0x20));
  if (iVar1 != 0) {
    while (iVar1 != param_2) {
      piVar2 = (int *)((int *)(iVar1 + 0x10));
      iVar1 = (int)(*piVar2);
      if (iVar1 == 0) {
        return;
      }
    }
    *piVar2 = (int)(*(int *)(param_2 + 0x10));
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  return;
}


// Reference entry 110b5610; body size 54 bytes.
#line 1 "ENTRY_110b5610"

undefined4 * __thiscall Recovered_Bulk::FUN_110b5610(undefined4 param_2,int *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  
  *param_1 = (undefined4)(param_2);
  iVar1 = (int)(*param_3);
  param_1[1] = (undefined4)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110b5890; body size 30 bytes.
#line 1 "ENTRY_110b5890"

void __fastcall FUN_110b5890(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RPresentationMap);
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_RPresentationMapCB);
  return;
}


// Reference entry 110b5900; body size 52 bytes.
#line 1 "ENTRY_110b5900"

undefined4 * __thiscall Recovered_Bulk::FUN_110b5900(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RPresentationMap);
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_RPresentationMapCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110b5c70; body size 27 bytes.
#line 1 "ENTRY_110b5c70"

undefined4 __stdcall FUN_110b5c70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_1118aa30(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 110b5e60; body size 23 bytes.
#line 1 "ENTRY_110b5e60"

undefined4 __stdcall FUN_110b5e60(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1118adc0(param_1,param_2);
  return (undefined4)(param_1);
}


// Reference entry 110b60e0; body size 19 bytes.
#line 1 "ENTRY_110b60e0"

void __thiscall Recovered_Bulk::FUN_110b60e0(void)
{
  int param_1 = (int )this;
  undefined4 in_stack_00000010;
  
  *(undefined4 *)(param_1 + 8) = in_stack_00000010;
  thunk_FUN_1118d230();
  return;
}


// Reference entry 110b7de0; body size 40 bytes.
#line 1 "ENTRY_110b7de0"

undefined4 * FUN_110b7de0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_1113eb00("r:streamInfo"));
  if ((ushort)uVar1 < 0x44) {
    *param_1 = (undefined4)(uVar1);
    return (undefined4 *)(param_1);
  }
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 110b89b0; body size 33 bytes.
#line 1 "ENTRY_110b89b0"

undefined1 * FUN_110b89b0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_110b87c0(param_1,param_2));
  if (piVar1 != (int *)0x0) {
                    
                    
    puVar2 = (undefined1 *)((undefined1 *)(**(code **)(*piVar1 + 0x24))());
    return (undefined1 *)(puVar2);
  }
  return (undefined1 *)(&DAT_1186d2ee);
}


// Reference entry 110b8e40; body size 62 bytes.
#line 1 "ENTRY_110b8e40"

undefined4 FUN_110b8e40(undefined4 param_1)

{
  int iVar1;
  char *local_28;
  int local_24;
  
  thunk_FUN_11245a50(param_1,&local_28);
  if (local_24 == 0xf) {
    iVar1 = (int)(strncmp(local_28,"x-rincon-stream",0xf));
    if (iVar1 == 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 110b8e90; body size 62 bytes.
#line 1 "ENTRY_110b8e90"

undefined4 FUN_110b8e90(undefined4 param_1)

{
  int iVar1;
  char *local_28;
  int local_24;
  
  thunk_FUN_11245a50(param_1,&local_28);
  if (local_24 == 0xf) {
    iVar1 = (int)(strncmp(local_28,"x-rincon-buzzer",0xf));
    if (iVar1 == 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 110b8ef0; body size 30 bytes.
#line 1 "ENTRY_110b8ef0"

void FUN_110b8ef0(undefined4 param_1)

{
  undefined1 local_28 [40];
  
  thunk_FUN_11245a50(param_1,local_28);
  FUN_110befd0(local_28);
  return;
}


// Reference entry 110b8fc0; body size 62 bytes.
#line 1 "ENTRY_110b8fc0"

undefined4 FUN_110b8fc0(undefined4 param_1)

{
  int iVar1;
  char *local_28;
  int local_24;
  
  thunk_FUN_11245a50(param_1,&local_28);
  if (local_24 == 0x11) {
    iVar1 = (int)(strncmp(local_28,"x-sonos-htastream",0x11));
    if (iVar1 == 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 110b9130; body size 62 bytes.
#line 1 "ENTRY_110b9130"

undefined4 FUN_110b9130(undefined4 param_1)

{
  int iVar1;
  char *local_28;
  int local_24;
  
  thunk_FUN_11245a50(param_1,&local_28);
  if (local_24 == 0xe) {
    iVar1 = (int)(strncmp(local_28,"x-rincon-queue",0xe));
    if (iVar1 == 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 110b9200; body size 38 bytes.
#line 1 "ENTRY_110b9200"

undefined4 FUN_110b9200(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1[1] == 0x13) {
    iVar1 = (int)(strncmp((char *)*param_1,"x-sonosapi-rtrecent",0x13));
    if (iVar1 == 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 110b9230; body size 62 bytes.
#line 1 "ENTRY_110b9230"

undefined4 FUN_110b9230(undefined4 param_1)

{
  int iVar1;
  char *local_28;
  int local_24;
  
  thunk_FUN_11245a50(param_1,&local_28);
  if (local_24 == 0x13) {
    iVar1 = (int)(strncmp(local_28,"x-sonosapi-rtrecent",0x13));
    if (iVar1 == 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 110b9280; body size 38 bytes.
#line 1 "ENTRY_110b9280"

undefined4 FUN_110b9280(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1[1] == 0x11) {
    iVar1 = (int)(strncmp((char *)*param_1,"x-sonosapi-stream",0x11));
    if (iVar1 == 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 110b92b0; body size 62 bytes.
#line 1 "ENTRY_110b92b0"

undefined4 FUN_110b92b0(undefined4 param_1)

{
  int iVar1;
  char *local_28;
  int local_24;
  
  thunk_FUN_11245a50(param_1,&local_28);
  if (local_24 == 0x11) {
    iVar1 = (int)(strncmp(local_28,"x-sonosapi-stream",0x11));
    if (iVar1 == 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 110b93b0; body size 59 bytes.
#line 1 "ENTRY_110b93b0"

bool FUN_110b93b0(undefined4 param_1)

{
  int iVar1;
  char *local_28 [10];
  
  thunk_FUN_11245a50(param_1,local_28);
  if (local_28[0] == (char *)0x0) {
    return (bool)(false);
  }
  iVar1 = (int)(strncmp(local_28[0],"x-sonosapi-radio",0x10));
  return (bool)(iVar1 == 0);
}


// Reference entry 110b9430; body size 59 bytes.
#line 1 "ENTRY_110b9430"

bool FUN_110b9430(undefined4 param_1)

{
  int iVar1;
  char *local_28 [10];
  
  thunk_FUN_11245a50(param_1,local_28);
  if (local_28[0] == (char *)0x0) {
    return (bool)(false);
  }
  iVar1 = (int)(strncmp(local_28[0],"x-sonosprog",0xb));
  return (bool)(iVar1 == 0);
}


// Reference entry 110b9590; body size 62 bytes.
#line 1 "ENTRY_110b9590"

undefined4 FUN_110b9590(undefined4 param_1)

{
  int iVar1;
  char *local_28;
  int local_24;
  
  thunk_FUN_11245a50(param_1,&local_28);
  if (local_24 == 0xb) {
    iVar1 = (int)(strncmp(local_28,"x-sonos-vli",0xb));
    if (iVar1 == 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 110b9610; body size 62 bytes.
#line 1 "ENTRY_110b9610"

undefined4 FUN_110b9610(undefined4 param_1)

{
  int iVar1;
  char *local_28;
  int local_24;
  
  thunk_FUN_11245a50(param_1,&local_28);
  if (local_24 == 8) {
    iVar1 = (int)(strncmp(local_28,"x-rincon",8));
    if (iVar1 == 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 110b9940; body size 43 bytes.
#line 1 "ENTRY_110b9940"

undefined4 FUN_110b9940(undefined4 *param_1)

{
  int iVar1;
  
  if (((char *)*param_1 != (char *)0x0) && (6 < (uint)param_1[1])) {
    iVar1 = (int)(strncmp((char *)*param_1,"x-sonos",7));
    if (iVar1 == 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 110bc830; body size 34 bytes.
#line 1 "ENTRY_110bc830"

void __stdcall FUN_110bc830(undefined4 param_1,undefined1 *param_2,undefined4 param_3)

{
  *param_2 = (undefined1)(0);
  thunk_FUN_110bcb10("r:EnqueuedTransportURIMetaData","dc:title",param_1,param_2,param_3);
  return;
}


// Reference entry 110bf210; body size 42 bytes.
#line 1 "ENTRY_110bf210"

void __thiscall Recovered_Bulk::FUN_110bf210(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x20) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x20));
  }
  thunk_FUN_1145c720(param_3,param_4,"x-rincon-queue:%s#%d",puVar1,param_2);
  return;
}


// Reference entry 110bf3e0; body size 38 bytes.
#line 1 "ENTRY_110bf3e0"

undefined4 __thiscall Recovered_Bulk::FUN_110bf3e0(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1124ffa0("InstanceID",0);
  thunk_FUN_1124f350(param_2);
  return (undefined4)(param_1);
}


// Reference entry 110bf600; body size 38 bytes.
#line 1 "ENTRY_110bf600"

undefined4 __thiscall Recovered_Bulk::FUN_110bf600(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1124ffa0("InstanceID",0);
  thunk_FUN_1124f350(param_2);
  return (undefined4)(param_1);
}


// Reference entry 110bf630; body size 38 bytes.
#line 1 "ENTRY_110bf630"

undefined4 __thiscall Recovered_Bulk::FUN_110bf630(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1124ffa0("InstanceID",0);
  thunk_FUN_1124f350(param_2);
  return (undefined4)(param_1);
}


// Reference entry 110bf660; body size 38 bytes.
#line 1 "ENTRY_110bf660"

undefined4 __thiscall Recovered_Bulk::FUN_110bf660(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1124ffa0("InstanceID",0);
  thunk_FUN_1124f350(param_2);
  return (undefined4)(param_1);
}


// Reference entry 110c0940; body size 25 bytes.
#line 1 "ENTRY_110c0940"

void __fastcall FUN_110c0940(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMSDListProcessorWithLogos);
  thunk_FUN_112818d0();
  thunk_FUN_11281950();
  return;
}


// Reference entry 110c0eb0; body size 51 bytes.
#line 1 "ENTRY_110c0eb0"

undefined4 * __thiscall Recovered_Bulk::FUN_110c0eb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMSDListProcessorWithLogos);
  thunk_FUN_112818d0();
  thunk_FUN_11281950();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x150);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110c1190; body size 50 bytes.
#line 1 "ENTRY_110c1190"

void __thiscall Recovered_Bulk::FUN_110c1190(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 0x20) == 0) {
    thunk_FUN_110c49a0();
    thunk_FUN_1107e550(param_1);
    thunk_FUN_1107e1f0(param_1);
  }
  FUN_10070892(param_2);
  return;
}


// Reference entry 110c1920; body size 59 bytes.
#line 1 "ENTRY_110c1920"

void __thiscall Recovered_Bulk::FUN_110c1920(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  return;
}


// Reference entry 110c1970; body size 59 bytes.
#line 1 "ENTRY_110c1970"

void __thiscall Recovered_Bulk::FUN_110c1970(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  return;
}


// Reference entry 110c19c0; body size 59 bytes.
#line 1 "ENTRY_110c19c0"

void __thiscall Recovered_Bulk::FUN_110c19c0(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  return;
}


// Reference entry 110c1a10; body size 45 bytes.
#line 1 "ENTRY_110c1a10"

void __thiscall Recovered_Bulk::FUN_110c1a10(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 110c1a60; body size 24 bytes.
#line 1 "ENTRY_110c1a60"

void FUN_110c1a60(void)

{
  thunk_FUN_11284360();
  thunk_FUN_111f3f50();
  return;
}


// Reference entry 110c1a90; body size 16 bytes.
#line 1 "ENTRY_110c1a90"

undefined4 __fastcall FUN_110c1a90(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    return (undefined4)(0);
  }
  uVar1 = (undefined4)(FUN_10002a68());
  return (undefined4)(uVar1);
}


// Reference entry 110c1e70; body size 43 bytes.
#line 1 "ENTRY_110c1e70"

void __fastcall FUN_110c1e70(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 110c20d0; body size 24 bytes.
#line 1 "ENTRY_110c20d0"

undefined4 FUN_110c20d0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_110c33f0(param_1));
  if (iVar1 != 0) {
    return (undefined4)(*(undefined4 *)(iVar1 + 4));
  }
  return (undefined4)(0);
}


// Reference entry 110c35b0; body size 30 bytes.
#line 1 "ENTRY_110c35b0"

undefined4 __fastcall FUN_110c35b0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar1 = (undefined4)((*(code *)**(undefined4 **)(*(int *)(param_1 + 0x28) + 0x1c))());
    thunk_FUN_110c4ef0(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 110c3e90; body size 32 bytes.
#line 1 "ENTRY_110c3e90"

undefined4 __fastcall FUN_110c3e90(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar1 = (undefined4)((*(code *)**(undefined4 **)(*(int *)(param_1 + 0x28) + 0x1c))());
    thunk_FUN_110c4ef0(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 110c4940; body size 55 bytes.
#line 1 "ENTRY_110c4940"

void __thiscall Recovered_Bulk::FUN_110c4940(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x2c) + 4))(param_1 + 8,param_2));
    *(undefined4 *)(param_1 + 0x30) = uVar1;
    return;
  }
  thunk_FUN_110c3210();
  thunk_FUN_110c37b0(param_2,*(undefined4 *)(param_1 + 0x3c));
  return;
}


// Reference entry 110c4a10; body size 27 bytes.
#line 1 "ENTRY_110c4a10"

uint __fastcall FUN_110c4a10(int *param_1)

{
  uint in_EAX;
  
  if (((*param_1 == 0) && (in_EAX = param_1[1], in_EAX != 0)) && (*(char *)(in_EAX + 300) == '\x02')
     ) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 110c4a40; body size 27 bytes.
#line 1 "ENTRY_110c4a40"

uint __fastcall FUN_110c4a40(int *param_1)

{
  uint in_EAX;
  
  if (((*param_1 == 0) && (in_EAX = param_1[1], in_EAX != 0)) && (*(char *)(in_EAX + 300) == '\x04')
     ) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 110c4a70; body size 27 bytes.
#line 1 "ENTRY_110c4a70"

uint __fastcall FUN_110c4a70(int *param_1)

{
  uint in_EAX;
  
  if (((*param_1 == 0) && (in_EAX = param_1[1], in_EAX != 0)) && (*(char *)(in_EAX + 300) == '\x03')
     ) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 110c4ae0; body size 23 bytes.
#line 1 "ENTRY_110c4ae0"

uint __fastcall FUN_110c4ae0(int *param_1)

{
  uint in_EAX;
  
  if (*param_1 == 1) {
    return (uint)(in_EAX & 0xffffff00);
  }
  return (uint)(*(uint *)(param_1[1] + 0x130) >> 8 & 0xffffff01);
}


// Reference entry 110c4b00; body size 27 bytes.
#line 1 "ENTRY_110c4b00"

uint __fastcall FUN_110c4b00(int *param_1)

{
  uint in_EAX;
  
  if (((*param_1 == 0) && (in_EAX = param_1[1], in_EAX != 0)) && (*(char *)(in_EAX + 300) == '\0'))
  {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 110c5770; body size 40 bytes.
#line 1 "ENTRY_110c5770"

int __thiscall Recovered_Bulk::FUN_110c5770(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_10bfa4b0(local_8,param_2,param_3));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 110c57b0; body size 60 bytes.
#line 1 "ENTRY_110c57b0"

int __thiscall Recovered_Bulk::FUN_110c57b0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_110c5800(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (cVar1 = thunk_FUN_111a0940(local_4 + 0x10), cVar1 == '\0')) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 110c65a0; body size 48 bytes.
#line 1 "ENTRY_110c65a0"

undefined4 * __fastcall FUN_110c65a0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x50));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 110c7e50; body size 19 bytes.
#line 1 "ENTRY_110c7e50"

void FUN_110c7e50(void)

{
  thunk_FUN_111feb20();
  thunk_FUN_1114f320();
  return;
}


// Reference entry 110c8bc0; body size 27 bytes.
#line 1 "ENTRY_110c8bc0"

int __stdcall FUN_110c8bc0(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_110c59b0(local_8,param_1));
  return (int)(*piVar1 + 0xc);
}


// Reference entry 110c9050; body size 42 bytes.
#line 1 "ENTRY_110c9050"

undefined4 __thiscall Recovered_Bulk::FUN_110c9050(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_111feb20();
  thunk_FUN_1114f320();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x44);
  }
  return (undefined4)(param_1);
}


// Reference entry 110c9cb0; body size 45 bytes.
#line 1 "ENTRY_110c9cb0"

void __thiscall Recovered_Bulk::FUN_110c9cb0(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 110c9cf0; body size 45 bytes.
#line 1 "ENTRY_110c9cf0"

void __thiscall Recovered_Bulk::FUN_110c9cf0(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 110c9d30; body size 45 bytes.
#line 1 "ENTRY_110c9d30"

void __thiscall Recovered_Bulk::FUN_110c9d30(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 110c9d70; body size 45 bytes.
#line 1 "ENTRY_110c9d70"

void __thiscall Recovered_Bulk::FUN_110c9d70(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 110c9db0; body size 45 bytes.
#line 1 "ENTRY_110c9db0"

void __thiscall Recovered_Bulk::FUN_110c9db0(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 110c9df0; body size 45 bytes.
#line 1 "ENTRY_110c9df0"

void __thiscall Recovered_Bulk::FUN_110c9df0(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 110c9e30; body size 45 bytes.
#line 1 "ENTRY_110c9e30"

void __thiscall Recovered_Bulk::FUN_110c9e30(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 110c9e70; body size 45 bytes.
#line 1 "ENTRY_110c9e70"

void __thiscall Recovered_Bulk::FUN_110c9e70(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 110c9eb0; body size 45 bytes.
#line 1 "ENTRY_110c9eb0"

void __thiscall Recovered_Bulk::FUN_110c9eb0(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 110c9ef0; body size 45 bytes.
#line 1 "ENTRY_110c9ef0"

void __thiscall Recovered_Bulk::FUN_110c9ef0(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 110c9f30; body size 45 bytes.
#line 1 "ENTRY_110c9f30"

void __thiscall Recovered_Bulk::FUN_110c9f30(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 110c9f70; body size 45 bytes.
#line 1 "ENTRY_110c9f70"

void __thiscall Recovered_Bulk::FUN_110c9f70(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 110c9fb0; body size 45 bytes.
#line 1 "ENTRY_110c9fb0"

void __thiscall Recovered_Bulk::FUN_110c9fb0(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 110c9ff0; body size 45 bytes.
#line 1 "ENTRY_110c9ff0"

void __thiscall Recovered_Bulk::FUN_110c9ff0(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 110ca230; body size 44 bytes.
#line 1 "ENTRY_110ca230"

undefined1 __fastcall FUN_110ca230(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    cVar1 = (char)(FUN_1006f9dd());
    if (cVar1 == '\0') {
      cVar1 = (char)(thunk_FUN_11458870());
      if (cVar1 != '\0') {
        return (undefined1)(1);
      }
    }
  }
  return (undefined1)(0);
}


// Reference entry 110ca780; body size 47 bytes.
#line 1 "ENTRY_110ca780"

undefined4 FUN_110ca780(undefined4 *param_1)

{
  int iVar1;
  
  if (((char *)*param_1 != (char *)0x0) && (param_1[1] == 0xb)) {
    iVar1 = (int)(strncmp((char *)*param_1,"x-file-cifs",0xb));
    if (iVar1 == 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 110cadc0; body size 24 bytes.
#line 1 "ENTRY_110cadc0"

undefined4 __fastcall FUN_110cadc0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined4)(thunk_FUN_11456830());
    return (undefined4)(uVar1);
  }
  return (undefined4)(2);
}


// Reference entry 110caef0; body size 43 bytes.
#line 1 "ENTRY_110caef0"

void __fastcall FUN_110caef0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 110caf30; body size 43 bytes.
#line 1 "ENTRY_110caf30"

void __fastcall FUN_110caf30(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 110caf70; body size 43 bytes.
#line 1 "ENTRY_110caf70"

void __fastcall FUN_110caf70(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 110cafb0; body size 43 bytes.
#line 1 "ENTRY_110cafb0"

void __fastcall FUN_110cafb0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 110caff0; body size 43 bytes.
#line 1 "ENTRY_110caff0"

void __fastcall FUN_110caff0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 110cb030; body size 43 bytes.
#line 1 "ENTRY_110cb030"

void __fastcall FUN_110cb030(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 110cb070; body size 43 bytes.
#line 1 "ENTRY_110cb070"

void __fastcall FUN_110cb070(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 110cb0b0; body size 43 bytes.
#line 1 "ENTRY_110cb0b0"

void __fastcall FUN_110cb0b0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 110cb0f0; body size 43 bytes.
#line 1 "ENTRY_110cb0f0"

void __fastcall FUN_110cb0f0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 110cb130; body size 43 bytes.
#line 1 "ENTRY_110cb130"

void __fastcall FUN_110cb130(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 110cb170; body size 43 bytes.
#line 1 "ENTRY_110cb170"

void __fastcall FUN_110cb170(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 110cb1b0; body size 43 bytes.
#line 1 "ENTRY_110cb1b0"

void __fastcall FUN_110cb1b0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 110cb1f0; body size 43 bytes.
#line 1 "ENTRY_110cb1f0"

void __fastcall FUN_110cb1f0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 110cb230; body size 43 bytes.
#line 1 "ENTRY_110cb230"

void __fastcall FUN_110cb230(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 110cb270; body size 43 bytes.
#line 1 "ENTRY_110cb270"

void __fastcall FUN_110cb270(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 110cc260; body size 18 bytes.
#line 1 "ENTRY_110cc260"

undefined4 __stdcall FUN_110cc260(undefined4 param_1)

{
  thunk_FUN_110cc7f0(param_1,0);
  return (undefined4)(param_1);
}


// Reference entry 110ce370; body size 18 bytes.
#line 1 "ENTRY_110ce370"

undefined2 __fastcall FUN_110ce370(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    return (undefined2)(*(undefined2 *)(*(int *)(param_1 + 0x1c) + 0x56a));
  }
  return (undefined2)(0);
}


// Reference entry 110ceab0; body size 18 bytes.
#line 1 "ENTRY_110ceab0"

undefined4 __stdcall FUN_110ceab0(undefined4 param_1)

{
  thunk_FUN_110cc7f0(param_1,4);
  return (undefined4)(param_1);
}


// Reference entry 110cead0; body size 43 bytes.
#line 1 "ENTRY_110cead0"

char * __fastcall FUN_110cead0(int param_1)

{
  char *pcVar1;
  
  if (((*(char *)(param_1 + 0x520) == '\0') && (*(int *)(param_1 + 0x1c) != 0)) &&
     (pcVar1 = (char *)thunk_FUN_114574f0(), *pcVar1 != '\0')) {
    return (char *)(pcVar1);
  }
  return (char *)((char *)(param_1 + 0xb8));
}


// Reference entry 110d1d10; body size 18 bytes.
#line 1 "ENTRY_110d1d10"

undefined4 __stdcall FUN_110d1d10(undefined4 param_1)

{
  thunk_FUN_110cc7f0(param_1,5);
  return (undefined4)(param_1);
}


// Reference entry 110d2700; body size 21 bytes.
#line 1 "ENTRY_110d2700"

undefined1 __fastcall FUN_110d2700(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_11456fc0());
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d2720; body size 31 bytes.
#line 1 "ENTRY_110d2720"

uint __fastcall FUN_110d2720(int param_1)

{
  uint in_EAX;
  undefined4 uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined4)(thunk_FUN_11458e90());
    uVar2 = (uint)(thunk_FUN_11457670(uVar1));
    return (uint)(uVar2);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 110d2ec0; body size 43 bytes.
#line 1 "ENTRY_110d2ec0"

void __thiscall Recovered_Bulk::FUN_110d2ec0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined2 uVar1;
  undefined1 local_30 [48];
  
  thunk_FUN_11245bb0(param_2,local_30);
  uVar1 = (undefined2)(thunk_FUN_11246be0(local_30));
  *(undefined2 *)(param_1 + 0x74) = uVar1;
  return;
}


// Reference entry 110d3030; body size 43 bytes.
#line 1 "ENTRY_110d3030"

void __thiscall Recovered_Bulk::FUN_110d3030(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined2 uVar1;
  undefined1 local_30 [48];
  
  thunk_FUN_11245bb0(param_2,local_30);
  uVar1 = (undefined2)(thunk_FUN_112470f0(local_30));
  *(undefined2 *)(param_1 + 0x70) = uVar1;
  return;
}


// Reference entry 110d3070; body size 43 bytes.
#line 1 "ENTRY_110d3070"

void __thiscall Recovered_Bulk::FUN_110d3070(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined2 uVar1;
  undefined1 local_30 [48];
  
  thunk_FUN_11245bb0(param_2,local_30);
  uVar1 = (undefined2)(thunk_FUN_112471a0(local_30));
  *(undefined2 *)(param_1 + 0x72) = uVar1;
  return;
}


// Reference entry 110d3140; body size 35 bytes.
#line 1 "ENTRY_110d3140"

undefined1 __fastcall FUN_110d3140(int param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_1127caf0());
  if ((cVar1 != '\0') && (1 < *(uint *)(param_1 + 0x568))) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 110d4080; body size 62 bytes.
#line 1 "ENTRY_110d4080"

undefined1 __fastcall FUN_110d4080(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0xa70) == '\0') {
    return (undefined1)(0);
  }
  cVar1 = (char)(thunk_FUN_1127caf0());
  if (((cVar1 != '\0') && (1 < *(uint *)(param_1 + 0x568))) &&
     (cVar1 = thunk_FUN_1127cb00(), cVar1 != '\0')) {
    return (undefined1)(0);
  }
  return (undefined1)(1);
}


// Reference entry 110d55a0; body size 53 bytes.
#line 1 "ENTRY_110d55a0"

undefined1 __fastcall FUN_110d55a0(int param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_1127caf0());
  if ((cVar1 != '\0') && (1 < *(uint *)(param_1 + 0x568))) {
    cVar1 = (char)(thunk_FUN_1127cb00());
    if (cVar1 != '\0') {
      return (undefined1)(1);
    }
  }
  return (undefined1)(0);
}


// Reference entry 110d5760; body size 19 bytes.
#line 1 "ENTRY_110d5760"

undefined1 __fastcall FUN_110d5760(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return (undefined1)(1);
  }
  uVar1 = (undefined1)(FUN_1122c9e0());
  return (undefined1)(uVar1);
}


// Reference entry 110d5780; body size 40 bytes.
#line 1 "ENTRY_110d5780"

bool __fastcall FUN_110d5780(int param_1)

{
  char cVar1;
  
  thunk_FUN_1109f7f0();
  cVar1 = (char)(thunk_FUN_110a0140());
  if (cVar1 != '\0') {
    return (bool)(*(int *)(param_1 + 0x538) == 5);
  }
  return (bool)(*(int *)(param_1 + 0x538) == 3);
}


// Reference entry 110d7950; body size 34 bytes.
#line 1 "ENTRY_110d7950"

void __thiscall Recovered_Bulk::FUN_110d7950(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x5c) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x5c));
  }
  thunk_FUN_1127cc80(param_2,puVar1,0);
  return;
}


// Reference entry 110d88a0; body size 21 bytes.
#line 1 "ENTRY_110d88a0"

undefined1 __fastcall FUN_110d88a0(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_114586f0());
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d88c0; body size 21 bytes.
#line 1 "ENTRY_110d88c0"

undefined1 __fastcall FUN_110d88c0(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_11458720());
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d88e0; body size 21 bytes.
#line 1 "ENTRY_110d88e0"

undefined1 __fastcall FUN_110d88e0(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(FUN_1009070f());
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d8900; body size 21 bytes.
#line 1 "ENTRY_110d8900"

undefined1 __fastcall FUN_110d8900(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_11457040());
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d8930; body size 21 bytes.
#line 1 "ENTRY_110d8930"

undefined1 __fastcall FUN_110d8930(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_11458820());
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d8950; body size 21 bytes.
#line 1 "ENTRY_110d8950"

undefined1 __fastcall FUN_110d8950(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_11458830());
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d8970; body size 21 bytes.
#line 1 "ENTRY_110d8970"

undefined1 __fastcall FUN_110d8970(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(FUN_1006adb1());
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d89b0; body size 21 bytes.
#line 1 "ENTRY_110d89b0"

undefined1 __fastcall FUN_110d89b0(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_11458880());
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d89d0; body size 21 bytes.
#line 1 "ENTRY_110d89d0"

undefined1 __fastcall FUN_110d89d0(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_114588f0());
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d89f0; body size 51 bytes.
#line 1 "ENTRY_110d89f0"

undefined1 __fastcall FUN_110d89f0(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return (undefined1)(0);
  }
  cVar1 = (char)(thunk_FUN_114588c0());
  if ((cVar1 == '\0') && (cVar1 = FUN_1006adb1(), cVar1 == '\0')) {
    return (undefined1)(0);
  }
  return (undefined1)(1);
}


// Reference entry 110d8a30; body size 21 bytes.
#line 1 "ENTRY_110d8a30"

undefined1 __fastcall FUN_110d8a30(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_11458910());
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d8a50; body size 21 bytes.
#line 1 "ENTRY_110d8a50"

undefined1 __fastcall FUN_110d8a50(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_11458940());
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d8c40; body size 21 bytes.
#line 1 "ENTRY_110d8c40"

undefined1 __fastcall FUN_110d8c40(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_11458970());
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d8c60; body size 21 bytes.
#line 1 "ENTRY_110d8c60"

undefined1 __fastcall FUN_110d8c60(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_114589e0());
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d8c80; body size 21 bytes.
#line 1 "ENTRY_110d8c80"

undefined1 __fastcall FUN_110d8c80(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_114589f0());
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d8cb0; body size 21 bytes.
#line 1 "ENTRY_110d8cb0"

undefined1 __fastcall FUN_110d8cb0(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_11458a00());
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d8d00; body size 21 bytes.
#line 1 "ENTRY_110d8d00"

undefined1 __fastcall FUN_110d8d00(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(FUN_1009a598());
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d8d20; body size 21 bytes.
#line 1 "ENTRY_110d8d20"

undefined1 __fastcall FUN_110d8d20(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_11458a30());
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d8d40; body size 21 bytes.
#line 1 "ENTRY_110d8d40"

undefined1 __fastcall FUN_110d8d40(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_11458a40());
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d8d60; body size 21 bytes.
#line 1 "ENTRY_110d8d60"

undefined1 __fastcall FUN_110d8d60(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_11458a50());
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d8d80; body size 21 bytes.
#line 1 "ENTRY_110d8d80"

undefined1 __fastcall FUN_110d8d80(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_11458a60());
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d8dc0; body size 21 bytes.
#line 1 "ENTRY_110d8dc0"

undefined1 __fastcall FUN_110d8dc0(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_11458a90());
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d8de0; body size 31 bytes.
#line 1 "ENTRY_110d8de0"

uint __fastcall FUN_110d8de0(int param_1)

{
  uint in_EAX;
  undefined4 uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined4)(thunk_FUN_11458e90());
    uVar2 = (uint)(thunk_FUN_11458220(uVar1));
    return (uint)(uVar2);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 110d8e10; body size 46 bytes.
#line 1 "ENTRY_110d8e10"

undefined4 __fastcall FUN_110d8e10(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined4)(thunk_FUN_11458e90());
    switch(uVar1) {
    case 4:
    case 6:
    case 0xb:
    case 0x13:
    case 0x1d:
    case 0x23:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2e:
    case 0x30:
    case 0x37:
      return (undefined4)(0);
    }
  }
  return (undefined4)(1);
}


// Reference entry 110d9b30; body size 21 bytes.
#line 1 "ENTRY_110d9b30"

undefined4 __fastcall FUN_110d9b30(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined4)(thunk_FUN_11458e90());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 110d9bc0; body size 63 bytes.
#line 1 "ENTRY_110d9bc0"

undefined4 * __thiscall Recovered_Bulk::FUN_110d9bc0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111a4bc0(param_2,"MediaServer");
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjMediaServer);
  param_1[5] = (undefined4)(0);
  thunk_FUN_1145c250(param_1 + 6,param_3,0x401);
  return (undefined4 *)(param_1);
}


// Reference entry 110da760; body size 45 bytes.
#line 1 "ENTRY_110da760"

int __fastcall FUN_110da760(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x20) + 0x58))());
    uVar2 = (uint)((**(code **)(**(int **)(param_1 + 0x20) + 0x58))());
    return (int)((uVar2 & 1) + ((uVar1 & 0xffffff7f) - 1));
  }
  return (int)(0);
}


// Reference entry 110db5c0; body size 34 bytes.
#line 1 "ENTRY_110db5c0"

undefined4 __fastcall FUN_110db5c0(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)((**(code **)(*param_1 + 0x54))());
  if (iVar1 == 1) {
    iVar1 = (int)((**(code **)(*param_1 + 0x5c))());
    if ((*(byte *)(iVar1 + 4) & 1) != 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 110dc760; body size 58 bytes.
#line 1 "ENTRY_110dc760"

void __fastcall FUN_110dc760(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RLookupMetadataAIOOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RLookupMetadataAIOOp);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_RLookupMetadataAIOOp);
  param_1[0x970] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  thunk_FUN_110a9ef0();
  thunk_FUN_11261f10();
  return;
}


// Reference entry 110dc880; body size 19 bytes.
#line 1 "ENTRY_110dc880"

void __fastcall FUN_110dc880(undefined4 *param_1)

{
  thunk_FUN_111392b0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RefCountBase);
  return;
}


// Reference entry 110dc8a0; body size 34 bytes.
#line 1 "ENTRY_110dc8a0"

void __fastcall FUN_110dc8a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosAAURITranslator);
  param_1[0x1805] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAsyncURITranslator);
  return;
}


// Reference entry 110dcd90; body size 41 bytes.
#line 1 "ENTRY_110dcd90"

undefined4 * __thiscall Recovered_Bulk::FUN_110dcd90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111392b0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RefCountBase);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,100);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110dcdd0; body size 59 bytes.
#line 1 "ENTRY_110dcdd0"

undefined4 * __thiscall Recovered_Bulk::FUN_110dcdd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosAAURITranslator);
  param_1[0x1805] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAsyncURITranslator);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6020);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110de320; body size 58 bytes.
#line 1 "ENTRY_110de320"

uint __fastcall FUN_110de320(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0x1888));
  if ((uVar1 != 0) && (0x1d < uVar1)) {
    if (0xe10 < uVar1) {
      return (uint)(0xe10);
    }
    return (uint)(uVar1);
  }
  uVar1 = (uint)((uint)*(ushort *)(param_1 + 0x169a));
  if ((uVar1 == 0) || (uVar1 < 0x1e)) {
    uVar1 = (uint)(0x1e);
  }
  else if (0xe10 < uVar1) {
    return (uint)(0xe10);
  }
  return (uint)(uVar1);
}


// Reference entry 110de640; body size 45 bytes.
#line 1 "ENTRY_110de640"

int __fastcall FUN_110de640(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x6018));
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0xb5) != '\0') {
      iVar1 = (int)(0);
    }
    return (int)(iVar1);
  }
  thunk_FUN_112af4e0("sonoscp",2,"Hi-res art translator, getting Op before the Op is set");
  return (int)(0);
}


// Reference entry 110def50; body size 22 bytes.
#line 1 "ENTRY_110def50"

undefined4 __fastcall FUN_110def50(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1994) == 0) {
    return (undefined4)(0);
  }
  uVar1 = (undefined4)(FUN_110b5990());
  return (undefined4)(uVar1);
}


// Reference entry 110e09c0; body size 34 bytes.
#line 1 "ENTRY_110e09c0"

undefined4 __thiscall Recovered_Bulk::FUN_110e09c0(undefined4 param_2,short *param_3)
{
  int *param_1 = (int *)this;
  param_1[0xb] = (int)(0);
  if (*param_3 == 0) {
    (**(code **)(*param_1 + 0x24))(param_1[10],param_1 + 8);
  }
  return (undefined4)(1);
}


// Reference entry 110e1d30; body size 51 bytes.
#line 1 "ENTRY_110e1d30"

void __fastcall FUN_110e1d30(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x188c) = 0;
  *(undefined1 **)(param_1 + 0x34) = LAB_1003ddb6;
  iVar1 = (int)(thunk_FUN_1109f7f0());
  thunk_FUN_111f4c10(iVar1 + 0xe1);
  *(uint *)(param_1 + 0x1888) = (uint)*(ushort *)(param_1 + 0x169a);
  return;
}


// Reference entry 110e20d0; body size 37 bytes.
#line 1 "ENTRY_110e20d0"

void __thiscall Recovered_Bulk::FUN_110e20d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)(param_1 + 0x188c));
    for (iVar1 = (int)(0x40); iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(*param_2);
      param_2 = (undefined4 *)(param_2 + 1);
      puVar2 = (undefined4 *)(puVar2 + 1);
    }
    *(undefined1 *)(param_1 + 0x198b) = 0;
  }
  return;
}


// Reference entry 110e28d0; body size 24 bytes.
#line 1 "ENTRY_110e28d0"

undefined4 __fastcall FUN_110e28d0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x198c) != 0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(*(int *)(*(int *)(param_1 + 0x198c) + 8) + 4))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 110e2c60; body size 43 bytes.
#line 1 "ENTRY_110e2c60"

void __fastcall FUN_110e2c60(int param_1)

{
  if (*(char *)(param_1 + 0x1964) == '\0') {
    *(undefined1 *)(param_1 + 0x1964) = 1;
    thunk_FUN_110828b0();
    thunk_FUN_110944c0();
    return;
  }
  return;
}


// Reference entry 110e3660; body size 38 bytes.
#line 1 "ENTRY_110e3660"

void __fastcall FUN_110e3660(int param_1)

{
  thunk_FUN_110b3620(-(uint)(param_1 != 0) & param_1 + 0x1cU,param_1 + 0x24,param_1 + 0x20b6,0,1);
  return;
}


// Reference entry 110e70a0; body size 56 bytes.
#line 1 "ENTRY_110e70a0"

void __fastcall FUN_110e70a0(int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x5c) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x5c));
  }
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x60) != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 0x60));
  }
  thunk_FUN_110b3620(-(uint)(param_1 != 0) & param_1 + 0x1cU,puVar2,puVar1,0,0);
  return;
}


// Reference entry 110e7d10; body size 45 bytes.
#line 1 "ENTRY_110e7d10"

undefined1 FUN_110e7d10(char param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_1106d6f0());
  if ((cVar1 == '\0') && (cVar1 = thunk_FUN_1106f140(), cVar1 == '\0')) {
    return (undefined1)(0);
  }
  if (param_1 != '\0') {
    return (undefined1)(0);
  }
  return (undefined1)(1);
}


// Reference entry 110e9120; body size 44 bytes.
#line 1 "ENTRY_110e9120"

void __fastcall FUN_110e9120(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RWrapperBrowseOp);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_RWrapperBrowseOp);
  if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[4])(1);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCPBrowseOperation);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_RCPBrowseOperationCB);
  return;
}


// Reference entry 110e9160; body size 52 bytes.
#line 1 "ENTRY_110e9160"

void __fastcall FUN_110e9160(undefined4 *param_1)

{
  thunk_FUN_11202570();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RWrapperBrowseOp);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_RWrapperBrowseOp);
  if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[4])(1);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCPBrowseOperation);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_RCPBrowseOperationCB);
  return;
}


// Reference entry 110e9320; body size 52 bytes.
#line 1 "ENTRY_110e9320"

void __fastcall FUN_110e9320(undefined4 *param_1)

{
  thunk_FUN_111d3d00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RWrapperBrowseOp);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_RWrapperBrowseOp);
  if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[4])(1);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCPBrowseOperation);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_RCPBrowseOperationCB);
  return;
}


// Reference entry 110e9370; body size 60 bytes.
#line 1 "ENTRY_110e9370"

void __fastcall FUN_110e9370(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjRadioTimeCP);
  if ((undefined4 *)param_1[0x31] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x31])(1);
    param_1[0x31] = (undefined4)(0);
  }
  param_1[0x2b] = (undefined4)((uint)&ghidra_vftable_RRadioTimeContentProvider);
  thunk_FUN_111feb50();
  thunk_FUN_11167180();
  return;
}


// Reference entry 110ea940; body size 50 bytes.
#line 1 "ENTRY_110ea940"

void __fastcall FUN_110ea940(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(0xfe);
  thunk_FUN_110c2c60(0xfe);
  iVar1 = (int)(thunk_FUN_110c20d0(uVar2));
  if (iVar1 == 0) {
    return;
  }
  (**(code **)(*param_1 + 0xe4))();
                    
                    
  (**(code **)(*(int *)param_1[0x31] + 0x40))();
  return;
}


// Reference entry 110ec740; body size 48 bytes.
#line 1 "ENTRY_110ec740"

void __fastcall FUN_110ec740(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(0xfe);
  thunk_FUN_110c2c60(0xfe);
  iVar1 = (int)(thunk_FUN_110c20d0(uVar2));
  if (iVar1 == 0) {
    return;
  }
  (**(code **)(*param_1 + 0xe4))();
                    
                    
  (**(code **)(*(int *)param_1[0x31] + 0x78))();
  return;
}


// Reference entry 110ec780; body size 18 bytes.
#line 1 "ENTRY_110ec780"

undefined4 __fastcall FUN_110ec780(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x10) + 4))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 110ec7a0; body size 19 bytes.
#line 1 "ENTRY_110ec7a0"

int __fastcall FUN_110ec7a0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x10) + 4))());
  return (int)(iVar1 + *(int *)(param_1 + 0x1710));
}


// Reference entry 110ecc20; body size 50 bytes.
#line 1 "ENTRY_110ecc20"

undefined4 __fastcall FUN_110ecc20(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(0xfe);
  thunk_FUN_110c2c60(0xfe);
  iVar1 = (int)(thunk_FUN_110c20d0(uVar2));
  if (iVar1 == 0) {
    return (undefined4)(0);
  }
  (**(code **)(*param_1 + 0xe4))();
  return (undefined4)(*(undefined4 *)(param_1[0x31] + 0x1994));
}


// Reference entry 110ecda0; body size 18 bytes.
#line 1 "ENTRY_110ecda0"

undefined4 __fastcall FUN_110ecda0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x10) + 8))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 110ecdc0; body size 19 bytes.
#line 1 "ENTRY_110ecdc0"

int __fastcall FUN_110ecdc0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x10) + 8))());
  return (int)(iVar1 + *(int *)(param_1 + 0x170c));
}


// Reference entry 110ecfe0; body size 63 bytes.
#line 1 "ENTRY_110ecfe0"

undefined4 FUN_110ecfe0(char *param_1)

{
  int iVar1;
  
  iVar1 = (int)(strncmp(param_1,"R:0/",4));
  if (iVar1 == 0) {
    return (undefined4)(1);
  }
  if ((*param_1 == 'H') && (iVar1 = strncmp(param_1 + 1,"R:0/",4), iVar1 == 0)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 110ed2d0; body size 60 bytes.
#line 1 "ENTRY_110ed2d0"

void __thiscall Recovered_Bulk::FUN_110ed2d0(undefined1 *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(0xfe);
  thunk_FUN_110c2c60(0xfe);
  iVar1 = (int)(thunk_FUN_110c20d0(uVar2));
  if (iVar1 == 0) {
    *param_2 = (undefined1)(0);
    return;
  }
  (**(code **)(*param_1 + 0xe4))();
                    
                    
  (**(code **)(*(int *)param_1[0x31] + 0x8c))();
  return;
}


// Reference entry 110ed320; body size 21 bytes.
#line 1 "ENTRY_110ed320"

void __fastcall FUN_110ed320(int param_1)

{
  int iStack00000004;
  
  if (*(int **)(param_1 + 4) != (int *)0x0) {
                    
                    
    iStack00000004 = (int)(param_1);
    (**(code **)(**(int **)(param_1 + 4) + 4))();
    return;
  }
  return;
}


// Reference entry 110ed980; body size 17 bytes.
#line 1 "ENTRY_110ed980"

void __stdcall FUN_110ed980(undefined1 *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (undefined1)(0);
  }
  return;
}


// Reference entry 110edc00; body size 26 bytes.
#line 1 "ENTRY_110edc00"

void __thiscall Recovered_Bulk::FUN_110edc00(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 4) = param_2;
                    
                    
  (**(code **)(**(int **)(param_1 + 0x10) + 0x10))();
  return;
}


// Reference entry 110ee040; body size 33 bytes.
#line 1 "ENTRY_110ee040"

void __thiscall Recovered_Bulk::FUN_110ee040(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_110ee070(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 110ee0d0; body size 60 bytes.
#line 1 "ENTRY_110ee0d0"

int __thiscall Recovered_Bulk::FUN_110ee0d0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_110ee120(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (cVar1 = thunk_FUN_111a0940(local_4 + 0x10), cVar1 == '\0')) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 110ee540; body size 48 bytes.
#line 1 "ENTRY_110ee540"

undefined4 * __fastcall FUN_110ee540(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 110f0460; body size 28 bytes.
#line 1 "ENTRY_110f0460"

void __fastcall FUN_110f0460(int *param_1)

{
  thunk_FUN_110ee070(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 110f0490; body size 38 bytes.
#line 1 "ENTRY_110f0490"

void __fastcall FUN_110f0490(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_10bfb550();
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x18);
  }
  return;
}


// Reference entry 110f04e0; body size 28 bytes.
#line 1 "ENTRY_110f04e0"

void __fastcall FUN_110f04e0(int *param_1)

{
  thunk_FUN_110ee070(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 110f1790; body size 59 bytes.
#line 1 "ENTRY_110f1790"

void __thiscall Recovered_Bulk::FUN_110f1790(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  return;
}


// Reference entry 110f24b0; body size 43 bytes.
#line 1 "ENTRY_110f24b0"

void __fastcall FUN_110f24b0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 110f2af0; body size 59 bytes.
#line 1 "ENTRY_110f2af0"

void __thiscall Recovered_Bulk::FUN_110f2af0(char *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    thunk_FUN_110f3120();
  }
  pcVar2 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  thunk_FUN_1138fd50(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38),param_2,
                     (int)pcVar2 - (int)(param_2 + 1),0);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  return;
}


// Reference entry 110f2b40; body size 59 bytes.
#line 1 "ENTRY_110f2b40"

void __thiscall Recovered_Bulk::FUN_110f2b40(char *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    thunk_FUN_110f3120();
  }
  pcVar2 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  thunk_FUN_1138fd50(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38),param_2,
                     (int)pcVar2 - (int)(param_2 + 1),0);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  return;
}


// Reference entry 110f53b0; body size 29 bytes.
#line 1 "ENTRY_110f53b0"

undefined4 FUN_110f53b0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return (undefined4)(1);
  case 1:
  case 2:
  case 3:
    return (undefined4)(0);
  default:
    return (undefined4)(0xffffffff);
  }
}


// Reference entry 110f6650; body size 52 bytes.
#line 1 "ENTRY_110f6650"

void __fastcall FUN_110f6650(int param_1)

{
  if (*(code **)(param_1 + 0x24) != (code *)0x0) {
                    
                    
    (**(code **)(param_1 + 0x24))();
    return;
  }
  if (*(HANDLE *)(param_1 + 0x1c) != (HANDLE)0xffffffff) {
    SetEvent(*(HANDLE *)(param_1 + 0x1c));
  }
  if (*(HWND *)(param_1 + 0x20) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0x20),0x464,0,param_1);
  }
  return;
}


// Reference entry 110f66a0; body size 45 bytes.
#line 1 "ENTRY_110f66a0"

undefined4 * __thiscall Recovered_Bulk::FUN_110f66a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(0x80);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(param_1 + 3);
  thunk_FUN_110f8530(param_2,0);
  return (undefined4 *)(param_1);
}


// Reference entry 110f6940; body size 33 bytes.
#line 1 "ENTRY_110f6940"

void __fastcall FUN_110f6940(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RFlashPlayerLastChangeCallback);
  if (param_1[1] != 0) {
    thunk_FUN_111a7630(param_1[1]);
  }
  thunk_FUN_111f77e0();
  return;
}


// Reference entry 110f6970; body size 33 bytes.
#line 1 "ENTRY_110f6970"

void __fastcall FUN_110f6970(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RFlashPlayerMediaServerCallback);
  if (param_1[1] != 0) {
    thunk_FUN_111a7630(param_1[1]);
  }
  thunk_FUN_111f7800();
  return;
}


// Reference entry 110f69a0; body size 33 bytes.
#line 1 "ENTRY_110f69a0"

void __fastcall FUN_110f69a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RFlashPlayerNotifyBodyParserCallback);
  if (param_1[1] != 0) {
    thunk_FUN_111a7630(param_1[1]);
  }
  thunk_FUN_111f7860();
  return;
}


// Reference entry 110f69d0; body size 21 bytes.
#line 1 "ENTRY_110f69d0"

void __fastcall FUN_110f69d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RFlashPlayerZoneGroupStateCallback);
  if (param_1[1] != 0) {
    thunk_FUN_111a7630(param_1[1]);
  }
  return;
}


// Reference entry 110f6ac0; body size 54 bytes.
#line 1 "ENTRY_110f6ac0"

int __thiscall Recovered_Bulk::FUN_110f6ac0(int param_2)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    thunk_FUN_110f8530(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4));
  }
  iVar2 = (int)(0x7c);
  puVar1 = (undefined1 *)((undefined1 *)(param_1 + 0x10));
  do {
    *puVar1 = (undefined1)(puVar1[param_2 - param_1]);
    iVar2 = (int)(iVar2 + -1);
    puVar1 = (undefined1 *)(puVar1 + 1);
  } while (iVar2 != 0);
  return (int)(param_1);
}


// Reference entry 110f6c10; body size 56 bytes.
#line 1 "ENTRY_110f6c10"

undefined4 * __thiscall Recovered_Bulk::FUN_110f6c10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RFlashPlayerLastChangeCallback);
  if (param_1[1] != 0) {
    thunk_FUN_111a7630(param_1[1]);
  }
  thunk_FUN_111f77e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110f6c60; body size 56 bytes.
#line 1 "ENTRY_110f6c60"

undefined4 * __thiscall Recovered_Bulk::FUN_110f6c60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RFlashPlayerMediaServerCallback);
  if (param_1[1] != 0) {
    thunk_FUN_111a7630(param_1[1]);
  }
  thunk_FUN_111f7800();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110f6cb0; body size 56 bytes.
#line 1 "ENTRY_110f6cb0"

undefined4 * __thiscall Recovered_Bulk::FUN_110f6cb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RFlashPlayerNotifyBodyParserCallback);
  if (param_1[1] != 0) {
    thunk_FUN_111a7630(param_1[1]);
  }
  thunk_FUN_111f7860();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110f6d00; body size 49 bytes.
#line 1 "ENTRY_110f6d00"

undefined4 * __thiscall Recovered_Bulk::FUN_110f6d00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RFlashPlayerZoneGroupStateCallback);
  if (param_1[1] != 0) {
    thunk_FUN_111a7630(param_1[1]);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4 *)(param_1);
}

